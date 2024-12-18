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
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Reference.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Time.hpp"
#include "Utilities.hpp"

using namespace std;

void _WorkingMemory::WorkingMemory()
{
    for (;;)
    {
        //_WorkingMemory::AddWorkingMemory();
    }
}

void _WorkingMemory::wm_vision_path_camera1_funct(string image_location, string image_fps, string image_hash, string image_time)
{
    for (int x = 0; x < 1000; x++)
    {
        if (wm_vision_path_camera1[x][0].empty())
        {
            lock_guard<mutex> lock(mtx_wm_vision_path_camera1[x][0]);
            lock_guard<mutex> lock1(mtx_wm_vision_path_camera1[x][1]);
            lock_guard<mutex> lock2(mtx_wm_vision_path_camera1[x][2]);
            lock_guard<mutex> lock3(mtx_wm_vision_path_camera1[x][3]);
            wm_vision_path_camera1[x][0] = image_location;
            wm_vision_path_camera1[x][1] = image_fps;
            wm_vision_path_camera1[x][2] = image_hash;
            wm_vision_path_camera1[x][3] = image_time;
            break;
        }
        if (!wm_vision_path_camera1[x][0].empty() && x == 999)
        {
            for (int y = 0; y < 999; y++)
            {
                lock_guard<mutex> lock(mtx_wm_vision_path_camera1[y][0]);
                lock_guard<mutex> lock1(mtx_wm_vision_path_camera1[y][1]);
                lock_guard<mutex> lock2(mtx_wm_vision_path_camera1[y][2]);
                lock_guard<mutex> lock3(mtx_wm_vision_path_camera1[y][3]);
                lock_guard<mutex> lock4(mtx_wm_vision_path_camera1[y + 1][0]);
                lock_guard<mutex> lock5(mtx_wm_vision_path_camera1[y + 1][1]);
                lock_guard<mutex> lock6(mtx_wm_vision_path_camera1[y + 1][2]);
                lock_guard<mutex> lock7(mtx_wm_vision_path_camera1[y + 1][3]);
                wm_vision_path_camera1[y][0] = wm_vision_path_camera1[y + 1][0];
                wm_vision_path_camera1[y][1] = wm_vision_path_camera1[y + 1][1];
                wm_vision_path_camera1[y][2] = wm_vision_path_camera1[y + 1][2];
                wm_vision_path_camera1[y][3] = wm_vision_path_camera1[y + 1][3];

            }
            lock_guard<mutex> lock(mtx_wm_vision_path_camera1[999][0]);
            lock_guard<mutex> lock1(mtx_wm_vision_path_camera1[999][1]);
            lock_guard<mutex> lock2(mtx_wm_vision_path_camera1[999][2]);
            lock_guard<mutex> lock3(mtx_wm_vision_path_camera1[999][3]);
            wm_vision_path_camera1[999][0] = image_location;
            wm_vision_path_camera1[999][1] = image_fps;
            wm_vision_path_camera1[999][2] = image_hash;
            wm_vision_path_camera1[999][3] = image_time;
            break;
        }
    }
}

