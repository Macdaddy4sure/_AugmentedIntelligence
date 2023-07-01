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

string _Utilities::toLowerWord(string word)
{
    string temp;

    for (int x = 0; x <= word.length(); x++)
    {
        temp += tolower(word[x]);
    }

    return temp;
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

// Purpose: Separate text strings into individual sentences
string* _Utilities::String2Sentences(string input)
{
    string sentences[100];
    string temp;
    int count = 0;

    for (int x = 0; input[x] != '.' && input[x] != '?' && input[x] != '!'; x++)
    {
        if (input[x + 1] == '.' || input[x + 1] == '?' || input[x + 1] == '!')
        {
            temp += input[x];
            sentences[count] = temp;
            count++;
            x += 3;
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
    string words[100];
    string temp;
    int count = 0;

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
            count++;
        }
        else
        {
            words[count] += input[x];
        }
    }

    return words;
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
    cout << "GNU GENERAL PUBLIC LICENSE" << endl;
    cout << "Version 3, 29 June 2007" << endl;
    cout << endl;
    cout << "Copyright(C) 2007 Free Software Foundation, Inc. < https://fsf.org/>" << endl;
    cout << "Everyone is permitted to copyand distribute verbatim copies" << endl;
    cout << "of this license document, but changing it is not allowed." << endl;
    cout << endl;
    cout << "Preamble" << endl;
    cout << endl;
    cout << "The GNU General Public License is a free, copyleft license for" << endl;
    cout << "softwareand other kinds of works." << endl;
    cout << endl;
    cout << "The licenses for most softwareand other practical works are designed" << endl;
    cout << "to take away your freedom to shareand change the works.By contrast," << endl;
    cout << "the GNU General Public License is intended to guarantee your freedom to" << endl;
    cout << "shareand change all versions of a program--to make sure it remains free" << endl;
    cout << "software for all its users.We, the Free Software Foundation, use the" << endl;
    cout << "GNU General Public License for most of our software; it applies also to" << endl;
    cout << "any other work released this way by its authors.You can apply it to" << endl;
    cout << "your programs, too." << endl;
    cout << endl;
    cout << "When we speak of free software, we are referring to freedom, not" << endl;
    cout << "price. Our General Public Licenses are designed to make sure that you" << endl;
    cout << "have the freedom to distribute copies of free software(and charge for" << endl;
    cout << "them if you wish), that you receive source code or can get it if you" << endl;
    cout << "want it, that you can change the software or use pieces of it in new" << endl;
    cout << "free programs, and that you know you can do these things." << endl;
    cout << endl;
    cout << "To protect your rights, we need to prevent others from denying you" << endl;
    cout << "these rights or asking you to surrender the rights.Therefore, you have" << endl;
    cout << "certain responsibilities if you distribute copies of the software, or if" << endl;
    cout << "you modify it : responsibilities to respect the freedom of others." << endl;
    cout << endl;
    cout << "For example, if you distribute copies of such a program, whether" << endl;
    cout << "gratis or for a fee, you must pass on to the recipients the same" << endl;
    cout << "freedoms that you received.You must make sure that they, too, receive" << endl;
    cout << "or can get the source code.And you must show them these terms so they" << endl;
    cout << "know their rights." << endl;
    cout << endl;
    cout << "Developers that use the GNU GPL protect your rights with two steps :" << endl;
    cout << "(1) assert copyright on the software, and (2) offer you this License" << endl;
    cout << "giving you legal permission to copy, distributeand /or modify it." << endl;
    cout << endl;
    cout << "For the developers' and authors' protection, the GPL clearly explains" << endl;
    cout << "that there is no warranty for this free software.For both users' and" << endl;
    cout << "authors' sake, the GPL requires that modified versions be marked as" << endl;
    cout << "changed, so that their problems will not be attributed erroneously to" << endl;
    cout << "authors of previous versions." << endl;
    cout << endl;
    cout << "Some devices are designed to deny users access to install or run" << endl;
    cout << "modified versions of the software inside them, although the manufacturer" << endl;
    cout << "can do so.This is fundamentally incompatible with the aim of" << endl;
    cout << "protecting users' freedom to change the software.  The systematic" << endl;
    cout << "pattern of such abuse occurs in the area of products for individuals to" << endl;
    cout << "use, which is precisely where it is most unacceptable.Therefore, we" << endl;
    cout << "have designed this version of the GPL to prohibit the practice for those" << endl;
    cout << "products.If such problems arise substantially in other domains, we" << endl;
    cout << "stand ready to extend this provision to those domains in future versions" << endl;
    cout << "of the GPL, as needed to protect the freedom of users." << endl;
    cout << endl;
    cout << "Finally, every program is threatened constantly by software patents." << endl;
    cout << "States should not allow patents to restrict developmentand use of" << endl;
    cout << "software on general - purpose computers, but in those that do, we wish to" << endl;
    cout << "avoid the special danger that patents applied to a free program could" << endl;
    cout << "make it effectively proprietary.To prevent this, the GPL assures that" << endl;
    cout << "patents cannot be used to render the program non - free." << endl;
    cout << endl;
    cout << "The precise terms and conditions for copying, distributionand" << endl;
    cout << "modification follow." << endl;
    cout << endl;
    cout << "TERMS AND CONDITIONS" << endl;
    cout << endl;
    cout << "0. Definitions." << endl;
    cout << endl;
    cout << "\"This License\" refers to version 3 of the GNU General Public License." << endl;
    cout << endl;
    cout << "\"Copyright\" also means copyright - like laws that apply to other kinds of" << endl;
    cout << "works, such as semiconductor masks." << endl;
    cout << endl;
    cout << "\"The Program\" refers to any copyrightable work licensed under this" << endl;
    cout << "License.Each licensee is addressed as \"you\".  \"Licensees\" and" << endl;
    cout << "\"recipients\" may be individuals or organizations." << endl;
    cout << endl;
    cout << "To \"modify\" a work means to copy from or adapt all or part of the work" << endl;
    cout << "in a fashion requiring copyright permission, other than the making of an" << endl;
    cout << "exact copy.The resulting work is called a \"modified version\" of the" << endl;
    cout << "earlier work or a work \"based on\" the earlier work." << endl;
    cout << endl;
    cout << "A \"covered work\" means either the unmodified Program or a work based" << endl;
    cout << "on the Program." << endl;
    cout << endl;
    cout << "To \"propagate\" a work means to do anything with it that, without" << endl;
    cout << "permission, would make you directly or secondarily liable for" << endl;
    cout << "infringement under applicable copyright law, except executing it on a" << endl;
    cout << "computer or modifying a private copy.Propagation includes copying," << endl;
    cout << "distribution(with or without modification), making available to the" << endl;
    cout << "public, and in some countries other activities as well." << endl;
    cout << endl;
    cout << "To \"convey\" a work means any kind of propagation that enables other" << endl;
    cout << "parties to make or receive copies.Mere interaction with a user through" << endl;
    cout << "a computer network, with no transfer of a copy, is not conveying." << endl;
    cout << endl;
    cout << "An interactive user interface displays \"Appropriate Legal Notices\"" << endl;
    cout << "to the extent that it includes a convenient and prominently visible" << endl;
    cout << "feature that(1) displays an appropriate copyright notice, and (2)" << endl;
    cout << "tells the user that there is no warranty for the work(except to the" << endl;
    cout << "extent that warranties are provided), that licensees may convey the" << endl;
    cout << "work under this License, and how to view a copy of this License.If" << endl;
    cout << "the interface presents a list of user commands or options, such as a" << endl;
    cout << "menu, a prominent item in the list meets this criterion." << endl;
    cout << endl;
    cout << "1. Source Code." << endl;
    cout << endl;
    cout << "The \"source code\" for a work means the preferred form of the work" << endl;
    cout << "for making modifications to it.  \"Object code\" means any non - source" << endl;
    cout << "form of a work." << endl;
    cout << endl;
    cout << "A \"Standard Interface\" means an interface that either is an official" << endl;
    cout << "standard defined by a recognized standards body, or , in the case of" << endl;
    cout << "interfaces specified for a particular programming language, one that" << endl;
    cout << "is widely used among developers working in that language." << endl;
    cout << endl;
    cout << "The \"System Libraries\" of an executable work include anything, other" << endl;
    cout << "than the work as a whole, that(a) is included in the normal form of" << endl;
    cout << "packaging a Major Component, but which is not part of that Major" << endl;
    cout << "Component, and (b)serves only to enable use of the work with that" << endl;
    cout << "Major Component, or to implement a Standard Interface for which an" << endl;
    cout << "implementation is available to the public in source code form.A" << endl;
    cout << "\"Major Component\", in this context, means a major essential component" << endl;
    cout << "(kernel, window system, and so on) of the specific operating system" << endl;
    cout << "(if any) on which the executable work runs, or a compiler used to" << endl;
    cout << "produce the work, or an object code interpreter used to run it." << endl;
    cout << endl;
    cout << "The \"Corresponding Source\" for a work in object code form means all" << endl;
    cout << "the source code needed to generate, install, and (for an executable" << endl;
    cout << "work) run the object codeand to modify the work, including scripts to" << endl;
    cout << "control those activities.However, it does not include the work's" << endl;
    cout << "System Libraries, or general - purpose tools or generally available free" << endl;
    cout << "programs which are used unmodified in performing those activities but" << endl;
    cout << "which are not part of the work.For example, Corresponding Source" << endl;
    cout << "includes interface definition files associated with source files for" << endl;
    cout << "the work, and the source code for shared librariesand dynamically" << endl;
    cout << "linked subprograms that the work is specifically designed to require," << endl;
    cout << "such as by intimate data communication or control flow between those" << endl;
    cout << "subprograms and other parts of the work." << endl;
    cout << endl;
    cout << "The Corresponding Source need not include anything that users" << endl;
    cout << "can regenerate automatically from other parts of the Corresponding" << endl;
    cout << "Source." << endl;
    cout << endl;
    cout << "The Corresponding Source for a work in source code form is that" << endl;
    cout << "same work." << endl;
    cout << endl;
    cout << "2. Basic Permissions." << endl;
    cout << endl;
    cout << "All rights granted under this License are granted for the term of" << endl;
    cout << "copyright on the Program, and are irrevocable provided the stated" << endl;
    cout << "conditions are met.This License explicitly affirms your unlimited" << endl;
    cout << "permission to run the unmodified Program.The output from running a" << endl;
    cout << "covered work is covered by this License only if the output, given its" << endl;
    cout << "content, constitutes a covered work.This License acknowledges your" << endl;
    cout << "rights of fair use or other equivalent, as provided by copyright law." << endl;
    cout << endl;
    cout << "You may make, runand propagate covered works that you do not" << endl;
    cout << "convey, without conditions so long as your license otherwise remains" << endl;
    cout << "in force.You may convey covered works to others for the sole purpose" << endl;
    cout << "of having them make modifications exclusively for you, or provide you" << endl;
    cout << "with facilities for running those works, provided that you comply with" << endl;
    cout << "the terms of this License in conveying all material for which you do" << endl;
    cout << "not control copyright.Those thus making or running the covered works" << endl;
    cout << "for you must do so exclusively on your behalf, under your direction" << endl;
    cout << "and control, on terms that prohibit them from making any copies of" << endl;
    cout << "your copyrighted material outside their relationship with you." << endl;
    cout << endl;
    cout << "Conveying under any other circumstances is permitted solely under" << endl;
    cout << "the conditions stated below.Sublicensing is not allowed; section 10" << endl;
    cout << "makes it unnecessary." << endl;
    cout << endl;
    cout << "3. Protecting Users' Legal Rights From Anti-Circumvention Law." << endl;
    cout << endl;
    cout << "No covered work shall be deemed part of an effective technological" << endl;
    cout << "measure under any applicable law fulfilling obligations under article" << endl;
    cout << "11 of the WIPO copyright treaty adopted on 20 December 1996, or" << endl;
    cout << "similar laws prohibiting or restricting circumvention of such" << endl;
    cout << "measures." << endl;
    cout << endl;
    cout << "When you convey a covered work, you waive any legal power to forbid" << endl;
    cout << "circumvention of technological measures to the extent such circumvention" << endl;
    cout << "is effected by exercising rights under this License with respect to" << endl;
    cout << "the covered work, and you disclaim any intention to limit operation or" << endl;
    cout << "modification of the work as a means of enforcing, against the work's" << endl;
    cout << "users, your or third parties' legal rights to forbid circumvention of" << endl;
    cout << "technological measures." << endl;
    cout << endl;
    cout << "4. Conveying Verbatim Copies." << endl;
    cout << endl;
    cout << "You may convey verbatim copies of the Program's source code as you" << endl;
    cout << "receive it, in any medium, provided that you conspicuouslyand" << endl;
    cout << "appropriately publish on each copy an appropriate copyright notice;" << endl;
    cout << "keep intact all notices stating that this Licenseand any" << endl;
    cout << "non - permissive terms added in accord with section 7 apply to the code;" << endl;
    cout << "keep intact all notices of the absence of any warranty;and give all" << endl;
    cout << "recipients a copy of this License along with the Program." << endl;
    cout << endl;
    cout << "You may charge any price or no price for each copy that you convey," << endl;
    cout << "and you may offer support or warranty protection for a fee." << endl;
    cout << endl;
    cout << "5. Conveying Modified Source Versions." << endl;
    cout << endl;
    cout << "You may convey a work based on the Program, or the modifications to" << endl;
    cout << "produce it from the Program, in the form of source code under the" << endl;
    cout << "terms of section 4, provided that you also meet all of these conditions :" << endl;
    cout << endl;
    cout << "a) The work must carry prominent notices stating that you modified" << endl;
    cout << "it, and giving a relevant date." << endl;
    cout << endl;
    cout << "b) The work must carry prominent notices stating that it is" << endl;
    cout << "released under this Licenseand any conditions added under section" << endl;
    cout << "7.  This requirement modifies the requirement in section 4 to" << endl;
    cout << "\"keep intact all notices\"." << endl;
    cout << endl;
    cout << "c) You must license the entire work, as a whole, under this" << endl;
    cout << "License to anyone who comes into possession of a copy.This" << endl;
    cout << "License will therefore apply, along with any applicable section 7" << endl;
    cout << "additional terms, to the whole of the work, and all its parts," << endl;
    cout << "regardless of how they are packaged.This License gives no" << endl;
    cout << "permission to license the work in any other way, but it does not" << endl;
    cout << "invalidate such permission if you have separately received it." << endl;
    cout << endl;
    cout << "d) If the work has interactive user interfaces, each must display" << endl;
    cout << "Appropriate Legal Notices; however, if the Program has interactive" << endl;
    cout << "interfaces that do not display Appropriate Legal Notices, your" << endl;
    cout << "work need not make them do so." << endl;
    cout << endl;
    cout << "A compilation of a covered work with other separateand independent" << endl;
    cout << "works, which are not by their nature extensions of the covered work," << endl;
    cout << "and which are not combined with it such as to form a larger program," << endl;
    cout << "in or on a volume of a storage or distribution medium, is called an" << endl;
    cout << "\"aggregate\" if the compilationand its resulting copyright are not" << endl;
    cout << "used to limit the access or legal rights of the compilation's users" << endl;
    cout << "beyond what the individual works permit.Inclusion of a covered work" << endl;
    cout << "in an aggregate does not cause this License to apply to the other" << endl;
    cout << "parts of the aggregate." << endl;
    cout << endl;
    cout << "6. Conveying Non - Source Forms." << endl;
    cout << endl;
    cout << "You may convey a covered work in object code form under the terms" << endl;
    cout << "of sections 4 and 5, provided that you also convey the" << endl;
    cout << "machine - readable Corresponding Source under the terms of this License," << endl;
    cout << "in one of these ways :" << endl;
    cout << endl;
    cout << "a) Convey the object code in, or embodied in, a physical product" << endl;
    cout << "(including a physical distribution medium), accompanied by the" << endl;
    cout << "Corresponding Source fixed on a durable physical medium" << endl;
    cout << "customarily used for software interchange." << endl;
    cout << endl;
    cout << "b) Convey the object code in, or embodied in, a physical product" << endl;
    cout << "(including a physical distribution medium), accompanied by a" << endl;
    cout << "written offer, valid for at lwest three yearsand valid for as" << endl;
    cout << "long as you offer spare parts or customer support for that product" << endl;
    cout << "model, to give anyone who possesses the object code either(1) a" << endl;
    cout << "copy of the Corresponding Source for all the software in the" << endl;
    cout << "product that is covered by this License, on a durable physical" << endl;
    cout << "medium customarily used for software interchange, for a price no" << endl;
    cout << "more than your reasonable cost of physically performing this" << endl;
    cout << "conveying of source, or (2) access to copy the" << endl;
    cout << "Corresponding Source from a network server at no charge." << endl;
    cout << endl;
    cout << "c) Convey individual copies of the object code with a copy of the" << endl;
    cout << "written offer to provide the Corresponding Source.This" << endl;
    cout << "alternative is allowed only occasionallyand noncommercially, and" << endl;
    cout << "only if you received the object code with such an offer, in accord" << endl;
    cout << "with subsection 6b." << endl;
    cout << endl;
    cout << "d) Convey the object code by offering access from a designated" << endl;
    cout << "place(gratis or for a charge), and offer equivalent access to the" << endl;
    cout << "Corresponding Source in the same way through the same place at no" << endl;
    cout << "further charge.You need not require recipients to copy the" << endl;
    cout << "Corresponding Source along with the object code.If the place to" << endl;
    cout << "copy the object code is a network server, the Corresponding Source" << endl;
    cout << "may be on a different server(operated by you or a third party)" << endl;
    cout << "that supports equivalent copying facilities, provided you maintain" << endl;
    cout << "lear directions next to the object code saying where to find the" << endl;
    cout << "Corresponding Source.Regardless of what server hosts the" << endl;
    cout << "Corresponding Source, you remain obligated to ensure that it is" << endl;
    cout << "available for as long as needed to satisfy these requirements." << endl;
    cout << endl;
    cout << "e) Convey the object code using peer - to - peer transmission, provided" << endl;
    cout << "you inform other peers where the object codeand Corresponding" << endl;
    cout << "Source of the work are being offered to the general public at no" << endl;
    cout << "charge under subsection 6d." << endl;
    cout << endl;
    cout << "A separable portion of the object code, whose source code is excluded" << endl;
    cout << "from the Corresponding Source as a System Library, need not be" << endl;
    cout << "included in conveying the object code work." << endl;
    cout << endl;
    cout << "A \"User Product\" is either(1) a \"consumer product\", which means any" << endl;
    cout << "tangible personal property which is normally used for personal, family," << endl;
    cout << "or household purposes, or (2) anything designed or sold for incorporation" << endl;
    cout << "into a dwelling.In determining whether a product is a consumer product," << endl;
    cout << "doubtful cases shall be resolved in favor of coverage.For a particular" << endl;
    cout << "product received by a particular user, \"normally used\" refers to a" << endl;
    cout << "typical or common use of that class of product, regardless of the status" << endl;
    cout << "of the particular user or of the way in which the particular user" << endl;
    cout << "actually uses, or expects or is expected to use, the product.A product" << endl;
    cout << "is a consumer product regardless of whether the product has substantial" << endl;
    cout << "commercial, industrial or non - consumer uses, unless such uses represent" << endl;
    cout << "the only significant mode of use of the product." << endl;
    cout << endl;
    cout << "\"Installation Information\" for a User Product means any methods," << endl;
    cout << "procedures, authorization keys, or other information required to install" << endl;
    cout << "and execute modified versions of a covered work in that User Product from" << endl;
    cout << "a modified version of its Corresponding Source.The information must" << endl;
    cout << "suffice to ensure that the continued functioning of the modified object" << endl;
    cout << "code is in no case prevented or interfered with solely because" << endl;
    cout << "modification has been made." << endl;
    cout << endl;
    cout << "If you convey an object code work under this section in, or with, or" << endl;
    cout << "specifically for use in, a User Product, and the conveying occurs as" << endl;
    cout << "part of a transaction in which the right of possessionand use of the" << endl;
    cout << "User Product is transferred to the recipient in perpetuity or for a" << endl;
    cout << "fixed term(regardless of how the transaction is characterized), the" << endl;
    cout << "Corresponding Source conveyed under this section must be accompanied" << endl;
    cout << "by the Installation Information.But this requirement does not apply" << endl;
    cout << "if neither you nor any third party retains the ability to install" << endl;
    cout << "modified object code on the User Product(for example, the work has" << endl;
    cout << "been installed in ROM)." << endl;
    cout << endl;
    cout << "The requirement to provide Installation Information does not include a" << endl;
    cout << "requirement to continue to provide support service, warranty, or updates" << endl;
    cout << "for a work that has been modified or installed by the recipient, or for" << endl;
    cout << "the User Product in which it has been modified or installed.Access to a" << endl;
    cout << "network may be denied when the modification itself materially and" << endl;
    cout << "adversely affects the operation of the network or violates the rules and" << endl;
    cout << "protocols for communication across the network." << endl;
    cout << endl;
    cout << "Corresponding Source conveyed, and Installation Information provided," << endl;
    cout << "in accord with this section must be in a format that is publicly" << endl;
    cout << "documented(and with an implementation available to the public in" << endl;
    cout << "source code form), and must require no special password or key for" << endl;
    cout << "unpacking, reading or copying." << endl;
    cout << endl;
    cout << "7. Additional Terms." << endl;
    cout << endl;
    cout << "\"Additional permissions\" are terms that supplement the terms of this" << endl;
    cout << "License by making exceptions from one or more of its conditions." << endl;
    cout << "Additional permissions that are applicable to the entire Program shall" << endl;
    cout << "be treated as though they were included in this License, to the extent" << endl;
    cout << "that they are valid under applicable law.If additional permissions" << endl;
    cout << "apply only to part of the Program, that part may be used separately" << endl;
    cout << "under those permissions, but the entire Program remains governed by" << endl;
    cout << "this License without regard to the additional permissions." << endl;
    cout << endl;
    cout << "When you convey a copy of a covered work, you may at your option" << endl;
    cout << "remove any additional permissions from that copy, or from any part of" << endl;
    cout << "it.  (Additional permissions may be written to require their own" << endl;
    cout << "removal in certain cases when you modify the work.)  You may place" << endl;
    cout << "additional permissions on material, added by you to a covered work," << endl;
    cout << "for which you have or can give appropriate copyright permission." << endl;
    cout << endl;
    cout << "Notwithstanding any other provision of this License, for material you" << endl;
    cout << "add to a covered work, you may(if authorized by the copyright holders of" << endl;
    cout << "that material) supplement the terms of this License with terms :" << endl;
    cout << endl;
    cout << "a) Disclaiming warranty or limiting liability differently from the" << endl;
    cout << "terms of sections 15 and 16 of this License; or" << endl;
    cout << endl;
    cout << "b) Requiring preservation of specified reasonable legal notices or" << endl;
    cout << "author attributions in that material or in the Appropriate Legal" << endl;
    cout << "Notices displayed by works containing it; or" << endl;
    cout << endl;
    cout << "c) Prohibiting misrepresentation of the origin of that material, or" << endl;
    cout << "requiring that modified versions of such material be marked in" << endl;
    cout << "reasonable ways as different from the original version; or" << endl;
    cout << endl;
    cout << "d) Limiting the use for publicity purposes of names of licensors or" << endl;
    cout << "authors of the material; or" << endl;
    cout << endl;
    cout << "e) Declining to grant rights under trademark law for use of some" << endl;
    cout << "trade names, trademarks, or service marks; or" << endl;
    cout << endl;
    cout << "f) Requiring indemnification of licensorsand authors of that" << endl;
    cout << "material by anyone who conveys the material(or modified versions of" << endl;
    cout << "it) with contractual assumptions of liability to the recipient, for" << endl;
    cout << "any liability that these contractual assumptions directly impose on" << endl;
    cout << "those licensorsand authors." << endl;
    cout << endl;
    cout << "All other non - permissive additional terms are considered \"further" << endl;
    cout << "restrictions\" within the meaning of section 10.  If the Program as you" << endl;
    cout << "received it, or any part of it, contains a notice stating that it is" << endl;
    cout << "governed by this License along with a term that is a further" << endl;
    cout << "restriction, you may remove that term.If a license document contains" << endl;
    cout << "a further restriction but permits relicensing or conveying under this" << endl;
    cout << "License, you may add to a covered work material governed by the terms" << endl;
    cout << "of that license document, provided that the further restriction does" << endl;
    cout << "not survive such relicensing or conveying." << endl;
    cout << endl;
    cout << "If you add terms to a covered work in accord with this section, you" << endl;
    cout << "must place, in the relevant source files, a statement of the" << endl;
    cout << "additional terms that apply to those files, or a notice indicating" << endl;
    cout << "where to find the applicable terms." << endl;
    cout << endl;
    cout << "Additional terms, permissive or non - permissive, may be stated in the" << endl;
    cout << "form of a separately written license, or stated as exceptions;" << endl;
    cout << "the above requirements apply either way." << endl;
    cout << endl;
    cout << "8. Termination." << endl;
    cout << endl;
    cout << "You may not propagate or modify a covered work except as expressly" << endl;
    cout << "provided under this License.Any attempt otherwise to propagate or" << endl;
    cout << "modify it is void, and will automatically terminate your rights under" << endl;
    cout << "this License(including any patent licenses granted under the third" << endl;
    cout << "paragraph of section 11)." << endl;
    cout << endl;
    cout << "However, if you cease all violation of this License, then your" << endl;
    cout << "license from a particular copyright holder is reinstated(a)" << endl;
    cout << "provisionally, unlessand until the copyright holder explicitlyand" << endl;
    cout << "finally terminates your license, and (b)permanently, if the copyright" << endl;
    cout << "holder fails to notify you of the violation by some reasonable means" << endl;
    cout << "prior to 60 days after the cessation." << endl;
    cout << endl;
    cout << "Moreover, your license from a particular copyright holder is" << endl;
    cout << "reinstated permanently if the copyright holder notifies you of the" << endl;
    cout << "violation by some reasonable means, this is the first time you have" << endl;
    cout << "received notice of violation of this License(for any work) from that" << endl;
    cout << "copyright holder, and you cure the violation prior to 30 days after" << endl;
    cout << "your receipt of the notice." << endl;
    cout << endl;
    cout << "Termination of your rights under this section does not terminate the" << endl;
    cout << "licenses of parties who have received copies or rights from you under" << endl;
    cout << "this License.If your rights have been terminated and not permanently" << endl;
    cout << "reinstated, you do not qualify to receive new licenses for the same" << endl;
    cout << "material under section 10." << endl;
    cout << endl;
    cout << "9. Acceptance Not Required for Having Copies." << endl;
    cout << endl;
    cout << "You are not required to accept this License in order to receive or" << endl;
    cout << "run a copy of the Program.Ancillary propagation of a covered work" << endl;
    cout << "occurring solely as a consequence of using peer - to - peer transmission" << endl;
    cout << "to receive a copy likewise does not require acceptance.However," << endl;
    cout << "nothing other than this License grants you permission to propagate or" << endl;
    cout << "modify any covered work.These actions infringe copyright if you do" << endl;
    cout << "not accept this License.Therefore, by modifying or propagating a" << endl;
    cout << "covered work, you indicate your acceptance of this License to do so." << endl;
    cout << endl;
    cout << "10. Automatic Licensing of Downstream Recipients." << endl;
    cout << endl;
    cout << "Each time you convey a covered work, the recipient automatically" << endl;
    cout << "receives a license from the original licensors, to run, modifyand" << endl;
    cout << "propagate that work, subject to this License.You are not responsible" << endl;
    cout << "for enforcing compliance by third parties with this License." << endl;
    cout << endl;
    cout << "An \"entity transaction\" is a transaction transferring control of an" << endl;
    cout << "organization, or substantially all assets of one, or subdividing an" << endl;
    cout << "organization, or merging organizations.If propagation of a covered" << endl;
    cout << "work results from an entity transaction, each party to that" << endl;
    cout << "transaction who receives a copy of the work also receives whatever" << endl;
    cout << "licenses to the work the party's predecessor in interest had or could" << endl;
    cout << "give under the previous paragraph, plus a right to possession of the" << endl;
    cout << "Corresponding Source of the work from the predecessor in interest, if" << endl;
    cout << "the predecessor has it or can get it with reasonable efforts." << endl;
    cout << endl;
    cout << "You may not impose any further restrictions on the exercise of the" << endl;
    cout << "rights granted or affirmed under this License.For example, you may" << endl;
    cout << "not impose a license fee, royalty, or other charge for exercise of" << endl;
    cout << "rights granted under this License, and you may not initiate litigation" << endl;
    cout << "(including a cross - claim or counterclaim in a lawsuit) alleging that" << endl;
    cout << "any patent claim is infringed by making, using, selling, offering for" << endl;
    cout << "sale, or importing the Program or any portion of it." << endl;
    cout << endl;
    cout << "11. Patents." << endl;
    cout << endl;
    cout << "A \"contributor\" is a copyright holder who authorizes use under this" << endl;
    cout << "License of the Program or a work on which the Program is based.The" << endl;
    cout << "work thus licensed is called the contributor's \"contributor version\"." << endl;
    cout << endl;
    cout << "A contributor's \"essential patent claims\" are all patent claims" << endl;
    cout << "owned or controlled by the contributor, whether already acquired or" << endl;
    cout << "hereafter acquired, that would be infringed by some manner, permitted" << endl;
    cout << "by this License, of making, using, or selling its contributor version," << endl;
    cout << "but do not include claims that would be infringed only as a" << endl;
    cout << "consequence of further modification of the contributor version. For" << endl;
    cout << "purposes of this definition, \"control\" includes the right to grant" << endl;
    cout << "patent sublicenses in a manner consistent with the requirements of" << endl;
    cout << "this License." << endl;
    cout << endl;
    cout << "Each contributor grants you a non - exclusive, worldwide, royalty - free" << endl;
    cout << "patent license under the contributor's essential patent claims, to" << endl;
    cout << "make, use, sell, offer for sale, importand otherwise run, modifyand" << endl;
    cout << "propagate the contents of its contributor version." << endl;
    cout << endl;
    cout << "In the following three paragraphs, a \"patent license\" is any express" << endl;
    cout << "agreement or commitment, however denominated, not to enforce a patent" << endl;
    cout << "(such as an express permission to practice a patent or covenant not to" << endl;
    cout << "sue for patent infringement).To \"grant\" such a patent license to a" << endl;
    cout << "party means to make such an agreement or commitment not to enforce a" << endl;
    cout << "patent against the party." << endl;
    cout << endl;
    cout << "If you convey a covered work, knowingly relying on a patent license," << endl;
    cout << "and the Corresponding Source of the work is not available for anyone" << endl;
    cout << "to copy, free of chargeand under the terms of this License, through a" << endl;
    cout << "publicly available network server or other readily accessible means," << endl;
    cout << "then you must either(1) cause the Corresponding Source to be so" << endl;
    cout << "available, or (2) arrange to deprive yourself of the benefit of the" << endl;
    cout << "patent license for this particular work, or (3) arrange, in a manner" << endl;
    cout << "consistent with the requirements of this License, to extend the patent" << endl;
    cout << "license to downstream recipients.  \"Knowingly relying\" means you have" << endl;
    cout << "actual knowledge that, but for the patent license, your conveying the" << endl;
    cout << "covered work in a country, or your recipient's use of the covered work" << endl;
    cout << "in a country, would infringe one or more identifiable patents in that" << endl;
    cout << "country that you have reason to believe are valid." << endl;
    cout << endl;
    cout << "If, pursuant to or in connection with a single transaction or" << endl;
    cout << "arrangement, you convey, or propagate by procuring conveyance of, a" << endl;
    cout << "covered work, and grant a patent license to some of the parties" << endl;
    cout << "receiving the covered work authorizing them to use, propagate, modify" << endl;
    cout << "or convey a specific copy of the covered work, then the patent license" << endl;
    cout << "you grant is automatically extended to all recipients of the covered" << endl;
    cout << "workand works based on it." << endl;
    cout << endl;
    cout << "A patent license is \"discriminatory\" if it does not include within" << endl;
    cout << "the scope of its coverage, prohibits the exercise of, or is" << endl;
    cout << "conditioned on the non - exercise of one or more of the rights that are" << endl;
    cout << "specifically granted under this License.You may not convey a covered" << endl;
    cout << "work if you are a party to an arrangement with a third party that is" << endl;
    cout << "in the business of distributing software, under which you make payment" << endl;
    cout << "to the third party based on the extent of your activity of conveying" << endl;
    cout << "the work, and under which the third party grants, to any of the" << endl;
    cout << "parties who would receive the covered work from you, a discriminatory" << endl;
    cout << "patent license(a) in connection with copies of the covered work" << endl;
    cout << "conveyed by you(or copies made from those copies), or (b)primarily" << endl;
    cout << "forand in connection with specific products or compilations that" << endl;
    cout << "contain the covered work, unless you entered into that arrangement," << endl;
    cout << "or that patent license was granted, prior to 28 March 2007." << endl;
    cout << endl;
    cout << "Nothing in this License shall be construed as excluding or limiting" << endl;
    cout << "any implied license or other defenses to infringement that may" << endl;
    cout << "otherwise be available to you under applicable patent law." << endl;
    cout << endl;
    cout << "12. No Surrender of Others' Freedom." << endl;
    cout << endl;
    cout << "If conditions are imposed on you(whether by court order, agreement or" << endl;
    cout << "otherwise) that contradict the conditions of this License, they do not" << endl;
    cout << "excuse you from the conditions of this License.If you cannot convey a" << endl;
    cout << "covered work so as to satisfy simultaneously your obligations under this" << endl;
    cout << "Licenseand any other pertinent obligations, then as a consequence you may" << endl;
    cout << "not convey it at all.For example, if you agree to terms that obligate you" << endl;
    cout << "to collect a royalty for further conveying from those to whom you convey" << endl;
    cout << "the Program, the only way you could satisfy both those termsand this" << endl;
    cout << "License would be to refrain entirely from conveying the Program." << endl;
    cout << endl;
    cout << "13. Use with the GNU Affero General Public License." << endl;
    cout << endl;
    cout << "Notwithstanding any other provision of this License, you have" << endl;
    cout << "permission to link or combine any covered work with a work licensed" << endl;
    cout << "under version 3 of the GNU Affero General Public License into a single" << endl;
    cout << "combined work, and to convey the resulting work.The terms of this" << endl;
    cout << "License will continue to apply to the part which is the covered work," << endl;
    cout << "but the special requirements of the GNU Affero General Public License," << endl;
    cout << "section 13, concerning interaction through a network will apply to the" << endl;
    cout << "combination as such." << endl;
    cout << endl;
    cout << "14. Revised Versions of this License." << endl;
    cout << endl;
    cout << "The Free Software Foundation may publish revised and /or new versions of" << endl;
    cout << "the GNU General Public License from time to time.Such new versions will" << endl;
    cout << "be similar in spirit to the present version, but may differ in detail to" << endl;
    cout << "address new problems or concerns." << endl;
    cout << endl;
    cout << "Each version is given a distinguishing version number.If the" << endl;
    cout << "Program specifies that a certain numbered version of the GNU General" << endl;
    cout << "Public License \"or any later version\" applies to it, you have the" << endl;
    cout << "option of following the termsand conditions either of that numbered" << endl;
    cout << "version or of any later version published by the Free Software" << endl;
    cout << "Foundation.If the Program does not specify a version number of the" << endl;
    cout << "GNU General Public License, you may choose any version ever published" << endl;
    cout << "by the Free Software Foundation." << endl;
    cout << endl;
    cout << "If the Program specifies that a proxy can decide which future" << endl;
    cout << "versions of the GNU General Public License can be used, that proxy's" << endl;
    cout << "public statement of acceptance of a version permanently authorizes you" << endl;
    cout << "to choose that version for the Program." << endl;
    cout << endl;
    cout << "Later license versions may give you additional or different" << endl;
    cout << "permissions.However, no additional obligations are imposed on any" << endl;
    cout << "author or copyright holder as a result of your choosing to follow a" << endl;
    cout << "later version." << endl;
    cout << endl;
    cout << "15. Disclaimer of Warranty." << endl;
    cout << endl;
    cout << "THERE IS NO WARRANTY FOR THE PROGRAM, TO THE EXTENT PERMITTED BY" << endl;
    cout << "APPLICABLE LAW.EXCEPT WHEN OTHERWISE STATED IN WRITING THE COPYRIGHT" << endl;
    cout << "HOLDERS AND / OR OTHER PARTIES PROVIDE THE PROGRAM \"AS IS\" WITHOUT WARRANTY" << endl;
    cout << "OF ANY KIND, EITHER EXPRESSED OR IMPLIED, INCLUDING, BUT NOT LIMITED TO," << endl;
    cout << "THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR" << endl;
    cout << "PURPOSE.THE ENTIRE RISK AS TO THE QUALITY AND PERFORMANCE OF THE PROGRAM" << endl;
    cout << "IS WITH YOU.SHOULD THE PROGRAM PROVE DEFECTIVE, YOU ASSUME THE COST OF" << endl;
    cout << "ALL NECESSARY SERVICING, REPAIR OR CORRECTION." << endl;
    cout << endl;
    cout << "16. Limitation of Liability." << endl;
    cout << endl;
    cout << "IN NO EVENT UNLESS REQUIRED BY APPLICABLE LAW OR AGREED TO IN WRITING" << endl;
    cout << "WILL ANY COPYRIGHT HOLDER, OR ANY OTHER PARTY WHO MODIFIES AND / OR CONVEYS" << endl;
    cout << "THE PROGRAM AS PERMITTED ABOVE, BE LIABLE TO YOU FOR DAMAGES, INCLUDING ANY" << endl;
    cout << "GENERAL, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES ARISING OUT OF THE" << endl;
    cout << "USE OR INABILITY TO USE THE PROGRAM(INCLUDING BUT NOT LIMITED TO LOSS OF" << endl;
    cout << "DATA OR DATA BEING RENDERED INACCURATE OR LOSSES SUSTAINED BY YOU OR THIRD" << endl;
    cout << "PARTIES OR A FAILURE OF THE PROGRAM TO OPERATE WITH ANY OTHER PROGRAMS)," << endl;
    cout << "EVEN IF SUCH HOLDER OR OTHER PARTY HAS BEEN ADVISED OF THE POSSIBILITY OF" << endl;
    cout << "SUCH DAMAGES." << endl;
    cout << endl;
    cout << "17. Interpretation of Sections 15 and 16." << endl;
    cout << endl;
    cout << "If the disclaimer of warranty and limitation of liability provided" << endl;
    cout << "above cannot be given local legal effect according to their terms," << endl;
    cout << "reviewing courts shall apply local law that most closely approximates" << endl;
    cout << "an absolute waiver of all civil liability in connection with the" << endl;
    cout << "Program, unless a warranty or assumption of liability accompanies a" << endl;
    cout << "copy of the Program in return for a fee." << endl;
    cout << endl;
    cout << "END OF TERMS AND CONDITIONS" << endl;
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