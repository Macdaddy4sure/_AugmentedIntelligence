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
#include "Time.hpp"
#include "Mathematics.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Reference.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;

// The following function will take a string of text and perform arithmetic operations on the time
//void _Time::TimeArithmetic(string text, double& result)
//{
//    auto t = std::time(nullptr);
//    auto tm = *std::localtime(&t);
//
//    long long spaces = 0;
//    long long change_days;
//    long long change_months;
//    long long change_years;
//    long long change_weeks;
//    long long change_hours;
//    long long change_minutes;
//    long long change_seconds;
//    string change_temp;
//    bool weeks;
//    long long current_months;
//    long long current_days;
//    long long current_years;
//    long long current_hours;
//    long long current_minutes;
//    long long current_seconds;
//    signed long long result_days;
//    signed long long result_months;
//    signed long long result_years;
//    signed long long result_weeks;
//    signed long long result_hours;
//    signed long long result_minutes;
//    signed long long result_seconds;
//    int count = 0;
//    long long temp_seconds1;
//    long long temp_seconds2;
//    long long result_seconds1;
//    long long temp_days = 0;
//    string temp;
//    ostringstream oss;
//
//    oss << put_time(&tm, "%d-%m-%Y_%H-%M-%S");
//    string date = oss.str();
//
//    // Separate the individual time places into integer variables
//    for (int x = 0; x <= date.length(); x++)
//    {
//        if (date[x] == '-' || date[x] == '_')
//        {
//            count++;
//        }
//
//        if (count == 0)
//        {
//            temp = "";
//
//            for (int y = x; date[y] != '-'; y++)
//            {
//                temp += date[y];
//            }
//
//            istringstream(temp) >> current_days;
//            //current_days = stoi(temp);
//            x += temp.length();
//        }
//        else if (count == 1)
//        {
//            temp = "";
//
//            for (int z = x + 1; date[z] != '-'; z++)
//            {
//                temp += date[z];
//            }
//
//            istringstream(temp) >> current_months;
//            //current_months = stoi(temp);
//            x += temp.length();
//        }
//        else if (count == 2)
//        {
//            temp = "";
//
//            for (int a = x + 1; date[a] != '_'; a++)
//            {
//                temp += date[a];
//            }
//
//            istringstream(temp) >> current_years;
//            //current_years = stoi(temp);
//            x += temp.length();
//        }
//        else if (count == 3)
//        {
//            temp = "";
//
//            for (int b = x + 1; date[b] != '-'; b++)
//            {
//                temp += date[b];
//            }
//
//            istringstream(temp) >> current_hours;
//            //current_hours = stoi(temp);
//            x += temp.length();
//        }
//        else if (count == 4)
//        {
//            temp = "";
//
//            for (int c = x + 1; date[c] != '-'; c++)
//            {
//                temp += date[c];
//            }
//
//            istringstream(temp) >> current_minutes;
//            //current_minutes = stoi(temp);
//            x += temp.length();
//        }
//        else if (count == 5)
//        {
//            temp = "";
//
//            for (int d = x + 1; d < date.length(); d++)
//            {
//                temp += date[d];
//            }
//
//            istringstream(temp) >> current_seconds;
//            //current_seconds = stoi(temp);
//            break;
//        }
//    }
//
//    // Parse the string into individual words
//    string* words = _Utilities::String2Words(text);
//
//    // Get the places from the string
//    //  Search for days
//    for (int a = 0; a <= spaces; a++)
//    {
//        if (words[a] == "days" || words[a] == "day")
//        {
//            // Get the number of days change
//            change_temp = _Math::NumberName(words[a - 1]);
//            istringstream(change_temp) >> change_days;
//            //change_days = stoi(change_temp);
//        }
//        if (words[a] == "month" || words[a] == "months")
//        {
//            // Get the number of months change
//            change_temp = _Math::NumberName(words[a - 1]);
//            istringstream(change_temp) >> change_months;
//            //change_months = stoi(change_temp);
//        }
//        if (words[a] == "years" || words[a] == "year")
//        {
//            // Get the number of years change
//            change_temp = _Math::NumberName(words[a - 1]);
//            istringstream(change_temp) >> change_years;
//            //change_years = stoi(change_temp);
//        }
//        if (words[a] == "week" || words[a] == "weeks")
//        {
//            // Get the number of weeks change
//            change_temp = _Math::NumberName(words[a - 1]);
//            istringstream(change_temp) >> change_weeks;
//            //change_weeks = stoi(change_temp);
//            weeks = true;
//        }
//        if (words[a] == "hours" || words[a] == "hour")
//        {
//            // Get the number of hours change
//            change_temp = _Math::NumberName(words[a - 1]);
//            istringstream(change_temp) >> change_hours;
//            //change_hours = stoi(change_temp);
//        }
//        if (words[a] == "minutes" || words[a] == "minute")
//        {
//            // Get the number of minutes change
//            change_temp = _Math::NumberName(words[a - 1]);
//            istringstream(change_temp) >> change_minutes;
//            //change_minutes = stoi(change_temp);
//        }
//        if (words[a] == "seconds" || words[a] == "second")
//        {
//            // Get the number of seconds change
//            change_temp = _Math::NumberName(words[a - 1]);
//            istringstream(change_temp) >> change_seconds;
//            //change_seconds = stoi(change_temp);
//        }
//    }
//
//    // Find the operation in the text string
//    for (int b = 0; b <= spaces; b++)
//    {
//        if (words[b] == "minus" || (words[b] == "from" && words[b + 1] == "now") || (words[b] == "decreased") || (words[b] == "decreased" && words[b + 1] == "by") || (words[b] == "less") || (words[b] == "difference") || (words[b] == "less" && words[b + 1] == "than"))
//        {
//            // Check for change in weeks keyword
//            if (weeks)
//            {
//                temp_seconds1 = (current_years * 31540000);
//                temp_seconds1 += current_seconds;
//                temp_seconds1 += (current_minutes * 60);
//                temp_seconds1 += current_hours * 3600;
//
//                // Count the number of days in all months to the current month and day
//                for (int c = 1; c < current_months; c++)
//                {
//                    temp_days += _Time::GetDaysMonth(current_years, c);
//                }
//
//                temp_days += current_days - 1;
//                temp_seconds1 += 86400 * temp_days;
//
//                temp_seconds2 = 7 * change_weeks * 604800;
//
//                result_seconds1 = temp_seconds1 - temp_seconds2;
//
//                // Convert result_seconds1 to years, months, days, hours, minutes, seconds
//                result_years = result_seconds1 / 31540000;
//
//                result_seconds1 = result_seconds1 % 31540000;
//
//                // Get the number of days since the start of the result year
//                result_days = result_seconds1 / 86400;
//
//                // Get the number of months from the number of days
//                for (int c = 1; result_days - _Time::GetDaysMonth(result_years, c) >= 0; c++)
//                {
//                    result_months++;
//                }
//
//                // Get the remaining seconds from the number of seconds per day
//                result_seconds1 = result_seconds1 % 86400;
//
//                // Get the number of hours
//                result_hours = result_seconds1 / 3600;
//
//                // Get the remaining seconds from the seconds per hour
//                result_seconds1 = result_seconds1 % 3600;
//
//                // Get the number of minutes
//                result_minutes = result_seconds1 / 60;
//
//                // Get the remaining seconds from the seconds per minutes
//                result_seconds1 = result_seconds1 % 60;
//
//                // Get the number of seconds
//                result_seconds = result_seconds1;
//
//                // Print the result to the screen or send to API
//                cout << "Current Time Minus Duration" << endl;
//                cout << "years/months/days/hours:minutes:seconds" << endl;
//                cout << current_years << "/" << current_months << "/" << current_days << "/" << current_hours << ":" << current_minutes << ":" << current_seconds << " - ";
//
//                if (change_weeks == 1)
//                {
//                    cout << change_weeks << "week" << endl;
//                }
//                else
//                {
//                    cout << change_weeks << "weeks" << endl;
//                }
//
//                cout << endl;
//                cout << result_years << "/" << result_months << "/" << result_days << "/" << result_hours << ":" << result_minutes << ":" << result_seconds << endl;
//            }
//            else
//            {
//                // Subtract the current time by an amount of time
//                // Convert the current time to the number of seconds
//                temp_seconds1 = (current_years * 31540000);
//
//                // Count the number of seconds until the current day
//                temp_seconds1 += current_seconds;
//                temp_seconds1 += (current_minutes * 60);
//                temp_seconds1 += current_hours * 3600;
//
//                // Count the number of days in all months to the current month and day
//                for (int c = 1; c < current_months; c++)
//                {
//                    temp_days += _Time::GetDaysMonth(current_years, c);
//                }
//
//                // Get the number of days in the current month minus 1
//                temp_days += current_days - 1;
//                temp_seconds1 += 86400 * temp_days;
//
//                // Convert the number of change units to seconds
//                temp_days = 0;
//
//                temp_seconds2 = (change_years * 31540000);
//
//                temp_seconds2 += change_seconds;
//                temp_seconds2 += (change_minutes * 60);
//
//                for (int c = 1; c < change_months; c++)
//                {
//                    temp_days += _Time::GetDaysMonth(change_years, c);
//                }
//
//                temp_days += change_days - 1;
//                temp_seconds2 += 86400 * temp_days;
//
//                // Subtract the number of seconds
//                result_seconds1 += temp_seconds1 - temp_seconds2;
//
//                // Convert result_seconds1 to years, months, days, hours, minutes, seconds
//                result_years = result_seconds1 / 31540000;
//
//                result_seconds1 = result_seconds1 % 31540000;
//
//                // Get the number of days since the start of the result year
//                result_days = result_seconds1 / 86400;
//
//                // Get the number of months from the number of days
//                for (int c = 1; result_days - _Time::GetDaysMonth(result_years, c) >= 0; c++)
//                {
//                    result_months++;
//                }
//
//                // Get the remaining seconds from the number of seconds per day
//                result_seconds1 = result_seconds1 % 86400;
//
//                // Get the number of hours
//                result_hours = result_seconds1 / 3600;
//
//                // Get the remaining seconds from the seconds per hour
//                result_seconds1 = result_seconds1 % 3600;
//
//                // Get the number of minutes
//                result_minutes = result_seconds1 / 60;
//
//                // Get the remaining seconds from the seconds per minutes
//                result_seconds1 = result_seconds1 % 60;
//
//                // Get the number of seconds
//                result_seconds = result_seconds1;
//
//                // Print the result to the screen or send to API
//                cout << "Current Time Minus Duration" << endl;
//                cout << "years/months/days/hours:minutes:seconds" << endl;
//                cout << current_years << "/" << current_months << "/" << current_days << "/" << current_hours << ":" << current_minutes << ":" << current_seconds << " - ";
//                cout << change_years << "/" << change_months << "/" << change_days << "/" << change_hours << ":" << change_minutes << ":" << change_seconds << endl;
//                cout << endl;
//                cout << result_years << "/" << result_months << "/" << result_days << "/" << result_hours << ":" << result_minutes << ":" << result_seconds << endl;
//            }
//        }
//        if ((words[b] == "increased" && words[b + 1] == "by") || (words[b] == "more" && words[b + 1] == "than") || (words[b] == "combined") || (words[b] == "plus") || (words[b] == "sum"))
//        {
//            // Check for change in weeks keyword
//            if (weeks)
//            {
//                temp_seconds1 = (current_years * 31540000);
//                temp_seconds1 += current_seconds;
//                temp_seconds1 += (current_minutes * 60);
//                temp_seconds1 += current_hours * 3600;
//
//                // Count the number of days in all months to the current month and day
//                for (int c = 1; c < current_months; c++)
//                {
//                    temp_days += _Time::GetDaysMonth(current_years, c);
//                }
//
//                temp_days += current_days - 1;
//                temp_seconds1 += 86400 * temp_days;
//
//                temp_seconds2 = 7 * change_weeks * 604800;
//
//                result_seconds1 = temp_seconds1 + temp_seconds2;
//
//                // Convert result_seconds1 to years, months, days, hours, minutes, seconds
//                result_years = result_seconds1 / 31540000;
//
//                result_seconds1 = result_seconds1 % 31540000;
//
//                // Get the number of days since the start of the result year
//                result_days = result_seconds1 / 86400;
//
//                // Get the number of months from the number of days
//                for (int c = 1; result_days - _Time::GetDaysMonth(result_years, c) >= 0; c++)
//                {
//                    result_months++;
//                }
//
//                // Get the remaining seconds from the number of seconds per day
//                result_seconds1 = result_seconds1 % 86400;
//
//                // Get the number of hours
//                result_hours = result_seconds1 / 3600;
//
//                // Get the remaining seconds from the seconds per hour
//                result_seconds1 = result_seconds1 % 3600;
//
//                // Get the number of minutes
//                result_minutes = result_seconds1 / 60;
//
//                // Get the remaining seconds from the seconds per minutes
//                result_seconds1 = result_seconds1 % 60;
//
//                // Get the number of seconds
//                result_seconds = result_seconds1;
//
//                // Print the result to the screen or send to API
//                cout << "Current Time Minus Duration" << endl;
//                cout << "years/months/days/hours:minutes:seconds" << endl;
//                cout << current_years << "/" << current_months << "/" << current_days << "/" << current_hours << ":" << current_minutes << ":" << current_seconds << " + ";
//
//                if (change_weeks == 1)
//                {
//                    cout << change_weeks << "week" << endl;
//                }
//                else
//                {
//                    cout << change_weeks << "weeks" << endl;
//                }
//
//                cout << endl;
//                cout << result_years << "/" << result_months << "/" << result_days << "/" << result_hours << ":" << result_minutes << ":" << result_seconds << endl;
//            }
//            else
//            {
//                // Subtract the current time by an amount of time
//                // Convert the current time to the number of seconds
//                temp_seconds1 = (current_years * 31540000);
//
//                // Count the number of seconds until the current day
//                temp_seconds1 += current_seconds;
//                temp_seconds1 += (current_minutes * 60);
//                temp_seconds1 += current_hours * 3600;
//
//                // Count the number of days in all months to the current month and day
//                for (int c = 1; c < current_months; c++)
//                {
//                    temp_days += _Time::GetDaysMonth(current_years, c);
//                }
//
//                // Get the number of days in the current month minus 1
//                temp_days += current_days - 1;
//                temp_seconds1 += 86400 * temp_days;
//
//                // Convert the number of change units to seconds
//                temp_days = 0;
//
//                temp_seconds2 = (change_years * 31540000);
//
//                temp_seconds2 += change_seconds;
//                temp_seconds2 += (change_minutes * 60);
//
//                for (int c = 1; c < change_months; c++)
//                {
//                    temp_days += _Time::GetDaysMonth(change_years, c);
//                }
//
//                temp_days += change_days - 1;
//                temp_seconds2 += 86400 * temp_days;
//
//                // Subtract the number of seconds
//                result_seconds1 += temp_seconds1 + temp_seconds2;
//
//                // Convert result_seconds1 to years, months, days, hours, minutes, seconds
//                result_years = result_seconds1 / 31540000;
//
//                result_seconds1 = result_seconds1 % 31540000;
//
//                // Get the number of days since the start of the result year
//                result_days = result_seconds1 / 86400;
//
//                // Get the number of months from the number of days
//                for (int c = 1; result_days - _Time::GetDaysMonth(result_years, c) >= 0; c++)
//                {
//                    result_months++;
//                }
//
//                // Get the remaining seconds from the number of seconds per day
//                result_seconds1 = result_seconds1 % 86400;
//
//                // Get the number of hours
//                result_hours = result_seconds1 / 3600;
//
//                // Get the remaining seconds from the seconds per hour
//                result_seconds1 = result_seconds1 % 3600;
//
//                // Get the number of minutes
//                result_minutes = result_seconds1 / 60;
//
//                // Get the remaining seconds from the seconds per minutes
//                result_seconds1 = result_seconds1 % 60;
//
//                // Get the number of seconds
//                result_seconds = result_seconds1;
//
//                // Print the result to the screen or send to API
//                cout << "Current Time Increased Duration" << endl;
//                cout << "years/months/days/hours:minutes:seconds" << endl;
//                cout << current_years << "/" << current_months << "/" << current_days << "/" << current_hours << ":" << current_minutes << ":" << current_seconds << " + ";
//                cout << change_years << "/" << change_months << "/" << change_days << "/" << change_hours << ":" << change_minutes << ":" << change_seconds << endl;
//                cout << endl;
//                cout << result_years << "/" << result_months << "/" << result_days << "/" << result_hours << ":" << result_minutes << ":" << result_seconds << endl;
//            }
//        }
//    }
//}

