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
#include "Settings.hpp"
#include "Thought.hpp"
#include "Utilities.hpp"

using namespace std;

std::queue<Request> request_queue;
std::mutex queue_mutex;
std::condition_variable cv_test;

std::queue<string> response_queue;
std::mutex response_mutex;

std::vector<std::thread> threads;

string _LLM::OllamaAPI(string model_word, string prompt, string image_location)
{
    CURL* curl;
    CURLcode res;
    string model = model_word;
    string base64_image;
    string data;

    bool stream = true;
    
    //if (model_word == "mistral")
    //    model = "mistral:7b-instruct-v0.2-fp16";
    //else if (model_word == "mixtral")
    //    model = "mixtral:8x7b";
    //else if (model_word == "codellama")
    //    model = "codellama:34b-instruct";
    //else if (model_word == "dolphin")
    //    model = "dolphin-mixtral:8x7b";
    //else if (model_word == "llama2")
    //    model = "llama2:13b";
    //else if (model_word == "uncensored")
    //    model = "llama2-uncensored:7b";
    //else if (model_word == "llama3")
    //    model = "llama3:8b-instruct-q8_0";
    //else if (model_word == "image2")
    //    model = "llama3.2-vision:latest";
    //else if (model_word == "image")
    //    model = "llava:34b";
    //else if (model_word == "image2")
    //    model = "llama3.2-vision:90b";
    //else if (model_word == "wizard")
    //    model = "wizard-math:13b";
    //else if (model_word == "llama")
    //    model = "llama3.1:70b";
    //else if (model_word == "llama3.3:70b")
    //    model = "llama3.3:70b";
    //else if (model_word == "llama4")
    //    model = "llama4:latest";
    //else if (model_word == "gemma")
    //    model;
    //else
    //    return "NULL";

    struct curl_slist* headers = NULL;
    headers = curl_slist_append(headers, "Content-Type: application/json");

    std::string url = llm_hostname;
    std::string remote_llm_hostname;
 //   std::string remote_url_1 = remote_llm_hostname_1;
	//std::string remote_url_2 = remote_llm_hostname_2;
	//std::string remote_url_3 = remote_llm_hostname_3;

    if (model == "llava:34b" || model == "llama3.2-vision:90b" || "llama3.2-vision:latest" || "llama3.2-vision:11b-instruct-fp16" || "llama3.2-vision:11b")
    {
        data = _LLM::LLavaPromptToJSON(model, prompt, image_location);
        //cout << "test1" << endl;
    }
    else
    {
        data = "{\"model\": \"";
        data += model;
        data += "\", \"prompt\": \"";
        data += prompt[0];
        data += "\", \"stream\": false}";
        //cout << "test2" << endl;
    }

    curl = curl_easy_init();

    if (curl)
    {
        if (!remote_llm_server_enabled && llm_server_enabled)
        {
            string response;

            curl_easy_setopt(curl, CURLOPT_URL, llm_hostname.c_str());
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
        if (remote_llm_server_enabled && !llm_server_enabled)
        {
            string response;

            curl_easy_setopt(curl, CURLOPT_URL, remote_llm_hostname.c_str());
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
        if (remote_llm_server_enabled && llm_server_enabled)
        {
            cout << "Please select either the local or remote LLM server" << endl;
        }
    }

    return "NULL";
}

// Function to load a .ggml model and generate text based on input prompt
//std::string generateText(const std::string& modelPath, const std::string& inputPrompt) {
//    // Load the model from file
//    ggml_model* model = ggml_load(modelPath.c_str());
//    if (!model) {
//        std::cerr << "Failed to load model." << std::endl;
//        return "";
//    }
//
//    // Create a tokenizer for the input prompt
//    ggml_tokenizer* tokenizer = ggml_create_tokenizer();
//    int numTokens = ggml_tokenize(tokenizer, inputPrompt.c_str());
//
//    // Get the token IDs
//    const int* tokenIds = ggml_get_token_ids(tokenizer);
//
//    // Generate text based on the input prompt
//    std::vector<int> outputTokenIds;
//    ggml_generate(model, tokenIds, numTokens, &outputTokenIds, 100); // generate up to 100 tokens
//
//    // Create a string from the generated token IDs
//    std::string outputText;
//    for (int tokenId : outputTokenIds) {
//        const char* token = ggml_get_token(tokenizer, tokenId);
//        if (token) {
//            outputText += token;
//            outputText += " ";
//        }
//    }
//
//    // Clean up resources
//    ggml_free_model(model);
//    ggml_free_tokenizer(tokenizer);
//
//    return outputText;
//}

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

// Initialize the queue and thread count
void _LLM2::init(int thread_count)
{
    for (int i = 0; i < thread_count; i++)
    {
        threads.emplace_back(_LLM2::llm_api_thread);
        threads.back().detach(); // Detach each thread after creation
    }
}

// Add a request to the queue
void _LLM2::add_request(Request request)
{
    std::lock_guard<std::mutex> lock(queue_mutex);
    request_queue.push(request);
    cv_test.notify_one();
}

// LLM API function with queue-based implementation
string _LLM2::OllamaAPI(string model_word, string prompt, string image_location)
{
    _LLM2 llm;

    llm.init(10);

    Request request;
    request.model = model_word;
    request.prompt = prompt;
    request.image_location = image_location;

    _LLM2::add_request(request);

    // Wait for the response
    // Wait for the response
    std::unique_lock<std::mutex> lock(response_mutex);

    cv_test.wait(lock, [&] { return !response_queue.empty(); });

    string response = response_queue.front();
    response_queue.pop();

    return response;
}

// Thread function for handling curl requests
void _LLM2::llm_api_thread()
{
    while (true)
    {
        Request request;

        // Wait for a new request in the queue
        std::unique_lock<std::mutex> lock(queue_mutex);

        cv_test.wait(lock, [&] { return !request_queue.empty(); });

        if (request_queue.empty()) continue;  // Check again after waking up

        request = request_queue.front();
        request_queue.pop();

        string model;
        string data;

        if (request.model == "mistral")
            model = "mistral:7b-instruct-v0.2-fp16";
        else if (request.model == "mixtral")
            model = "mixtral:8x7b";
        else if (request.model == "codellama")
            model = "codellama:34b-instruct";
        else if (request.model == "dolphin")
            model = "dolphin-mixtral:8x7b";
        else if (request.model == "llama2")
            model = "llama2:13b";
        else if (request.model == "uncensored")
            model = "llama2-uncensored:7b";
        else if (request.model == "llama3")
            model = "llama3:8b-instruct-q8_0";
        else if (request.model == "image2")
            model = "llama3.2-vision:latest";
        else if (request.model == "image")
            model = "llava:34b";
        else if (request.model == "image2")
            model = "llama3.2-vision:90b";
        else if (request.model == "wizard")
            model = "wizard-math:13b";
        else if (request.model == "llama")
            model = "llama3.1:70b";
        else if (request.model == "llama3.3:70b")
            model = "llama3.3:70b";
        else if (request.model == "llama4")
            model = "llama4:latest";
        else if (request.model == "gemma")
            model = "gemma3:27b";

        struct curl_slist* headers = NULL;
        headers = curl_slist_append(headers, "Content-Type: application/json");

        std::vector<std::string> hostnames = { "108.250.71.10:11434", "108.250.71.10:11432", "108.250.71.10:11430", "108.250.71.10:11436" };
        int hostname_index = (_LLM2::request_hash(request.model + request.prompt) % remote_llm_hostnames.size());
        std::string url = "http://" + remote_llm_hostnames[hostname_index];
        
        if (api_chat)
        {
			url += "/api/chat";
        }
        else 
        {
            url += "/api/generate";
        }
         
        cout << url << endl;

        if (request.model == "llava:34b" || request.model == "llama3.2-vision:90b")
        {
            data = _LLM::LLavaPromptToJSON(request.model, request.prompt, request.image_location);
        }
        else
        {
            data = "{\"model\": \"";
            data += request.model;
            data += "\", \"prompt\": \"";
            data += request.prompt;
            data += "\", \"stream\": false}";
            //cout << "Data: " << data << endl;
        }

        CURL* curl = curl_easy_init();

        if (curl)
        {
            string response;

            curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
            curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data.c_str());
            curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, _Utilities::WriteCallback);
            curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

            CURLcode res = curl_easy_perform(curl);

            if (res != CURLE_OK)
            {
                std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
            }

            curl_easy_cleanup(curl);

            // Add the response to the response queue
            std::lock_guard<std::mutex> lock(response_mutex);
            response_queue.push(response);
            cv_test.notify_one();
        }
    }
}

