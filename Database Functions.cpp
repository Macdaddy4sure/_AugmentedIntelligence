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
#include "Database Functions.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reference.h"
#include "NLP.h"
#include "NLU.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

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
//    string mysql_username = _Settings::GetMySQLUsername();
//    string mysql_password = _Settings::GetMySQLPassword();
//    string sql1;
//    string** complete[10][3];
//    bool boolean = false;
//    string input;
//
//    conn = mysql_init(0);
//    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
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

// This function will upload all detected objects from the object detection neural network
void _DatabaseFunctions::StoreObject(string object)
{

}

// This function will be invoked when the user commands to find the last seen location of an object
void _DatabaseFunctions::FindObject(string object)
{

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
//    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
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

void _Utilities::savePassword(string hostname, string password)
{
    MYSQL* conn;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    ostringstream query1;
    string sql1;
    string mysql_database = "personal_information";
    string table_name = "passwords";
    string image_location = stm_vision_path_camera1[1000][0];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query1 << "INSERT INTO " << table_name << "(computer_hostname, image_location, password) VALUES(" << hostname.c_str() << ", " << image_location.c_str() << ", " << password.c_str() << ");";
        sql1 = query1.str();
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);
    }
}

string* _Utilities::getPasswords()
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    ostringstream query1;
    string sql1;
    string database = "personal_information";
    string table_name = "passwords";

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query1 << "SELECT * FROM " << table_name;
        sql1 = query1.str();
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            // Print to the end of the chapter
            cout << "Name: " << row[0] << endl;
            cout << "Password: " << row[1] << endl;
        }
    }
}

string _Utilities::getPassword(string domain)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    ostringstream query1;
    string sql1;
    string database = "personal_information";
    string table_name = "passwords";

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), database.c_str(), 3306, NULL, 0);

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
    return "NULL";
}

void _Utilities::getPasswordsScreenshot(string password)
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

}

// Get music album
string _DatabaseFunctions::GetMusicAlbum(string artist, string song)
{

}

string _DatabaseFunctions::GetMusicSong(string artist, string album)
{

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
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    ostringstream query1;
    string sql1;
    string database = "bible_kjv";
    string table_name = book;
    string temp_chapter = to_string(chapter);

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), database.c_str(), 3306, NULL, 0);

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
}

// This function will return the text of a bible verse from the book, chapter, and verse
string _DatabaseFunctions::BibleVerseSearch(string book, int chapter, int verse)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    ostringstream query1;
    string sql1;
    string database = "bible_kjv";
    string table_name = book;
    string temp_chapter = to_string(chapter);
    string temp_verse = to_string(verse);

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), database.c_str(), 3306, NULL, 0);

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
}

// This function returns the page number for the start of a book
//  TODO: This function will probably need to be initially vision based as there is not a way to retrive the text from a bible the user picks up in church
//      A neural network will need to look at the table of contents, convert each line to strings and import the page numbers to the database
int _DatabaseFunctions::BibleVersePageNumber(string book)
{

}

// This function returns the page number for the book and chapter
//  TODO: This function will probably need to be initially vision based as there is not a way to retrive the text from a bible the user picks up in church
//      A neural network will need to look at the table of contents, convert each line to strings and import the page numbers to the database
int _DatabaseFunctions::BibleChapterPageNumber(string book, int chapter)
{

}

// This function returns the page number for a specific verse
//  TODO: This function will probably need to be initially vision based as there is not a way to retrive the text from a bible the user picks up in church
//      A neural network will need to look at the table of contents, convert each line to strings and import the page numbers to the database
int _DatabaseFunctions::BibleVersePageNumber(string book, int chapter, int verse)
{
    // 1. Open the users bible database

    // 2. Search for the book

    // 3. Search for the chapter

    // 4. Search for the verse

    // 5. Return the page number
}

// The following function will search wikipedia for text and information and will display the information to the consciousness
void _DatabaseFunctions::SearchWikipedia(string title, string mode)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    ostringstream query1;
    string sql1;
    string database = "wikipedia_articles";
    string tableName = title;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        query1 << "SELECT * FROM " << tableName;
        sql1 = query1.str();
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {

        }
    }

    // 1. The function would need to rearrange words to best fit a query of Wikipedia

    // 2. Load the MySQL Wiki database into memory and keyword search for article
}

// TODO: Use CUDA to iterate through the list of common nouns

string*** _NLP::SearchDictionary(string word)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string tableName = "entries";
    string sql1;
    string completed[10][2][2];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += tableName;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            if (word == row[0])
            {
                // Find an empty place in the completed string array
                for (int x = 0; x <= 10; x++)
                {
                    if (completed[x][0][0] == "")
                    {
                        completed[x][0][0] = row[0];
                        completed[x][1][0] = row[1];
                        completed[x][1][1] = row[2];
                    }
                }
            }
        }
    }
}

string*** _NLP::SearchDictionary(string word, string word_type)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string tableName = "entries";
    string sql1;
    string completed[10][2][2];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += tableName;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            while (row = mysql_fetch_row(result))
            {
                if (word == row[0] && word_type == row[1])
                {
                    // Find an empty place in the completed string array
                    for (int x = 0; x <= 10; x++)
                    {
                        if (completed[x][0][0] == "")
                        {
                            completed[x][0][0] = row[0];
                            completed[x][1][0] = row[1];
                            completed[x][1][1] = row[2];
                        }
                    }
                }
            }
        }
    }
}

