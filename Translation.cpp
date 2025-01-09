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
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Translation.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;

string _Translation::Translate(string language, string prompt)
{
    prompt = "Translate the following English to " + language + ": " + prompt;
    string json = _LLM::OllamaAPI("llama", prompt, "NULL");
    string response = _Parsers::LLM::LLama3Parse(json);
    return response;
}

string _Translation::Translate2English(string prompt)
{
    prompt = "Translate the following to English: " + prompt;
    string json = _LLM::OllamaAPI("llama3", prompt, "NULL");
    string response = _Parsers::LLM::LLama3Parse(json);
    return response;
}

string _Translation::Translate2Language(string* language, string prompt)
{
    prompt = "Translate the following from " + language[0] + " to " + language[1] + ": " + prompt;
    string json = _LLM::OllamaAPI("llama3", prompt, "NULL");
    string response = _Parsers::LLM::LLama3Parse(json);
    return response;
}

string _Translation::getPrompt()
{
    string input;

    cout << ">>> ";
    getline(cin, input);
    return input;
}