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

#include "AugmentedIntelligence.h"
#include "Time.h"
#include "Mathematics.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reference.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

using namespace std;

// The following function will take a string of text and perform arithmetic operations on the time
void _Time::TimeArithmetic(string text, double *result)
{
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    long long spaces = 0;
    long long change_days;
    long long change_months;
    long long change_years;
    long long change_weeks;
    long long change_hours;
    long long change_minutes;
    long long change_seconds;
    string change_temp;
    bool weeks;
    long long current_months;
    long long current_days;
    long long current_years;
    long long current_hours;
    long long current_minutes;
    long long current_seconds;
    signed long long result_days;
    signed long long result_months;
    signed long long result_years;
    signed long long result_weeks;
    signed long long result_hours;
    signed long long result_minutes;
    signed long long result_seconds;
    int count = 0;
    //int position1;
    //int position2;
    //int position3;
    //int position4;
    //int position5;
    //int position6;
    long long temp_seconds1;
    long long temp_seconds2;
    long long result_seconds1;
    long long temp_days = 0;
    string temp;
    string words[20];
    ostringstream oss;

    oss << put_time(&tm, "%d-%m-%Y_%H-%M-%S");
    auto date = oss.str();

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

            istringstream(temp) >> current_days;
            //current_days = stoi(temp);
            x += temp.length();
        }
        else if (count == 1)
        {
            temp = "";

            for (int z = x + 1; date[z] != '-'; z++)
            {
                temp += date[z];
            }

            istringstream(temp) >> current_months;
            //current_months = stoi(temp);
            x += temp.length();
        }
        else if (count == 2)
        {
            temp = "";

            for (int a = x + 1; date[a] != '_'; a++)
            {
                temp += date[a];
            }

            istringstream(temp) >> current_years;
            //current_years = stoi(temp);
            x += temp.length();
        }
        else if (count == 3)
        {
            temp = "";

            for (int b = x + 1; date[b] != '-'; b++)
            {
                temp += date[b];
            }

            istringstream(temp) >> current_hours;
            //current_hours = stoi(temp);
            x += temp.length();
        }
        else if (count == 4)
        {
            temp = "";

            for (int c = x + 1; date[c] != '-'; c++)
            {
                temp += date[c];
            }

            istringstream(temp) >> current_minutes;
            //current_minutes = stoi(temp);
            x += temp.length();
        }
        else if (count == 5)
        {
            temp = "";

            for (int d = x + 1; d < date.length(); d++)
            {
                temp += date[d];
            }

            istringstream(temp) >> current_seconds;
            //current_seconds = stoi(temp);
            break;
        }
    }

    // Parse the string into individual words
    for (int i = 0; i <= text.length(); i++)
    {
        if (!isspace(text[i]))
        {
            words[spaces] += text[i];
        }
        else
        {
            spaces++;
        }
    }

    // Get the places from the string
    //  Search for days
    for (int a = 0; a <= spaces; a++)
    {
        if (words[a] == "days" || words[a] == "day")
        {
            // Get the number of days change
            change_temp = _Math::NumberName(words[a - 1]);
            istringstream(change_temp) >> change_days;
            //change_days = stoi(change_temp);
        }
        if (words[a] == "month" || words[a] == "months")
        {
            // Get the number of months change
            change_temp = _Math::NumberName(words[a - 1]);
            istringstream(change_temp) >> change_months;
            //change_months = stoi(change_temp);
        }
        if (words[a] == "years" || words[a] == "year")
        {
            // Get the number of years change
            change_temp = _Math::NumberName(words[a - 1]);
            istringstream(change_temp) >> change_years;
            //change_years = stoi(change_temp);
        }
        if (words[a] == "week" || words[a] == "weeks")
        {
            // Get the number of weeks change
            change_temp = _Math::NumberName(words[a - 1]);
            istringstream(change_temp) >> change_weeks;
            //change_weeks = stoi(change_temp);
            weeks = true;
        }
        if (words[a] == "hours" || words[a] == "hour")
        {
            // Get the number of hours change
            change_temp = _Math::NumberName(words[a - 1]);
            istringstream(change_temp) >> change_hours;
            //change_hours = stoi(change_temp);
        }
        if (words[a] == "minutes" || words[a] == "minute")
        {
            // Get the number of minutes change
            change_temp = _Math::NumberName(words[a - 1]);
            istringstream(change_temp) >> change_minutes;
            //change_minutes = stoi(change_temp);
        }
        if (words[a] == "seconds" || words[a] == "second")
        {
            // Get the number of seconds change
            change_temp = _Math::NumberName(words[a - 1]);
            istringstream(change_temp) >> change_seconds;
            //change_seconds = stoi(change_temp);
        }
    }

    // Find the operation in the text string
    for (int b = 0; b <= spaces; b++)
    {
        if (words[b] == "minus" || (words[b] == "from" && words[b + 1] == "now") || (words[b] == "decreased") || (words[b] == "decreased" && words[b + 1] == "by") || (words[b] == "less") || (words[b] == "difference") || (words[b] == "less" && words[b + 1] == "than"))
        {
            // Check for change in weeks keyword
            if (weeks)
            {
                temp_seconds1 = (current_years * 31540000);
                temp_seconds1 += current_seconds;
                temp_seconds1 += (current_minutes * 60);
                temp_seconds1 += current_hours * 3600;

                // Count the number of days in all months to the current month and day
                for (int c = 1; c < current_months; c++)
                {
                    temp_days += _Time::GetDaysMonth(current_years, c);
                }

                temp_days += current_days - 1;
                temp_seconds1 += 86400 * temp_days;

                temp_seconds2 = 7 * change_weeks * 604800;

                result_seconds1 = temp_seconds1 - temp_seconds2;

                // Convert result_seconds1 to years, months, days, hours, minutes, seconds
                result_years = result_seconds1 / 31540000;

                result_seconds1 = result_seconds1 % 31540000;

                // Get the number of days since the start of the result year
                result_days = result_seconds1 / 86400;

                // Get the number of months from the number of days
                for (int c = 1; result_days - _Time::GetDaysMonth(result_years, c) >= 0; c++)
                {
                    result_months++;
                }

                // Get the remaining seconds from the number of seconds per day
                result_seconds1 = result_seconds1 % 86400;

                // Get the number of hours
                result_hours = result_seconds1 / 3600;

                // Get the remaining seconds from the seconds per hour
                result_seconds1 = result_seconds1 % 3600;

                // Get the number of minutes
                result_minutes = result_seconds1 / 60;

                // Get the remaining seconds from the seconds per minutes
                result_seconds1 = result_seconds1 % 60;

                // Get the number of seconds
                result_seconds = result_seconds1;

                // Print the result to the screen or send to API
                cout << "Current Time Minus Duration" << endl;
                cout << "years/months/days/hours:minutes:seconds" << endl;
                cout << current_years << "/" << current_months << "/" << current_days << "/" << current_hours << ":" << current_minutes << ":" << current_seconds << " - ";

                if (change_weeks == 1)
                {
                    cout << change_weeks << "week" << endl;
                }
                else
                {
                    cout << change_weeks << "weeks" << endl;
                }

                cout << endl;
                cout << result_years << "/" << result_months << "/" << result_days << "/" << result_hours << ":" << result_minutes << ":" << result_seconds << endl;
            }
            else
            {
                // Subtract the current time by an amount of time
                // Convert the current time to the number of seconds
                temp_seconds1 = (current_years * 31540000);

                // Count the number of seconds until the current day
                temp_seconds1 += current_seconds;
                temp_seconds1 += (current_minutes * 60);
                temp_seconds1 += current_hours * 3600;

                // Count the number of days in all months to the current month and day
                for (int c = 1; c < current_months; c++)
                {
                    temp_days += _Time::GetDaysMonth(current_years, c);
                }

                // Get the number of days in the current month minus 1
                temp_days += current_days - 1;
                temp_seconds1 += 86400 * temp_days;

                // Convert the number of change units to seconds
                temp_days = 0;

                temp_seconds2 = (change_years * 31540000);

                temp_seconds2 += change_seconds;
                temp_seconds2 += (change_minutes * 60);

                for (int c = 1; c < change_months; c++)
                {
                    temp_days += _Time::GetDaysMonth(change_years, c);
                }

                temp_days += change_days - 1;
                temp_seconds2 += 86400 * temp_days;

                // Subtract the number of seconds
                result_seconds1 += temp_seconds1 - temp_seconds2;

                // Convert result_seconds1 to years, months, days, hours, minutes, seconds
                result_years = result_seconds1 / 31540000;

                result_seconds1 = result_seconds1 % 31540000;

                // Get the number of days since the start of the result year
                result_days = result_seconds1 / 86400;

                // Get the number of months from the number of days
                for (int c = 1; result_days - _Time::GetDaysMonth(result_years, c) >= 0; c++)
                {
                    result_months++;
                }

                // Get the remaining seconds from the number of seconds per day
                result_seconds1 = result_seconds1 % 86400;

                // Get the number of hours
                result_hours = result_seconds1 / 3600;

                // Get the remaining seconds from the seconds per hour
                result_seconds1 = result_seconds1 % 3600;

                // Get the number of minutes
                result_minutes = result_seconds1 / 60;

                // Get the remaining seconds from the seconds per minutes
                result_seconds1 = result_seconds1 % 60;

                // Get the number of seconds
                result_seconds = result_seconds1;

                // Print the result to the screen or send to API
                cout << "Current Time Minus Duration" << endl;
                cout << "years/months/days/hours:minutes:seconds" << endl;
                cout << current_years << "/" << current_months << "/" << current_days << "/" << current_hours << ":" << current_minutes << ":" << current_seconds << " - ";
                cout << change_years << "/" << change_months << "/" << change_days << "/" << change_hours << ":" << change_minutes << ":" << change_seconds << endl;
                cout << endl;
                cout << result_years << "/" << result_months << "/" << result_days << "/" << result_hours << ":" << result_minutes << ":" << result_seconds << endl;
            }
        }
        if ((words[b] == "increased" && words[b + 1] == "by") || (words[b] == "more" && words[b + 1] == "than") || (words[b] == "combined") || (words[b] == "plus") || (words[b] == "sum"))
        {
            // Check for change in weeks keyword
            if (weeks)
            {
                temp_seconds1 = (current_years * 31540000);
                temp_seconds1 += current_seconds;
                temp_seconds1 += (current_minutes * 60);
                temp_seconds1 += current_hours * 3600;

                // Count the number of days in all months to the current month and day
                for (int c = 1; c < current_months; c++)
                {
                    temp_days += _Time::GetDaysMonth(current_years, c);
                }

                temp_days += current_days - 1;
                temp_seconds1 += 86400 * temp_days;

                temp_seconds2 = 7 * change_weeks * 604800;

                result_seconds1 = temp_seconds1 + temp_seconds2;

                // Convert result_seconds1 to years, months, days, hours, minutes, seconds
                result_years = result_seconds1 / 31540000;

                result_seconds1 = result_seconds1 % 31540000;

                // Get the number of days since the start of the result year
                result_days = result_seconds1 / 86400;

                // Get the number of months from the number of days
                for (int c = 1; result_days - _Time::GetDaysMonth(result_years, c) >= 0; c++)
                {
                    result_months++;
                }

                // Get the remaining seconds from the number of seconds per day
                result_seconds1 = result_seconds1 % 86400;

                // Get the number of hours
                result_hours = result_seconds1 / 3600;

                // Get the remaining seconds from the seconds per hour
                result_seconds1 = result_seconds1 % 3600;

                // Get the number of minutes
                result_minutes = result_seconds1 / 60;

                // Get the remaining seconds from the seconds per minutes
                result_seconds1 = result_seconds1 % 60;

                // Get the number of seconds
                result_seconds = result_seconds1;

                // Print the result to the screen or send to API
                cout << "Current Time Minus Duration" << endl;
                cout << "years/months/days/hours:minutes:seconds" << endl;
                cout << current_years << "/" << current_months << "/" << current_days << "/" << current_hours << ":" << current_minutes << ":" << current_seconds << " + ";

                if (change_weeks == 1)
                {
                    cout << change_weeks << "week" << endl;
                }
                else
                {
                    cout << change_weeks << "weeks" << endl;
                }

                cout << endl;
                cout << result_years << "/" << result_months << "/" << result_days << "/" << result_hours << ":" << result_minutes << ":" << result_seconds << endl;
            }
            else
            {
                // Subtract the current time by an amount of time
                // Convert the current time to the number of seconds
                temp_seconds1 = (current_years * 31540000);

                // Count the number of seconds until the current day
                temp_seconds1 += current_seconds;
                temp_seconds1 += (current_minutes * 60);
                temp_seconds1 += current_hours * 3600;

                // Count the number of days in all months to the current month and day
                for (int c = 1; c < current_months; c++)
                {
                    temp_days += _Time::GetDaysMonth(current_years, c);
                }

                // Get the number of days in the current month minus 1
                temp_days += current_days - 1;
                temp_seconds1 += 86400 * temp_days;

                // Convert the number of change units to seconds
                temp_days = 0;

                temp_seconds2 = (change_years * 31540000);

                temp_seconds2 += change_seconds;
                temp_seconds2 += (change_minutes * 60);

                for (int c = 1; c < change_months; c++)
                {
                    temp_days += _Time::GetDaysMonth(change_years, c);
                }

                temp_days += change_days - 1;
                temp_seconds2 += 86400 * temp_days;

                // Subtract the number of seconds
                result_seconds1 += temp_seconds1 + temp_seconds2;

                // Convert result_seconds1 to years, months, days, hours, minutes, seconds
                result_years = result_seconds1 / 31540000;

                result_seconds1 = result_seconds1 % 31540000;

                // Get the number of days since the start of the result year
                result_days = result_seconds1 / 86400;

                // Get the number of months from the number of days
                for (int c = 1; result_days - _Time::GetDaysMonth(result_years, c) >= 0; c++)
                {
                    result_months++;
                }

                // Get the remaining seconds from the number of seconds per day
                result_seconds1 = result_seconds1 % 86400;

                // Get the number of hours
                result_hours = result_seconds1 / 3600;

                // Get the remaining seconds from the seconds per hour
                result_seconds1 = result_seconds1 % 3600;

                // Get the number of minutes
                result_minutes = result_seconds1 / 60;

                // Get the remaining seconds from the seconds per minutes
                result_seconds1 = result_seconds1 % 60;

                // Get the number of seconds
                result_seconds = result_seconds1;

                // Print the result to the screen or send to API
                cout << "Current Time Increased Duration" << endl;
                cout << "years/months/days/hours:minutes:seconds" << endl;
                cout << current_years << "/" << current_months << "/" << current_days << "/" << current_hours << ":" << current_minutes << ":" << current_seconds << " + ";
                cout << change_years << "/" << change_months << "/" << change_days << "/" << change_hours << ":" << change_minutes << ":" << change_seconds << endl;
                cout << endl;
                cout << result_years << "/" << result_months << "/" << result_days << "/" << result_hours << ":" << result_minutes << ":" << result_seconds << endl;
            }
        }
    }
}

