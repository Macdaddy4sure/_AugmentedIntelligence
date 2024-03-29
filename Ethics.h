#pragma once

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

using namespace std;

// Ethics code for Download
// 1. United States Federal Law?
// 2. County Law
// 3. City Law
// 4. Biblical Law
// 5. Other Holy law
// 6. Personal Ethics
// 7. Organization Ethics code

// Fetch the law according to the state the user resides in
// 1. Get the state
//      a. Download the law and upload to MySQL
//      b. Use while the user is in that particular state
// 2. Get the County
//      a. Download the county law and upload to MySQL
//      b. Use while the user is in that particular state
// 3. Get federal law

// The Golden Rule
// 1. Treat other people the way you want to be treated...

class _Ethics
{
public:
    static string EthicsCheckAction(string action);
    static string EthicsCheckSpeaking(string text);
};
