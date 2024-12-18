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

#include "AugmentedIntelligence.hpp"
#include "Computers.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Reference.hpp"
#include "Directories.hpp"
#include "Settings.hpp"

using namespace std;
using namespace filesystem;

//string* _Directories::init_earth_c_directory()
//{
//    //MYSQL* erase_table;
//    //MYSQL* create_table;
//    //MYSQL* insert_data;
//    ////MYSQL* earth_c_directory;
//    ////MYSQL_ROW row;
//    ////MYSQL_RES* result;
//    //string query;
//    //string earth_c = "\\\\EARTH.CROCKETT.AI\\C\\";
//    //string mysql_database = "directories";
//    //string mysql_username = _Settings::GetMySQLUsername();
//    //string mysql_password = _Settings::GetMySQLPassword();
//    ////string* returnString = new string[1000000];
//    //string hostname = _Computers::GetHostname();
//
//    //erase_table = mysql_init(0);
//    //erase_table = mysql_real_connect(erase_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (erase_table)
//    //{
//    //    query = "DROP TABLE earth_c;";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //create_table = mysql_init(0);
//    //create_table = mysql_real_connect(create_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (create_table)
//    //{
//    //    query = "CREATE TABLE earth_c(path TEXT);";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //for (auto& p : recursive_directory_iterator(earth_c.c_str()))
//    //{
//    //    string temp_path = p.path().string();
//
//    //    insert_data = mysql_init(0);
//    //    insert_data = mysql_real_connect(insert_data, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //    if (insert_data)
//    //    {
//    //        query = "INSERT INTO earth_c(path TEXT) VALUES(\"";
//    //        query += temp_path;
//    //        query += "\");";
//    //        mysql_query(insert_data, query.c_str());
//    //    }
//    //}
//}

//string* _Directories::init_earth_raid1_directory()
//{
//    //MYSQL* erase_table;
//    //MYSQL* create_table;
//    //MYSQL* insert_data;
//    ////MYSQL_ROW row;
//    ////MYSQL_RES* result;
//    //string query;
//    //string mysql_database = "directories";
//    //string mysql_username = _Settings::GetMySQLUsername();
//    //string mysql_password = _Settings::GetMySQLPassword();
//    //string earth_raid1 = "\\\\EARTH.CROCKETT.AI\\RAID1\\";
//    ////string* returnString = new string[1000000];
//    //string hostname = _Computers::GetHostname();
//
//    //erase_table = mysql_init(0);
//    //erase_table = mysql_real_connect(erase_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (erase_table)
//    //{
//    //    query = "DROP TABLE earth_raid1;";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //create_table = mysql_init(0);
//    //create_table = mysql_real_connect(create_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (create_table)
//    //{
//    //    query = "CREATE TABLE earth_raid1(path TEXT);";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //for (auto& p : recursive_directory_iterator(earth_raid1.c_str()))
//    //{
//    //    string temp_path = p.path().string();
//
//    //    insert_data = mysql_init(0);
//    //    insert_data = mysql_real_connect(insert_data, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //    if (insert_data)
//    //    {
//    //        query = "INSERT INTO earth_raid1(path TEXT) VALUES(\"";
//    //        query += temp_path;
//    //        query += "\");";
//    //        mysql_query(insert_data, query.c_str());
//    //    }
//    //}
//}

