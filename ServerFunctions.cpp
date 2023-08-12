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
#include "Server Functions.h"
#include "Database Functions.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reference.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

using namespace std;
using namespace filesystem;

// Store important objects to MySQL database
void StoreObject()
{
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    MYSQL* conn;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    ostringstream query1;
    string sql1;
    string database1 = "ImportantObjects";
    string objects[100];
    string objects_temp[100];
    string command;
    string fileLocation;
    string fileLocation2;
    bool backpack = false;
    bool baseball_bat = false;
    bool baseball_glove = false;
    bool book = false;
    bool cell_phone = false;
    bool handbag = false;
    bool laptop = false;
    bool remote = false;
    bool suitcase = false;
    bool umbrella = false;
    ostringstream oss;

    oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
    string start_date = oss.str();
    string date;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database1.c_str(), 3306, NULL, 0);

    // Search the objects array for important objects
    while (true)
    {
        for (int i = 0; objects[i] != ""; i++)
        {
            if (objects[i] == "cell phone")
            {
                cell_phone = true;

                // Listen for when the object is no longer in the frame
                while (cell_phone)
                {
                    auto t = std::time(nullptr);
                    auto tm = *std::localtime(&t);

                    oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
                    date = oss.str();

                    bool temp = false;

                    // Get an image snap of the current frame
                    command = "C:\\_AugmentedIntelligence\\ffmpeg\\bin\\ffmpeg.exe -f dshow -video_size 1920x1080 -r 1 -update 1 ";
                    fileLocation = "C:\\MySQL_Data\\Objects\\cell_phone\\";
                    command += fileLocation;
                    fileLocation2 += fileLocation;
                    command += date;
                    fileLocation2 += date;
                    command += ".jpg";
                    fileLocation2 += ".jpg";

                    if (objects[i] == "cell phone")
                    {
                        temp = true;
                    }

                    if (!temp)
                    {
                        cell_phone = false;
                    }
                }

                // Store the object in the MySQL Database
                string table_name = "cell_phone";
                query1 << "INSERT INTO " << table_name << "(object_name, object_image, object_last_seen_time) VALUES(" << "cell_phone, " << fileLocation2 << ", " << date << ");";
                sql1 = query1.str();

                mysql_query(conn, sql1.c_str());
                result = mysql_use_result(conn);

                // Cleanup lost object captured frames
                _Utilities::CleanUpImages("cell_phone", fileLocation, start_date, date);
            }
            else if (objects[i] == "backpack")
            {
                backpack = true;

                while (cell_phone)
                {
                    auto t = std::time(nullptr);
                    auto tm = *std::localtime(&t);

                    oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
                    date = oss.str();

                    bool temp = false;

                    // Get an image snap of the current frame
                    command = "C:\\_AugmentedIntelligence\\ffmpeg\\bin\\ffmpeg.exe -f dshow -video_size 1920x1080 -r 1 -update 1 ";
                    fileLocation = "C:\\MySQL_Data\\Objects\\cell_phone\\";
                    command += fileLocation;
                    fileLocation2 += fileLocation;
                    command += date;
                    fileLocation2 += date;
                    command += ".jpg";
                    fileLocation2 += ".jpg";

                    system(command.c_str());

                    if (objects[i] == "backpack")
                    {
                        temp = true;
                    }

                    if (!temp)
                    {
                        backpack = false;
                    }
                }

                if (objects[i] == "backpack")
                {
                    // The object is no longer in the frame
                    // Store the object in the MySQL Database
                    string table_name = "backpack";
                    query1 << "INSERT INTO " << table_name << "(object_name, object_image, object_last_seen_time) VALUES(" << "backpack, " << fileLocation2 << ", " << date << ");";
                    sql1 = query1.str();

                    mysql_query(conn, sql1.c_str());
                    result = mysql_use_result(conn);

                    // Cleanup lost object captured frames
                    _Utilities::CleanUpImages("backpack", fileLocation, start_date, date);
                }
            }
            else if (objects[i] == "baseball bat")
            {
                baseball_bat = true;

                // Listen for when the object is no longer in the frame
                while (baseball_bat)
                {
                    auto t = std::time(nullptr);
                    auto tm = *std::localtime(&t);

                    oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
                    date = oss.str();

                    bool temp = false;

                    // Get an image snap of the current frame
                    command = "C:\\_AugmentedIntelligence\\ffmpeg\\bin\\ffmpeg.exe -f dshow -video_size 1920x1080 -r 1 -update 1 ";
                    fileLocation = "C:\\MySQL_Data\\Objects\\baseball_bat\\";
                    command += fileLocation;
                    fileLocation2 += fileLocation;
                    command += date;
                    fileLocation2 += date;
                    command += ".jpg";
                    fileLocation2 += ".jpg";

                    if (objects[i] == "baseball bat")
                    {
                        temp = true;
                    }

                    if (!temp)
                    {
                        baseball_bat = false;
                    }
                }

                // The object is no longer in the frame
                // Store the object in the MySQL Database
                string table_name = "baseball_bat";
                query1 << "INSERT INTO " << table_name << "(object_name, object_image, object_last_seen_time) VALUES(" << "baseball_bat, " << fileLocation2 << ", " << date << ");";
                sql1 = query1.str();

                mysql_query(conn, sql1.c_str());
                result = mysql_use_result(conn);

                // Cleanup lost object captured frames
                _Utilities::CleanUpImages("baseball_bat", fileLocation, start_date, date);
            }
            else if (objects[i] == "baseball glove")
            {
                baseball_glove = true;

                // Listen for when the object is no longer in the frame
                while (baseball_glove)
                {
                    auto t = std::time(nullptr);
                    auto tm = *std::localtime(&t);

                    oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
                    date = oss.str();

                    bool temp = false;

                    // Get an image snap of the current frame
                    command = "C:\\_AugmentedIntelligence\\ffmpeg\\bin\\ffmpeg.exe -f dshow -video_size 1920x1080 -r 1 -update 1 ";
                    fileLocation = "C:\\MySQL_Data\\Objects\\baseball_glove\\";
                    command += fileLocation;
                    fileLocation2 += fileLocation;
                    command += date;
                    fileLocation2 += date;
                    command += ".jpg";
                    fileLocation2 += ".jpg";

                    if (objects[i] == "baseball glove")
                    {
                        temp = true;
                    }

                    if (!temp)
                    {
                        baseball_glove = false;
                    }
                }

                // The object is no longer in the frame
                // Store the object in the MySQL Database
                string table_name = "baseball_glove";
                query1 << "INSERT INTO " << table_name << "(object_name, object_image, object_last_seen_time) VALUES(" << "baseball_glove, " << fileLocation2 << ", " << date << ");";
                sql1 = query1.str();

                mysql_query(conn, sql1.c_str());
                result = mysql_use_result(conn);

                // Cleanup lost object captured frames
                _Utilities::CleanUpImages("baseball_bat", fileLocation, start_date, date);
            }
            else if (objects[i] == "book")
            {
                book = true;

                // Listen for when the object is no longer in the frame
                while (book)
                {
                    auto t = std::time(nullptr);
                    auto tm = *std::localtime(&t);

                    oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
                    date = oss.str();

                    bool temp = false;

                    // Get an image snap of the current frame
                    command = "C:\\_AugmentedIntelligence\\ffmpeg\\bin\\ffmpeg.exe -f dshow -video_size 1920x1080 -r 1 -update 1 ";
                    fileLocation = "C:\\MySQL_Data\\Objects\\book\\";
                    command += fileLocation;
                    fileLocation2 += fileLocation;
                    command += date;
                    fileLocation2 += date;
                    command += ".jpg";
                    fileLocation2 += ".jpg";

                    if (objects[i] == "book")
                    {
                        temp = true;
                    }

                    if (!temp)
                    {
                        book = false;
                    }
                }

                // The object is no longer in the frame
                // Store the object in the MySQL Database
                string table_name = "book";
                query1 << "INSERT INTO " << table_name << "(object_name, object_image, object_last_seen_time) VALUES(" << "book" << ", " << fileLocation2 << ", " << date << ");";
                sql1 = query1.str();

                mysql_query(conn, sql1.c_str());
                result = mysql_use_result(conn);

                // Cleanup lost object captured frames
                _Utilities::CleanUpImages("baseball_bat", fileLocation, start_date, date);
            }
            else if (objects[i] == "handbag")
            {
                handbag = true;

                // Listen for when the object is no longer in the frame
                while (handbag)
                {
                    auto t = std::time(nullptr);
                    auto tm = *std::localtime(&t);

                    oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
                    date = oss.str();

                    bool temp = false;

                    // Get an image snap of the current frame
                    command = "C:\\_AugmentedIntelligence\\ffmpeg\\bin\\ffmpeg.exe -f dshow -video_size 1920x1080 -r 1 -update 1 ";
                    fileLocation = "C:\\MySQL_Data\\Objects\\handbag\\";
                    command += fileLocation;
                    fileLocation2 += fileLocation;
                    command += date;
                    fileLocation2 += date;
                    command += ".jpg";
                    fileLocation2 += ".jpg";

                    if (objects[i] == "handbag")
                    {
                        temp = true;
                    }

                    if (!temp)
                    {
                        handbag = false;
                    }
                }

                // The object is no longer in the frame
                // Store the object in the MySQL Database
                string table_name = "handbag";
                query1 << "INSERT INTO " << table_name << "(object_name, object_image, object_last_seen_time) VALUES(" << "handbag, " << fileLocation2 << ", " << date << ");";
                sql1 = query1.str();

                mysql_query(conn, sql1.c_str());
                result = mysql_use_result(conn);

                // Cleanup lost object captured frames
                _Utilities::CleanUpImages("baseball_bat", fileLocation, start_date, date);
            }
            else if (objects[i] == "laptop")
            {
                laptop = true;

                // Listen for when the object is no longer in the frame
                while (laptop)
                {
                    auto t = std::time(nullptr);
                    auto tm = *std::localtime(&t);

                    oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
                    date = oss.str();

                    bool temp = false;

                    // Get an image snap of the current frame
                    command = "C:\\_AugmentedIntelligence\\ffmpeg\\bin\\ffmpeg.exe -f dshow -video_size 1920x1080 -r 1 -update 1 ";
                    fileLocation = "C:\\MySQL_Data\\Objects\\laptop\\";
                    command += fileLocation;
                    fileLocation2 += fileLocation;
                    command += date;
                    fileLocation2 += date;
                    command += ".jpg";
                    fileLocation2 += ".jpg";

                    if (objects[i] == "laptop")
                    {
                        temp = true;
                    }

                    if (!temp)
                    {
                        cell_phone = false;
                    }
                }

                // The object is no longer in the frame
                // Store the object in the MySQL Database
                string table_name = "laptop";
                query1 << "INSERT INTO " << table_name << "(object_name, object_image, object_last_seen_time) VALUES(" << "laptop, " << fileLocation2 << ", " << date << ");";
                sql1 = query1.str();

                mysql_query(conn, sql1.c_str());
                result = mysql_use_result(conn);

                // Cleanup lost object captured frames
                _Utilities::CleanUpImages("laptop", fileLocation, start_date, date);
            }
            else if (objects[i] == "remote")
            {
                remote = true;

                // Listen for when the object is no longer in the frame
                while (remote)
                {
                    auto t = std::time(nullptr);
                    auto tm = *std::localtime(&t);

                    oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
                    date = oss.str();

                    bool temp = false;

                    // Get an image snap of the current frame
                    command = "C:\\_AugmentedIntelligence\\ffmpeg\\bin\\ffmpeg.exe -f dshow -video_size 1920x1080 -r 1 -update 1 ";
                    fileLocation = "C:\\MySQL_Data\\Objects\\remote\\";
                    command += fileLocation;
                    fileLocation2 += fileLocation;
                    command += date;
                    fileLocation2 += date;
                    command += ".jpg";
                    fileLocation2 += ".jpg";

                    if (objects[i] == "remote")
                    {
                        temp = true;
                    }

                    if (!temp)
                    {
                        cell_phone = false;
                    }
                }

                // The object is no longer in the frame
                // Store the object in the MySQL Database
                string table_name = "remote";
                query1 << "INSERT INTO " << table_name << "(object_name, object_image, object_last_seen_time) VALUES(" << "remote, " << fileLocation2 << ", " << date << ");";
                sql1 = query1.str();

                mysql_query(conn, sql1.c_str());
                result = mysql_use_result(conn);

                // Cleanup lost object captured frames
                _Utilities::CleanUpImages("remote", fileLocation, start_date, date);
            }
            else if (objects[i] == "suitcase")
            {
                suitcase = true;

                // Listen for when the object is no longer in the frame
                while (suitcase)
                {
                    auto t = std::time(nullptr);
                    auto tm = *std::localtime(&t);

                    oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
                    date = oss.str();

                    bool temp = false;

                    // Get an image snap of the current frame
                    command = "C:\\_AugmentedIntelligence\\ffmpeg\\bin\\ffmpeg.exe -f dshow -video_size 1920x1080 -r 1 -update 1 ";
                    fileLocation = "C:\\MySQL_Data\\Objects\\suitcase\\";
                    command += fileLocation;
                    fileLocation2 += fileLocation;
                    command += date;
                    fileLocation2 += date;
                    command += ".jpg";
                    fileLocation2 += ".jpg";

                    if (objects[i] == "suitcase")
                    {
                        temp = true;
                    }

                    if (!temp)
                    {
                        cell_phone = false;
                    }
                }

                // The object is no longer in the frame
                // Store the object in the MySQL Database
                string table_name = "suitcase";
                query1 << "INSERT INTO " << table_name << "(object_name, object_image, object_last_seen_time) VALUES(" << "suitcase, " << fileLocation2 << ", " << date << ");";
                sql1 = query1.str();

                mysql_query(conn, sql1.c_str());
                result = mysql_use_result(conn);

                // Cleanup lost object captured frames
                _Utilities::CleanUpImages("suitcase", fileLocation, start_date, date);
            }
            else if (objects[i] == "umbrella")
            {
                umbrella = true;

                // Listen for when the object is no longer in the frame
                while (umbrella)
                {
                    auto t = std::time(nullptr);
                    auto tm = *std::localtime(&t);

                    oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
                    date = oss.str();

                    bool temp = false;

                    // Get an image snap of the current frame
                    command = "C:\\_AugmentedIntelligence\\ffmpeg\\bin\\ffmpeg.exe -f dshow -video_size 1920x1080 -r 1 -update 1 ";
                    fileLocation = "C:\\MySQL_Data\\Objects\\umbrella\\";
                    command += fileLocation;
                    fileLocation2 += fileLocation;
                    command += date;
                    fileLocation2 += date;
                    command += ".jpg";
                    fileLocation2 += ".jpg";

                    if (objects[i] == "umbrella")
                    {
                        temp = true;
                    }

                    if (!temp)
                    {
                        cell_phone = false;
                    }
                }

                // The object is no longer in the frame
                // Store the object in the MySQL Database
                string table_name = "umbrella";
                query1 << "INSERT INTO " << table_name << "(object_name, object_image, object_last_seen_time) VALUES(" << "umbrella, " << fileLocation2 << ", " << date << ");";
                sql1 = query1.str();

                mysql_query(conn, sql1.c_str());
                result = mysql_use_result(conn);

                // Cleanup lost object captured frames
                _Utilities::CleanUpImages("umbrella", fileLocation, start_date, date);
            }
        }
    }
}

