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
#include "Actions.hpp"
#include "Analysis.hpp"
#include "Argument.hpp"
#include "Bias.hpp"
#include "Computers.hpp"
#include "Database Functions.hpp"
#include "Directories.hpp"
#include "Drawing.hpp"
#include "Driving.hpp"
#include "Ethics.hpp"
#include "Executive Functions.hpp"
#include "Fallacy.hpp"
#include "Feel.hpp"
#include "Finance.hpp"
#include "Gaming.hpp"
#include "Goals.hpp"
#include "Heuristics.hpp"
#include "Keyboard.hpp"
#include "Kinesthetics.hpp"
#include "Large Language Models.hpp"
#include "Learning.hpp"
#include "Logic.hpp"
#include "Long-Term Memory.hpp"
#include "Mathematics.hpp"
#include "Mind.hpp"
#include "Mods.hpp"
#include "Morality.hpp"
#include "Mouse.hpp"
#include "Music.hpp"
#include "Needs.hpp"
#include "NetworkingClient.hpp"
#include "NetworkingServer.hpp"
#include "NeuraLink.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Parsers.hpp"
#include "Pathfinding.hpp"
#include "Pattern Recognition.hpp"
#include "Prediction.hpp"
#include "Programming.hpp"
#include "QA.hpp"
#include "Qualitative Reasoning.hpp"
#include "Quantitative Reasoning.hpp"
#include "Reading.hpp"
#include "Reference.hpp"
#include "Scrapers.hpp"
#include "Server Functions.hpp"
#include "Settings.hpp"
#include "Short-Term Memory.hpp"
#include "Smart Phone.hpp"
#include "Smell.hpp"
#include "Social.hpp"
#include "Sound.hpp"
#include "Speech.hpp"
#include "Speech Recognition.hpp"
#include "Speech Commands.hpp"
#include "Sports.hpp"
#include "Stocks.hpp"
#include "Strategy.hpp"
#include "Tensorflow.hpp"
#include "Time.hpp"
#include "Translation.hpp"
#include "Typing.hpp"
#include "Utilities.hpp"
#include "Variables.hpp"
#include "Vision.hpp"
#include "Working-Memory.hpp"
#include "Writing.hpp"

using namespace std;

// The following function will input vision data and sort movie titles alphabetically
void _DatabaseFunctions::MoviesSorter()
{

}

bool _DatabaseFunctions::MovieExists(string title)
{
    return false;
}

//string** _DatabaseFunctions::DictionarySearch(string word)
//{
//    MYSQL* conn;
//    MYSQL_ROW row;
//    MYSQL_RES* result;
//    string mysql_database = "dictionary";
//    string mysql_hostname;
//    string mysql_username = _Settings::GetMySQLUsername();
//    string mysql_password = _Settings::GetMySQLPassword();
//    string sql1;
//    string** complete[10][3];
//    bool boolean = false;
//    string input;
//
//    conn = mysql_init(0);
//    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    if (conn)
//    {
//        while (!boolean)
//        {
//            system("cls");
//
//            cout << "word: ";
//            getline(cin, input);
//
//            if (input != "")
//            {
//                input = _Utilities::toLowerWord(input);
//
//                sql1 = "SELECT * FROM entries;";
//                mysql_query(conn, sql1.c_str());
//                result = mysql_store_result(conn);
//
//                while (row = mysql_fetch_row(result))
//                {
//                    word = _Utilities::toLowerWord(row[0]);
//
//                    if (input == word)
//                    {
//                        // Find a most open position in the results arrray
//                        for (int x = 0; x <= 10; x++)
//                        {
//                            if (complete[x][0] == "")
//                            {
//                                complete[x][0] = row[0];
//                                complete[x][1] = row[1];
//                                complete[x][2] = row[2];
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//    return complete;
//}

//string* _DatabaseFunctions::GetAllIngWords()
//{
//    MYSQL* conn;
//    MYSQL_ROW row;
//    MYSQL_RES* result;
//    string mysql_database = "dictionary";
//    string mysql_hostname;
//    string mysql_username = _Settings::GetMySQLUsername();
//    string mysql_password = _Settings::GetMySQLPassword();
//    string sql1;
//    string* ing_words;
//    string word;
//    bool boolean = false;
//    string input;
//    
//    conn = mysql_init(0);
//    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//    
//    if (conn)
//    {
//        sql1 = "SELECT * FROM entries;";
//        mysql_query(conn, sql1.c_str());
//        result = mysql_store_result(conn);
//        
//        while (row = mysql_fetch_row(result))
//        {
//            word = row[0];
//             Check if the last three characters are '-ing'
//            if (tolower(word[word.length() - 2]) == 'i' && tolower(word[word.length() - 1] == 'n') && tolower(word[word.length()] == 'g'))
//            {
//                for (int x = 0; x <= sizeof(ing_words); x++)
//                {
//                    if (ing_words[x] == "")
//                    {
//                        ing_words[x] = word;
//                    }
//                }
//            }
//        }
//    }
//
//    return ing_words;
//}

// This function will upload all detected objects from the object detection neural network
void _DatabaseFunctions::StoreObject(string object, string image_location)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_database = "objects";
    string mysql_hostname = _Settings::GetMySQLHostname();
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string sql1;

    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);
    ostringstream oss;

    oss << put_time(&tm, "%d-%m-%Y_%H-%M-%S");
    string current_date = oss.str();

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "INSERT INTO `";
        sql1 += object.c_str();
        sql1 += "`(image_location, current_date) VALUES(\"";
        sql1 += image_location.c_str();
        sql1 += "\", \"";
        sql1 += current_date.c_str();
        sql1 += "\");";
        mysql_query(conn, sql1.c_str());
    }
}

// This function will be invoked when the user commands to find the last seen location of an object
string _DatabaseFunctions::FindObject(string object)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_database = "objects";
    string mysql_hostname = _Settings::GetMySQLHostname();
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string sql1;
    string image_location;
    int counter = 0;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM `";
        sql1 += object.c_str();
        sql1 += "`;";
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (mysql_num_fields(result) == counter)
            {
                image_location = row[0];
                return image_location;
            }

            counter++;
        }
    }

    return nullptr;
}