//string* _Directories::init_earth_games_directory()
//{
//    //MYSQL* erase_table;
//    //MYSQL* create_table;
//    //MYSQL* insert_data;
//    ////MYSQL_ROW row;
//    ////MYSQL_RES* result;
//    //string query;
//    //string mysql_database = "directories";
//    //string mysql_username = _Settings::GetMySQLUsername();
//    //string mysql_password = _Settings::GetMySQLPassword();
//    //string earth_games = "\\\\EARTH.CROCKETT.AI\\GAMES\\";
//    //string* returnString = new string[1000000];
//    //string hostname = _Computers::GetHostname();
//
//    //erase_table = mysql_init(0);
//    //erase_table = mysql_real_connect(erase_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (erase_table)
//    //{
//    //    query = "DROP TABLE earth_games;";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //create_table = mysql_init(0);
//    //create_table = mysql_real_connect(create_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (create_table)
//    //{
//    //    query = "CREATE TABLE earth_games(path TEXT);";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //for (auto& p : recursive_directory_iterator(earth_games.c_str()))
//    //{
//    //    string temp_path = p.path().string();
//
//    //    insert_data = mysql_init(0);
//    //    insert_data = mysql_real_connect(insert_data, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //    if (insert_data)
//    //    {
//    //        query = "INSERT INTO earth_games(path TEXT) VALUES(\"";
//    //        query += temp_path;
//    //        query += "\");";
//    //        mysql_query(insert_data, query.c_str());
//    //    }
//    //}
//}
//
//string* _Directories::init_earth_ai_directory()
//{
//    //MYSQL* erase_table;
//    //MYSQL* create_table;
//    //MYSQL* insert_data;
//    ////MYSQL_ROW row;
//    ////MYSQL_RES* result;
//    //string query;
//    //string mysql_database = "directories";
//    //string mysql_username = _Settings::GetMySQLUsername();
//    //string mysql_password = _Settings::GetMySQLPassword();
//    //string earth_ai = "\\\\EARTH.CROCKETT.AI\\AI\\";
//    //string* returnString = new string[1000000];
//    //string hostname = _Computers::GetHostname();
//
//    //erase_table = mysql_init(0);
//    //erase_table = mysql_real_connect(erase_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (erase_table)
//    //{
//    //    query = "DROP TABLE earth_ai;";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //create_table = mysql_init(0);
//    //create_table = mysql_real_connect(create_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (create_table)
//    //{
//    //    query = "CREATE TABLE earth_ai(path TEXT);";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //for (auto& p : recursive_directory_iterator(earth_ai.c_str()))
//    //{
//    //    string temp_path = p.path().string();
//
//    //    insert_data = mysql_init(0);
//    //    insert_data = mysql_real_connect(insert_data, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //    if (insert_data)
//    //    {
//    //        query = "INSERT INTO earth_ai(path TEXT) VALUES(\"";
//    //        query += temp_path;
//    //        query += "\");";
//    //        mysql_query(insert_data, query.c_str());
//    //    }
//    //}
//}
//
//string* _Directories::init_earth_data_directory()
//{
//    //MYSQL* erase_table;
//    //MYSQL* create_table;
//    //MYSQL* insert_data;
//    ////MYSQL_ROW row;
//    ////MYSQL_RES* result;
//    //string query;
//    //string mysql_database = "directories";
//    //string mysql_username = _Settings::GetMySQLUsername();
//    //string mysql_password = _Settings::GetMySQLPassword();
//    //string earth_data = "\\\\EARTH.CROCKETT.AI\\DATA\\";
//    //string* returnString = new string[1000000];
//    //string hostname = _Computers::GetHostname();
//
//    //erase_table = mysql_init(0);
//    //erase_table = mysql_real_connect(erase_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (erase_table)
//    //{
//    //    query = "DROP TABLE earth_data;";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //create_table = mysql_init(0);
//    //create_table = mysql_real_connect(create_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (create_table)
//    //{
//    //    query = "CREATE TABLE earth_data(path TEXT);";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //for (auto& p : recursive_directory_iterator(earth_data.c_str()))
//    //{
//    //    string temp_path = p.path().string();
//
//    //    insert_data = mysql_init(0);
//    //    insert_data = mysql_real_connect(insert_data, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //    if (insert_data)
//    //    {
//    //        query = "INSERT INTO earth_data(path TEXT) VALUES(\"";
//    //        query += temp_path;
//    //        query += "\");";
//    //        mysql_query(insert_data, query.c_str());
//    //    }
//    //}
//}

