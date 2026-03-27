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

class _SpeechCommands
{
public:
    static void SpeechCommands(vector<string> command);
    static void SpeechCommands2(vector<string> words);
    static vector<string> CommandParse(vector<string> command);
    static vector<string> SpellCheckCommand(vector<string> words);
    static vector<string> GrammarCheckCommand(vector<string> words);
    static vector<string> SuggestCommands(vector<string> words);
    //static void PythonReceiveString(const std::string& str);
    //static void set_callback(boost::python::object callback);
    static void myCallback(const std::string& str);
    static int lua_callback(lua_State* L);
    static void executeLuaScript(lua_State* L, string scriptPath);
    static void PrintCommands();
};

// Structure to represent WAV file header
struct WavHeader {
    char riff[4];         // "RIFF" identifier
    int fileSize;         // File size in bytes
    char wave[4];         // "WAVE" identifier
    char fmt[4];          // "fmt " identifier
    int fmtSize;          // Format chunk size
    short format;         // Audio format (1 for PCM)
    short channels;       // Number of audio channels
    int sampleRate;       // Sample rate in Hz
    int byteRate;         // Byte rate in bytes per second
    short blockAlign;     // Block alignment in bytes
    short bitsPerSample;  // Bits per sample
    char data[4];         // "data" identifier
    int dataSize;         // Audio data size in bytes
};