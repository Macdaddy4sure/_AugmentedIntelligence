/*
    Copyright(C) 2023 Tyler Crockett | Macdaddy4sure.com

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

#include "AugmentedIntelligence.h"
#include "Mathematics.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reference.h"
#include "Variables.h"
#include "Settings.h"
#include "Time.h"
#include "Utilities.h"

using namespace std;
using namespace filesystem;

// This function will update the MySQL database
void _Utilities::UpdateMySQL()
{

}

// This function will use intelligence to create a summary of what the user is reading
string _Utilities::CreateSummary(string data)
{

}

// This function will generate a random number
int _Utilities::GenerateRandomNumber(int low, int high)
{

}

// This function will take in a string array from vision and sort the array alphabetically
//  Sound command = "Sort the following array alphabetically"
string* _Utilities::StringArraySorter(string* data)
{

}

// This function finds the RGB values of wherr the camera is directly looking at
//string _AI::ColorPicker()
//{
//    Mat matSrcCopyForHSVColorDisplay, HSV_image_display;
//
//    //Make a copy of the original image
//    matSrcCopyForHSVColorDisplay = matSrc.clone();
//
//    //Convert RGB to HSV
//    cvtColor(matSrc, HSV_image_display, CV_BGR2HSV);
//
//    //To access each pixel in the images we are using this syntax:
//    //image.at(y,x)[c] where y is the row, x is the column 
//    //and c is H, S or V (0, 1 or 2)
//    Vec3b p = HSV_image_display.at<Vec3b>(50, 10); //Vec3b - Array of 3 uchar numbers
//
//    //p[0] - H, p[1] - S, p[2] - V
//    printf(text, "H=%d, S=%d, V=%d", p[0], p[1], p[2]);
//
//    //putText(matSrcCopyForHSVColorDisplay, text, Font_Position, 
//    //Font_Type, Font_Scale, Font_Colour, Font_Thickness); 
//    //Display the text
//    putText(matSrcCopyForHSVColorDisplay, text, center,
//        FONT_HERSHEY_COMPLEX_SMALL, 2, cvScalar(255, 0, 0), 1, CV_AA);
//
//    //Refresh the image
//    imshow("HSV Value", matSrcCopyForHSVColorDisplay);
//    printf("H=%d, S=%d, V=%d\n", p[0], p[1], p[2]);
//}

// The following function creates a reminder for the user
//  Sound Command = "Create a reminder"
void _Utilities::CreateReminder()
{

}

//// The following function will apply concepts relating to current action and database request
//// This function might not be needed
//void _Learning::ConceptualApplication()
//{
//    // 1. Load concepts into memory
//
//    // 2. Compare to concepts related to reality or relevant information
//}

string _Utilities::FixArticle(string article)
{
    string temp;

    for (int x = 0; x <= article.length(); x++)
    {
        if (x == 0)
        {
            temp = tolower(article[x]);
        }
        if (article[x] == ' ')
        {
            temp += "_";
        }
        else
        {
            temp += tolower(article[x]);
        }
    }

    return temp;
}

// The following function will search short term memory for male and female names from the current date into the past
void _LongTermMemory::LongTermMemoryNames()
{

}

// Purpose: Get the current time and the duration from the present into the past from the user. Use FFMpeg to encode the image sequence and return the path
string _Utilities::ImageSequenceFFMpeg(string current_date, string duration_previous)
{
    // ffmpeg -i image -%03d.png video.mp4
}

// The following function will search long term memory for male and female names
void _Utilities::CleanUpImages(string object, string fileLocation, string start_date, string current_date)
{
    string temp_path;
    string temp;
    int int_return;
    string str_file_years;
    string str_file_months;
    string str_file_days;
    string str_file_hours;
    string str_file_minutes;
    string str_file_seconds;
    string str_start_years;
    string str_start_months;
    string str_start_days;
    string str_start_hours;
    string str_start_minutes;
    string str_start_seconds;
    string str_current_years;
    string str_current_months;
    string str_current_days;
    string str_current_hours;
    string str_current_minutes;
    string str_current_seconds;
    long long file_year;
    long long file_month;
    long long file_days;
    long long file_hours;
    long long file_minutes;
    long long file_seconds;
    long long start_year;
    long long start_month;
    long long start_days;
    long long start_hours;
    long long start_minutes;
    long long start_seconds;
    long long current_years;
    long long current_months;
    long long current_days;
    long long current_hours;
    long long current_minutes;
    long long current_seconds;

    for (auto& q : directory_iterator(fileLocation.c_str()))
    {
        temp_path = q.path().string();
        
        // Parse the filename
        for (int i = temp_path.length(); i >= 0; i--)
        {
            // Remove everything after the last backslash
            if (temp_path[i] == '\\')
            {
                for (int j = i; j <= temp_path.length(); j++)
                {
                    if (temp_path[j] != '.')
                    {
                        temp += temp_path[j];
                    }
                    else
                    {
                        break;
                    }
                }
            }
        }

        int count = 0;

        // Parse the file date
        // Parse the current_date
        for (int j = 0; j <= temp.length(); j++)
        {
            // Count the number of hyphens
            if (temp[j] == '-')
            {
                count++;
            }

            if (count == 0)
            {
                for (int k = j; temp[k] != '-' || temp[k] != '_'; k++)
                {
                    str_file_days += temp[k];
                }
            }
            if (count == 1)
            {
                for (int k = j; temp[k] != '-' || temp[k] != '_'; k++)
                {
                    str_file_months += temp[k];
                }
            }
            if (count == 2)
            {
                for (int k = j; temp[k] != '-' || temp[k] != '_'; k++)
                {
                    str_file_years += temp[k];
                }
            }
            if (count == 3)
            {
                for (int k = j; temp[k] != '-' || temp[k] != '_'; k++)
                {
                    str_file_hours += temp[k];
                }
            }
            if (count == 4)
            {
                for (int k = j; temp[k] != '-' || temp[k] != '_'; k++)
                {
                    str_file_minutes += temp[k];
                }
            }
            if (count == 5)
            {
                for (int k = j; temp[k] != '-' || temp[k] != '_'; k++)
                {
                    str_file_seconds += temp[k];
                }
            }
        }

        count = 0;

        // Parse the start_date
        for (int j = 0; j <= start_date.length(); j++)
        {
            // Count the number of hyphens
            if (start_date[j] == '-')
            {
                count++;
            }

            if (count == 0)
            {
                for (int k = j; start_date[k] != '-' || start_date[k] != '_'; k++)
                {
                    str_start_days += start_date[k];
                }
            }
            if (count == 1)
            {
                for (int k = j; start_date[k] != '-' || start_date[k] != '_'; k++)
                {
                    str_start_months += start_date[k];
                }
            }
            if (count == 2)
            {
                for (int k = j; start_date[k] != '-' || start_date[k] != '_'; k++)
                {
                    str_start_years += start_date[k];
                }
            }
            if (count == 3)
            {
                for (int k = j; start_date[k] != '-' || start_date[k] != '_'; k++)
                {
                    str_start_hours += start_date[k];
                }
            }
            if (count == 4)
            {
                for (int k = j; start_date[k] != '-' || start_date[k] != '_'; k++)
                {
                    str_start_minutes += start_date[k];
                }
            }
            if (count == 5)
            {
                for (int k = j; start_date[k] != '-' || start_date[k] != '_'; k++)
                {
                    str_start_seconds += start_date[k];
                }
            }
        }

        count = 0;

        // Parse the current_date
        for (int j = 0; j <= temp.length(); j++)
        {
            // Count the number of hyphens
            if (temp[j] == '-')
            {
                count++;
            }

            if (count == 0)
            {
                for (int k = j; temp[k] != '-' || temp[k] != '_'; k++)
                {
                    str_current_days += temp[k];
                }
            }
            if (count == 1)
            {
                for (int k = j; temp[k] != '-' || temp[k] != '_'; k++)
                {
                    str_current_months += temp[k];
                }
            }
            if (count == 2)
            {
                for (int k = j; temp[k] != '-' || temp[k] != '_'; k++)
                {
                    str_current_years += temp[k];
                }
            }
            if (count == 3)
            {
                for (int k = j; temp[k] != '-' || temp[k] != '_'; k++)
                {
                    str_current_hours += temp[k];
                }
            }
            if (count == 4)
            {
                for (int k = j; temp[k] != '-' || temp[k] != '_'; k++)
                {
                    str_current_minutes += temp[k];
                }
            }
            if (count == 5)
            {
                for (int k = j; temp[k] != '-' || temp[k] != '_'; k++)
                {
                    str_current_seconds += temp[k];
                }
            }
        }

        // Convert strings to integers
        istringstream(str_file_years) >> file_year;
        istringstream(str_file_months) >> file_month;
        istringstream(str_file_days) >> file_days;
        istringstream(str_file_hours) >> file_hours;
        istringstream(str_file_minutes) >> file_minutes;
        istringstream(str_file_seconds) >> file_seconds;
        //file_year = stoi(str_file_years);
        //file_month = stoi(str_file_months);
        //file_days = stoi(str_file_days);
        //file_hours = stoi(str_file_hours);
        //file_minutes = stoi(str_file_minutes);
        //file_seconds = stoi(str_file_seconds);

        // Convert the time to seconds
        file_seconds += file_year * 31540000;

        // Count the number of days to the month and the days
        for (int x = 0; x <= file_month; x++)
        {
            file_days += _Time::GetDaysMonth(file_year, x);
        }

        // Convert days to seconds
        file_seconds += file_days * 86400;
        file_seconds += file_hours * 3600;
        file_seconds += file_minutes * 60;

        // Convert strings to integers
        istringstream(str_start_years) >> start_year;
        istringstream(str_start_months) >> start_month;
        istringstream(str_start_days) >> start_days;
        istringstream(str_start_hours) >> start_hours;
        istringstream(str_start_minutes) >> start_minutes;
        istringstream(str_start_seconds) >> start_seconds;
        /*start_year = stoi(str_start_years);
        start_month = stoi(str_start_months);
        start_days = stoi(str_start_days);
        start_hours = stoi(str_start_hours);
        start_minutes = stoi(str_start_minutes);
        start_seconds = stoi(str_start_seconds);*/

        // Convert the time to seconds
        start_seconds += start_year * 31540000;

        // Count the number of days to the month and the days
        for (int x = 0; x <= start_month; x++)
        {
            start_days += _Time::GetDaysMonth(start_year, x);
        }

        // Convert days to seconds
        start_seconds += start_days * 86400;
        start_seconds += start_hours * 3600;
        start_seconds += start_minutes * 60;

        // Convert the time to seconds
        // Convert strings to integers
        istringstream(str_current_years) >> current_years;
        istringstream(str_current_months) >> current_months;
        istringstream(str_current_days) >> current_days;
        istringstream(str_current_hours) >> current_hours;
        istringstream(str_current_minutes) >> current_minutes;
        istringstream(str_current_seconds) >> current_seconds;
        //current_years = stoi(str_current_years);
        //current_months = stoi(str_current_months);
        //current_days = stoi(str_current_days);
        //current_hours = stoi(str_current_hours);
        //current_minutes = stoi(str_current_minutes);
        //current_seconds = stoi(str_current_seconds);

        // Convert the time to seconds
        current_seconds += current_years * 31540000;

        // Count the number of days to the month and the days
        for (int x = 0; x <= current_months; x++)
        {
            current_days += _Time::GetDaysMonth(current_years, x);
        }

        // Convert days to seconds
        current_seconds += current_days * 86400;
        current_seconds += current_hours * 3600;
        current_seconds += current_minutes * 60;

        // Check if the date is less than the current date
        // Remove all files that have seconds less than or equal to the start time, greater than current_time, and files greater than the file date
        if ((start_seconds <= current_seconds) && (current_seconds <= file_seconds) && (current_seconds != file_seconds))
        {
            remove(q);
        }
    }
}