string _DatabaseFunctions::QueryWordVector(string word, string word_type)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result1;
    //string mysql_dictionary_database = "dictionary";
    string mysql_table = "wiki_vectors";
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM `";
        sql1 += mysql_table.c_str();
        sql1 += "`;";
        mysql_query(conn, sql1.c_str());
        result1 = mysql_store_result(conn);

        while (row = mysql_fetch_row(result1))
        {
            if (word == row[0] && word_type == row[1])
            {
                mysql_close(conn);
                return row[2];
            }
        }
    }
    else
    {
        cout << "Could not connect to MySQL Server..." << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mysql_close(conn);
    }
}

//string** _DatabaseFunctions::DictionarySearchVector(string word)
//{
//    MYSQL* conn;
//    MYSQL_ROW row;
//    MYSQL_RES* result;
//    string mysql_database = "dictionary";
//    string mysql_username = _Settings::GetMySQLUsername();
//    string mysql_password = _Settings::GetMySQLPassword();
//    string sql1;
//    string results[10][4];
//    bool boolean = false;
//    string input;
//
//    conn = mysql_init(0);
//    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    if (conn)
//    {
//        while (!boolean)
//        {
//            system("cls");
//
//            cout << "word: ";
//            getline(cin, input);
//
//            if (input != "")
//            {
//                input = _Utilities::toLowerWord(input);
//
//                sql1 = "SELECT * FROM entries2;";
//                mysql_query(conn, sql1.c_str());
//                result = mysql_store_result(conn);
//
//                while (row = mysql_fetch_row(result))
//                {
//                    word = _Utilities::toLowerWord(row[0]);
//
//                    if (input == word)
//                    {
//                        // Find a most open position in the results arrray
//                        for (int x = 0; x <= 10; x++)
//                        {
//                            if (results[x][0] == "")
//                            {
//                                results[x][0] = row[0];
//                                results[x][1] = row[1];
//                                results[x][2] = row[2];
//                                results[x][3] = row[3];
//                            }
//                        }
//                    }
//                }
//            }
//        }
//    }
//
//    return results;
//}

void _DatabaseFunctions::savePassword(string hostname, string password, string image_location)
{
    //MYSQL* conn;
    //MYSQL_RES* result;
    ////string mysql_hostname = _Settings::GetMySQLHostname();
    ////string mysql_username = _Settings::GetMySQLUsername();
    ////string mysql_password = _Settings::GetMySQLPassword();
    //ostringstream query1;
    //string sql1;
    //string mysql_database = "personal_information";
    //string table_name = "passwords";
    ////string image_location = stm_vision_path_camera1[1000][0];

    //conn = mysql_init(0);
    //conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    //if (conn)
    //{
    //    query1 << "INSERT INTO " << table_name << "(computer_hostname, image_location, password) VALUES(" << hostname.c_str() << ", " << image_location.c_str() << ", " << password.c_str() << ");";
    //    sql1 = query1.str();
    //    cout << "SQL1: " << sql1 << endl;
    //    mysql_query(conn, sql1.c_str());
    //    result = mysql_store_result(conn);
    //}
}

string _DatabaseFunctions::getPassword(string domain)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    ostringstream query1;
    string sql1;
    string database = "personal_information";
    string table_name = "passwords";

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query1 << "SELECT * FROM " << table_name;
        sql1 = query1.str();
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == domain)
            {
                cout << "Name: " << row[0] << endl;
                cout << "Password: " << row[1] << endl;
                return row[1];
            }
        }
    }
    return nullptr;
}

void _DatabaseFunctions::getPasswordsScreenshot(string password)
{

}

// This function will search rote book database for a string literal
//  1. The title of the book is not known, search all databases for the string literal
void _DatabaseFunctions::BookDatabaseSearch(string search, string* bookTitle, string* PageNumber, string* author)
{
    // 1. Open the books database
    // 2. Search the databases for the string literal
    // 3. Present information to heuristic or _NLP
    // Note: How to return multiple variables to the calling function
}

// Get the music artist
string _DatabaseFunctions::GetMusicArtist(string search)
{
    string temp;
    return temp;
}

// Get music album
string _DatabaseFunctions::GetMusicAlbum(string artist, string song)
{
    string temp;
    return temp;
}

string _DatabaseFunctions::GetMusicSong(string artist, string album)
{
    string temp;
    return temp;
}

// This function will search music lyrics from music database and return the song, album and artist
void _DatabaseFunctions::MusicLyricsSearch(string search, string& artist, string& album, string& song)
{
    // 1. Open the music MySQL database

    // 2. Get the tables

    // 3. Search each table column for the lyrics

    // 4. Return the variables
}

// This function will be called when listening to music to syncronize the user's thoughts with a current song
// This function will also explain the approximated meaning of the lyrics
void _Utilities::MusicLyricsSync(string search)
{
    // 1. Open the music database

    // 2. Search for the song lyrics

    // 3. Synchronize from the position in the song to the lyrics from the database
}

// This function will return the text of a specific chapter
string _DatabaseFunctions::BibleVerseSearch(string book, int chapter)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    ostringstream query1;
    string sql1;
    string database = "bible_kjv";
    string table_name = book;
    string temp_chapter = to_string(chapter);
    string** completed = new string*[100];
    completed[0] = new string[3];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query1 << "SELECT * FROM " << table_name;
        sql1 = query1.str();
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == temp_chapter)
            {
                // Print to the end of the chapter
                cout << row[0] << ":" << row[1] << " " << row[2] << endl;
            }
        }
    }

    return nullptr;
}

// This function will return the text of a bible verse from the book, chapter, and verse
string _DatabaseFunctions::BibleVerseSearch(string book, int chapter, int verse)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    ostringstream query1;
    string sql1;
    string database = "bible_kjv";
    string table_name = book;
    string temp_chapter = to_string(chapter);
    string temp_verse = to_string(verse);
    string** completed = new string*[100];
    completed[0] = new string[3];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query1 << "SELECT * FROM " << table_name;
        sql1 = query1.str();
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (row[0] == temp_chapter && row[1] == temp_verse)
            {
                // Print to the end of the chapter
                cout << row[0] << ":" << row[1] << " " << row[2] << endl;
            }
        }
    }

    return nullptr;
}

