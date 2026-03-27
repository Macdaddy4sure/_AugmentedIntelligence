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

class _ShortTermMemory
{
public:
    static void ShortTermMemory();
    static void stm_vision_path_camera1_funct(string image_location, string image_fps, string image_hash, string analysis_text_camera1, string image_time);
    static void stm_vision_path_camera2_funct(string image_location, string image_fps, string image_hash, string analysis_text_camera2, string image_time);
    //static void stm_vsion_objects_camera1_funct(string image_path, string object_detection_image_path, vector<vector<string>> object_detection, string image_time);
    static void stm_longterm_memory_funct();
    static void stm_music_memory_lyrics_funct();
    static void stm_music_memory_sound_funct();
    static void stm_sound_path_funct(string sound_path, string float_string, string transcription, string sound_hash, string sound_time, string sound_detection, string analysis);
    //static void stm_speech_dialogue_funct();
    static void stm_reading_text_funct();
	static void stm_action1_text_funct(); // What action is being performed, e.g., "I am cutting wood" or "I am drilling a hole"
	static void stm_action2_text_funct(); // What action is being performed, e.g., "I am sanding wood" or "I am painting a surface" 
	static void stm_action3_text_funct(); // What action is being performed, e.g., "I am assembling furniture" or "I am varnishing a surface"
    //static void stm_vision_objects_image_path_funct();
    //static void stm_vision_actions_image_path_funct();
    //static void stm_vision_objects_text_funct();
    //static void stm_visual_analysis_text_funct();
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
    static void stm_llm_history_funct();
    /*static void AddShortTermMemory(string _vision_path_camera1, string _vision_path_camera2, string _sound_path, string _speech_dialogue, string _reading_text, string _action1_text, string _action2_text, string _action3_text, string _vision_objects_image_path, string _vision_actions_image_path, string _vision_objects_text_camera1, string _vision_objects_text_camera2, string _visual_analysis_text, string _typing_text, string __Reference_pos_gps_north, string __Reference_pos_gps_west, string __Reference_pos_gps_elevation, string __Reference_pos_gps_image, string _pos_gps_north, string _pos_gps_west, string _pos_gps_elevation, string _pos_x, string _pos_y, string _pos_z);*/
    static void STMReadingStringRecall();
    static void STMSoundStringRecall();
    static void ClearShortTermMemory();
    static void MemorySearch(vector<string> text, string prev_date, string prev_date2);
    static void MemorySearch(vector<string> text);
    static void MemoryAnalysis();
};

//static string GetShortTermMemory();
//static static void STMWordStatistics();
extern vector<vector<string>> stm_vision_path_camera1;
extern vector<vector<string>> stm_vision_path_camera2;
extern vector<vector<string>> stm_sound_path;
extern vector<vector<string>> stm_action1_text;
extern vector<vector<string>> stm_action2_text;
extern vector<vector<string>> stm_action3_text;
extern vector<vector<string>> stm_reading_text;
extern vector<vector<string>> stm_algebra_text;
extern vector<vector<string>> stm_reading_image;
extern vector<vector<string>> stm_typing_text;
extern vector<vector<string>> stm_Reference_pos_gps_north;
extern vector<vector<string>> stm_Reference_pos_gps_west;
extern vector<vector<string>> stm_Reference_pos_gps_elevation;
extern vector<vector<string>> stm_Reference_pos_gps_image;
extern vector<vector<string>> stm_pos_gps_north_text;
extern vector<vector<string>> stm_pos_gps_west_text;
extern vector<vector<string>> stm_pos_gps_elevation_text;
extern vector<vector<string>> stm_pos_x;
extern vector<vector<string>> stm_pos_y;
extern vector<vector<string>> stm_pos_z;
extern vector<vector<string>> stm_simple_text;
extern vector<vector<string>> stm_simple_image;

// Mutex for Short-Term Memory
static mutex stm;