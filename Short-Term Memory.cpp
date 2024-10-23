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

#include "AugmentedIntelligence.h"
#include "Vision.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Neuralink.h"
#include "EKG.h"
#include "Reference.h"
#include "Variables.h"
#include "Settings.h"
#include "Speech Recognition.h"
#include "Time.h"
#include "Utilities.h"

using namespace std;
using namespace filesystem;

// Purpose: Gather all sensory and short term memory data and store the data in short term memory
// Data members:
// 1. stm_vision_path_camera1
// 2. stm_vision_path_camera2
// 3. stm_sound_path
// 4. stm_speech_dialogue
// 5. stm_reading_text
// 6. stm_action1_text
// 7. stm_action2_text
// 8. stm_action3_text
// 9. stm_vision_objects_image_path
// 10. stm_vision_actions_image_path
// 11. stm_vision_objects_text
// 12. stm_vision_analysis_text
// 13. stm_typing_text
// 14. stm_Reference_pos_gps_north
// 15. stm_Reference_pos_gps_west
// 16. stm_Reference_pos_gps_elevation
// 17. stm_Reference_pos_gps_image
// 18. stm_pos_gps_north_text
// 19. stm_pos_gps_west_text
// 20. stm_pos_gps_elevation_text
// 21. stm_pos_x
// 22. stm_pos_y
// 23. stm_pos_z
// 24. stm_simple_text
// 25. stm_simple_image
void _ShortTermMemory::ShortTermMemory()
{
    //thread vision_path_camera1(_ShortTermMemory::stm_vision_path_camera1_funct);
    //_ShortTermMemory::stm_vision_path_camera1_funct();
    //thread vision_path_camera2(_ShortTermMemory::stm_vision_path_camera2_funct);
    //thread sound_path(_ShortTermMemory::stm_sound_path_funct);
    //thread speech_dialogue(_ShortTermMemory::stm_speech_dialogue_funct);
    //thread reading_text(_ShortTermMemory::stm_reading_text_funct);
    //thread action1_text(_ShortTermMemory::stm_action1_text_funct);
    //thread action2_text(_ShortTermMemory::stm_action2_text_funct);
    //thread action3_text(_ShortTermMemory::stm_action3_text_funct);
    //thread vision_objects_image_path(_ShortTermMemory::stm_vision_objects_image_path_funct);
    //thread vision_actions_image_path(_ShortTermMemory::stm_vision_actions_image_path_funct);
    //thread vision_objects_text(_ShortTermMemory::stm_vision_objects_text_funct);
    //thread vision_analysis_text(_ShortTermMemory::stm_vision_analysis_text_funct);
    //thread typing_text(_ShortTermMemory::stm_typing_text_funct);
    //thread reference_pos_gps_north(_ShortTermMemory::stm_Reference_pos_gps_north_funct);
    //thread reference_pos_gps_west(_ShortTermMemory::stm_Reference_pos_gps_west_funct);
    //thread reference_pos_gps_elevation(_ShortTermMemory::stm_Reference_pos_gps_elevation_funct);
    //thread reference_pos_gps_image(_ShortTermMemory::stm_Reference_pos_gps_image_funct);
    //thread pos_gps_north_text(_ShortTermMemory::stm_pos_gps_north_text_funct);
    //thread pos_gps_west_text(_ShortTermMemory::stm_pos_gps_west_text_funct);
    //thread pos_gps_elevation_text(_ShortTermMemory::stm_pos_gps_elevation_text_funct);
    //thread pos_x(_ShortTermMemory::stm_pos_x_funct);
    //thread pos_y(_ShortTermMemory::stm_pos_y_funct);
    //thread pos_z(_ShortTermMemory::stm_pos_z_funct);
    //thread simple_text(_ShortTermMemory::stm_simple_text_funct);
    //thread simple_image(_ShortTermMemory::stm_simple_image_funct);
}

void _ShortTermMemory::stm_vision_camera1_funct(string image_location, string image_fps, string image_hash, string image_time)
{
    for (int x = 0; x < 1000; x++)
    {
        if (stm_vision_camera1[x][0].empty())
        {
            lock_guard<mutex> lock(mtx_stm_vision_camera1[x][0]);
            lock_guard<mutex> lock1(mtx_stm_vision_camera1[x][1]);
            lock_guard<mutex> lock2(mtx_stm_vision_camera1[x][2]);
            lock_guard<mutex> lock3(mtx_stm_vision_camera1[x][3]);
            stm_vision_camera1[x][0] = image_location;
            stm_vision_camera1[x][1] = image_fps;
            stm_vision_camera1[x][2] = image_hash;
            stm_vision_camera1[x][3] = image_time;
            break;
        }
        if (!stm_vision_camera1[x][0].empty() && x == 999)
        {
            for (int y = 0; y < 999; y++)
            {
                lock_guard<mutex> lock(mtx_stm_vision_camera1[y][0]);
                lock_guard<mutex> lock1(mtx_stm_vision_camera1[y][1]);
                lock_guard<mutex> lock2(mtx_stm_vision_camera1[y][2]);
                lock_guard<mutex> lock3(mtx_stm_vision_camera1[y][3]);
                lock_guard<mutex> lock4(mtx_stm_vision_camera1[y + 1][0]);
                lock_guard<mutex> lock5(mtx_stm_vision_camera1[y + 1][1]);
                lock_guard<mutex> lock6(mtx_stm_vision_camera1[y + 1][2]);
                lock_guard<mutex> lock7(mtx_stm_vision_camera1[y + 1][3]);
                stm_vision_camera1[y][0] = stm_vision_camera1[y + 1][0];
                stm_vision_camera1[y][1] = stm_vision_camera1[y + 1][1];
                stm_vision_camera1[y][2] = stm_vision_camera1[y + 1][2];
                stm_vision_camera1[y][3] = stm_vision_camera1[y + 1][3];
                
            }
            lock_guard<mutex> lock(mtx_stm_vision_camera1[999][0]);
            lock_guard<mutex> lock1(mtx_stm_vision_camera1[999][1]);
            lock_guard<mutex> lock2(mtx_stm_vision_camera1[999][2]);
            lock_guard<mutex> lock3(mtx_stm_vision_camera1[999][3]);
            stm_vision_camera1[999][0] = image_location;
            stm_vision_camera1[999][1] = image_fps;
            stm_vision_camera1[999][2] = image_hash;
            stm_vision_camera1[999][3] = image_time;
            break;
        }
    }
}

void _ShortTermMemory::stm_vision_camera2_funct(string image_location, string image_fps, string image_hash, string image_time)
{
    for (int x = 0; x < 1000; x++)
    {
        if (stm_vision_camera2[x][0].empty())
        {
            lock_guard<mutex> lock(mtx_stm_vision_camera2[x][0]);
            lock_guard<mutex> lock1(mtx_stm_vision_camera2[x][1]);
            lock_guard<mutex> lock2(mtx_stm_vision_camera2[x][2]);
            lock_guard<mutex> lock3(mtx_stm_vision_camera2[x][3]);
            stm_vision_camera2[x][0] = image_location;
            stm_vision_camera2[x][0] = image_fps;
            stm_vision_camera2[x][0] = image_hash;
            stm_vision_camera2[x][1] = image_time;
            break;
        }
        if (!stm_vision_camera2[x][0].empty() && x == 999)
        {
            for (int y = 0; y < 999; y++)
            {
                lock_guard<mutex> lock(mtx_stm_vision_camera2[y][0]);
                lock_guard<mutex> lock1(mtx_stm_vision_camera2[y][1]);
                lock_guard<mutex> lock2(mtx_stm_vision_camera2[y][2]);
                lock_guard<mutex> lock3(mtx_stm_vision_camera2[y][3]);
                lock_guard<mutex> lock4(mtx_stm_vision_camera2[y + 1][0]);
                lock_guard<mutex> lock5(mtx_stm_vision_camera2[y + 1][1]);
                lock_guard<mutex> lock6(mtx_stm_vision_camera2[y + 1][2]);
                lock_guard<mutex> lock7(mtx_stm_vision_camera2[y + 1][3]);
                stm_vision_camera2[y][0] = stm_vision_camera2[y + 1][0];
                stm_vision_camera2[y][1] = stm_vision_camera2[y + 1][1];
                stm_vision_camera2[y][2] = stm_vision_camera2[y + 1][2];
                stm_vision_camera2[y][3] = stm_vision_camera2[y + 1][3];
            }
            lock_guard<mutex> lock(mtx_stm_vision_camera2[999][0]);
            lock_guard<mutex> lock1(mtx_stm_vision_camera2[999][1]);
            lock_guard<mutex> lock2(mtx_stm_vision_camera2[999][2]);
            lock_guard<mutex> lock3(mtx_stm_vision_camera2[999][3]);
            stm_vision_camera2[999][0] = image_location;
            stm_vision_camera2[999][1] = image_fps;
            stm_vision_camera2[999][1] = image_hash;
            stm_vision_camera2[999][2] = image_time;
            break;
        }
    }
}

void _ShortTermMemory::stm_longterm_memory_funct(string image_location, string image_time)
{

}

void _ShortTermMemory::stm_music_memory_lyrics_funct()
{

}

void _ShortTermMemory::stm_music_memory_sound_funct()
{

}

void _ShortTermMemory::stm_sound_funct(string sound_location, string transcription, string sound_time)
{
    for (int x = 0; x < 1000; x++)
    {
        if (stm_sound[x][0].empty())
        {
            lock_guard<mutex> lock(mtx_stm_sound[x][0]);
            lock_guard<mutex> lock1(mtx_stm_sound[x][1]);
            lock_guard<mutex> lock2(mtx_stm_sound[x][2]);
            stm_sound[x][0] = sound_location;
            stm_sound[x][1] = transcription;
            stm_sound[x][2] = sound_time;
            break;
        }
        if (!stm_sound[x][0].empty() && x == 999)
        {
            for (int y = 0; y < 999; y++)
            {
                lock_guard<mutex> lock(mtx_stm_sound[y][0]);
                lock_guard<mutex> lock1(mtx_stm_sound[y][1]);
                lock_guard<mutex> lock2(mtx_stm_sound[y][2]);
                lock_guard<mutex> lock3(mtx_stm_sound[y + 1][0]);
                lock_guard<mutex> lock4(mtx_stm_sound[y + 1][1]);
                lock_guard<mutex> lock5(mtx_stm_sound[y + 1][2]);
                stm_sound[y][0] = stm_sound[y + 1][0];
                stm_sound[y][1] = stm_sound[y + 1][1];
                stm_sound[y][2] = stm_sound[y + 1][2];
            }
            lock_guard<mutex> lock(mtx_stm_sound[999][0]);
            lock_guard<mutex> lock1(mtx_stm_sound[999][1]);
            lock_guard<mutex> lock2(mtx_stm_sound[999][2]);
            stm_sound[999][0] = sound_location;
            stm_sound[999][1] = transcription;
            stm_sound[999][2] = sound_time;
            break;
        }
    }
}

void _ShortTermMemory::stm_speech_dialogue_funct()
{
    //_SpeechRecognition::SpeechRecognition();
}

void _ShortTermMemory::stm_reading_text_funct(string image_location, string reading_text, string reading_time)
{
    for (int x = 0; x < 1000; x++)
    {
        if (stm_reading[x][0].empty())
        {
            lock_guard<mutex> lock(mtx_stm_reading[x][0]);
            lock_guard<mutex> lock1(mtx_stm_reading[x][1]);
            lock_guard<mutex> lock2(mtx_stm_reading[x][2]);
            stm_reading[x][0] = image_location;
            stm_reading[x][1] = reading_text;
            stm_reading[x][2] = reading_time;
            break;
        }
        if (!stm_reading[x][0].empty() && x == 999)
        {
            for (int y = 0; y < 999; y++)
            {
                lock_guard<mutex> lock(mtx_stm_reading[y][0]);
                lock_guard<mutex> lock1(mtx_stm_reading[y][1]);
                lock_guard<mutex> lock2(mtx_stm_reading[y][2]);
                lock_guard<mutex> lock3(mtx_stm_reading[y + 1][0]);
                lock_guard<mutex> lock4(mtx_stm_reading[y + 1][1]);
                lock_guard<mutex> lock5(mtx_stm_reading[y + 1][2]);
                stm_reading[y][0] = stm_reading[y + 1][0];
                stm_reading[y][1] = stm_reading[y + 1][1];
                stm_reading[y][2] = stm_reading[y + 1][2];
            }
            lock_guard<mutex> lock(mtx_stm_reading[999][0]);
            lock_guard<mutex> lock1(mtx_stm_reading[999][1]);
            lock_guard<mutex> lock2(mtx_stm_reading[999][2]);
            stm_reading[999][0] = image_location;
            stm_reading[999][1] = reading_text;
            stm_reading[999][2] = reading_time;
            break;
        }
    }
}

//void _ShortTermMemory::stm_action1_text_funct()
//{
//    // _Actions::GetCurrentAction();
//}
//
//void _ShortTermMemory::stm_action2_text_funct()
//{
//    // _Actions::GetCurrentAction();
//}
//
//void _ShortTermMemory::stm_action3_text_funct()
//{
//    // _Actions::GetCurrentAction();
//}

