/*
    Copyright(C) 2022 Tyler Crockett | Macdaddy4sure.com

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
#include "Typing.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Actions.h"
#include "Reference.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

using namespace std;

// The folling function is for typing on a computer
void _Actions::Typing()
{
    string words[20];
    string data;
    int spaces = 0;
    bool boolean = false;

    // 1. Get sound data from microphone

    // 2. Parse the sound data from PocketSphinx

    // 3. Separate the string into words

    while (!boolean)
    {
        // Get speech data from PocketSphinx
        //data = SpeechRecognition();

        // Separate the string into words
        for (int i = 0; i <= data.length(); i++)
        {
            if (!isspace(data[i]))
            {
                words[spaces] += data[i];
            }
            else
            {
                spaces++;
            }
        }

        // Search for thread terminator
        for (int j = 0; j <= spaces; j++)
        {
            if (words[j] == "terminate" && words[j + 1] == "typing")
            {
                boolean = true;
            }
        }

        // Send data to typing queue
        if (!boolean)
        {
            for (int k = 0; k <= spaces; k++)
            {
                TypingQueue(words[k]);
            }
        }
    }

    // 4. Engage the typing queue

    // 5. Use a terminate function to end typing
}

// The following function will receive an input word and will queue each letter for the kinesthetic API ???
void _Actions::TypingQueue(string data)
{
    // Process each letter in data
    for (int i = 0; i <= data.length(); i++)
    {
        // 1. Recommend placing hands on the home row
        // 2. Send the letter to the kinesthetic API for hands and fingers
        // 3. Use TensorFlow and OpenCV to find the cursor
        // 4. Use TensorFlow and OpenCV to check words for spelling
        //  a. Logic to decide based on finger and hand location, and cursor location to press the delete or backspace key for corrections
        // 5. Possibily use for grammar and other writting style directives
        // 6. Syntacical checking for programming
        // 7. Check for fallacies
        // 8. Check for biases
    }
}