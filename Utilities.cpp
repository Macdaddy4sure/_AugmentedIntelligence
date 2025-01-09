/*
    Copyright(C) 2025 Tyler Crockett | Macdaddy4sure.com

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

#include "AugmentedIntelligence.hpp"
#include "Mathematics.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Reference.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Time.hpp"
#include "Utilities.hpp"

using namespace std;
using namespace filesystem;
using namespace cv;

std::unordered_map<std::string, std::string> numWordMap = {
    {"zero", "0"},
    {"one", "1"},
    {"two", "2"},
    {"three", "3"},
    {"four", "4"},
    {"five", "5"},
    {"six", "6"},
    {"seven", "7"},
    {"eight", "8"},
    {"nine", "9"},
    {"ten", "10"},
    {"eleven", "11"},
    {"twelve", "12"},
    {"thirteen", "13"},
    {"fourteen", "14"},
    {"fifteen", "15"},
    {"sixteen", "16"},
    {"seventeen", "17"},
    {"eighteen", "18"},
    {"nineteen", "19"},
    {"twenty", "20"},
    {"thirty", "30"},
    {"forty", "40"},
    {"fifty", "50"},
    {"sixty", "60"},
    {"seventy", "70"},
    {"eighty", "80"},
    {"ninety", "90"},
    {"one hundred", "100"},
    {"two hundred", "200"},
    {"three hundred", "300"},
    {"four hundred", "400"},
    {"five hundred", "500"},
    {"six hundred", "600"},
    {"seven hundred", "700"},
    {"eight hundred", "800"},
    {"nine hundred", "900"},
    {"one thousand", "1000"}
};

// This function will use intelligence to create a summary of what the user is reading
string _Utilities::CreateSummary(string data)
{
    string temp;
    return temp;
}

// This function will generate a random number
int _Utilities::GenerateRandomNumber(int low, int high)
{
    int random;
    return random;
}

// This function will take in a string array from vision and sort the array alphabetically
//  Sound command = "Sort the following array alphabetically"
string* _Utilities::StringArraySorter(string* data)
{
    string* temp = new string[10];
    return temp;
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
    string temp;
    return temp;
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
    return nullptr;
}

string* _Utilities::RemovePunctuationArr(string* words)
{
    return nullptr;
}

string* _Utilities::RemovePunctuationString(string sentence)
{
    return nullptr;
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

int _Utilities::getDatatypeUsed(string datatype)
{
    if (datatype == "wm_vision_path_camera1")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_path_camera1[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_vision_path_camera2")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_path_camera2[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_sound_path")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_sound_path[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    //if (datatype == "wm_speech_dialogue")
    //{
    //    for (int x = 0; x < 1000; x++)
    //    {
    //        if (wm_speech_dialogue[x][0] == "")
    //        {
    //            return x - 1;
    //        }
    //    }
    //}
    if (datatype == "wm_action1_text")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_action1_text[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_action2_text")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_action2_text[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_action3_text")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_action3_text[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_text_identification")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_text_identification[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_reading_text")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_reading_text[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_reading_image")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_reading_image[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_algebra_text")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_algebra_text[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_vision_objects_image_path_camera1")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_objects_image_path_camera1[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_vision_objects_image_path_camera2")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_objects_image_path_camera2[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_vision_actions_image_path_camera1")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_actions_image_path_camera1[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_vision_actions_image_path_camera2")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_actions_image_path_camera2[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_vision_objects_text_camera1")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_objects_text_camera1[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_vision_objects_text_camera2")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_objects_text_camera2[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_vision_analysis_text_camera1")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_analysis_text_camera1[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_vision_analysis_text_camera2")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_analysis_text_camera2[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_typing_text")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_typing_text[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_Reference_pos_gps_north")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_Reference_pos_gps_north[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_Reference_pos_gps_west")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_Reference_pos_gps_west[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_Reference_pos_gps_image")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_Reference_pos_gps_image[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_pos_gps_north_text")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_pos_gps_north_text[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_pos_gps_west_text")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_pos_gps_west_text[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_pos_gps_elevation_text")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_pos_gps_elevation_text[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_pos_x")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_pos_x[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_pos_y")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_pos_y[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_pos_z")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_pos_z[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_simple_text")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_simple_text[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_simple_image")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_simple_image[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_llm_prompt_history")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_llm_prompt_history[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_llm_response")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_llm_response[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_wikipedia")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_wikipedia[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_wikisimple")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_wikisimple[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_wikiquote")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_wikiquote[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_wikisource")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_wikisource[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_wikihow")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_wikihow[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_wikibooks")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_wikibooks[x][0] == "")
            {
                return x - 1;
            }
        }
    }
    if (datatype == "wm_stackexchange")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_stackexchange[x][0] == "")
            {
                return x - 1;
            }
        }
    }

    return 0;
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

/**
 * Removes punctuation from a string and splits it into words.
 *
 * @param input  The input string to process.
 * @param output A vector of strings where the processed words will be stored.
 */