void _ShortTermMemory::stm_vision_objects_image_camera1_funct(string image_location, string image_hash, string image_time, string object_detection_image, string object_detection_image_hash, string object_detection_image_time, string class1, string class1_x, string class1_width, string class1_y, string class1_height, string class1_score, string class2, string class2_x, string class2_width, string class2_y, string class2_height, string class2_score, string class3, string class3_x, string class3_width, string class3_y, string class3_height, string class3_score, string class4, string class4_x, string class4_width, string class4_y, string class4_height, string class4_score, string class5, string class5_x, string class5_width, string class5_y, string class5_height, string class5_score, string class6, string class6_x, string class6_width, string class6_y, string class6_height, string class6_score, string class7, string class7_x, string class7_width, string class7_y, string class7_height, string class7_score, string class8, string class8_x, string class8_width, string class8_y, string class8_height, string class8_score, string class9, string class9_x, string class9_width, string class9_y, string class9_height, string class9_score, string class10, string class10_x, string class10_width, string class10_y, string class10_height, string class10_score)
{
    for (int x = 0; x < 1000; x++)
    {
        if (stm_vision_objects_image_camera1[x][0].empty())
        {
            lock_guard<mutex> lock(mtx_stm_vision_objects_image_camera1[x][0]);
            lock_guard<mutex> lock1(mtx_stm_vision_objects_image_camera1[x][1]);
            lock_guard<mutex> lock2(mtx_stm_vision_objects_image_camera1[x][2]);
            lock_guard<mutex> lock3(mtx_stm_vision_objects_image_camera1[x][3]);
            lock_guard<mutex> lock4(mtx_stm_vision_objects_image_camera1[x][4]);
            lock_guard<mutex> lock5(mtx_stm_vision_objects_image_camera1[x][5]);
            lock_guard<mutex> lock6(mtx_stm_vision_objects_image_camera1[x][6]);
            lock_guard<mutex> lock7(mtx_stm_vision_objects_image_camera1[x][7]);
            lock_guard<mutex> lock8(mtx_stm_vision_objects_image_camera1[x][8]);
            lock_guard<mutex> lock9(mtx_stm_vision_objects_image_camera1[x][9]);
            lock_guard<mutex> lock10(mtx_stm_vision_objects_image_camera1[x][10]);
            lock_guard<mutex> lock11(mtx_stm_vision_objects_image_camera1[x][11]);
            lock_guard<mutex> lock12(mtx_stm_vision_objects_image_camera1[x][12]);
            lock_guard<mutex> lock13(mtx_stm_vision_objects_image_camera1[x][13]);
            lock_guard<mutex> lock14(mtx_stm_vision_objects_image_camera1[x][14]);
            lock_guard<mutex> lock15(mtx_stm_vision_objects_image_camera1[x][15]);
            lock_guard<mutex> lock16(mtx_stm_vision_objects_image_camera1[x][16]);
            lock_guard<mutex> lock17(mtx_stm_vision_objects_image_camera1[x][17]);
            lock_guard<mutex> lock18(mtx_stm_vision_objects_image_camera1[x][18]);
            lock_guard<mutex> lock19(mtx_stm_vision_objects_image_camera1[x][19]);
            lock_guard<mutex> lock20(mtx_stm_vision_objects_image_camera1[x][20]);
            lock_guard<mutex> lock21(mtx_stm_vision_objects_image_camera1[x][21]);
            lock_guard<mutex> lock22(mtx_stm_vision_objects_image_camera1[x][22]);
            lock_guard<mutex> lock23(mtx_stm_vision_objects_image_camera1[x][23]);
            lock_guard<mutex> lock24(mtx_stm_vision_objects_image_camera1[x][24]);
            lock_guard<mutex> lock25(mtx_stm_vision_objects_image_camera1[x][25]);
            lock_guard<mutex> lock26(mtx_stm_vision_objects_image_camera1[x][26]);
            lock_guard<mutex> lock27(mtx_stm_vision_objects_image_camera1[x][27]);
            lock_guard<mutex> lock28(mtx_stm_vision_objects_image_camera1[x][28]);
            lock_guard<mutex> lock29(mtx_stm_vision_objects_image_camera1[x][29]);
            lock_guard<mutex> lock30(mtx_stm_vision_objects_image_camera1[x][30]);
            lock_guard<mutex> lock31(mtx_stm_vision_objects_image_camera1[x][31]);
            lock_guard<mutex> lock32(mtx_stm_vision_objects_image_camera1[x][32]);
            lock_guard<mutex> lock33(mtx_stm_vision_objects_image_camera1[x][33]);
            lock_guard<mutex> lock34(mtx_stm_vision_objects_image_camera1[x][34]);
            lock_guard<mutex> lock35(mtx_stm_vision_objects_image_camera1[x][35]);
            lock_guard<mutex> lock36(mtx_stm_vision_objects_image_camera1[x][36]);
            lock_guard<mutex> lock37(mtx_stm_vision_objects_image_camera1[x][37]);
            lock_guard<mutex> lock38(mtx_stm_vision_objects_image_camera1[x][38]);
            lock_guard<mutex> lock39(mtx_stm_vision_objects_image_camera1[x][39]);
            lock_guard<mutex> lock40(mtx_stm_vision_objects_image_camera1[x][40]);
            lock_guard<mutex> lock41(mtx_stm_vision_objects_image_camera1[x][41]);
            lock_guard<mutex> lock42(mtx_stm_vision_objects_image_camera1[x][42]);
            lock_guard<mutex> lock43(mtx_stm_vision_objects_image_camera1[x][43]);
            lock_guard<mutex> lock44(mtx_stm_vision_objects_image_camera1[x][44]);
            lock_guard<mutex> lock45(mtx_stm_vision_objects_image_camera1[x][45]);
            lock_guard<mutex> lock46(mtx_stm_vision_objects_image_camera1[x][46]);
            lock_guard<mutex> lock47(mtx_stm_vision_objects_image_camera1[x][47]);
            lock_guard<mutex> lock48(mtx_stm_vision_objects_image_camera1[x][48]);
            lock_guard<mutex> lock49(mtx_stm_vision_objects_image_camera1[x][49]);
            lock_guard<mutex> lock50(mtx_stm_vision_objects_image_camera1[x][50]);
            lock_guard<mutex> lock51(mtx_stm_vision_objects_image_camera1[x][51]);
            lock_guard<mutex> lock52(mtx_stm_vision_objects_image_camera1[x][52]);
            lock_guard<mutex> lock53(mtx_stm_vision_objects_image_camera1[x][53]);
            lock_guard<mutex> lock54(mtx_stm_vision_objects_image_camera1[x][54]);
            lock_guard<mutex> lock55(mtx_stm_vision_objects_image_camera1[x][55]);
            lock_guard<mutex> lock56(mtx_stm_vision_objects_image_camera1[x][56]);
            lock_guard<mutex> lock57(mtx_stm_vision_objects_image_camera1[x][57]);
            lock_guard<mutex> lock58(mtx_stm_vision_objects_image_camera1[x][58]);
            lock_guard<mutex> lock59(mtx_stm_vision_objects_image_camera1[x][59]);
            lock_guard<mutex> lock60(mtx_stm_vision_objects_image_camera1[x][60]);
            lock_guard<mutex> lock61(mtx_stm_vision_objects_image_camera1[x][61]);
            lock_guard<mutex> lock62(mtx_stm_vision_objects_image_camera1[x][62]);
            lock_guard<mutex> lock63(mtx_stm_vision_objects_image_camera1[x][63]);
            lock_guard<mutex> lock64(mtx_stm_vision_objects_image_camera1[x][64]);
            stm_vision_objects_image_camera1[x][0] = image_location;
            stm_vision_objects_image_camera1[x][1] = image_hash;
            stm_vision_objects_image_camera1[x][2] = image_time;
            stm_vision_objects_image_camera1[x][3] = object_detection_image;
            stm_vision_objects_image_camera1[x][4] = object_detection_image_hash;
            stm_vision_objects_image_camera1[x][5] = object_detection_image_time;
            stm_vision_objects_image_camera1[x][6] = class1;
            stm_vision_objects_image_camera1[x][7] = class1_x;
            stm_vision_objects_image_camera1[x][8] = class1_width;
            stm_vision_objects_image_camera1[x][9] = class1_y;
            stm_vision_objects_image_camera1[x][10] = class1_height;
            stm_vision_objects_image_camera1[x][11] = class1_score;
            stm_vision_objects_image_camera1[x][12] = class2;
            stm_vision_objects_image_camera1[x][13] = class2_x;
            stm_vision_objects_image_camera1[x][14] = class2_width;
            stm_vision_objects_image_camera1[x][15] = class2_y;
            stm_vision_objects_image_camera1[x][16] = class2_height;
            stm_vision_objects_image_camera1[x][17] = class2_score;
            stm_vision_objects_image_camera1[x][18] = class3;
            stm_vision_objects_image_camera1[x][19] = class3_x;
            stm_vision_objects_image_camera1[x][20] = class3_width;
            stm_vision_objects_image_camera1[x][21] = class3_y;
            stm_vision_objects_image_camera1[x][22] = class3_height;
            stm_vision_objects_image_camera1[x][23] = class3_score;
            stm_vision_objects_image_camera1[x][24] = class4;
            stm_vision_objects_image_camera1[x][25] = class4_x;
            stm_vision_objects_image_camera1[x][26] = class4_width;
            stm_vision_objects_image_camera1[x][27] = class4_y;
            stm_vision_objects_image_camera1[x][28] = class4_height;
            stm_vision_objects_image_camera1[x][29] = class4_score;
            stm_vision_objects_image_camera1[x][30] = class5;
            stm_vision_objects_image_camera1[x][31] = class5_x;
            stm_vision_objects_image_camera1[x][32] = class5_width;
            stm_vision_objects_image_camera1[x][33] = class5_y;
            stm_vision_objects_image_camera1[x][34] = class5_height;
            stm_vision_objects_image_camera1[x][35] = class5_score;
            stm_vision_objects_image_camera1[x][36] = class6;
            stm_vision_objects_image_camera1[x][37] = class6_x;
            stm_vision_objects_image_camera1[x][38] = class6_width;
            stm_vision_objects_image_camera1[x][39] = class6_y;
            stm_vision_objects_image_camera1[x][40] = class6_height;
            stm_vision_objects_image_camera1[x][41] = class6_score;
            stm_vision_objects_image_camera1[x][42] = class7;
            stm_vision_objects_image_camera1[x][43] = class7_x;
            stm_vision_objects_image_camera1[x][44] = class7_width;
            stm_vision_objects_image_camera1[x][45] = class7_y;
            stm_vision_objects_image_camera1[x][46] = class7_height;
            stm_vision_objects_image_camera1[x][47] = class7_score;
            stm_vision_objects_image_camera1[x][48] = class8;
            stm_vision_objects_image_camera1[x][49] = class8_x;
            stm_vision_objects_image_camera1[x][50] = class8_width;
            stm_vision_objects_image_camera1[x][51] = class8_y;
            stm_vision_objects_image_camera1[x][52] = class8_height;
            stm_vision_objects_image_camera1[x][53] = class8_score;
            stm_vision_objects_image_camera1[x][54] = class9;
            stm_vision_objects_image_camera1[x][55] = class9_x;
            stm_vision_objects_image_camera1[x][56] = class9_width;
            stm_vision_objects_image_camera1[x][57] = class9_y;
            stm_vision_objects_image_camera1[x][58] = class9_height;
            stm_vision_objects_image_camera1[x][59] = class9_score;
            stm_vision_objects_image_camera1[x][60] = class10_x;
            stm_vision_objects_image_camera1[x][61] = class10_width;
            stm_vision_objects_image_camera1[x][62] = class10_y;
            stm_vision_objects_image_camera1[x][63] = class10_height;
            stm_vision_objects_image_camera1[x][64] = class10_score;
            stm_vision_objects_image_camera1[x][0] = image_location;
            stm_vision_objects_image_camera1[x][1] = image_hash;
            stm_vision_objects_image_camera1[x][2] = image_time;
            stm_vision_objects_image_camera1[x][3] = class1;
            stm_vision_objects_image_camera1[x][4] = class1_x;
            stm_vision_objects_image_camera1[x][5] = class1_width;
            stm_vision_objects_image_camera1[x][6] = class1_y;
            stm_vision_objects_image_camera1[x][7] = class1_height;
            stm_vision_objects_image_camera1[x][8] = class1_score;
            stm_vision_objects_image_camera1[x][9] = class2;
            stm_vision_objects_image_camera1[x][10] = class2_x;
            stm_vision_objects_image_camera1[x][11] = class2_width;
            stm_vision_objects_image_camera1[x][12] = class2_y;
            stm_vision_objects_image_camera1[x][13] = class2_height;
            stm_vision_objects_image_camera1[x][14] = class2_score;
            stm_vision_objects_image_camera1[x][15] = class3;
            stm_vision_objects_image_camera1[x][16] = class3_x;
            stm_vision_objects_image_camera1[x][17] = class3_width;
            stm_vision_objects_image_camera1[x][18] = class3_y;
            stm_vision_objects_image_camera1[x][19] = class3_height;
            stm_vision_objects_image_camera1[x][20] = class3_score;
            stm_vision_objects_image_camera1[x][21] = class4;
            stm_vision_objects_image_camera1[x][22] = class4_x;
            stm_vision_objects_image_camera1[x][23] = class4_width;
            stm_vision_objects_image_camera1[x][24] = class4_y;
            stm_vision_objects_image_camera1[x][25] = class4_height;
            stm_vision_objects_image_camera1[x][26] = class4_score;
            stm_vision_objects_image_camera1[x][27] = class5;
            stm_vision_objects_image_camera1[x][28] = class5_x;
            stm_vision_objects_image_camera1[x][29] = class5_width;
            stm_vision_objects_image_camera1[x][30] = class5_y;
            stm_vision_objects_image_camera1[x][31] = class5_height;
            stm_vision_objects_image_camera1[x][32] = class5_score;
            stm_vision_objects_image_camera1[x][33] = class6;
            stm_vision_objects_image_camera1[x][34] = class6_x;
            stm_vision_objects_image_camera1[x][35] = class6_width;
            stm_vision_objects_image_camera1[x][36] = class6_y;
            stm_vision_objects_image_camera1[x][37] = class6_height;
            stm_vision_objects_image_camera1[x][38] = class6_score;
            stm_vision_objects_image_camera1[x][39] = class7;
            stm_vision_objects_image_camera1[x][40] = class7_x;
            stm_vision_objects_image_camera1[x][41] = class7_width;
            stm_vision_objects_image_camera1[x][42] = class7_y;
            stm_vision_objects_image_camera1[x][43] = class7_height;
            stm_vision_objects_image_camera1[x][44] = class7_score;
            stm_vision_objects_image_camera1[x][45] = class8;
            stm_vision_objects_image_camera1[x][46] = class8_x;
            stm_vision_objects_image_camera1[x][47] = class8_width;
            stm_vision_objects_image_camera1[x][48] = class8_y;
            stm_vision_objects_image_camera1[x][49] = class8_height;
            stm_vision_objects_image_camera1[x][50] = class8_score;
            stm_vision_objects_image_camera1[x][51] = class9;
            stm_vision_objects_image_camera1[x][52] = class9_x;
            stm_vision_objects_image_camera1[x][53] = class9_width;
            stm_vision_objects_image_camera1[x][54] = class9_y;
            stm_vision_objects_image_camera1[x][55] = class9_height;
            stm_vision_objects_image_camera1[x][56] = class9_score;
            stm_vision_objects_image_camera1[x][57] = class10_x;
            stm_vision_objects_image_camera1[x][58] = class10_width;
            stm_vision_objects_image_camera1[x][59] = class10_y;
            stm_vision_objects_image_camera1[x][60] = class10_height;
            stm_vision_objects_image_camera1[x][61] = class10_score;
            break;
        }
        if (!stm_vision_objects_image_camera1[x][0].empty() && x == 999)
        {
            for (int y = 0; y < 999; y++)
            {
                lock_guard<mutex> lock(mtx_stm_vision_objects_image_camera1[y][0]);
                lock_guard<mutex> lock1(mtx_stm_vision_objects_image_camera1[y][1]);
                lock_guard<mutex> lock2(mtx_stm_vision_objects_image_camera1[y][2]);
                lock_guard<mutex> lock3(mtx_stm_vision_objects_image_camera1[y][3]);
                lock_guard<mutex> lock4(mtx_stm_vision_objects_image_camera1[y][4]);
                lock_guard<mutex> lock5(mtx_stm_vision_objects_image_camera1[y][5]);
                lock_guard<mutex> lock6(mtx_stm_vision_objects_image_camera1[y][6]);
                lock_guard<mutex> lock7(mtx_stm_vision_objects_image_camera1[y][7]);
                lock_guard<mutex> lock8(mtx_stm_vision_objects_image_camera1[y][8]);
                lock_guard<mutex> lock9(mtx_stm_vision_objects_image_camera1[y][9]);
                lock_guard<mutex> lock10(mtx_stm_vision_objects_image_camera1[y][10]);
                lock_guard<mutex> lock11(mtx_stm_vision_objects_image_camera1[y][11]);
                lock_guard<mutex> lock12(mtx_stm_vision_objects_image_camera1[y][12]);
                lock_guard<mutex> lock13(mtx_stm_vision_objects_image_camera1[y][13]);
                lock_guard<mutex> lock14(mtx_stm_vision_objects_image_camera1[y][14]);
                lock_guard<mutex> lock15(mtx_stm_vision_objects_image_camera1[y][15]);
                lock_guard<mutex> lock16(mtx_stm_vision_objects_image_camera1[y][16]);
                lock_guard<mutex> lock17(mtx_stm_vision_objects_image_camera1[y][17]);
                lock_guard<mutex> lock18(mtx_stm_vision_objects_image_camera1[y][18]);
                lock_guard<mutex> lock19(mtx_stm_vision_objects_image_camera1[y][19]);
                lock_guard<mutex> lock20(mtx_stm_vision_objects_image_camera1[y][20]);
                lock_guard<mutex> lock21(mtx_stm_vision_objects_image_camera1[y][21]);
                lock_guard<mutex> lock22(mtx_stm_vision_objects_image_camera1[y][22]);
                lock_guard<mutex> lock23(mtx_stm_vision_objects_image_camera1[y][23]);
                lock_guard<mutex> lock24(mtx_stm_vision_objects_image_camera1[y][24]);
                lock_guard<mutex> lock25(mtx_stm_vision_objects_image_camera1[y][25]);
                lock_guard<mutex> lock26(mtx_stm_vision_objects_image_camera1[y][26]);
                lock_guard<mutex> lock27(mtx_stm_vision_objects_image_camera1[y][27]);
                lock_guard<mutex> lock28(mtx_stm_vision_objects_image_camera1[y][28]);
                lock_guard<mutex> lock29(mtx_stm_vision_objects_image_camera1[y][29]);
                lock_guard<mutex> lock30(mtx_stm_vision_objects_image_camera1[y][30]);
                lock_guard<mutex> lock31(mtx_stm_vision_objects_image_camera1[y][31]);
                lock_guard<mutex> lock32(mtx_stm_vision_objects_image_camera1[y][32]);
                lock_guard<mutex> lock33(mtx_stm_vision_objects_image_camera1[y][33]);
                lock_guard<mutex> lock34(mtx_stm_vision_objects_image_camera1[y][34]);
                lock_guard<mutex> lock35(mtx_stm_vision_objects_image_camera1[y][35]);
                lock_guard<mutex> lock36(mtx_stm_vision_objects_image_camera1[y][36]);
                lock_guard<mutex> lock37(mtx_stm_vision_objects_image_camera1[y][37]);
                lock_guard<mutex> lock38(mtx_stm_vision_objects_image_camera1[y][38]);
                lock_guard<mutex> lock39(mtx_stm_vision_objects_image_camera1[y][39]);
                lock_guard<mutex> lock40(mtx_stm_vision_objects_image_camera1[y][40]);
                lock_guard<mutex> lock41(mtx_stm_vision_objects_image_camera1[y][41]);
                lock_guard<mutex> lock42(mtx_stm_vision_objects_image_camera1[y][42]);
                lock_guard<mutex> lock43(mtx_stm_vision_objects_image_camera1[y][43]);
                lock_guard<mutex> lock44(mtx_stm_vision_objects_image_camera1[y][44]);
                lock_guard<mutex> lock45(mtx_stm_vision_objects_image_camera1[y][45]);
                lock_guard<mutex> lock46(mtx_stm_vision_objects_image_camera1[y][46]);
                lock_guard<mutex> lock47(mtx_stm_vision_objects_image_camera1[y][47]);
                lock_guard<mutex> lock48(mtx_stm_vision_objects_image_camera1[y][48]);
                lock_guard<mutex> lock49(mtx_stm_vision_objects_image_camera1[y][49]);
                lock_guard<mutex> lock50(mtx_stm_vision_objects_image_camera1[y][50]);
                lock_guard<mutex> lock51(mtx_stm_vision_objects_image_camera1[y][51]);
                lock_guard<mutex> lock52(mtx_stm_vision_objects_image_camera1[y][52]);
                lock_guard<mutex> lock53(mtx_stm_vision_objects_image_camera1[y][53]);
                lock_guard<mutex> lock54(mtx_stm_vision_objects_image_camera1[y][54]);
                lock_guard<mutex> lock55(mtx_stm_vision_objects_image_camera1[y][55]);
                lock_guard<mutex> lock56(mtx_stm_vision_objects_image_camera1[y][56]);
                lock_guard<mutex> lock57(mtx_stm_vision_objects_image_camera1[y][57]);
                lock_guard<mutex> lock58(mtx_stm_vision_objects_image_camera1[y][58]);
                lock_guard<mutex> lock59(mtx_stm_vision_objects_image_camera1[y][59]);
                lock_guard<mutex> lock60(mtx_stm_vision_objects_image_camera1[y + 1][0]);
                lock_guard<mutex> lock61(mtx_stm_vision_objects_image_camera1[y + 1][1]);
                lock_guard<mutex> lock62(mtx_stm_vision_objects_image_camera1[y + 1][2]);
                lock_guard<mutex> lock63(mtx_stm_vision_objects_image_camera1[y + 1][3]);
                lock_guard<mutex> lock64(mtx_stm_vision_objects_image_camera1[y + 1][4]);
                lock_guard<mutex> lock65(mtx_stm_vision_objects_image_camera1[y + 1][5]);
                lock_guard<mutex> lock66(mtx_stm_vision_objects_image_camera1[y + 1][6]);
                lock_guard<mutex> lock67(mtx_stm_vision_objects_image_camera1[y + 1][7]);
                lock_guard<mutex> lock68(mtx_stm_vision_objects_image_camera1[y + 1][8]);
                lock_guard<mutex> lock69(mtx_stm_vision_objects_image_camera1[y + 1][9]);
                lock_guard<mutex> lock70(mtx_stm_vision_objects_image_camera1[y + 1][10]);
                lock_guard<mutex> lock71(mtx_stm_vision_objects_image_camera1[y + 1][11]);
                lock_guard<mutex> lock72(mtx_stm_vision_objects_image_camera1[y + 1][12]);
                lock_guard<mutex> lock73(mtx_stm_vision_objects_image_camera1[y + 1][13]);
                lock_guard<mutex> lock74(mtx_stm_vision_objects_image_camera1[y + 1][14]);
                lock_guard<mutex> lock75(mtx_stm_vision_objects_image_camera1[y + 1][15]);
                lock_guard<mutex> lock76(mtx_stm_vision_objects_image_camera1[y + 1][16]);
                lock_guard<mutex> lock77(mtx_stm_vision_objects_image_camera1[y + 1][17]);
                lock_guard<mutex> lock78(mtx_stm_vision_objects_image_camera1[y + 1][18]);
                lock_guard<mutex> lock79(mtx_stm_vision_objects_image_camera1[y + 1][19]);
                lock_guard<mutex> lock80(mtx_stm_vision_objects_image_camera1[y + 1][20]);
                lock_guard<mutex> lock81(mtx_stm_vision_objects_image_camera1[y + 1][21]);
                lock_guard<mutex> lock82(mtx_stm_vision_objects_image_camera1[y + 1][22]);
                lock_guard<mutex> lock83(mtx_stm_vision_objects_image_camera1[y + 1][23]);
                lock_guard<mutex> lock84(mtx_stm_vision_objects_image_camera1[y + 1][24]);
                lock_guard<mutex> lock85(mtx_stm_vision_objects_image_camera1[y + 1][25]);
                lock_guard<mutex> lock86(mtx_stm_vision_objects_image_camera1[y + 1][26]);
                lock_guard<mutex> lock87(mtx_stm_vision_objects_image_camera1[y + 1][27]);
                lock_guard<mutex> lock88(mtx_stm_vision_objects_image_camera1[y + 1][28]);
                lock_guard<mutex> lock89(mtx_stm_vision_objects_image_camera1[y + 1][29]);
                lock_guard<mutex> lock90(mtx_stm_vision_objects_image_camera1[y + 1][30]);
                lock_guard<mutex> lock91(mtx_stm_vision_objects_image_camera1[y + 1][31]);
                lock_guard<mutex> lock92(mtx_stm_vision_objects_image_camera1[y + 1][32]);
                lock_guard<mutex> lock93(mtx_stm_vision_objects_image_camera1[y + 1][33]);
                lock_guard<mutex> lock94(mtx_stm_vision_objects_image_camera1[y + 1][34]);
                lock_guard<mutex> lock95(mtx_stm_vision_objects_image_camera1[y + 1][35]);
                lock_guard<mutex> lock96(mtx_stm_vision_objects_image_camera1[y + 1][36]);
                lock_guard<mutex> lock97(mtx_stm_vision_objects_image_camera1[y + 1][37]);
                lock_guard<mutex> lock98(mtx_stm_vision_objects_image_camera1[y + 1][38]);
                lock_guard<mutex> lock99(mtx_stm_vision_objects_image_camera1[y + 1][39]);
                lock_guard<mutex> lock100(mtx_stm_vision_objects_image_camera1[y + 1][40]);
                lock_guard<mutex> lock101(mtx_stm_vision_objects_image_camera1[y + 1][41]);
                lock_guard<mutex> lock102(mtx_stm_vision_objects_image_camera1[y + 1][42]);
                lock_guard<mutex> lock103(mtx_stm_vision_objects_image_camera1[y + 1][43]);
                lock_guard<mutex> lock104(mtx_stm_vision_objects_image_camera1[y + 1][44]);
                lock_guard<mutex> lock105(mtx_stm_vision_objects_image_camera1[y + 1][45]);
                lock_guard<mutex> lock106(mtx_stm_vision_objects_image_camera1[y + 1][46]);
                lock_guard<mutex> lock107(mtx_stm_vision_objects_image_camera1[y + 1][47]);
                lock_guard<mutex> lock108(mtx_stm_vision_objects_image_camera1[y + 1][48]);
                lock_guard<mutex> lock109(mtx_stm_vision_objects_image_camera1[y + 1][49]);
                lock_guard<mutex> lock110(mtx_stm_vision_objects_image_camera1[y + 1][50]);
                lock_guard<mutex> lock111(mtx_stm_vision_objects_image_camera1[y + 1][51]);
                lock_guard<mutex> lock112(mtx_stm_vision_objects_image_camera1[y + 1][52]);
                lock_guard<mutex> lock113(mtx_stm_vision_objects_image_camera1[y + 1][53]);
                lock_guard<mutex> lock114(mtx_stm_vision_objects_image_camera1[y + 1][54]);
                lock_guard<mutex> lock115(mtx_stm_vision_objects_image_camera1[y + 1][55]);
                lock_guard<mutex> lock116(mtx_stm_vision_objects_image_camera1[y + 1][56]);
                lock_guard<mutex> lock117(mtx_stm_vision_objects_image_camera1[y + 1][57]);
                lock_guard<mutex> lock118(mtx_stm_vision_objects_image_camera1[y + 1][58]);
                lock_guard<mutex> lock119(mtx_stm_vision_objects_image_camera1[y + 1][59]);
                stm_vision_objects_image_camera1[y][0] = stm_vision_objects_image_camera1[y + 1][0];
                stm_vision_objects_image_camera1[y][1] = stm_vision_objects_image_camera1[y + 1][1];
                stm_vision_objects_image_camera1[y][2] = stm_vision_objects_image_camera1[y + 1][2];
                stm_vision_objects_image_camera1[y][3] = stm_vision_objects_image_camera1[y + 1][3];
                stm_vision_objects_image_camera1[y][4] = stm_vision_objects_image_camera1[y + 1][4];
                stm_vision_objects_image_camera1[y][5] = stm_vision_objects_image_camera1[y + 1][5];
                stm_vision_objects_image_camera1[y][6] = stm_vision_objects_image_camera1[y + 1][6];
                stm_vision_objects_image_camera1[y][7] = stm_vision_objects_image_camera1[y + 1][7];
                stm_vision_objects_image_camera1[y][8] = stm_vision_objects_image_camera1[y + 1][8];
                stm_vision_objects_image_camera1[y][9] = stm_vision_objects_image_camera1[y + 1][9];
                stm_vision_objects_image_camera1[y][10] = stm_vision_objects_image_camera1[y + 1][0];
                stm_vision_objects_image_camera1[y][11] = stm_vision_objects_image_camera1[y + 1][11];
                stm_vision_objects_image_camera1[y][12] = stm_vision_objects_image_camera1[y + 1][12];
                stm_vision_objects_image_camera1[y][13] = stm_vision_objects_image_camera1[y + 1][13];
                stm_vision_objects_image_camera1[y][14] = stm_vision_objects_image_camera1[y + 1][14];
                stm_vision_objects_image_camera1[y][15] = stm_vision_objects_image_camera1[y + 1][15];
                stm_vision_objects_image_camera1[y][16] = stm_vision_objects_image_camera1[y + 1][16];
                stm_vision_objects_image_camera1[y][17] = stm_vision_objects_image_camera1[y + 1][17];
                stm_vision_objects_image_camera1[y][18] = stm_vision_objects_image_camera1[y + 1][18];
                stm_vision_objects_image_camera1[y][19] = stm_vision_objects_image_camera1[y + 1][19];
                stm_vision_objects_image_camera1[y][20] = stm_vision_objects_image_camera1[y + 1][20];
                stm_vision_objects_image_camera1[y][21] = stm_vision_objects_image_camera1[y + 1][21];
                stm_vision_objects_image_camera1[y][22] = stm_vision_objects_image_camera1[y + 1][22];
                stm_vision_objects_image_camera1[y][23] = stm_vision_objects_image_camera1[y + 1][23];
                stm_vision_objects_image_camera1[y][24] = stm_vision_objects_image_camera1[y + 1][24];
                stm_vision_objects_image_camera1[y][25] = stm_vision_objects_image_camera1[y + 1][25];
                stm_vision_objects_image_camera1[y][26] = stm_vision_objects_image_camera1[y + 1][26];
                stm_vision_objects_image_camera1[y][27] = stm_vision_objects_image_camera1[y + 1][27];
                stm_vision_objects_image_camera1[y][28] = stm_vision_objects_image_camera1[y + 1][28];
                stm_vision_objects_image_camera1[y][29] = stm_vision_objects_image_camera1[y + 1][29];
                stm_vision_objects_image_camera1[y][30] = stm_vision_objects_image_camera1[y + 1][30];
                stm_vision_objects_image_camera1[y][31] = stm_vision_objects_image_camera1[y + 1][31];
                stm_vision_objects_image_camera1[y][32] = stm_vision_objects_image_camera1[y + 1][32];
                stm_vision_objects_image_camera1[y][33] = stm_vision_objects_image_camera1[y + 1][33];
                stm_vision_objects_image_camera1[y][34] = stm_vision_objects_image_camera1[y + 1][34];
                stm_vision_objects_image_camera1[y][35] = stm_vision_objects_image_camera1[y + 1][35];
                stm_vision_objects_image_camera1[y][36] = stm_vision_objects_image_camera1[y + 1][36];
                stm_vision_objects_image_camera1[y][37] = stm_vision_objects_image_camera1[y + 1][37];
                stm_vision_objects_image_camera1[y][38] = stm_vision_objects_image_camera1[y + 1][38];
                stm_vision_objects_image_camera1[y][39] = stm_vision_objects_image_camera1[y + 1][39];
                stm_vision_objects_image_camera1[y][40] = stm_vision_objects_image_camera1[y + 1][40];
                stm_vision_objects_image_camera1[y][41] = stm_vision_objects_image_camera1[y + 1][41];
                stm_vision_objects_image_camera1[y][42] = stm_vision_objects_image_camera1[y + 1][42];
                stm_vision_objects_image_camera1[y][43] = stm_vision_objects_image_camera1[y + 1][43];
                stm_vision_objects_image_camera1[y][44] = stm_vision_objects_image_camera1[y + 1][44];
                stm_vision_objects_image_camera1[y][45] = stm_vision_objects_image_camera1[y + 1][45];
                stm_vision_objects_image_camera1[y][46] = stm_vision_objects_image_camera1[y + 1][46];
                stm_vision_objects_image_camera1[y][47] = stm_vision_objects_image_camera1[y + 1][47];
                stm_vision_objects_image_camera1[y][48] = stm_vision_objects_image_camera1[y + 1][48];
                stm_vision_objects_image_camera1[y][49] = stm_vision_objects_image_camera1[y + 1][49];
                stm_vision_objects_image_camera1[y][50] = stm_vision_objects_image_camera1[y + 1][50];
                stm_vision_objects_image_camera1[y][51] = stm_vision_objects_image_camera1[y + 1][51];
                stm_vision_objects_image_camera1[y][52] = stm_vision_objects_image_camera1[y + 1][52];
                stm_vision_objects_image_camera1[y][53] = stm_vision_objects_image_camera1[y + 1][53];
                stm_vision_objects_image_camera1[y][54] = stm_vision_objects_image_camera1[y + 1][54];
                stm_vision_objects_image_camera1[y][55] = stm_vision_objects_image_camera1[y + 1][55];
                stm_vision_objects_image_camera1[y][56] = stm_vision_objects_image_camera1[y + 1][56];
                stm_vision_objects_image_camera1[y][57] = stm_vision_objects_image_camera1[y + 1][57];
                stm_vision_objects_image_camera1[y][58] = stm_vision_objects_image_camera1[y + 1][58];
                stm_vision_objects_image_camera1[y][59] = stm_vision_objects_image_camera1[y + 1][59];
                stm_vision_objects_image_camera1[y][60] = stm_vision_objects_image_camera1[y + 1][60];
                stm_vision_objects_image_camera1[y][61] = stm_vision_objects_image_camera1[y + 1][61];
                stm_vision_objects_image_camera1[y][62] = stm_vision_objects_image_camera1[y + 1][62];
                stm_vision_objects_image_camera1[y][63] = stm_vision_objects_image_camera1[y + 1][63];
                stm_vision_objects_image_camera1[y][64] = stm_vision_objects_image_camera1[y + 1][64];
            }
            lock_guard<mutex> lock(mtx_stm_vision_objects_image_camera2[999][0]);
            lock_guard<mutex> lock1(mtx_stm_vision_objects_image_camera2[999][1]);
            lock_guard<mutex> lock2(mtx_stm_vision_objects_image_camera2[999][2]);
            lock_guard<mutex> lock3(mtx_stm_vision_objects_image_camera2[999][3]);
            lock_guard<mutex> lock4(mtx_stm_vision_objects_image_camera2[999][4]);
            lock_guard<mutex> lock5(mtx_stm_vision_objects_image_camera2[999][5]);
            lock_guard<mutex> lock6(mtx_stm_vision_objects_image_camera2[999][6]);
            lock_guard<mutex> lock7(mtx_stm_vision_objects_image_camera2[999][7]);
            lock_guard<mutex> lock8(mtx_stm_vision_objects_image_camera2[999][8]);
            lock_guard<mutex> lock9(mtx_stm_vision_objects_image_camera2[999][9]);
            lock_guard<mutex> lock10(mtx_stm_vision_objects_image_camera2[999][10]);
            lock_guard<mutex> lock11(mtx_stm_vision_objects_image_camera2[999][11]);
            lock_guard<mutex> lock12(mtx_stm_vision_objects_image_camera2[999][12]);
            lock_guard<mutex> lock13(mtx_stm_vision_objects_image_camera2[999][13]);
            lock_guard<mutex> lock14(mtx_stm_vision_objects_image_camera2[999][14]);
            lock_guard<mutex> lock15(mtx_stm_vision_objects_image_camera2[999][15]);
            lock_guard<mutex> lock16(mtx_stm_vision_objects_image_camera2[999][16]);
            lock_guard<mutex> lock17(mtx_stm_vision_objects_image_camera2[999][17]);
            lock_guard<mutex> lock18(mtx_stm_vision_objects_image_camera2[999][18]);
            lock_guard<mutex> lock19(mtx_stm_vision_objects_image_camera2[999][19]);
            lock_guard<mutex> lock20(mtx_stm_vision_objects_image_camera2[999][20]);
            lock_guard<mutex> lock21(mtx_stm_vision_objects_image_camera2[999][21]);
            lock_guard<mutex> lock22(mtx_stm_vision_objects_image_camera2[999][22]);
            lock_guard<mutex> lock23(mtx_stm_vision_objects_image_camera2[999][23]);
            lock_guard<mutex> lock24(mtx_stm_vision_objects_image_camera2[999][24]);
            lock_guard<mutex> lock25(mtx_stm_vision_objects_image_camera2[999][25]);
            lock_guard<mutex> lock26(mtx_stm_vision_objects_image_camera2[999][26]);
            lock_guard<mutex> lock27(mtx_stm_vision_objects_image_camera2[999][27]);
            lock_guard<mutex> lock28(mtx_stm_vision_objects_image_camera2[999][28]);
            lock_guard<mutex> lock29(mtx_stm_vision_objects_image_camera2[999][29]);
            lock_guard<mutex> lock30(mtx_stm_vision_objects_image_camera2[999][30]);
            lock_guard<mutex> lock31(mtx_stm_vision_objects_image_camera2[999][31]);
            lock_guard<mutex> lock32(mtx_stm_vision_objects_image_camera2[999][32]);
            lock_guard<mutex> lock33(mtx_stm_vision_objects_image_camera2[999][33]);
            lock_guard<mutex> lock34(mtx_stm_vision_objects_image_camera2[999][34]);
            lock_guard<mutex> lock35(mtx_stm_vision_objects_image_camera2[999][35]);
            lock_guard<mutex> lock36(mtx_stm_vision_objects_image_camera2[999][36]);
            lock_guard<mutex> lock37(mtx_stm_vision_objects_image_camera2[999][37]);
            lock_guard<mutex> lock38(mtx_stm_vision_objects_image_camera2[999][38]);
            lock_guard<mutex> lock39(mtx_stm_vision_objects_image_camera2[999][39]);
            lock_guard<mutex> lock40(mtx_stm_vision_objects_image_camera2[999][40]);
            lock_guard<mutex> lock41(mtx_stm_vision_objects_image_camera2[999][41]);
            lock_guard<mutex> lock42(mtx_stm_vision_objects_image_camera2[999][42]);
            lock_guard<mutex> lock43(mtx_stm_vision_objects_image_camera2[999][43]);
            lock_guard<mutex> lock44(mtx_stm_vision_objects_image_camera2[999][44]);
            lock_guard<mutex> lock45(mtx_stm_vision_objects_image_camera2[999][45]);
            lock_guard<mutex> lock46(mtx_stm_vision_objects_image_camera2[999][46]);
            lock_guard<mutex> lock47(mtx_stm_vision_objects_image_camera2[999][47]);
            lock_guard<mutex> lock48(mtx_stm_vision_objects_image_camera2[999][48]);
            lock_guard<mutex> lock49(mtx_stm_vision_objects_image_camera2[999][49]);
            lock_guard<mutex> lock50(mtx_stm_vision_objects_image_camera2[999][50]);
            lock_guard<mutex> lock51(mtx_stm_vision_objects_image_camera2[999][51]);
            lock_guard<mutex> lock52(mtx_stm_vision_objects_image_camera2[999][52]);
            lock_guard<mutex> lock53(mtx_stm_vision_objects_image_camera2[999][53]);
            lock_guard<mutex> lock54(mtx_stm_vision_objects_image_camera2[999][54]);
            lock_guard<mutex> lock55(mtx_stm_vision_objects_image_camera2[999][55]);
            lock_guard<mutex> lock56(mtx_stm_vision_objects_image_camera2[999][56]);
            lock_guard<mutex> lock57(mtx_stm_vision_objects_image_camera2[999][57]);
            lock_guard<mutex> lock58(mtx_stm_vision_objects_image_camera2[999][58]);
            lock_guard<mutex> lock59(mtx_stm_vision_objects_image_camera2[999][59]);
            lock_guard<mutex> lock60(mtx_stm_vision_objects_image_camera2[999][60]);
            lock_guard<mutex> lock61(mtx_stm_vision_objects_image_camera2[999][61]);
            lock_guard<mutex> lock62(mtx_stm_vision_objects_image_camera2[999][62]);
            lock_guard<mutex> lock63(mtx_stm_vision_objects_image_camera2[999][63]);
            lock_guard<mutex> lock64(mtx_stm_vision_objects_image_camera2[999][64]);
            stm_vision_objects_image_camera2[999][0] = image_location;
            stm_vision_objects_image_camera2[999][1] = image_hash;
            stm_vision_objects_image_camera2[999][2] = image_time;
            stm_vision_objects_image_camera2[999][3] = object_detection_image;
            stm_vision_objects_image_camera2[999][4] = object_detection_image_hash;
            stm_vision_objects_image_camera2[999][5] = object_detection_image_time;
            stm_vision_objects_image_camera2[999][6] = class1;
            stm_vision_objects_image_camera2[999][7] = class1_x;
            stm_vision_objects_image_camera2[999][8] = class1_width;
            stm_vision_objects_image_camera2[999][9] = class1_y;
            stm_vision_objects_image_camera2[999][10] = class1_height;
            stm_vision_objects_image_camera2[999][11] = class1_score;
            stm_vision_objects_image_camera2[999][12] = class2;
            stm_vision_objects_image_camera2[999][13] = class2_x;
            stm_vision_objects_image_camera2[999][14] = class2_width;
            stm_vision_objects_image_camera2[999][15] = class2_y;
            stm_vision_objects_image_camera2[999][16] = class2_height;
            stm_vision_objects_image_camera2[999][17] = class2_score;
            stm_vision_objects_image_camera2[999][18] = class3;
            stm_vision_objects_image_camera2[999][19] = class3_x;
            stm_vision_objects_image_camera2[999][20] = class3_width;
            stm_vision_objects_image_camera2[999][21] = class3_y;
            stm_vision_objects_image_camera2[999][22] = class3_height;
            stm_vision_objects_image_camera2[999][23] = class3_score;
            stm_vision_objects_image_camera2[999][24] = class4;
            stm_vision_objects_image_camera2[999][25] = class4_x;
            stm_vision_objects_image_camera2[999][26] = class4_width;
            stm_vision_objects_image_camera2[999][27] = class4_y;
            stm_vision_objects_image_camera2[999][28] = class4_height;
            stm_vision_objects_image_camera2[999][29] = class4_score;
            stm_vision_objects_image_camera2[999][30] = class5;
            stm_vision_objects_image_camera2[999][31] = class5_x;
            stm_vision_objects_image_camera2[999][32] = class5_width;
            stm_vision_objects_image_camera2[999][33] = class5_y;
            stm_vision_objects_image_camera2[999][34] = class5_height;
            stm_vision_objects_image_camera2[999][35] = class5_score;
            stm_vision_objects_image_camera2[999][36] = class6;
            stm_vision_objects_image_camera2[999][37] = class6_x;
            stm_vision_objects_image_camera2[999][38] = class6_width;
            stm_vision_objects_image_camera2[999][39] = class6_y;
            stm_vision_objects_image_camera2[999][40] = class6_height;
            stm_vision_objects_image_camera2[999][41] = class6_score;
            stm_vision_objects_image_camera2[999][42] = class7;
            stm_vision_objects_image_camera2[999][43] = class7_x;
            stm_vision_objects_image_camera2[999][44] = class7_width;
            stm_vision_objects_image_camera2[999][45] = class7_y;
            stm_vision_objects_image_camera2[999][46] = class7_height;
            stm_vision_objects_image_camera2[999][47] = class7_score;
            stm_vision_objects_image_camera2[999][48] = class8;
            stm_vision_objects_image_camera2[999][49] = class8_x;
            stm_vision_objects_image_camera2[999][50] = class8_width;
            stm_vision_objects_image_camera2[999][51] = class8_y;
            stm_vision_objects_image_camera2[999][52] = class8_height;
            stm_vision_objects_image_camera2[999][53] = class8_score;
            stm_vision_objects_image_camera2[999][54] = class9;
            stm_vision_objects_image_camera2[999][55] = class9_x;
            stm_vision_objects_image_camera2[999][56] = class9_width;
            stm_vision_objects_image_camera2[999][57] = class9_y;
            stm_vision_objects_image_camera2[999][58] = class9_height;
            stm_vision_objects_image_camera2[999][59] = class9_score;
            stm_vision_objects_image_camera2[999][60] = class10_x;
            stm_vision_objects_image_camera2[999][61] = class10_width;
            stm_vision_objects_image_camera2[999][62] = class10_y;
            stm_vision_objects_image_camera2[999][63] = class10_height;
            stm_vision_objects_image_camera2[999][64] = class10_score;
            break;
        }
    }
}