// Subtract two time array pointers and return the resulting time pointer array
long* _Time::TimeSubtract(long* long_arr1, long* long_arr2)
{
    long long long_arr1_seconds = _Time::ConvertToSeconds(long_arr1[5], long_arr1[4], long_arr1[3], long_arr1[2], long_arr1[1], long_arr1[0]);
    long long long_arr2_seconds = _Time::ConvertToSeconds(long_arr2[5], long_arr2[4], long_arr2[3], long_arr2[2], long_arr2[1], long_arr2[0]);
    long long result = long_arr1_seconds - long_arr2_seconds;
    long* result_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, result);
    return result_arr;
}

// Add two time array pointers and return the resulting time pointer array
long* _Time::TimeAdd(long* long_arr1, long* long_arr2)
{
    long long_arr1_seconds = _Time::ConvertToSeconds(long_arr1[5], long_arr1[4], long_arr1[3], long_arr1[2], long_arr1[1], long_arr1[0]);
    long long_arr2_seconds = _Time::ConvertToSeconds(long_arr2[5], long_arr2[4], long_arr2[3], long_arr2[2], long_arr2[1], long_arr2[0]);
    long result = long_arr1_seconds + long_arr2_seconds;
    long* result_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, result);
    return result_arr;
}

// Check if a time pointer is in between two points in time
bool _Time::isInbetween(long* long_arr1, long* long_arr2, long* test_arr)
{
    long long_arr1_seconds = _Time::ConvertToSeconds(long_arr1[5], long_arr1[4], long_arr1[3], long_arr1[2], long_arr1[1], long_arr1[0]);
    long long_arr2_seconds = _Time::ConvertToSeconds(long_arr2[5], long_arr2[4], long_arr2[3], long_arr2[2], long_arr2[1], long_arr2[0]);
    long long_test_seconds = _Time::ConvertToSeconds(test_arr[5], test_arr[4], test_arr[3], test_arr[2], test_arr[1], test_arr[0]);

    if ((long_test_seconds <= long_arr1_seconds) && (long_test_seconds >= long_arr2_seconds))
        return true;
    else
        return false;
}

