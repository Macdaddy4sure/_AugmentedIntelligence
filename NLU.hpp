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

#include "AugmentedIntelligence.hpp"

using namespace std;

class _NLU
{
public:
    static string CreateSummary(string text);
    static string* DictionaryDefinitionCheck(string text);
    //static void GetSummation(string recognition);
    static double* getDictionaryVector(string word);
    static double* getAdditiveVector(string word);
    //static double* getAdditiveVectorSentence(string* sentence);
    static double* VectorAddition(double* vector1, double* vector2);
    static double* getSentenceVectors(string* sentence);
    static double* getSentenceVectorsAdditive(string* sentence);
    static double* getSentenceVectorsAdditiveAverage(string* sentence);
    static double* getVectorAdditiveAverage(string word);
    static double* getAverageVectorSentence(string* sentence);
    //static string BiasCheck(string text);
    //static string FallacyCheck(string text);
    //static string** getPOSTaggedArticle(string mysql_table, string mysql_database);
    //static bool GetSpeechLieDetection();

    class CUDA
    {
    public: 
        //static double* getDictionaryVector(string word);
        //static double* getAdditiveVector(string word);
        //static double* getAdditiveVectorSentence(string* sentence);
        //static double* VectorAddition(double* vector1, double* vector2);
        //static double* getSentenceVectors(string* sentence);
        //static double* getSentenceVectorsAdditive(string* sentence);
        //static double* getSentenceVectorsAdditiveAverage(string* sentence);
        //static double* getVectorAdditiveAverage(string word);
        //static double* getAverageVectorSentence(string* sentence);
        //static string** getPOSTaggedArticle(string mysql_table, string mysql_database);
    };
};