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
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reference.h"
#include "Variables.h"
#include "Settings.h"
#include "Time.h"
#include "Utilities.h"

using namespace std;

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

// This function writes new data to short term memory
//  Invokation: This function will be invoked as its own thread as all data members are updated
//  Potential problem: The CPU might write to short term memory too quickly. Functions that use short term memory might fail to read STM effectivelyas the data members are moved arround too fast
//      To negate this, functions that use STM can execute as fast as they want, however, additions and modifications to STM must wait a small determined time
void _WorkingMemory::AddWorkingMemory(string _vision_path_camera1, string _vision_path_camera2, string _sound_path, string _speech_dialogue, string _reading_text, string _action1_text, string _action2_text, string _action3_text, string _vision_objects_image_path, string _vision_actions_image_path, string _vision_object_text, string _vision_analysis_text, string _typing_text, string __Reference_pos_gps_north, string __Reference_pos_gps_west, string __Reference_pos_gps_elevation, string __Reference_pos_gps_image, string _pos_gps_north, string _pos_gps_west, string _pos_gps_elevation, string _pos_x, string _pos_y, string _pos_z)
{
    TimeFormat current_time;
    int wait_milliseconds = 100;
    bool boolean = false;
    string current_date;
    string temp;
    string temp_date;
    //bool visual_memory = false;
    //bool vision_objects = false;
    //bool vision_actions = false;
    //bool vision_objects_text_bool = false;
    //bool vision_analysis_text_bool = false;
    //bool sound = false;
    //bool speech = false;
    //bool reading = false;
    //bool action1 = false;
    //bool action2 = false;
    //bool action3 = false;
    //bool typing = false;
    //bool ref_gps_north = false;
    //bool ref_gps_west = false;
    //bool ref_gps_elevation = false;
    //bool ref_gps_image = false;
    //bool pos_gps_north = false;
    //bool pos_gps_west = false;
    //bool pos_gps_elevation = false;
    //bool pos_x_bool = false;
    //bool pos_y_bool = false;
    //bool pos_z_bool = false;

    ostringstream oss;
    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    current_date = oss.str();

    current_time.years = _Time::GetYears(current_date);
    current_time.months = _Time::GetMonths(current_date);
    current_time.days = _Time::GetDays(current_date);
    current_time.hours = _Time::GetHours(current_date);
    current_time.minutes = _Time::GetMinutes(current_date);
    current_time.seconds = _Time::GetSeconds(current_date);

    //this_thread::sleep_for(chrono::milliseconds(wait_milliseconds));

    if (_vision_path_camera1 != "")
    {
        // Find the first empty position in short term memory
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_path_camera1[x][0] == "")
            {
                wm_vision_path_camera1[x][0] = _vision_path_camera1;
                wm_vision_path_camera1[x][1] = current_time.years + "-";
                wm_vision_path_camera1[x][1] += current_time.months + "-";
                wm_vision_path_camera1[x][1] += current_time.days + ":";
                wm_vision_path_camera1[x][1] += current_time.hours + "-";
                wm_vision_path_camera1[x][1] += current_time.minutes + "-";
                wm_vision_path_camera1[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        // The wm item is full, delete the oldest and move everything up
        if (boolean)
        {
            wm_vision_path_camera1[0][0].clear();
            wm_vision_path_camera1[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_vision_path_camera1[y][0] = wm_vision_path_camera1[y + 1][0];
                wm_vision_path_camera1[y][1] = wm_vision_path_camera1[y + 1][1];
            }

            wm_vision_path_camera1[1000][0] = _vision_path_camera1;
            wm_vision_path_camera1[1000][1] = current_time.years + "-";
            wm_vision_path_camera1[1000][1] += current_time.months + "-";
            wm_vision_path_camera1[1000][1] += current_time.days + ":";
            wm_vision_path_camera1[1000][1] += current_time.hours + "-";
            wm_vision_path_camera1[1000][1] += current_time.minutes + "-";
            wm_vision_path_camera1[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_vision_path_camera2 != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_path_camera2[x][0] == "")
            {
                wm_vision_path_camera2[x][0] = _vision_path_camera2;
                wm_vision_path_camera2[x][1] = current_time.years + "-";
                wm_vision_path_camera2[x][1] += current_time.months + "-";
                wm_vision_path_camera2[x][1] += current_time.days + ":";
                wm_vision_path_camera2[x][1] += current_time.hours + "-";
                wm_vision_path_camera2[x][1] += current_time.minutes + "-";
                wm_vision_path_camera2[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        // The wm item is full, delete the oldest and move everything up
        if (boolean)
        {
            wm_vision_path_camera2[0][0].clear();
            wm_vision_path_camera2[0][1].clear();

            for (int y = 0; y <= 1000; y++)
            {
                wm_vision_path_camera2[y][0] = wm_vision_path_camera2[y + 1][0];
                wm_vision_path_camera2[y][1] = wm_vision_path_camera2[y + 1][1];
            }

            wm_vision_path_camera2[1000][0] = _vision_path_camera1;
            wm_vision_path_camera2[1000][1] = current_time.years + "-";
            wm_vision_path_camera2[1000][1] += current_time.months + "-";
            wm_vision_path_camera2[1000][1] += current_time.days + ":";
            wm_vision_path_camera2[1000][1] += current_time.hours + "-";
            wm_vision_path_camera2[1000][1] += current_time.minutes + "-";
            wm_vision_path_camera2[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_sound_path != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_sound_path[x][0] == "")
            {
                wm_sound_path[x][0] = _sound_path;
                wm_sound_path[x][1] = current_time.years + "-";
                wm_sound_path[x][1] += current_time.months + "-";
                wm_sound_path[x][1] += current_time.days + ":";
                wm_sound_path[x][1] += current_time.hours + "-";
                wm_sound_path[x][1] += current_time.minutes + "-";
                wm_sound_path[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        // The wm item is full, delete the oldest and move everything up
        if (boolean)
        {
            wm_sound_path[0][0].clear();
            wm_sound_path[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_sound_path[y][0] = wm_sound_path[y + 1][0];
                wm_sound_path[y][1] = wm_sound_path[y + 1][1];
            }

            wm_sound_path[1000][0] = _sound_path;
            wm_sound_path[1000][1] = current_time.years + "-";
            wm_sound_path[1000][1] += current_time.months + "-";
            wm_sound_path[1000][1] += current_time.days + ":";
            wm_sound_path[1000][1] += current_time.hours + "-";
            wm_sound_path[1000][1] += current_time.minutes + "-";
            wm_sound_path[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_speech_dialogue != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_speech_dialogue[x][0] == "")
            {
                wm_speech_dialogue[x][0] = _speech_dialogue;
                wm_speech_dialogue[x][1] = current_time.years + "-";
                wm_speech_dialogue[x][1] += current_time.months + "-";
                wm_speech_dialogue[x][1] += current_time.days + ":";
                wm_speech_dialogue[x][1] += current_time.hours + "-";
                wm_speech_dialogue[x][1] += current_time.minutes + "-";
                wm_speech_dialogue[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_speech_dialogue[0][0].clear();
            wm_speech_dialogue[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_speech_dialogue[y][0] = wm_speech_dialogue[y + 1][0];
                wm_speech_dialogue[y][1] = wm_speech_dialogue[y + 1][1];
            }

            wm_speech_dialogue[1000][0] = _speech_dialogue;
            wm_speech_dialogue[1000][1] = current_time.years + "-";
            wm_speech_dialogue[1000][1] += current_time.months + "-";
            wm_speech_dialogue[1000][1] += current_time.days + ":";
            wm_speech_dialogue[1000][1] += current_time.hours + "-";
            wm_speech_dialogue[1000][1] += current_time.minutes + "-";
            wm_speech_dialogue[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_reading_text != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_reading_text[x][0] == "")
            {
                wm_reading_text[x][0] = _reading_text;
                wm_reading_text[x][1] = current_time.years + "-";
                wm_reading_text[x][1] += current_time.months + "-";
                wm_reading_text[x][1] += current_time.days + ":";
                wm_reading_text[x][1] += current_time.hours + "-";
                wm_reading_text[x][1] += current_time.minutes + "-";
                wm_reading_text[x][1] += current_time.seconds;
                boolean = false;
            }
        }

        if (boolean)
        {
            wm_reading_text[0][0].clear();
            wm_reading_text[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_reading_text[y][0] = wm_reading_text[y + 1][0];
                wm_reading_text[y][1] = wm_reading_text[y + 1][1];
            }

            wm_reading_text[1000][0] = _reading_text;
            wm_reading_text[1000][1] = current_time.years + "-";
            wm_reading_text[1000][1] += current_time.months + "-";
            wm_reading_text[1000][1] += current_time.days + ":";
            wm_reading_text[1000][1] += current_time.hours + "-";
            wm_reading_text[1000][1] += current_time.minutes + "-";
            wm_reading_text[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_action1_text != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_action1_text[x][0] == "")
            {
                wm_action1_text[x][0] = _action1_text;
                wm_action1_text[x][1] = current_time.years + "-";
                wm_action1_text[x][1] += current_time.months + "-";
                wm_action1_text[x][1] += current_time.days + ":";
                wm_action1_text[x][1] += current_time.hours + "-";
                wm_action1_text[x][1] += current_time.minutes + "-";
                wm_action1_text[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_action1_text[0][0].clear();
            wm_action1_text[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_action1_text[y][0] = wm_action1_text[y + 1][0];
                wm_action1_text[y][1] = wm_action1_text[y + 1][1];
            }

            wm_action1_text[1000][0] = _action1_text;
            wm_action1_text[1000][1] = current_time.years + "-";
            wm_action1_text[1000][1] += current_time.months + "-";
            wm_action1_text[1000][1] += current_time.days + ":";
            wm_action1_text[1000][1] += current_time.hours + "-";
            wm_action1_text[1000][1] += current_time.minutes + "-";
            wm_action1_text[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_action2_text != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_action2_text[x][0] == "")
            {
                wm_action2_text[x][0] = _action2_text;
                wm_action2_text[x][1] = current_time.years + "-";
                wm_action2_text[x][1] += current_time.months + "-";
                wm_action2_text[x][1] += current_time.days + ":";
                wm_action2_text[x][1] += current_time.hours + "-";
                wm_action2_text[x][1] += current_time.minutes + "-";
                wm_action2_text[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_action2_text[0][0].clear();
            wm_action2_text[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_action2_text[y][0] = wm_action2_text[y + 1][0];
                wm_action2_text[y][1] = wm_action2_text[y + 1][1];
            }

            wm_action2_text[1000][0] = _action2_text;
            wm_action2_text[1000][1] = current_time.years + "-";
            wm_action2_text[1000][1] += current_time.months + "-";
            wm_action2_text[1000][1] += current_time.days + ":";
            wm_action2_text[1000][1] += current_time.hours + "-";
            wm_action2_text[1000][1] += current_time.minutes + "-";
            wm_action2_text[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_action3_text != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_action3_text[x][0] == "")
            {
                wm_action3_text[x][0] = _action3_text;
                wm_action3_text[x][1] = current_time.years + "-";
                wm_action3_text[x][1] += current_time.months + "-";
                wm_action3_text[x][1] += current_time.days + ":";
                wm_action3_text[x][1] += current_time.hours + "-";
                wm_action3_text[x][1] += current_time.minutes + "-";
                wm_action3_text[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_action3_text[0][0].clear();
            wm_action3_text[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_action3_text[y][0] = wm_action3_text[y + 1][0];
                wm_action3_text[y][1] = wm_action3_text[y + 1][1];
            }

            wm_action3_text[1000][0] = _action3_text;
            wm_action3_text[1000][1] = current_time.years + "-";
            wm_action3_text[1000][1] += current_time.months + "-";
            wm_action3_text[1000][1] += current_time.days + ":";
            wm_action3_text[1000][1] += current_time.hours + "-";
            wm_action3_text[1000][1] += current_time.minutes + "-";
            wm_action3_text[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_vision_objects_image_path != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_objects_image_path[x][0] == "")
            {
                wm_vision_objects_image_path[x][0] = _vision_objects_image_path;
                wm_vision_objects_image_path[x][1] = current_time.years + "-";
                wm_vision_objects_image_path[x][1] += current_time.months + "-";
                wm_vision_objects_image_path[x][1] += current_time.days + ":";
                wm_vision_objects_image_path[x][1] += current_time.hours + "-";
                wm_vision_objects_image_path[x][1] += current_time.minutes + "-";
                wm_vision_objects_image_path[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_vision_objects_image_path[0][0].clear();
            wm_vision_objects_image_path[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_vision_objects_image_path[y][0] = wm_vision_objects_image_path[y + 1][0];
                wm_vision_objects_image_path[y][1] = wm_vision_objects_image_path[y + 1][1];
            }

            wm_vision_objects_image_path[1000][0] = _vision_objects_image_path;
            wm_vision_objects_image_path[1000][1] = current_time.years + "-";
            wm_vision_objects_image_path[1000][1] += current_time.months + "-";
            wm_vision_objects_image_path[1000][1] += current_time.days + ":";
            wm_vision_objects_image_path[1000][1] += current_time.hours + "-";
            wm_vision_objects_image_path[1000][1] += current_time.minutes + "-";
            wm_vision_objects_image_path[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_vision_actions_image_path != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_actions_image_path[x][0] == "")
            {
                wm_vision_actions_image_path[x][0] = _vision_actions_image_path;
                wm_vision_actions_image_path[x][1] = current_time.years + "-";
                wm_vision_actions_image_path[x][1] += current_time.months + "-";
                wm_vision_actions_image_path[x][1] += current_time.days + ":";
                wm_vision_actions_image_path[x][1] += current_time.hours + "-";
                wm_vision_actions_image_path[x][1] += current_time.minutes + "-";
                wm_vision_actions_image_path[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_vision_actions_image_path[0][0].clear();
            wm_vision_actions_image_path[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_vision_actions_image_path[y][0] = wm_vision_actions_image_path[y + 1][0];
                wm_vision_actions_image_path[y][1] = wm_vision_actions_image_path[y + 1][1];
            }

            wm_vision_actions_image_path[1000][0] = _vision_actions_image_path;
            wm_vision_actions_image_path[1000][1] = current_time.years + "-";
            wm_vision_actions_image_path[1000][1] += current_time.months + "-";
            wm_vision_actions_image_path[1000][1] += current_time.days + ":";
            wm_vision_actions_image_path[1000][1] += current_time.hours + "-";
            wm_vision_actions_image_path[1000][1] += current_time.minutes + "-";
            wm_vision_actions_image_path[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_vision_object_text != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_actions_image_path[x][0] == "")
            {
                wm_vision_objects_text[x][0] = _vision_object_text;
                wm_vision_objects_text[x][1] = current_time.years + "-";
                wm_vision_objects_text[x][1] += current_time.months + "-";
                wm_vision_objects_text[x][1] += current_time.days + ":";
                wm_vision_objects_text[x][1] += current_time.hours + "-";
                wm_vision_objects_text[x][1] += current_time.minutes + "-";
                wm_vision_objects_text[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_vision_objects_text[0][0].clear();
            wm_vision_objects_text[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_vision_objects_text[y][0] = wm_vision_objects_text[y + 1][0];
                wm_vision_objects_text[y][1] = wm_vision_objects_text[y + 1][1];
            }

            wm_vision_objects_text[1000][0] = _vision_object_text;
            wm_vision_objects_text[1000][1] = current_time.years + "-";
            wm_vision_objects_text[1000][1] += current_time.months + "-";
            wm_vision_objects_text[1000][1] += current_time.days + ":";
            wm_vision_objects_text[1000][1] += current_time.hours + "-";
            wm_vision_objects_text[1000][1] += current_time.minutes + "-";
            wm_vision_objects_text[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_vision_analysis_text != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_vision_analysis_text[x][0] == "")
            {
                wm_vision_analysis_text[x][0] = _vision_analysis_text;
                wm_vision_analysis_text[x][1] = current_time.years + "-";
                wm_vision_analysis_text[x][1] += current_time.months + "-";
                wm_vision_analysis_text[x][1] += current_time.days + ":";
                wm_vision_analysis_text[x][1] += current_time.hours + "-";
                wm_vision_analysis_text[x][1] += current_time.minutes + "-";
                wm_vision_analysis_text[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_vision_analysis_text[0][0].clear();
            wm_vision_analysis_text[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_vision_analysis_text[y][0] = wm_vision_analysis_text[y + 1][0];
                wm_vision_analysis_text[y][1] = wm_vision_analysis_text[y + 1][1];
            }

            wm_vision_analysis_text[1000][0] = _vision_analysis_text;
            wm_vision_analysis_text[1000][1] = current_time.years + "-";
            wm_vision_analysis_text[1000][1] += current_time.months + "-";
            wm_vision_analysis_text[1000][1] += current_time.days + ":";
            wm_vision_analysis_text[1000][1] += current_time.hours + "-";
            wm_vision_analysis_text[1000][1] += current_time.minutes + "-";
            wm_vision_analysis_text[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_typing_text != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_typing_text[x][0] == "")
            {
                wm_typing_text[x][0] = _typing_text;
                wm_typing_text[x][1] = current_time.years + "-";
                wm_typing_text[x][1] += current_time.months + "-";
                wm_typing_text[x][1] += current_time.days + ":";
                wm_typing_text[x][1] += current_time.hours + "-";
                wm_typing_text[x][1] += current_time.minutes + "-";
                wm_typing_text[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_typing_text[0][0].clear();
            wm_typing_text[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_typing_text[y][0] = wm_typing_text[y + 1][0];
                wm_typing_text[y][1] = wm_typing_text[y + 1][1];
            }

            wm_typing_text[1000][0] = _typing_text;
            wm_typing_text[1000][1] = current_time.years + "-";
            wm_typing_text[1000][1] += current_time.months + "-";
            wm_typing_text[1000][1] += current_time.days + ":";
            wm_typing_text[1000][1] += current_time.hours + "-";
            wm_typing_text[1000][1] += current_time.minutes + "-";
            wm_typing_text[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (__Reference_pos_gps_north != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_Reference_pos_gps_north[x][0] == "")
            {
                wm_Reference_pos_gps_north[x][0] = __Reference_pos_gps_north;
                wm_Reference_pos_gps_north[x][1] = current_time.years + "-";
                wm_Reference_pos_gps_north[x][1] += current_time.months + "-";
                wm_Reference_pos_gps_north[x][1] += current_time.days + ":";
                wm_Reference_pos_gps_north[x][1] += current_time.hours + "-";
                wm_Reference_pos_gps_north[x][1] += current_time.minutes + "-";
                wm_Reference_pos_gps_north[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_Reference_pos_gps_north[0][0].clear();
            wm_Reference_pos_gps_north[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_Reference_pos_gps_north[y][0] = wm_Reference_pos_gps_north[y + 1][0];
                wm_Reference_pos_gps_north[y][1] = wm_Reference_pos_gps_north[y + 1][1];
            }

            wm_Reference_pos_gps_north[1000][0] = __Reference_pos_gps_north;
            wm_Reference_pos_gps_north[1000][1] = current_time.years + "-";
            wm_Reference_pos_gps_north[1000][1] += current_time.months + "-";
            wm_Reference_pos_gps_north[1000][1] += current_time.days + ":";
            wm_Reference_pos_gps_north[1000][1] += current_time.hours + "-";
            wm_Reference_pos_gps_north[1000][1] += current_time.minutes + "-";
            wm_Reference_pos_gps_north[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (__Reference_pos_gps_west != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_Reference_pos_gps_west[x][0] == "")
            {
                wm_Reference_pos_gps_west[x][0] = __Reference_pos_gps_west;
                wm_Reference_pos_gps_west[x][1] = current_time.years + "-";
                wm_Reference_pos_gps_west[x][1] += current_time.months + "-";
                wm_Reference_pos_gps_west[x][1] += current_time.days + ":";
                wm_Reference_pos_gps_west[x][1] += current_time.hours + "-";
                wm_Reference_pos_gps_west[x][1] += current_time.minutes + "-";
                wm_Reference_pos_gps_west[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_Reference_pos_gps_west[0][0].clear();
            wm_Reference_pos_gps_west[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_Reference_pos_gps_west[y][0] = wm_Reference_pos_gps_west[y + 1][0];
                wm_Reference_pos_gps_west[y][1] = wm_Reference_pos_gps_west[y + 1][1];
            }

            wm_Reference_pos_gps_west[1000][0] = __Reference_pos_gps_west;
            wm_Reference_pos_gps_west[1000][1] = current_time.years + "-";
            wm_Reference_pos_gps_west[1000][1] += current_time.months + "-";
            wm_Reference_pos_gps_west[1000][1] += current_time.days + ":";
            wm_Reference_pos_gps_west[1000][1] += current_time.hours + "-";
            wm_Reference_pos_gps_west[1000][1] += current_time.minutes + "-";
            wm_Reference_pos_gps_west[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (__Reference_pos_gps_elevation != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_Reference_pos_gps_elevation[x][0] == "")
            {
                wm_Reference_pos_gps_elevation[x][0] = __Reference_pos_gps_elevation;
                wm_Reference_pos_gps_elevation[x][1] = current_time.years + "-";
                wm_Reference_pos_gps_elevation[x][1] += current_time.months + "-";
                wm_Reference_pos_gps_elevation[x][1] += current_time.days + ":";
                wm_Reference_pos_gps_elevation[x][1] += current_time.hours + "-";
                wm_Reference_pos_gps_elevation[x][1] += current_time.minutes + "-";
                wm_Reference_pos_gps_elevation[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_Reference_pos_gps_elevation[0][0].clear();
            wm_Reference_pos_gps_elevation[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_Reference_pos_gps_elevation[y][0] = wm_Reference_pos_gps_elevation[y + 1][0];
                wm_Reference_pos_gps_elevation[y][1] = wm_Reference_pos_gps_elevation[y + 1][1];
            }

            wm_Reference_pos_gps_elevation[1000][0] = __Reference_pos_gps_elevation;
            wm_Reference_pos_gps_elevation[1000][1] = current_time.years + "-";
            wm_Reference_pos_gps_elevation[1000][1] += current_time.months + "-";
            wm_Reference_pos_gps_elevation[1000][1] += current_time.days + ":";
            wm_Reference_pos_gps_elevation[1000][1] += current_time.hours + "-";
            wm_Reference_pos_gps_elevation[1000][1] += current_time.minutes + "-";
            wm_Reference_pos_gps_elevation[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (__Reference_pos_gps_image != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_Reference_pos_gps_image[x][0] == "")
            {
                wm_Reference_pos_gps_image[x][0] = __Reference_pos_gps_image;
                wm_Reference_pos_gps_image[x][1] = current_time.years + "-";
                wm_Reference_pos_gps_image[x][1] += current_time.months + "-";
                wm_Reference_pos_gps_image[x][1] += current_time.days + ":";
                wm_Reference_pos_gps_image[x][1] += current_time.hours + "-";
                wm_Reference_pos_gps_image[x][1] += current_time.minutes + "-";
                wm_Reference_pos_gps_image[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_Reference_pos_gps_image[0][0].clear();
            wm_Reference_pos_gps_image[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_Reference_pos_gps_image[y][0] = wm_Reference_pos_gps_image[y + 1][0];
                wm_Reference_pos_gps_image[y][1] = wm_Reference_pos_gps_image[y + 1][1];
            }

            wm_Reference_pos_gps_image[1000][0] = __Reference_pos_gps_image;
            wm_Reference_pos_gps_image[1000][1] = current_time.years + "-";
            wm_Reference_pos_gps_image[1000][1] += current_time.months + "-";
            wm_Reference_pos_gps_image[1000][1] += current_time.days + ":";
            wm_Reference_pos_gps_image[1000][1] += current_time.hours + "-";
            wm_Reference_pos_gps_image[1000][1] += current_time.minutes + "-";
            wm_Reference_pos_gps_image[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_pos_gps_north != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_pos_gps_north_text[x][0] == "")
            {
                wm_pos_gps_north_text[x][0] = _pos_gps_north;
                wm_pos_gps_north_text[x][1] = current_time.years + "-";
                wm_pos_gps_north_text[x][1] += current_time.months + "-";
                wm_pos_gps_north_text[x][1] += current_time.days + ":";
                wm_pos_gps_north_text[x][1] += current_time.hours + "-";
                wm_pos_gps_north_text[x][1] += current_time.minutes + "-";
                wm_pos_gps_north_text[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_pos_gps_north_text[0][0].clear();
            wm_pos_gps_north_text[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_pos_gps_north_text[y][0] = wm_pos_gps_north_text[y + 1][0];
                wm_pos_gps_north_text[y][1] = wm_pos_gps_north_text[y + 1][1];
            }

            wm_pos_gps_north_text[1000][0] = _pos_gps_north;
            wm_pos_gps_north_text[1000][1] = current_time.years + "-";
            wm_pos_gps_north_text[1000][1] += current_time.months + "-";
            wm_pos_gps_north_text[1000][1] += current_time.days + ":";
            wm_pos_gps_north_text[1000][1] += current_time.hours + "-";
            wm_pos_gps_north_text[1000][1] += current_time.minutes + "-";
            wm_pos_gps_north_text[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_pos_gps_west != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_pos_gps_west_text[x][0] == "")
            {
                wm_pos_gps_west_text[x][0] = _pos_gps_west;
                wm_pos_gps_west_text[x][1] = current_time.years + "-";
                wm_pos_gps_west_text[x][1] += current_time.months + "-";
                wm_pos_gps_west_text[x][1] += current_time.days + ":";
                wm_pos_gps_west_text[x][1] += current_time.hours + "-";
                wm_pos_gps_west_text[x][1] += current_time.minutes + "-";
                wm_pos_gps_west_text[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_pos_gps_west_text[0][0].clear();
            wm_pos_gps_west_text[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_pos_gps_west_text[y][0] = wm_pos_gps_west_text[y + 1][0];
                wm_pos_gps_west_text[y][1] = wm_pos_gps_west_text[y + 1][1];
            }

            wm_pos_gps_west_text[1000][0] = _pos_gps_west;
            wm_pos_gps_west_text[1000][1] = current_time.years + "-";
            wm_pos_gps_west_text[1000][1] += current_time.months + "-";
            wm_pos_gps_west_text[1000][1] += current_time.days + ":";
            wm_pos_gps_west_text[1000][1] += current_time.hours + "-";
            wm_pos_gps_west_text[1000][1] += current_time.minutes + "-";
            wm_pos_gps_west_text[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_pos_gps_elevation != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_pos_gps_elevation_text[x][0] == "")
            {
                wm_pos_gps_elevation_text[x][0] = _pos_gps_elevation;
                wm_pos_gps_elevation_text[x][1] = current_time.years + "-";
                wm_pos_gps_elevation_text[x][1] += current_time.months + "-";
                wm_pos_gps_elevation_text[x][1] += current_time.days + ":";
                wm_pos_gps_elevation_text[x][1] += current_time.hours + "-";
                wm_pos_gps_elevation_text[x][1] += current_time.minutes + "-";
                wm_pos_gps_elevation_text[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_pos_gps_elevation_text[0][0].clear();
            wm_pos_gps_elevation_text[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_pos_gps_elevation_text[y][0] = wm_pos_gps_elevation_text[y + 1][0];
                wm_pos_gps_elevation_text[y][1] = wm_pos_gps_elevation_text[y + 1][1];
            }

            wm_pos_gps_elevation_text[1000][0] = _pos_gps_elevation;
            wm_pos_gps_elevation_text[1000][1] = current_time.years + "-";
            wm_pos_gps_elevation_text[1000][1] += current_time.months + "-";
            wm_pos_gps_elevation_text[1000][1] += current_time.days + ":";
            wm_pos_gps_elevation_text[1000][1] += current_time.hours + "-";
            wm_pos_gps_elevation_text[1000][1] += current_time.minutes + "-";
            wm_pos_gps_elevation_text[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_pos_x != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_pos_x[x][0] == "")
            {
                wm_pos_x[x][0] = _pos_x;
                wm_pos_x[x][1] = current_time.years + "-";
                wm_pos_x[x][1] += current_time.months + "-";
                wm_pos_x[x][1] += current_time.days + ":";
                wm_pos_x[x][1] += current_time.hours + "-";
                wm_pos_x[x][1] += current_time.minutes + "-";
                wm_pos_x[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_pos_x[0][0].clear();
            wm_pos_x[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_pos_x[y][0] = wm_pos_x[y + 1][0];
                wm_pos_x[y][1] = wm_pos_x[y + 1][1];
            }

            wm_pos_x[1000][0] = _pos_x;
            wm_pos_x[1000][1] = current_time.years + "-";
            wm_pos_x[1000][1] += current_time.months + "-";
            wm_pos_x[1000][1] += current_time.days + ":";
            wm_pos_x[1000][1] += current_time.hours + "-";
            wm_pos_x[1000][1] += current_time.minutes + "-";
            wm_pos_x[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_pos_y != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_pos_y[x][0] == "")
            {
                wm_pos_y[x][0] = _pos_y;
                wm_pos_y[x][1] = current_time.years + "-";
                wm_pos_y[x][1] += current_time.months + "-";
                wm_pos_y[x][1] += current_time.days + ":";
                wm_pos_y[x][1] += current_time.hours + "-";
                wm_pos_y[x][1] += current_time.minutes + "-";
                wm_pos_y[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_pos_y[0][0].clear();
            wm_pos_y[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_pos_y[y][0] = wm_pos_y[y + 1][0];
                wm_pos_y[y][1] = wm_pos_y[y + 1][1];
            }

            wm_pos_y[1000][0] = _pos_y;
            wm_pos_y[1000][1] = current_time.years + "-";
            wm_pos_y[1000][1] += current_time.months + "-";
            wm_pos_y[1000][1] += current_time.days + ":";
            wm_pos_y[1000][1] += current_time.hours + "-";
            wm_pos_y[1000][1] += current_time.minutes + "-";
            wm_pos_y[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
    if (_pos_z != "")
    {
        for (int x = 0; x < 1000; x++)
        {
            if (wm_pos_z[x][0] == "")
            {
                wm_pos_z[x][0] = _pos_z;
                wm_pos_z[x][1] = current_time.years + "-";
                wm_pos_z[x][1] += current_time.months + "-";
                wm_pos_z[x][1] += current_time.days + ":";
                wm_pos_z[x][1] += current_time.hours + "-";
                wm_pos_z[x][1] += current_time.minutes + "-";
                wm_pos_z[x][1] += current_time.seconds;
                boolean = true;
            }
        }

        if (boolean)
        {
            wm_pos_z[0][0].clear();
            wm_pos_z[0][1].clear();

            for (int y = 0; y < 1000; y++)
            {
                wm_pos_z[y][0] = wm_pos_z[y + 1][0];
                wm_pos_z[y][1] = wm_pos_z[y + 1][1];
            }

            wm_pos_z[1000][0] = _pos_z;
            wm_pos_z[1000][1] = current_time.years + "-";
            wm_pos_z[1000][1] += current_time.months + "-";
            wm_pos_z[1000][1] += current_time.days + ":";
            wm_pos_z[1000][1] += current_time.hours + "-";
            wm_pos_z[1000][1] += current_time.minutes + "-";
            wm_pos_z[1000][1] += current_time.seconds;
            boolean = false;
        }
    }
}

string* _WorkingMemory::MemoryAnalysis(string text, string prev_date, string prev_date2)
{

}

string* _WorkingMemory::SoundStringRecall(string text, string prev_date, string prev_date2)
{

}

string* _WorkingMemory::ReadingStringRecall(string text, string prev_date, string prev_date2)
{

}

string* _WorkingMemory::MemorySearch(string text, string prev_date, string prev_date2)
{

}

string* _WorkingMemory::MemorySearch(string text)
{

}