int _Time::GetYears(string date)
{
    int count = 0;
    string temp;
    int value;

    for (int x = 0; x < date.length(); x++)
    {
        if (date[x] == '-' || date[x] == '_')
        {
            count++;
        }

        if (count == 2)
        {
            for (int a = x + 1; temp[a] != '_'; a++)
            {
                temp += temp[a];
            }

            istringstream(temp) >> value;
            //value = stoi(temp);
            return value;
        }
    }
}

int _Time::GetMonths(string date)
{
    int count = 0;
    string temp;
    int value;

    for (int x = 0; x < date.length(); x++)
    {
        if (date[x] == '-' || date[x] == '_')
        {
            count++;
        }

        if (count == 1)
        {
            for (int a = x + 1; temp[a] != '_'; a++)
            {
                temp += temp[a];
            }

            istringstream(temp) >> value;
            //value = stoi(temp);
            return value;
        }
    }

    return value;
}

int _Time::GetDays(string date)
{
    int count = 0;
    string temp;
    int value;

    for (int x = 0; x < date.length(); x++)
    {
        if (date[x] == '-' || date[x] == '_')
        {
            count++;
        }

        if (count == 0)
        {
            for (int a = x + 1; temp[a] != '_'; a++)
            {
                temp += temp[a];
            }

            istringstream(temp) >> value;
            //value = stoi(temp);
            return value;
        }
    }

    return value;
}