string* _Utilities::ArrayOfStringsToLowercase(string* words)
{
    string* array_temp;
    string temp;

    for (int x = 0; x <= sizeof(words); x++)
    {
        temp = words[x];

        for (int y = 0; y <= temp.length(); y++)
        {
            array_temp[x] += tolower(temp[y]);
        }
    }

    return array_temp;
}

string _Utilities::fixQuoteFederal(string input)
{
    string temp;

    for (int x = 0; x <= input.length(); x++)
    {
        if (input[x] == '&' && input[x + 1] == 'q' && input[x + 2] == 'u' && input[x + 3] == 'o' && input[x + 4] == 't' && input[x + 5] == ';')
        {
            temp += "\"";
            x += 6;
        }
        else
        {
            temp += input[x];
        }
    }

    return temp;
}

string** _Utilities::Create2DStringArray(unsigned int height, unsigned int width)
{
    string** array2D = 0;
    array2D = new string*[height];

    for (int h = 0; h < height; h++)
    {
        array2D[h] = new string[width];

        for (int w = 0; w < width; w++)
        {
            // fill in some initial values
            // (filling in zeros would be more logic, but this is just for the example)
            array2D[h][w] = w + width * h;
        }
    }

    return array2D;
}

string _Utilities::FixWikiTableName(string title)
{
    string temp = "";

    for (int x = 0; x <= title.length(); x++)
    {
        if (isspace(title[x]))
        {
            temp += '_';
        }
        else
        {
            temp += tolower(title[x]);
        }
    }

    return temp;
}