void _WorkingMemory::wm_vision_path_camera2_funct(string image_location, string image_fps, string image_hash, string image_time)
{
    for (int x = 0; x < 1000; x++)
    {
        if (wm_vision_path_camera2[x][0].empty())
        {
            lock_guard<mutex> lock(mtx_wm_vision_path_camera2[x][0]);
            lock_guard<mutex> lock1(mtx_wm_vision_path_camera2[x][1]);
            lock_guard<mutex> lock2(mtx_wm_vision_path_camera2[x][2]);
            lock_guard<mutex> lock3(mtx_wm_vision_path_camera2[x][3]);
            wm_vision_path_camera2[x][0] = image_location;
            wm_vision_path_camera2[x][0] = image_fps;
            wm_vision_path_camera2[x][0] = image_hash;
            wm_vision_path_camera2[x][1] = image_time;
            break;
        }
        if (!wm_vision_path_camera2[x][0].empty() && x == 999)
        {
            for (int y = 0; y < 999; y++)
            {
                lock_guard<mutex> lock(mtx_wm_vision_path_camera2[y][0]);
                lock_guard<mutex> lock1(mtx_wm_vision_path_camera2[y][1]);
                lock_guard<mutex> lock2(mtx_wm_vision_path_camera2[y][2]);
                lock_guard<mutex> lock3(mtx_wm_vision_path_camera2[y][3]);
                lock_guard<mutex> lock4(mtx_wm_vision_path_camera2[y + 1][0]);
                lock_guard<mutex> lock5(mtx_wm_vision_path_camera2[y + 1][1]);
                lock_guard<mutex> lock6(mtx_wm_vision_path_camera2[y + 1][2]);
                lock_guard<mutex> lock7(mtx_wm_vision_path_camera2[y + 1][3]);
                wm_vision_path_camera2[y][0] = wm_vision_path_camera2[y + 1][0];
                wm_vision_path_camera2[y][1] = wm_vision_path_camera2[y + 1][1];
                wm_vision_path_camera2[y][2] = wm_vision_path_camera2[y + 1][2];
                wm_vision_path_camera2[y][3] = wm_vision_path_camera2[y + 1][3];
            }
            lock_guard<mutex> lock(mtx_wm_vision_path_camera2[999][0]);
            lock_guard<mutex> lock1(mtx_wm_vision_path_camera2[999][1]);
            lock_guard<mutex> lock2(mtx_wm_vision_path_camera2[999][2]);
            lock_guard<mutex> lock3(mtx_wm_vision_path_camera2[999][3]);
            wm_vision_path_camera2[999][0] = image_location;
            wm_vision_path_camera2[999][1] = image_fps;
            wm_vision_path_camera2[999][1] = image_hash;
            wm_vision_path_camera2[999][2] = image_time;
            break;
        }
    }
}

void _WorkingMemory::wm_sound_path_funct(string sound_location, string transcription, string sound_time)
{
    for (int x = 0; x < 1000; x++)
    {
        if (wm_sound_path[x][0].empty())
        {
            lock_guard<mutex> lock(mtx_wm_sound_path[x][0]);
            lock_guard<mutex> lock1(mtx_wm_sound_path[x][1]);
            lock_guard<mutex> lock2(mtx_wm_sound_path[x][2]);
            wm_sound_path[x][0] = sound_location;
            wm_sound_path[x][1] = transcription;
            wm_sound_path[x][2] = sound_time;
            break;
        }
        if (!wm_sound_path[x][0].empty() && x == 999)
        {
            for (int y = 0; y < 999; y++)
            {
                lock_guard<mutex> lock(mtx_wm_sound_path[y][0]);
                lock_guard<mutex> lock1(mtx_wm_sound_path[y][1]);
                lock_guard<mutex> lock2(mtx_wm_sound_path[y][2]);
                lock_guard<mutex> lock3(mtx_wm_sound_path[y + 1][0]);
                lock_guard<mutex> lock4(mtx_wm_sound_path[y + 1][1]);
                lock_guard<mutex> lock5(mtx_wm_sound_path[y + 1][2]);
                wm_sound_path[y][0] = wm_sound_path[y + 1][0];
                wm_sound_path[y][1] = wm_sound_path[y + 1][1];
                wm_sound_path[y][2] = wm_sound_path[y + 1][2];
            }
            lock_guard<mutex> lock(mtx_wm_sound_path[999][0]);
            lock_guard<mutex> lock1(mtx_wm_sound_path[999][1]);
            lock_guard<mutex> lock2(mtx_wm_sound_path[999][2]);
            wm_sound_path[999][0] = sound_location;
            wm_sound_path[999][1] = transcription;
            wm_sound_path[999][2] = sound_time;
            break;
        }
    }
}