int _Time::GetHours(string date)
{
    int count = 0;
    string temp;
    int value;

    for (int x = 0; x < date.length(); x++)
    {
        if (date[x] == '-' || date[x] == '_')
        {
            count++;
        }

        if (count == 2)
        {
            for (int a = x + 1; temp[a] != '_'; a++)
            {
                temp += temp[a];
            }

            istringstream(temp) >> value;
            //value = stoi(temp);
            return value;
        }
    }
    return value;
}

int _Time::GetMinutes(string date)
{
    int count = 0;
    string temp;
    int value;

    for (int x = 0; x < date.length(); x++)
    {
        if (date[x] == '-' || date[x] == '_')
        {
            count++;
        }

        if (count == 2)
        {
            for (int a = x + 1; temp[a] != '_'; a++)
            {
                temp += temp[a];
            }

            istringstream(temp) >> value;
            //value = stoi(temp);
            return value;
        }
    }
    return value;
}

int _Time::GetSeconds(string date)
{
    int count = 0;
    string temp;
    int value;

    for (int x = 0; x < date.length(); x++)
    {
        if (date[x] == '-' || date[x] == '_')
        {
            count++;
        }

        if (count == 2)
        {
            for (int a = x + 1; temp[a] != '_'; a++)
            {
                temp += temp[a];
            }

            istringstream(temp) >> value;
            //value = stoi(temp);
            return value;
        }
    }
    return value;
}