string* _Utilities::String2Words(string input)
{
    // Create a copy of the input string
    std::string str = input;

    // Remove punctuation from the string
    str.erase(std::remove_if(str.begin(), str.end(),
        [](char c) { return !std::isalnum(c) && !std::isspace(c); }),
        str.end());

    // Count the number of words in the string
    int wordCount = 0;
    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == ' ') {
            ++wordCount;
        }
    }

    // Allocate memory for the output array
    std::string* output = new std::string[wordCount + 1];

    // Split the string into words and store them in the output array
    std::istringstream iss(str);
    int index = 0;

    while (iss >> output[index])
    {
        ++index;
    }

    return output;
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

    for (int x = 0; x <= sizeof(vector) / sizeof(vector[0]); x++)
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

    for (int x = 0; x <= sizeof(vector_sum) / sizeof(vector_sum[0]); x++)
    {
        temp = vector_sum[x];
        temp = temp / word_count;
        vector_sum[x] = temp;
    }

    return vector_sum;
}

// TODO:
// 1. Make all characters lowercase
// 2. Remove the following words that contain '[]'
string _Utilities::ParsePrompt(const string input)
{
    string temp = "";

    for (int x = 0; x < input.length(); x++)
    {
        if (input[x] == '[' && input[x + 1] == 'B' && input[x + 2] == 'L' && input[x + 3] == 'A' && input[x + 4] == 'N' && input[x + 5] == 'K' && input[x + 6] == '_' && input[x + 7] == 'A' && input[x + 8] == 'U' && input[x + 9] == 'D' && input[x + 10] == 'I' && input[x + 11] == 'O' && input[x + 12] == ']')
        {
            x += 13;
        }
        if (ispunct(input[x]))
        {

        }
        else
        {
            temp += tolower(input[x]);
        }
    }

    return temp;
}

bool _Utilities::PromptRecognize(const string prompt)
{
    std::istringstream iss(prompt);
    std::string word;

    while (iss >> word)
    {
        if (word == speech_commands_activation)
        {
            return true;  // Found a match
        }
    }

    return false;  // No match found
}

string _Utilities::ParseTranscription(string input)
{
    string temp = "";

    for (int x = 0; x < input.length(); x++)
    {
        if (input[x] == '[' && input[x + 1] == 'B' && input[x + 2] == 'L' && input[x + 3] == 'A' && input[x + 4] == 'N' && input[x + 5] == 'K' && input[x + 6] == '_' && input[x + 7] == 'A' && input[x + 8] == 'U' && input[x + 9] == 'D' && input[x + 10] == 'I' && input[x + 11] == 'O' && input[x + 12] == ']')
        {
            x += 13;
        }
        else
        {
            temp += input[x];
        }
    }

    return temp;
}