void _ShortTermMemory::stm_vision_objects_image_camera2_funct(string image_location, string image_hash, string image_time, string object_detection_image, string object_detection_image_hash, string object_detection_image_time, string class1, string class1_x, string class1_width, string class1_y, string class1_height, string class1_score, string class2, string class2_x, string class2_width, string class2_y, string class2_height, string class2_score, string class3, string class3_x, string class3_width, string class3_y, string class3_height, string class3_score, string class4, string class4_x, string class4_width, string class4_y, string class4_height, string class4_score, string class5, string class5_x, string class5_width, string class5_y, string class5_height, string class5_score, string class6, string class6_x, string class6_width, string class6_y, string class6_height, string class6_score, string class7, string class7_x, string class7_width, string class7_y, string class7_height, string class7_score, string class8, string class8_x, string class8_width, string class8_y, string class8_height, string class8_score, string class9, string class9_x, string class9_width, string class9_y, string class9_height, string class9_score, string class10, string class10_x, string class10_width, string class10_y, string class10_height, string class10_score)
{
    for (int x = 0; x < 1000; x++)
    {
        if (stm_vision_objects_image_camera2[x][0].empty())
        {
            lock_guard<mutex> lock(mtx_stm_vision_objects_image_camera2[x][0]);
            lock_guard<mutex> lock1(mtx_stm_vision_objects_image_camera2[x][1]);
            lock_guard<mutex> lock2(mtx_stm_vision_objects_image_camera2[x][2]);
            lock_guard<mutex> lock3(mtx_stm_vision_objects_image_camera2[x][3]);
            lock_guard<mutex> lock4(mtx_stm_vision_objects_image_camera2[x][4]);
            lock_guard<mutex> lock5(mtx_stm_vision_objects_image_camera2[x][5]);
            lock_guard<mutex> lock6(mtx_stm_vision_objects_image_camera2[x][6]);
            lock_guard<mutex> lock7(mtx_stm_vision_objects_image_camera2[x][7]);
            lock_guard<mutex> lock8(mtx_stm_vision_objects_image_camera2[x][8]);
            lock_guard<mutex> lock9(mtx_stm_vision_objects_image_camera2[x][9]);
            lock_guard<mutex> lock10(mtx_stm_vision_objects_image_camera2[x][10]);
            lock_guard<mutex> lock11(mtx_stm_vision_objects_image_camera2[x][11]);
            lock_guard<mutex> lock12(mtx_stm_vision_objects_image_camera2[x][12]);
            lock_guard<mutex> lock13(mtx_stm_vision_objects_image_camera2[x][13]);
            lock_guard<mutex> lock14(mtx_stm_vision_objects_image_camera2[x][14]);
            lock_guard<mutex> lock15(mtx_stm_vision_objects_image_camera2[x][15]);
            lock_guard<mutex> lock16(mtx_stm_vision_objects_image_camera2[x][16]);
            lock_guard<mutex> lock17(mtx_stm_vision_objects_image_camera2[x][17]);
            lock_guard<mutex> lock18(mtx_stm_vision_objects_image_camera2[x][18]);
            lock_guard<mutex> lock19(mtx_stm_vision_objects_image_camera2[x][19]);
            lock_guard<mutex> lock20(mtx_stm_vision_objects_image_camera2[x][20]);
            lock_guard<mutex> lock21(mtx_stm_vision_objects_image_camera2[x][21]);
            lock_guard<mutex> lock22(mtx_stm_vision_objects_image_camera2[x][22]);
            lock_guard<mutex> lock23(mtx_stm_vision_objects_image_camera2[x][23]);
            lock_guard<mutex> lock24(mtx_stm_vision_objects_image_camera2[x][24]);
            lock_guard<mutex> lock25(mtx_stm_vision_objects_image_camera2[x][25]);
            lock_guard<mutex> lock26(mtx_stm_vision_objects_image_camera2[x][26]);
            lock_guard<mutex> lock27(mtx_stm_vision_objects_image_camera2[x][27]);
            lock_guard<mutex> lock28(mtx_stm_vision_objects_image_camera2[x][28]);
            lock_guard<mutex> lock29(mtx_stm_vision_objects_image_camera2[x][29]);
            lock_guard<mutex> lock30(mtx_stm_vision_objects_image_camera2[x][30]);
            lock_guard<mutex> lock31(mtx_stm_vision_objects_image_camera2[x][31]);
            lock_guard<mutex> lock32(mtx_stm_vision_objects_image_camera2[x][32]);
            lock_guard<mutex> lock33(mtx_stm_vision_objects_image_camera2[x][33]);
            lock_guard<mutex> lock34(mtx_stm_vision_objects_image_camera2[x][34]);
            lock_guard<mutex> lock35(mtx_stm_vision_objects_image_camera2[x][35]);
            lock_guard<mutex> lock36(mtx_stm_vision_objects_image_camera2[x][36]);
            lock_guard<mutex> lock37(mtx_stm_vision_objects_image_camera2[x][37]);
            lock_guard<mutex> lock38(mtx_stm_vision_objects_image_camera2[x][38]);
            lock_guard<mutex> lock39(mtx_stm_vision_objects_image_camera2[x][39]);
            lock_guard<mutex> lock40(mtx_stm_vision_objects_image_camera2[x][40]);
            lock_guard<mutex> lock41(mtx_stm_vision_objects_image_camera2[x][41]);
            lock_guard<mutex> lock42(mtx_stm_vision_objects_image_camera2[x][42]);
            lock_guard<mutex> lock43(mtx_stm_vision_objects_image_camera2[x][43]);
            lock_guard<mutex> lock44(mtx_stm_vision_objects_image_camera2[x][44]);
            lock_guard<mutex> lock45(mtx_stm_vision_objects_image_camera2[x][45]);
            lock_guard<mutex> lock46(mtx_stm_vision_objects_image_camera2[x][46]);
            lock_guard<mutex> lock47(mtx_stm_vision_objects_image_camera2[x][47]);
            lock_guard<mutex> lock48(mtx_stm_vision_objects_image_camera2[x][48]);
            lock_guard<mutex> lock49(mtx_stm_vision_objects_image_camera2[x][49]);
            lock_guard<mutex> lock50(mtx_stm_vision_objects_image_camera2[x][50]);
            lock_guard<mutex> lock51(mtx_stm_vision_objects_image_camera2[x][51]);
            lock_guard<mutex> lock52(mtx_stm_vision_objects_image_camera2[x][52]);
            lock_guard<mutex> lock53(mtx_stm_vision_objects_image_camera2[x][53]);
            lock_guard<mutex> lock54(mtx_stm_vision_objects_image_camera2[x][54]);
            lock_guard<mutex> lock55(mtx_stm_vision_objects_image_camera2[x][55]);
            lock_guard<mutex> lock56(mtx_stm_vision_objects_image_camera2[x][56]);
            lock_guard<mutex> lock57(mtx_stm_vision_objects_image_camera2[x][57]);
            lock_guard<mutex> lock58(mtx_stm_vision_objects_image_camera2[x][58]);
            lock_guard<mutex> lock59(mtx_stm_vision_objects_image_camera2[x][59]);
            lock_guard<mutex> lock60(mtx_stm_vision_objects_image_camera2[x][60]);
            lock_guard<mutex> lock61(mtx_stm_vision_objects_image_camera2[x][61]);
            lock_guard<mutex> lock62(mtx_stm_vision_objects_image_camera2[x][62]);
            lock_guard<mutex> lock63(mtx_stm_vision_objects_image_camera2[x][63]);
            lock_guard<mutex> lock64(mtx_stm_vision_objects_image_camera2[x][64]);
            stm_vision_objects_image_camera2[x][0] = image_location;
            stm_vision_objects_image_camera2[x][1] = image_hash;
            stm_vision_objects_image_camera2[x][2] = image_time;
            stm_vision_objects_image_camera2[x][3] = object_detection_image;
            stm_vision_objects_image_camera2[x][4] = object_detection_image_hash;
            stm_vision_objects_image_camera2[x][5] = object_detection_image_time;
            stm_vision_objects_image_camera2[x][6] = class1;
            stm_vision_objects_image_camera2[x][7] = class1_x;
            stm_vision_objects_image_camera2[x][8] = class1_width;
            stm_vision_objects_image_camera2[x][9] = class1_y;
            stm_vision_objects_image_camera2[x][10] = class1_height;
            stm_vision_objects_image_camera2[x][11] = class1_score;
            stm_vision_objects_image_camera2[x][12] = class2;
            stm_vision_objects_image_camera2[x][13] = class2_x;
            stm_vision_objects_image_camera2[x][14] = class2_width;
            stm_vision_objects_image_camera2[x][15] = class2_y;
            stm_vision_objects_image_camera2[x][16] = class2_height;
            stm_vision_objects_image_camera2[x][17] = class2_score;
            stm_vision_objects_image_camera2[x][18] = class3;
            stm_vision_objects_image_camera2[x][19] = class3_x;
            stm_vision_objects_image_camera2[x][20] = class3_width;
            stm_vision_objects_image_camera2[x][21] = class3_y;
            stm_vision_objects_image_camera2[x][22] = class3_height;
            stm_vision_objects_image_camera2[x][23] = class3_score;
            stm_vision_objects_image_camera2[x][24] = class4;
            stm_vision_objects_image_camera2[x][25] = class4_x;
            stm_vision_objects_image_camera2[x][26] = class4_width;
            stm_vision_objects_image_camera2[x][27] = class4_y;
            stm_vision_objects_image_camera2[x][28] = class4_height;
            stm_vision_objects_image_camera2[x][29] = class4_score;
            stm_vision_objects_image_camera2[x][30] = class5;
            stm_vision_objects_image_camera2[x][31] = class5_x;
            stm_vision_objects_image_camera2[x][32] = class5_width;
            stm_vision_objects_image_camera2[x][33] = class5_y;
            stm_vision_objects_image_camera2[x][34] = class5_height;
            stm_vision_objects_image_camera2[x][35] = class5_score;
            stm_vision_objects_image_camera2[x][36] = class6;
            stm_vision_objects_image_camera2[x][37] = class6_x;
            stm_vision_objects_image_camera2[x][38] = class6_width;
            stm_vision_objects_image_camera2[x][39] = class6_y;
            stm_vision_objects_image_camera2[x][40] = class6_height;
            stm_vision_objects_image_camera2[x][41] = class6_score;
            stm_vision_objects_image_camera2[x][42] = class7;
            stm_vision_objects_image_camera2[x][43] = class7_x;
            stm_vision_objects_image_camera2[x][44] = class7_width;
            stm_vision_objects_image_camera2[x][45] = class7_y;
            stm_vision_objects_image_camera2[x][46] = class7_height;
            stm_vision_objects_image_camera2[x][47] = class7_score;
            stm_vision_objects_image_camera2[x][48] = class8;
            stm_vision_objects_image_camera2[x][49] = class8_x;
            stm_vision_objects_image_camera2[x][50] = class8_width;
            stm_vision_objects_image_camera2[x][51] = class8_y;
            stm_vision_objects_image_camera2[x][52] = class8_height;
            stm_vision_objects_image_camera2[x][53] = class8_score;
            stm_vision_objects_image_camera2[x][54] = class9;
            stm_vision_objects_image_camera2[x][55] = class9_x;
            stm_vision_objects_image_camera2[x][56] = class9_width;
            stm_vision_objects_image_camera2[x][57] = class9_y;
            stm_vision_objects_image_camera2[x][58] = class9_height;
            stm_vision_objects_image_camera2[x][59] = class9_score;
            stm_vision_objects_image_camera2[x][60] = class10_x;
            stm_vision_objects_image_camera2[x][61] = class10_width;
            stm_vision_objects_image_camera2[x][62] = class10_y;
            stm_vision_objects_image_camera2[x][63] = class10_height;
            stm_vision_objects_image_camera2[x][64] = class10_score;
            break;
        }
        if (!stm_vision_objects_image_camera2[x][0].empty() && x == 999)
        {
            for (int y = 0; y < 999; y++)
            {
                lock_guard<mutex> lock(mtx_stm_vision_objects_image_camera2[y][0]);
                lock_guard<mutex> lock1(mtx_stm_vision_objects_image_camera2[y][1]);
                lock_guard<mutex> lock2(mtx_stm_vision_objects_image_camera2[y][2]);
                lock_guard<mutex> lock3(mtx_stm_vision_objects_image_camera2[y][3]);
                lock_guard<mutex> lock4(mtx_stm_vision_objects_image_camera2[y][4]);
                lock_guard<mutex> lock5(mtx_stm_vision_objects_image_camera2[y][5]);
                lock_guard<mutex> lock6(mtx_stm_vision_objects_image_camera2[y][6]);
                lock_guard<mutex> lock7(mtx_stm_vision_objects_image_camera2[y][7]);
                lock_guard<mutex> lock8(mtx_stm_vision_objects_image_camera2[y][8]);
                lock_guard<mutex> lock9(mtx_stm_vision_objects_image_camera2[y][9]);
                lock_guard<mutex> lock10(mtx_stm_vision_objects_image_camera2[y][10]);
                lock_guard<mutex> lock11(mtx_stm_vision_objects_image_camera2[y][11]);
                lock_guard<mutex> lock12(mtx_stm_vision_objects_image_camera2[y][12]);
                lock_guard<mutex> lock13(mtx_stm_vision_objects_image_camera2[y][13]);
                lock_guard<mutex> lock14(mtx_stm_vision_objects_image_camera2[y][14]);
                lock_guard<mutex> lock15(mtx_stm_vision_objects_image_camera2[y][15]);
                lock_guard<mutex> lock16(mtx_stm_vision_objects_image_camera2[y][16]);
                lock_guard<mutex> lock17(mtx_stm_vision_objects_image_camera2[y][17]);
                lock_guard<mutex> lock18(mtx_stm_vision_objects_image_camera2[y][18]);
                lock_guard<mutex> lock19(mtx_stm_vision_objects_image_camera2[y][19]);
                lock_guard<mutex> lock20(mtx_stm_vision_objects_image_camera2[y][20]);
                lock_guard<mutex> lock21(mtx_stm_vision_objects_image_camera2[y][21]);
                lock_guard<mutex> lock22(mtx_stm_vision_objects_image_camera2[y][22]);
                lock_guard<mutex> lock23(mtx_stm_vision_objects_image_camera2[y][23]);
                lock_guard<mutex> lock24(mtx_stm_vision_objects_image_camera2[y][24]);
                lock_guard<mutex> lock25(mtx_stm_vision_objects_image_camera2[y][25]);
                lock_guard<mutex> lock26(mtx_stm_vision_objects_image_camera2[y][26]);
                lock_guard<mutex> lock27(mtx_stm_vision_objects_image_camera2[y][27]);
                lock_guard<mutex> lock28(mtx_stm_vision_objects_image_camera2[y][28]);
                lock_guard<mutex> lock29(mtx_stm_vision_objects_image_camera2[y][29]);
                lock_guard<mutex> lock30(mtx_stm_vision_objects_image_camera2[y][30]);
                lock_guard<mutex> lock31(mtx_stm_vision_objects_image_camera2[y][31]);
                lock_guard<mutex> lock32(mtx_stm_vision_objects_image_camera2[y][32]);
                lock_guard<mutex> lock33(mtx_stm_vision_objects_image_camera2[y][33]);
                lock_guard<mutex> lock34(mtx_stm_vision_objects_image_camera2[y][34]);
                lock_guard<mutex> lock35(mtx_stm_vision_objects_image_camera2[y][35]);
                lock_guard<mutex> lock36(mtx_stm_vision_objects_image_camera2[y][36]);
                lock_guard<mutex> lock37(mtx_stm_vision_objects_image_camera2[y][37]);
                lock_guard<mutex> lock38(mtx_stm_vision_objects_image_camera2[y][38]);
                lock_guard<mutex> lock39(mtx_stm_vision_objects_image_camera2[y][39]);
                lock_guard<mutex> lock40(mtx_stm_vision_objects_image_camera2[y][40]);
                lock_guard<mutex> lock41(mtx_stm_vision_objects_image_camera2[y][41]);
                lock_guard<mutex> lock42(mtx_stm_vision_objects_image_camera2[y][42]);
                lock_guard<mutex> lock43(mtx_stm_vision_objects_image_camera2[y][43]);
                lock_guard<mutex> lock44(mtx_stm_vision_objects_image_camera2[y][44]);
                lock_guard<mutex> lock45(mtx_stm_vision_objects_image_camera2[y][45]);
                lock_guard<mutex> lock46(mtx_stm_vision_objects_image_camera2[y][46]);
                lock_guard<mutex> lock47(mtx_stm_vision_objects_image_camera2[y][47]);
                lock_guard<mutex> lock48(mtx_stm_vision_objects_image_camera2[y][48]);
                lock_guard<mutex> lock49(mtx_stm_vision_objects_image_camera2[y][49]);
                lock_guard<mutex> lock50(mtx_stm_vision_objects_image_camera2[y][50]);
                lock_guard<mutex> lock51(mtx_stm_vision_objects_image_camera2[y][51]);
                lock_guard<mutex> lock52(mtx_stm_vision_objects_image_camera2[y][52]);
                lock_guard<mutex> lock53(mtx_stm_vision_objects_image_camera2[y][53]);
                lock_guard<mutex> lock54(mtx_stm_vision_objects_image_camera2[y][54]);
                lock_guard<mutex> lock55(mtx_stm_vision_objects_image_camera2[y][55]);
                lock_guard<mutex> lock56(mtx_stm_vision_objects_image_camera2[y][56]);
                lock_guard<mutex> lock57(mtx_stm_vision_objects_image_camera2[y][57]);
                lock_guard<mutex> lock58(mtx_stm_vision_objects_image_camera2[y][58]);
                lock_guard<mutex> lock59(mtx_stm_vision_objects_image_camera2[y][59]);
                lock_guard<mutex> lock60(mtx_stm_vision_objects_image_camera2[y][60]);
                lock_guard<mutex> lock61(mtx_stm_vision_objects_image_camera2[y][61]);
                lock_guard<mutex> lock62(mtx_stm_vision_objects_image_camera2[y][62]);
                lock_guard<mutex> lock63(mtx_stm_vision_objects_image_camera2[y][63]);
                lock_guard<mutex> lock64(mtx_stm_vision_objects_image_camera2[y][64]);
                lock_guard<mutex> lock65(mtx_stm_vision_objects_image_camera2[y + 1][0]);
                lock_guard<mutex> lock66(mtx_stm_vision_objects_image_camera2[y + 1][1]);
                lock_guard<mutex> lock67(mtx_stm_vision_objects_image_camera2[y + 1][2]);
                lock_guard<mutex> lock68(mtx_stm_vision_objects_image_camera2[y + 1][3]);
                lock_guard<mutex> lock69(mtx_stm_vision_objects_image_camera2[y + 1][4]);
                lock_guard<mutex> lock70(mtx_stm_vision_objects_image_camera2[y + 1][5]);
                lock_guard<mutex> lock71(mtx_stm_vision_objects_image_camera2[y + 1][6]);
                lock_guard<mutex> lock72(mtx_stm_vision_objects_image_camera2[y + 1][7]);
                lock_guard<mutex> lock73(mtx_stm_vision_objects_image_camera2[y + 1][8]);
                lock_guard<mutex> lock74(mtx_stm_vision_objects_image_camera2[y + 1][9]);
                lock_guard<mutex> lock75(mtx_stm_vision_objects_image_camera2[y + 1][10]);
                lock_guard<mutex> lock76(mtx_stm_vision_objects_image_camera2[y + 1][11]);
                lock_guard<mutex> lock77(mtx_stm_vision_objects_image_camera2[y + 1][12]);
                lock_guard<mutex> lock78(mtx_stm_vision_objects_image_camera2[y + 1][13]);
                lock_guard<mutex> lock79(mtx_stm_vision_objects_image_camera2[y + 1][14]);
                lock_guard<mutex> lock80(mtx_stm_vision_objects_image_camera2[y + 1][15]);
                lock_guard<mutex> lock81(mtx_stm_vision_objects_image_camera2[y + 1][16]);
                lock_guard<mutex> lock82(mtx_stm_vision_objects_image_camera2[y + 1][17]);
                lock_guard<mutex> lock83(mtx_stm_vision_objects_image_camera2[y + 1][18]);
                lock_guard<mutex> lock84(mtx_stm_vision_objects_image_camera2[y + 1][19]);
                lock_guard<mutex> lock85(mtx_stm_vision_objects_image_camera2[y + 1][20]);
                lock_guard<mutex> lock86(mtx_stm_vision_objects_image_camera2[y + 1][21]);
                lock_guard<mutex> lock87(mtx_stm_vision_objects_image_camera2[y + 1][22]);
                lock_guard<mutex> lock88(mtx_stm_vision_objects_image_camera2[y + 1][23]);
                lock_guard<mutex> lock89(mtx_stm_vision_objects_image_camera2[y + 1][24]);
                lock_guard<mutex> lock90(mtx_stm_vision_objects_image_camera2[y + 1][25]);
                lock_guard<mutex> lock91(mtx_stm_vision_objects_image_camera2[y + 1][26]);
                lock_guard<mutex> lock92(mtx_stm_vision_objects_image_camera2[y + 1][27]);
                lock_guard<mutex> lock93(mtx_stm_vision_objects_image_camera2[y + 1][28]);
                lock_guard<mutex> lock94(mtx_stm_vision_objects_image_camera2[y + 1][29]);
                lock_guard<mutex> lock95(mtx_stm_vision_objects_image_camera2[y + 1][30]);
                lock_guard<mutex> lock96(mtx_stm_vision_objects_image_camera2[y + 1][31]);
                lock_guard<mutex> lock97(mtx_stm_vision_objects_image_camera2[y + 1][32]);
                lock_guard<mutex> lock98(mtx_stm_vision_objects_image_camera2[y + 1][33]);
                lock_guard<mutex> lock99(mtx_stm_vision_objects_image_camera2[y + 1][34]);
                lock_guard<mutex> lock100(mtx_stm_vision_objects_image_camera2[y + 1][35]);
                lock_guard<mutex> lock101(mtx_stm_vision_objects_image_camera2[y + 1][36]);
                lock_guard<mutex> lock102(mtx_stm_vision_objects_image_camera2[y + 1][37]);
                lock_guard<mutex> lock103(mtx_stm_vision_objects_image_camera2[y + 1][38]);
                lock_guard<mutex> lock104(mtx_stm_vision_objects_image_camera2[y + 1][39]);
                lock_guard<mutex> lock105(mtx_stm_vision_objects_image_camera2[y + 1][40]);
                lock_guard<mutex> lock106(mtx_stm_vision_objects_image_camera2[y + 1][41]);
                lock_guard<mutex> lock107(mtx_stm_vision_objects_image_camera2[y + 1][42]);
                lock_guard<mutex> lock108(mtx_stm_vision_objects_image_camera2[y + 1][43]);
                lock_guard<mutex> lock109(mtx_stm_vision_objects_image_camera2[y + 1][44]);
                lock_guard<mutex> lock110(mtx_stm_vision_objects_image_camera2[y + 1][45]);
                lock_guard<mutex> lock111(mtx_stm_vision_objects_image_camera2[y + 1][46]);
                lock_guard<mutex> lock112(mtx_stm_vision_objects_image_camera2[y + 1][47]);
                lock_guard<mutex> lock113(mtx_stm_vision_objects_image_camera2[y + 1][48]);
                lock_guard<mutex> lock114(mtx_stm_vision_objects_image_camera2[y + 1][49]);
                lock_guard<mutex> lock115(mtx_stm_vision_objects_image_camera2[y + 1][50]);
                lock_guard<mutex> lock116(mtx_stm_vision_objects_image_camera2[y + 1][51]);
                lock_guard<mutex> lock117(mtx_stm_vision_objects_image_camera2[y + 1][52]);
                lock_guard<mutex> lock118(mtx_stm_vision_objects_image_camera2[y + 1][53]);
                lock_guard<mutex> lock119(mtx_stm_vision_objects_image_camera2[y + 1][54]);
                lock_guard<mutex> lock120(mtx_stm_vision_objects_image_camera2[y + 1][55]);
                lock_guard<mutex> lock121(mtx_stm_vision_objects_image_camera2[y + 1][56]);
                lock_guard<mutex> lock122(mtx_stm_vision_objects_image_camera2[y + 1][57]);
                lock_guard<mutex> lock123(mtx_stm_vision_objects_image_camera2[y + 1][58]);
                lock_guard<mutex> lock124(mtx_stm_vision_objects_image_camera2[y + 1][59]);
                lock_guard<mutex> lock125(mtx_stm_vision_objects_image_camera2[y + 1][60]);
                lock_guard<mutex> lock126(mtx_stm_vision_objects_image_camera2[y + 1][61]);
                lock_guard<mutex> lock127(mtx_stm_vision_objects_image_camera2[y + 1][62]);
                lock_guard<mutex> lock128(mtx_stm_vision_objects_image_camera2[y + 1][63]);
                lock_guard<mutex> lock129(mtx_stm_vision_objects_image_camera2[y + 1][64]);
                stm_vision_objects_image_camera2[y][0] = stm_vision_objects_image_camera2[y + 1][0];
                stm_vision_objects_image_camera2[y][1] = stm_vision_objects_image_camera2[y + 1][1];
                stm_vision_objects_image_camera2[y][2] = stm_vision_objects_image_camera2[y + 1][2];
                stm_vision_objects_image_camera2[y][3] = stm_vision_objects_image_camera2[y + 1][3];
                stm_vision_objects_image_camera2[y][4] = stm_vision_objects_image_camera2[y + 1][4];
                stm_vision_objects_image_camera2[y][5] = stm_vision_objects_image_camera2[y + 1][5];
                stm_vision_objects_image_camera2[y][6] = stm_vision_objects_image_camera2[y + 1][6];
                stm_vision_objects_image_camera2[y][7] = stm_vision_objects_image_camera2[y + 1][7];
                stm_vision_objects_image_camera2[y][8] = stm_vision_objects_image_camera2[y + 1][8];
                stm_vision_objects_image_camera2[y][9] = stm_vision_objects_image_camera2[y + 1][9];
                stm_vision_objects_image_camera2[y][10] = stm_vision_objects_image_camera2[y + 1][0];
                stm_vision_objects_image_camera2[y][11] = stm_vision_objects_image_camera2[y + 1][11];
                stm_vision_objects_image_camera2[y][12] = stm_vision_objects_image_camera2[y + 1][12];
                stm_vision_objects_image_camera2[y][13] = stm_vision_objects_image_camera2[y + 1][13];
                stm_vision_objects_image_camera2[y][14] = stm_vision_objects_image_camera2[y + 1][14];
                stm_vision_objects_image_camera2[y][15] = stm_vision_objects_image_camera2[y + 1][15];
                stm_vision_objects_image_camera2[y][16] = stm_vision_objects_image_camera2[y + 1][16];
                stm_vision_objects_image_camera2[y][17] = stm_vision_objects_image_camera2[y + 1][17];
                stm_vision_objects_image_camera2[y][18] = stm_vision_objects_image_camera2[y + 1][18];
                stm_vision_objects_image_camera2[y][19] = stm_vision_objects_image_camera2[y + 1][19];
                stm_vision_objects_image_camera2[y][20] = stm_vision_objects_image_camera2[y + 1][20];
                stm_vision_objects_image_camera2[y][21] = stm_vision_objects_image_camera2[y + 1][21];
                stm_vision_objects_image_camera2[y][22] = stm_vision_objects_image_camera2[y + 1][22];
                stm_vision_objects_image_camera2[y][23] = stm_vision_objects_image_camera2[y + 1][23];
                stm_vision_objects_image_camera2[y][24] = stm_vision_objects_image_camera2[y + 1][24];
                stm_vision_objects_image_camera2[y][25] = stm_vision_objects_image_camera2[y + 1][25];
                stm_vision_objects_image_camera2[y][26] = stm_vision_objects_image_camera2[y + 1][26];
                stm_vision_objects_image_camera2[y][27] = stm_vision_objects_image_camera2[y + 1][27];
                stm_vision_objects_image_camera2[y][28] = stm_vision_objects_image_camera2[y + 1][28];
                stm_vision_objects_image_camera2[y][29] = stm_vision_objects_image_camera2[y + 1][29];
                stm_vision_objects_image_camera2[y][30] = stm_vision_objects_image_camera2[y + 1][30];
                stm_vision_objects_image_camera2[y][31] = stm_vision_objects_image_camera2[y + 1][31];
                stm_vision_objects_image_camera2[y][32] = stm_vision_objects_image_camera2[y + 1][32];
                stm_vision_objects_image_camera2[y][33] = stm_vision_objects_image_camera2[y + 1][33];
                stm_vision_objects_image_camera2[y][34] = stm_vision_objects_image_camera2[y + 1][34];
                stm_vision_objects_image_camera2[y][35] = stm_vision_objects_image_camera2[y + 1][35];
                stm_vision_objects_image_camera2[y][36] = stm_vision_objects_image_camera2[y + 1][36];
                stm_vision_objects_image_camera2[y][37] = stm_vision_objects_image_camera2[y + 1][37];
                stm_vision_objects_image_camera2[y][38] = stm_vision_objects_image_camera2[y + 1][38];
                stm_vision_objects_image_camera2[y][39] = stm_vision_objects_image_camera2[y + 1][39];
                stm_vision_objects_image_camera2[y][40] = stm_vision_objects_image_camera2[y + 1][40];
                stm_vision_objects_image_camera2[y][41] = stm_vision_objects_image_camera2[y + 1][41];
                stm_vision_objects_image_camera2[y][42] = stm_vision_objects_image_camera2[y + 1][42];
                stm_vision_objects_image_camera2[y][43] = stm_vision_objects_image_camera2[y + 1][43];
                stm_vision_objects_image_camera2[y][44] = stm_vision_objects_image_camera2[y + 1][44];
                stm_vision_objects_image_camera2[y][45] = stm_vision_objects_image_camera2[y + 1][45];
                stm_vision_objects_image_camera2[y][46] = stm_vision_objects_image_camera2[y + 1][46];
                stm_vision_objects_image_camera2[y][47] = stm_vision_objects_image_camera2[y + 1][47];
                stm_vision_objects_image_camera2[y][48] = stm_vision_objects_image_camera2[y + 1][48];
                stm_vision_objects_image_camera2[y][49] = stm_vision_objects_image_camera2[y + 1][49];
                stm_vision_objects_image_camera2[y][50] = stm_vision_objects_image_camera2[y + 1][50];
                stm_vision_objects_image_camera2[y][51] = stm_vision_objects_image_camera2[y + 1][51];
                stm_vision_objects_image_camera2[y][52] = stm_vision_objects_image_camera2[y + 1][52];
                stm_vision_objects_image_camera2[y][53] = stm_vision_objects_image_camera2[y + 1][53];
                stm_vision_objects_image_camera2[y][54] = stm_vision_objects_image_camera2[y + 1][54];
                stm_vision_objects_image_camera2[y][55] = stm_vision_objects_image_camera2[y + 1][55];
                stm_vision_objects_image_camera2[y][56] = stm_vision_objects_image_camera2[y + 1][56];
                stm_vision_objects_image_camera2[y][57] = stm_vision_objects_image_camera2[y + 1][57];
                stm_vision_objects_image_camera2[y][58] = stm_vision_objects_image_camera2[y + 1][58];
                stm_vision_objects_image_camera2[y][59] = stm_vision_objects_image_camera2[y + 1][59];
                stm_vision_objects_image_camera2[y][60] = stm_vision_objects_image_camera2[y + 1][60];
                stm_vision_objects_image_camera2[y][61] = stm_vision_objects_image_camera2[y + 1][61];
                stm_vision_objects_image_camera2[y][62] = stm_vision_objects_image_camera2[y + 1][62];
                stm_vision_objects_image_camera2[y][63] = stm_vision_objects_image_camera2[y + 1][63];
                stm_vision_objects_image_camera2[y][64] = stm_vision_objects_image_camera2[y + 1][64];
            }
            lock_guard<mutex> lock(mtx_stm_vision_objects_image_camera2[999][0]);
            lock_guard<mutex> lock1(mtx_stm_vision_objects_image_camera2[999][1]);
            lock_guard<mutex> lock2(mtx_stm_vision_objects_image_camera2[999][2]);
            lock_guard<mutex> lock3(mtx_stm_vision_objects_image_camera2[999][3]);
            lock_guard<mutex> lock4(mtx_stm_vision_objects_image_camera2[999][4]);
            lock_guard<mutex> lock5(mtx_stm_vision_objects_image_camera2[999][5]);
            lock_guard<mutex> lock6(mtx_stm_vision_objects_image_camera2[999][6]);
            lock_guard<mutex> lock7(mtx_stm_vision_objects_image_camera2[999][7]);
            lock_guard<mutex> lock8(mtx_stm_vision_objects_image_camera2[999][8]);
            lock_guard<mutex> lock9(mtx_stm_vision_objects_image_camera2[999][9]);
            lock_guard<mutex> lock10(mtx_stm_vision_objects_image_camera2[999][10]);
            lock_guard<mutex> lock11(mtx_stm_vision_objects_image_camera2[999][11]);
            lock_guard<mutex> lock12(mtx_stm_vision_objects_image_camera2[999][12]);
            lock_guard<mutex> lock13(mtx_stm_vision_objects_image_camera2[999][13]);
            lock_guard<mutex> lock14(mtx_stm_vision_objects_image_camera2[999][14]);
            lock_guard<mutex> lock15(mtx_stm_vision_objects_image_camera2[999][15]);
            lock_guard<mutex> lock16(mtx_stm_vision_objects_image_camera2[999][16]);
            lock_guard<mutex> lock17(mtx_stm_vision_objects_image_camera2[999][17]);
            lock_guard<mutex> lock18(mtx_stm_vision_objects_image_camera2[999][18]);
            lock_guard<mutex> lock19(mtx_stm_vision_objects_image_camera2[999][19]);
            lock_guard<mutex> lock20(mtx_stm_vision_objects_image_camera2[999][20]);
            lock_guard<mutex> lock21(mtx_stm_vision_objects_image_camera2[999][21]);
            lock_guard<mutex> lock22(mtx_stm_vision_objects_image_camera2[999][22]);
            lock_guard<mutex> lock23(mtx_stm_vision_objects_image_camera2[999][23]);
            lock_guard<mutex> lock24(mtx_stm_vision_objects_image_camera2[999][24]);
            lock_guard<mutex> lock25(mtx_stm_vision_objects_image_camera2[999][25]);
            lock_guard<mutex> lock26(mtx_stm_vision_objects_image_camera2[999][26]);
            lock_guard<mutex> lock27(mtx_stm_vision_objects_image_camera2[999][27]);
            lock_guard<mutex> lock28(mtx_stm_vision_objects_image_camera2[999][28]);
            lock_guard<mutex> lock29(mtx_stm_vision_objects_image_camera2[999][29]);
            lock_guard<mutex> lock30(mtx_stm_vision_objects_image_camera2[999][30]);
            lock_guard<mutex> lock31(mtx_stm_vision_objects_image_camera2[999][31]);
            lock_guard<mutex> lock32(mtx_stm_vision_objects_image_camera2[999][32]);
            lock_guard<mutex> lock33(mtx_stm_vision_objects_image_camera2[999][33]);
            lock_guard<mutex> lock34(mtx_stm_vision_objects_image_camera2[999][34]);
            lock_guard<mutex> lock35(mtx_stm_vision_objects_image_camera2[999][35]);
            lock_guard<mutex> lock36(mtx_stm_vision_objects_image_camera2[999][36]);
            lock_guard<mutex> lock37(mtx_stm_vision_objects_image_camera2[999][37]);
            lock_guard<mutex> lock38(mtx_stm_vision_objects_image_camera2[999][38]);
            lock_guard<mutex> lock39(mtx_stm_vision_objects_image_camera2[999][39]);
            lock_guard<mutex> lock40(mtx_stm_vision_objects_image_camera2[999][40]);
            lock_guard<mutex> lock41(mtx_stm_vision_objects_image_camera2[999][41]);
            lock_guard<mutex> lock42(mtx_stm_vision_objects_image_camera2[999][42]);
            lock_guard<mutex> lock43(mtx_stm_vision_objects_image_camera2[999][43]);
            lock_guard<mutex> lock44(mtx_stm_vision_objects_image_camera2[999][44]);
            lock_guard<mutex> lock45(mtx_stm_vision_objects_image_camera2[999][45]);
            lock_guard<mutex> lock46(mtx_stm_vision_objects_image_camera2[999][46]);
            lock_guard<mutex> lock47(mtx_stm_vision_objects_image_camera2[999][47]);
            lock_guard<mutex> lock48(mtx_stm_vision_objects_image_camera2[999][48]);
            lock_guard<mutex> lock49(mtx_stm_vision_objects_image_camera2[999][49]);
            lock_guard<mutex> lock50(mtx_stm_vision_objects_image_camera2[999][50]);
            lock_guard<mutex> lock51(mtx_stm_vision_objects_image_camera2[999][51]);
            lock_guard<mutex> lock52(mtx_stm_vision_objects_image_camera2[999][52]);
            lock_guard<mutex> lock53(mtx_stm_vision_objects_image_camera2[999][53]);
            lock_guard<mutex> lock54(mtx_stm_vision_objects_image_camera2[999][54]);
            lock_guard<mutex> lock55(mtx_stm_vision_objects_image_camera2[999][55]);
            lock_guard<mutex> lock56(mtx_stm_vision_objects_image_camera2[999][56]);
            lock_guard<mutex> lock57(mtx_stm_vision_objects_image_camera2[999][57]);
            lock_guard<mutex> lock58(mtx_stm_vision_objects_image_camera2[999][58]);
            lock_guard<mutex> lock59(mtx_stm_vision_objects_image_camera2[999][59]);
            lock_guard<mutex> lock60(mtx_stm_vision_objects_image_camera2[999][60]);
            lock_guard<mutex> lock61(mtx_stm_vision_objects_image_camera2[999][61]);
            lock_guard<mutex> lock62(mtx_stm_vision_objects_image_camera2[999][62]);
            lock_guard<mutex> lock63(mtx_stm_vision_objects_image_camera2[999][63]);
            lock_guard<mutex> lock64(mtx_stm_vision_objects_image_camera2[999][64]);
            stm_vision_objects_image_camera2[999][0] = image_location;
            stm_vision_objects_image_camera2[999][1] = image_hash;
            stm_vision_objects_image_camera2[999][2] = image_time;
            stm_vision_objects_image_camera2[999][3] = object_detection_image;
            stm_vision_objects_image_camera2[999][4] = object_detection_image_hash;
            stm_vision_objects_image_camera2[999][5] = object_detection_image_time;
            stm_vision_objects_image_camera2[999][6] = class1;
            stm_vision_objects_image_camera2[999][7] = class1_x;
            stm_vision_objects_image_camera2[999][8] = class1_width;
            stm_vision_objects_image_camera2[999][9] = class1_y;
            stm_vision_objects_image_camera2[999][10] = class1_height;
            stm_vision_objects_image_camera2[999][11] = class1_score;
            stm_vision_objects_image_camera2[999][12] = class2;
            stm_vision_objects_image_camera2[999][13] = class2_x;
            stm_vision_objects_image_camera2[999][14] = class2_width;
            stm_vision_objects_image_camera2[999][15] = class2_y;
            stm_vision_objects_image_camera2[999][16] = class2_height;
            stm_vision_objects_image_camera2[999][17] = class2_score;
            stm_vision_objects_image_camera2[999][18] = class3;
            stm_vision_objects_image_camera2[999][19] = class3_x;
            stm_vision_objects_image_camera2[999][20] = class3_width;
            stm_vision_objects_image_camera2[999][21] = class3_y;
            stm_vision_objects_image_camera2[999][22] = class3_height;
            stm_vision_objects_image_camera2[999][23] = class3_score;
            stm_vision_objects_image_camera2[999][24] = class4;
            stm_vision_objects_image_camera2[999][25] = class4_x;
            stm_vision_objects_image_camera2[999][26] = class4_width;
            stm_vision_objects_image_camera2[999][27] = class4_y;
            stm_vision_objects_image_camera2[999][28] = class4_height;
            stm_vision_objects_image_camera2[999][29] = class4_score;
            stm_vision_objects_image_camera2[999][30] = class5;
            stm_vision_objects_image_camera2[999][31] = class5_x;
            stm_vision_objects_image_camera2[999][32] = class5_width;
            stm_vision_objects_image_camera2[999][33] = class5_y;
            stm_vision_objects_image_camera2[999][34] = class5_height;
            stm_vision_objects_image_camera2[999][35] = class5_score;
            stm_vision_objects_image_camera2[999][36] = class6;
            stm_vision_objects_image_camera2[999][37] = class6_x;
            stm_vision_objects_image_camera2[999][38] = class6_width;
            stm_vision_objects_image_camera2[999][39] = class6_y;
            stm_vision_objects_image_camera2[999][40] = class6_height;
            stm_vision_objects_image_camera2[999][41] = class6_score;
            stm_vision_objects_image_camera2[999][42] = class7;
            stm_vision_objects_image_camera2[999][43] = class7_x;
            stm_vision_objects_image_camera2[999][44] = class7_width;
            stm_vision_objects_image_camera2[999][45] = class7_y;
            stm_vision_objects_image_camera2[999][46] = class7_height;
            stm_vision_objects_image_camera2[999][47] = class7_score;
            stm_vision_objects_image_camera2[999][48] = class8;
            stm_vision_objects_image_camera2[999][49] = class8_x;
            stm_vision_objects_image_camera2[999][50] = class8_width;
            stm_vision_objects_image_camera2[999][51] = class8_y;
            stm_vision_objects_image_camera2[999][52] = class8_height;
            stm_vision_objects_image_camera2[999][53] = class8_score;
            stm_vision_objects_image_camera2[999][54] = class9;
            stm_vision_objects_image_camera2[999][55] = class9_x;
            stm_vision_objects_image_camera2[999][56] = class9_width;
            stm_vision_objects_image_camera2[999][57] = class9_y;
            stm_vision_objects_image_camera2[999][58] = class9_height;
            stm_vision_objects_image_camera2[999][59] = class9_score;
            stm_vision_objects_image_camera2[999][60] = class10_x;
            stm_vision_objects_image_camera2[999][61] = class10_width;
            stm_vision_objects_image_camera2[999][62] = class10_y;
            stm_vision_objects_image_camera2[999][63] = class10_height;
            stm_vision_objects_image_camera2[999][64] = class10_score;
            break;
        }
    }
}

