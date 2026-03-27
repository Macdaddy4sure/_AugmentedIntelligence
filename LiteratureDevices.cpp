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
#include "LiteratureDevices.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Settings.hpp"
#include "Thought.hpp"
#include "Time.hpp"
#include "Utilities.hpp"
#include "Working-Memory.hpp"

using namespace std;

vector<string> _LiteratureDevices::LiteratureDevicesCheck(string text)
{
    string temp;
    vector<string> detected_terms(100);

    if (_LiteratureDevices::Terms::Metaphor(text) != "NULL")
    {
        temp = "Metaphor";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Irony(text) != "NULL")
    {
        temp = "Irony";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Simile(text) != "NULL")
    {
        temp = "Simile";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Narration(text) != "NULL")
    {
        temp = "Narration";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Dialogue(text) != "NULL")
    {
        temp = "Dialogue";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Allusion(text) != "NULL")
    {
        temp = "Allusion";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Foreshadowing(text) != "NULL")
    {
        temp = "Foreshadowing";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::FigurativeLanguage(text) != "NULL")
    {
        temp = "Figurative Language";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Imagery(text) != "NULL")
    {
        temp = "Imagery";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Characterization(text) != "NULL")
    {
        temp = "Characterization";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Symbolism(text) != "NULL")
    {
        temp = "Symbolism";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Alitteration(text) != "NULL")
    {
        temp = "Alitteration";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Allegory(text) != "NULL")
    {
        temp = "Allegory";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Anchronism(text) != "NULL")
    {
        temp = "Anchronism";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Aphorism(text) != "NULL")
    {
        temp = "Aphorism";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Diction(text) != "NULL")
    {
        temp = "Diction";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Epigram(text) != "NULL")
    {
        temp = "Epigram";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Euphemism(text) != "NULL")
    {
        temp = "Euphemism";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Hyperbole(text) != "NULL")
    {
        temp = "Hyperbole";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Idiom(text) != "NULL")
    {
        temp = "Idiom";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Litotes(text) != "NULL")
    {
        temp = "Litotes";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Malpropism(text) != "NULL")
    {
        temp = "Malpropism";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Metonymy(text) != "NULL")
    {
        temp = "Metonymy";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Oxymoron(text) != "NULL")
    {
        temp = "Oxymoron";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Parable(text) != "NULL")
    {
        temp = "Parable";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Paradox(text) != "NULL")
    {
        temp = "Paradox";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Parallelism(text) != "NULL")
    {
        temp = "Parallelism";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Parody(text) != "NULL")
    {
        temp = "Parody";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Personification(text) != "NULL")
    {
        temp = "Personification";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Prose(text) != "NULL")
    {
        temp = "Prose";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Pun(text) != "NULL")
    {
        temp = "Pun";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Rhetoric(text) != "NULL")
    {
        temp = "Rhetoric";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Satire(text) != "NULL")
    {
        temp = "Satire";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Setting(text) != "NULL")
    {
        temp = "Setting";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Soliloquy(text) != "NULL")
    {
        temp = "Soliloquy";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Synechdote(text) != "NULL")
    {
        temp = "Synechdote";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Theme(text) != "NULL")
    {
        temp = "Theme";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Tone(text) != "NULL")
    {
        temp = "Tone";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::VerbalIrony(text) != "NULL")
    {
        temp = "Verbal Irony";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }
    if (_LiteratureDevices::Terms::Allegory(text) != "NULL")
    {
        temp = "Allegory";

        for (int x = 0; x < 100; x++)
        {
            if (detected_terms[x] == "")
            {
                detected_terms[x] = temp;
                break;
            }
        }
    }

    return detected_terms;
}

