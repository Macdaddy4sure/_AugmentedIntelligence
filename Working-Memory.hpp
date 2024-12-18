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

class _WorkingMemory
{
public:
    static void WorkingMemory();
    /*static void AddWorkingMemory(string _vision_path_camera1, string _vision_path_camera2, string _sound_path, string _speech_dialogue, string _reading_text, string _action1_text, string _action2_text, string _action3_text, string _vision_objects_image_path, string _vision_actions_image_path, string _vision_object_text, string _vision_analysis_text, string _typing_text, string __Reference_pos_gps_north, string __Reference_pos_gps_west, string __Reference_pos_gps_elevation, string __Reference_pos_gps_image, string _pos_gps_north, string _pos_gps_west, string _pos_gps_elevation, string _pos_x, string _pos_y, string _pos_z, string _simple_text, string _simple_image);*/
    static void wm_vision_path_camera1_funct(string image_location, string image_fps, string image_hash, string image_time);
    static void wm_vision_path_camera2_funct(string image_location, string image_fps, string image_hash, string image_time);
    static void wm_sound_path_funct(string sound_location, string transcription, string sound_time);
    /*static void wm_vision_objects_image_path_camera1_funct(string image_location, string image_hash, string image_time, string object_detection_image, string object_detection_image_hash, string object_detection_image_time, string class1, string class1_x, string class1_width, string class1_y, string class1_height, string class1_score, string class2, string class2_x, string class2_width, string class2_y, string class2_height, string class2_score, string class3, string class3_x, string class3_width, string class3_y, string class3_height, string class3_score, string class4, string class4_x, string class4_width, string class4_y, string class4_height, string class4_score, string class5, string class5_x, string class5_width, string class5_y, string class5_height, string class5_score, string class6, string class6_x, string class6_width, string class6_y, string class6_height, string class6_score, string class7, string class7_x, string class7_width, string class7_y, string class7_height, string class7_score, string class8, string class8_x, string class8_width, string class8_y, string class8_height, string class8_score, string class9, string class9_x, string class9_width, string class9_y, string class9_height, string class9_score, string class10, string class10_x, string class10_width, string class10_y, string class10_height, string class10_score);
    static void wm_vision_objects_image_path_camera2_funct(string image_location, string image_hash, string image_time, string object_detection_image, string object_detection_image_hash, string object_detection_image_time, string class1, string class1_x, string class1_width, string class1_y, string class1_height, string class1_score, string class2, string class2_x, string class2_width, string class2_y, string class2_height, string class2_score, string class3, string class3_x, string class3_width, string class3_y, string class3_height, string class3_score, string class4, string class4_x, string class4_width, string class4_y, string class4_height, string class4_score, string class5, string class5_x, string class5_width, string class5_y, string class5_height, string class5_score, string class6, string class6_x, string class6_width, string class6_y, string class6_height, string class6_score, string class7, string class7_x, string class7_width, string class7_y, string class7_height, string class7_score, string class8, string class8_x, string class8_width, string class8_y, string class8_height, string class8_score, string class9, string class9_x, string class9_width, string class9_y, string class9_height, string class9_score, string class10, string class10_x, string class10_width, string class10_y, string class10_height, string class10_score);*/
    //static void wm_vision_analysis_text_camera1_funct();
    //static void wm_vision_analysis_text_camera2_funct();
    //static void wm_vision_analysis_funct(string image_location, string image_hash, string image_time, string image_analysis, string image_analysis_time);
    //static void wm_reading_text_funct(string image_location, string image_hash, string image_time, string reading_text, string reading_time);
    //static void wm_reading_image_funct(string image_location, string image_hash, string image_time, string reading_text, string reading_time);
    //static void wm_text_identification_funct(string image_location, string image_hash, string image_time, string reading_text, string reading_time);
    static string* SoundStringRecall(string* text, string prev_date, string prev_date2);
    static string* ReadingStringRecall(string* text, string prev_date, string prev_date2);
    static string* MemorySearch(string* text, string prev_date, string prev_date2);
    static string* MemorySearch(string* text);
    static string* MemoryAnalysis(string* text, string prev_date, string prev_date2);
    static void ClearWorkingMemory();
};