//void _Utilities::fourPointsTransform(const Mat& frame, const Point2f vertices[], Mat& result)
//{
//    const Size outputSize = Size(100, 32);
//
//    Point2f targetVertices[4] = {
//        Point(0, outputSize.height - 1),
//        Point(0, 0), Point(outputSize.width - 1, 0),
//        Point(outputSize.width - 1, outputSize.height - 1)
//    };
//
//    Mat rotationMatrix = getPerspectiveTransform(vertices, targetVertices);
//
//    warpPerspective(frame, result, rotationMatrix, outputSize);
//}

string* _Utilities::sortLines(string outText, string* recognition)
{

}

string _Utilities::ReturnPunctuation(string* words)
{
    string temp;

    for (int x = 0; x <= sizeof(words); x++)
    {
        temp = words[x];

        for (int y = 0; y <= temp.length(); y++)
        {
            if (temp[y] == ',')
            {
                return "comma";
            }
            else if (temp[y] == ';')
            {
                return "semi_colon";
            }
            else if (temp[y] == '\\')
            {
                return "backslash";
            }
            else if (temp[y] == '\"')
            {
                return "quotes";
            }
            else
                return "false";
        }
    }

    return "false";
}

// A utility function to swap two elements 
void _Utilities::swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int _Utilities::partition(int arr[], int low, int high)
{
    int pivot = arr[high]; // pivot 
    int i = (low - 1); // Index of smaller element and indicates the right position of pivot found so far

    for (int j = low; j <= high - 1; j++)
    {
        // If current element is smaller than the pivot 
        if (arr[j] < pivot)
        {
            i++; // increment index of smaller element 
            _Utilities::swap(&arr[i], &arr[j]);
        }
    }
    _Utilities::swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index */
void _Utilities::quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        /* pi is partitioning index, arr[p] is now
        at right place */
        int pi = _Utilities::partition(arr, low, high);

        // Separately sort elements before 
        // partition and after partition 
        _Utilities::quickSort(arr, low, pi - 1);
        _Utilities::quickSort(arr, pi + 1, high);
    }
}