// This function returns the page number for the start of a book
//  TODO: This function will probably need to be initially vision based as there is not a way to retrive the text from a bible the user picks up in church
//      A neural network will need to look at the table of contents, convert each line to strings and import the page numbers to the database
int _DatabaseFunctions::BibleVersePageNumber(string book)
{
    int page_number;
    return page_number;
}

// This function returns the page number for the book and chapter
//  TODO: This function will probably need to be initially vision based as there is not a way to retrive the text from a bible the user picks up in church
//      A neural network will need to look at the table of contents, convert each line to strings and import the page numbers to the database
int _DatabaseFunctions::BibleChapterPageNumber(string book, int chapter)
{
    int page_number;
    return page_number;
}

// This function returns the page number for a specific verse
//  TODO: This function will probably need to be initially vision based as there is not a way to retrive the text from a bible the user picks up in church
//      A neural network will need to look at the table of contents, convert each line to strings and import the page numbers to the database
int _DatabaseFunctions::BibleVersePageNumber(string book, int chapter, int verse)
{
    int page_number;
    // 1. Open the users bible database

    // 2. Search for the book

    // 3. Search for the chapter

    // 4. Search for the verse

    // 5. Return the page number
    return page_number;
}

string* _DatabaseFunctions::SearchWikiTables(string wiki_name, string title)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string sql1;
    string mysql_database = wiki_name;
    string temp;
    string* completed = new string[100];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SHOW TABLES;";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            temp = row[0];

            if (title == temp)
            {
                // Get the first available place in memory
                for (int x = 0; x <= 100; x++)
                {
                    if (completed[x] == "")
                    {
                        completed[x] = temp;
                    }
                }
            }
        }
    }

    return completed;
}

// The following function will search wikipedia for an article
string _DatabaseFunctions::SearchWikipedia(string title)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string sql1;
    string mysql_database = "wikipedia";
    string mysql_table = title;
    mysql_table = _Utilities::FixWikiTableName(mysql_table);
    string completed = "";

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        sql1 += ";";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            completed += row[4] + '\n';
        }
    }

    // 1. The function would need to rearrange words to best fit a query of Wikipedia
    // 2. Load the MySQL Wiki database into memory and keyword search for article

    return completed;
}

string _DatabaseFunctions::SearchWikisimple(string title)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string sql1;
    string mysql_database = "wikihow";
    string mysql_table = title;
    mysql_table = _Utilities::FixWikiTableName(mysql_table);
    string completed = "";

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        sql1 += ";";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            completed += row[4] + '\n';
        }
    }

    // 1. The function would need to rearrange words to best fit a query of Wikipedia
    // 2. Load the MySQL Wiki database into memory and keyword search for article

    return completed;
}

// The following function will search wikipedia for an article
string _DatabaseFunctions::SearchWikihow(string title)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string sql1;
    string mysql_database = "wikihow";
    string mysql_table = title;
    mysql_table = _Utilities::FixWikiTableName(mysql_table);
    string completed = "";

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        sql1 += ";";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            completed += row[4] + '\n';
        }
    }

    // 1. The function would need to rearrange words to best fit a query of Wikipedia
    // 2. Load the MySQL Wiki database into memory and keyword search for article

    return completed;
}

// The following function will search wikipedia for an article
string _DatabaseFunctions::SearchWikiquote(string title)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string sql1;
    string mysql_database = "wikiquote";
    string mysql_table = title;
    mysql_table = _Utilities::FixWikiTableName(mysql_table);
    string completed = "";

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        sql1 += ";";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            completed += row[4] + '\n';
        }
    }

    // 1. The function would need to rearrange words to best fit a query of Wikipedia
    // 2. Load the MySQL Wiki database into memory and keyword search for article

    return completed;
}

// The following function will search wikipedia for an article
string _DatabaseFunctions::SearchWikisource(string title)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string sql1;
    string mysql_database = "wikisource";
    string mysql_table = title;
    mysql_table = _Utilities::FixWikiTableName(mysql_table);
    string completed = "";

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        sql1 += ";";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            completed += row[4] + '\n';
        }
    }

    // 1. The function would need to rearrange words to best fit a query of Wikipedia
    // 2. Load the MySQL Wiki database into memory and keyword search for article

    return completed;
}

// The following function will search wikipedia for an article
string _DatabaseFunctions::SearchWikibooks(string title)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string sql1;
    string mysql_database = "wikibooks";
    string mysql_table = title;
    mysql_table = _Utilities::FixWikiTableName(mysql_table);
    string completed = "";

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        sql1 += ";";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            completed += row[4] + '\n';
        }
    }

    // 1. The function would need to rearrange words to best fit a query of Wikipedia
    // 2. Load the MySQL Wiki database into memory and keyword search for article

    return completed;
}

string _DatabaseFunctions::SearchStackexchange(string title)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string sql1;
    string mysql_database = "wikibooks";
    string mysql_table = title;
    mysql_table = _Utilities::FixWikiTableName(mysql_table);
    string completed = "";

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        sql1 += ";";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            completed += row[4] + '\n';
        }
    }

    // 1. The function would need to rearrange words to best fit a query of Wikipedia
    // 2. Load the MySQL Wiki database into memory and keyword search for article

    return completed;
}

