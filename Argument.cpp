/*
    Copyright(C) 2023 Tyler Crockett | Macdaddy4sure.com

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
#include "Argument.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reference.h"
#include "NLP.h"
#include "NLU.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

using namespace std;

// This function will create deductive logic syllogisms from a given input string
// 0. Use precise word definitions in premises
//  a. Load the definitions from MySQL into a two dimensional string array
//  b. Load conceptual data and copy int a string array 
// 1. Premise 1
// 2. Premise 2
// 3. Premise x
// 4. Certain Conclusion
string* _NLP::CreateDeductiveArgument(string text)
{
    string* words;
    // -2. Parse the text, separate into sentences and string array of strings

    // -1. Load relevant information to local variables
    // Databases with conceptual information:
    //      a. WikiSimple
    //      b. Dictionary
    //      c. Wikipedia
    //      d. Wikidataure
    //      e. Literature

    // 0. Use precise word definitions in premises

    // 1. Premise 1
    
    // 2. Premise 2
    
    // 3. Premise x

    // 4. Certain Conclusion
    return words;
}

// This function will create an inductive logic syllogism from data
// 0. Use precise word definitions in premises
// 1. Premise 1
// 2. Premise 2
// 3. Premise 3
// 4. Probable conclusion
string* _NLP::CreateInductiveArgument(string text)
{
    string* words;
    // 0. Use precise word definitions in premises
    return words;
}

string* _NLP::DeductiveArgumentCheck(string argument)
{
    string* words;
    // 4. Probable conclusion
    return words;
}

//string _NLP::FallacyCheck(string text, bool fiction)
//{
//    string words;
//    return words;
//}
//
//string _NLP::FallacyCheck(string text, string data, bool fiction)
//{
//    string words;
//    return words;
//}