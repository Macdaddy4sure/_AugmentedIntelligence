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

class _Utilities
{
public:
    static void CleanUpImages(string object, string fileLocation, string start_date, string current_date);
    static void Sentence2Memory();
    static void PrintLicense();
    static void savePassword(string hostname, string password);
    static string* getPasswords();
    static string getPassword(string domain);
    static void getPasswordsScreenshot(string password);
    static void MusicLyricsSync(string search);
    static string* String2Sentences(string input);
    static string* String2Words(string input);
    static string ImageSequenceFFMpeg(string current_date, string duration_previous);
    static void fourPointsTransform(const Mat& frame, const Point2f vertices[], Mat& result);
    static void swap(int* a, int* b);
    static int partition(int arr[], int low, int high);
    static void quickSort(int arr[], int low, int high);
    static string* sortLines(string outText, string* recognition);
    static int GenerateRandomNumber(int low, int high);
    static string* StringArraySorter(string* input);
    static void MoviesSorter();
    static bool MovieExists(string title);
    static void CreateReminder();
    static string toLowerWord(string word);
    static string CreateSummary(string data);
    static void UpdateMySQL();
    static string ReturnPunctuation(string* words);
    static double* ParseVector(string vector);
    static double* VectorSum(double* vector_sum, double* vector);
    static double* VectorAverage(double* vector_sum, int word_count);
    static string DictionarySpellCheck(string word);
    //static static void preprocess(const Mat& frame, Net& net, Size inpSize, float scale, const Scalar& mean, static bool swapRB);
    //static string postprocess(Mat& frame, const std::vector<Mat>& out, Net& net, static int backend);
};