string _LiteratureDevices::Terms::Characterization(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "The act of the author to apply character traits to characters.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Characterization";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Metaphor(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "Evoking imagination by means of using figurative language.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Metaphor";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Irony(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "the juxtaposition of what, on the surface, appears to be the case with what is actually or expected to be the case. Originally a rhetorical device and literary technique, in modern times irony has also come to assume a metaphysical significance with implications for the correct human attitude towards life.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Irony";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Simile(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a type of figure of speech that directly compares two things. Similes are often contrasted with metaphors, where similes necessarily compare two things using words such as \"like\", \"as\", while metaphors often create an implicit comparison (i.e. saying something \"is\" something else). However, there are two schools of thought regarding the relationship between similes and metaphors.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Simile";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Narration(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "the use of a written or spoken commentary to convey a story to an audience.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Narration";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Dialogue(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a written or spoken conversational exchange between two or more people, and a literary and theatrical form that depicts such an exchange.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Dialogue";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Allusion(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a figure of speech that makes a reference to someone or something by name (a person, object, location, etc.) without explaining how it relates to the given context, so that the audience must realize the connection in their own minds.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Allusion";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Foreshadowing(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a narrative device in which a storyteller gives an advance hint of an upcoming event later in the story.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Foreshadowing";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::FigurativeLanguage(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "the usage of words in addition to, or deviating beyond, their conventionally accepted definitions in order to convey a more complex meaning or achieve a heightened effect. This is done by language-users presenting words in such a way that their audience equates, compares, or associates the words with normally unrelated meanings. A common intended effect of figurative language is to elicit audience responses that are especially emotional (like excitement, shock, laughter, etc.), aesthetic, or intellectual.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Figurative Language";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Imagery(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "visual symbolism, or figurative language that evokes a mental image or other kinds of sense impressions, especially in a literary work, but also in other activities.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Imagery";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Symbolism(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "any object or sign that represents an idea";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Symbolism";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Alitteration(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "the repetition of syllable-initial consonant sounds between nearby words, or of syllable-initial vowels if the syllables in question do not start with a consonant.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Alitteration";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Anchronism(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a chronological inconsistency in some arrangement, especially a juxtaposition of people, events, objects, language terms and customs from different time periods.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Anchronism";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Aphorism(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a concise, terse, laconic, or memorable expression of a general truth or principle.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Aphorism";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Diction(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "in its original meaning, is a writer\'s or speaker\'s distinctive vocabulary choices and style of expression in a piece of writing such as a poem or story. the art of speaking so that each word is clearly heard and understood to its fullest complexity and extremity, and concerns pronunciation and tone, rather than word choice and style. This is more precisely and commonly expressed with the term enunciation or with its synonym, articulation.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Diction";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::DoubleEntendre(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a figure of speech or a particular way of wording that is devised to have a double meaning, one of which is typically obvious, and the other often conveys a message that would be too socially unacceptable, or offensive to state directly.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Double Entendre";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Epigram(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a brief, interesting, memorable, sometimes surprising or satirical statement.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Epigram";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Euphemism(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "when an expression that could offend or imply something unpleasant is replaced with one that is agreeable or inoffensive.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Euphemism";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Hyperbole(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "the use of exaggeration as a rhetorical device or figure of speech. In rhetoric, it is also sometimes known as auxesis (literally \'growth\'). In poetry and oratory, it emphasizes, evokes strong feelings, and creates strong impressions. As a figure of speech, it is usually not meant to be taken literally.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Hyperbole";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Idiom(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a phrase or expression that largely or exclusively carries a figurative or non-literal meaning, rather than making any literal sense";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Idiom";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Litotes(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a figure of speech and form of irony in which understatement is used to emphasize a point by stating a negative to further affirm a positive, often incorporating double negatives for effect.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Litotes";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Malpropism(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "the incorrect use of a word in place of a word with a similar sound, either unintentionally or for comedic effect, resulting in a nonsensical, often humorous utterance.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Malpropism";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Metonymy(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a figure of speech in which a concept is referred to by the name of something associated with that thing or concept";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Metonymy";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Oxymoron(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a figure of speech that juxtaposes concepts with opposite meanings within a word or in a phrase that is a self-contradiction.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Oxymoron";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Parable(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a succinct, didactic story, in prose or verse, that illustrates one or more instructive lessons or principles.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Parable";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Paradox(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a logically self-contradictory statement or a statement that runs contrary to one\'s expectation. It is a statement that, despite apparently valid reasoning from true or apparently true premises, leads to a seemingly self-contradictory or a logically unacceptable conclusion.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Paradox";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Parallelism(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a rhetorical device that compounds words or phrases that have equivalent meanings so as to create a definite pattern. This structure is particularly effective when \"specifying or enumerating pairs or series of like things\".";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Parallelism";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Parody(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a creative work designed to imitate, comment on, and/or mock its subject by means of satirical or ironic imitation.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Parody";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Personification(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "the representation of a thing or abstraction as a person, often as an embodiment or incarnation.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Personification";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Prose(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "language that follows the natural flow or rhythm of speech, ordinary grammatical structures, or, in writing, typical conventions and formatting. Thus, prose ranges from informal speaking to formal academic writing.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Prose";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Pun(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a form of word play that exploits multiple meanings of a term, or of similar-sounding words, for an intended humorous or rhetorical effect.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Pun";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Rhetoric(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "the art of persuasion. It is one of the three ancient arts of discourse (trivium) along with grammar and logic/dialectic.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Rhetoric";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Satire(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a genre of the visual, literary, and performing arts, usually in the form of fiction and less frequently non-fiction, in which vices, follies, abuses, and shortcomings are held up to ridicule, often with the intent of exposing or shaming the perceived flaws of individuals, corporations, government, or society itself into improvement.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no:  " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Satire";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Setting(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "is the time and geographic location within a narrative, either non-fiction or fiction.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Setting";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::SituationalIrony(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "where an event contradicts what was expected to happen, often creating a humorous or striking effect. It involves a discrepancy between what is anticipated and what actually occurs. This can involve a situation where the outcome is the opposite of what was intended or the opposite of what is generally considered normal.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Situational Irony";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Soliloquy(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "The act of a character Speech to themselves so as to reveal their thoughts to the audience.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Soliloquy";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Synechdote(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "A figure of speech that uses the name of a part of something to represent the whole, or the whole to represent a part.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Synechdote";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Theme(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a central topic, subject, or message within a narrative.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Theme";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Tone(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "expresses the writer\'s attitude toward or feelings about the subject matter and audience.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Tone";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::VerbalIrony(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a speaker says something but means the opposite. It creates a contrast between the literal meaning of the words and the speaker\'s true intention.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Verbal Irony";
        }
    }

    return "NULL";
}

string _LiteratureDevices::Terms::Allegory(string text)
{
    string start_time;
    string end_time;
    stringstream oss;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    start_time = oss.str();

    string model = llm_model;
    string definition = "a narrative or visual representation in which a character, place, or event can be interpreted to represent a meaning with moral or political significance.";
    string prompt = "Check if the following literature device matches the following and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM2::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::json_parser(response);
    vector<string> words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);
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
    //vector<string> encrypted = _Encryption::aesEncrypt(response);

    _Thought::Thought2SQL(model, prompt, response, "NULL", "NULL", to_string(llm_duration));

    for (int x = 0; x < words.size(); x++)
    {
        if (words[x] == "yes")
        {
            return "Allegory";
        }
    }

    return "NULL";
}