void _ShortTermMemory::stm_vision_actions_image_path_funct()
{

}

//void _ShortTermMemory::stm_vision_objects_text_funct()
//{
//
//}

void _ShortTermMemory::stm_vision_analysis_funct(string image_location, string image_hash, string image_time, string image_analysis, string image_analysis_time)
{
    for (int x = 0; x < 1000; x++)
    {
        if (stm_vision_camera1[x][0].empty())
        {
            lock_guard<mutex> lock(mtx_stm_vision_camera1[x][0]);
            lock_guard<mutex> lock1(mtx_stm_vision_camera1[x][1]);
            lock_guard<mutex> lock2(mtx_stm_vision_camera1[x][2]);
            lock_guard<mutex> lock3(mtx_stm_vision_camera1[x][3]);
            lock_guard<mutex> lock4(mtx_stm_vision_camera1[x][4]);
            stm_vision_camera1[x][0] = image_location;
            stm_vision_camera1[x][1] = image_hash;
            stm_vision_camera1[x][2] = image_time;
            stm_vision_camera1[x][3] = image_analysis;
            stm_vision_camera1[x][4] = image_analysis_time;
            break;
        }
        if (!stm_vision_camera1[x][0].empty() && x == 999)
        {
            for (int y = 0; y < 999; y++)
            {
                lock_guard<mutex> lock(mtx_stm_vision_camera1[y][0]);
                lock_guard<mutex> lock1(mtx_stm_vision_camera1[y][1]);
                lock_guard<mutex> lock2(mtx_stm_vision_camera1[y][2]);
                lock_guard<mutex> lock3(mtx_stm_vision_camera1[y][3]);
                lock_guard<mutex> lock4(mtx_stm_vision_camera1[y][4]);
                lock_guard<mutex> lock5(mtx_stm_vision_camera1[y + 1][0]);
                lock_guard<mutex> lock6(mtx_stm_vision_camera1[y + 1][1]);
                lock_guard<mutex> lock7(mtx_stm_vision_camera1[y + 1][2]);
                lock_guard<mutex> lock8(mtx_stm_vision_camera1[y + 1][3]);
                lock_guard<mutex> lock9(mtx_stm_vision_camera1[y + 1][4]);
                stm_vision_camera1[y][0] = stm_vision_camera1[y + 1][0];
                stm_vision_camera1[y][1] = stm_vision_camera1[y + 1][1];
                stm_vision_camera1[y][2] = stm_vision_camera1[y + 1][2];
                stm_vision_camera1[y][3] = stm_vision_camera1[y + 1][3];
                stm_vision_camera1[y][4] = stm_vision_camera1[y + 1][4];

            }
            lock_guard<mutex> lock(mtx_stm_vision_camera1[999][0]);
            lock_guard<mutex> lock1(mtx_stm_vision_camera1[999][1]);
            lock_guard<mutex> lock2(mtx_stm_vision_camera1[999][2]);
            lock_guard<mutex> lock3(mtx_stm_vision_camera1[999][3]);
            lock_guard<mutex> lock4(mtx_stm_vision_camera1[999][4]);
            stm_vision_camera1[999][0] = image_location;
            stm_vision_camera1[999][1] = image_hash;
            stm_vision_camera1[999][2] = image_time;
            stm_vision_camera1[999][3] = image_analysis;
            stm_vision_camera1[999][4] = image_analysis_time;
            break;
        }
    }
}

