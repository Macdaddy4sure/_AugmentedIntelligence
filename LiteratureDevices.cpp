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
#include "LiteratureDevices.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _LiteratureDevices::getLiteratureDevice(string text)
{
    return nullptr;
}

bool _LiteratureDevices::isEpigraph(string text)
{
    string model = "llama3";
    string device_definition = "a phrase, quotation, or poem that is set at the beginning of a document or component";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isMetaphor(string text)
{
    string model = "llama3";
    string device_definition = "Evoking imagination by means of using figurative language.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isIrony(string text)
{
    string model = "llama3";
    string device_definition = "This discrepancy between expectation and reality occurs in three forms: situational irony, where a situation features a discrepancy between what is expected and what is actualized; dramatic irony, where a character is unaware of pivotal information already revealed to the audience (the discrepancy here lies in the two levels of awareness between the character and the audience); and verbal irony, where one states one thing while meaning another. The difference between verbal irony and sarcasm is exquisitely subtle and often contested. The concept of irony is too often misunderstood in popular usage. Unfortunate circumstances and coincidences do not constitute irony";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isSimilies(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isNarration(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isDialogue(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isFoils(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isPrologue(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isEpilogue(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isAllusion(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isForeshadowing(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isFigurativeLanguage(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isImagery(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isCharacterization(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isSymbolism(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isAlitteration(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isAnchronism(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isAphorism(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isDiction(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isDoubleEntendre(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isEpigram(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isEuphemism(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isHyperbole(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isIdiom(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isLitotes(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isMalpropism(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isMetonymy(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isOxymoron(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isParable(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isParadox(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isParallelism(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isParody(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isPersonification(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isProse(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isPun(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isRhetoric(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isSatire(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isSetting(string text)
{
    string model = "llama3";
    string device_definition = "";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isSimile(string text)
{
    string model = "llama3";
    string device_definition = "a type of figure of speech that directly compares two things.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isSituationalIrony(string text)
{
    string model = "llama3";
    string device_definition = "Situational Irony";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isSoliloquy(string text)
{
    string model = "llama3";
    string device_definition = "The act of a character Speech to themselves so as to reveal their thoughts to the audience.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isSynecdoche(string text)
{
    string model = "llama3";
    string device_definition = "A figure of speech that uses the name of a part of something to represent the whole, or the whole to represent a part.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isTheme(string text)
{
    string model = "llama3";
    string device_definition = "theme";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isTone(string text)
{
    string model = "llama3";
    string device_definition = "tone";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isVerbalIrony(string text)
{
    string model = "llama3";
    string device_definition = "verbal irony";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

bool _LiteratureDevices::isAllegory(string text)
{
    string model = "llama3";
    string device_definition = "allegory";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + device_definition + ". " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    return false;
}

