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

class _Sound
{
public:
    static void Sound();
    static void MySQL_Sound(string filename, string current_time, string transcription, string sound_recognition, string image_hash);
    //static void SpeechCommand(string* words);
    static void RecallSoundMemory(int search_years, int search_months, int search_days, int search_hours, int search_minutes, int search_seconds, int duration_years, int duration_months, int duration_days, int duration_hours, int duration_minutes, int duration_seconds, string& encoded_filename, string& transcription, string& sound_recognition);
    static string CombineWAV(string* wav_files, string sound_directory);
    static void WriteWAVHeader(std::ofstream& file, int sampleRate, int bitsPerSample, int numChannels, uint32_t numSamples);
    static int RecordCallback(const void* inputBuffer, void* outputBuffer, unsigned long framesPerBuffer, const PaStreamCallbackTimeInfo* timeInfo, PaStreamCallbackFlags statusFlags, void* userData);
    static string SoundRecognition(string wav_location);
    //static void RunSession(TF_Session* session, TF_Graph* graph, TF_Status* status, TF_SessionOptions* options, TF_Tensor* waveform_tensor, string labelsPath);
    static TF_Tensor* ImportWaveformAsTensor(const vector<float>& audioSamples, int sampleRate);
    static vector<float> loadWavFile(string filename);
    static std::string* LoadClassLabels(const std::string& filePath);
};

// WAV Header structure
struct WAVHeader
{
    char chunkID[4] = { 'R', 'I', 'F', 'F' };
    uint32_t chunkSize;
    char format[4] = { 'W', 'A', 'V', 'E' };
    char subchunk1ID[4] = { 'f', 'm', 't', ' ' };
    uint32_t subchunk1Size = 16;
    uint16_t audioFormat = 1;
    uint16_t numChannels;
    uint32_t sampleRate;
    uint32_t byteRate;
    uint16_t blockAlign;
    uint16_t bitsPerSample;
    char subchunk2ID[4] = { 'd', 'a', 't', 'a' };
    uint32_t subchunk2Size;
};