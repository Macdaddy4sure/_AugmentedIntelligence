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
#include "Speech.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Reference.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;

//// This thread is to listen for queues for speaking
////      TODO: Get keywords to call this function
//void _AI::MySQL_Sound::SoundRAW
//{
//    // 1. Get the current action
//
//    // 2. When is it approprirate to soeak
//
//    // 3. Use Machine Learning coneptual library for speaking
//
//    // 4. Use Machine Learning factoid paroting
//}

// The following function will listen for a word from the speaking thread
string _Speech::SpeechQueueWord(string word)
{
    int spaces = 0;

    // 0. Speaking censorship checks
    //  a. Check ethics
    //  b. If (argument)
    //      i.  Check for fallacies
    //      ii. Check for bias

    // Return the reason for denial
    return "false";
}

// The following function will listen for sentences from the speaking thread
string _Speech::SpeechQueueSentence(string* word)
{
    int spaces = 0;

    // Break the sentence into words
    for (int i = 0; i <= sizeof(word); i++)
    {
        // 1. Send the words to short term memory
        // 2. Higlight indiviudal words in memory
        // 3. Engage the kinethstetic API for speaking
        // 4. Save statistics for words to MySQL database
        // 5. Save spoken words to MySQL
    }

    return "false";
}