long long _Time::ConvertDateToSeconds(string date)
{
    string temp;
    long long search_days;
    long long search_months;
    long long search_years;
    long long search_hours;
    long long search_minutes;
    long long search_seconds;
    long long seconds;
    int count = 0;

    // Separate the individual time places into integer variables
    for (int x = 0; x <= date.length(); x++)
    {
        if (date[x] == '-' || date[x] == '_')
        {
            count++;
        }

        if (count == 0)
        {
            temp = "";

            for (int y = x; date[y] != '-'; y++)
            {
                temp += date[y];
            }

            //istringstream(temp) >> current_days;
            search_days = stoi(temp);
            x += temp.length();
        }
        else if (count == 1)
        {
            temp = "";

            for (int z = x + 1; date[z] != '-'; z++)
            {
                temp += date[z];
            }

            //istringstream(temp) >> search_months;
            search_months = stoi(temp);
            x += temp.length();
        }
        else if (count == 2)
        {
            temp = "";

            for (int a = x + 1; date[a] != '_'; a++)
            {
                temp += date[a];
            }

            //istringstream(temp) >> search_years;
            search_years = stoi(temp);
            x += temp.length();
        }
        else if (count == 3)
        {
            temp = "";

            for (int b = x + 1; date[b] != '-'; b++)
            {
                temp += date[b];
            }

            //istringstream(temp) >> search_hours;
            search_hours = stoi(temp);
            x += temp.length();
        }
        else if (count == 4)
        {
            temp = "";

            for (int c = x + 1; date[c] != '-'; c++)
            {
                temp += date[c];
            }

            //istringstream(temp) >> search_minutes;
            search_minutes = stoi(temp);
            x += temp.length();
        }
        else if (count == 5)
        {
            temp = "";

            for (int d = x + 1; d < date.length(); d++)
            {
                temp += date[d];
            }

            //istringstream(temp) >> search_seconds;
            search_seconds = stoi(temp);
            break;
        }
    }

    // Get the number of seconds of the current date
    seconds = search_years * 31536000;
    seconds += search_months * 2419200;
    seconds += search_days * 86400;
    seconds += search_hours * 3600;
    seconds += search_minutes * 60;
    seconds += search_seconds;

    return seconds;
}