void _DatabaseFunctions::PrintWikipedia(string title)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string heading;
    string sub_heading;
    string sub_sub_heading;
    string sub_sub_sub_heading;
    string wiki_text;
    string sql1;
    string mysql_database = "wikipedia";
    string mysql_table = title;
    mysql_table = _Utilities::FixWikiTableName(mysql_table);
    int x = 0;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table.c_str();
        sql1 += ";";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (conn)
            {
                sql1 = "SELECT * FROM ";
                sql1 += title.c_str();
                sql1 += ";";
                /*cout << "SQL1: " << sql1 << endl;*/
                mysql_query(conn, sql1.c_str());
                result = mysql_store_result(conn);

                cout << title << endl;

                while (row = mysql_fetch_row(result))
                {
                    heading = row[0];
                    sub_heading = row[1];
                    sub_sub_heading = row[2];
                    sub_sub_sub_heading = row[3];
                    wiki_text = row[4];

                    if (heading == "NULL")
                    {
                        cout << wiki_text << endl;
                        cout << endl;
                    }
                    else
                    {
                        if (wiki_text != "")
                        {
                            cout << heading << endl;

                            if (sub_heading == "NULL")
                            {
                                cout << wiki_text << endl;
                                cout << endl;
                            }
                            else
                            {
                                cout << sub_heading << endl;

                                if (sub_sub_heading == "NULL")
                                {
                                    cout << wiki_text << endl;
                                    cout << endl;
                                }
                                else
                                {
                                    cout << sub_sub_heading << endl;

                                    if (sub_sub_sub_heading == "NULL")
                                    {
                                        cout << wiki_text << endl;
                                        cout << endl;
                                    }
                                    else
                                    {
                                        cout << sub_sub_sub_heading << endl;
                                        cout << wiki_text << endl;
                                        cout << endl;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    // 1. The function would need to rearrange words to best fit a query of Wikipedia
    // 2. Load the MySQL Wiki database into memory and keyword search for article
}

string** _DatabaseFunctions::WiktionarySearch(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_database = "wiktionary";
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string heading;
    string sub_heading;
    string sub_sub_heading;
    string sub_sub_sub_heading;
    string wiki_text;
    string** array;
    string sql1;
    string mysql_table = word;
    mysql_table = _Utilities::FixWikiTableName(mysql_table);
    
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table.c_str();
        sql1 += ";";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            heading = row[0];
            sub_heading = row[1];
            sub_sub_heading = row[2];
            sub_sub_sub_heading = row[3];
            wiki_text = row[4];

            for (int x = 0; x <= sub_heading.length(); x++)
            {
                if (sub_heading[x] == 'A' && sub_heading[x + 1] == 'd' && sub_heading[x + 2] == 'j' && sub_heading[x + 3] == 'e' && sub_heading[x + 4] == 'c' && sub_heading[x + 5] == 't' && sub_heading[x + 6] == 'i' && sub_heading[x + 7] == 'v' && sub_heading[x + 8] == 'e')
                {
                    for (int y = 3; y <= wiki_text.length(); y++)
                    {

                    }
                }
                if (sub_heading[x] == 'N' && sub_heading[x + 1] == 'o' && sub_heading[x + 2] == 'u' && sub_heading[x + 3] == 'n')
                {
                    for (int y = 3; y <= wiki_text.length(); y++)
                    {

                    }
                }
                if (sub_heading[x] == 'D' && sub_heading[x + 1] == 'e' && sub_heading[x + 2] == 't' && sub_heading[x + 3] == 'e' && sub_heading[x + 4] == 'r' && sub_heading[x + 5] == 'm' && sub_heading[x + 6] == 'i' && sub_heading[x + 7] == 'n' && sub_heading[x + 8] == 'e' && sub_heading[x + 9] == 'r')
                {
                    for (int y = 3; y <= wiki_text.length(); y++)
                    {

                    }
                }
                if (sub_heading[x] == 'P' && sub_heading[x + 1] == 'r' && sub_heading[x + 2] == 'o' && sub_heading[x + 3] == 'n' && sub_heading[x + 4] == 'o' && sub_heading[x + 5] == 'u' && sub_heading[x + 6] == 'n')
                {
                    for (int y = 3; y <= wiki_text.length(); y++)
                    {

                    }
                }
                if (sub_heading[x] == 'A' && sub_heading[x + 1] == 'n' && sub_heading[x + 2] == 'a' && sub_heading[x + 3] == 'g' && sub_heading[x + 4] == 'r' && sub_heading[x + 5] == 'a' && sub_heading[x + 6] == 'm' && sub_heading[x + 7] == 's')
                {
                    for (int y = 3; y <= wiki_text.length(); y++)
                    {

                    }
                }
                if (sub_heading[x] == 'V' && sub_heading[x + 1] == 'e' && sub_heading[x + 2] == 'r' && sub_heading[x + 3] == 'b')
                {
                    for (int y = 3; y <= wiki_text.length(); y++)
                    {

                    }
                }
                if (sub_heading[x] == 'A' && sub_heading[x + 1] == 'd' && sub_heading[x + 2] == 'v' && sub_heading[x + 3] == 'e' && sub_heading[x + 4] == 'r' && sub_heading[x + 5] == 'b')
                {
                    for (int y = 3; y <= wiki_text.length(); y++)
                    {

                    }
                }
                if (sub_heading[x] == 'I' && sub_heading[x + 1] == 'n' && sub_heading[x + 2] == 't' && sub_heading[x + 3] == 'e' && sub_heading[x + 4] == 'r' && sub_heading[x + 5] == 'j' && sub_heading[x + 6] == 'e' && sub_heading[x + 7] == 'c' && sub_heading[x + 8] == 't' && sub_heading[x + 9] == 'i' && sub_heading[x + 10] == 'o' && sub_heading[x + 11] == 'n')
                {
                    for (int y = 3; y <= wiki_text.length(); y++)
                    {

                    }
                }
            }
        }
    }

    return array;
}
//
//string** _DatabaseFunctions::BookDatabaseSearch(string title)
//{
//
//}

//__global__ string** _DatabaseFunctions::CUDA::BookDatabaseSearch(string title)
//{
//
//}
//
//string** _DatabaseFunctions::BookDatabaseSearch(string title, string author)
//{
//
//}

//__global__ string** _DatabaseFunctions::CUDA::BookDatabaseSearch(string title, string author)
//{
//
//}
//
//string** _DatabaseFunctions::BookDatabaseSearchAuthor(string author)
//{
//
//}
//
//__global__ string** _DatabaseFunctions::CUDA::BookDatabaseSearchAuthor(string author)
//{
//
//}
//
//string** _DatabaseFunctions::BookDatabaseSearchConcept(string search)
//{
//
//}
//
//__global__ string** _DatabaseFunctions::CUDA::BookDatabaseSearchConcept(string search)
//{
//
//}
//
//__global__ string** _DatabaseFunctions::CUDA::WikiHowSearch(string article)
//{
//
//}

// TODO: Use CUDA to iterate through the list of common nouns
string** _DatabaseFunctions::SearchDictionary(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string mysql_table = "entries";
    string sql1;
    string** completed = new string*[10];
    completed[0] = new string[3];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        sql1 += ';';
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            string temp = _Utilities::toLowerWord(row[0]);

            if (word == temp)
            {
                // Find the first place in memory for completed
                for (int x = 0; x < 10; x++)
                {
                    if (completed[x][0] == "")
                    {
                        completed[x][0] = temp;
                        completed[x][1] = row[1];
                        completed[x][2] = row[2];
                        break;
                    }
                }
            }
        }

        return completed;
    }

    return completed;
}

string** _DatabaseFunctions::SearchDictionary(string word, string word_type)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_hostname = _Settings::GetMySQLHostname();
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string mysql_table = "entries";
    string sql1;
    string** completed = new string*[10];
    completed[0] = new string[3];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        sql1 += ";";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            string temp = _Utilities::toLowerWord(row[0]);
            string temp2 = _Utilities::toLowerWord(row[1]);

            if (word == temp && word_type == temp2)
            {
                // Find the first place in memory for completed
                for (int x = 0; x < 10; x++)
                {
                    if (completed[x][0] == "")
                    {
                        completed[x][0] = temp;
                        completed[x][1] = row[1];
                        completed[x][2] = row[2];
                        break;
                    }
                }
            }
        }

        return completed;
    }

    return completed;
}

