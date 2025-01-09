/*
    Copyright(C) 2025 Tyler Crockett | Macdaddy4sure.com

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

    Copyright(C) 2025 OpenAI

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

//int numSamples = 0;

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

string _SpeechRecognition::SpeechRecognition2(vector<float> pcmf32_cur)
{
    whisper_params params;

    float logprob_min0 = 0.0f;
    float logprob_min = 0.0f;

    float logprob_sum0 = 0.0f;
    float logprob_sum = 0.0f;

    int n_tokens0 = 0;
    int n_tokens = 0;

    int64_t t_ms = 0;

    // whisper init
    struct whisper_context_params cparams = whisper_context_default_params();

    cparams.use_gpu = params.use_gpu;
    cparams.flash_attn = params.flash_attn;

    struct whisper_context* ctx = whisper_init_from_file_with_params(params.model.c_str(), cparams);

    // prepend 3 second of silence
    pcmf32_cur.insert(pcmf32_cur.begin(), 3.0f * WHISPER_SAMPLE_RATE, 0.0f);

    string txt = _SpeechRecognition::transcribe(ctx, params, pcmf32_cur, "prompt", logprob_min0, logprob_sum0, n_tokens0, t_ms);

    whisper_print_timings(ctx);
    whisper_free(ctx);

    return txt;
}

std::string _SpeechRecognition::transcribe(
    whisper_context* ctx,
    const whisper_params& params,
    const std::vector<float>& pcmf32,
    const std::string& grammar_rule,
    float& logprob_min,
    float& logprob_sum,
    int& n_tokens,
    int64_t& t_ms) {
    const auto t_start = std::chrono::high_resolution_clock::now();

    logprob_min = 0.0f;
    logprob_sum = 0.0f;
    n_tokens = 0;
    t_ms = 0;

    whisper_full_params wparams = whisper_full_default_params(WHISPER_SAMPLING_GREEDY);
    //whisper_full_params wparams = whisper_full_default_params(WHISPER_SAMPLING_BEAM_SEARCH);

    wparams.print_progress = false;
    wparams.print_special = params.print_special;
    wparams.print_realtime = false;
    wparams.print_timestamps = !params.no_timestamps;
    wparams.translate = params.translate;
    wparams.no_context = true;
    wparams.no_timestamps = params.no_timestamps;
    wparams.single_segment = true;
    wparams.max_tokens = params.max_tokens;
    wparams.language = params.language.c_str();
    wparams.n_threads = params.n_threads;
    wparams.audio_ctx = params.audio_ctx;
    wparams.temperature = 0.4f;
    wparams.temperature_inc = 1.0f;
    wparams.greedy.best_of = 5;
    wparams.beam_search.beam_size = 5;
    wparams.initial_prompt = params.context.data();
    wparams.suppress_regex = params.suppress_regex.c_str();

    const auto& grammar_parsed = params.grammar_parsed;
    auto grammar_rules = grammar_parsed.c_rules();

    if (!params.grammar_parsed.rules.empty() && !grammar_rule.empty())
    {
        if (grammar_parsed.symbol_ids.find(grammar_rule) == grammar_parsed.symbol_ids.end())
        {
            fprintf(stderr, "%s: warning: grammar rule '%s' not found - skipping grammar sampling\n", __func__, grammar_rule.c_str());
        }
        else
        {
            wparams.grammar_rules = grammar_rules.data();
            wparams.n_grammar_rules = grammar_rules.size();
            wparams.i_start_rule = grammar_parsed.symbol_ids.at(grammar_rule);
            wparams.grammar_penalty = params.grammar_penalty;
        }
    }

    if (whisper_full_parallel(ctx, wparams, pcmf32.data(), pcmf32.size(), wparams.n_threads) != 0)
    {
        return "failed";
    }

    std::string result = "";

    const int n_segments = whisper_full_n_segments(ctx);

    for (int i = 0; i < n_segments; ++i)
    {
        const char* text = whisper_full_get_segment_text(ctx, i);
        result += text;
        const int n = whisper_full_n_tokens(ctx, i);

        for (int j = 0; j < n; ++j)
        {
            const auto token = whisper_full_get_token_data(ctx, i, j);

            if (token.plog > 0.0f) exit(0);
            logprob_min = std::min(logprob_min, token.plog);
            logprob_sum += token.plog;
            ++n_tokens;
        }
    }

    const auto t_end = std::chrono::high_resolution_clock::now();
    t_ms = std::chrono::duration_cast<std::chrono::milliseconds>(t_end - t_start).count();

    return result;
}