bool _Utilities::CommandTerminatorRecognize(const string command)
{
    std::istringstream iss(command);
    std::string word;

    while (iss >> word)
    {
        if (word == speech_commands_terminator)
        {
            return true;  // Found a match
        }
    }

    return false;  // No match found
}

string _Utilities::CommandParse(const string command)
{
    //std::istringstream iss(command);
    std::string word;
    std::string output;

    for (int x = 0; x < command.length(); x++)
    {
        if (command[x] == 'a' && command[x + 1] == 'b' && command[x + 2] == 's' && command[x + 3] == 'o' && command[x + 4] == 'l' && command[x + 5] == 'u' && command[x + 6] == 't' && command[x + 7] == 'e')
        {
            string number = "";

            for (int y = x; y <= 9; y++)
            {
                output += command[y];
            }

            for (int y = x + 9; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 'm' && command[x + 1] == 'o' && command[x + 2] == 'd' && command[x + 3] == 'u' && command[x + 4] == 'l' && command[x + 5] == 'u' && command[x + 6] == 's')
        {
            string number = "";

            for (int y = x; y <= 8; y++)
            {
                output += command[y];
            }

            for (int y = x + 8; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 's' && command[x + 1] == 'q' && command[x + 2] == 'u' && command[x + 3] == 'a' && command[x + 4] == 'r' && command[x + 5] == 'e')
        {
            string number = "";

            for (int y = x; y <= 7; y++)
            {
                output += command[y];
            }

            for (int y = x + 7; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 'c' && command[x + 1] == 'u' && command[x + 2] == 'b' && command[x + 3] == 'e' && command[x + 4] == 'd')
        {
            string number = "";

            for (int y = x; y <= 6; y++)
            {
                output += command[y];
            }

            for (int y = x + 6; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 'f' && command[x + 1] == 'a' && command[x + 2] == 'c' && command[x + 3] == 't' && command[x + 4] == 'o' && command[x + 5] == 'r' && command[x + 6] == 'i' && command[x + 7] == 'a' && command[x + 8] == 'l')
        {
            string number = "";

            for (int y = x; y <= 10; y++)
            {
                output += command[y];
            }

            for (int y = x + 9; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 'l' && command[x + 1] == 'o' && command[x + 2] == 'g' && command[x + 3] == 'a' && command[x + 4] == 'r' && command[x + 5] == 'i' && command[x + 6] == 't' && command[x + 7] == 'h' && command[x + 8] == 'm')
        {
            string number = "";

            for (int y = x; y <= 10; y++)
            {
                output += command[y];
            }

            for (int y = x + 10; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 's' && command[x + 1] == 'i' && command[x + 2] == 'n' && command[x + 3] == 'e')
        {
            string number = "";

            for (int y = x; y <= 5; y++)
            {
                output += command[y];
            }

            for (int y = x + 5; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 'c' && command[x + 1] == 'o' && command[x + 2] == 's' && command[x + 3] == 'i' && command[x + 4] == 'n' && command[x + 5] == 'e')
        {
            string number = "";

            for (int y = x; y <= 7; y++)
            {
                output += command[y];
            }

            for (int y = x + 7; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 't' && command[x + 1] == 'a' && command[x + 2] == 'n' && command[x + 3] == 'g' && command[x + 4] == 'e' && command[x + 5] == 'n' && command[x + 6] == 't')
        {
            string number = "";

            for (int y = x; y <= 8; y++)
            {
                output += command[y];
            }

            for (int y = x + 8; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 'c' && command[x + 1] == 'o' && command[x + 2] == 's' && command[x + 3] == 'e' && command[x + 4] == 'c' && command[x + 5] == 'a' && command[x + 6] == 'n' && command[x + 7] == 't')
        {
            string number = "";

            for (int y = x; y <= 9; y++)
            {
                output += command[y];
            }

            for (int y = x + 9; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 's' && command[x + 1] == 'e' && command[x + 2] == 'c' && command[x + 3] == 'a' && command[x + 4] == 'n' && command[x + 5] == 't')
        {
            string number = "";

            for (int y = x; y <= 7; y++)
            {
                output += command[y];
            }

            for (int y = x + 7; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 'c' && command[x + 1] == 'o' && command[x + 2] == 't' && command[x + 3] == 'a' && command[x + 4] == 'n' && command[x + 5] == 'g' && command[x + 6] == 'e' && command[x + 7] == 'n' && command[x + 8] == 't')
        {
            string number = "";

            for (int y = x; y <= 10; y++)
            {
                output += command[y];
            }

            for (int y = x + 10; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 'h' && command[x + 1] == 'y' && command[x + 2] == 'p' && command[x + 3] == 'e' && command[x + 4] == 'r' && command[x + 5] == 'b' && command[x + 6] == 'o' && command[x + 7] == 'l' && command[x + 8] == 'i' && command[x + 9] == 'c' && command[x + 10] == ' ' && command[x + 11] == 's' && command[x + 12] == 'i' && command[x + 13] == 'n' && command[x + 14] == 'e')
        {
            string number = "";

            for (int y = x; y <= 16; y++)
            {
                output += command[y];
            }

            for (int y = x + 16; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 'h' && command[x + 1] == 'y' && command[x + 2] == 'p' && command[x + 3] == 'e' && command[x + 4] == 'r' && command[x + 5] == 'b' && command[x + 6] == 'o' && command[x + 7] == 'l' && command[x + 8] == 'i' && command[x + 9] == 'c' && command[x + 10] == ' ' && command[x + 11] == 'c' && command[x + 12] == 'o' && command[x + 13] == 's' && command[x + 14] == 'i' && command[x + 15] == 'n' && command[x + 16] == 'e')
        {
            string number = "";

            for (int y = x; y <= 18; y++)
            {
                output += command[y];
            }

            for (int y = x + 18; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 'h' && command[x + 1] == 'y' && command[x + 2] == 'p' && command[x + 3] == 'e' && command[x + 4] == 'r' && command[x + 5] == 'b' && command[x + 6] == 'o' && command[x + 7] == 'l' && command[x + 8] == 'i' && command[x + 9] == 'c' && command[x + 10] == ' ' && command[x + 11] == 't' && command[x + 12] == 'a' && command[x + 13] == 'n' && command[x + 14] == 'g' && command[x + 15] == 'e' && command[x + 16] == 'n' && command[x + 17] == 't')
        {
            string number = "";

            for (int y = x; y <= 19; y++)
            {
                output += command[y];
            }

            for (int y = x + 19; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 'h' && command[x + 1] == 'y' && command[x + 2] == 'p' && command[x + 3] == 'e' && command[x + 4] == 'r' && command[x + 5] == 'b' && command[x + 6] == 'o' && command[x + 7] == 'l' && command[x + 8] == 'i' && command[x + 9] == 'c' && command[x + 10] == ' ' && command[x + 11] == 's' && command[x + 12] == 'e' && command[x + 13] == 'c' && command[x + 14] == 'a' && command[x + 15] == 'n' && command[x + 16] == 't')
        {
            string number = "";

            for (int y = x; y <= 18; y++)
            {
                output += command[y];
            }

            for (int y = x + 18; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 'h' && command[x + 1] == 'y' && command[x + 2] == 'p' && command[x + 3] == 'e' && command[x + 4] == 'r' && command[x + 5] == 'b' && command[x + 6] == 'o' && command[x + 7] == 'l' && command[x + 8] == 'i' && command[x + 9] == 'c' && command[x + 10] == ' ' && command[x + 11] == 'c' && command[x + 12] == 'o' && command[x + 13] == 's' && command[x + 14] == 'e' && command[x + 15] == 'c' && command[x + 16] == 'a' && command[x + 17] == 'n' && command[x + 18] == 't')
        {
            string number = "";

            for (int y = x; y <= 20; y++)
            {
                output += command[y];
            }

            for (int y = x + 20; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 'h' && command[x + 1] == 'y' && command[x + 2] == 'p' && command[x + 3] == 'e' && command[x + 4] == 'r' && command[x + 5] == 'b' && command[x + 6] == 'o' && command[x + 7] == 'l' && command[x + 8] == 'i' && command[x + 9] == 'c' && command[x + 10] == ' ' && command[x + 11] == 'c' && command[x + 12] == 'o' && command[x + 13] == 't' && command[x + 14] == 'a' && command[x + 15] == 'n' && command[x + 16] == 'g' && command[x + 17] == 'e' && command[x + 18] == 'n' && command[x + 19] == 't')
        {
            string number = "";

            for (int y = x; y <= 21; y++)
            {
                output += command[y];
            }

            for (int y = x + 21; y <= command.length(); y++)
            {
                number += command[y];
            }

            output += _Utilities::convertNumberWords(number);
        }
        if (command[x] == 'a' && command[x + 1] == 'd' && command[x + 2] == 'd' && command[x + 3] == ' ' && command[x + 4] == 't' && command[x + 5] == 'h' && command[x + 6] == 'e' && command[x + 7] == ' ' && command[x + 8] == 'l' && command[x + 9] == 'a' && command[x + 10] == 's' && command[x + 11] == 't')
        {
            for (int y = x + 13; y < command.length(); y++)
            {
                // The next word should be a number
                string number = "";
                string number2 = "";
                string number3 = "";

                // 1. Get every word up until seconds
                if (command[y] == 's' && command[y + 1] == 'e' && command[y + 2] == 'c' && command[y + 3] == 'o' && command[y + 4] == 'n' && command[y + 5] == 'd' && command[y + 6] == 's')
                {
                    output += _Utilities::convertNumberWords(number);
                    break;
                }
                else if (command[y] == 'm' && command[y + 1] == 'i' && command[y + 2] == 'n' && command[y + 3] == 'u' && command[y + 4] == 't' && command[y + 5] == 'e' && command[y + 6] == 's')
                {
                    // 2. Test if the following contains seconds

                    for (int z = y + 8; z < command.length(); z++)
                    {
                        if (command[z] == 's' && command[z + 1] == 'e' && command[z + 2] == 'c' && command[z + 3] == 'o' && command[z + 4] == 'n' && command[z + 5] == 'd' && command[z + 6] == 's')
                        {
                            output += _Utilities::convertNumberWords(number2);
                            break;
                        }
                        else
                        {
                            number2 += command[z];
                        }
                    }
                }
                else if (command[y] == 'h' && command[y + 1] == 'o' && command[y + 2] == 'u' && command[y + 3] == 'r' && command[y + 4] == 's')
                {
                    // 2. Check if the following contains minutes

                    for (int z = y + 6; z < command.length(); z++)
                    {
                        if (command[z] == 'm' && command[z + 1] == 'i' && command[z + 2] == 'n' && command[z + 3] == 'u' && command[z + 4] == 't' && command[z + 5] == 'e' && command[z + 6] == 's')
                        {
                            // 3. Check if the following contains seconds
                            output += _Utilities::convertNumberWords(number2);

                            for (int a = z + 8; a < command.length(); a++)
                            {
                                if (command[a] == 's' && command[a + 1] == 'e' && command[a + 2] == 'c' && command[a + 3] == 'o' && command[a + 4] == 'n' && command[a + 5] == 'd' && command[a + 6] == 's')
                                {
                                    output += _Utilities::convertNumberWords(number3);
                                    break;
                                }
                                else
                                {
                                    number3 += command[a];
                                }
                            }
                        }
                        else
                        {
                            number2 += command[z];
                        }
                    }
                }
                else
                {
                    number += command[y];
                }
            }
        }
        if (command[x] == 'c' && command[x + 1] == 'r' && command[x + 2] == 'e' && command[x + 3] == 'a' && command[x + 4] == 't' && command[x + 5] == 'e' && command[x + 6] == ' ' && command[x + 7] == 'p' && command[x + 8] == 'r' && command[x + 9] == 'o' && command[x + 10] == 'm' && command[x + 11] == 'p' && command[x + 12] == 't')
        {
            for (int y = x; y <= command.length(); y++)
            {
                output += command[y];
            }
        }
        if (command[x] == 'c' && command[x + 1] == 'r' && command[x + 2] == 'e' && command[x + 3] == 'a' && command[x + 4] == 't' && command[x + 5] == 'e' && command[x + 6] == ' ' && command[x + 7] == 'd' && command[x + 8] == 'e' && command[x + 9] == 'd' && command[x + 10] == 'u' && command[x + 11] == 'c' && command[x + 12] == 't' && command[x + 13] == 'i' && command[x + 14] == 'v' && command[x + 15] == 'e' && command[x + 16] == ' ' && command[x + 17] == 'a' && command[x + 18] == 'r' && command[x + 19] == 'g' && command[x + 20] == 'u' && command[x + 21] == 'm' && command[x + 22] == 'e' && command[x + 23] == 'n' && command[x + 24] == 't')
        {
            for (int y = x; y <= command.length(); y++)
            {
                output += command[y];
            }
        }
        if (command[x] == 'c' && command[x + 1] == 'r' && command[x + 2] == 'e' && command[x + 3] == 'a' && command[x + 4] == 't' && command[x + 5] == 'e' && command[x + 6] == ' ' && command[x + 7] == 'i' && command[x + 8] == 'n' && command[x + 9] == 'd' && command[x + 10] == 'u' && command[x + 11] == 'c' && command[x + 12] == 't' && command[x + 13] == 'i' && command[x + 14] == 'v' && command[x + 15] == 'e' && command[x + 16] == ' ' && command[x + 17] == 'a' && command[x + 18] == 'r' && command[x + 19] == 'g' && command[x + 20] == 'u' && command[x + 21] == 'm' && command[x + 22] == 'e' && command[x + 23] == 'n' && command[x + 24] == 't')
        {
            for (int y = x; y <= command.length(); y++)
            {
                output += command[y];
            }
        }
        if (command[x] == 'f' && command[x + 1] == 'a' && command[x + 2] == 'l' && command[x + 3] == 'l' && command[x + 4] == 'a' && command[x + 5] == 'c' && command[x + 6] == 'y' && command[x + 7] == ' ' && command[x + 8] == 'c' && command[x + 9] == 'h' && command[x + 10] == 'e' && command[x + 11] == 'c' && command[x + 12] == 'k' && command[x + 13] == ' ' && command[x + 14] == 'w' && command[x + 15] == 'o' && command[x + 16] == 'r' && command[x + 17] == 'k' && command[x + 18] == 'i' && command[x + 19] == 'n' && command[x + 20] == 'g' && command[x + 21] == ' ' && command[x + 22] == 'm' && command[x + 23] == 'e' && command[x + 24] == 'm' && command[x + 25] == 'o' && command[x + 26] == 'r' && command[x + 27] == 'y')
        {
            for (int y = x; y <= command.length(); y++)
            {
                output += command[y];
            }
        }
        if (command[x] == 'f' && command[x + 1] == 'a' && command[x + 2] == 'l' && command[x + 3] == 'l' && command[x + 4] == 'a' && command[x + 5] == 'c' && command[x + 6] == 'y' && command[x + 7] == ' ' && command[x + 8] == 'c' && command[x + 9] == 'h' && command[x + 10] == 'e' && command[x + 11] == 'c' && command[x + 12] == 'k' && command[x + 13] == ' ' && command[x + 14] == 's' && command[x + 15] == 'i' && command[x + 16] == 'm' && command[x + 17] == 'p' && command[x + 18] == 'l' && command[x + 19] == 'e' && command[x + 20] == ' ' && command[x + 21] == 't' && command[x + 22] == 'e' && command[x + 23] == 'x' && command[x + 24] == 't')
        {
            for (int y = x; y <= command.length(); y++)
            {
                output += command[y];
            }
        }
        if (command[x] == 'b' && command[x + 1] == 'i' && command[x + 2] == 'a' && command[x + 3] == 's' && command[x + 4] == ' ' && command[x + 5] == 'c' && command[x + 6] == 'h' && command[x + 7] == 'e' && command[x + 8] == 'c' && command[x + 9] == 'k' && command[x + 10] == ' ' && command[x + 11] == 's' && command[x + 12] == 'i' && command[x + 13] == 'm' && command[x + 14] == 'p' && command[x + 15] == 'l' && command[x + 16] == 'e' && command[x + 17] == ' ' && command[x + 18] == 't' && command[x + 19] == 'e' && command[x + 20] == 'x' && command[x + 21] == 't')
        {
            for (int y = x; y <= command.length(); y++)
            {
                output += command[y];
            }
        }
        if (command[x] == 't' && command[x + 1] == 'r' && command[x + 2] == 'a' && command[x + 3] == 'n' && command[x + 4] == 's' && command[x + 5] == 'l' && command[x + 6] == 'a' && command[x + 7] == 't' && command[x + 8] == 'e' && command[x + 9] == ' ' && command[x + 10] == 't' && command[x + 11] == 'o' && command[x + 12] == ' ' && command[x + 13] == 'e' && command[x + 14] == 'n' && command[x + 15] == 'g' && command[x + 16] == 'l' && command[x + 17] == 'i' && command[x + 18] == 's' && command[x + 19] == 'h' && command[x + 20] == ' ' && command[x + 21] == 'f' && command[x + 22] == 'r' && command[x + 23] == 'o' && command[x + 24] == 'm' && command[x + 25] == ' ' && command[x + 26] == 'd' && command[x + 27] == 'i' && command[x + 28] == 'a' && command[x + 29] == 'l' && command[x + 30] == 'o' && command[x + 31] == 'g' && command[x + 32] == 'u' && command[x + 33] == 'e')
        {
            for (int y = x; y <= command.length(); y++)
            {
                output += command[y];
            }
        }
        if (command[x] == 't' && command[x + 1] == 'r' && command[x + 2] == 'a' && command[x + 3] == 'n' && command[x + 4] == 's' && command[x + 5] == 'l' && command[x + 6] == 'a' && command[x + 7] == 't' && command[x + 8] == 'e' && command[x + 9] == ' ' && command[x + 10] == 't' && command[x + 11] == 'o' && command[x + 12] == ' ' && command[x + 13] == 'e' && command[x + 14] == 'n' && command[x + 15] == 'g' && command[x + 16] == 'l' && command[x + 17] == 'i' && command[x + 18] == 's' && command[x + 19] == 'h' && command[x + 20] == ' ' && command[x + 21] == 's' && command[x + 22] == 'i' && command[x + 23] == 'm' && command[x + 24] == 'p' && command[x + 25] == 'l' && command[x + 26] == 'e' && command[x + 27] == ' ' && command[x + 28] == 't' && command[x + 29] == 'e' && command[x + 30] == 'x' && command[x + 31] == 't')
        {
            for (int y = x; y <= command.length(); y++)
            {
                output += command[y];
            }
        }
        if (command[x] == 'f' && command[x + 1] == 'i' && command[x + 2] == 'n' && command[x + 3] == 'd' && command[x + 4] == ' ' && command[x + 5] == 'o' && command[x + 6] == 'b' && command[x + 7] == 'j' && command[x + 8] == 'e' && command[x + 9] == 'c' && command[x + 10] == 't')
        {
            for (int y = x; y <= command.length(); y++)
            {
                output += command[y];
            }
        }
    }

    return output;
}

/**
 * Converts number words to digits in a given string.
 *
 * @param str The input string that may contain number words.
 * @return A new string with number words replaced by their digit values.
 */
std::string _Utilities::convertNumberWords(const std::string& str)
{
    std::string result = str;
    for (const auto& pair : numWordMap)
    {
        size_t pos = 0;
        while ((pos = result.find(pair.first, pos)) != std::string::npos)
        {
            result.replace(pos, pair.first.length(), pair.second);
            pos += pair.second.length();
        }
    }
    return result;
}

void _Utilities::PlayTone()
{
    RtAudio dac;

    RtAudio::StreamParameters params;
    params.deviceId = dac.getDefaultOutputDevice();
    params.nChannels = 1; // Mono
    params.firstChannel = 0;
    int duration = 500;

    unsigned int bufferFrames = 256;
    dac.openStream(&params, nullptr, RTAUDIO_FLOAT32, 44100.0f, &bufferFrames, _Utilities::audioCallback);

    dac.startStream();

    //std::this_thread::sleep_for(std::chrono::milliseconds(duration));

    dac.stopStream();
}

int _Utilities::audioCallback(void *outputBuffer, void *inputBuffer, unsigned int nframes, double streamTime, RtAudioStreamStatus status, void* userdata)
{
    float* buffer = (float*)outputBuffer;
    const float frequency = 1000.0f; // Frequency of the tone
    const float sampleRate = 48000.0f; // Sample rate
    const float volume = 0.5f; // Volume

    for (unsigned int i = 0; i < nframes * 2; ++i) {
        buffer[i] = sin(2.0f * M_PI * frequency * streamTime + (float)i / sampleRate) * volume;
    }

    return 0; // Return 0 to continue streaming
}

// Callback function to capture the response data
size_t _Utilities::WriteCallback(void* contents, size_t size, size_t nmemb, std::string* userp)
{
    size_t realSize = size * nmemb;
    userp->append(static_cast<char*>(contents), realSize);
    return realSize;
}

string _Utilities::DictionarySpellCheck(string word)
{
    MYSQL* conn = nullptr;
    MYSQL* conn2;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_database;
    string mysql_hostname = _Settings::GetMySQLHostname();
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string table = "entries";
    string sql1;
    string corrected;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM entries;";
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);
    }

    return corrected;
}

cv::Mat _Utilities::String2Mat(string image_location)
{
    cv::Mat image = cv::imread(image_location);
    return image;
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

string _Utilities::getHash(string filename)
{
    std::ifstream file(filename.c_str(), std::ifstream::binary);
    cout << "filename: " << filename << endl;

    if (!file.is_open())
    {
        throw std::runtime_error("Cannot open file: " + filename);
    }

    SHA256_CTX sha256;
    SHA256_Init(&sha256);

    const int bufSize = 16384; // Buffer size (you can adjust this)
    char* buffer = new char[bufSize];
    while (file.good())
    {
        file.read(buffer, bufSize);
        SHA256_Update(&sha256, buffer, file.gcount());
    }
    delete[] buffer;

    unsigned char hash[SHA256_DIGEST_LENGTH];
    SHA256_Final(hash, &sha256);

    std::stringstream ss;
    for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
        ss << std::hex << std::setw(2) << std::setfill('0') << (int)hash[i];
    }

    return ss.str();
}

string _Utilities::base64_encode(const string& input)
{
    BIO* bmem, * b64;
    BUF_MEM* bptr;

    b64 = BIO_new(BIO_f_base64());
    bmem = BIO_new(BIO_s_mem());
    b64 = BIO_push(b64, bmem);
    BIO_set_flags(b64, BIO_FLAGS_BASE64_NO_NL);

    BIO_write(b64, input.c_str(), input.length());
    BIO_flush(b64);
    BIO_get_mem_ptr(b64, &bptr);

    std::string result(bptr->data, bptr->length);
    BIO_free_all(b64);

    return result;
}