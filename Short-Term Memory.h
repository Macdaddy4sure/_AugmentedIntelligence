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

class _ShortTermMemory
{
public:
    static void ShortTermMemory();
    static void stm_vision_path_camera1_funct();
    static void stm_vision_path_camera2_funct();
    static void stm_longterm_memory_funct();
    static void stm_music_memory_lyrics_funct();
    static void stm_music_memory_sound_funct();
    static void stm_sound_path_funct();
    static void stm_speech_dialogue_funct();
    static void stm_reading_text_funct();
    static void stm_action1_text_funct();
    static void stm_action2_text_funct();
    static void stm_action3_text_funct();
    static void stm_vision_objects_image_path_funct();
    static void stm_vision_actions_image_path_funct();
    static void stm_vision_objects_text_funct();
    static void stm_vision_analysis_text_funct();
    static void stm_typing_text_funct();
    static void stm_Reference_pos_gps_north_funct();
    static void stm_Reference_pos_gps_west_funct();
    static void stm_Reference_pos_gps_elevation_funct();
    static void stm_Reference_pos_gps_image_funct();
    static void stm_pos_gps_north_text_funct();
    static void stm_pos_gps_west_text_funct();
    static void stm_pos_gps_elevation_text_funct();
    static void stm_pos_x_funct();
    static void stm_pos_y_funct();
    static void stm_pos_z_funct();
    static void stm_simple_text_funct();
    static void stm_simple_image_funct();
    static void AddShortTermMemory(string _vision_path_camera1, string _vision_path_camera2, string _sound_path, string _speech_dialogue, string _reading_text, string _action1_text, string _action2_text, string _action3_text, string _vision_objects_image_path, string _vision_actions_image_path, string _vision_object_text, string _vision_analysis_text, string _typing_text, string __Reference_pos_gps_north, string __Reference_pos_gps_west, string __Reference_pos_gps_elevation, string __Reference_pos_gps_image, string _pos_gps_north, string _pos_gps_west, string _pos_gps_elevation, string _pos_x, string _pos_y, string _pos_z);
    static void STMReadingStringRecall();
    static void STMSoundStringRecall();
    static void ClearShortTermMemory();
    static void MemorySearch(string text, string prev_date, string prev_date2);
    static void MemorySearch(string text);
    static void MemoryAnalysis();
};

//static string GetShortTermMemory();
//static static void STMWordStatistics();

static string stm_vision_path_camera1[1000][2];                             // 60 frames per second = 5184000 frames per 24 hours
static string stm_vision_path_camera2[1000][2];
static string stm_longterm_memory[1000][2];
static string stm_sound_path[1000][2];                                    // 86400 seconds = 24 hours of recording for stm
static string stm_speech_dialogue[1000][2];                  // 11404800 lines of dialogue per 24 hours
static string stm_action1_text[1000][2];                       // 5184000 lines for 24 hours
static string stm_action2_text[1000][2];                       // 5184000 lines for 24 hours
static string stm_action3_text[1000][2];                       // 5184000 lines for 24 hours
static string stm_reading_text[1000][2];                    // 11404800 lines of dialogue per 24 hours
static string stm_algebra_text[1000][2];
static string stm_reading_image[1000][2];
static string stm_vision_objects_image_path[1000][2];                   // 5184000 lines for 24 hours
static string stm_vision_actions_image_path[1000][2];                   // 5184000 lines for 24 hours
static string stm_vision_objects_text[1000][2];                // 5184000 lines for 24 hours
static string stm_vision_analysis_text[1000][2];               // 5184000 lines for 24 hours
static string stm_typing_text[1000][2];                      // 11404800 lines of dialogue per 24 hours
static string stm_Reference_pos_gps_north[1000][2];
static string stm_Reference_pos_gps_west[1000][2];
static string stm_Reference_pos_gps_elevation[1000][2];
static string stm_Reference_pos_gps_image[1000][2];
static string stm_pos_gps_north_text[1000][2];
static string stm_pos_gps_west_text[1000][2];
static string stm_pos_gps_elevation_text[1000][2];
static string stm_pos_x[1000][2];
static string stm_pos_y[1000][2];
static string stm_pos_z[1000][2];
static string stm_simple_text[1000][2];
static string stm_simple_image[1000][2];