string _Time::TimeSubtract(int seconds, int minutes, int hours, int days, int weeks, int months, int years)
{
    ostringstream oss;

    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    oss << put_time(&tm, "%d-%m-%Y_%H-%M-%S");
    auto current_date = oss.str();
    
    TimeFormat current_time;
    TimeFormat result_time;
    TimeFormat change_time;
    current_time.years = _Time::GetYears(current_date);
    current_time.months = _Time::GetMonths(current_date);
    current_time.days = _Time::GetDays(current_date);
    current_time.hours = _Time::GetHours(current_date);
    current_time.minutes = _Time::GetMinutes(current_date);
    current_time.seconds = _Time::GetSeconds(current_date);
    change_time.seconds = seconds;
    change_time.minutes = minutes;
    change_time.hours = hours;
    change_time.days = days;
    change_time.weeks = weeks;
    change_time.months = months;
    change_time.years = years;

    int temp_seconds;
    string result_date;

    // Convert the current time to seconds since AD 0
    current_time.seconds = (current_time.years * 31540000) + (current_time.months * 2628000) + (current_time.days * 86400) + (current_time.hours * 3600) + (current_time.minutes * 60) + current_time.seconds;

    if (weeks == 0)
    {
        change_time.seconds = (change_time.years * 31540000) + (change_time.months * 2628000) + (change_time.days * 86400) + (change_time.hours * 3600) + (change_time.minutes * 60) + change_time.seconds;
    }
    else
    {
        change_time.seconds = (change_time.weeks * 604800) + (change_time.days * 86400) + (change_time.hours * 3600) + (change_time.minutes * 60) + change_time.seconds;
    }

    temp_seconds = current_time.seconds - change_time.seconds;

    result_time.years = temp_seconds / 31540000;

    temp_seconds = temp_seconds % 31540000;

    result_time.days = temp_seconds / 86400;

    // Get the number of months from the number of days
    for (int c = 1; result_time.days - _Time::GetDaysMonth(result_time.years, c) >= 0; c++)
    {
        result_time.months++;
    }

    temp_seconds = temp_seconds % 86400;

    result_time.hours = temp_seconds / 3600;

    temp_seconds = temp_seconds % 3600;

    result_time.minutes = temp_seconds / 60;

    temp_seconds = temp_seconds % 60;

    result_time.seconds = temp_seconds;

    result_date = result_time.years + '/' + result_time.months + '/' + result_time.days + '/' + result_time.hours + ':' + result_time.minutes + ':' + result_time.seconds;

    return result_date;
}

