/*
    Copyright(C) 2022 Tyler Crockett | Macdaddy4sure.com

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
   Copyright Tesseract-OCR 2022
   
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

#include "AugmentedIntelligence.h"
#include "Reading.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "NLP.h"
#include "NLU.h"
#include "Learning.h"
#include "Reference.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"
#include "Vision.h"

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
void _Reading::TextIdentification(string image)
{
    TessBaseAPI tess;
    string output;
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

        for (int i = 0; i < 100; i++)
        {
            tess.SetImage((uchar*)rgb.data, rgb.size().width, rgb.size().height, rgb.channels(), rgb.step1());
            tess.Recognize(0);
            output = tess.GetUTF8Text();

            //stm_reading_text[1000][i][0] = output;
            stm_reading_text[1000][i][1] = pts[i].x;
            stm_reading_text[1000][i][2] = pts[i].y;
            stm_reading_text[1000][i][3] = pts[(i + 1) % 4].x;
            stm_reading_text[1000][i][4] = pts[(i + 1) % 4].y;

            // Shift short term memory down
        }
    }
}

// This function will be executed when the current action is for reading
// This will be a generalized function for reading, other analysis methods can be used to replace or work in addition to this method
//      TODO: Get keywords to call this function
//      Get vision data to call this function
// Use OpenCV to scan for text
void _Reading::Reading()
{
    
}

// This function will crop the middle of the camera scanning for a period from the current word to the period. The function will check every few seconds
// Reading ahead into memory?
void _Utilities::Sentence2Memory()
{

}

void _Reading::TestIdentificationOpenCV()
{
    //float confThreshold = parser.get<float>("thr");
    //float nmsThreshold = parser.get<float>("nms");
    //int width = parser.get<int>("width");
    //int height = parser.get<int>("height");
    //int imreadRGB = parser.get<int>("RGBInput");
    //String detModelPath = parser.get<String>("detModel");
    //String recModelPath = parser.get<String>("recModel");
    //String vocPath = parser.get<String>("vocabularyPath");

    //if (!parser.check())
    //{
    //    parser.printErrors();
    //    return 1;
    //}

    //// Load networks.
    //CV_Assert(!detModelPath.empty() && !recModelPath.empty());
    //TextDetectionModel_EAST detector(detModelPath);
    //detector.setConfidenceThreshold(confThreshold)
    //    .setNMSThreshold(nmsThreshold);

    //TextRecognitionModel recognizer(recModelPath);

    //// Load vocabulary
    //CV_Assert(!vocPath.empty());
    //std::ifstream vocFile;
    //vocFile.open(samples::findFile(vocPath));
    //CV_Assert(vocFile.is_open());
    //String vocLine;
    //std::vector<String> vocabulary;
    //while (std::getline(vocFile, vocLine)) {
    //    vocabulary.push_back(vocLine);
    //}
    //recognizer.setVocabulary(vocabulary);
    //recognizer.setDecodeType("CTC-greedy");

    //// Parameters for Recognition
    //double recScale = 1.0 / 127.5;
    //Scalar recMean = Scalar(127.5, 127.5, 127.5);
    //Size recInputSize = Size(100, 32);
    //recognizer.setInputParams(recScale, recInputSize, recMean);

    //// Parameters for Detection
    //double detScale = 1.0;
    //Size detInputSize = Size(width, height);
    //Scalar detMean = Scalar(123.68, 116.78, 103.94);
    //bool swapRB = true;
    //detector.setInputParams(detScale, detInputSize, detMean, swapRB);

    //// Open a video file or an image file or a camera stream.
    //VideoCapture cap;
    //bool openSuccess = parser.has("input") ? cap.open(parser.get<String>("input")) : cap.open(0);
    //CV_Assert(openSuccess);

    //static const std::string kWinName = "EAST: An Efficient and Accurate Scene Text Detector";

    //Mat frame;
    //while (waitKey(1) < 0)
    //{
    //    cap >> frame;
    //    if (frame.empty())
    //    {
    //        waitKey();
    //        break;
    //    }

    //    std::cout << frame.size << std::endl;

    //    // Detection
    //    std::vector< std::vector<Point> > detResults;
    //    detector.detect(frame, detResults);

    //    if (detResults.size() > 0) {
    //        // Text Recognition
    //        Mat recInput;
    //        if (!imreadRGB) {
    //            cvtColor(frame, recInput, cv::COLOR_BGR2GRAY);
    //        }
    //        else {
    //            recInput = frame;
    //        }
    //        std::vector< std::vector<Point> > contours;
    //        for (uint i = 0; i < detResults.size(); i++)
    //        {
    //            const auto& quadrangle = detResults[i];
    //            CV_CheckEQ(quadrangle.size(), (size_t)4, "");

    //            contours.emplace_back(quadrangle);

    //            std::vector<Point2f> quadrangle_2f;
    //            for (int j = 0; j < 4; j++)
    //                quadrangle_2f.emplace_back(quadrangle[j]);

    //            Mat cropped;
    //            _Utilities::fourPointsTransform(recInput, &quadrangle_2f[0], cropped);

    //            std::string recognitionResult = recognizer.recognize(cropped);
    //            std::cout << i << ": '" << recognitionResult << "'" << std::endl;

    //            putText(frame, recognitionResult, quadrangle[3], FONT_HERSHEY_SIMPLEX, 1.5, Scalar(0, 0, 255), 2);
    //        }
    //        polylines(frame, contours, true, Scalar(0, 255, 0), 2);
    //    }
    //    imshow(kWinName, frame);
    //}
}

// This funciton will take a screenshot from what the user is looking at and will use tesseract to read what the user is looking at
void _Reading::ReadingScreenshot(string filepath)
{
    TessBaseAPI tess;
    Mat large = imread(filepath);
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

        Point2f pts[4];
        rrect.points(pts);

        for (int i = 0; i < 4; i++)
        {
            line(rgb, Point((int)pts[i].x, (int)pts[i].y), Point((int)pts[(i + 1) % 4].x, (int)pts[(i + 1) % 4].y), color, thickness);
            tess.SetImage((uchar*)rgb.data, rgb.size().width, rgb.size().height, rgb.channels(), rgb.step1());
            tess.Recognize(0);
            string out = tess.GetUTF8Text();
        }
    }
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
    MYSQL* conn;
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
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

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
