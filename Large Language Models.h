#pragma once

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

#include "AugmentedIntelligence.h"

class _LLM
{
public:
    static string OllamaAPI(string model_word, string prompt, string image_location);
    //static string PromptToJSON(string model, string prompt);
    static string LLavaPromptToJSON(string model, string prompt, string base64_image);
    static string getPrompt();
};

// Large Language Models (LLMs)
// 1. BLOOM
// 2. Gemma
// 3. GPT-NEO ?
// 4. Llama 2
// 5. Llama Code
// 6. Phi
// 7. GPT-2