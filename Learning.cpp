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
#include "Learning.hpp"
#include "Large Language Models.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Reference.hpp"
#include "Variables.hpp"
#include "Vision.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;

//struct Sound
//{
//    string date;
//    string duration;
//    string fileLocation;
//};

// Input data from short term memory vision and learn about unique visual queues
// Check against a database checking for unqique visual experiences
// How much of a hit will there be on the database?
void _Learning::VisualLearning()
{
    // funny
    // Give me a 30 minutes and a nug. :D
}

// Check from text memory against current trained NN image concept objects
// If the object is new, levy remote or onsite GPU to train new network with the new image
void _Learning::VisualObjectLearning()
{
    // OpenImages trained is trying to be a thing... 400 classes of objects vs 40 object classes
}

// This function will listen for new concepts or words and link them to existing intelligence
void _Learning::ConceptualLearningWords(string word, string glosses, string pos, string image_location, string sound)
{
    //auto t = std::time(nullptr);
    //auto tm = *std::localtime(&t);

    //MYSQL* conn = nullptr;
    //MYSQL_ROW row;
    //MYSQL_RES* result1;
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    //string mysql_database = "sound";
    //string table = "soundraw";
    //ostringstream query1;
    //string sql1;
    //ostringstream oss;
    //Sound sound1;

    //oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
    //string start_date = oss.str();
    //string date;

    //conn = mysql_init(0);
    //conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_database.c_str(), 3306, NULL, 0);
    //result1 = mysql_use_result(conn);
    //
    //if (conn)
    //{
    //    // Get sound data from last recorded RAW sound
    //    query1 << "SELECT * FROM " << table;
    //    sql1 = query1.str();
    //    mysql_query(conn, sql1.c_str());
    //    result1 = mysql_store_result(conn);

    //    while (row = mysql_fetch_row(result1))
    //    {
    //        if (row[0] == word)
    //        {
    //            mysql_close(conn);
    //            return;
    //        }
    //    }
    //}

    //MYSQL* conn2;
    //MYSQL_RES* result2;
    //string database2 = "_dictionary";
    //string table2 = "new_words";
    //string* sentence;

    //conn2 = mysql_init(0);
    //conn2 = mysql_real_connect(conn2, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database2.c_str(), 3306, NULL, 0);
    //result2 = mysql_use_result(conn2);
    //
    //if (conn2)
    //{
    //    if (glosses == "")
    //    {
    //        glosses = "0";
    //    }
    //    if (pos == "")
    //    {
    //        pos = "0";
    //    }

    //    query1 << "INSERT INTO `" << table2 << "` (word, glosses, sentence, pos, vision, sound) VALUES(" << word << ", " << glosses << ", " << sentence << ", " << pos << ", " << image_location << ", " << sound1.fileLocation << ");";
    //    sql1 = query1.str();
    //    mysql_query(conn2, sql1.c_str());
    //    mysql_close(conn2);
    //}
}

void _Learning::EmptyDictionaryLearning()
{
    MYSQL* conn = nullptr;
    MYSQL_ROW row;
    MYSQL_RES* result1;
    string mysql_hostname = _Settings::GetMySQLHostname();
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string table = "empty_dictionary";
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_dictionary_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += table;
        sql1 += ";";
        mysql_query(conn, sql1.c_str());
        result1 = mysql_store_result(conn);

        while (row = mysql_fetch_row(result1))
        {

            mysql_close(conn);
            return;
        }
    }

    mysql_close(conn);
    return;
}

// Purpose: Create a function that takes in a Wikipeida article and reduces the concepts to simple statments for comparisons and undestanding
// All nouns in the article should establish connectedness with the input article
void _Learning::WikipeidaReduction()
{
    //MYSQL* conn = nullptr;
    //MYSQL_ROW row;
    //MYSQL_RES* result1;
    //string mysql_hostname = "";
    //string mysql_username = _Settings::GetMySQLUsername();
    //string mysql_password = _Settings::GetMySQLPassword();
    //string mysql_database = "sound";
    //string table = "soundraw";
    //string sql1;
}

// Purpose: Create a function that takes in an image and separates the object into component parts
void _Learning::ConceptExplodeLearning()
{

}

// Purpose: Create a function that integrates parts to a whole
void _Learning::ConceptFormationLearning()
{

}