string _Utilities::toLowerWord(string word)
{
    string temp;

    for (int x = 0; x <= word.length(); x++)
    {
        temp += tolower(word[x]);
    }

    return temp;
}

string* _Utilities::toLowerWordsArr(string* words)
{
    string* temp = new string[sizeof(words)];

    for (int x = 0; x <= sizeof(words); x++)
    {
        temp[x] = _Utilities::toLowerWord(words[x]);
    }

    return temp;
}

string* _Utilities::WordsArrPunctuationExplode(string* words)
{
    string temp;
    string temp_str;
    string punctuation;

    for (int x = 0; x <= sizeof(words); x++)
    {
        temp = words[x];

        for (int y = 0; y <= words[x].length(); y++)
        {
            if (!ispunct(temp[y]))
            {
                temp_str += temp[y];
            }
            else
            {
                punctuation = temp[y];
                temp_str += ' ';
                temp_str += punctuation;
            }
        }
    }

    return _Utilities::String2Words(temp_str);
}

string _Utilities::StringArray2String(string* arr)
{
    string temp;

    for (int x = 0; x <= sizeof(arr); x++)
    {
        if (x == 0)
        {
            temp.append(arr[x]);
            temp.append(" ");
        }
        else
        {
            temp.append(arr[x]);

            if (x != sizeof(arr))
                temp.append(" ");
        }
    }

    return temp;
}

// Purpose: Separate text strings into individual sentences
string* _Utilities::String2Sentences(string input)
{
    string temp;
    int count = 0;
    int count1 = 0;

    for (int y = 0; y <= input.length(); y++)
    {
        if (input[y] == '.' || input[y] == '?' || input[y] == '!')
        {
            count1++;
        }
    }

    string* sentences = new string[sizeof(count1)];

    for (int x = 0; x <= input.length(); x++)
    {
        if (x == 0 && input[x] == '*' && isspace(input[x + 1]))
        {
            x++;
        }
        else if (x == 0)
        {
            temp += input[x];
        }

        if (input[x] == '.' || input[x] == '?' || input[x] == '!')
        {
            temp += input[x];
            sentences[count] = temp;
            count++;
            x++;
        }
        else if (x == input.length())
        {
            sentences[count] = temp;
            count++;
        }
        else
        {
            temp += input[x];
        }
    }

    return sentences;
}

