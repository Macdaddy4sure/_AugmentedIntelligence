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
#include "Parsers.hpp"
#include "Database Functions.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Large Language Models.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Reference.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;
using namespace filesystem;

void _Parsers::FederalLawParser()
{
    string input;
    string code_folder;
    string previous_line;
    string title;
    string chapter;
    string sub_chapter;
    string section;
    string us_code_text;
    bool editorial_notes = false;
    bool ammendments = false;
    bool section_passed = false;
    fstream file;

    for (auto& p : directory_iterator(code_folder.c_str()))
    {
        string temp_path = p.path().string();

        file.open(temp_path.c_str());

        if (file.is_open())
        {
            while (getline(file, input))
            {
                input = _Utilities::fixQuoteFederal(input);

                for (int x = 0; x <= input.length(); x++)
                {
                    if (input[x] == '<' && input[x + 1] == 'h' && input[x + 2] == '1' && input[x + 3] == ' ' && input[x + 4] == 'c' && input[x + 5] == 'l' && input[x + 6] == 'a' && input[x + 7] == 's' && input[x + 8] == 's' && input[x + 9] == '=' && input[x + 10] == '\\"' && input[x + 11] == 'u' && input[x + 12] == 's' && input[x + 13] == 'c' && input[x + 14] == '-' && input[x + 15] == 't' && input[x + 16] == 'i' && input[x + 17] == 't' && input[x + 18] == 'l' && input[x + 19] == 'e' && input[x + 20] == '-' && input[x + 21] == 'h' && input[x + 22] == 'e' && input[x + 23] == 'a' && input[x + 24] == 'd' && input[x + 25] == '\\"' && input[x + 26] == '>' && input[x + 27] == 'T' && input[x + 28] == 'I' && input[x + 29] == 'T' && input[x + 30] == 'L' && input[x + 31] == 'E')
                    {
                        title.clear();
                        title = "TITLE";
                        editorial_notes = false;
                        ammendments = false;
                        section_passed = false;

                        for (int y = x + 32; y <= input.length(); y++)
                        {
                            if (input[y] != '<')
                            {
                                title += input[y];
                            }
                            else
                            {
                                break;
                            }
                        }
                    }
                    // editorial_notes
                    if (input[x] == '<' && input[x + 1] == 'h' && input[x + 2] == '4' && input[x + 3] == ' ' && input[x + 4] == 'c' && input[x + 5] == 'l' && input[x + 6] == 'a' && input[x + 7] == 's' && input[x + 8] == 's' && input[x + 9] == '=' && input[x + 10] == '\"' && input[x + 11] == 'n' && input[x + 12] == 'o' && input[x + 13] == 't' && input[x + 14] == 'e' && input[x + 15] == '-' && input[x + 16] == 'h' && input[x + 17] == 'e' && input[x + 18] == 'a' && input[x + 19] == 'd' && input[x + 20] == '\"' && input[x + 21] == '>' && input[x + 22] == '<' && input[x + 23] == 's' && input[x + 24] == 't' && input[x + 25] == 'r' && input[x + 26] == 'o' && input[x + 27] == 'n' && input[x + 28] == 'g' && input[x + 29] == '>' && input[x + 30] == 'E' && input[x + 31] == 'd' && input[x + 32] == 'i' && input[x + 33] == 't' && input[x + 34] == 'o' && input[x + 35] == 'r' && input[x + 36] == 'i' && input[x + 37] == 'a' && input[x + 38] == 'l' && input[x + 39] == ' ' && input[x + 40] == 'N' && input[x + 41] == 'o' && input[x + 42] == 't' && input[x + 43] == 'e' && input[x + 44] == 's' && input[x + 45] == '<' && input[x + 46] == '/' && input[x + 47] == 's' && input[x + 48] == 't' && input[x + 49] == 'r' && input[x + 50] == 'o' && input[x + 51] == 'n' && input[x + 52] == 'g' && input[x + 53] == '>' && input[x + 54] == '<' && input[x + 55] == '/' && input[x + 56] == 'h' && input[x + 57] == '4' && input[x + 58] == '>')
                    {
                        editorial_notes = true;
                    }
                    // ammendments
                    if (input[x] == '<' && input[x + 1] == 'h' && input[x + 2] == '4' && input[x + 3] == ' ' && input[x + 4] == 'c' && input[x + 5] == 'l' && input[x + 6] == 'a' && input[x + 7] == 's' && input[x + 8] == 's' && input[x + 9] == '=' && input[x + 10] == '\"' && input[x + 11] == 'n' && input[x + 12] == 'o' && input[x + 13] == 't' && input[x + 14] == 'e' && input[x + 15] == '-' && input[x + 16] == 'h' && input[x + 17] == 'e' && input[x + 18] == 'a' && input[x + 19] == 'd' && input[x + 20] == '\"' && input[x + 21] == '>' && input[x + 22] == 'A' && input[x + 23] == 'm' && input[x + 24] == 'e' && input[x + 25] == 'n' && input[x + 26] == 'd' && input[x + 27] == 'm' && input[x + 28] == 'e' && input[x + 29] == 'n' && input[x + 30] == 't' && input[x + 31] == 's' && input[x + 32] == '<' && input[x + 33] == '/' && input[x + 34] == 'h' && input[x + 35] == '4' && input[x + 36] == '>')
                    {
                        ammendments = true;
                    }
                    // chapter
                    if (input[x] == '<' && input[x + 1] == 'h' && input[x + 2] == '3' && input[x + 3] == ' ' && input[x + 4] == 'c' && input[x + 5] == 'l' && input[x + 6] == 'a' && input[x + 7] == 's' && input[x + 8] == 's' && input[x + 9] == '=' && input[x + 10] == '"' && input[x + 11] == 'c' && input[x + 12] == 'h' && input[x + 13] == 'a' && input[x + 14] == 'p' && input[x + 15] == 't' && input[x + 16] == 'e' && input[x + 17] == 'r' && input[x + 18] == '-' && input[x + 19] == 'h' && input[x + 20] == 'e' && input[x + 21] == 'a' && input[x + 22] == 'd' && input[x + 23] == '"' && input[x + 24] == '>' && input[x + 25] == '<' && input[x + 26] == 's' && input[x + 27] == 't' && input[x + 28] == 'r' && input[x + 29] == 'o' && input[x + 30] == 'n' && input[x + 31] == 'g' && input[x + 32] == '>' && input[x + 33] == 'C' && input[x + 34] == 'H' && input[x + 35] == 'A' && input[x + 36] == 'P' && input[x + 37] == 'T' && input[x + 38] == 'E' && input[x + 39] == 'R')
                    {
                        chapter.clear();

                        for (int y = x + 40; y <= input.length(); y++)
                        {
                            if (input[y] != '<')
                            {
                                chapter += input[y];
                            }
                            else
                            {
                                break;
                            }
                        }
                    }
                    // sub_chapter
                    if (input[x] == '<' && input[x + 1] == 'h' && input[x + 2] == '3' && input[x + 3] == ' ' && input[x + 4] == 'c' && input[x + 5] == 'l' && input[x + 6] == 'a' && input[x + 7] == 's' && input[x + 8] == 's' && input[x + 9] == '=' && input[x + 10] == '"' && input[x + 11] == 's' && input[x + 12] == 'u' && input[x + 13] == 'b' && input[x + 14] == 'c' && input[x + 15] == 'h' && input[x + 16] == 'a' && input[x + 17] == 'p' && input[x + 18] == 't' && input[x + 19] == 'e' && input[x + 20] == 'r' && input[x + 21] == '-' && input[x + 22] == 'h' && input[x + 23] == 'e' && input[x + 24] == 'a' && input[x + 25] == 'd' && input[x + 26] == '"' && input[x + 27] == '>' && input[x + 28] == 'S' && input[x + 29] == 'U' && input[x + 30] == 'B' && input[x + 31] == 'C' && input[x + 32] == 'H' && input[x + 33] == 'A' && input[x + 34] == 'P' && input[x + 35] == 'T' && input[x + 36] == 'E' && input[x + 37] == 'R')
                    {
                        sub_chapter.clear();

                        for (int y = x + 38; y <= input.length(); y++)
                        {
                            if (input[y] != '<')
                            {
                                sub_chapter += input[y];
                            }
                            else
                            {
                                break;
                            }
                        }
                    }
                    // &sect;
                    if (input[x] == '<' && input[x + 1] == 'h' && input[x + 2] == '3' && input[x + 3] == ' ' && input[x + 4] == 'c' && input[x + 5] == 'l' && input[x + 6] == 'a' && input[x + 7] == 's' && input[x + 8] == 's' && input[x + 9] == '=' && input[x + 10] == '\"' && input[x + 11] == 's' && input[x + 12] == 'e' && input[x + 13] == 'c' && input[x + 14] == 't' && input[x + 15] == 'i' && input[x + 16] == 'o' && input[x + 17] == 'n' && input[x + 18] == '-' && input[x + 19] == 'h' && input[x + 20] == 'e' && input[x + 21] == 'a' && input[x + 22] == 'd' && input[x + 23] == '\"' && input[x + 24] == '>' && input[x + 25] == '&' && input[x + 26] == 's' && input[x + 27] == 'e' && input[x + 28] == 'c' && input[x + 29] == 't' && input[x + 30] == ';')
                    {
                        section.clear();

                        for (int y = x + 31; y <= input.length(); y++)
                        {
                            if (input[y] != '<')
                            {
                                section += input[y];
                            }
                            else
                            {
                                break;
                            }
                        }
                    }
                    // text
                    if (input[x] == '<' && input[x + 1] == 'p' && input[x + 2] == ' ' && input[x + 3] == 'c' && input[x + 4] == 'l' && input[x + 5] == 'a' && input[x + 6] == 's' && input[x + 7] == 's' && input[x + 8] == '=' && input[x + 9] == '"' && input[x + 10] == 's' && input[x + 11] == 't' && input[x + 12] == 'a' && input[x + 13] == 't' && input[x + 14] == 'u' && input[x + 15] == 't' && input[x + 16] == 'o' && input[x + 17] == 'r' && input[x + 18] == 'y' && input[x + 19] == '-' && input[x + 20] == 'b' && input[x + 21] == 'o' && input[x + 22] == 'd' && input[x + 23] == 'y' && input[x + 24] == '"' && input[x + 25] == '>')
                    {
                        us_code_text.clear();

                        if (!editorial_notes && !ammendments && !section_passed)
                        {
                            for (int y = x + 31; y <= input.length(); y++)
                            {
                                if (input[y] != '<')
                                {
                                    us_code_text += input[y];
                                }
                                else
                                {
                                    _DatabaseFunctions::QueryMySQLDatabaseFederal(title, chapter, sub_chapter, section, us_code_text);
                                    editorial_notes = false;
                                    ammendments = false;
                                    section_passed = false;
                                    break;
                                }
                            }
                        }
                    }
                    // text other em
                    if (input[x] == '<' && input[x + 1] == 'p' && input[x + 2] == ' ' && input[x + 3] == 'c' && input[x + 4] == 'l' && input[x + 5] == 'a' && input[x + 6] == 's' && input[x + 7] == 's' && input[x + 8] == '=' && input[x + 9] == '"' && input[x + 10] == 's' && input[x + 11] == 't' && input[x + 12] == 'a' && input[x + 13] == 't' && input[x + 14] == 'u' && input[x + 15] == 't' && input[x + 16] == 'o' && input[x + 17] == 'r' && input[x + 18] == 'y' && input[x + 19] == '-' && input[x + 20] == 'b' && input[x + 21] == 'o' && input[x + 22] == 'd' && input[x + 23] == 'y' && input[x + 24] == '-' && input[x + 25] == '1' && input[x + 26] == 'e' && input[x + 27] == 'm' && input[x + 28] == '"' && input[x + 29] == '>')
                    {
                        us_code_text.clear();

                        if (!editorial_notes && !ammendments && !section_passed)
                        {
                            for (int y = x + 31; y <= input.length(); y++)
                            {
                                if (input[y] != '<')
                                {
                                    us_code_text += input[y];
                                }
                                else
                                {
                                    _DatabaseFunctions::QueryMySQLDatabaseFederal(title, chapter, sub_chapter, section, us_code_text);
                                    editorial_notes = false;
                                    ammendments = false;
                                    section_passed = false;
                                    break;
                                }
                            }
                        }
                    }
                    // text other em1
                    if (input[x] == '<' && input[x + 1] == 'p' && input[x + 2] == ' ' && input[x + 3] == 'c' && input[x + 4] == 'l' && input[x + 5] == 'a' && input[x + 6] == 's' && input[x + 7] == 's' && input[x + 8] == '=' && input[x + 9] == '"' && input[x + 10] == 's' && input[x + 11] == 't' && input[x + 12] == 'a' && input[x + 13] == 't' && input[x + 14] == 'u' && input[x + 15] == 't' && input[x + 16] == 'o' && input[x + 17] == 'r' && input[x + 18] == 'y' && input[x + 19] == '-' && input[x + 20] == 'b' && input[x + 21] == 'o' && input[x + 22] == 'd' && input[x + 23] == 'y' && input[x + 24] == '-' && input[x + 25] == '1' && input[x + 26] == 'e' && input[x + 27] == 'm' && input[x + 28] == '"' && input[x + 29] == '>')
                    {
                        us_code_text.clear();

                        if (!editorial_notes && !ammendments && !section_passed)
                        {
                            for (int y = x + 31; y <= input.length(); y++)
                            {
                                if (input[y] != '<')
                                {
                                    us_code_text += input[y];
                                }
                                else
                                {
                                    _DatabaseFunctions::QueryMySQLDatabaseFederal(title, chapter, sub_chapter, section, us_code_text);
                                    editorial_notes = false;
                                    ammendments = false;
                                    section_passed = false;
                                    break;
                                }
                            }
                        }
                    }
                    // text other em2
                    if (input[x] == '<' && input[x + 1] == 'p' && input[x + 2] == ' ' && input[x + 3] == 'c' && input[x + 4] == 'l' && input[x + 5] == 'a' && input[x + 6] == 's' && input[x + 7] == 's' && input[x + 8] == '=' && input[x + 9] == '"' && input[x + 10] == 's' && input[x + 11] == 't' && input[x + 12] == 'a' && input[x + 13] == 't' && input[x + 14] == 'u' && input[x + 15] == 't' && input[x + 16] == 'o' && input[x + 17] == 'r' && input[x + 18] == 'y' && input[x + 19] == '-' && input[x + 20] == 'b' && input[x + 21] == 'o' && input[x + 22] == 'd' && input[x + 23] == 'y' && input[x + 24] == '-' && input[x + 25] == '2' && input[x + 26] == 'e' && input[x + 27] == 'm' && input[x + 28] == '"' && input[x + 29] == '>')
                    {
                        us_code_text.clear();

                        if (!editorial_notes && !ammendments && !section_passed)
                        {
                            for (int y = x + 31; y <= input.length(); y++)
                            {
                                if (input[y] != '<')
                                {
                                    us_code_text += input[y];
                                }
                                else
                                {
                                    _DatabaseFunctions::QueryMySQLDatabaseFederal(title, chapter, sub_chapter, section, us_code_text);
                                    editorial_notes = false;
                                    ammendments = false;
                                    section_passed = false;
                                    break;
                                }
                            }
                        }
                    }
                    // text other em3
                    if (input[x] == '<' && input[x + 1] == 'p' && input[x + 2] == ' ' && input[x + 3] == 'c' && input[x + 4] == 'l' && input[x + 5] == 'a' && input[x + 6] == 's' && input[x + 7] == 's' && input[x + 8] == '=' && input[x + 9] == '"' && input[x + 10] == 's' && input[x + 11] == 't' && input[x + 12] == 'a' && input[x + 13] == 't' && input[x + 14] == 'u' && input[x + 15] == 't' && input[x + 16] == 'o' && input[x + 17] == 'r' && input[x + 18] == 'y' && input[x + 19] == '-' && input[x + 20] == 'b' && input[x + 21] == 'o' && input[x + 22] == 'd' && input[x + 23] == 'y' && input[x + 24] == '-' && input[x + 25] == '3' && input[x + 26] == 'e' && input[x + 27] == 'm' && input[x + 28] == '"' && input[x + 29] == '>')
                    {
                        us_code_text.clear();

                        if (!editorial_notes && !ammendments && !section_passed)
                        {
                            for (int y = x + 31; y <= input.length(); y++)
                            {
                                if (input[y] != '<')
                                {
                                    us_code_text += input[y];
                                }
                                else
                                {
                                    _DatabaseFunctions::QueryMySQLDatabaseFederal(title, chapter, sub_chapter, section, us_code_text);
                                    editorial_notes = false;
                                    ammendments = false;
                                    section_passed = false;
                                    break;
                                }
                            }
                        }
                    }
                    // text other block-1em
                    if (input[x] == '<' && input[x + 1] == 'p' && input[x + 2] == ' ' && input[x + 3] == 'c' && input[x + 4] == 'l' && input[x + 5] == 'a' && input[x + 6] == 's' && input[x + 7] == 's' && input[x + 8] == '=' && input[x + 9] == '"' && input[x + 10] == 's' && input[x + 11] == 't' && input[x + 12] == 'a' && input[x + 13] == 't' && input[x + 14] == 'u' && input[x + 15] == 't' && input[x + 16] == 'o' && input[x + 17] == 'r' && input[x + 18] == 'y' && input[x + 19] == '-' && input[x + 20] == 'b' && input[x + 21] == 'o' && input[x + 22] == 'd' && input[x + 23] == 'y' && input[x + 24] == '-' && input[x + 25] == 'b' && input[x + 26] == 'l' && input[x + 27] == 'o' && input[x + 28] == 'c' && input[x + 29] == 'k' && input[x + 30] == '-' && input[x + 31] == '1' && input[x + 32] == 'e' && input[x + 33] == 'm' && input[x + 34] == '"' && input[x + 35] == '>')
                    {
                        us_code_text.clear();

                        if (!editorial_notes && !ammendments && !section_passed)
                        {
                            for (int y = x + 31; y <= input.length(); y++)
                            {
                                if (input[y] != '<')
                                {
                                    us_code_text += input[y];
                                }
                                else
                                {
                                    _DatabaseFunctions::QueryMySQLDatabaseFederal(title, chapter, sub_chapter, section, us_code_text);
                                    editorial_notes = false;
                                    ammendments = false;
                                    section_passed = false;
                                    break;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}

void _Parsers::_News::Politico()
{

}

void _Parsers::_News::MSNBC()
{

}

void _Parsers::_News::NBC()
{

}

void _Parsers::_News::FoxNews()
{

}

void _Parsers::_News::CNN()
{

}

void _Parsers::_News::BBC()
{

}

void _Parsers::HTMLParser(string html_file)
{

}

void _Parsers::XMLParser(string xml_file)
{

}

string _Parsers::SpeechRecognitionParse(string JSON)
{
    // Parse the JSON string
    auto json = nlohmann::json::parse(JSON);

    // Extract data and format as text
    std::string text_output;
    text_output += json["text"].get<std::string>();

    return text_output;
}

string _Parsers::LLM::LLama3Parse(string JSON)
{
    // Parse the JSON string
    auto json = nlohmann::json::parse(JSON);

    // Extract data and format as text
    std::string text_output;
    text_output += json["response"].get<std::string>();

    return text_output;
}

string _Parsers::LLM::CodeLLamaParse(string JSON)
{
    // Parse the JSON string
    auto json = nlohmann::json::parse(JSON);

    // Extract data and format as text
    std::string text_output;
    text_output += json["response"].get<std::string>();

    return text_output;
}

string _Parsers::LLM::LLavaParse(string JSON)
{
    // Parse the JSON string
    auto json = nlohmann::json::parse(JSON);

    // Extract data and format as text
    std::string text_output;
    text_output += json["response"].get<std::string>();

    return text_output;
}

string _Parsers::LLM::LLama2UncensoredParse(string JSON)
{
    // Parse the JSON string
    auto json = nlohmann::json::parse(JSON);

    // Extract data and format as text
    std::string text_output;
    text_output += json["response"].get<std::string>();

    return text_output;
}