static string wm_vision_path_camera1[1000][4];
static mutex mtx_wm_vision_path_camera1[1000][4];
static string wm_vision_path_camera2[1000][4];
static mutex mtx_wm_vision_path_camera2[1000][4];
//static string wm_longterm_memory[1000][2];
//static mutex mtx_wm_longterm_memory[1000][2];
static string wm_sound_path[1000][4];
static mutex mtx_wm_sound_path[1000][4];
static string wm_translate_text[1000][2];
static mutex mtx_wm_translate_text[1000][2];
//static string wm_speech_dialogue[1000][2];
//static mutex mtx_wm_speech_dialogue[1000][2];
static string wm_action1_text[1000][2];
static mutex mtx_wm_action1_text[1000][2];
static string wm_action2_text[1000][2];
static mutex mtx_wm_action2_text[1000][2];
static string wm_action3_text[1000][2];
static mutex mtx_wm_action3_text[1000][2];
static string wm_text_identification[1000][2];
static mutex mtx_wm_text_identification[1000][2];
static string wm_reading_text[1000][3];
static mutex mtx_wm_reading_text[1000][3];
static string wm_reading_image[1000][3];
static mutex mtx_wm_reading_image[1000][3];
static string wm_driving_text[1000][4];
static mutex mtx_wm_driving_text[1000][4];
static string wm_driving_cars_text[1000][10];
static mutex mtx_wm_driving_cars_text[1000][10];
static string wm_driving_cars_text2[1000][10];
static mutex mtx_wm_driving_cars_text2[1000][10];
static string wm_llm_prompt_history[1000][2];
static mutex mtx_wm_llm_prompt_history[1000][2];
static string wm_llm_response[1000][2];
static mutex mtx_wm_llm_response[1000][2];
static string wm_ball[1000][9];
static mutex mtx_wm_ball[1000][9];
static string wm_algebra_text[1000][2];
static mutex mtx_wm_algebra_text[1000][2];
static string wm_vision_objects_image_path_camera1[1000][65];
static mutex mtx_wm_vision_objects_image_path_camera1[1000][65];
static string wm_vision_objects_image_path_camera2[1000][65];
static mutex mtx_wm_vision_objects_image_path_camera2[1000][65];
static string wm_vision_actions_image_path_camera1[1000][2];
static mutex mtx_wm_vision_actions_image_path_camera1[1000][2];
static string wm_vision_actions_image_path_camera2[1000][2];
static mutex mtx_wm_vision_actions_image_path_camera2[1000][2];
static string wm_vision_objects_text_camera1[1000][2];
static mutex mtx_wm_vision_objects_text_camera1[1000][2];
static string wm_vision_objects_text_camera2[1000][2];
static mutex mtx_wm_vision_objects_text_camera2[1000][2];
static string wm_vision_analysis_text_camera1[1000][2];
static mutex mtx_wm_vision_analysis_text_camera1[1000][2];
static string wm_vision_analysis_text_camera2[1000][2];
static mutex mtx_wm_vision_analysis_text_camera2[1000][2];
static string wm_typing_text[1000][2];
static mutex mtx_wm_typing_text[1000][2];
static string wm_Reference_pos_gps_north[1000][2];
static mutex mtx_wm_Reference_pos_gps_north[1000][2];
static string wm_Reference_pos_gps_west[1000][2];
static mutex mtx_wm_Reference_pos_gps_west[1000][2];
static string wm_Reference_pos_gps_elevation[1000][2];
static mutex mtx_wm_Reference_pos_gps_elevation[1000][2];
static string wm_Reference_pos_gps_image[1000][2];
static mutex mtx_wm_Reference_pos_gps_image[1000][2];
static string wm_pos_gps_north_text[1000][2];
static mutex mtx_wm_pos_gps_north_text[1000][2];
static string wm_pos_gps_west_text[1000][2];
static mutex mtx_wm_pos_gps_west_text[1000][2];
static string wm_pos_gps_elevation_text[1000][2];
static mutex mtx_wm_pos_gps_elevation_text[1000][2];
static string wm_pos_x[1000][2];
static mutex mtx_wm_pos_x[1000][2];
static string wm_pos_y[1000][2];
static mutex mtx_wm_pos_y[1000][2];
static string wm_pos_z[1000][2];
static mutex mtx_wm_pos_z[1000][2];
static string wm_wikipedia[1000][3];
static mutex mtx_wm_wikipedia[1000][3];
static string wm_wikisimple[1000][3];
static mutex mtx_wm_wikisimple[1000][3];
static string wm_wikiquote[1000][3];
static mutex mtx_wm_wikiquote[1000][3];
static string wm_wikisource[1000][3];
static mutex mtx_wm_wikisource[1000][3];
static string wm_wikihow[1000][3];
static mutex mtx_wm_wikihow[1000][3];
static string wm_wikibooks[1000][3];
static mutex mtx_wm_wikibooks[1000][3];
static string wm_stackexchange[1000][3];
static mutex mtx_wm_stackexchange[1000][3];
static string wm_fallacy_check_text[1000][3];
static mutex mtx_wm_fallacy_check_text[1000][3];
static string wm_bias_chech_text[1000][3];
static mutex mtx_wm_bias_check_text[1000][3];
static string wm_simple_text[1000][2];
static mutex mtx_wm_simple_text[1000][2];
static string wm_simple_image[1000][2];
static mutex mtx_wm_simple_image[1000][2];

//struct TimeFormat
//{
//    long long years;
//    long long months;
//    long long weeks;
//    long long days;
//    long long hours;
//    long long minutes;
//    long long seconds;
//    long long milliseconds;
//};