// Purpose: Separate sentences into individual words
string* _Utilities::String2Words(string input)
{
    string temp;
    int count1 = 0;
    int count = 0;

    for (int y = 0; y <= input.length(); y++)
    {
        if (isspace(input[y]))
        {
            count1++;
        }
        if (input[y] == '.' || input[y] == '?' || input[y] == '!')
        {
            count1++;
        }
    }

    string* words = new string[count1];

    for (int x = 0; x <= input.length(); x++)
    {
        if (x == 0)
        {
            words[count] = input[x];
        }
        else if (isspace(input[x]))
        {
            count++;
        }
        else if (input[x] == '.' || input[x] == '?' || input[x] == '!')
        {
            words[count] += input[x];
        }
        else
        {
            words[count] += input[x];
        }
    }

    return words;
}

string _Utilities::Vector2String(double* vector)
{
    string vector_string = "";

    for (int x = 0; x <= sizeof(vector); x++)
    {
        vector_string += to_string(vector[x]);

        if (x != sizeof(vector))
            vector_string += " ";
    }

    return vector_string;
}

double* _Utilities::ParseVector(string vector)
{
    double* vectors = new double[300];
    int lines = 0;

    for (int x = 0; x <= vector.length(); x++)
    {
        if (x == 0)
        {
            // Get the first available position in the vector
            vectors[lines] = (double)vector[x];
        }
        else if (isalnum(vector[x]))
        {
            vectors[lines] += (double)vector[x];
        }
        else if (isspace(vector[x]) && isalnum(vector[x + 1]))
        {
            lines++;
        }
    }

    return vectors;
}

double* _Utilities::VectorSum(double* vector_sum, double* vector)
{
    double temp;
    double temp2;

    for (int x = 0; x <= 300; x++)
    {
        temp = vector_sum[x];
        temp2 = vector[x];
        temp += temp2;
        vector_sum[x] = temp;
    }

    return vector_sum;
}

double* _Utilities::VectorAverage(double* vector_sum, int word_count)
{
    double temp;

    for (int x = 0; x <= 300; x++)
    {
        temp = vector_sum[x];
        temp = temp / word_count;
        vector_sum[x] = temp;
    }

    return vector_sum;
}

string _Utilities::DictionarySpellCheck(string word)
{
    MYSQL* conn;
    MYSQL* conn2;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_database;
    string mysql_hostname = _Settings::GetMySQLHostname();
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string table = "entries";
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM entries;";
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);
    }
}

//string _Utilities::fixQuoteFederal(string input)
//{
//    string temp;
//
//    for (int x = 0; x <= input.length(); x++)
//    {
//        if (input[x] == '&' && input[x + 1] == 'q' && input[x + 2] == 'u' && input[x + 3] == 'o' && input[x + 4] == 't' && input[x + 5] == ';')
//        {
//            temp += "\"";
//            x += 6;
//        }
//        else
//        {
//            temp += input[x];
//        }
//    }
//
//    return temp;
//}

//  500 -> 00:05.000
// 6000 -> 01:00.000
string _Utilities::to_timestamp(int64_t t)
{
    int64_t sec = t / 100;
    int64_t msec = t - sec * 100;
    int64_t min = sec / 60;
    sec = sec - min * 60;

    char buf[32];
    snprintf(buf, sizeof(buf), "%02d:%02d.%03d", (int)min, (int)sec, (int)msec);

    return string(buf);
}

void _Utilities::PrintLicense()
{
    
}

//string _Utilities::getHash(string filename)
//{
//    /*ifstream fp(filename.c_str());
//
//    constexpr const std::size_t buffer_size{ 1 << 12 };
//    char buffer[buffer_size];
//
//    unsigned char hash[SHA256_DIGEST_LENGTH] = { 0 };
//
//    SHA256_CTX ctx;
//    SHA256_Init(&ctx);
//
//    while (fp.good())
//    {
//        fp.read(buffer, buffer_size);
//        SHA256_Update(&ctx, buffer, fp.gcount());
//    }
//
//    SHA256_Final(hash, &ctx);
//    fp.close();
//
//    std::ostringstream os;
//    os << std::hex << std::setfill('0');
//
//    for (int i = 0; i < SHA256_DIGEST_LENGTH; ++i)
//    {
//        os << std::setw(2) << static_cast<unsigned int>(hash[i]);
//    }
//
//    return os.str();*/
//}

