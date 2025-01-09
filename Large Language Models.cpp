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

/*
    Open Source Initiative OSI - The MIT License - cURL

    http://www.opensource.org/licenses/mit-license.php

    Copyright(c) 2010 - 2013 Brian Cavalier and John Hann

    Permission is hereby granted, free of charge, to any person obtaining
    a copy of this software and associated documentation files(the
        "Software"), to deal in the Software without restriction, including
        without limitation the rights to use, copy, modify, merge, publish,
        distribute, sublicense, and /or sell copies of the Software, and to
        permit persons to whom the Software is furnished to do so, subject to
        the following conditions :

    The above copyright notice and this permission notice shall be
    included in all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
    EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
    MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
    NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE
    LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
    OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION
    WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include "AugmentedIntelligence.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"
#include "Settings.hpp"

using namespace std;

string _LLM::OllamaAPI(string model_word, string prompt, string image_location)
{
    CURL* curl;
    CURLcode res;
    string model;
    string base64_image;
    string data;

    bool stream = true;
    
    if (model_word == "mistral")
        model = "mistral:7b-instruct-v0.2-fp16";
    else if (model_word == "mixtral")
        model = "mixtral:8x7b";
    else if (model_word == "codellama")
        model = "codellama:34b-instruct";
    else if (model_word == "dolphin")
        model = "dolphin-mixtral:8x7b";
    else if (model_word == "llama2")
        model = "llama2:13b";
    else if (model_word == "uncensored")
        model = "llama2-uncensored:7b";
    else if (model_word == "llama3")
        model = "llama3:8b-instruct-q8_0";
    else if (model_word == "image")
        model = "llama3.2-vision:11b-instruct-fp16";
    else if (model_word == "image2")
        model = "llava:34b";
    else if (model_word == "wizard")
        model = "wizard-math:13b";
    else if (model_word == "llama")
        model = "llama3.1:70b";
    else
        return nullptr;

    struct curl_slist* headers = NULL;
    headers = curl_slist_append(headers, "Content-Type: application/json");

    std::string url = llm_hostname;

    if (model == "llava:34b" || model == "llama3.2-vision:90b" || "llama3.2-vision:latest" || "llama3.2-vision:11b-instruct-fp16")
    {
        data = _LLM::LLavaPromptToJSON(model, prompt, image_location);
        //cout << "test1" << endl;
    }
    else
    {
        data = "{\"model\": \"";
        data += model;
        data += "\", \"prompt\": \"";
        data += prompt;
        data += "\", \"stream\": false}";
        //cout << "test2" << endl;
    }

    curl = curl_easy_init();

    if (curl)
    {
        string response;

        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, _Utilities::WriteCallback);
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);
        res = curl_easy_perform(curl);

        if (res != CURLE_OK)
        {
            std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
        }

        curl_easy_cleanup(curl);

        return response;
    }

    return nullptr;
}

//string _LLM::PromptToJSON(string model, string prompt)
//{
//
//}

string _LLM::LLavaPromptToJSON(string model, string prompt, string image_location)
{
    string data;
    string base64_image;

    // Convert the image to a Base64 string
    ifstream imageFile(image_location.c_str(), ios::binary);
    vector<char> buffer(istreambuf_iterator<char>(imageFile), {});
    base64_image = _Utilities::base64_encode(std::string(buffer.begin(), buffer.end()));

    data = "{\"model\": \"";
    data += model;
    data += "\", \"prompt\": \"";
    data += prompt;
    data += "\", \"stream\": false";
    data += ", \"images\": [\"";
    data += base64_image;
    data += "\"]}";

    return data;
}

string _LLM::getPrompt()
{
    string input;

    cout << ">>> ";
    getline(cin, input);

    return input;
}