string _Time::TimeAdditive(int seconds, int minutes, int hours, int days, int weeks, int months, int years)
{
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    int spaces = 0;
    int current_months;
    int current_days;
    int current_years;
    int current_hours;
    int current_minutes;
    int current_seconds;
    int change_seconds;
    signed int result_days;
    signed int result_months;
    signed int result_years;
    signed int result_weeks;
    signed int result_hours;
    signed int result_minutes;
    signed int result_seconds;
    int temp_seconds;
    int count = 0;
    string temp;
    string result_date;
    ostringstream oss;

    oss << put_time(&tm, "%d-%m-%Y_%H-%M-%S");
    auto date = oss.str();

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

            istringstream(temp) >> current_days;
            //current_days = stoi(temp);
            x += temp.length();
        }
        else if (count == 1)
        {
            temp = "";

            for (int z = x + 1; date[z] != '-'; z++)
            {
                temp += date[z];
            }

            istringstream(temp) >> current_months;
            //current_months = stoi(temp);
            x += temp.length();
        }
        else if (count == 2)
        {
            temp = "";

            for (int a = x + 1; date[a] != '_'; a++)
            {
                temp += date[a];
            }

            istringstream(temp) >> current_years;
            //current_years = stoi(temp);
            x += temp.length();
        }
        else if (count == 3)
        {
            temp = "";

            for (int b = x + 1; date[b] != '-'; b++)
            {
                temp += date[b];
            }

            istringstream(temp) >> current_hours;
            //current_hours = stoi(temp);
            x += temp.length();
        }
        else if (count == 4)
        {
            temp = "";

            for (int c = x + 1; date[c] != '-'; c++)
            {
                temp += date[c];
            }

            istringstream(temp) >> current_minutes;
            //current_minutes = stoi(temp);
            x += temp.length();
        }
        else if (count == 5)
        {
            temp = "";

            for (int d = x + 1; d < date.length(); d++)
            {
                temp += date[d];
            }

            istringstream(temp) >> current_seconds;
            //current_seconds = stoi(temp);
            break;
        }
    }

    // Convert the current time to seconds since AD 0
    current_seconds = (current_years * 31540000) + (current_months * 2628000) + (current_days * 86400) + (current_hours * 3600) + (current_minutes * 60) + current_seconds;

    if (weeks == 0)
    {
        change_seconds = (years * 31540000) + (months * 2628000) + (days * 86400) + (hours * 3600) + (minutes * 60) + seconds;
    }
    else
    {
        change_seconds = (weeks * 604800) + (days * 86400) + (hours * 3600) + (minutes * 60) + change_seconds;
    }

    temp_seconds = current_seconds + change_seconds;

    result_years = temp_seconds / 31540000;

    temp_seconds = temp_seconds % 31540000;

    result_days = temp_seconds / 86400;

    // Get the number of months from the number of days
    for (int c = 1; result_days - _Time::GetDaysMonth(result_years, c) >= 0; c++)
    {
        result_months++;
    }

    temp_seconds = temp_seconds % 86400;

    result_hours = temp_seconds / 3600;

    temp_seconds = temp_seconds % 3600;

    result_minutes = temp_seconds / 60;

    temp_seconds = temp_seconds % 60;

    result_seconds = temp_seconds;

    result_date = result_years + '/' + result_months + '/' + result_days + '/' + result_hours + ':' + result_minutes + ':' + result_seconds;

    return result_date;
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
}

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