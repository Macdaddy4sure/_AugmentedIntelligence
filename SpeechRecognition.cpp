/*
    Copyright(C) 2024 Tyler Crockett | Macdaddy4sure.com

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
    MIT License - OpenAI Whisper

    Copyright(C) 2024 OpenAI

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files(the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and /or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions :

    The above copyright notice and this permission notice shall be included in all
    copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
    SOFTWARE.
*/

/*
    Open Source Initiative OSI - The MIT License - cURL

    http://www.opensource.org/licenses/mit-license.php

    Copyright(c) 2010 - 2014 Brian Cavalier and John Hann

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
#include "Speech Recognition.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Reference.hpp"
#include "Parsers.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;

string _SpeechRecognition::SpeechRecognition(string audioFilePath)
{
    CURL* curl;
    CURLcode res;
    std::string readBuffer;
    string transcription;

    std::string url = whisper_hostname;
    //std::string audioFilePath = "D:/_test20_whisper_server/voice_test.wav"; // Change this to the path of your audio file

    struct curl_httppost* formpost = nullptr;
    struct curl_httppost* lastptr = nullptr;
    struct curl_slist* headerlist = nullptr;
    static const char buf[] = "Expect:";

    curl_global_init(CURL_GLOBAL_ALL);
    curl = curl_easy_init();

    if (curl)
    {
        // Set up the form post
        curl_formadd(&formpost,
            &lastptr,
            CURLFORM_COPYNAME, "audio",
            CURLFORM_FILE, audioFilePath.c_str(),
            CURLFORM_END);

        headerlist = curl_slist_append(headerlist, buf);

        // Set cURL options
        curl_easy_setopt(curl, CURLOPT_URL, whisper_hostname.c_str());
        curl_easy_setopt(curl, CURLOPT_VERBOSE, 1L);
        curl_easy_setopt(curl, CURLOPT_HTTPPOST, formpost);

        // Set the callback function to handle the response data
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, _Utilities::WriteCallback);

        // Pass the readBuffer to the callback function
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &readBuffer);

        res = curl_easy_perform(curl);

        transcription = _Parsers::SpeechRecognitionParse(readBuffer);

        //if (res != CURLE_OK)
        //    fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        //else
        //    std::cout << "Response: " << readBuffer << std::endl;

        curl_easy_cleanup(curl);
        curl_slist_free_all(headerlist);
    }

    curl_global_cleanup();

    return transcription;
}