string** _DatabaseFunctions::SearchDictionary(string word, string word_type, string definition)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string mysql_table = "entries";
    string sql1;
    string** completed = new string * [10];
    completed[0] = new string[3];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        sql1 += ";";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            string temp = _Utilities::toLowerWord(row[0]);
            string temp2 = _Utilities::toLowerWord(row[1]);
            string temp3 = _Utilities::toLowerWord(row[2]);

            if (word == temp && word_type == temp2 && definition == temp3)
            {
                // Find the first place in memory for completed
                for (int x = 0; x < 10; x++)
                {
                    if (completed[x][0] == "")
                    {
                        completed[x][0] = temp;
                        completed[x][1] = row[1];
                        completed[x][2] = row[2];
                        break;
                    }
                }
            }
        }

        return completed;
    }

    return completed;
}

//string** _DatabaseFunctions::SearchDictionaryDefinition(string definition)
//{
//    MYSQL* conn = nullptr;
//    MYSQL_ROW row;
//    MYSQL_RES* result;
//    string mysql_hostname = _Settings::GetMySQLHostname();
//    string mysql_username = _Settings::GetMySQLUsername();
//    string mysql_password = _Settings::GetMySQLPassword();
//    string mysql_database = "dictionary";
//    string mysql_table = "entries";
//    string sql1;
//    string** completed = new string * [10];
//    completed[0] = new string[3];
//
//    conn = mysql_init(0);
//    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    if (conn)
//    {
//        sql1 = "SELECT * FROM ";
//        sql1 += mysql_table;
//        /*cout << "SQL1: " << sql1 << endl;*/
//        mysql_query(conn, sql1.c_str());
//        result = mysql_store_result(conn);
//
//        while (row = mysql_fetch_row(result))
//        {
//            if (definition == row[2])
//            {
//                // Find the first place in memory for completed
//                for (int x = 0; x < 10; x++)
//                {
//                    if (completed[x][0] == "")
//                    {
//                        completed[x][0] = temp;
//                        completed[x][1] = row[1];
//                        completed[x][2] = row[2];
//                        break;
//                    }
//                }
//            }
//        }
//
//        return completed;
//    }
//
//    return completed;
//}

string** _DatabaseFunctions::SearchDictionaryWordType(string word_type)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string mysql_table = "entries";
    string sql1;
    string** completed = new string * [10];
    completed[0] = new string[3];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            string temp = _Utilities::toLowerWord(row[1]);

            if (word_type == temp)
            {
                // Find an empty place in the completed string array
                for (int x = 0; x <= 10; x++)
                {
                    if (completed[x][0] == "")
                    {
                        completed[x][0] = row[0];
                        completed[x][1] = row[1];
                        completed[x][2] = row[2];
                        break;
                    }
                }
            }
        }

        return completed;
    }

    return completed;
}

string** _DatabaseFunctions::SearchDictionaryVector(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string mysql_table = "wiki_vectors";
    string sql1;
    string temp;
    string** completed = new string * [10];
    completed[0] = new string[3];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            string temp = _Utilities::toLowerWord(row[1]);

            if (word == row[0])
            {
                // Find the first place in memory for completed
                for (int x = 0; x < 10; x++)
                {
                    if (completed[x][0] == "")
                    {
                        completed[x][0] = temp;
                        completed[x][1] = row[1];
                        completed[x][2] = row[2];
                        break;
                    }
                }
            }
        }

        return completed;
    }

    return completed;
}

string** _DatabaseFunctions::SearchDictionaryVector(string word, string word_type)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string tableName = "wiki_vectors";
    string sql1;
    string temp;
    string temp2;
    string** completed = new string*[10];
    completed[0] = new string[3];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += tableName;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            string temp = _Utilities::toLowerWord(row[3]);

            if (word == temp)
            {
                // Find the first place in memory for completed
                for (int x = 0; x < 10; x++)
                {
                    if (completed[x][0] == "")
                    {
                        completed[x][0] = temp;
                        completed[x][1] = row[1];
                        completed[x][2] = row[2];
                        break;
                    }
                }
            }
        }
    }

    return completed;
}

