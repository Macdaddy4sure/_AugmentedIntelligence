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

class _Time
{
public:
    static void TimeArithmetic(string text, double* result);
    static string TimeSubtract(int seconds, int minutes, int hours, int days, int weeks, int months, int years);
    static string TimeAdditive(int seconds, int minutes, int hours, int days, int weeks, int months, int years);
    static int GetYears(string date);
    static int GetMonths(string date);
    static int GetDays(string date);
    static int GetHours(string date);
    static int GetMinutes(string date);
    static int GetSeconds(string date);
    static int GetDaysMonth(int year, int month);
    static bool isLeapYear(int year);
};

struct TimeFormat
{
    long long years;
    long long months;
    long long weeks;
    long long days;
    long long hours;
    long long minutes;
    long long seconds;
    long long milliseconds;
};