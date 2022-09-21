#pragma once

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

using namespace std;

class _LongTermMemory
{
public:
    static void LongTermMemoryReadingSearchTermDateElapsed(string search, int year, int month, int day, int hour, int minutes, int seconds);
    static void LongTermMemoryReadingDate(string search, int year, int month, int date, int hour, int minutes, int seconds);
    static void LongTermMemoryReadingRight(string search);
    static void LongTermMemoryReadingLeft(string search);
    static void LongTermMemoryText(string search, int year, int month, int date, int hour, int minutes, int seconds);
    static void LongTermMemoryDialogueSearch(string search);
    static void LongTermMemoryTextAnalysisSearchElapsed(string search, int year, int month, int day, int hour, int minutes, int seconds);
    static void LongTermMemoryTextAnalysisSearchDateLeft(string search, int year, int month, int day, int hour, int minutes, int seconds);
    static void LongTermMemoryTextAnalysisCount(string search);
    static void LongTermMemoryTextAnalysisBoolean(string search);
    static void LongTermMemoryAnalysisText(string search);
    static void LongTermMemoryRawSearchTermDateElapsed(string search, int origin_year, int origin_month, int origin_day, int origin_hour, int origin_minutes, int origin_seconds, int duration_year, int duration_month, int duration_day, int duration_hour, int duration_minutes, int duration_seconds);
    static void LongTermMemoryRawElapsed(int origin_year, int origin_month, int origin_day, int origin_hour, int origin_minutes, int origin_seconds, int duration_year, int duration_month, int duration_day, int duration_hour, int duration_minutes, int duration_seconds);
    static void LongTermMemoryRawSearchTermDateLeft(string search, int year, int month, int day, int hour, int minutes, int seconds);
    static void LongTermMemoryRawSearchReturnAll(string search);
    static void LongTermMemoryRawSearchCount(string search);
    static bool LongTermMemoryRawSearchBoolean(string search);
    static void LongTermMemoryRawSearchTermDateRight(string search, int year, int month, int day, int hour, int minutes, int seconds);
    static void LongTermMemoryRawSearchBackward(string search);
    static void LongTermMemoryRawSearchRight(string search);
    static void LongTermMemoryRawSearch(string search);
    static void LongTermMemoryRawSearchDate(int year, int month, int day, int hour);
    static void LongTermMemoryRawSearchwithDate(string search, int year, int month, int day, int hour);
    static string LongTermMemoryText(string search);
    static string LongTermMemoryText(string search, int year, int month, int day, int hour);
    static void LongTermMemoryNames();
};