void _ShortTermMemory::stm_typing_text_funct()
{

}

void _ShortTermMemory::stm_Reference_pos_gps_north_funct()
{

}

void _ShortTermMemory::stm_Reference_pos_gps_west_funct()
{

}

void _ShortTermMemory::stm_Reference_pos_gps_elevation_funct()
{

}

void _ShortTermMemory::stm_Reference_pos_gps_image_funct()
{

}

void _ShortTermMemory::stm_pos_gps_north_text_funct()
{

}

void _ShortTermMemory::stm_pos_gps_west_text_funct()
{

}

void _ShortTermMemory::stm_pos_gps_elevation_text_funct()
{

}

void _ShortTermMemory::stm_pos_x_funct()
{

}

void _ShortTermMemory::stm_pos_y_funct()
{

}

void _ShortTermMemory::stm_pos_z_funct()
{

}

void _ShortTermMemory::stm_simple_text_funct()
{

}

void _ShortTermMemory::stm_simple_image_funct()
{

}

// This function writes new data to short term memory
//  Invokation: This function will be invoked as its own thread as all data members are updated
//  Potential problem: The CPU might write to short term memory too quickly. Functions that use short term memory might fail to read STM effectivelyas the data members are moved arround too fast
//      To negate this, functions that use STM can execute as fast as they want, however, additions and modifications to STM must wait a small determined time
//void _ShortTermMemory::AddShortTermMemory(string _vision_path_camera1, string _vision_path_camera2, string _sound_path, string _speech_dialogue, string _reading_text, string _action1_text, string _action2_text, string _action3_text, string _vision_objects_image_path, string _vision_actions_image_path, string _vision_objects_text_camera1, string _vision_objects_text_camera2, string _vision_analysis_text, string _typing_text, string __Reference_pos_gps_north, string __Reference_pos_gps_west, string __Reference_pos_gps_elevation, string __Reference_pos_gps_image, string _pos_gps_north, string _pos_gps_west, string _pos_gps_elevation, string _pos_x, string _pos_y, string _pos_z)
//{
//    TimeFormat current_time;
//    int wait_milliseconds;
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
//            if (stm_vision_path_camera1[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_vision_path_camera1[x][0] = _vision_path_camera1;
//                stm_vision_path_camera1[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_vision_path_camera1[x][0]: " << stm_vision_path_camera1[x][0] << endl;
//                //cout << "stm_vision_path_camera1[x][1]: " << stm_vision_path_camera1[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        // The stm item is full, delete the oldest and move everything up
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_vision_path_camera1[0][0].clear();
//            stm_vision_path_camera1[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_vision_path_camera1[y][0] = stm_vision_path_camera1[y + 1][0];
//                    stm_vision_path_camera1[y][1] = stm_vision_path_camera1[y + 1][1];
//                }
//            }
//
//            stm_vision_path_camera1[999][0] = _vision_path_camera1;
//            stm_vision_path_camera1[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_vision_path_camera2 != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_vision_path_camera2[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_vision_path_camera2[x][0] = _vision_path_camera2;
//                stm_vision_path_camera2[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_vision_path_camera2[x][0]: " << stm_vision_path_camera2[x][0] << endl;
//                //cout << "stm_vision_path_camera2[x][1]: " << stm_vision_path_camera2[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        // The stm item is full, delete the oldest and move everything up
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_vision_path_camera2[0][0].clear();
//            stm_vision_path_camera2[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_vision_path_camera2[y][0] = stm_vision_path_camera2[y + 1][0];
//                    stm_vision_path_camera2[y][1] = stm_vision_path_camera2[y + 1][1];
//                }
//            }
//            stm_vision_path_camera2[999][0] = _vision_path_camera1;
//            stm_vision_path_camera2[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_sound_path != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_sound_path[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_sound_path[x][0] = _sound_path;
//                stm_sound_path[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_sound_path[x][0]: " << stm_sound_path[x][0] << endl;
//                //cout << "stm_sound_path[x][1]: " << stm_sound_path[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        // The stm item is full, delete the oldest and move everything up
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_sound_path[0][0].clear();
//            stm_sound_path[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_sound_path[y][0] = stm_sound_path[y + 1][0];
//                    stm_sound_path[y][1] = stm_sound_path[y + 1][1];
//                }
//            }
//
//            stm_sound_path[999][0] = _sound_path;
//            stm_sound_path[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_speech_dialogue != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_speech_dialogue[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_speech_dialogue[x][0] = _speech_dialogue;
//                stm_speech_dialogue[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_speech_dialogue[x][0]: " << stm_speech_dialogue[x][0] << endl;
//                //cout << "stm_speech_dialogue[x][1]: " << stm_speech_dialogue[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_speech_dialogue[0][0].clear();
//            stm_speech_dialogue[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_speech_dialogue[y][0] = stm_speech_dialogue[y + 1][0];
//                    stm_speech_dialogue[y][1] = stm_speech_dialogue[y + 1][1];
//                }
//            }
//
//            stm_speech_dialogue[999][0] = _speech_dialogue;
//            stm_speech_dialogue[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_reading_text != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_reading_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_reading_text[x][0] = _reading_text;
//                stm_reading_text[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_reading_text[x][0]: " << stm_reading_text[x][0] << endl;
//                //cout << "stm_reading_text[x][1]: " << stm_reading_text[x][1] << endl;
//                boolean = false;
//            }
//        }
//
//        if (boolean)
//        {
//
//            lock_guard<mutex> lock(stm);
//            stm_reading_text[0][0].clear();
//            stm_reading_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_reading_text[y][0] = stm_reading_text[y + 1][0];
//                    stm_reading_text[y][1] = stm_reading_text[y + 1][1];
//                }
//            }
//
//            stm_reading_text[999][0] = _reading_text;
//            stm_reading_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_action1_text != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_action1_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_action1_text[x][0] = _action1_text;
//                stm_action1_text[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_action1_text[x][0]: " << stm_action1_text[x][0] << endl;
//                //cout << "stm_action1_text[x][1]: " << stm_action1_text[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            stm_action1_text[0][0].clear();
//            stm_action1_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_action1_text[y][0] = stm_action1_text[y + 1][0];
//                    stm_action1_text[y][1] = stm_action1_text[y + 1][1];
//                }
//            }
//
//            stm_action1_text[999][0] = _action1_text;
//            stm_action1_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_action2_text != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_action2_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_action2_text[x][0] = _action2_text;
//                stm_action2_text[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_action2_text[x][0]: " << stm_action2_text[x][0] << endl;
//                //cout << "stm_action2_text[x][1]: " << stm_action2_text[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_action2_text[0][0].clear();
//            stm_action2_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_action2_text[y][0] = stm_action2_text[y + 1][0];
//                    stm_action2_text[y][1] = stm_action2_text[y + 1][1];
//                }
//            }
//
//            stm_action2_text[999][0] = _action2_text;
//            stm_action2_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_action3_text != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_action3_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_action3_text[x][0] = _action3_text;
//                stm_action3_text[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_action3_text[x][0]: " << stm_action3_text[x][0] << endl;
//                //cout << "stm_action3_text[x][1]: " << stm_action3_text[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_action3_text[0][0].clear();
//            stm_action3_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_action3_text[y][0] = stm_action3_text[y + 1][0];
//                    stm_action3_text[y][1] = stm_action3_text[y + 1][1];
//                }
//            }
//
//            stm_action3_text[999][0] = _action3_text;
//            stm_action3_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_vision_objects_image_path != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_vision_objects_image_path_camera1[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_vision_objects_image_path_camera1[x][0] = _vision_objects_image_path;
//                stm_vision_objects_image_path_camera1[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_vision_objects_image_path_camera1[x][0]: " << stm_vision_objects_image_path_camera1[x][0] << endl;
//                //cout << "stm_vision_objects_image_path_camera1[x][1]: " << stm_vision_objects_image_path_camera1[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_vision_objects_image_path_camera1[0][0].clear();
//            stm_vision_objects_image_path_camera1[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_vision_objects_image_path_camera1[y][0] = stm_vision_objects_image_path_camera1[y + 1][0];
//                    stm_vision_objects_image_path_camera1[y][1] = stm_vision_objects_image_path_camera1[y + 1][1];
//                }
//            }
//
//            stm_vision_objects_image_path_camera1[999][0] = _vision_objects_image_path;
//            stm_vision_objects_image_path_camera1[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_vision_actions_image_path != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_vision_actions_image_path[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_vision_actions_image_path[x][0] = _vision_actions_image_path;
//                stm_vision_actions_image_path[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_vision_actions_image_path[x][0]: " << stm_vision_actions_image_path[x][0] << endl;
//                //cout << "stm_vision_actions_image_path[x][1]: " << stm_vision_actions_image_path[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_vision_actions_image_path[0][0].clear();
//            stm_vision_actions_image_path[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_vision_actions_image_path[y][0] = stm_vision_actions_image_path[y + 1][0];
//                    stm_vision_actions_image_path[y][1] = stm_vision_actions_image_path[y + 1][1];
//                }
//            }
//
//            stm_vision_actions_image_path[999][0] = _vision_actions_image_path;
//            stm_vision_actions_image_path[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_vision_objects_text_camera1 != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_vision_objects_text_camera1[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_vision_objects_text_camera1[x][0] = _vision_objects_text_camera1;
//                stm_vision_objects_text_camera1[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_vision_objects_text_camera1[x][0]: " << stm_vision_objects_text_camera1[x][0] << endl;
//                //cout << "stm_vision_objects_text_camera1[x][1]: " << stm_vision_objects_text_camera1[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_vision_objects_text_camera1[0][0].clear();
//            stm_vision_objects_text_camera1[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_vision_objects_text_camera1[y][0] = stm_vision_objects_text_camera1[y + 1][0];
//                    stm_vision_objects_text_camera1[y][1] = stm_vision_objects_text_camera1[y + 1][1];
//                }
//            }
//
//            stm_vision_objects_text_camera1[999][0] = _vision_objects_text_camera1;
//            stm_vision_objects_text_camera1[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_vision_objects_text_camera2 != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_vision_objects_text_camera2[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_vision_objects_text_camera2[x][0] = _vision_objects_text_camera2;
//                stm_vision_objects_text_camera2[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_vision_objects_text_camera2[x][0]: " << stm_vision_objects_text_camera2[x][0] << endl;
//                //cout << "stm_vision_objects_text_camera2[x][1]: " << stm_vision_objects_text_camera2[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_vision_objects_text_camera2[0][0].clear();
//            stm_vision_objects_text_camera2[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_vision_objects_text_camera2[y][0] = stm_vision_objects_text_camera2[y + 1][0];
//                    stm_vision_objects_text_camera2[y][1] = stm_vision_objects_text_camera2[y + 1][1];
//                }
//            }
//
//            stm_vision_objects_text_camera2[999][0] = _vision_objects_text_camera2;
//            stm_vision_objects_text_camera2[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_vision_analysis_text != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_vision_analysis_text_camera1[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_vision_analysis_text_camera1[x][0] = _vision_analysis_text;
//                stm_vision_analysis_text_camera1[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_vision_analysis_text_camera1[x][0]: " << stm_vision_analysis_text_camera1[x][0] << endl;
//                //cout << "stm_vision_analysis_text_camera1[x][1]: " << stm_vision_analysis_text_camera1[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_vision_analysis_text_camera1[0][0].clear();
//            stm_vision_analysis_text_camera1[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_vision_analysis_text_camera1[y][0] = stm_vision_analysis_text_camera1[y + 1][0];
//                    stm_vision_analysis_text_camera1[y][1] = stm_vision_analysis_text_camera1[y + 1][1];
//                }
//            }
//
//            stm_vision_analysis_text_camera1[999][0] = _vision_analysis_text;
//            stm_vision_analysis_text_camera1[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_typing_text != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_typing_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_typing_text[x][0] = _typing_text;
//                stm_typing_text[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_typing_text[x][0]: " << stm_typing_text[x][0] << endl;
//                //cout << "stm_typing_text[x][1]: " << stm_typing_text[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_typing_text[0][0].clear();
//            stm_typing_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_typing_text[y][0] = stm_typing_text[y + 1][0];
//                    stm_typing_text[y][1] = stm_typing_text[y + 1][1];
//                }
//            }
//
//            stm_typing_text[999][0] = _typing_text;
//            stm_typing_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_Reference_pos_gps_north != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_Reference_pos_gps_north[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_Reference_pos_gps_north[x][0] = __Reference_pos_gps_north;
//                stm_Reference_pos_gps_north[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_Reference_pos_gps_north[x][0]: " << stm_Reference_pos_gps_north[x][0] << endl;
//                //cout << "stm_Reference_pos_gps_north[x][1]: " << stm_Reference_pos_gps_north[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_Reference_pos_gps_north[0][0].clear();
//            stm_Reference_pos_gps_north[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_Reference_pos_gps_north[y][0] = stm_Reference_pos_gps_north[y + 1][0];
//                    stm_Reference_pos_gps_north[y][1] = stm_Reference_pos_gps_north[y + 1][1];
//                }
//            }
//
//            stm_Reference_pos_gps_north[999][0] = __Reference_pos_gps_north;
//            stm_Reference_pos_gps_north[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (__Reference_pos_gps_west != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_Reference_pos_gps_west[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_Reference_pos_gps_west[x][0] = __Reference_pos_gps_west;
//                stm_Reference_pos_gps_west[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_Reference_pos_gps_west[x][0]: " << stm_Reference_pos_gps_west[x][0] << endl;
//                //cout << "stm_Reference_pos_gps_west[x][1]: " << stm_Reference_pos_gps_west[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_Reference_pos_gps_west[0][0].clear();
//            stm_Reference_pos_gps_west[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_Reference_pos_gps_west[y][0] = stm_Reference_pos_gps_west[y + 1][0];
//                    stm_Reference_pos_gps_west[y][1] = stm_Reference_pos_gps_west[y + 1][1];
//                }
//            }
//
//            stm_Reference_pos_gps_west[999][0] = __Reference_pos_gps_west;
//            stm_Reference_pos_gps_west[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (__Reference_pos_gps_elevation != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_Reference_pos_gps_elevation[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_Reference_pos_gps_elevation[x][0] = __Reference_pos_gps_elevation;
//                stm_Reference_pos_gps_elevation[x][1] = current_date;
//
//                // Debug
//                //cout << "stm_Reference_pos_gps_elevation[x][0]: " << stm_Reference_pos_gps_elevation[x][0] << endl;
//                //cout << "stm_Reference_pos_gps_elevation[x][1]: " << stm_Reference_pos_gps_elevation[x][1] << endl;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_Reference_pos_gps_elevation[0][0].clear();
//            stm_Reference_pos_gps_elevation[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_Reference_pos_gps_elevation[y][0] = stm_Reference_pos_gps_elevation[y + 1][0];
//                    stm_Reference_pos_gps_elevation[y][1] = stm_Reference_pos_gps_elevation[y + 1][1];
//                }
//            }
//
//            stm_Reference_pos_gps_elevation[999][0] = __Reference_pos_gps_elevation;
//            stm_Reference_pos_gps_elevation[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (__Reference_pos_gps_image != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_Reference_pos_gps_image[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_Reference_pos_gps_image[x][0] = __Reference_pos_gps_image;
//                stm_Reference_pos_gps_image[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_Reference_pos_gps_image[0][0].clear();
//            stm_Reference_pos_gps_image[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_Reference_pos_gps_image[y][0] = stm_Reference_pos_gps_image[y + 1][0];
//                    stm_Reference_pos_gps_image[y][1] = stm_Reference_pos_gps_image[y + 1][1];
//                }
//            }
//
//            stm_Reference_pos_gps_image[999][0] = __Reference_pos_gps_image;
//            stm_Reference_pos_gps_image[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_pos_gps_north != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_pos_gps_north_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_pos_gps_north_text[x][0] = _pos_gps_north;
//                stm_pos_gps_north_text[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_pos_gps_north_text[0][0].clear();
//            stm_pos_gps_north_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_pos_gps_north_text[y][0] = stm_pos_gps_north_text[y + 1][0];
//                    stm_pos_gps_north_text[y][1] = stm_pos_gps_north_text[y + 1][1];
//                }
//            }
//
//            stm_pos_gps_north_text[999][0] = _pos_gps_north;
//            stm_pos_gps_north_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_pos_gps_west != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_pos_gps_west_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_pos_gps_west_text[x][0] = _pos_gps_west;
//                stm_pos_gps_west_text[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_pos_gps_west_text[0][0].clear();
//            stm_pos_gps_west_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_pos_gps_west_text[y][0] = stm_pos_gps_west_text[y + 1][0];
//                    stm_pos_gps_west_text[y][1] = stm_pos_gps_west_text[y + 1][1];
//                }
//            }
//
//            stm_pos_gps_west_text[999][0] = _pos_gps_west;
//            stm_pos_gps_west_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_pos_gps_elevation != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_pos_gps_elevation_text[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_pos_gps_elevation_text[x][0] = _pos_gps_elevation;
//                stm_pos_gps_elevation_text[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_pos_gps_elevation_text[0][0].clear();
//            stm_pos_gps_elevation_text[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_pos_gps_elevation_text[y][0] = stm_pos_gps_elevation_text[y + 1][0];
//                    stm_pos_gps_elevation_text[y][1] = stm_pos_gps_elevation_text[y + 1][1];
//                }
//            }
//
//            stm_pos_gps_elevation_text[999][0] = _pos_gps_elevation;
//            stm_pos_gps_elevation_text[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_pos_x != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_pos_x[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_pos_x[x][0] = _pos_x;
//                stm_pos_x[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_pos_x[0][0].clear();
//            stm_pos_x[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_pos_x[y][0] = stm_pos_x[y + 1][0];
//                    stm_pos_x[y][1] = stm_pos_x[y + 1][1];
//                }
//            }
//
//            stm_pos_x[999][0] = _pos_x;
//            stm_pos_x[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_pos_y != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_pos_y[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_pos_y[x][0] = _pos_y;
//                stm_pos_y[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_pos_y[0][0].clear();
//            stm_pos_y[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_pos_y[y][0] = stm_pos_y[y + 1][0];
//                    stm_pos_y[y][1] = stm_pos_y[y + 1][1];
//                }
//            }
//
//            stm_pos_y[999][0] = _pos_y;
//            stm_pos_y[999][1] = current_date;
//            boolean = false;
//        }
//    }
//    if (_pos_z != "")
//    {
//        for (int x = 0; x < 1000; x++)
//        {
//            if (stm_pos_z[x][0] == "")
//            {
//                lock_guard<mutex> lock(stm);
//                stm_pos_z[x][0] = _pos_z;
//                stm_pos_z[x][1] = current_date;
//                boolean = true;
//            }
//        }
//
//        if (boolean)
//        {
//            lock_guard<mutex> lock(stm);
//            stm_pos_z[0][0].clear();
//            stm_pos_z[0][1].clear();
//
//            for (int y = 0; y < 1000; y++)
//            {
//                if (y != 999)
//                {
//                    stm_pos_z[y][0] = stm_pos_z[y + 1][0];
//                    stm_pos_z[y][1] = stm_pos_z[y + 1][1];
//                }
//            }
//
//            stm_pos_z[999][0] = _pos_z;
//            stm_pos_z[999][1] = current_date;
//            boolean = false;
//        }
//    }
//}

