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

// Structure to hold frame information
struct FrameInfo
{
    int width;
    int height;
    AVPixelFormat pixelFormat;
};

class _FFMpeg
{
public:
    static AVCodecContext* initFFmpegContext(const std::string& outputFile, const FrameInfo& frameInfo);
    static int encodeFrame(const AVCodecContext* codecCtx, uint8_t** frameData);
	static void GetStillFrames(string mp4_video_file);
    static void ExtractAudio(string audio_file);
    static string ConvertToWav(const std::string& audio_file, const std::string& output_prefix);
    static int ConvertToMP4(const string& input_file, const string& output_file);
    static int EncodeVideo(const string& images_directory, const string& audio_file, const string& output_file);
    static void EncodeAudio(float audio);
    static void ExtractSubtitles(string mp4_video_file);
    static void extract_frames(const std::string& input_file, const std::string& output_prefix);
};