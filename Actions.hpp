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

class _Actions
{
public:
    static string GetCurrentAction();
    static string GetCurrentActionObjectDetection();
    static string GetCurrentActionLLMVision();
	static string GetCurrentActionLLMImage();
    static string GetCurrentActionTranscription();
    static string GetCurrentActionVideo();
    static string GetCurrentActionDeduction(vector<vector<string>> object_detection, vector<string> image_llm, vector<string> transcription_llm);
    static void MySQLKinesthseticAction(string prompt, string response, string thought_hash, string thought_analysis, string keywords);
    static string GetMySQLKinestheticAction(string date1, string date2);
    static string AnalyzeKinestheticAction(string thought);
	static string GenerateKinestheticAction(string prompt);
	static string ExecuteKinestheticAction(string action);
    static string eye_blink_detection();
};