//string* _Directories::init_mercury_raid_directory()
//{
//    //MYSQL* erase_table;
//    //MYSQL* create_table;
//    //MYSQL* insert_data;
//    ////MYSQL_ROW row;
//    ////MYSQL_RES* result;
//    //string query;
//    //string mysql_database = "directories";
//    //string mysql_username = _Settings::GetMySQLUsername();
//    //string mysql_password = _Settings::GetMySQLPassword();
//    //string* returnString = new string[1000000];
//    //string mercury_raid = "\\\\MERCURY.CROCKETT.AI\\C\\";
//    //string hostname = _Computers::GetHostname();
//
//    //erase_table = mysql_init(0);
//    //erase_table = mysql_real_connect(erase_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (erase_table)
//    //{
//    //    query = "DROP TABLE mercury_raid;";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //create_table = mysql_init(0);
//    //create_table = mysql_real_connect(create_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (create_table)
//    //{
//    //    query = "CREATE TABLE mercury_raid(path TEXT);";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //for (auto& p : recursive_directory_iterator(mercury_raid.c_str()))
//    //{
//    //    string temp_path = p.path().string();
//
//    //    insert_data = mysql_init(0);
//    //    insert_data = mysql_real_connect(insert_data, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //    if (insert_data)
//    //    {
//    //        query = "INSERT INTO mercury_raid(path TEXT) VALUES(\"";
//    //        query += temp_path;
//    //        query += "\");";
//    //        mysql_query(insert_data, query.c_str());
//    //    }
//    //}
//}

//string* _Directories::init_pluto_c_directory()
//{
//    //MYSQL* erase_table;
//    //MYSQL* create_table;
//    //MYSQL* insert_data;
//    ////MYSQL_ROW row;
//    ////MYSQL_RES* result;
//    //string pluto_c = "\\\\PLUTO.CROCKETT.AI\\C\\";
//    //string query;
//    //string mysql_database = "directories";
//    //string mysql_username = _Settings::GetMySQLUsername();
//    //string mysql_password = _Settings::GetMySQLPassword();
//    //string* returnString = new string[1000000];
//    //string hostname = _Computers::GetHostname();
//
//    //erase_table = mysql_init(0);
//    //erase_table = mysql_real_connect(erase_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (erase_table)
//    //{
//    //    query = "DROP TABLE pluto_c;";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //create_table = mysql_init(0);
//    //create_table = mysql_real_connect(create_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (create_table)
//    //{
//    //    query = "CREATE TABLE pluto_c(path TEXT);";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //for (auto& p : recursive_directory_iterator(pluto_c.c_str()))
//    //{
//    //    string temp_path = p.path().string();
//
//    //    insert_data = mysql_init(0);
//    //    insert_data = mysql_real_connect(insert_data, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //    if (insert_data)
//    //    {
//    //        query = "INSERT INTO pluto_c(path TEXT) VALUES(\"";
//    //        query += temp_path;
//    //        query += "\");";
//    //        mysql_query(insert_data, query.c_str());
//    //    }
//    //}
//}

//string* _Directories::init_athena_raid_directory()
//{
//    //MYSQL* erase_table;
//    //MYSQL* create_table;
//    //MYSQL* insert_data;
//    ////MYSQL_ROW row;
//    ////MYSQL_RES* result;
//    //string athena_raid = "\\\\ATHENA.CROCKETT.AI\\RAID\\";
//    //string query;
//    //string mysql_database = "directories";
//    //string mysql_username = _Settings::GetMySQLUsername();
//    //string mysql_password = _Settings::GetMySQLPassword();
//    //string* returnString = new string[1000000];
//    //string hostname = _Computers::GetHostname();
//
//    //erase_table = mysql_init(0);
//    //erase_table = mysql_real_connect(erase_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (erase_table)
//    //{
//    //    query = "DROP TABLE athena_raid;";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //create_table = mysql_init(0);
//    //create_table = mysql_real_connect(create_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (create_table)
//    //{
//    //    query = "CREATE TABLE athena_raid(path TEXT);";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //for (auto& p : recursive_directory_iterator(athena_raid.c_str()))
//    //{
//    //    string temp_path = p.path().string();
//
//    //    insert_data = mysql_init(0);
//    //    insert_data = mysql_real_connect(insert_data, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //    if (insert_data)
//    //    {
//    //        query = "INSERT INTO athena_raid(path TEXT) VALUES(\"";
//    //        query += temp_path;
//    //        query += "\");";
//    //        mysql_query(insert_data, query.c_str());
//    //    }
//    //}
//}