// This function will manage data in the client and send data back to the server, this thread should be persistent
// Storage Mediums
//  Storage Medium                    Capacity
//  \\ZEUS\RAID                     | 7.58 TB of 10.9 TB
//  \\ZEUS\C$                       | 293 GB of 465 GB
//  \\ATHENA\RAID                   | 3.63 TB of 21.7 TB
//  \\RIGEL\RAID                    | 0.98 TB of 1.36 TB
//  \\RIGEL\C$                      | 
//  \\ORION\C$                      | 4.92 GB of 353 GB
//  \\ORION\RAID1                   | 214 GB of 2.72 TB
//  \\ORION\RAID0                   | 175 GB of 1.81 TB
//
//  Laptop currently has 250 GB of free space. After the program reaches 200 GB of free space, cURL will upload files over FTPS to ZEUS over the internet or WiFi
void _DatabaseFunctions::MemoryManagement()
{
    CURL* curl;
    CURLcode res;
    /*struct stat file_info;*/
    int directory_size;
    int directory_size2;
    string temp_path;
    string vision_directory = _Settings::GetVisionDirectory();
    string ftp_hostname = _Settings::GetFTPHostname();
    string vision_ftp_directory = _Settings::GetVisionFTPDirectory();
    string vision_storage_limit = _Settings::GetVisionStorageLimit();
    int vision_storage_limit_int;
    istringstream(vision_storage_limit) >> vision_storage_limit_int;

    struct _slist* headerlist = NULL;

    curl_global_init(CURL_GLOBAL_ALL);

    curl = curl_easy_init();

    while (true)
    {
        directory_size = NULL;

        for (auto& p : directory_iterator(vision_directory.c_str()))
        {
            directory_size += file_size(p);
            directory_size2 = NULL;

            if (directory_size >= vision_storage_limit_int)
            {
                for (auto& q : directory_iterator(vision_directory.c_str()))
                {
                    directory_size2 += file_size(q);
                    temp_path = q.path().string();

                    if (curl)
                    {
                        curl_easy_setopt(curl, CURLOPT_UPLOAD, 1L);
                        curl_easy_setopt(curl, CURLOPT_URL, ftp_hostname);
                        curl_easy_setopt(curl, CURLOPT_READDATA, q);
                        res = curl_easy_perform(curl);

                        if (res != CURLE_OK)
                        {
                            cout << "Failure: " << curl_easy_strerror(res) << endl;
                        }
                    }

                    if (directory_size2 <= vision_storage_limit_int)
                    {
                        curl_easy_cleanup(curl);
                        curl_global_cleanup();
                        break;
                    }
                }
            }
            break;
        }
    }
}