void _LLM2::llm_api_threadv2()
{
    // Implementation for _LLM3::OllamaAPI goes here
    //while (true)
    //{
  //      Request request;

  //      // Wait for a new request in the queue
  //      std::unique_lock<std::mutex> lock(queue_mutex);

  //      cv_test.wait(lock, [&] { return !request_queue.empty(); });

  //      if (request_queue.empty()) continue;  // Check again after waking up

  //      request = request_queue.front();
  //      request_queue.pop();

  //      string model;
  //      string data;

  //      if (request.model == "mistral")
  //          model = "mistral:7b-instruct-v0.2-fp16";
  //      else if (request.model == "mixtral")
  //          model = "mixtral:8x7b";
  //      else if (request.model == "codellama")
  //          model = "codellama:34b-instruct";
  //      else if (request.model == "dolphin")
  //          model = "dolphin-mixtral:8x7b";
  //      else if (request.model == "llama2")
  //          model = "llama2:13b";
  //      else if (request.model == "uncensored")
  //          model = "llama2-uncensored:7b";
  //      else if (request.model == "llama3")
  //          model = "llama3:8b-instruct-q8_0";
  //      else if (request.model == "image2")
  //          model = "llama3.2-vision:latest";
  //      else if (request.model == "image")
  //          model = "llava:34b";
  //      else if (request.model == "image2")
  //          model = "llama3.2-vision:90b";
  //      else if (request.model == "wizard")
  //          model = "wizard-math:13b";
  //      else if (request.model == "llama")
  //          model = "llama3.1:70b";
  //      else if (request.model == "llama3.3:70b")
  //          model = "llama3.3:70b";
  //      else if (request.model == "llama4")
  //          model = "llama4:latest";
  //      else if (request.model == "gemma")
  //          model = "gemma3:27b";

  //      struct curl_slist* headers = NULL;
  //      headers = curl_slist_append(headers, "Content-Type: application/json");

  //      //std::vector<std::string> hostnames = { "108.250.71.10:11434", "108.250.71.10:11432", "108.250.71.10:11430", "108.250.71.10:11436" };
  //      //int hostname_index = (_LLM2::request_hash(request.model + request.prompt) % remote_llm_hostnames.size());
  //      //std::string url = "http://" + remote_llm_hostnames[hostname_index];

  //      int defaultHostnameIndex = 0; // Assuming the default hostname is at index 0

  //      std::vector<std::string> allHostnames;
  //      allHostnames.push_back(default_hostname);
  //      allHostnames.insert(allHostnames.end(), remote_llm_hostnames.begin(), remote_llm_hostnames.end());
		//string selectedHostname;

  //      if (defaultHostnameIndex < remote_llm_hostnames.size())
  //      {
  //          // Try to use a backup hostname based on the hash value
  //          int hostname_index = (_LLM2::request_hash(request.model + request.prompt) % allHostnames.size());
  //          selectedHostname = allHostnames[hostname_index];
  //      }
  //      else
  //      {
  //          // Fallback to using the default hostname directly
  //          selectedHostname = default_hostname;
  //      }

  //      // Use the selected hostname to construct the URL
  //      std::string url = "http://" + selectedHostname;
  //      url += "/api/generate";

  //      if (request.model == "llava:34b" || request.model == "llama3.2-vision:90b")
  //      {
  //          data = _LLM::LLavaPromptToJSON(request.model, request.prompt, request.image_location);
  //      }
  //      else
  //      {
  //          data = "{\"model\": \"";
  //          data += request.model;
  //          data += "\", \"prompt\": \"";
  //          data += request.prompt;
  //          data += "\", \"stream\": false}";
  //          //cout << "Data: " << data << endl;
  //      }

  //      CURL* curl = curl_easy_init();

  //      if (curl)
  //      {
  //          string response;

  //          curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
  //          curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data.c_str());
  //          curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, _Utilities::WriteCallback);
  //          curl_easy_setopt(curl, CURLOPT_WRITEDATA, &response);

  //          CURLcode res = curl_easy_perform(curl);

  //          if (res != CURLE_OK)
  //          {
  //              std::cerr << "curl_easy_perform() failed: " << curl_easy_strerror(res) << std::endl;
  //          }

  //          curl_easy_cleanup(curl);

  //          // Add the response to the response queue
  //          std::lock_guard<std::mutex> lock(response_mutex);
  //          response_queue.push(response);
  //          cv_test.notify_one();
  //      }
  //  }
}

uint32_t _LLM2::request_hash(const std::string& str)
{
    uint32_t hash = 2166136261;
    for (char c : str) {
        hash ^= c;
        hash *= 16777219;
    }
    return hash;
}

// Static member function to check if there is a response in the queue
bool _LLM2::has_response()
{
    return !response_queue.empty();
}



//string _LLM::LLavaPromptToJSON(string model, string prompt, string image_location)
//{
//    string data;
//    string base64_image;
//
//    // Convert the image to a Base64 string
//    ifstream imageFile(image_location.c_str(), ios::binary);
//    vector<char> buffer(istreambuf_iterator<char>(imageFile), {});
//    base64_image = _Utilities::base64_encode(std::string(buffer.begin(), buffer.end()));
//
//    data = "{\"model\": \"";
//    data += model;
//    data += "\", \"prompt\": \"";
//    data += prompt;
//    data += "\", \"stream\": false";
//    data += ", \"images\": [\"";
//    data += base64_image;
//    data += "\"]}";
//
//    return data;
//}