//string* _Directories::init_mars_hdd_raid_directory()
//{
//    //MYSQL* erase_table;
//    //MYSQL* create_table;
//    //MYSQL* insert_data;
//    ////MYSQL_ROW row;
//    ////MYSQL_RES* result;
//    //string mars_hdd_raid = "\\\\MARS.CROCKETT.AI\\HDD_RAID\\";
//    //string query;
//    //string mysql_database = "directories";
//    //string mysql_username = _Settings::GetMySQLUsername();
//    //string mysql_password = _Settings::GetMySQLPassword();
//    //string* returnString = new string[1000000];
//    //string hostname = _Computers::GetHostname();
//
//    //erase_table = mysql_init(0);
//    //erase_table = mysql_real_connect(erase_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (erase_table)
//    //{
//    //    query = "DROP TABLE mars_hdd_raid;";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //create_table = mysql_init(0);
//    //create_table = mysql_real_connect(create_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (create_table)
//    //{
//    //    query = "CREATE TABLE mars_hdd_raid(path TEXT);";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //for (auto& p : recursive_directory_iterator(mars_hdd_raid.c_str()))
//    //{
//    //    string temp_path = p.path().string();
//
//    //    insert_data = mysql_init(0);
//    //    insert_data = mysql_real_connect(insert_data, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //    if (insert_data)
//    //    {
//    //        query = "INSERT INTO mars_hdd_raid(path TEXT) VALUES(\"";
//    //        query += temp_path;
//    //        query += "\");";
//    //        mysql_query(insert_data, query.c_str());
//    //    }
//    //}
//}

//string* _Directories::init_mars_ssd_raid_directory()
//{
//    //MYSQL* erase_table;
//    //MYSQL* create_table;
//    //MYSQL* insert_data;
//    ////MYSQL_ROW row;
//    ////MYSQL_RES* result;
//    //string mars_ssd_raid = "\\\\MARS.CROCKETT.AI\\SSD_RAID\\";
//    //string query;
//    //string mysql_database = "directories";
//    //string mysql_username = _Settings::GetMySQLUsername();
//    //string mysql_password = _Settings::GetMySQLPassword();
//    //string* returnString = new string[1000000];
//    //string hostname = _Computers::GetHostname();
//
//    //erase_table = mysql_init(0);
//    //erase_table = mysql_real_connect(erase_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (erase_table)
//    //{
//    //    query = "DROP TABLE mars_ssd_raid;";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //create_table = mysql_init(0);
//    //create_table = mysql_real_connect(create_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (create_table)
//    //{
//    //    query = "CREATE TABLE mars_ssd_raid(path TEXT);";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //for (auto& p : recursive_directory_iterator(mars_ssd_raid.c_str()))
//    //{
//    //    string temp_path = p.path().string();
//
//    //    insert_data = mysql_init(0);
//    //    insert_data = mysql_real_connect(insert_data, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //    if (insert_data)
//    //    {
//    //        query = "INSERT INTO mars_ssd_raid(path TEXT) VALUES(\"";
//    //        query += temp_path;
//    //        query += "\");";
//    //        mysql_query(insert_data, query.c_str());
//    //    }
//    //}
//}