//string** _DatabaseFunctions::SearchDictionaryVector(string word, string word_type, string definition)
//{
//    MYSQL* conn = nullptr;
//    MYSQL_ROW row;
//    MYSQL_RES* result;
//    string mysql_hostname = _Settings::GetMySQLHostname();
//    string mysql_username = _Settings::GetMySQLUsername();
//    string mysql_password = _Settings::GetMySQLPassword();
//    string mysql_database = "dictionary";
//    string mysql_table = "wiki_vectors";
//    string sql1;
//    string temp;
//    string temp2;
//    string completed[300];
//
//    conn = mysql_init(0);
//    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    if (conn)
//    {
//        sql1 = "SELECT * FROM ";
//        sql1 += mysql_table;
//        /*cout << "SQL1: " << sql1 << endl;*/
//        mysql_query(conn, sql1.c_str());
//        result = mysql_store_result(conn);
//
//        while (row = mysql_fetch_row(result))
//        {
//            if (word == row[0] && word_type == row[1] && definition == row[2])
//            {
//                temp = row[3];
//
//            }
//        }
//
//        return completed;
//    }
//
//    return completed;
//}

//string* _DatabaseFunctions::SearchDictionaryVectorDefinition(string definition)
//{
//    MYSQL* conn = nullptr;
//    MYSQL_ROW row;
//    MYSQL_RES* result;
//    string mysql_hostname = _Settings::GetMySQLHostname();
//    string mysql_username = _Settings::GetMySQLUsername();
//    string mysql_password = _Settings::GetMySQLPassword();
//    string mysql_database = "dictionary";
//    string mysql_table = "entries2";
//    string sql1;
//    string temp;
//    string temp2;
//    string completed[300];
//
//    conn = mysql_init(0);
//    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
//
//    if (conn)
//    {
//        sql1 = "SELECT * FROM ";
//        sql1 += mysql_table;
//        /*cout << "SQL1: " << sql1 << endl;*/
//        mysql_query(conn, sql1.c_str());
//        result = mysql_store_result(conn);
//
//        while (row = mysql_fetch_row(result))
//        {
//            if (definition == row[2])
//            {
//                temp = row[3];
//
//                
//            }
//        }
//
//        return completed;
//    }
//
//    return completed;
//}

string** _DatabaseFunctions::SearchDictionaryVectorWordType(string word_type)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result;
    //string mysql_hostname = _Settings::GetMySQLHostname();
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string mysql_table = "wiki_vectors";
    string sql1;
    string** completed = new string*[10];
    completed[0] = new string[3];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (word_type == row[1])
            {
                // Find an empty place in the completed string array
                for (int x = 0; x < 10; x++)
                {
                    if (completed[x][0] == "")
                    {
                        completed[x][0] = row[0];
                        completed[x][1] = row[1];
                        completed[x][2] = row[2];
                        break;
                    }
                }
            }
        }

        return completed;
    }

    return completed;
}

void _DatabaseFunctions::CreateMySQLTableFederal(string title, string chapter, string sub_chapter, string section, string us_code_text)
{
    MYSQL* conn = nullptr;
    //string mysql_hostname = mysql_hostname.c_str();
    //string mysql_username = "root";
    //string mysql_password = "Anaheim228";
    string mysql_database = "us_code";
    string mysql_table = title;
    string sql1;

    if (conn)
    {
        sql1 = "CREATE TABLE ";
        sql1 += title;
        sql1 += "(title TEXT, chapter TEXT, sub_chapter TEXT, section TEXT, code_text text);";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
    }
}

void _DatabaseFunctions::QueryMySQLDatabaseFederal(string title, string chapter, string sub_chapter, string section, string us_code_text)
{
    MYSQL* conn = nullptr;
    string mysql_hostname = mysql_hostname.c_str();
    string mysql_username = "root";
    string mysql_password = "Anaheim228";
    string mysql_database = "us_code";
    string mysql_table = title;
    string sql1;
    string sql2;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "INSERT INTO ";
        sql1 += mysql_table;
        sql1 += "(title, chapter, sub_chapter, section, code_text) VALUES(\"";
        sql1 += title.c_str();
        sql1 += "\", \"";
        sql1 += chapter.c_str();
        sql1 += "\", \"";
        sql1 += sub_chapter.c_str();
        sql1 += "\", \"";
        sql1 += section.c_str();
        sql1 += "\", \"";
        sql1 += us_code_text.c_str();
        sql1 += "\");";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
    }
}

void _DatabaseFunctions::DropDatabase(string database_input)
{
    MYSQL* conn = nullptr;
    MYSQL* conn2;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_database = database_input;
    string mysql_hostname = _Settings::GetMySQLHostname();
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    mysql_database = _Utilities::FixWikiTableName(mysql_database);
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "DROP DATABASE ";
        sql1 += mysql_database.c_str();
        sql1 += ";";
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);
    }
}

void _DatabaseFunctions::CreateDatabase(string database_input)
{
    MYSQL* conn = nullptr;
    MYSQL* conn2;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_database = database_input;
    string mysql_hostname = _Settings::GetMySQLHostname();
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    mysql_database = _Utilities::FixWikiTableName(mysql_database);
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "CREATE DATABASE ";
        sql1 += mysql_database.c_str();
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);
    }
}

void _DatabaseFunctions::DropTable(string database_input, string table_input)
{
    MYSQL* conn = nullptr;
    MYSQL* conn2;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_database = database_input;
    string mysql_hostname = _Settings::GetMySQLHostname();
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string mysql_table = table_input;
    mysql_table = _Utilities::FixWikiTableName(mysql_table);
    mysql_database = _Utilities::FixWikiTableName(mysql_database);
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "DROP TABLE ";
        sql1 += mysql_database.c_str();
        sql1 += ";";
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);
    }
}

