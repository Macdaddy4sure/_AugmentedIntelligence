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
using namespace cv;

class _Reading
{
public:
    static void ReadingScreenshot(string filepath);
    //static bool GetReadingEnable();
    static string Reading(Mat img);
    static string Reading(string filelocation);
    static string Reading2(Mat img);
    static string TextIdentification(string image);
    static string OllamaReading(string filelocation);
    static void TestIdentificationOpenCV();
    static void BookReadingSync(string search);
    static void SentenceAnalysis(string raw_recognition, string imagePath);
    static void CheckForEquation(string tesseract_input);
    static void DictionaryChecking(string word);
    static void MySQLReadingRAW(string reading, string image_location);
    //static void BookReadingSync(string search);
};