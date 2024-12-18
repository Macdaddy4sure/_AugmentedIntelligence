/*
    Copyright(C) 2024 Tyler Crockett | Macdaddy4sure.com

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissionsand
    limitations under the License.
*/

/*
   Copyright Tesseract-OCR 2024
   
   https://github.com/tesseract-ocr/tesseract/blob/master/LICENSE

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

   http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

#include "AugmentedIntelligence.hpp"
#include "Reading.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Learning.hpp"
#include "Reference.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"
#include "Vision.hpp"

using namespace std;
using namespace tesseract;
using namespace cv;

struct word
{
    string word_id;
    string word;
    string pos;
    string glosses1;
    string tags;
};

// The following function will use OpenCV to identify text strings through camera 1, camera 2 or both
string _Reading::TextIdentification(string image)
{
    TessBaseAPI tess;
    string output;
    string current_time;
    ostringstream oss;

    auto now = std::chrono::system_clock::now();
    // Convert to a time_t object, representing system time in seconds since the epoch
    std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
    // Convert to local time
    std::tm* now_tm = std::localtime(&now_time_t);

    oss << std::put_time(now_tm, "%d-%m-%Y_%H-%M-%S");
    current_time = oss.str();

    Mat large = imread(image);
    Mat rgb;

    // downsample and use it for processing
    pyrDown(large, rgb);
    pyrDown(rgb, rgb);
    Mat small;
    cvtColor(rgb, small, CV_BGR2GRAY);

    // morphological gradient
    Mat grad;
    Mat morphKernel = getStructuringElement(MORPH_ELLIPSE, Size(3, 3));
    morphologyEx(small, grad, MORPH_GRADIENT, morphKernel);

    // binarize
    Mat bw;
    threshold(grad, bw, 0.0, 255.0, THRESH_BINARY | THRESH_OTSU);

    // connect horizontally oriented regions
    Mat connected;
    morphKernel = getStructuringElement(MORPH_RECT, Size(9, 1));
    morphologyEx(bw, connected, MORPH_CLOSE, morphKernel);

    // find contours
    Mat mask = Mat::zeros(bw.size(), CV_8UC1);
    vector<vector<Point> > contours;
    vector<Vec4i> hierarchy;
    findContours(connected, contours, hierarchy, CV_RETR_CCOMP, CV_CHAIN_APPROX_SIMPLE, Point(0, 0));

    // filter contours
    for (int idx = 0; idx >= 0; idx = hierarchy[idx][0])
    {
        Rect rect = boundingRect(contours[idx]);
        Mat maskROI(mask, rect);
        maskROI = Scalar(0, 0, 0);

        // fill the contour
        drawContours(mask, contours, idx, Scalar(255, 255, 255), CV_FILLED);

        RotatedRect rrect = minAreaRect(contours[idx]);
        double r = (double)countNonZero(maskROI) / (rrect.size.width * rrect.size.height);

        Scalar color;
        int thickness = 1;

        // assume at lwest 25% of the area is filled if it contains text
        if (r > 0.25 && (rrect.size.height > 8 && rrect.size.width > 8))
        {
            thickness = 2;
            color = Scalar(0, 255, 0);
        }
        else
        {
            thickness = 1;
            color = Scalar(0, 0, 255);
        }

        Point2f pts[100];
        rrect.points(pts);

        tess.SetImage((uchar*)rgb.data, rgb.size().width, rgb.size().height, rgb.channels(), rgb.step1());
        tess.Recognize(0);
        output = tess.GetUTF8Text();
        _Reading::MySQLReadingRAW(output, image);

        for (int x = 0; x < 1000; x++)
        {
            if (stm_reading_text[x][0] == "")
            {
                lock_guard<mutex> lock(mtx_stm_reading_text[x][0]);
                lock_guard<mutex> lock2(mtx_stm_reading_text[x][1]);
                stm_reading_text[x][0] = output;
                stm_reading_text[x][1] = current_time;
            }
            if (!stm_reading_text[x][0].empty() && x == 999)
            {
                for (int y = 0; y < 1000; y++)
                {
                    lock_guard<mutex> lock(mtx_stm_reading_text[y][0]);
                    lock_guard<mutex> lock2(mtx_stm_reading_text[y][1]);
                    lock_guard<mutex> lock3(mtx_stm_reading_text[y + 1][0]);
                    lock_guard<mutex> lock4(mtx_stm_reading_text[y + 1][1]);
                    stm_reading_text[y][0] = stm_reading_text[y + 1][0];
                    stm_reading_text[y][1] = stm_reading_text[y + 1][1];
                }
                lock_guard<mutex> lock(mtx_stm_reading_text[999][0]);
                lock_guard<mutex> lock2(mtx_stm_reading_text[999][1]);
                lock_guard<mutex> lock3(mtx_stm_reading_text[999][0]);
                lock_guard<mutex> lock4(mtx_stm_reading_text[999][1]);
                stm_reading_text[999][0] = output;
                stm_reading_text[999][1] = current_time;
            }
        }
    }

    return output;
}

// This function will be executed when the current action is for reading
// This will be a generalized function for reading, other analysis methods can be used to replace or work in addition to this method
//      TODO: Get keywords to call this function
//      Get vision data to call this function
// Use OpenCV to scan for text
string _Reading::Reading(Mat img)
{
    string current_time;
    ostringstream oss;

    // Convert image to grayscale
    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    // Initialize Tesseract API
    tesseract::TessBaseAPI ocr;
    ocr.Init(nullptr, "eng", tesseract::OEM_LSTM_ONLY); // Initialize with English language
    ocr.SetPageSegMode(tesseract::PSM_AUTO);

    // Set image data to Tesseract
    ocr.SetImage(gray.data, gray.cols, gray.rows, 1, gray.step);

    // Run OCR
    std::string text = ocr.GetUTF8Text();

    auto now = std::chrono::system_clock::now();
    // Convert to a time_t object, representing system time in seconds since the epoch
    std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
    // Convert to local time
    std::tm* now_tm = std::localtime(&now_time_t);

    oss << std::put_time(now_tm, "%d-%m-%Y_%H-%M-%S");
    current_time = oss.str();

    std::cout << "Detected Text: " << text << std::endl;

    for (int x = 0; x < 1000; x++)
    {
        if (stm_reading_text[x][0] == "")
        {
            lock_guard<mutex> lock(mtx_stm_reading_text[x][0]);
            lock_guard<mutex> lock2(mtx_stm_reading_text[x][1]);
            stm_reading_text[x][0] = text;
            stm_reading_text[x][1] = current_time;
        }
        if (!stm_reading_text[x][0].empty() && x == 999)
        {
            for (int y = 0; y < 1000; y++)
            {
                if (y != 999)
                {
                    lock_guard<mutex> lock(mtx_stm_reading_text[y][0]);
                    lock_guard<mutex> lock2(mtx_stm_reading_text[y][1]);
                    lock_guard<mutex> lock3(mtx_stm_reading_text[y + 1][0]);
                    lock_guard<mutex> lock4(mtx_stm_reading_text[y + 1][1]);
                    stm_reading_text[y][0] = stm_reading_text[y + 1][0];
                    stm_reading_text[y][1] = stm_reading_text[y + 1][1];
                }
            }
            lock_guard<mutex> lock(mtx_stm_reading_text[999][0]);
            lock_guard<mutex> lock2(mtx_stm_reading_text[999][1]);
            lock_guard<mutex> lock3(mtx_stm_reading_text[999][0]);
            lock_guard<mutex> lock4(mtx_stm_reading_text[999][1]);
            stm_reading_text[999][0] = text;
            stm_reading_text[999][1] = current_time;
        }
    }

    // Clean up
    ocr.End();

    return text;
}

string _Reading::Reading(string filelocation)
{
    string current_time;
    ostringstream oss;
    Mat img = _Utilities::String2Mat(filelocation);

    auto now = std::chrono::system_clock::now();
    // Convert to a time_t object, representing system time in seconds since the epoch
    std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
    // Convert to local time
    std::tm* now_tm = std::localtime(&now_time_t);

    oss << std::put_time(now_tm, "%d-%m-%Y_%H-%M-%S");
    current_time = oss.str();

    // Convert image to grayscale
    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    // Initialize Tesseract API
    tesseract::TessBaseAPI ocr;
    ocr.Init(nullptr, "eng", tesseract::OEM_LSTM_ONLY); // Initialize with English language
    ocr.SetPageSegMode(tesseract::PSM_AUTO);

    // Set image data to Tesseract
    ocr.SetImage(gray.data, gray.cols, gray.rows, 1, gray.step);

    // Run OCR
    std::string text = ocr.GetUTF8Text();
    std::cout << "Detected Text: " << text << std::endl;

    _Reading::MySQLReadingRAW(text, filelocation);

    for (int x = 0; x < 1000; x++)
    {
        if (stm_reading_text[x][0] == "")
        {
            lock_guard<mutex> lock(mtx_stm_reading_text[x][0]);
            lock_guard<mutex> lock1(mtx_stm_reading_text[x][1]);
            stm_reading_text[x][0] = text;
            stm_reading_text[x][1] = current_time;
        }
        if (stm_reading_text[x][0] != "" && x == 999)
        {
            for (int y = 0; y < 1000; y++)
            {
                if (y != 999)
                {
                    lock_guard<mutex> lock(mtx_stm_reading_text[y][0]);
                    lock_guard<mutex> lock1(mtx_stm_reading_text[y][1]);
                    lock_guard<mutex> lock2(mtx_stm_reading_text[y + 1][0]);
                    lock_guard<mutex> lock3(mtx_stm_reading_text[y + 1][1]);
                    stm_reading_text[y][0] = stm_reading_text[y + 1][0];
                    stm_reading_text[y][1] = stm_reading_text[y + 1][1];
                }
            }
            lock_guard<mutex> lock(mtx_stm_reading_text[x][0]);
            lock_guard<mutex> lock1(mtx_stm_reading_text[x][1]);
            stm_reading_text[999][0] = text;
            stm_reading_text[999][1] = current_time;
        }
    }

    // Clean up
    ocr.End();
    return text;
}

string _Reading::Reading2(Mat img)
{
    // Convert image to grayscale
    cv::Mat gray;
    cv::cvtColor(img, gray, cv::COLOR_BGR2GRAY);

    string current_time;
    ostringstream oss;

    auto now = std::chrono::system_clock::now();
    // Convert to a time_t object, representing system time in seconds since the epoch
    std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
    // Convert to local time
    std::tm* now_tm = std::localtime(&now_time_t);

    oss << std::put_time(now_tm, "%d-%m-%Y_%H-%M-%S");
    current_time = oss.str();

    // Initialize Tesseract API
    tesseract::TessBaseAPI ocr;
    ocr.Init(nullptr, "eng", tesseract::OEM_LSTM_ONLY); // Initialize with English language
    ocr.SetPageSegMode(tesseract::PSM_AUTO);

    // Set image data to Tesseract
    ocr.SetImage(gray.data, gray.cols, gray.rows, 1, gray.step);

    // Run OCR
    std::string output = ocr.GetUTF8Text();
    std::cout << "Detected Text: " << output << std::endl;

    _Reading::MySQLReadingRAW(output, "NULL");

    for (int x = 0; x < 1000; x++)
    {
        if (stm_reading_text[x][0] == "")
        {
            lock_guard<mutex> lock(mtx_stm_reading_text[x][0]);
            lock_guard<mutex> lock1(mtx_stm_reading_text[x][1]);
            stm_reading_text[x][0] = output;
            stm_reading_text[x][1] = current_time;
        }
        if (stm_reading_text[x][0] != "" && x == 999)
        {
            for (int y = 0; y < 1000; y++)
            {
                if (y != 999)
                {
                    lock_guard<mutex> lock(mtx_stm_reading_text[y][0]);
                    lock_guard<mutex> lock1(mtx_stm_reading_text[y][1]);
                    lock_guard<mutex> lock2(mtx_stm_reading_text[y + 1][0]);
                    lock_guard<mutex> lock3(mtx_stm_reading_text[y + 1][1]);
                    stm_reading_text[y][0] = stm_reading_text[y + 1][0];
                    stm_reading_text[y][1] = stm_reading_text[y + 1][1];
                }
            }
            lock_guard<mutex> lock(mtx_stm_reading_text[x][0]);
            lock_guard<mutex> lock1(mtx_stm_reading_text[x][1]);
            stm_reading_text[999][0] = output;
            stm_reading_text[999][1] = current_time;
        }
    }

    // Clean up
    ocr.End();
    return output;
}

string _Reading::OllamaReading(string filelocation)
{
    string current_time;
    ostringstream oss;

    auto now = std::chrono::system_clock::now();
    // Convert to a time_t object, representing system time in seconds since the epoch
    std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
    // Convert to local time
    std::tm* now_tm = std::localtime(&now_time_t);

    oss << std::put_time(now_tm, "%d-%m-%Y_%H-%M-%S");
    current_time = oss.str();

    string model = "image";
    string prompt = "Read text from the attached image and return only the text:";
    string image_base64 = _Utilities::base64_encode(filelocation);
    string json = _LLM::OllamaAPI(model, prompt, image_base64);
    string response = _Parsers::LLM::LLama3Parse(json);

    _Reading::MySQLReadingRAW(response, filelocation);

    for (int x = 0; x < 1000; x++)
    {
        if (stm_reading_text[x][0] == "")
        {
            lock_guard<mutex> lock(mtx_stm_reading_text[x][0]);
            lock_guard<mutex> lock1(mtx_stm_reading_text[x][1]);
            stm_reading_text[x][0] = response;
            stm_reading_text[x][1] = current_time;
        }
        if (stm_reading_text[x][0] != "" && x == 999)
        {
            for (int y = 0; y < 1000; y++)
            {
                if (y != 999)
                {
                    lock_guard<mutex> lock(mtx_stm_reading_text[y][0]);
                    lock_guard<mutex> lock1(mtx_stm_reading_text[y][1]);
                    lock_guard<mutex> lock2(mtx_stm_reading_text[y + 1][0]);
                    lock_guard<mutex> lock3(mtx_stm_reading_text[y + 1][1]);
                    stm_reading_text[y][0] = stm_reading_text[y + 1][0];
                    stm_reading_text[y][1] = stm_reading_text[y + 1][1];
                }
            }
            lock_guard<mutex> lock(mtx_stm_reading_text[x][0]);
            lock_guard<mutex> lock1(mtx_stm_reading_text[x][1]);
            stm_reading_text[999][0] = response;
            stm_reading_text[999][1] = current_time;
        }
    }

    return response;
}

void _Reading::MySQLReadingRAW(string reading, string image_location)
{
    MYSQL* conn;
    string table_name = "ai_reading";
    string temp_path;
    string image_hash;
    string object_detection_image_hash;
    string current_date;
    ostringstream oss;
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_vision_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        if (image_location != "NULL")
            image_hash = _Utilities::getHash(image_location);
        else
            image_hash = "NULL";

        auto entry = time(nullptr);
        auto tm1 = *localtime(&entry);

        oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
        current_date = oss.str();

        sql1 = "INSERT INTO `";
        sql1 += table_name;
        // Classes cannot be saved at the moment, Tensorflow bug
        sql1 += "`(reading, image_location, image_hash, current_date) VALUES(\"";
        sql1 += reading.c_str();
        sql1 += "\", \"";
        sql1 += image_location.c_str();
        sql1 += "\", \"";
        sql1 += image_hash.c_str();
        sql1 += "\", \"";
        sql1 += current_date.c_str();
        sql1 += "\");";
        //cout << "sq1l: " << sql1 << endl;
        mysql_query(conn, sql1.c_str());
    }
}

void _Reading::TestIdentificationOpenCV()
{
    
}

// This funciton will take a screenshot from what the user is looking at and will use tesseract to read what the user is looking at
void _Reading::ReadingScreenshot(string filepath)
{
    
}

// This function will get the current book and the page number and synchronize reading with text from the database
// This function will also create images for user while reading
void _Reading::BookReadingSync(string search)
{
    // 1. Open the books database
    // 2. Search for the book
    // 3. Read and syncronize thoughts with reading
    // 4. Relate meaning with learned concepts
    // 5. Draw imaginative images
}

// This function will take sentences from speech to text and will analyze recognized words for structure and for word properties and designations
//  1. Organize the words into sentences
//  2. Load all definitions from Wiktionary for the word
//  3. Determine definition based on other recognized words in the sentence
//  4. Subject to predicate
//  5. Word designations, nouns, pronouns, verbs, transitive verbs, adjectives, adverbs, prepositions, conjunctions, interjections, direct object, prepositional phrase, articles
void _Reading::SentenceAnalysis(string raw_recognition, string imagePath)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* res;
    string sql1;
    ostringstream query1;
    string mysql_database = "dictionary";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string table_name = "entries2";
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string words[1000];
    string glosses;
    string pos;
    string sound;
    int spaces = 0;
    word word1;
    bool word_found = false;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        // OBJECTIVE: Load the glosses into memory
        // 1. Parse the input text
        // 2. Get glosses from database
        for (int x = 0; x < raw_recognition.length(); x++)
        {
            if (isspace(raw_recognition[x]))
            {
                spaces++;
            }
            else
            {
                words[spaces] += raw_recognition[x];
            }
        }

        // Get Information from the database about words
        for (int x = 0; words[x] != ""; x++)
        {
            query1 << "SELECT * FROM " << table_name;
            sql1 = query1.str();
            mysql_query(conn, sql1.c_str());
            res = mysql_store_result(conn);

            while (row = mysql_fetch_row(res))
            {
                if (row[1] == words[x])
                {
                    word1.word_id = row[0];
                    word1.word = row[1];
                    word1.pos = row[2];
                    word1.glosses1 = row[3];
                    word1.tags = row[5];
                    word_found = true;
                }
            }

            // If the search found no matching word, send it for learning
            if (!word_found)
            {
                _Learning::ConceptualLearningWords(words[x], glosses, pos, imagePath, sound);
            }
        }
    }
}

// This function is to check for an equation from tesseract input
void _Reading::CheckForEquation(string tesseract_input)
{

}

// Check if the word exists in the user's dictionary
void _Reading::DictionaryChecking(string word)
{

}