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

using namespace std;

class _Math
{
public:
    static void Math2MySQL(string table, string data, double number1, double number2, string operation, double result);
    static void ArithmeticParse(string transcription);
    static void ArithmeticParseVision(string vision);
    static void AlgebraParse(string recognition);
    static void AlgebraTheorems(string recognition);
    static void GeometryParse(string recognition);
    static void GeometryTheorems(string recognition);
    static void Algebra2Parse(string recognition);
    static void Algebra2Theorems(string recognition);
    static void TrigonometryParse(string recognition);
    static void TrigonometryTheorems(string recognition);
    static void CalculusParse(string recognition);
    static void CalculusTheorems(string recognition);
    static void StatisticsParse(string recognition);
    static void UnitConversions(string text);
    static double Degrees2Radians(int degrees);
    static double Radians2Degrees(double radians);
    static bool isExponent(string operation);
    static int NumberName(string text);
    static double dotProduct(const double* a, const double* b, int size);
    static double magnitude(const double* vec, int size);
    static double cosineSimilarity(const double* a, const double* b, int size);
};