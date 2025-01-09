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
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Neuralink.hpp"
#include "EKG.hpp"
#include "Reference.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;
using namespace filesystem;
using namespace chrono;
using namespace chrono_literals;

// This function is designed to retrieve long term memories from the home server or datacenter
void _LongTermMemory::LongTermMemoryRawSearchBackward(string search)
{
    // 1. Get the hostname of the server
    // 2. Connect to the server and send the query
    // 3. Server finds search terms and sends the filename and location to the client
    // 4. The client connects to the server via FTPS and downloads the image to the client
    // 5. The client opens and shows the image to the user
    // 0. MySQL Columns: image_id, year, month, day, hour, minutes, seconds, imageLocation

    MYSQL* conn = mysql_init(NULL);
    MYSQL* conn2 = mysql_init(NULL);
    MYSQL* conn3 = mysql_init(NULL);
    MYSQL* conn4 = mysql_init(NULL);
    MYSQL_RES* result;
    MYSQL_RES* result2;
    MYSQL_RES* result3;
    MYSQL_RES* result4;
    MYSQL_ROW row;
    MYSQL_ROW row2;
    MYSQL_ROW row3;
    MYSQL_ROW row4;
    string mysql_database = "LongTermMemory";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string row_data;
    string temp;
    string row_search[100];
    string image_id;
    string image_path;
    int num = 0;
    int num_terms = 0;
    int num_fields;
    int num_fields3;

    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
    conn2 = mysql_real_connect(conn2, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
    conn3 = mysql_real_connect(conn3, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
    conn4 = mysql_real_connect(conn4, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    mysql_query(conn, "SELECT data FROM analysis");
    mysql_query(conn2, "SELECT image_id FROM analysis");
    mysql_query(conn3, "SELECT image_id FROM raw");
    mysql_query(conn4, "SELECT image_path FROM raw");

    result = mysql_store_result(conn);
    result2 = mysql_store_result(conn2);
    result3 = mysql_store_result(conn3);
    result4 = mysql_store_result(conn4);

    num_fields = mysql_num_fields(result);
    num_fields3 = mysql_num_fields(result3);

    while ((row = mysql_fetch_row(result)))
    {
        row_data = row[num];
        num_terms = 0;

        // Search through data for search terms
        for (int j = 0; j < row_data.length(); j++)
        {
            // The terms for the analysis are delinated in the following pattern
            //  Ex. [[search term(s)]], [[search term(s)]] 
            //      Spaces are allowed in brackets and terms are separated by commas
            if (row_data[j] == '[' && row_data[j + 1] == '[')
            {
                num_terms++;

                for (int k = j + 2; row_data[k] != ']'; k++)
                {
                    temp[num_terms - 1] += row_data[k];
                }

                row_search[num_terms] = temp;
            }
        }

        // Search the search terms for the term
        for (int l = 0; l < num_terms; l++)
        {
            temp = row_search[num_terms];

            if (temp == search)
            {
                // We have a search view
                //  1. Get the location of the image
                //  2. Open the image
                //  3. Show the image analysis to the user
                //  4. Increase the views in the database
                int num2 = 0;
                int num3 = 0;
                int num4 = 0;

                // Find the image_id from the analysis row
                while ((row2 = mysql_fetch_row(result2)))
                {
                    if (num2 == num)
                    {
                        image_id = row2[num2];
                    }
                    num2++;
                }

                // Find the image id in the raw data table
                while ((row3 = mysql_fetch_row(result3)))
                {
                    temp = row3[num3];

                    if (temp == image_id)
                    {
                        break;
                    }
                    num3++;
                }

                while ((row4 = mysql_fetch_row(result4)))
                {
                    temp = row4[num4];

                    if (num4 == num3)
                    {
                        image_path = temp;
                    }
                    num4++;
                }

                // Print the debug information to the screen

                cout << "Image location: " << image_path << endl;
            }
        }
        num++;
    }

    mysql_close(conn);
    mysql_close(conn2);
    mysql_close(conn3);
    mysql_close(conn4);
}

// TODO: Iteration from the present to the past needs to be done
// This function is designed to retrieve long term memories from the home server or datacenter
void _LongTermMemory::LongTermMemoryRawSearchRight(string search)
{
    // 1. Get the hostname of the server
    // 2. Connect to the server and send the query
    // 3. Server finds search terms and sends the filename and location to the client
    // 4. The client connects to the server via FTPS and downloads the image to the client
    // 5. The client opens and shows the image to the user

    MYSQL* conn = mysql_init(NULL);
    MYSQL* conn2 = mysql_init(NULL);
    MYSQL* conn3 = mysql_init(NULL);
    MYSQL* conn4 = mysql_init(NULL);
    MYSQL_RES* result;
    MYSQL_RES* result2;
    MYSQL_RES* result3;
    MYSQL_RES* result4;
    MYSQL_ROW row;
    MYSQL_ROW row2;
    MYSQL_ROW row3;
    MYSQL_ROW row4;
    string mysql_database = "LongTermMemory";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string rows;
    string row_data;
    string temp;
    string row_search[100];
    string image_id;
    string image_path;
    int num = 0;
    int num_terms = 0;
    int num_fields;
    int num_fields2;
    int num_fields3;
    int num_fields4;

    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
    conn2 = mysql_real_connect(conn2, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
    conn3 = mysql_real_connect(conn3, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
    conn4 = mysql_real_connect(conn4, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    mysql_query(conn, "SELECT data FROM analysis");
    mysql_query(conn2, "SELECT image_id FROM analysis");
    mysql_query(conn3, "SELECT image_id FROM raw");
    mysql_query(conn4, "SELECT image_path FROM raw");

    result = mysql_store_result(conn);
    result2 = mysql_store_result(conn2);
    result3 = mysql_store_result(conn3);
    result4 = mysql_store_result(conn4);

    num_fields = mysql_num_fields(result);
    num_fields2 = mysql_num_fields(result2);
    num_fields3 = mysql_num_fields(result3);
    num_fields4 = mysql_num_fields(result4);

    while (row = mysql_fetch_row(result))
    {
        // Search through data for search terms
        for (int j = num_fields; j >= 0; j--)
        {
            row_data = row[j];

            // The terms for the analysis are delinated in the following pattern
            //  Ex. [[search term(s)]], [[search term(s)]] 
            //      Spaces are allowed in brackets and terms are separated by commas
            if (row_data[j] == '[' && row_data[j + 1] == '[')
            {
                num_terms++;

                for (int k = j + 2; row_data[k] != ']'; k++)
                {
                    temp[num_terms - 1] += row_data[k];
                }

                row_search[num_terms] = temp;
            }
        }

        // Search the search terms for the term
        for (int l = 0; l < num_terms; l++)
        {
            temp = row_search[num_terms];

            if (temp == search)
            {
                // We have a search view
                //  1. Get the location of the image
                //  2. Open the image
                //  3. Show the image analysis to the user
                //  4. Increase the views in the database
                int num2 = 0;
                int num3 = 0;
                int num4 = 0;

                // Find the image_id from the analysis row
                while (row2 = mysql_fetch_row(result2))
                {
                    if (num2 == num)
                    {
                        image_id = row2[num2];
                    }
                    num2++;
                }

                // Find the image id in the raw data table
                while (row3 = mysql_fetch_row(result3))
                {
                    temp = row3[num3];

                    if (temp == image_id)
                    {
                        break;
                    }
                    num3++;
                }

                while (row4 = mysql_fetch_row(result4))
                {
                    temp = row4[num4];

                    if (num4 == num3)
                    {
                        image_path = temp;
                    }
                    num4++;
                }

                // Print the debug information to the screen
                cout << "Image location: " << image_path << endl;
            }
        }
        num++;
    }
}

string _LongTermMemory::LongTermMemoryText(string search)
{
    string temp;
    return temp;
}

string _LongTermMemory::LongTermMemoryText(string search, int year, int month, int day, int hour)
{
    string temp;
    return temp;
}

// This function is designed to retrieve long term memories from the home server or datacenter
bool _LongTermMemory::LongTermMemoryRawSearchBoolean(string search)
{
    // 1. Get the hostname and credentials for the server
    // 2. Connect to the server and send the query
    // 3. Server finds search terms and sends a boolean back to the client
    // 4. The client receives the boolean and informs the user

    MYSQL* conn = mysql_init(NULL);
    return false;
}

// This function is designed to retrieve long term memories from the home server or datacenter
void _LongTermMemory::LongTermMemoryRawSearchCount(string search)
{
    // 1. Get the hostname and credentials for the server
    // 2. Connect to the server and send the query
    // 3. Server finds search terms and sends a count of the number of search positives
    // 4. The client receives the count and the dates of the search positives, then informs the user

    MYSQL* conn = mysql_init(NULL);
}

// This function is designed to retrieve long term memories from the hoem server or datacenter
void _LongTermMemory::LongTermMemoryRawSearchReturnAll(string search)
{
    // 1. Get the hostname and credentials for the server
    // 2. Connect to the server and send the query
    // 3. Server finds search terms and sends a boolean back to the client
    // 4. The client receives the boolean and informs the user

    MYSQL* conn = mysql_init(NULL);
}

// This function will search the datacenter long term memory database for memories of a certain date
void _LongTermMemory::LongTermMemoryRawSearchwithDate(string search, int year, int month, int day, int hour)
{
    // 0. Get the current time
    // 1. Use a given date to search for memories
    // 2. Query the MySQL database for the file timestamp
    // 3. Present the raw memory with sound or no sound to the consiosness
    // 4. Load the memory into short term memory for analysis

    MYSQL* conn = mysql_init(NULL);
    MYSQL* conn2 = mysql_init(NULL);
    MYSQL_RES* result;
    MYSQL_RES* result2;
    MYSQL_ROW row;
    MYSQL_ROW row2;
    string mysql_database;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string time;
    string row_data;
    string row_search[100];
    string image_path;
    int num = 0;
    int num2 = 0;
    int num_fields;
    int num_fields2;

    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
    conn2 = mysql_real_connect(conn2, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    mysql_query(conn, "SELECT date FROM raw");
    mysql_query(conn2, "SELECT image_location FROM raw");

    result = mysql_store_result(conn);
    result2 = mysql_store_result(conn2);

    num_fields = mysql_num_fields(result);
    num_fields2 = mysql_num_fields(result2);

    while ((row = mysql_fetch_row(result)))
    {
        row_data = row[0];

        // For this function we are searching for the date
        //  Ex. The date year:month:day:hour:minutes:seconds
        time = year + ":";
        time += month + ":";
        time += day + ":";
        time += hour;

        if (row_data == time)
        {
            while ((row2 = mysql_fetch_row(result2)))
            {
                row_data = row[0];

                // Search for the image_location
                if (num2 == num)
                {
                    image_path = row_data;
                    cout << "Image Location: " << image_path << endl;
                }
                num2++;
            }
        }

        num++;
    }
}

void _LongTermMemory::LongTermMemoryRawSearch(string search)
{

}

void _LongTermMemory::LongTermMemoryRawSearchDate(int year, int month, int day, int hour)
{

}

// This function will search the datacenter long term memory database for search terms from beginning of time to now
void _LongTermMemory::LongTermMemoryRawSearchTermDateLeft(string search, int year, int month, int day, int hour, int minutes, int seconds, int milliseconds)
{
    // 1. Load memories form a given date into short term memory
    // 2. Search the range for words

    MYSQL* conn = mysql_init(NULL);
}

// The following function will search the datacenter database from current to the past
void _LongTermMemory::LongTermMemoryRawSearchTermDateRight(string search, int year, int month, int day, int hour, int minutes, int seconds, int milliseconds)
{
    MYSQL* conn = mysql_init(NULL);
}

// This function will output image sequence to the user from a certain time in the past to another time or duration
void _LongTermMemory::LongTermMemoryRawElapsed(int origin_year, int origin_month, int origin_day, int origin_hour, int origin_minutes, int origin_seconds, int duration_year, int duration_month, int duration_day, int duration_hour, int duration_minutes, int duration_seconds)
{
    // 0. Get the current time
    // 1. Use a given date to search for memories
    // 2. Query the MySQL database for the file timestamp
    // 3. Present the raw memory with sound or no sound to the consiosness
    // 4. Load the memory into short term memory for analysis

    MYSQL* conn = mysql_init(NULL);
    MYSQL* conn2 = mysql_init(NULL);
    MYSQL* conn3 = mysql_init(NULL);
    MYSQL* conn4 = mysql_init(NULL);
    MYSQL_RES* result;
    MYSQL_RES* result2;
    MYSQL_RES* result3;
    MYSQL_RES* result4;
    MYSQL_ROW row;
    MYSQL_ROW row2;
    MYSQL_ROW row3;
    MYSQL_ROW row4;
    string mysql_database = "LongTermMemory";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string time;
    string new_time;
    string row_data;
    string row_search[100];
    string image_path[1000];
    string output_date[1000];
    int temp = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num = 0;

    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
    conn2 = mysql_real_connect(conn2, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
    conn3 = mysql_real_connect(conn3, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
    conn4 = mysql_real_connect(conn4, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    mysql_query(conn, "SELECT date FROM raw");
    mysql_query(conn2, "SELECT image_location FROM raw");
    mysql_query(conn3, "SELECT date FROM raw");
    mysql_query(conn4, "SELECT image_location FROM raw");

    result = mysql_store_result(conn);
    result2 = mysql_store_result(conn2);
    result3 = mysql_store_result(conn3);
    result4 = mysql_store_result(conn4);

    // Get the date, image_path, and the image_location from the database
    while ((row = mysql_fetch_row(result)))
    {
        row_data = row[0];

        // For this function we are searching for the date
        //  Ex. The date year:month:day:hour:minutes:seconds
        time = origin_year + ":";
        time += origin_month + ":";
        time += origin_day + ":";
        time += origin_hour + ":";
        time += origin_minutes + ":";
        time += origin_seconds;

        if (row_data == time)
        {
            while ((row2 = mysql_fetch_row(result2)))
            {
                row_data = row2[0];

                // Search for the image_location
                if (num2 == num)
                {
                    image_path[num2] = row_data;
                    break;
                }
                num2++;
            }
        }
        num++;
    }

    // Get the date, and the image_path from the database
    while ((row3 = mysql_fetch_row(result3)))
    {
        row_data = row3[0];

        // For this function we are searching for the date
        //  Ex. The date year:month:day:hour:minutes:seconds
        time = duration_year + ":";
        time += duration_month + ":";
        time += duration_day + ":";
        time += duration_hour + ":";
        time += duration_minutes + ":";
        time += duration_seconds;

        // Calculate the time in minutes from the origin time and date
        //  Get the time and date
        origin_minutes += origin_year * 525600;
        origin_minutes += origin_month * 43800;
        origin_minutes += origin_day * 1440;
        origin_minutes += origin_hour * 60;

        // Calculate the number of minutes plus the duration
        duration_minutes += duration_year * 525600;
        duration_minutes += duration_month * 43800;
        duration_minutes += duration_day * 1440;
        duration_minutes += duration_hour * 60;

        // Calculate the new time and date
        new_time = duration_minutes / 525600 + ":";
        duration_minutes = duration_minutes % 525600;
        new_time += duration_minutes / 43800 + ":";
        duration_minutes = duration_minutes % 43800;
        new_time += duration_minutes / 1440 + ":";
        duration_minutes = duration_minutes % 1440;
        new_time += duration_minutes + ":";
        duration_minutes = duration_minutes % 60;
        new_time += duration_minutes;

        if (row_data == time)
        {
            while ((row4 = mysql_fetch_row(result4)))
            {
                row_data = row4[0];

                // Search for the image_path
                if (num3 == num4)
                {
                    temp = num3 + num2;
                    image_path[temp] = row_data;
                }
                num3++;
            }
        }
        num4++;
    }

    // Output the images to the user or method of displaying images...-
    for (int x = 0; x < sizeof(image_path); x++)
    {
        cout << "image_path[ " << x << "]: " << image_path[x] << endl;
    }
}

// This function will search for search terms in long term memory from now to a given duration
//void _LongTermMemory::LongTermMemoryRawSearchTermDateElapsed(string search, int origin_year, int origin_month, int origin_day, int origin_hour, int origin_minutes, int origin_seconds, int duration_year, int duration_month, int duration_day, int duration_hour, int duration_minutes, int duration_seconds)
//{
//    // 0. Get the current time
//    // 1. Use a given date to search for memories
//    // 2. Query the MySQL database for the file timestamp
//    // 3. Present the raw memory with sound or no sound to the consiosness
//    // 4. Load the memory into short term memory for analysis
//
//    MYSQL* conn = mysql_init(NULL);
//    MYSQL* conn2 = mysql_init(NULL);
//    MYSQL* conn3 = mysql_init(NULL);
//    MYSQL* conn4 = mysql_init(NULL);
//    MYSQL* conn5 = mysql_init(NULL);
//    MYSQL* conn6 = mysql_init(NULL);
//    MYSQL_RES* result;
//    MYSQL_RES* result2;
//    MYSQL_RES* result3;
//    MYSQL_RES* result4;
//    MYSQL_RES* result5;
//    MYSQL_RES* result6;
//    MYSQL_ROW row;
//    MYSQL_ROW row2;
//    MYSQL_ROW row3;
//    MYSQL_ROW row4;
//    string mysql_database = "LongTermMemory";
//    string mysql_username = _Settings::GetMySQLUsername();
//    string mysql_password = _Settings::GetMySQLPassword();
//    /*MYSQL_ROW row5;*/
//    //MYSQL_ROW row6;
//    string time;
//    string new_time;
//    string row_data;
//    string row_search[100];
//    string image_id[1000];
//    string image_path[1000];
//    string output_date[1000];
//    int temp = 0;
//    int num = 0;
//    int num2 = 0;
//    int num3 = 0;
//    int num4 = 0;
//    int num5 = 0;
//    int num6 = 0;
//
//    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//    conn2 = mysql_real_connect(conn2, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//    conn3 = mysql_real_connect(conn3, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//    conn4 = mysql_real_connect(conn4, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//    conn5 = mysql_real_connect(conn5, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//    conn6 = mysql_real_connect(conn6, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    mysql_query(conn, "SELECT date FROM raw");
//    mysql_query(conn2, "SELECT image_id FROM raw");
//    mysql_query(conn3, "SELECT image_path FROM raw");
//    mysql_query(conn4, "SELECT date FROM raw");
//    mysql_query(conn5, "SELECT image_id FROM raw");
//    mysql_query(conn6, "SELECT image_path FROM raw");
//
//    result = mysql_store_result(conn);
//    result2 = mysql_store_result(conn2);
//    result3 = mysql_store_result(conn3);
//    result4 = mysql_store_result(conn4);
//    result5 = mysql_store_result(conn5);
//    result6 = mysql_store_result(conn6);
//
//    // Get the date, image_path, and the image_location from the database
//    while ((row = mysql_fetch_row(result)))
//    {
//        row_data = row[0];
//
//        // For this function we are searching for the date
//        //  Ex. The date year:month:day:hour:minutes:seconds
//        time = origin_year + ":";
//        time += origin_month + ":";
//        time += origin_day + ":";
//        time += origin_hour + ":";
//        time += origin_minutes + ":";
//        time += origin_seconds;
//
//        if (row_data == time)
//        {
//            while ((row2 = mysql_fetch_row(result2)))
//            {
//                // Get the image_id 
//                row_data = row2[0];
//
//            }
//        }
//        num++;
//    }
//
//    // Get the date, and the image_path from the database
//    while ((row3 = mysql_fetch_row(result3)))
//    {
//        row_data = row3[0];
//
//        // For this function we are searching for the date
//        //  Ex. The date year:month:day:hour:minutes:seconds
//        time = duration_year + ":";
//        time += duration_month + ":";
//        time += duration_day + ":";
//        time += duration_hour + ":";
//        time += duration_minutes + ":";
//        time += duration_seconds;
//
//        // Calculate the time in minutes from the origin time and date
//        //  Get the time and date
//        origin_minutes += origin_year * 525600;
//        origin_minutes += origin_month * 43800;
//        origin_minutes += origin_day * 1440;
//        origin_minutes += origin_hour * 60;
//
//        // Calculate the number of minutes plus the duration
//        duration_minutes += duration_year * 525600;
//        duration_minutes += duration_month * 43800;
//        duration_minutes += duration_day * 1440;
//        duration_minutes += duration_hour * 60;
//
//        // Calculate the new time and date
//        new_time = duration_minutes / 525600 + ":";
//        duration_minutes = duration_minutes % 525600;
//        new_time += duration_minutes / 43800 + ":";
//        duration_minutes = duration_minutes % 43800;
//        new_time += duration_minutes / 1440 + ":";
//        duration_minutes = duration_minutes % 1440;
//        new_time += duration_minutes + ":";
//        duration_minutes = duration_minutes % 60;
//        new_time += duration_minutes;
//
//        if (row_data == time)
//        {
//            while ((row4 = mysql_fetch_row(result4)))
//            {
//                row_data = row4[0];
//
//                // Search for the image_path
//                if (num3 == num4)
//                {
//                    temp = num3 + num2;
//                    image_path[temp] = row_data;
//                }
//                num3++;
//            }
//        }
//        num4++;
//    }
//}

// This funciton will search text in long term memory and return the text
void _LongTermMemory::LongTermMemoryAnalysisText(string search)
{
    // 1. Search all of long term memory for instances of a word

    MYSQL* conn = mysql_init(NULL);
}

// This function will search text in long term memory and return a boolean if the text is found
void _LongTermMemory::LongTermMemoryTextAnalysisBoolean(string search)
{
    MYSQL* conn = mysql_init(NULL);
}

// This function will search for text in long term memory and return a count and timestamp of all positives
void _LongTermMemory::LongTermMemoryTextAnalysisCount(string search)
{

}

// This function will search for text from analysis of memories and return a still of the first positive
//void _LongTermMemory::LongTermMemoryTextAnalysisSearchDateLeft(string search, int year, int month, int day, int hour, int minutes, int seconds)
//{
//
//}

//void _LongTermMemory::LongTermMemoryTextAnalysisSearchElapsed(string search, int year, int month, int day, int hour, int minutes, int seconds)
//{
//
//}

// This function will search dialogue in long term memory for search terms
void _LongTermMemory::LongTermMemoryDialogueSearch(string search)
{

}

// This function will search for text and a specific date and return the text
//void _LongTermMemory::LongTermMemoryText(string search, int year, int month, int date, int hour, int minutes, int seconds)
//{
//    // 1. Load long term memory from a date into memory and serach with words
//}

// This function will search read data in long term memory from the past to current
void _LongTermMemory::LongTermMemoryReadingLeft(string search)
{

}

// This function will search for data in long term memory from current to the past
void _LongTermMemory::LongTermMemoryReadingRight(string search)
{

}

//void _LongTermMemory::LongTermMemoryReadingDate(string search, int year, int month, int date, int hour, int minutes, int seconds)
//{
//    // 1. Load long term memory from a date into memory and serach with words
//}
//
//void _LongTermMemory::LongTermMemoryReadingSearchTermDateElapsed(string search, int year, int month, int day, int hour, int minutes, int seconds)
//{
//
//}