string*** _NLP::SearchDictionary(string word, string word_type, string definition)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string tableName = "entries";
    string sql1;
    string completed[10][2][2];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += tableName;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            while (row = mysql_fetch_row(result))
            {
                if (word == row[0] && word_type == row[1] && definition == row[2])
                {
                    // Find an empty place in the completed string array
                    for (int x = 0; x <= 10; x++)
                    {
                        if (completed[x][0][0] == "")
                        {
                            completed[x][0][0] = row[0];
                            completed[x][1][0] = row[1];
                            completed[x][1][1] = row[2];
                        }
                    }
                }
            }
        }
    }
}

string*** _NLP::SearchDictionaryDefinition(string definition)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string tableName = "entries";
    string sql1;
    string completed[10][2][2];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += tableName;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            while (row = mysql_fetch_row(result))
            {
                if (definition == row[2])
                {
                    // Find an empty place in the completed string array
                    for (int x = 0; x <= 10; x++)
                    {
                        if (completed[x][0][0] == "")
                        {
                            completed[x][0][0] = row[0];
                            completed[x][1][0] = row[1];
                            completed[x][1][1] = row[2];
                        }
                    }
                }
            }
        }
    }
}

string*** _NLP::SearchDictionaryWordType(string word_type)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string tableName = "entries";
    string sql1;
    string completed[10][2][2];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += tableName;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            while (row = mysql_fetch_row(result))
            {
                if (word_type == row[1])
                {
                    // Find an empty place in the completed string array
                    for (int x = 0; x <= 10; x++)
                    {
                        if (completed[x][0][0] == "")
                        {
                            completed[x][0][0] = row[0];
                            completed[x][1][0] = row[1];
                            completed[x][1][1] = row[2];
                        }
                    }
                }
            }
        }
    }
}

string**** _NLP::SearchDictionaryVector(string word)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string tableName = "entries2";
    string sql1;
    string completed[10][2][2];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += tableName;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            while (row = mysql_fetch_row(result))
            {
                if (word == row[0])
                {
                    // Find an empty place in the completed string array
                    for (int x = 0; x <= 10; x++)
                    {
                        if (completed[x][0][0] == "")
                        {
                            completed[x][0][0] = row[0];
                            completed[x][1][0] = row[1];
                            completed[x][1][1] = row[2];
                            completed[x][1][1] = row[3];
                        }
                    }
                }
            }
        }
    }
}

string**** _NLP::SearchDictionaryVector(string word, string word_type)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string tableName = "entries2";
    string sql1;
    string completed[10][2][2];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += tableName;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            while (row = mysql_fetch_row(result))
            {
                if (word == row[0])
                {
                    // Find an empty place in the completed string array
                    for (int x = 0; x <= 10; x++)
                    {
                        if (completed[x][0][0] == "")
                        {
                            completed[x][0][0] = row[0];
                            completed[x][1][0] = row[1];
                            completed[x][1][1] = row[2];
                            completed[x][1][1] = row[3];
                        }
                    }
                }
            }
        }
    }
}

string**** _NLP::SearchDictionaryVector(string word, string word_type, string definition)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string tableName = "entries2";
    string sql1;
    string completed[10][2][2];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += tableName;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            while (row = mysql_fetch_row(result))
            {
                if (word == row[0] && word_type == row[1] && definition == row[2])
                {
                    // Find an empty place in the completed string array
                    for (int x = 0; x <= 10; x++)
                    {
                        if (completed[x][0][0] == "")
                        {
                            completed[x][0][0] = row[0];
                            completed[x][1][0] = row[1];
                            completed[x][1][1] = row[2];
                            completed[x][1][1] = row[3];
                        }
                    }
                }
            }
        }
    }
}

string**** _NLP::SearchDictionaryVectorDefinition(string definition)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string tableName = "entries2";
    string sql1;
    string completed[10][2][2];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += tableName;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            while (row = mysql_fetch_row(result))
            {
                if (definition == row[2])
                {
                    // Find an empty place in the completed string array
                    for (int x = 0; x <= 10; x++)
                    {
                        if (completed[x][0][0] == "")
                        {
                            completed[x][0][0] = row[0];
                            completed[x][1][0] = row[1];
                            completed[x][1][1] = row[2];
                            completed[x][1][1] = row[3];
                        }
                    }
                }
            }
        }
    }
}

string**** _NLP::SearchDictionaryVectorWordType(string word_type)
{
    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string mysql_database = "dictionary";
    string tableName = "entries2";
    string sql1;
    string completed[10][2][2];

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += tableName;
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        while (row = mysql_fetch_row(result))
        {
            while (row = mysql_fetch_row(result))
            {
                if (word_type == row[1])
                {
                    // Find an empty place in the completed string array
                    for (int x = 0; x <= 10; x++)
                    {
                        if (completed[x][0][0] == "")
                        {
                            completed[x][0][0] = row[0];
                            completed[x][1][0] = row[1];
                            completed[x][1][1] = row[2];
                            completed[x][1][1] = row[3];
                        }
                    }

                }
            }
        }
    }
}