void _DatabaseFunctions::CreateTable(string database_input, string table_input, string* rows)
{
    MYSQL* conn = nullptr;
    MYSQL* conn2;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_database = database_input;
    string mysql_hostname = _Settings::GetMySQLHostname();
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string mysql_table = table_input;
    mysql_table = _Utilities::FixWikiTableName(mysql_table);
    mysql_database = _Utilities::FixWikiTableName(mysql_database);
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "CREATE TABLE ";
        sql1 += mysql_table.c_str();
        sql1 += "(";

        for (int x = 0; x <= sizeof(rows); x++)
        {
            if (x < sizeof(rows))
            {
                sql1 += rows[x];
                sql1 += ", ";
            }
            else
            {
                sql1 += rows[x];
                sql1 += ");";
            }
        }

        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);
    }
}

string* _MySQL::QueryDatabaseWordTypes(string word)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result1;
    string mysql_table = "entries";
    string sql1;
    //string tableName = "entries";
    string wordTypes[10];
    int count = 0;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        sql1 += ";";
        mysql_query(conn, sql1.c_str());
        result1 = mysql_store_result(conn);

        while (row = mysql_fetch_row(result1))
        {
            if (row[0] == word)
            {
                // Check if the current interation is a punctuation charcter, get the name of the punctuation
                for (int x = 0; x <= sizeof(wordTypes); x++)
                {
                    if (wordTypes[x] == "")
                    {
                        wordTypes[x] = row[1];
                    }
                }
            }
        }
    }
    mysql_close(conn);
    return wordTypes;
}

string** _MySQL::QueryDatabaseDefinitions(string word, string* wordTypes)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result1;
    string sql1;
    string** array2D;
    array2D = new string * [5];
    string temp;
    string temp2;
    string mysql_table = "entries";

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += mysql_table;
        sql1 += ";";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result1 = mysql_store_result(conn);

        while (row = mysql_fetch_row(result1))
        {
            if (row[0] == word)
            {
                // Find empty space in rows
                for (int x = 0; x <= sizeof(wordTypes); x++)
                {
                    if (x == 0)
                    {
                        array2D[x][0] = row[1];

                        // Find empty space in definitions
                        for (int y = 0; y <= 10; y++)
                        {
                            if (array2D[x][y] == "")
                            {
                                array2D[x][y] = row[2];
                            }
                        }
                    }
                    else
                    {
                        for (int y = sizeof(wordTypes); y > 0; y--)
                        {
                            if (array2D[y][0] == wordTypes[y - 1])
                            {
                                array2D[x][y] = row[2];
                            }
                        }
                    }
                }
            }
        }
    }
    mysql_close(conn);
    return array2D;
}

void _MySQL::CreateTableWords(string mysql_origin_database, string mysql_table)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result1;
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_destination_database_words.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "CREATE TABLE `";
        sql1 += mysql_table.c_str();
        sql1 += "`(word TEXT, word_type TEXT, definition TEXT, special_type TEXT, pronoun_anaphora TEXT, prepsitional_phrase bool, object_of_preposition bool, direct_object bool, indirect_object bool, paragraph_num TEXT, sentence_num TEXT, vector TEXT);";
        mysql_query(conn, sql1.c_str());
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mysql_close(conn);
    }
    else
    {
        cout << "Could not connect to MySQL Server..." << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mysql_close(conn);
    }
}

void _MySQL::CreateTableSentences(string mysql_origin_database, string mysql_table)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result1;
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_destination_database_sentences.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "CREATE TABLE `";
        sql1 += mysql_table.c_str();
        sql1 += "`(sentence TEXT, subject TEXT, verb TEXT, predicate_sentence TEXT, direct_object TEXT, pronoun_anaphora TEXT, prepsitional_phrase TEXT, object_of_preposition TEXT, direct_object TEXT, indirect_object TEXT, noun_phrase TEXT, relative_clause TEXT, infinitive_phrase TEXT, adjective_phrase TEXT, adverbial_phrase TEXT, participle_phrase TEXT, absolute_phrase TEXT, independent_clause TEXT, dependent_clause TEXT, noun_clause TEXT, simple_sentence bool, compound_sentence bool, complex_sentence bool, compound_complex_sentence bool, declarative_sentence bool, interrogative_sentence bool, negative_interrogative_sentence bool, imperative_sentence bool, conditional_sentence bool, regular_sentence bool, irregular_sentence bool, single_word_sentence bool, instructions bool, yes_or_no_sentence bool, literal_question bool, it_depends bool, statement_of_uncertainty bool, paragraph_num TEXT, sentence_num TEXT, sentence_vector TEXT, averaged_vector TEXT);";
        mysql_query(conn, sql1.c_str());
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mysql_close(conn);
    }
    else
    {
        cout << "Could not connect to MySQL Server..." << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mysql_close(conn);
    }
}

void _MySQL::QueryDatabaseWikiWords(string mysql_database, string mysql_table, string paragraph_number, string sentence_number, string word, string word_type, string definition, string special_type, string pronoun_anaphora, bool object_of_preposition, bool direct_object, bool indirect_object, string vector)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_destination_database_words.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "INSERT INTO `";
        sql1 += mysql_table.c_str();
        sql1 += "`(word, word_type, definition, special_type, pronoun_anaphora, prepositional_phrase, object_of_preposition, direct_object, indirect_object, noun_phrase, relative_clause, infinitive_phrase, adjective_phrase, adverbial_phrase, participle_phrase, absolute_phrase, independent_clause, dependent_clause, noun_clause, paragraph_number, sentence_number, vector) VALUES(\"";
        sql1 += word.c_str();
        sql1 += "\", \"";
        sql1 += word_type.c_str();
        sql1 += "\", \"";
        sql1 += definition.c_str();
        sql1 += "\", \"";
        sql1 += special_type.c_str();
        sql1 += "\", \"";
        sql1 += pronoun_anaphora.c_str();
        sql1 += "\", \"";
        if (object_of_preposition)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (direct_object)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (indirect_object)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        sql1 += vector.c_str();
        sql1 += "\", \"";
        sql1 += paragraph_number.c_str();
        sql1 += "\", \"";
        sql1 += sentence_number.c_str();
        sql1 += "\");";
        mysql_query(conn, sql1.c_str());
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        mysql_close(conn);
    }
    else
    {
        cout << "Could not connect to MySQL Server..." << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(10));
        mysql_close(conn);
    }
}