//string* _Directories::init_sun_c_directory()
//{
//    //MYSQL* erase_table;
//    //MYSQL* create_table;
//    //MYSQL* insert_data;
//    ////MYSQL_ROW row;
//    ////MYSQL_RES* result;
//    //string sun_c = "\\\\SUN.CROCKETT.AI\\C\\";
//    //string query;
//    //string mysql_database = "directories";
//    //string mysql_username = _Settings::GetMySQLUsername();
//    //string mysql_password = _Settings::GetMySQLPassword();
//    //string* returnString = new string[1000000];
//    //string hostname = _Computers::GetHostname();
//
//    //erase_table = mysql_init(0);
//    //erase_table = mysql_real_connect(erase_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (erase_table)
//    //{
//    //    query = "DROP TABLE sun_c;";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //create_table = mysql_init(0);
//    //create_table = mysql_real_connect(create_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (create_table)
//    //{
//    //    query = "CREATE TABLE sun_c(path TEXT);";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //for (auto& p : recursive_directory_iterator(sun_c.c_str()))
//    //{
//    //    string temp_path = p.path().string();
//
//    //    insert_data = mysql_init(0);
//    //    insert_data = mysql_real_connect(insert_data, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //    if (insert_data)
//    //    {
//    //        query = "INSERT INTO sun_c(path TEXT) VALUES(\"";
//    //        query += temp_path;
//    //        query += "\");";
//    //        mysql_query(insert_data, query.c_str());
//    //    }
//    //}
//}

//string* _Directories::init_sun_raid_directory()
//{
//    //MYSQL* erase_table;
//    //MYSQL* create_table;
//    //MYSQL* insert_data;
//    ////MYSQL_ROW row;
//    ////MYSQL_RES* result;
//    //string sun_raid = "\\\\SUN.CROCKETT.AI\\RAID0\\";
//    //string query;
//    //string mysql_database = "directories";
//    //string mysql_username = _Settings::GetMySQLUsername();
//    //string mysql_password = _Settings::GetMySQLPassword();
//    //string* returnString = new string[1000000];
//    //string hostname = _Computers::GetHostname();
//
//    //erase_table = mysql_init(0);
//    //erase_table = mysql_real_connect(erase_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (erase_table)
//    //{
//    //    query = "DROP TABLE sun_raid;";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //create_table = mysql_init(0);
//    //create_table = mysql_real_connect(create_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (create_table)
//    //{
//    //    query = "CREATE TABLE sun_raid(path TEXT);";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //for (auto& p : recursive_directory_iterator(sun_raid.c_str()))
//    //{
//    //    string temp_path = p.path().string();
//
//    //    insert_data = mysql_init(0);
//    //    insert_data = mysql_real_connect(insert_data, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //    if (insert_data)
//    //    {
//    //        query = "INSERT INTO sun_raid(path TEXT) VALUES(\"";
//    //        query += temp_path;
//    //        query += "\");";
//    //        mysql_query(insert_data, query.c_str());
//    //    }
//    //}
//}

//string* _Directories::init_saturn_raid_directory()
//{
//    //MYSQL* erase_table;
//    //MYSQL* create_table;
//    //MYSQL* insert_data;
//    ////MYSQL_ROW row;
//    ////MYSQL_RES* result;
//    //string saturn_raid = "\\\\SATURN.CROCKETT.AI\\C\\";
//    //string query;
//    //string mysql_database = "directories";
//    //string mysql_username = _Settings::GetMySQLUsername();
//    //string mysql_password = _Settings::GetMySQLPassword();
//    //string* returnString = new string[1000000];
//    //string hostname = _Computers::GetHostname();
//
//    //erase_table = mysql_init(0);
//    //erase_table = mysql_real_connect(erase_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (erase_table)
//    //{
//    //    query = "DROP TABLE saturn_raid;";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //create_table = mysql_init(0);
//    //create_table = mysql_real_connect(create_table, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //if (create_table)
//    //{
//    //    query = "CREATE TABLE saturn_raid(path TEXT);";
//    //    mysql_query(erase_table, query.c_str());
//    //}
//
//    //for (auto& p : recursive_directory_iterator(saturn_raid.c_str()))
//    //{
//    //    string temp_path = p.path().string();
//
//    //    insert_data = mysql_init(0);
//    //    insert_data = mysql_real_connect(insert_data, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    //    if (insert_data)
//    //    {
//    //        query = "INSERT INTO saturn_raid(path TEXT) VALUES(\"";
//    //        query += temp_path;
//    //        query += "\");";
//    //        mysql_query(insert_data, query.c_str());
//    //    }
//    //}
//}