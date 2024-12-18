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
#include "Humor.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _Humor::KeywordJoke(string keyword)
{
    string model = "llama3";
    string prompt = "Please write me a joke about " + keyword;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    return response;
}

string _Humor::ImageKeywordJoke(string image_location, string keyword)
{
    string model = "image";
    string prompt = "Please write me a joke about the attached image regarding the following keyword " + keyword;
    string response = _LLM::OllamaAPI(model, prompt, image_location);
    response = _Parsers::LLM::LLama3Parse(response);
    return response;
}

string _Humor::RandomJoke()
{
    string model = "llama3";
    string prompt = "Please write me a random joke. :)";
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    return response;
}

string _Humor::ImageRandomJoke(string image_location)
{
    string model = "image";
    string prompt = "Please write me a random joke about the attached image. :)";
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    return response;
}
