#pragma once

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
 
    MIT License | Whisper.cpp
 
    Copyright(c) 2023 Georgi Gerganov
 
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

#include "AugmentedIntelligence.hpp"
#include "Whisper.hpp"

using namespace std;

class _SpeechRecognition
{
public:
    static string SpeechRecognition(string wav_file);
    //static string RecognizeFile(string file);
    static string SpeechRecognition2(vector<float> pcmf32_cur);
    static std::string transcribe(whisper_context* ctx, const whisper_params& params, const std::vector<float>& pcmf32, const std::string& grammar_rule, float& logprob_min, float& logprob_sum, int& n_tokens, int64_t& t_ms);
    static void get_audio(int seconds);
};

