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

/*
    Copyright(c) 1999 - 2016 Carnegie Mellon University.  All rights
    reserved.

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions
    are met:

    1. Redistributions of source code must retain the above copyright
    notice, this list of conditionsand the following disclaimer.

    2. Redistributions in binary form must reproduce the above copyright
    notice, this list of conditionsand the following disclaimer in
    the documentationand /or other materials provided with the
    distribution.

    This work was supported in part by funding from the Defense Advanced
    Research Projects Agency and the National Science Foundation of the
    United States of America, and the CMU Sphinx Speech Consortium.

    THIS SOFTWARE IS PROVIDED BY CARNEGIE MELLON UNIVERSITY ``AS IS'' AND
    ANY EXPRESSED OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
    THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
    PURPOSE ARE DISCLAIMED.IN NO EVENT SHALL CARNEGIE MELLON UNIVERSITY
    NOR ITS EMPLOYEES BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
    SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES(INCLUDING, BUT NOT
    LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
    DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
    THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
    (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
    OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#include "AugmentedIntelligence.h"
#include "Sound.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Database Functions.h"
#include "Mathematics.h"
#include "NLP.h"
#include "Reference.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

using namespace std;

// The following function will listen for voice commands from the speech recognition thread
//  Function                                                  Possible Input                                                 Implementation Difficulty
//  BibleVerseSearch(string book, int chapter)              | Search for bible verse, John chapter three                   | Easy
//  BibleVerseSearch(string book, int chapter, int verse)   | Search for bible verse, John chapter three verse sixteen     | Easy
//  BibleVersePageNumber()                                  | Search for bible verse, page number visual trigger           | Intermediate (Requires OpenCV and TensorFlow)
//  SearchWikipedia(string title, string summary)           | Search Wikipedia for x_article summary                       | Easy
//  SearchWikipedia(string title, string heading)           | Search Wikipedia for x_article #Heading                      | Easy
//  SearchWikipedia(string title)                           | Search Wikipedia for x_article                               | Easy
//  SearchWiktionary()                                      | Search Wikitionary for definition                            | Easy
//  SearchWiktionary()
//  Speaking()                                              | ???                                                          | Intermediate (Calls to long and short term memory to find words to speak)
//  MemorySearch()                                          | Search memory for memories containing dogs                   | Easy (Calls to long term and short term memory to search)
//  Reading()                                               | ??? Should be a visual trigger                               | Intermediate (Requires short term memory, imagine, text synchronization)
//  Writing()                                               | ??? Shoulkd be a visual trigger                              | Intermediate
//  Computer()                                              | Using computer???, should be a visual trigger                | Intermediate to Challenging (Requires TensorFlow and/or OpenCV to know when a user is looking at a computer monitor)
//  Gaming()                                                | Playing Fallout 4 on PS4, should be a visual trigger         | Intermediate to Challenging (Requires TensorFlow anmd/or OpenCV to know when a user is playing a game)
//  HomeDatabaseSearch()                                              | Get fallacy for given string                                 | Intermediate to Challenging
//  BiasCheck()                                             | Get bias for given string and data                           | Challenging, (Requires TensorFlow and/or OpenCV to check the environment for cues relating to bias)
//  CreateDeductiveArgument()                               | Create deductive syllogism / deductive argument from data    | Challenging
//  CreateInductiveArgument()                               | Create inductive syllogism / inductive argument from data    | Challenging
//  GetShortTermMemory()                                    | Dump short term sound memory                                 | Easy
//  GetShortTermMemory()                                    | Dump short term visual memory                                | Easy
//  CreateReminder()                                        | Create a reminder of x                                       | Easy
void _Sound::SoundListener()
{
    string text;
    int number;
    double result;
    string words[20];
    string temp_word;
    int spaces = 0;

    while (true)
    {
        //text = _AI::SpeechRecognition();
        
        // Look for commands to the program
        for (int i = 0; i <= text.length(); i++)
        {
            // Parse the file to find individual words denoted by spaces
            if (!isspace(text[i]))
            {
                words[spaces] += text[i];
            }
            else
            {
                spaces++;
            }
        }

        // Check for keywords to call functions
        for (int j = 0; j <= spaces; j++)
        {
            temp_word = words[j];

            if (isdigit((temp_word[j])) || words[j] == "absolute" || words[j] == "modulus" || words[j] == "square" || words[j] == "third" || words[j] == "factorial" || words[j] == "log" || words[j] == "natural" || words[j] == "sine" || words[j] == "cosine" || words[j] == "tangent" || words[j] == "secant" || words[j] == "cosecant" || words[j] == "cotangent" || words[j] == "arcsine" || words[j] == "arcosine" || words[j] == "arctangent" || words[j] == "arcsecant" || words[j] == "arccosecant" || words[j] == "arccotangent" || words[j] == "hyperbolic" || (words[j] == "area" && words[j + 1] == "hyperbolic" && words[j + 2] == "sine") || (words[j] == "area" && words[j + 1] == "hyperbolic" && words[j + 2] == "cosine") || (words[j] == "area" && words[j + 1] == "hyperbolic" && words[j + 2] == "tangent") || (words[j] == "area" && words[j + 1] == "hyperbolic" && words[j + 2] == "cosecant") || (words[j] == "area" && words[j + 1] == "hyperbolic" && words[j + 2] == "secant") || (words[j] == "area" && words[j + 1] == "hyperbolic" && words[j + 2] == "cotangent"))
            {
                _Math::ArithmeticParse(text);
            }
            else if ((words[j] == "algebra" && words[j + 1] == "calculate") || (words[j] == "factor" && (words[j + 1] == "binomial" || words[j + 1] == "trinomial")))
            {
                _Math::AlgebraParse(text);
            }
            else if (words[j] == "geometry" && words[j + 1] == "calculate")
            {
                _Math::GeometryParse(text);
            }
            else if (words[j] == "trigonometry" && words[j + 1] == "calculate")
            {
                _Math::TrigonometryParse(text);
            }
            else if (words[j] == "calculus" && words[j + 1] == "calculate")
            {
                _Math::CalculusParse(text);
            }
            else if (words[j] == "statistics" && words[j + 1] == "calculate")
            {
                _Math::StatisticsParse(text);
            }
            else if (words[j] == "create" && words[j + 1] == "deductive" && words[j + 2] == "argument")
            {
                _NLP::CreateDeductiveArgument(text);
            }
            else if (words[j] == "create" && words[j + 1] == "inductive" && words[j + 2] == "argument")
            {
                _NLP::CreateInductiveArgument(text);
            }
            else if ((words[j] == "convert" && words[j + 1] == "units") || words[j] == "units" && words[j + 1] == "conversion")
            {
                _Math::UnitConversions(text);
            }
            else if (words[j] == "fallacy" && words[j + 1] == "check" && words[j + 2] == "text")
            {

            }
            else if (words[j] == "fallacy" && words[j + 1] == "check" && words[j + 2] == "data")
            {

            }
            else if (words[j] == "bias" && words[j + 1] == "check" && words[j + 2] == "text")
            {

            }
            else if (words[j] == "bias" && words[j + 1] == "check" && words[j + 2] == "data")
            {

            }
            else if (words[j] == "find" && words[j + 1] == "object")
            {
                _DatabaseFunctions::FindObject(words[j + 2]);
            }
            else if (words[j] == "where" && words[j + 1] == "is" && words[j + 2] == "it")
            {
                // Do stuff
            }
        }
    }
}


// TODO: Cut playback every five minutes
// This funnction will listen through the microphone and save raw sound data with PortAudio
void _Sound::SoundRAW()
{
    string command;
    string filename;
    microphone1_device_name = _Settings::GetMicrophone1Device();
    sound_bitrate = _Settings::GetSoundBitrate();
    sound_codec = _Settings::GetSoundCodec();
    sound_directory = _Settings::GetSoundDirectory();
    ostringstream oss;

    while (true)
    {
        auto t = std::time(nullptr);
        auto tm = *std::localtime(&t);
        oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
        auto date = oss.str();

        command = "ffmpeg -f dshow -i audio=\"";
        command += microphone1_device_name;
        command += "\" -c:a \"";
        command += sound_codec;
        command += "\"-ar 44100 -b:a \"";
        command += sound_bitrate;
        command += "k\" -segment_time 300 -ac 1 \"";
        command += sound_directory;
        command += date;
        command += ".mp3 ";
        filename = date;
        filename += ".mp3";
        sound_directory += date;
        sound_directory += filename;

        system(command.c_str());

        // Send data to be imported to MySQL
        //MySQLSoundRAW(date, filename, NULL, bitrate, codec, fileLocation);
    }
}

// The following function will upadte the MySQL database with raw sound information
void _Sound::MySQL_Sound()
{
    MYSQL* conn;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    ostringstream query1;
    ostringstream query2;
    string sql1;
    string sql2;
    string database1 = "SoundRAW";
    int wait_milliseconds = 100;
    string current_date;
    string temp;
    string temp_date;

    ostringstream oss;
    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    current_date = oss.str();

    string table_name = current_date;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database1.c_str(), 3306, NULL, 0);
    result = mysql_use_result(conn);

    query1 << "" << table_name;

    if (conn)
    {
        while (sound_memory)
        {
            // Create the table if it does not exist
            query1 << "CREATE TABLE IF NOT EXISTS " << table_name << "(date TEXT, fileLocation TEXT)";
            sql1 = query1.str();
            mysql_query(conn, sql1.c_str());

            query2 << "INSERT INTO " << table_name << "(date, fileLocation) VALUES(" << current_date << ", " << sound_directory << ");";
            sql2 = query2.str();
            mysql_query(conn, sql2.c_str());
        }
    }

    //terminate();
}

// This function will recall sound, recognition, and both memory an x amount of minutes or seconds
//  1. Get the current time
//  2. Convert the string to integers and subtract the time from current time
//  3. Recall the memory from the x amount of time to the current time
void _Sound::RecallSoundMemory(string raw_recognition, int search_years, int search_months, int search_days, int search_weeks, int search_hours, int search_minutes, int search_seconds)
{
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    ostringstream query1;
    string sql1;
    string database1 = "Sound";
    string table_name;
    ostringstream oss;
    oss << put_time(&tm, "%d-%m-%Y_%H-%M-%S");
    string date = oss.str();
    string str_current_years;
    string str_current_months;
    string str_current_days;
    string str_current_hours;
    string str_current_minutes;
    //int current_years;
    //int current_months;
    //int current_days;
    //int current_hours;
    //int current_minutes;
    //int current_seconds;
    //int duration_years;
    //int duration_months;
    //int duration_days;
    //int duration_weeks;
    //int duration_hours;
    //int duration_minutes;
    int duration_seconds;
    //bool duration;
    string words[20];
    bool weeks_bool = false;
    int spaces = 0;

    if (raw_recognition == "raw")
    {
        table_name = "SoundRAW";

        conn = mysql_init(0);
        conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database1.c_str(), 3306, NULL, 0);
        result = mysql_use_result(conn);

        if (conn)
        {
            query1 << "SELECT * FROM " << table_name;
            sql1 = query1.str();
            /*cout << "SQL1: " << sql1 << endl;*/
            mysql_query(conn, sql1.c_str());
            MYSQL_RES* result = mysql_store_result(conn);

            // Get the file name
            while (row = mysql_fetch_row(result))
            {
                // Find the sound files that correspond to the dates
                // 1. Get the current date
                // 2. Find the file where the search term is included in the file
                //  a. Convert the amount of time to seconds
                duration_seconds = search_years * 31536000;
                duration_seconds += search_months * 2419200;
                duration_seconds += search_weeks * 604800;
                duration_seconds += search_days * 86400;
                duration_seconds += search_hours * 3600;
                duration_seconds += search_minutes * 60;
            }
        }
    }
    else if (raw_recognition == "recognition")
    {
        table_name = "SoundRecognition";

        conn = mysql_init(0);
        conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database1.c_str(), 3306, NULL, 0);
        result = mysql_use_result(conn);

        if (conn)
        {
            query1 << "SELECT * FROM " << table_name;
            sql1 = query1.str();
            /*cout << "SQL1: " << sql1 << endl;*/
            mysql_query(conn, sql1.c_str());
            MYSQL_RES* result = mysql_store_result(conn);

            // Get the file name
            while (row = mysql_fetch_row(result))
            {

            }
        }
    }
    else if (raw_recognition == "both")
    {
        // Get the text and the raw sound
        string table_name1 = "SoundRecognition";
        table_name = "SoundRAW";
        
        conn = mysql_init(0);
        conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database1.c_str(), 3306, NULL, 0);
        result = mysql_use_result(conn);

        if (conn)
        {
            query1 << "SELECT * FROM " << table_name;
            sql1 = query1.str();
            /*cout << "SQL1: " << sql1 << endl;*/
            mysql_query(conn, sql1.c_str());
            MYSQL_RES* result = mysql_store_result(conn);

            // Get the file name
            while (row = mysql_fetch_row(result))
            {

            }
        }
    }
}