void _ShortTermMemory::ClearShortTermMemory()
{
    for (int x = 0; x < 1000; x++)
    {
        for (int y = 0; y < 65; y++)
        {
            stm_vision_objects_image_camera1[x][y].clear();
            stm_vision_objects_image_camera2[x][y].clear();
        }

        for (int y = 0; y < 4; y++)
        {
            stm_vision_camera1[x][y].clear();
            stm_vision_camera2[x][y].clear();
            stm_vision_analysis_camera1[x][y].clear();
            stm_vision_analysis_camera2[x][y].clear();
        }

        for (int y = 0; y < 3; y++)
        {
            stm_sound[x][y].clear();
            stm_reading[x][y].clear();
        }

        for (int y = 0; y < 2; y++)
        {
            //stm_speech_dialogue[x][y].clear();
            //stm_action1_text[x][y].clear();
            //stm_action2_text[x][y].clear();
            //stm_action3_text[x][y].clear();
            stm_algebra_text[x][y].clear();
            //stm_vision_objects_text_camera1[x][y].clear();
            //stm_vision_objects_text_camera2[x][y].clear();
            stm_typing_text[x][y].clear();
            stm_Reference_pos_gps_north[x][y].clear();
            stm_Reference_pos_gps_west[x][y].clear();
            stm_Reference_pos_gps_elevation[x][y].clear();
            stm_Reference_pos_gps_image[x][y].clear();
            stm_pos_gps_north_text[x][y].clear();
            stm_pos_gps_west_text[x][y].clear();
            stm_pos_gps_elevation_text[x][y].clear();
            stm_pos_x[x][y].clear();
            stm_pos_y[x][y].clear();
            stm_pos_z[x][y].clear();
            stm_simple_text[x][y].clear();
            stm_simple_image[x][y].clear();
        }
    }
}