long long _Time::ConvertToSeconds(long years, long months, long days, long hours, long minutes, long seconds)
{
    long long seconds_return;

    // Get the number of seconds of the current date
    seconds_return = years * 31536000;
    seconds_return += months * 2419200;
    seconds_return += days * 86400;
    seconds_return += hours * 3600;
    seconds_return += minutes * 60;
    seconds_return += seconds;

    return seconds_return;
}

//string* _Time::GetDurationTimeDate(string date_begin, string date_end)
//{
//    long long seconds_begin = _Time::ConvertDateToSeconds(date_begin);
//    long long seconds_end = _Time::ConvertDateToSeconds(date_end);
//    long long duration_seconds = seconds_end - seconds_begin;
//}
//
//long* _Time::GetDurationToLongArr(string date_begin, string date_end)
//{
//    long long seconds_begin = _Time::ConvertDateToSeconds(date_begin);
//    long long seconds_end = _Time::ConvertDateToSeconds(date_end);
//    long long duration_seconds = seconds_end - seconds_begin;
//}
//
//long* _Time::ConvertSecondsLongs(long long seconds)
//{
//
//}
//

string _Time::ConvertLongToDate(long years, long months, long days, long hours, long minutes, long seconds)
{
    string temp = "";
    long* long_arr = _Time::ConvertLongTimeToArr(years, months, days, hours, minutes, seconds);
    temp += to_string(long_arr[3]);
    temp += "-";
    temp += to_string(long_arr[4]);
    temp += "-";
    temp += to_string(long_arr[5]);
    temp += "_";
    temp += to_string(long_arr[2]);
    temp += "-";
    temp += to_string(long_arr[1]);
    temp += "-";
    temp += to_string(long_arr[0]);

    return temp;
}

