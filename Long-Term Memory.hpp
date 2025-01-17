#pragma once

/*
    Copyright(C) 2025 Tyler Crockett | Macdaddy4sure.com

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

class _LongTermMemory
{
public:
    //static void LongTermMemoryReadingSearchTermDateElapsed(string search, int year, int month, int day, int hour, int minutes, int seconds, int milliseconds);
    //static void LongTermMemoryReadingDate(string search, int year, int month, int date, int hour, int minutes, int seconds, int milliseconds);
    //static void LongTermMemoryReadingDate(int year, int month, int date, int hour, int minutes, int seconds, int milliseconds);
    static void LongTermMemoryReadingRight(string search);
    static void LongTermMemoryReadingLeft(string search);
    //static void LongTermMemoryText(string search, int year, int month, int date, int hour, int minutes, int seconds, int milliseconds);
    static void LongTermMemoryDialogueSearch(string search);
    //static void LongTermMemoryTextAnalysisSearchElapsed(string search, int year, int month, int day, int hour, int minutes, int seconds, int milliseconds);
    //static void LongTermMemoryTextAnalysisSearchDateLeft(string search, int year, int month, int day, int hour, int minutes, int seconds, int milliseconds);
    static void LongTermMemoryTextAnalysisCount(string search);
    static void LongTermMemoryTextAnalysisBoolean(string search);
    static void LongTermMemoryAnalysisText(string search);
    //static void LongTermMemoryRawSearchTermDateElapsed(string search, int origin_year, int origin_month, int origin_day, int origin_hour, int origin_minutes, int origin_seconds, int duration_year, int duration_month, int duration_day, int duration_hour, int duration_minutes, int duration_seconds, int duration_milliseconds);
    static void LongTermMemoryRawElapsed(int origin_year, int origin_month, int origin_day, int origin_hour, int origin_minutes, int origin_seconds, int duration_year, int duration_month, int duration_day, int duration_hour, int duration_minutes, int duration_seconds);
    static void LongTermMemoryRawSearchTermDateLeft(string search, int year, int month, int day, int hour, int minutes, int seconds, int milliseconds);
    static void LongTermMemoryRawSearchReturnAll(string search);
    static void LongTermMemoryRawSearchCount(string search);
    static bool LongTermMemoryRawSearchBoolean(string search);
    static void LongTermMemoryRawSearchTermDateRight(string search, int year, int month, int day, int hour, int minutes, int seconds, int milliseconds);
    static void LongTermMemoryRawSearchBackward(string search);
    static void LongTermMemoryRawSearchRight(string search);
    static void LongTermMemoryRawSearch(string search);
    static void LongTermMemoryRawSearchDate(int year, int month, int day, int hour);
    static void LongTermMemoryRawSearchwithDate(string search, int year, int month, int day, int hour);
    static string LongTermMemoryText(string search);
    static string LongTermMemoryText(string search, int year, int month, int day, int hour);
    static void LongTermMemoryNames();
};

static mutex mtx_lt_vision_path_camera1[1000][2];
static string lt_vision_path_camera1[1000][2];
static mutex mtx_lt_vision_path_camera2[1000][2];
static string lt_vision_path_camera2[1000][2];
//static mutex mtx_lt_longterm_memory[1000][2];
//static string lt_longterm_memory[1000][2];
static mutex mtx_lt_sound_path[1000][2];
static string lt_sound_path[1000][2];
//static mutex mtx_lt_speech_dialogue[1000][2];
//static string lt_speech_dialogue[1000][2];
//static mutex mtx_lt_action1_text[1000][2];
//static string lt_action1_text[1000][2];
//static mutex mtx_lt_action2_text[1000][2];
//static string lt_action2_text[1000][2];
//static mutex mtx_lt_action3_text[1000][2];
//static string lt_action3_text[1000][2];
static mutex mtx_lt_text_identification[1000][2];
static string lt_text_identification[1000][2];
static mutex mtx_lt_reading_text[1000][2];
static string lt_reading_text[1000][2];
static mutex mtx_lt_reading_image[1000][2];
static string lt_reading_image[1000][2];
static mutex mtx_lt_llm_prompt_history[1000][2];
static string lt_llm_prompt_history[1000][2];
static mutex mtx_lt_llm_response[1000][2];
static string lt_llm_response[1000][2];
static mutex mtx_lt_algebra_text[1000][2];
static string lt_algebra_text[1000][2];
static mutex mtx_lt_vision_objects_image_path_camera1[1000][2];
static string lt_vision_objects_image_path_camera1[1000][2];
static mutex mtx_lt_vision_objects_image_path_camera2[1000][2];
static string lt_vision_objects_image_path_camera2[1000][2];
static mutex mtx_lt_vision_actions_image_path_camera1[1000][2];
static string lt_vision_actions_image_path_camera1[1000][2];
static mutex mtx_lt_vision_actions_image_path_camera2[1000][2];
static string lt_vision_actions_image_path_camera2[1000][2];
static mutex mtx_lt_vision_objects_text_camera1[1000][2];
static string lt_vision_objects_text_camera1[1000][2];
static mutex mtx_lt_vision_objects_text_camera2[1000][2];
static string lt_vision_objects_text_camera2[1000][2];
static mutex mtx_lt_vision_analysis_text_camera1[1000][2];
static string lt_vision_analysis_text_camera1[1000][2];
static mutex mtx_lt_vision_analysis_text_camera2[1000][2];
static string lt_vision_analysis_text_camera2[1000][2];
static mutex mtx_lt_typing_text[1000][2];
static string lt_typing_text[1000][2];
//static mutex mtx_lt_Reference_pos_gps_north[1000][2];
//static string lt_Reference_pos_gps_north[1000][2];
//static mutex mtx_lt_Reference_pos_gps_west[1000][2];
//static string lt_Reference_pos_gps_west[1000][2];
//static mutex mtx_lt_Reference_pos_gps_elevation[1000][2];
//static string lt_Reference_pos_gps_elevation[1000][2];
//static mutex mtx_lt_Reference_pos_gps_image[1000][2];
//static string lt_Reference_pos_gps_image[1000][2];
//static mutex mtx_lt_pos_gps_north_text[1000][2];
//static string lt_pos_gps_north_text[1000][2];
//static mutex mtx_lt_pos_gps_west_text[1000][2];
//static string lt_pos_gps_west_text[1000][2];
//static mutex mtx_lt_pos_gps_elevation_text[1000][2];
//static string lt_pos_gps_elevation_text[1000][2];
//static mutex mtx_lt_pos_x[1000][2];
//static string lt_pos_x[1000][2];
//static mutex mtx_lt_pos_y[1000][2];
//static string lt_pos_y[1000][2];
//static mutex mtx_lt_pos_z[1000][2];
//static string lt_pos_z[1000][2];
static mutex mtx_lt_wikipedia[1000][3];
static string lt_wikipedia[1000][3];
static mutex mtx_lt_wikisimple[1000][3];
static string lt_wikisimple[1000][3];
static mutex mtx_lt_wikiquote[1000][3];
static string lt_wikiquote[1000][3];
static mutex mtx_lt_wikisource[1000][3];
static string lt_wikisource[1000][3];
static mutex mtx_lt_wikihow[1000][3];
static string lt_wikihow[1000][3];
static mutex mtx_lt_wikibooks[1000][3];
static string lt_wikibooks[1000][3];
static mutex mtx_lt_stackexchange[1000][3];
static string lt_stackexchange[1000][3];
static mutex mtx_lt_simple_text[1000][2];
static string lt_simple_text[1000][2];
static mutex mtx_lt_simple_image[1000][2];
static string lt_simple_image[1000][2];