// This function is for listening for an action to search memory for a word, date/time, concept
//     TODO: Get keywords to call this funciton
void _ShortTermMemory::MemorySearch(string text)
{
    // 1. Create event listener for a memory search

    // 2a. Open memory database for sounds

    // 2b. Open memory database for vision

    // 3a. Search for words from memory analysis

    // 3b. Search for concept from memory analysis
}

// This function will search for a string of text from a given date in memory to another date in memory
void _ShortTermMemory::MemorySearch(string* text, string prev_date, string prev_date2)
{

}

// Get a table timecodef snapshot from short term memory

// Search Short Term Memory for a string that has been read in the last few seconds. The goal is to save the string and recall the string in a way to playback or use the string
//  Invokation: This function will be invoked while focusing on text in reading_text
//  1. Get the current date
void _ShortTermMemory::STMReadingStringRecall()
{

}

// Search Short Term Memory for a string that has been said in the last few seconds. The goal is to save the string and recall the string in a way to playback or use the string
//  Invokation: This function will be invoked while focusing on text in speech_dialogue
//  1. Get the current date
void _ShortTermMemory::STMSoundStringRecall()
{

}

// The following function gets statistical word information stored in short term memory
//  Invokation: This function will run at all times. It will input all text elements in short term memory an count the words and place them into a variable
//void _AI::STMWordStatistics()
//{
//    string STMSpeech[36000][1];
//    string STMSpeechTemp[36000][1];
//    int int_STMSpeech[36000];
//    string STMReading[36000][1];
//    string STMReadingTemp[36000][1];
//    int int_STMReading[36000];
//    string STMAction1[36000][1];
//    string STMAction1Temp[36000][1];
//    int int_STMAction1[36000];
//    string STMAction2[36000][1];
//    string STMAction2Temp[36000][1];
//    int int_STMAction2[36000];
//    string STMAction3[36000][1];
//    string STMAction3Temp[36000][1];
//    int int_STMAction3[36000];
//    string STMVisionObjects[36000][1];
//    string STMVisionObjectsTemp[36000][1];
//    int int_STMVisionObjects[36000][1];
//    string STMVisionAnalysis[36000][1];
//    string STMVisionAnalysisTemp[36000][1];
//    int int_STMVisionAnalysis[36000];
//    string STMTyping[36000][1];
//    string STMTypingTemp[36000][1];
//    int int_STMTyping[36000];
//    string line;
//    string line2;
//    string str_temp;
//    int temp;
//    int _temp[36000];
//    int n = 36000;
//    bool word;
//
//    for (int x = 0; x < 36000; x++)
//    {
//        STMSpeech[x][0] = speech_dialogue[x][0];
//        STMReading[x][0] = reading_text[x][0];
//        STMAction1[x][0] = action1_text[x][0];
//        STMAction2[x][0] = action2_text[x][0];
//        STMAction3[x][0] = action3_text[x][0];
//        STMVisionObjects[x][0] = vision_objects_text[x][0];
//        STMVisionAnalysis[x][0] = vision_analysis_text[x][0];
//        STMTyping[x][0] = typing_text[x][0];
//    }
//
//    // Parse the lines into string variables
//    for (int z = 0; z < 36000; z++)
//    {
//        // Parse the words in each text variable
//        //  If there is a space or comma, the word is checked
//        line = speech_dialogue[z][0];
//
//        for (int a = 0; a < line.length(); a++)
//        {
//            if (!isblank(line[a]) || line[a] != ',')
//            {
//                STMSpeechTemp[z][0] += line[a];
//            }
//            if (line[a] == ',' && isblank(line[a + 1]))
//            {
//                z++;
//            }
//            if (isblank(line[a]) && isalpha(line[a + 1]))
//            {
//                STMSpeechTemp[z][0] += line[a];
//            }
//        }
//    }
//
//    // Count the words found in the text variables
//    for (int z = 0; z < 36000; z++)
//    {
//        // Parse the words in each text variable
//        //  If there is a space or comma, the word is checked
//        line = reading_text[z][0];
//
//        for (int a = 0; a < line.length(); a++)
//        {
//            if (!isblank(line[a]) || line[a] != ',')
//            {
//                STMReadingTemp[z][0] += line[a];
//            }
//            if (line[a] == ',' && isblank(line[a + 1]))
//            {
//                z++;
//            }
//            if (isblank(line[a]) && isalpha(line[a + 1]))
//            {
//                STMReadingTemp[z][0] += line[a];
//            }
//        }
//    }
//
//    // Count the words found in the text variables
//    for (int z = 0; z < 36000; z++)
//    {
//        // Parse the words in each text variable
//        //  If there is a space or comma, the word is checked
//        line = action1_text[z][0];
//
//        for (int a = 0; a < line.length(); a++)
//        {
//            if (!isblank(line[a]) || line[a] != ',')
//            {
//                STMAction1Temp[z][0] += line[a];
//            }
//            if (line[a] == ',' && isblank(line[a + 1]))
//            {
//                z++;
//            }
//            if (isblank(line[a]) && isalpha(line[a + 1]))
//            {
//                STMAction1Temp[z][0] += line[a];
//            }
//        }
//    }
//
//    // Count the words found in the text variables
//    for (int z = 0; z < 36000; z++)
//    {
//        // Parse the words in each text variable
//        //  If there is a space or comma, the word is checked
//        line = action2_text[z][0];
//
//        for (int a = 0; a < line.length(); a++)
//        {
//            if (!isblank(line[a]) || line[a] != ',')
//            {
//                STMAction2Temp[z][0] += line[a];
//            }
//            if (line[a] == ',' && isblank(line[a + 1]))
//            {
//                z++;
//            }
//            if (isblank(line[a]) && isalpha(line[a + 1]))
//            {
//                STMAction2Temp[z][0] += line[a];
//            }
//        }
//    }
//
//    // Count the words found in the text variables
//    for (int z = 0; z < 36000; z++)
//    {
//        // Parse the words in each text variable
//        //  If there is a space or comma, the word is checked
//        line = action3_text[z][0];
//
//        for (int a = 0; a < line.length(); a++)
//        {
//            if (!isblank(line[a]) || line[a] != ',')
//            {
//                STMAction3Temp[z][0] += line[a];
//            }
//            if (line[a] == ',' && isblank(line[a + 1]))
//            {
//                z++;
//            }
//            if (isblank(line[a]) && isalpha(line[a + 1]))
//            {
//                STMAction3Temp[z][0] += line[a];
//            }
//        }
//    }
//
//    // Count the words found in the text variables
//    for (int z = 0; z < 36000; z++)
//    {
//        // Parse the words in each text variable
//        //  If there is a space or comma, the word is checked
//        line = vision_objects_text[z][0];
//
//        for (int a = 0; a < line.length(); a++)
//        {
//            if (!isblank(line[a]) || line[a] != ',')
//            {
//                STMVisionObjectsTemp[z][0] += line[a];
//            }
//            if (line[a] == ',' && isblank(line[a + 1]))
//            {
//                z++;
//            }
//            if (isblank(line[a]) && isalpha(line[a + 1]))
//            {
//                STMVisionObjectsTemp[z][0] += line[a];
//            }
//        }
//    }
//
//    // Count the words found in the text variables
//    for (int z = 0; z < 36000; z++)
//    {
//        // Parse the words in each text variable
//        //  If there is a space or comma, the word is checked
//        line = vision_analysis_text[z][0];
//
//        for (int a = 0; a < line.length(); a++)
//        {
//            if (!isblank(line[a]) || line[a] != ',')
//            {
//                STMVisionAnalysisTemp[z][0] += line[a];
//            }
//            if (line[a] == ',' && isblank(line[a + 1]))
//            {
//                z++;
//            }
//            if (isblank(line[a]) && isalpha(line[a + 1]))
//            {
//                STMVisionAnalysisTemp[z][0] += line[a];
//            }
//        }
//    }
//
//    // Count the words found in the text variables
//    for (int z = 0; z < 36000; z++)
//    {
//        // Parse the words in each text variable
//        //  If there is a space or comma, the word is checked
//        line = typing_text[z][0];
//
//        for (int a = 0; a < line.length(); a++)
//        {
//            if (!isblank(line[a]) || line[a] != ',')
//            {
//                STMTypingTemp[z][0] += line[a];
//            }
//            if (line[a] == ',' && isblank(line[a + 1]))
//            {
//                z++;
//            }
//            if (isblank(line[a]) && isalpha(line[a + 1]))
//            {
//                STMTypingTemp[z][0] += line[a];
//            }
//        }
//    }
//
//    // Clear the variables
//    for (int b = 0; b < 36000; b++)
//    {
//        STMSpeech[b][0].clear();
//        STMReading[b][0].clear();
//        STMAction1[b][0].clear();
//        STMAction2[b][0].clear();
//        STMAction3[b][0].clear();
//        STMVisionObjects[b][0].clear();
//        STMVisionAnalysis[b][0].clear();
//        STMTyping[b][0].clear();
//    }
//
//    // Count the number of times a word has been used
//    for (int b = 0; b < 36000; b++)
//    {
//        // Look for a matching word in the array
//        for (int c = 0; c < 36000; c++)
//        {
//            if (STMSpeechTemp[b][0] == STMSpeech[c][0])
//            {
//                str_temp = STMSpeech[c][1];
//                temp = stoi(str_temp);
//                temp++;
//                STMSpeech[c][1] = to_string(temp);
//                int_STMSpeech[c] = temp;
//            }
//        }
//        // Look for a matching word in the array
//        for (int c = 0; c < 36000; c++)
//        {
//            if (STMReadingTemp[b][0] == STMReading[c][0])
//            {
//                str_temp = STMReading[c][1];
//                temp = stoi(str_temp);
//                temp++;
//                STMReading[c][1] = to_string(temp);
//                int_STMReading[c] = temp;
//            }
//        }
//        // Look for a matching word in the array
//        for (int c = 0; c < 36000; c++)
//        {
//            if (STMAction1Temp[b][0] == STMAction1[c][0])
//            {
//                str_temp = STMAction1[c][1];
//                temp = stoi(str_temp);
//                temp++;
//                STMAction1Temp[c][1] = to_string(temp);
//                int_STMAction1[c] = temp;
//            }
//        }
//        // Look for a matching word in the array
//        for (int c = 0; c < 36000; c++)
//        {
//            if (STMAction2Temp[b][0] == STMAction2[c][0])
//            {
//                str_temp = STMAction2[c][1];
//                temp = stoi(str_temp);
//                temp++;
//                STMAction2Temp[c][1] = to_string(temp);
//                int_STMAction2[c] = temp;
//            }
//        }
//        // Look for a matching word in the array
//        for (int c = 0; c < 36000; c++)
//        {
//            if (STMAction3Temp[b][0] == STMAction3[c][0])
//            {
//                str_temp = STMAction3[c][1];
//                temp = stoi(str_temp);
//                temp++;
//                STMAction3Temp[c][1] = to_string(temp);
//                int_STMAction3[c] = temp;
//            }
//        }
//        // Look for a matching word in the array
//        for (int c = 0; c < 36000; c++)
//        {
//            if (STMVisionObjectsTemp[b][0] == STMVisionObjects[c][0])
//            {
//                str_temp = STMAction3[c][1];
//                temp = stoi(str_temp);
//                temp++;
//                STMVisionObjectsTemp[c][1] = to_string(temp);
//                int_STMVisionObjects[c] = temp;
//            }
//        }
//        // Look for a matching word in the array
//        for (int c = 0; c < 36000; c++)
//        {
//            if (STMVisionAnalysisTemp[b][0] == STMVisionAnalysis[c][0])
//            {
//                str_temp = STMVisionAnalysis[c][1];
//                temp = stoi(str_temp);
//                temp++;
//                STMVisionAnalysisTemp[c][1] = to_string(temp);
//                int_STMVisionAnalysis[c] = temp;
//            }
//        }
//        // Look for a matching word in the array
//        for (int c = 0; c < 36000; c++)
//        {
//            if (STMTypingTemp[b][0] == STMTyping[c][0])
//            {
//                str_temp = STMTyping[c][1];
//                temp = stoi(str_temp);
//                temp++;
//                STMVisionAnalysisTemp[c][1] = to_string(temp);
//                int_STMTyping[c] = temp;
//            }
//        }
//    }
//
//    // Sort arrays
//    quickSort(int_STMSpeech, 0, n - 1);
//    quickSort(int_STMReading, 0, n - 1);
//    quickSort(int_STMAction1, 0, n - 1);
//    quickSort(int_STMAction2, 0, n - 1);
//    quickSort(int_STMAction3, 0, n - 1);
//    quickSort(int_STMVisionObjects, 0, n - 1);
//    quickSort(int_STMVisionAnalysis, 0, n - 1);
//    quickSort(int_STMTyping, 0, n - 1);
//
//
//    // Place the sorted words into the STMSpeech[a][b] arrays
//    //  1. Iterate through the temp array selecting the indicies from the highest to the lowest
//    //  2. Iterate through the STMSpeechTemp[a][b] array looking for words that match the count from _temp[a]
//    //  3. Assign the STMSpeech[a][b] to the word and the number of hits
//    for (int a = 36000; a >= 0; a--)
//    {
//        if (int_STMSpeech[a] == stoi(STMSpeechTemp[a][1]))
//        {
//            STMSpeech[a][0] = STMSpeechTemp[a][0];
//            STMSpeech[a][1] = STMSpeechTemp[a][1];
//        }
//        if (int_STMReading[a] == stoi(STMReadingTemp[a][1]))
//        {
//            STMReading[a][0] = STMReadingTemp[a][0];
//            STMReading[a][1] = STMReadingTemp[a][1];
//        }
//        if (int_STMAction1[a] == stoi(STMAction1Temp[a][1]))
//        {
//            STMAction1[a][0] = STMAction1Temp[a][0];
//            STMAction1[a][1] = STMAction1Temp[a][1];
//        }
//        if (int_STMAction2[a] == stoi(STMAction2Temp[a][1]))
//        {
//            STMAction2[a][0] = STMAction2Temp[a][0];
//            STMAction2[a][1] = STMAction2Temp[a][1];
//        }
//        if (int_STMAction3[a] == stoi(STMAction3Temp[a][1]))
//        {
//            STMAction3[a][0] = STMAction3Temp[a][0];
//            STMAction3[a][1] = STMAction3Temp[a][1];
//        }
//        if (int_STMVisionObjects[a] == stoi(STMVisionObjectsTemp[a][1]))
//        {
//            STMVisionObjects[a][0] = STMVisionObjectsTemp[a][0];
//            STMVisionObjects[a][1] = STMVisionObjectsTemp[a][1];
//        }
//        if (int_STMVisionAnalysis[a] == stoi(STMVisionAnalysisTemp[a][1]))
//        {
//            STMVisionAnalysis[a][0] = STMVisionAnalysisTemp[a][0];
//            STMVisionAnalysis[a][1] = STMVisionAnalysisTemp[a][1];
//        }
//        if (int_STMTyping[a] == stoi(STMTypingTemp[a][1]))
//        {
//            STMTyping[a][0] = STMTypingTemp[a][0];
//            STMTyping[a][1] = STMTypingTemp[a][1];
//        }
//    }
//
//    // Output the arrays
//}

//void _AI::()
//{
//    // ffmpeg -i image -%03d.png video.mp4
//}

// This function will use TensorFlow to analyze memories in vision and sound database
// This function might be relevant to the server rather than the client
void _ShortTermMemory::MemoryAnalysis()
{
    // 1a. Use TensorFlow to analyze vision memory

    // 1b. Use TensorFlow to analyze sound memory

    // 1c. Extrapolate words from sensory data

    // 2. Add similar concepts to memory data in database
}