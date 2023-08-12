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

// string completed[x][y]: [x][0] = word, [x][1] = word type, [x][2] = definition, [x][3] = vector
static string completed[100][3];

static string vision_table = "vision";
static string sound_table = "sound";
static string speech_table = "dialogue";
static string reading_table = "reading";
static string action1_table = "actions";
static string action2_table = "actions";
static string action3_table = "actions";
static string vision_objects_image_table = "analysis";
static string vision_actions_image_table = "actions";
static string vision_objects_text_table = "analysis";
static string vision_analysis_text_table = "analysis";
static string typing_text_table = "actions";
static string _Reference_pos_gps_north = "actions";
static string _Reference_pos_gps_west = "actions";
static string _Reference_pos_gps_elevation = "actions";
static string _Reference_pos_gps_image = "actions";
static string pos_gps_north = "actions";
static string pos_gps_west = "actions";
static string pos_gps_elevation = "actions";
static string pos_x = "actions";
static string pos_y = "actions";
static string pos_z = "actions";

// To do list
// _toDolist[0][0] = list item
// _toDolist[0][1] = created time
// _toDolist[0][2] = comments
static string _toDolist[100][3];