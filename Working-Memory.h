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

class _WorkingMemory
{
public:
    static void WorkingMemory();
    static void AddWorkingMemory(string _vision_path_camera1, string _vision_path_camera2, string _sound_path, string _speech_dialogue, string _reading_text, string _action1_text, string _action2_text, string _action3_text, string _vision_objects_image_path, string _vision_actions_image_path, string _vision_object_text, string _vision_analysis_text, string _typing_text, string __Reference_pos_gps_north, string __Reference_pos_gps_west, string __Reference_pos_gps_elevation, string __Reference_pos_gps_image, string _pos_gps_north, string _pos_gps_west, string _pos_gps_elevation, string _pos_x, string _pos_y, string _pos_z, string _simple_text, string _simple_image);
    static string* SoundStringRecall(string text, string prev_date, string prev_date2);
    static string* ReadingStringRecall(string text, string prev_date, string prev_date2);
    static string* MemorySearch(string text, string prev_date, string prev_date2);
    static string* MemorySearch(string text);
    static string* MemoryAnalysis(string text, string prev_date, string prev_date2);
    static void ClearWorkingMemory();
};

static string wm_vision_path_camera1[1000][2];
static string wm_vision_path_camera2[1000][2];
static string wm_longterm_memory[1000][2];
static string wm_sound_path[1000][2];
static string wm_speech_dialogue[1000][2];
static string wm_action1_text[1000][2];
static string wm_action2_text[1000][2];
static string wm_action3_text[1000][2];
static string wm_text_identification[1000][2];
static string wm_reading_text[1000][2];
static string wm_reading_image[1000][2];
static string wm_algebra_text[1000][2];
static string wm_vision_objects_image_path[1000][2];
static string wm_vision_actions_image_path[1000][2];
static string wm_vision_objects_text[1000][2];
static string wm_vision_analysis_text[1000][2];
static string wm_typing_text[1000][2];
static string wm_Reference_pos_gps_north[1000][2];
static string wm_Reference_pos_gps_west[1000][2];
static string wm_Reference_pos_gps_elevation[1000][2];
static string wm_Reference_pos_gps_image[1000][2];
static string wm_pos_gps_north_text[1000][2];
static string wm_pos_gps_west_text[1000][2];
static string wm_pos_gps_elevation_text[1000][2];
static string wm_pos_x[1000][2];
static string wm_pos_y[1000][2];
static string wm_pos_z[1000][2];
static string wm_simple_text[1000][2];
static string wm_simple_image[1000][2];