string _Time::ConvertLongArrToDate(long* longArr)
{
    string temp = "";
    //long* long_arr = _Time::ConvertLongTimeToArr(years, months, days, hours, minutes, seconds);
    return temp;
}

long* _Time::ConvertLongTimeToArr(long years, long months, long days, long hours, long minutes, long long seconds)
{
    long* TimeArr = new long[7];

    // Convert the number of values in parameters to array of longs
    while (seconds >= 60)
    {
        TimeArr[1]++; // TimeArr[1] = minutes
        seconds = seconds - 60;
    }
    while (minutes >= 60)
    {
        TimeArr[2]++; // TimeArr[2] = hours
        minutes = minutes - 60;
    }
    while (hours >= 24)
    {
        TimeArr[3]++; // TimeArr[3] = days
        hours = hours - 24;
    }
    while (days >= 30)
    {
        TimeArr[4]++; // TimeArr[4] = months
        days = days - 30;
    }
    while (months > 12)
    {
        TimeArr[5]++; // TimeArr[5] = years
        months = months - 12;
    }

    TimeArr[0] = seconds;

    return TimeArr;
}

// Todo:
// 1. Function to convert date to LongArr

int _Time::GetDaysMonth(int year, int month)
{
    // The number of days has been decremented into the next month
    // Check the current month
    if (month == 1)
    {
        // January has 31 days
        // Find the difference in time
        return 31;
    }
    else if (month == 2)
    {
        // February has 28 days
        // Check for leap year
        if (_Time::isLeapYear(year))
        {
            return 29;
        }
        else
        {
            return 28;
        }
    }
    else if (month == 3)
    {
        // March has 31 days
        return 31;
    }
    else if (month == 4)
    {
        // April has 30 days
        return 30;
    }
    else if (month == 5)
    {
        // May has 31 days
        return 31;
    }
    else if (month == 6)
    {
        // June has 30 days
        return 30;
    }
    else if (month == 7)
    {
        // July has 31 days
        return 31;
    }
    else if (month == 8)
    {
        // August has 31 days
        return 31;
    }
    else if (month == 9)
    {
        // September has 30
        return 30;
    }
    else if (month == 10)
    {
        // October has 31 days
        return 31;
    }
    else if (month == 11)
    {
        // November has 30 days
        return 30;
    }
    else if (month == 12)
    {
        // December has 31 days
        return 31;
    }
}

// Check if the current year is a leap year
bool _Time::isLeapYear(int year)
{
    if ((year % 4) == 0)
    {
        if ((year % 100) == 0)
        {
            if ((year % 400) == 0)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}