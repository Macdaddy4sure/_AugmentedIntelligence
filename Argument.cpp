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
#include "Argument.hpp"
#include "Working-Memory.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Reference.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;

string _Argument::CreateDeductiveArgument(string text)
{
    // Create a deductive argument from text
    string prompt = "Create a deductive syllogism from the following text and return only the syllogism: " + text;
    string model = "llama3";
    string json = _LLM::OllamaAPI(model, prompt, "NULL");
    string response = _Parsers::LLM::LLama3Parse(json);
    return response;
}

string _Argument::CreateInductiveArgument(string text)
{
    // Create a inductive argument from text
    string prompt = "Create a inductive syllogism from the following text and return only the syllogism: " + text;
    string model = "llama3";
    string json = _LLM::OllamaAPI(model, prompt, "NULL");
    string response = _Parsers::LLM::LLama3Parse(json);
    return response;
}