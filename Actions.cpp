/*
    Copyright(C) 2025 Tyler Crockett | Macdaddy4sure.ai

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
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Reference.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"
#include "Settings.hpp"
#include "Time.hpp"
#include "Thought.hpp"
#include "Variables.hpp"

using namespace std;

/*
    Query all actions that can be performed in verbs
    Query all actions that are contained in WikiHow
*/

// What action is being performed? A multimodal approach using vision, sound, and other sensors to determine the current action.
// Recall the actions from working memory and short-term memory to determine the current action.
// Generate the action using LLMs
// Generate many actions that are similar to the current action and choose the current action

// 1. Use vision to determine the current action. This can be done using object detection and action recognition models. For example, if the vision system detects a person holding a cup and bringing it to their mouth, it can infer that the action is "drinking".
//  a. Use simple video to detect the current action.
//  b. Use simple images to detect the current action. For example, if the vision system detects a person sitting at a desk with a computer in front of them, it can infer that the action is "working on a computer".
//      i. We want specific action as well, such as "typing on a keyboard" or "writing with a pen". This can be done using more advanced vision models that can detect specific actions based on the objects and context in the image. For example, if the vision system detects a person sitting at a desk with a computer in front of them and their hands are positioned on the keyboard, it can infer that the action is "typing on a keyboard".
// 2. Use sound to determine the current action. This can be done using sound classification models. For example, if the sound system detects the sound of typing on a keyboard, it can infer that the action is "typing".
// 3. Use large language models and output a single string.
string _Actions::GetCurrentAction()
{
	// 1. Get current image in vision system and determine the current action using object detection and action recognition models.
	// 2. Get current image and attempt to determine the current action using large language models. This can be done by generating a description of the image and then using that description to infer the action.
	// 3. Get whisper transcription and attempt to determine the current action using large language models. This can be done by generating a description of the sound and then using that description to infer the action.
	// 4. Combine all the results and deduce the current action. This can be done using a LLM that takes in the outputs from the llm above and object detection models and outputs the current action.
}

string _Actions::GetCurrentActionObjectDetection()
{

}

string _Actions::GetCurrentActionLLMImage()
{
    string model = llm_model_image;
    int filled = 0;
    string temp;

    // Find the most resent addition to wm_simple_text
    for (int x = 999; x >= 0; x--)
    {
        if (!stm_vision_path_camera1[x][0].empty())
        {
            filled = x;
            break;
        }
    }

    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string prompt = "Please get the current action based on the following image and only output the action: " + stm_vision_path_camera1[filled][0];
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    _WorkingMemory::wm_llm_history_funct(prompt, response);

    // Calculate the duration of the command being executed
    oss.clear();
    auto entry2 = time(nullptr);
    auto tm2 = *localtime(&entry2);

    oss << put_time(&tm2, "%d-%m-%Y_%H-%M-%S");
    end_time = oss.str();

    long long llm_duration = _Time::GetDuration(start_time, end_time);
    // Encrypt all information while sitting in the database??? YES
    // todo: Save llm data to database
    //if (encrypted_thoughts)
    //    string encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    return response;
}

string _Actions::GetCurrentActionTranscription()
{

}

string _Actions::GetCurrentActionDeduction(vector<vector<string>> object_detection, vector<string> image_llm, vector<string> transcription_llm)
{

}

// Upload image data into MySQL
void _Actions::MySQLKinesthseticAction(string prompt, string response, string thought_hash, string thought_analysis, string keywords)
{
    MYSQL* conn;
    string table_name = "kinesthetic_thoughts";
    string temp_path;
    string current_date;
    ostringstream oss;
    string sql1;
    string sql2;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_vision_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        auto entry = time(nullptr);
        auto tm1 = *localtime(&entry);

        oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
        current_date = oss.str();
        //string object_detection_image_path = object_detection[0][0];

        sql1 = "INSERT INTO `";
        sql1 += table_name;
        // Classes cannot be saved at the moment, Tensorflow bug
        sql1 += "`(date, action, , thought_hash, thought_analysis, keywords) VALUES(\"";
        sql1 += current_date.c_str();
        sql1 += "\", \"";
        sql1 += prompt.c_str();
        sql1 += "\", \"";
        sql1 += response.c_str();
        sql1 += "\", \"";
        sql1 += thought_hash.c_str();
        sql1 += "\", \"";
        sql1 += thought_analysis.c_str();
        sql1 += "\", \"";
        sql1 += keywords.c_str();
        sql1 += "\");";
        //cout << "sql1: " << sql1 << endl;
        mysql_query(conn, sql1.c_str());
    }

    sql1.clear();

    //terminate();
}

string _Actions::eye_blink_detection()
{
    string temp;
    return temp;
}

string _Actions::ExecuteKinestheticAction(string action)
{
    string temp;
    return temp;
}

string _Actions::GenerateKinestheticAction(string prompt)
{
    string temp;
    return temp;
}

string _Actions::GetMySQLKinestheticAction(string date1, string date2)
{
    string temp;
    return temp;
}

string _Actions::AnalyzeKinestheticAction(string thought)
{
    string temp;
    return temp;
}