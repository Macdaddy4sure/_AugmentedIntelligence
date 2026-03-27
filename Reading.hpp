#pragma once

/*
    Copyright(C) 2025 Tyler Crockett | Macdaddy4sure.ai

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
    static void ReadingInit();
    static void ReadingScreenshot(string filepath);
    //static bool GetReadingEnable();
    static string Reading(Mat img);
    static string Reading(string filelocation);
    static string Reading2(Mat img);
    static string TextIdentification(string image);
    static string TextIdentification(Mat image);
    static string OllamaReading(string filelocation);
    static void TestIdentificationOpenCV();
    static void BookReadingSync(string search);
    static void SentenceAnalysis(string raw_recognition, string imagePath);
    static void CheckForEquation(string tesseract_input);
    static void DictionaryChecking(string word);
    static void MySQLReadingRAW(string reading, string image_location);
    static bool DetectText();
    static bool DetectText(Mat img);
    static void ReadingMode();
    static string ReadTextFromImageMiddle(const string& fileLocation, int cropWidth, int cropHeight);
    static cv::Mat CropMiddle(const cv::Mat& image, int width, int height);
    static bool ReadingTextExists(string text);
    //static void BookReadingSync(string search);
    static void ReadingFallacyChecking();
    static void ReadingBiasChecking();
    static void ReadingAxiomChecking();
    static void LiteratureDeviceChecking();
    static void ReadingAbuseChecking();
    static void ReadingLawChecking();
    static void ReadingCourtObjectionChecking();
    static void ReadingDictionaryChecking();
    static void ReadingAerospaceEngineering();
    static void ReadingAlgebra();
    static void ReadingArtificialIntelligence();
    static void ReadingBASH();
    static void ReadingBATCH();
    static void ReadingBeauty();
    static void ReadingBiology();
    static void ReadingBotany();
    static void ReadingCPP();
    static void ReadingCalculus();
    static void ReadingChemistry();
    static void ReadingCivilEngineering();
    static void ReadingCollegeAlgebra();
    static void ReadingComputerScience();
    static void ReadingCryptography();
    static void ReadingDance();
    static void ReadingDifferentialEquations();
    static void ReadingEcology();
    static void ReadingEconomics();
    static void ReadingElectricalEngineering();
    static void ReadingEngineering();
    static void ReadingEthics();
    static void ReadingGameTheory();
    static void ReadingGeography();
    static void ReadingGeology();
    static void ReadingGeometry();
    static void ReadingGraphTheory();
    static void ReadingInternet();
    static void ReadingJava();
    static void ReadingLinearAlgebra();
    static void ReadingLogic();
    static void ReadingMarketing();
    static void ReadingMechanicalEngineering();
    static void ReadingMedicine();
    static void ReadingNautical();
    static void ReadingNetworking();
    static void ReadingPoetry();
    static void ReadingPhilosophy();
    static void ReadingPhysics();
    static void ReadingPoliticalScience();
    static void ReadingProbabilityAndStatistics();
    static void ReadingProgramming();
    static void ReadingPsychiatry();
    static void ReadingPsychology();
    static void ReadingSales();
    static void ReadingStocks();
    static void ReadingStructuralEngineering();
    static void ReadingTheatre();
    static void ReadingTrigonometry();
    static void ReadingWoodWorking();
    static void ReadingWriting();
};