//// This function writes new data to working memory
////  Invokation: This function will be invoked as its own thread as all data members are updated
////  Potential problem: The CPU might write to short term memory too quickly. Functions that use short term memory might fail to read STM effectivelyas the data members are moved arround too fast
////      To negate this, functions that use STM can execute as fast as they want, however, additions and modifications to STM must wait a small determined time
//void _WorkingMemory::AddWorkingMemory(string _vision_path_camera1, string _vision_path_camera2, string _sound_path, string _speech_dialogue, string _reading_text, string _action1_text, string _action2_text, string _action3_text, string _vision_objects_image_path, string _vision_actions_image_path, string _vision_object_text, string _vision_analysis_text, string _typing_text, string __Reference_pos_gps_north, string __Reference_pos_gps_west, string __Reference_pos_gps_elevation, string __Reference_pos_gps_image, string _pos_gps_north, string _pos_gps_west, string _pos_gps_elevation, string _pos_x, string _pos_y, string _pos_z, string _simple_text, string _simple_image)
//{
//    TimeFormat current_time;
//    int wait_milliseconds = 100;
//    bool boolean = false;
//    string current_date;
//    string temp;
//    string temp_date;
//
//    ostringstream oss;
//    auto entry = time(nullptr);
//    auto tm1 = *localtime(&entry);
//
//    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
//    current_date = oss.str();
//
//    if (_vision_path_camera1 != "")
//    {
//        // Find the first empty position in short term memory
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_vision_path_camera1[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_vision_path_camera1[x][0] = _vision_path_camera1;
//                wm_vision_path_camera1[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        // The wm item is full, delete the oldest and move everything up
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_vision_path_camera1[0][0].clear();
//            wm_vision_path_camera1[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_vision_path_camera1[y][0] = wm_vision_path_camera1[y + 1][0];
//                    wm_vision_path_camera1[y][1] = wm_vision_path_camera1[y + 1][1];
//                }
//            }
//
//            wm_vision_path_camera1[999][0] = _vision_path_camera1;
//            wm_vision_path_camera1[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_vision_path_camera2 != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_vision_path_camera2[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_vision_path_camera2[x][0] = _vision_path_camera2;
//                wm_vision_path_camera2[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        // The wm item is full, delete the oldest and move everything up
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_vision_path_camera2[0][0].clear();
//            wm_vision_path_camera2[0][1].clear();
//
//            for (int y = 0; y <= 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_vision_path_camera2[y][0] = wm_vision_path_camera2[y + 1][0];
//                    wm_vision_path_camera2[y][1] = wm_vision_path_camera2[y + 1][1];
//                }
//            }
//
//            wm_vision_path_camera2[999][0] = _vision_path_camera1;
//            wm_vision_path_camera2[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_sound_path != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_sound_path[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_sound_path[x][0] = _sound_path;
//                wm_sound_path[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        // The wm item is full, delete the oldest and move everything up
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_sound_path[0][0].clear();
//            wm_sound_path[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_sound_path[y][0] = wm_sound_path[y + 1][0];
//                    wm_sound_path[y][1] = wm_sound_path[y + 1][1];
//                }
//            }
//
//            wm_sound_path[999][0] = _sound_path;
//            wm_sound_path[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_speech_dialogue != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_speech_dialogue[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_speech_dialogue[x][0] = _speech_dialogue;
//                wm_speech_dialogue[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_speech_dialogue[0][0].clear();
//            wm_speech_dialogue[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_speech_dialogue[y][0] = wm_speech_dialogue[y + 1][0];
//                    wm_speech_dialogue[y][1] = wm_speech_dialogue[y + 1][1];
//                }
//            }
//
//            wm_speech_dialogue[999][0] = _speech_dialogue;
//            wm_speech_dialogue[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_reading_text != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_reading_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_reading_text[x][0] = _reading_text;
//                wm_reading_text[x][1] = current_date;
//                boolean = false;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_reading_text[0][0].clear();
//            wm_reading_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_reading_text[y][0] = wm_reading_text[y + 1][0];
//                    wm_reading_text[y][1] = wm_reading_text[y + 1][1];
//                }
//            }
//
//            wm_reading_text[999][0] = _reading_text;
//            wm_reading_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_action1_text != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_action1_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_action1_text[x][0] = _action1_text;
//                wm_action1_text[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_action1_text[0][0].clear();
//            wm_action1_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_action1_text[y][0] = wm_action1_text[y + 1][0];
//                    wm_action1_text[y][1] = wm_action1_text[y + 1][1];
//                }
//            }
//
//            wm_action1_text[999][0] = _action1_text;
//            wm_action1_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_action2_text != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_action2_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_action2_text[x][0] = _action2_text;
//                wm_action2_text[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_action2_text[0][0].clear();
//            wm_action2_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_action2_text[y][0] = wm_action2_text[y + 1][0];
//                    wm_action2_text[y][1] = wm_action2_text[y + 1][1];
//                }
//            }
//
//            wm_action2_text[999][0] = _action2_text;
//            wm_action2_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_action3_text != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_action3_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_action3_text[x][0] = _action3_text;
//                wm_action3_text[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_action3_text[0][0].clear();
//            wm_action3_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_action3_text[y][0] = wm_action3_text[y + 1][0];
//                    wm_action3_text[y][1] = wm_action3_text[y + 1][1];
//                }
//            }
//
//            wm_action3_text[999][0] = _action3_text;
//            wm_action3_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_vision_objects_image_path != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_vision_objects_image_path[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_vision_objects_image_path[x][0] = _vision_objects_image_path;
//                wm_vision_objects_image_path[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_vision_objects_image_path[0][0].clear();
//            wm_vision_objects_image_path[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_vision_objects_image_path[y][0] = wm_vision_objects_image_path[y + 1][0];
//                    wm_vision_objects_image_path[y][1] = wm_vision_objects_image_path[y + 1][1];
//                }
//            }
//
//            wm_vision_objects_image_path[999][0] = _vision_objects_image_path;
//            wm_vision_objects_image_path[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_vision_actions_image_path != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_vision_actions_image_path[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_vision_actions_image_path[x][0] = _vision_actions_image_path;
//                wm_vision_actions_image_path[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_vision_actions_image_path[0][0].clear();
//            wm_vision_actions_image_path[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_vision_actions_image_path[y][0] = wm_vision_actions_image_path[y + 1][0];
//                    wm_vision_actions_image_path[y][1] = wm_vision_actions_image_path[y + 1][1];
//                }
//            }
//
//            wm_vision_actions_image_path[999][0] = _vision_actions_image_path;
//            wm_vision_actions_image_path[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_vision_object_text != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_vision_objects_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_vision_objects_text[x][0] = _vision_object_text;
//                wm_vision_objects_text[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_vision_objects_text[0][0].clear();
//            wm_vision_objects_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_vision_objects_text[y][0] = wm_vision_objects_text[y + 1][0];
//                    wm_vision_objects_text[y][1] = wm_vision_objects_text[y + 1][1];
//                }
//            }
//
//            wm_vision_objects_text[999][0] = _vision_object_text;
//            wm_vision_objects_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_vision_analysis_text != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_vision_analysis_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_vision_analysis_text[x][0] = _vision_analysis_text;
//                wm_vision_analysis_text[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_vision_analysis_text[0][0].clear();
//            wm_vision_analysis_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_vision_analysis_text[y][0] = wm_vision_analysis_text[y + 1][0];
//                    wm_vision_analysis_text[y][1] = wm_vision_analysis_text[y + 1][1];
//                }
//            }
//
//            wm_vision_analysis_text[999][0] = _vision_analysis_text;
//            wm_vision_analysis_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_typing_text != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_typing_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_typing_text[x][0] = _typing_text;
//                wm_typing_text[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_typing_text[0][0].clear();
//            wm_typing_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_typing_text[y][0] = wm_typing_text[y + 1][0];
//                    wm_typing_text[y][1] = wm_typing_text[y + 1][1];
//                }
//            }
//
//            wm_typing_text[999][0] = _typing_text;
//            wm_typing_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (__Reference_pos_gps_north != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_Reference_pos_gps_north[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_Reference_pos_gps_north[x][0] = __Reference_pos_gps_north;
//                wm_Reference_pos_gps_north[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_Reference_pos_gps_north[0][0].clear();
//            wm_Reference_pos_gps_north[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_Reference_pos_gps_north[y][0] = wm_Reference_pos_gps_north[y + 1][0];
//                    wm_Reference_pos_gps_north[y][1] = wm_Reference_pos_gps_north[y + 1][1];
//                }
//            }
//
//            wm_Reference_pos_gps_north[999][0] = __Reference_pos_gps_north;
//            wm_Reference_pos_gps_north[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (__Reference_pos_gps_west != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_Reference_pos_gps_west[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_Reference_pos_gps_west[x][0] = __Reference_pos_gps_west;
//                wm_Reference_pos_gps_west[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_Reference_pos_gps_west[0][0].clear();
//            wm_Reference_pos_gps_west[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_Reference_pos_gps_west[y][0] = wm_Reference_pos_gps_west[y + 1][0];
//                    wm_Reference_pos_gps_west[y][1] = wm_Reference_pos_gps_west[y + 1][1];
//                }
//            }
//
//            wm_Reference_pos_gps_west[999][0] = __Reference_pos_gps_west;
//            wm_Reference_pos_gps_west[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (__Reference_pos_gps_elevation != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_Reference_pos_gps_elevation[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_Reference_pos_gps_elevation[x][0] = __Reference_pos_gps_elevation;
//                wm_Reference_pos_gps_elevation[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_Reference_pos_gps_elevation[0][0].clear();
//            wm_Reference_pos_gps_elevation[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_Reference_pos_gps_elevation[y][0] = wm_Reference_pos_gps_elevation[y + 1][0];
//                    wm_Reference_pos_gps_elevation[y][1] = wm_Reference_pos_gps_elevation[y + 1][1];
//                }
//            }
//
//            wm_Reference_pos_gps_elevation[999][0] = __Reference_pos_gps_elevation;
//            wm_Reference_pos_gps_elevation[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (__Reference_pos_gps_image != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_Reference_pos_gps_image[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_Reference_pos_gps_image[x][0] = __Reference_pos_gps_image;
//                wm_Reference_pos_gps_image[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_Reference_pos_gps_image[0][0].clear();
//            wm_Reference_pos_gps_image[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_Reference_pos_gps_image[y][0] = wm_Reference_pos_gps_image[y + 1][0];
//                    wm_Reference_pos_gps_image[y][1] = wm_Reference_pos_gps_image[y + 1][1];
//                }
//            }
//
//            wm_Reference_pos_gps_image[999][0] = __Reference_pos_gps_image;
//            wm_Reference_pos_gps_image[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_pos_gps_north != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_pos_gps_north_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_pos_gps_north_text[x][0] = _pos_gps_north;
//                wm_pos_gps_north_text[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_pos_gps_north_text[0][0].clear();
//            wm_pos_gps_north_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_pos_gps_north_text[y][0] = wm_pos_gps_north_text[y + 1][0];
//                    wm_pos_gps_north_text[y][1] = wm_pos_gps_north_text[y + 1][1];
//                }
//            }
//            
//            wm_pos_gps_north_text[999][0] = _pos_gps_north;
//            wm_pos_gps_north_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_pos_gps_west != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_pos_gps_west_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_pos_gps_west_text[x][0] = _pos_gps_west;
//                wm_pos_gps_west_text[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_pos_gps_west_text[0][0].clear();
//            wm_pos_gps_west_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_pos_gps_west_text[y][0] = wm_pos_gps_west_text[y + 1][0];
//                    wm_pos_gps_west_text[y][1] = wm_pos_gps_west_text[y + 1][1];
//                }
//            }
//
//            wm_pos_gps_west_text[999][0] = _pos_gps_west;
//            wm_pos_gps_west_text[999][1] = current_date;
//  
//            boolean = false;
//        }
//    }
//    if (_pos_gps_elevation != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_pos_gps_elevation_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_pos_gps_elevation_text[x][0] = _pos_gps_elevation;
//                wm_pos_gps_elevation_text[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_pos_gps_elevation_text[0][0].clear();
//            wm_pos_gps_elevation_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_pos_gps_elevation_text[y][0] = wm_pos_gps_elevation_text[y + 1][0];
//                    wm_pos_gps_elevation_text[y][1] = wm_pos_gps_elevation_text[y + 1][1];
//                }
//            }
//
//            wm_pos_gps_elevation_text[999][0] = _pos_gps_elevation;
//            wm_pos_gps_elevation_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_pos_x != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_pos_x[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_pos_x[x][0] = _pos_x;
//                wm_pos_x[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_pos_x[0][0].clear();
//            wm_pos_x[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_pos_x[y][0] = wm_pos_x[y + 1][0];
//                    wm_pos_x[y][1] = wm_pos_x[y + 1][1];
//                }
//            }
//
//            wm_pos_x[999][0] = _pos_x;
//            wm_pos_x[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_pos_y != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_pos_y[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_pos_y[x][0] = _pos_y;
//                wm_pos_y[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_pos_y[0][0].clear();
//            wm_pos_y[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_pos_y[y][0] = wm_pos_y[y + 1][0];
//                    wm_pos_y[y][1] = wm_pos_y[y + 1][1];
//                }
//            }
//
//            wm_pos_y[999][0] = _pos_y;
//            wm_pos_y[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_pos_z != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_pos_z[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_pos_z[x][0] = _pos_z;
//                wm_pos_z[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_pos_z[0][0].clear();
//            wm_pos_z[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_pos_z[y][0] = wm_pos_z[y + 1][0];
//                    wm_pos_z[y][1] = wm_pos_z[y + 1][1];
//                }
//            }
//
//            wm_pos_z[999][0] = _pos_z;
//            wm_pos_z[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_simple_text != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_simple_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_simple_text[x][0] = _simple_text;
//                wm_simple_text[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_simple_text[0][0].clear();
//            wm_simple_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_simple_text[y][0] = wm_simple_text[y + 1][0];
//                    wm_simple_text[y][1] = wm_simple_text[y + 1][1];
//                }
//            }
//
//            wm_simple_text[999][0] = _simple_text;
//            wm_simple_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_simple_image != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (wm_simple_image[x][0] == "")
//            {
//                lock_guard<mutex> lock(wm);
//                wm_simple_image[x][0] = _simple_image;
//                wm_simple_image[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(wm);
//            wm_simple_image[0][0].clear();
//            wm_simple_image[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    wm_simple_image[y][0] = wm_simple_image[y + 1][0];
//                    wm_simple_image[y][1] = wm_simple_image[y + 1][1];
//                }
//            }
//
//            wm_simple_image[999][0] = _simple_image;
//            wm_simple_image[999][1] = current_date;
//            boolean = false;
//        }
//    }
//}

string* _WorkingMemory::MemoryAnalysis(string* text, string prev_date, string prev_date2)
{
    return nullptr;
}

string* _WorkingMemory::SoundStringRecall(string* text, string prev_date, string prev_date2)
{
    return nullptr;
}

string* _WorkingMemory::ReadingStringRecall(string* text, string prev_date, string prev_date2)
{
    return nullptr;
}

string* _WorkingMemory::MemorySearch(string* text, string prev_date, string prev_date2)
{
    return nullptr;
}

string* _WorkingMemory::MemorySearch(string* text)
{
    return nullptr;
}

void _WorkingMemory::ClearWorkingMemory()
{
    for (int x = 0; x < 1000; x++)
    {
        for (int y = 0; y < 4; y++)
        {
            wm_vision_path_camera1[x][y].clear();
            wm_vision_path_camera2[x][y].clear();
            wm_vision_analysis_text_camera1[x][y].clear();
            wm_vision_analysis_text_camera2[x][y].clear();
        }

        for (int y = 0; y < 3; y++)
        {
            wm_sound_path[x][y].clear();
            wm_reading_text[x][y].clear();
            wm_text_identification[x][y].clear();
        }
        
        for (int y = 0; y < 2; y++)
        {
            //wm_speech_dialogue[x][y].clear();
            wm_action1_text[x][y].clear();
            wm_action1_text[x][y].clear();
            wm_action3_text[x][y].clear();
            //wm_reading_image[x][y].clear();
            wm_llm_prompt_history[x][y].clear();
            wm_llm_response[x][y];
            wm_algebra_text[x][y].clear();
            wm_vision_objects_image_path_camera1[x][y].clear();
            wm_vision_objects_image_path_camera2[x][y].clear();
            wm_vision_actions_image_path_camera1[x][y].clear();
            wm_vision_actions_image_path_camera2[x][y].clear();
            //wm_vision_objects_text_camera1[x][y].clear();
            //wm_vision_objects_text_camera2[x][y].clear();
            wm_typing_text[x][y].clear();
            wm_Reference_pos_gps_north[x][y].clear();
            wm_Reference_pos_gps_west[x][y].clear();
            wm_Reference_pos_gps_elevation[x][y].clear();
            wm_Reference_pos_gps_image[x][y].clear();
            wm_pos_gps_north_text[x][y].clear();
            wm_pos_gps_west_text[x][y].clear();
            wm_pos_gps_elevation_text[x][y].clear();
            wm_pos_x[x][y].clear();
            wm_pos_y[x][y].clear();
            wm_pos_z[x][y].clear();
            wm_simple_text[x][y].clear();
            wm_simple_image[x][y].clear();
        }
    }
}