void _MySQL::QueryDatabaseWikiSentences(string mysql_database, string mysql_table, string paragraph_number, string sentence_number, string sentence, string* subject, string verb, string* predicate_sentence, string direct_object, string indirect_object, string* prepositional_phrase, string object_of_preposition, string* noun_phrase, string* relative_clause, string* infinitive_phrase, string* adjective_phrase, string* adverbial_phrase, string* participle_phrase, string* absolute_phrase, string* independent_clause, string* dependent_clause, string* noun_clause, bool simple_sentence, bool compound_sentence, bool complex_sentence, bool compound_complex_sentence, bool declarative_sentence, bool interrogative_sentence, bool negative_interrogative_sentence, bool imperative_sentence, bool conditional_sentence, bool regular_sentence, bool irregular_sentence, bool single_word_sentence, bool instructions, bool yes_or_no_sentence, bool literal_question, bool it_depends, bool statement_of_uncertainty, string sentence_vector, string averaged_vector)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_destination_database_sentences.c_str(), 3306, NULL, 0);

    string subject_str = _Utilities::StringArray2String(subject);
    string predicate_sentence_str = _Utilities::StringArray2String(predicate_sentence);
    string prepositional_phrase_str = _Utilities::StringArray2String(prepositional_phrase);
    string noun_phrase_str = _Utilities::StringArray2String(noun_phrase);
    string relative_clause_str = _Utilities::StringArray2String(relative_clause);
    string infinitive_phrase_str = _Utilities::StringArray2String(infinitive_phrase);
    string adjective_phrase_str = _Utilities::StringArray2String(adjective_phrase);
    string adverbial_phrase_str = _Utilities::StringArray2String(adverbial_phrase);
    string participle_phrase_str = _Utilities::StringArray2String(participle_phrase);
    string absolute_phrase_str = _Utilities::StringArray2String(absolute_phrase);
    string independent_clause_str = _Utilities::StringArray2String(independent_clause);
    string dependent_clause_str = _Utilities::StringArray2String(dependent_clause);
    string noun_clause_str = _Utilities::StringArray2String(noun_clause);

    if (conn)
    {
        sql1 = "INSERT INTO `";
        sql1 += mysql_table.c_str();
        sql1 += "`(sentence, subject, verb, predicate_sentence, direct_object, indirect_object, preposition, object_of_preposition, noun_phrase, relative_clause, infinitive_phrase, adjective_phrase, adverbial_phrase, participle_phrase, absolute_phrase, independent_clause, dependent_clause, noun_phrase, simple_sentence, compound_sentence, complex_sentence, compound_complex, complex, compound_complex_sentence, declarative_sentence, interrogative_sentence, negative_interroagative_sentence, imperative_sentence, conditional_sentence, regular_sentence, irregular_sentence, single_word_sentence, instructions, yes_or_no_sentence, literal_question, it_depends, statement_of_uncertainty, paragraph_sentence, sentence_number, sentence_vector, averaged_vector) VALUES(\"";
        sql1 += sentence.c_str();
        sql1 += "\", \"";
        sql1 += subject_str.c_str();
        sql1 += "\", \"";
        sql1 += verb.c_str();
        sql1 += "\", \"";
        sql1 += predicate_sentence_str.c_str();
        sql1 += "\", \"";
        sql1 += direct_object.c_str();
        sql1 += "\", \"";
        sql1 += indirect_object.c_str();
        sql1 += "\", \"";
        sql1 += prepositional_phrase_str.c_str();
        sql1 += "\", \"";
        sql1 += object_of_preposition.c_str();
        sql1 += "\", \"";
        sql1 += noun_phrase_str.c_str();
        sql1 += "\", \"";
        sql1 += relative_clause_str.c_str();
        sql1 += "\", \"";
        sql1 += infinitive_phrase_str.c_str();
        sql1 += "\", \"";
        sql1 += adjective_phrase_str.c_str();
        sql1 += "\", \"";
        sql1 += adverbial_phrase_str.c_str();
        sql1 += "\", \"";
        sql1 += participle_phrase_str.c_str();
        sql1 += "\", \"";
        sql1 += absolute_phrase_str.c_str();
        sql1 += "\", \"";
        sql1 += independent_clause_str.c_str();
        sql1 += "\", \"";
        sql1 += dependent_clause_str.c_str();
        sql1 += "\", \"";
        sql1 += noun_clause_str.c_str();
        sql1 += "\", \"";
        if (simple_sentence)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (compound_sentence)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (complex_sentence)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (compound_complex_sentence)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (declarative_sentence)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (interrogative_sentence)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (negative_interrogative_sentence)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (imperative_sentence)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (conditional_sentence)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (regular_sentence)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (irregular_sentence)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (single_word_sentence)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (instructions)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (literal_question)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (it_depends)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        if (statement_of_uncertainty)
            sql1 += "True";
        else
            sql1 += "False";
        sql1 += "\", \"";
        sql1 += paragraph_number.c_str();
        sql1 += "\", \"";
        sql1 += sentence_number.c_str();
        sql1 += "\", \"";
        sql1 += sentence_vector.c_str();
        sql1 += "\", \"";
        sql1 += averaged_vector.c_str();
        sql1 += "\");";
        mysql_query(conn, sql1.c_str());
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mysql_close(conn);
    }
    else
    {
        cout << "Could not connect to MySQL Server..." << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mysql_close(conn);
    }
}

string _MySQL::QueryWordVector(string word, string word_type)
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result1;
    string mysql_table = "wiki_vectors";
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM `";
        sql1 += mysql_table.c_str();
        sql1 += "`;";
        mysql_query(conn, sql1.c_str());
        result1 = mysql_store_result(conn);

        while (row = mysql_fetch_row(result1))
        {
            if (word == row[0] && word_type == row[1])
            {
                mysql_close(conn);
                return row[2];
            }
        }
    }
    else
    {
        cout << "Could not connect to MySQL Server..." << endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(1));
        mysql_close(conn);
    }
}