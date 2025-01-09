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
#include "Awareness.hpp"
#include "Actions.hpp"
#include "Analysis.hpp"
#include "Argument.hpp"
#include "Bias.hpp"
#include "Computers.hpp"
#include "Database Functions.hpp"
#include "Directories.hpp"
#include "Drawing.hpp"
#include "Driving.hpp"
#include "Ethics.hpp"
#include "Executive Functions.hpp"
#include "Fallacy.hpp"
#include "Feel.hpp"
#include "Finance.hpp"
#include "Gaming.hpp"
#include "Goals.hpp"
#include "Heuristics.hpp"
#include "Keyboard.hpp"
#include "Kinesthetics.hpp"
#include "Large Language Models.hpp"
#include "Learning.hpp"
#include "Logic.hpp"
#include "Long-Term Memory.hpp"
#include "Mathematics.hpp"
#include "Mind.hpp"
#include "Mods.hpp"
#include "Morality.hpp"
#include "Mouse.hpp"
#include "Music.hpp"
#include "Needs.hpp"
#include "NetworkingClient.hpp"
#include "NetworkingServer.hpp"
#include "NeuraLink.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Parsers.hpp"
#include "Pathfinding.hpp"
#include "Pattern Recognition.hpp"
#include "Prediction.hpp"
#include "Programming.hpp"
#include "QA.hpp"
#include "Qualitative Reasoning.hpp"
#include "Quantitative Reasoning.hpp"
#include "Reading.hpp"
#include "Reference.hpp"
#include "Scrapers.hpp"
#include "Server Functions.hpp"
#include "Settings.hpp"
#include "Short-Term Memory.hpp"
#include "Smart Phone.hpp"
#include "Smell.hpp"
#include "Social.hpp"
#include "Sound.hpp"
#include "Speech.hpp"
#include "Speech Recognition.hpp"
#include "Speech Commands.hpp"
#include "Sports.hpp"
#include "Stocks.hpp"
#include "Strategy.hpp"
#include "Tensorflow.hpp"
#include "Time.hpp"
#include "Translation.hpp"
#include "Typing.hpp"
#include "Utilities.hpp"
#include "Variables.hpp"
#include "Vision.hpp"
#include "Working-Memory.hpp"
#include "Writing.hpp"

using namespace std;

// The following function will listen for voice commands from the speech recognition thread
//  Function                                                  Possible Input                                                 Implementation Difficulty
//  BibleVerseSearch(string book, int chapter)              | Search for bible verse, John chapter three                   | Easy
//  BibleVerseSearch(string book, int chapter, int verse)   | Search for bible verse, John chapter three verse sixteen     | Easy
//  BibleVersePageNumber()                                  | Search for bible verse, page number visual trigger           | Intermediate (Requires OpenCV and TensorFlow)
//  SearchWikipedia(string title, string summary)           | Search Wikipedia for x_article summary                       | Easy
//  SearchWikipedia(string title, string heading)           | Search Wikipedia for x_article #Heading                      | Easy
//  SearchWikipedia(string title)                           | Search Wikipedia for x_article                               | Easy
//  SearchWiktionary()                                      | Search Wikitionary for definition                            | Easy
//  SearchWiktionary()
//  Speech()                                                | ???                                                          | Intermediate (Calls to long and short term memory to find words to speak)
//  MemorySearch()                                          | Search memory for memories containing dogs                   | Easy (Calls to long term and short term memory to search)
//  Reading()                                               | ??? Should be a visual trigger                               | Intermediate (Requires short term memory, imagine, text synchronization)
//  Writing()                                               | ??? Shoulkd be a visual trigger                              | Intermediate
//  Computer()                                              | Using computer???, should be a visual trigger                | Intermediate to Challenging (Requires TensorFlow and/or OpenCV to know when a user is looking at a computer monitor)
//  Gaming()                                                | Playing Fallout 4 on PS4, should be a visual trigger         | Intermediate to Challenging (Requires TensorFlow anmd/or OpenCV to know when a user is playing a game)
//  HomeDatabaseSearch()                                    | Get fallacy for given string                                 | Intermediate to Challenging
//  BiasCheck()                                             | Get bias for given string and data                           | Challenging, (Requires TensorFlow and/or OpenCV to check the environment for cues relating to bias)
//  CreateDeductiveArgument()                               | Create deductive syllogism / deductive argument from data    | Challenging
//  CreateInductiveArgument()                               | Create inductive syllogism / inductive argument from data    | Challenging
//  GetShortTermMemory()                                    | Dump short term sound memory                                 | Easy
//  GetShortTermMemory()                                    | Dump short term visual memory                                | Easy
//  CreateReminder()                                        | Create a reminder of x                                       | Easy
//
// Commands for transcription
//  1. Can you repeat that please?
//      a. Test if the transcription contains words that were not caught by whispe. Also check if the person is looking at you and words are being missed.
//  2. Resume action command
//  3. Break from current action command?
//  4. Break from object command?
//  5. Other ethics checks :D
//  6. Display the last x seconds of memory in short term memory, then display it
//  7. Display the last x seconds of memory in short term memory, then x seconds into the futre to display in wm
//  8. Keep the last x seconds im memory from an action
void _SpeechCommands::SpeechCommands(string* words)
{
    string prompt;
    int number;
    double result;
    string temp_word;
    ostringstream oss;
    string current_date;
    int spaces = 0;

    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    current_date = oss.str();

    //string* words_temp = new string[1000];

    // Remove punctuation
    string* words_temp = _Utilities::RemovePunctuationArr(words);

    // Check for keywords_temp to call functions
    for (int j = 0; j <= sizeof(words_temp); j++)
    {
        if (words_temp[j] == "absolute" || words_temp[j] == "modulus" || words_temp[j] == "square" || words_temp[j] == "third" || words_temp[j] == "factorial" || words_temp[j] == "log" || words_temp[j] == "natural" || words_temp[j] == "sine" || words_temp[j] == "cosine" || words_temp[j] == "tangent" || words_temp[j] == "secant" || words_temp[j] == "cosecant" || words_temp[j] == "cotangent" || words_temp[j] == "arcsine" || words_temp[j] == "arcosine" || words_temp[j] == "arctangent" || words_temp[j] == "arcsecant" || words_temp[j] == "arccosecant" || words_temp[j] == "arccotangent" || words_temp[j] == "hyperbolic" || (words_temp[j] == "area" && words_temp[j + 1] == "hyperbolic" && words_temp[j + 2] == "sine") || (words_temp[j] == "area" && words_temp[j + 1] == "hyperbolic" && words_temp[j + 2] == "cosine") || (words_temp[j] == "area" && words_temp[j + 1] == "hyperbolic" && words_temp[j + 2] == "tangent") || (words_temp[j] == "area" && words_temp[j + 1] == "hyperbolic" && words_temp[j + 2] == "cosecant") || (words_temp[j] == "area" && words_temp[j + 1] == "hyperbolic" && words_temp[j + 2] == "secant") || (words_temp[j] == "area" && words_temp[j + 1] == "hyperbolic" && words_temp[j + 2] == "cotangent"))
        {
            //_Math::ArithmeticParse(text);
        }
        if (words_temp[j] == "working" && words_temp[j + 1] == "memory" && working_memory_enabled)
        {
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "seconds")
            {
                string temp_stm_vision_path_camera1[1000][2];
                string temp_stm_vision_path_camera2[1000][2];
                string temp_stm_longterm_memory[1000][2];
                string temp_stm_sound_path[1000][2];
                //string temp_stm_speech_dialogue[1000][2];
                string temp_stm_action1_text[1000][2];
                string temp_stm_action2_text[1000][2];
                string temp_stm_action3_text[1000][2];
                string temp_stm_text_identification[1000][2];
                string temp_stm_reading_text[1000][2];
                string temp_stm_reading_image[1000][2];
                string temp_stm_algebra_text[1000][2];
                string temp_stm_vision_objects_image_path_camera1[1000][2];
                string temp_stm_vision_objects_image_path_camera2[1000][2];
                string temp_stm_vision_actions_image_path_camera1[1000][2];
                string temp_stm_vision_actions_image_path_camera2[1000][2];
                string temp_stm_vision_objects_text_camera1[1000][2];
                string temp_stm_vision_objects_text_camera2[1000][2];
                string temp_stm_vision_analysis_text_camera1[1000][2];
                string temp_stm_vision_analysis_text_camera2[1000][2];
                string temp_stm_typing_text[1000][2];
                string temp_stm_Reference_pos_gps_north[1000][2];
                string temp_stm_Reference_pos_gps_west[1000][2];
                string temp_stm_Reference_pos_gps_image[1000][2];
                string temp_stm_pos_gps_north_text[1000][2];
                string temp_stm_pos_gps_west_text[1000][2];
                string temp_stm_pos_gps_elevation_text[1000][2];
                string temp_stm_pos_x[1000][2];
                string temp_stm_pos_y[1000][2];
                string temp_stm_pos_z[1000][2];
                string temp_stm_simple_text[1000][2];
                string temp_stm_simple_image[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_path_camera2(mtx_stm_vision_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_sound_path(mtx_stm_sound_path[x][y]);
                        //lock_guard<mutex> lock_stm_speech_dialogue(mtx_stm_speech_dialogue[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera1(mtx_stm_vision_objects_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera2(mtx_stm_vision_objects_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_actions_image_path_camera1(mtx_stm_vision_actions_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_actions_image_path_camera2(mtx_stm_vision_actions_image_path_camera2[x][y]);
                        //lock_guard<mutex> lock_stm_vision_objects_text_camera1(mtx_stm_vision_objects_text_camera1[x][y]);
                        //lock_guard<mutex> lock_stm_vision_objects_text_camera2(mtx_stm_vision_objects_text_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_analysis_text_camera1(mtx_stm_vision_analysis_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_analysis_text_camera2(mtx_stm_vision_analysis_text_camera2[x][y]);
                        lock_guard<mutex> lock_stm_action1_text(mtx_stm_action1_text[x][y]);
                        lock_guard<mutex> lock_stm_action2_text(mtx_stm_action2_text[x][y]);
                        lock_guard<mutex> lock_stm_action3_text(mtx_stm_action3_text[x][y]);
                        lock_guard<mutex> lock_stm_reading_text(mtx_stm_reading_text[x][y]);
                        lock_guard<mutex> lock_stm_algebra_text(mtx_stm_algebra_text[x][y]);
                        lock_guard<mutex> lock_stm_reading_image(mtx_stm_reading_image[x][y]);
                        lock_guard<mutex> lock_stm_typing_text(mtx_stm_typing_text[x][y]);
                        lock_guard<mutex> lock_stm_simple_text(mtx_stm_simple_text[x][y]);
                        lock_guard<mutex> lock_stm_simple_image(mtx_stm_simple_image[x][y]);
                        
                        temp_stm_vision_path_camera1[x][y] = stm_vision_path_camera1[x][y];
                        temp_stm_vision_path_camera2[x][y] = stm_vision_path_camera2[x][y];
                        temp_stm_sound_path[x][y] = stm_sound_path[x][y];
                        //temp_stm_speech_dialogue[x][y] = stm_speech_dialogue[x][y];
                        temp_stm_vision_objects_image_path_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_image_path_camera2[x][y] = stm_vision_objects_image_path_camera2[x][y];
                        temp_stm_vision_actions_image_path_camera1[x][y] = temp_stm_vision_actions_image_path_camera1[x][y];
                        temp_stm_vision_actions_image_path_camera2[x][y] = temp_stm_vision_actions_image_path_camera2[x][y];
                        temp_stm_vision_objects_text_camera1[x][y] = stm_vision_objects_text_camera1[x][y];
                        temp_stm_vision_objects_text_camera2[x][y] = stm_vision_objects_text_camera2[x][y];
                        temp_stm_vision_analysis_text_camera1[x][y] = stm_vision_analysis_text_camera1[x][y];
                        temp_stm_vision_analysis_text_camera2[x][y] = stm_vision_analysis_text_camera2[x][y];
                        temp_stm_action1_text[x][y] = stm_action1_text[x][y];
                        temp_stm_action2_text[x][y] = stm_action2_text[x][y];
                        temp_stm_action3_text[x][y] = stm_action3_text[x][y];
                        temp_stm_reading_text[x][y] = stm_reading_text[x][y];
                        temp_stm_algebra_text[x][y] = stm_algebra_text[x][y];
                        temp_stm_reading_image[x][y] = stm_reading_image[x][y];
                        temp_stm_typing_text[x][y] = stm_typing_text[x][y];
                        temp_stm_simple_text[x][y] = stm_simple_text[x][y];
                        temp_stm_simple_image[x][y] = stm_simple_image[x][y];
                    }
                }

                // Convert the speech command into temporary memory then convert to seconds
                long seconds_digit = stoi(words_temp[j + 5]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, NULL, NULL, seconds_digit);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 999; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera1[x][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera1[x][1]);
                                        wm_vision_path_camera1[z][0] = temp_stm_vision_path_camera1[y][0];
                                        wm_vision_path_camera1[z][1] = temp_stm_vision_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera2[y][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera2[y][1]);
                                        wm_vision_path_camera2[z][0] = temp_stm_vision_path_camera2[y][0];
                                        wm_vision_path_camera2[z][1] = temp_stm_vision_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_longterm_memory[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_longterm_memory[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_longterm_memory[z][0]);
                    //                    lock_guard<mutex> lock1(mtx_wm_longterm_memory[z][1]);
                    //                    wm_longterm_memory[z][0] = temp_stm_longterm_memory[y][0];
                    //                    wm_longterm_memory[z][1] = temp_stm_longterm_memory[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_sound_path[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_sound_path[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_sound_path[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_sound_path[z][1]);
                                        wm_sound_path[z][0] = temp_stm_sound_path[y][0];
                                        wm_sound_path[z][1] = temp_stm_sound_path[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_speech_dialogue[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_speech_dialogue[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_speech_dialogue[z][0]);
                    //                    lock_guard<mutex> lock1(mtx_wm_speech_dialogue[z][1]);
                    //                    wm_speech_dialogue[z][0] = temp_stm_speech_dialogue[y][0];
                    //                    wm_speech_dialogue[z][1] = temp_stm_speech_dialogue[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action1_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action1_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action1_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action1_text[z][1]);
                                        wm_action1_text[z][0] = temp_stm_action1_text[y][0];
                                        wm_action1_text[z][1] = temp_stm_action1_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action2_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action2_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action2_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action2_text[z][1]);
                                        wm_action2_text[z][0] = temp_stm_action2_text[y][0];
                                        wm_action2_text[z][1] = temp_stm_action2_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action3_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action3_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action3_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action3_text[z][1]);
                                        wm_action3_text[z][0] = temp_stm_action3_text[y][0];
                                        wm_action3_text[z][1] = temp_stm_action3_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_text_identification[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_text_identification[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_text_identification[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_text_identification[z][1]);
                                        wm_text_identification[z][0] = temp_stm_text_identification[y][0];
                                        wm_text_identification[z][1] = temp_stm_text_identification[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_reading_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_reading_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_reading_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_reading_text[z][1]);
                                        wm_reading_text[z][0] = temp_stm_reading_text[y][0];
                                        wm_reading_text[z][1] = temp_stm_reading_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_reading_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_reading_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_reading_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_reading_image[z][1]);
                                        wm_reading_image[z][0] = temp_stm_reading_image[y][0];
                                        wm_reading_image[z][1] = temp_stm_reading_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_algebra_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_algebra_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_algebra_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_algebra_text[z][1]);
                                        wm_algebra_text[z][0] = temp_stm_algebra_text[y][0];
                                        wm_algebra_text[z][1] = temp_stm_algebra_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera1[z][1]);
                                        wm_vision_objects_image_path_camera1[z][0] = temp_stm_vision_objects_image_path_camera1[y][0];
                                        wm_vision_objects_image_path_camera1[z][1] = temp_stm_vision_objects_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera2[z][1]);
                                        wm_vision_objects_image_path_camera2[z][0] = temp_stm_vision_objects_image_path_camera2[y][0];
                                        wm_vision_objects_image_path_camera2[z][1] = temp_stm_vision_objects_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_actions_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_actions_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_actions_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_actions_image_path_camera1[z][1]);
                                        wm_vision_actions_image_path_camera1[z][0] = temp_stm_vision_actions_image_path_camera1[y][0];
                                        wm_vision_actions_image_path_camera1[z][1] = temp_stm_vision_actions_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_actions_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_actions_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_actions_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_actions_image_path_camera2[z][1]);
                                        wm_vision_actions_image_path_camera2[z][0] = temp_stm_vision_actions_image_path_camera2[y][0];
                                        wm_vision_actions_image_path_camera2[z][1] = temp_stm_vision_actions_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera1[z][1]);
                                        wm_vision_objects_text_camera1[z][0] = temp_stm_vision_objects_text_camera1[y][0];
                                        wm_vision_objects_text_camera1[z][1] = temp_stm_vision_objects_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera2[z][1]);
                                        wm_vision_objects_text_camera2[z][0] = temp_stm_vision_objects_text_camera2[y][0];
                                        wm_vision_objects_text_camera2[z][1] = temp_stm_vision_objects_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_analysis_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_analysis_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_analysis_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_analysis_text_camera1[z][1]);
                                        wm_vision_analysis_text_camera1[z][0] = temp_stm_vision_analysis_text_camera1[y][0];
                                        wm_vision_analysis_text_camera1[z][1] = temp_stm_vision_analysis_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_analysis_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_analysis_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_analysis_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_analysis_text_camera2[z][1]);
                                        wm_vision_analysis_text_camera2[z][0] = temp_stm_vision_analysis_text_camera2[y][0];
                                        wm_vision_analysis_text_camera2[z][1] = temp_stm_vision_analysis_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_typing_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_typing_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_typing_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_typing_text[z][1]);
                                        wm_typing_text[z][0] = temp_stm_typing_text[y][0];
                                        wm_typing_text[z][1] = temp_stm_typing_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_north[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_north[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_north[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_north[z][1]);
                                        wm_Reference_pos_gps_north[z][0] = temp_stm_Reference_pos_gps_north[y][0];
                                        wm_Reference_pos_gps_north[z][1] = temp_stm_Reference_pos_gps_north[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_west[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_west[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_west[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_west[z][1]);
                                        wm_Reference_pos_gps_west[z][0] = temp_stm_Reference_pos_gps_west[y][0];
                                        wm_Reference_pos_gps_west[z][1] = temp_stm_Reference_pos_gps_west[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_image[z][1]);
                                        wm_Reference_pos_gps_image[z][0] = temp_stm_Reference_pos_gps_image[y][0];
                                        wm_Reference_pos_gps_image[z][1] = temp_stm_Reference_pos_gps_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_north_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_north_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_north_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_north_text[z][1]);
                                        wm_pos_gps_north_text[z][0] = temp_stm_pos_gps_north_text[y][0];
                                        wm_pos_gps_north_text[z][1] = temp_stm_pos_gps_north_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_west_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_west_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_west_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_west_text[z][1]);
                                        wm_pos_gps_west_text[z][0] = temp_stm_pos_gps_west_text[y][0];
                                        wm_pos_gps_west_text[z][1] = temp_stm_pos_gps_west_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_elevation_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_elevation_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_west_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_west_text[z][1]);
                                        wm_pos_gps_elevation_text[z][0] = temp_stm_pos_gps_elevation_text[y][0];
                                        wm_pos_gps_elevation_text[z][1] = temp_stm_pos_gps_elevation_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_x[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_x[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_x[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_x[z][1]);
                                        wm_pos_x[z][0] = temp_stm_pos_x[y][0];
                                        wm_pos_x[z][1] = temp_stm_pos_x[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_y[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_y[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_y[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_y[z][1]);
                                        wm_pos_y[z][0] = temp_stm_pos_y[y][0];
                                        wm_pos_y[z][1] = temp_stm_pos_y[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_z[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_z[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_z[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_z[z][1]);
                                        wm_pos_z[z][0] = temp_stm_pos_z[y][0];
                                        wm_pos_z[z][1] = temp_stm_pos_z[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_simple_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_simple_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_simple_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_simple_text[z][1]);
                                        wm_simple_text[z][0] = temp_stm_simple_text[y][0];
                                        wm_simple_text[z][1] = temp_stm_simple_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_simple_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_simple_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_simple_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_simple_image[z][1]);
                                        wm_simple_image[z][0] = temp_stm_simple_image[y][0];
                                        wm_simple_image[z][1] = temp_stm_simple_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "minutes")
            {
                string temp_stm_vision_path_camera1[1000][2];
                string temp_stm_vision_path_camera2[1000][2];
                string temp_stm_longterm_memory[1000][2];
                string temp_stm_sound_path[1000][2];
                //string temp_stm_speech_dialogue[1000][2];
                string temp_stm_action1_text[1000][2];
                string temp_stm_action2_text[1000][2];
                string temp_stm_action3_text[1000][2];
                string temp_stm_text_identification[1000][2];
                string temp_stm_reading_text[1000][2];
                string temp_stm_reading_image[1000][2];
                string temp_stm_algebra_text[1000][2];
                string temp_stm_vision_objects_image_path_camera1[1000][2];
                string temp_stm_vision_objects_image_path_camera2[1000][2];
                string temp_stm_vision_actions_image_path_camera1[1000][2];
                string temp_stm_vision_actions_image_path_camera2[1000][2];
                string temp_stm_vision_objects_text_camera1[1000][2];
                string temp_stm_vision_objects_text_camera2[1000][2];
                string temp_stm_vision_analysis_text_camera1[1000][2];
                string temp_stm_vision_analysis_text_camera2[1000][2];
                string temp_stm_typing_text[1000][2];
                string temp_stm_Reference_pos_gps_north[1000][2];
                string temp_stm_Reference_pos_gps_west[1000][2];
                string temp_stm_Reference_pos_gps_image[1000][2];
                string temp_stm_pos_gps_north_text[1000][2];
                string temp_stm_pos_gps_west_text[1000][2];
                string temp_stm_pos_gps_elevation_text[1000][2];
                string temp_stm_pos_x[1000][2];
                string temp_stm_pos_y[1000][2];
                string temp_stm_pos_z[1000][2];
                string temp_stm_simple_text[1000][2];
                string temp_stm_simple_image[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_path_camera2(mtx_stm_vision_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_sound_path(mtx_stm_sound_path[x][y]);
                        //lock_guard<mutex> lock_stm_speech_dialogue(mtx_stm_speech_dialogue[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera1(mtx_stm_vision_objects_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera2(mtx_stm_vision_objects_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_actions_image_path_camera1(mtx_stm_vision_actions_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_actions_image_path_camera2(mtx_stm_vision_actions_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera1(mtx_stm_vision_objects_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera2(mtx_stm_vision_objects_text_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_analysis_text_camera1(mtx_stm_vision_analysis_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_analysis_text_camera2(mtx_stm_vision_analysis_text_camera2[x][y]);
                        lock_guard<mutex> lock_stm_action1_text(mtx_stm_action1_text[x][y]);
                        lock_guard<mutex> lock_stm_action2_text(mtx_stm_action2_text[x][y]);
                        lock_guard<mutex> lock_stm_action3_text(mtx_stm_action3_text[x][y]);
                        lock_guard<mutex> lock_stm_reading_text(mtx_stm_reading_text[x][y]);
                        lock_guard<mutex> lock_stm_algebra_text(mtx_stm_algebra_text[x][y]);
                        lock_guard<mutex> lock_stm_reading_image(mtx_stm_reading_image[x][y]);
                        lock_guard<mutex> lock_stm_typing_text(mtx_stm_typing_text[x][y]);
                        lock_guard<mutex> lock_stm_simple_text(mtx_stm_simple_text[x][y]);
                        lock_guard<mutex> lock_stm_simple_image(mtx_stm_simple_image[x][y]);

                        temp_stm_vision_path_camera1[x][y] = stm_vision_path_camera1[x][y];
                        temp_stm_vision_path_camera2[x][y] = stm_vision_path_camera2[x][y];
                        temp_stm_sound_path[x][y] = stm_sound_path[x][y];
                        //temp_stm_speech_dialogue[x][y] = stm_speech_dialogue[x][y];
                        temp_stm_vision_objects_image_path_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_image_path_camera2[x][y] = stm_vision_objects_image_path_camera2[x][y];
                        temp_stm_vision_actions_image_path_camera1[x][y] = temp_stm_vision_actions_image_path_camera1[x][y];
                        temp_stm_vision_actions_image_path_camera2[x][y] = temp_stm_vision_actions_image_path_camera2[x][y];
                        temp_stm_vision_objects_text_camera1[x][y] = stm_vision_objects_text_camera1[x][y];
                        temp_stm_vision_objects_text_camera2[x][y] = stm_vision_objects_text_camera2[x][y];
                        temp_stm_vision_analysis_text_camera1[x][y] = stm_vision_analysis_text_camera1[x][y];
                        temp_stm_vision_analysis_text_camera2[x][y] = stm_vision_analysis_text_camera2[x][y];
                        temp_stm_action1_text[x][y] = stm_action1_text[x][y];
                        temp_stm_action2_text[x][y] = stm_action2_text[x][y];
                        temp_stm_action3_text[x][y] = stm_action3_text[x][y];
                        temp_stm_reading_text[x][y] = stm_reading_text[x][y];
                        temp_stm_algebra_text[x][y] = stm_algebra_text[x][y];
                        temp_stm_reading_image[x][y] = stm_reading_image[x][y];
                        temp_stm_typing_text[x][y] = stm_typing_text[x][y];
                        temp_stm_simple_text[x][y] = stm_simple_text[x][y];
                        temp_stm_simple_image[x][y] = stm_simple_image[x][y];
                    }
                }

                // Convert the speech command into temporary memory then convert to seconds
                long seconds_digit = stoi(words_temp[j + 5]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, NULL, NULL, seconds_digit);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera1[x][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera1[x][1]);
                                        wm_vision_path_camera1[z][0] = temp_stm_vision_path_camera1[y][0];
                                        wm_vision_path_camera1[z][1] = temp_stm_vision_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera2[y][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera2[y][1]);
                                        wm_vision_path_camera2[z][0] = temp_stm_vision_path_camera2[y][0];
                                        wm_vision_path_camera2[z][1] = temp_stm_vision_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_longterm_memory[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_longterm_memory[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_longterm_memory[z][0]);
                    //                    lock_guard<mutex> lock1(mtx_wm_longterm_memory[z][1]);
                    //                    wm_longterm_memory[z][0] = temp_stm_longterm_memory[y][0];
                    //                    wm_longterm_memory[z][1] = temp_stm_longterm_memory[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_sound_path[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_sound_path[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_sound_path[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_sound_path[z][1]);
                                        wm_sound_path[z][0] = temp_stm_sound_path[y][0];
                                        wm_sound_path[z][1] = temp_stm_sound_path[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_speech_dialogue[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_speech_dialogue[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_speech_dialogue[z][0]);
                    //                    lock_guard<mutex> lock1(mtx_wm_speech_dialogue[z][1]);
                    //                    wm_speech_dialogue[z][0] = temp_stm_speech_dialogue[y][0];
                    //                    wm_speech_dialogue[z][1] = temp_stm_speech_dialogue[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action1_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action1_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action1_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action1_text[z][1]);
                                        wm_action1_text[z][0] = temp_stm_action1_text[y][0];
                                        wm_action1_text[z][1] = temp_stm_action1_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action2_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action2_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action2_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action2_text[z][1]);
                                        wm_action2_text[z][0] = temp_stm_action2_text[y][0];
                                        wm_action2_text[z][1] = temp_stm_action2_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action3_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action3_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action3_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action3_text[z][1]);
                                        wm_action3_text[z][0] = temp_stm_action3_text[y][0];
                                        wm_action3_text[z][1] = temp_stm_action3_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_text_identification[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_text_identification[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_text_identification[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_text_identification[z][1]);
                                        wm_text_identification[z][0] = temp_stm_text_identification[y][0];
                                        wm_text_identification[z][1] = temp_stm_text_identification[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_reading_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_reading_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_reading_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_reading_text[z][1]);
                                        wm_reading_text[z][0] = temp_stm_reading_text[y][0];
                                        wm_reading_text[z][1] = temp_stm_reading_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_reading_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_reading_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_reading_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_reading_image[z][1]);
                                        wm_reading_image[z][0] = temp_stm_reading_image[y][0];
                                        wm_reading_image[z][1] = temp_stm_reading_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_algebra_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_algebra_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_algebra_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_algebra_text[z][1]);
                                        wm_algebra_text[z][0] = temp_stm_algebra_text[y][0];
                                        wm_algebra_text[z][1] = temp_stm_algebra_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera1[z][1]);
                                        wm_vision_objects_image_path_camera1[z][0] = temp_stm_vision_objects_image_path_camera1[y][0];
                                        wm_vision_objects_image_path_camera1[z][1] = temp_stm_vision_objects_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera2[z][1]);
                                        wm_vision_objects_image_path_camera2[z][0] = temp_stm_vision_objects_image_path_camera2[y][0];
                                        wm_vision_objects_image_path_camera2[z][1] = temp_stm_vision_objects_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_actions_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_actions_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_actions_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_actions_image_path_camera1[z][1]);
                                        wm_vision_actions_image_path_camera1[z][0] = temp_stm_vision_actions_image_path_camera1[y][0];
                                        wm_vision_actions_image_path_camera1[z][1] = temp_stm_vision_actions_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_actions_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_actions_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_actions_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_actions_image_path_camera2[z][1]);
                                        wm_vision_actions_image_path_camera2[z][0] = temp_stm_vision_actions_image_path_camera2[y][0];
                                        wm_vision_actions_image_path_camera2[z][1] = temp_stm_vision_actions_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera1[z][1]);
                                        wm_vision_objects_text_camera1[z][0] = temp_stm_vision_objects_text_camera1[y][0];
                                        wm_vision_objects_text_camera1[z][1] = temp_stm_vision_objects_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera2[z][1]);
                                        wm_vision_objects_text_camera2[z][0] = temp_stm_vision_objects_text_camera2[y][0];
                                        wm_vision_objects_text_camera2[z][1] = temp_stm_vision_objects_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_analysis_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_analysis_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_analysis_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_analysis_text_camera1[z][1]);
                                        wm_vision_analysis_text_camera1[z][0] = temp_stm_vision_analysis_text_camera1[y][0];
                                        wm_vision_analysis_text_camera1[z][1] = temp_stm_vision_analysis_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_analysis_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_analysis_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_analysis_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_analysis_text_camera2[z][1]);
                                        wm_vision_analysis_text_camera2[z][0] = temp_stm_vision_analysis_text_camera2[y][0];
                                        wm_vision_analysis_text_camera2[z][1] = temp_stm_vision_analysis_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_typing_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_typing_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_typing_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_typing_text[z][1]);
                                        wm_typing_text[z][0] = temp_stm_typing_text[y][0];
                                        wm_typing_text[z][1] = temp_stm_typing_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_north[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_north[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_north[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_north[z][1]);
                                        wm_Reference_pos_gps_north[z][0] = temp_stm_Reference_pos_gps_north[y][0];
                                        wm_Reference_pos_gps_north[z][1] = temp_stm_Reference_pos_gps_north[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_west[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_west[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_west[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_west[z][1]);
                                        wm_Reference_pos_gps_west[z][0] = temp_stm_Reference_pos_gps_west[y][0];
                                        wm_Reference_pos_gps_west[z][1] = temp_stm_Reference_pos_gps_west[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_image[z][1]);
                                        wm_Reference_pos_gps_image[z][0] = temp_stm_Reference_pos_gps_image[y][0];
                                        wm_Reference_pos_gps_image[z][1] = temp_stm_Reference_pos_gps_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_north_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_north_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_north_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_north_text[z][1]);
                                        wm_pos_gps_north_text[z][0] = temp_stm_pos_gps_north_text[y][0];
                                        wm_pos_gps_north_text[z][1] = temp_stm_pos_gps_north_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_west_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_west_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_west_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_west_text[z][1]);
                                        wm_pos_gps_west_text[z][0] = temp_stm_pos_gps_west_text[y][0];
                                        wm_pos_gps_west_text[z][1] = temp_stm_pos_gps_west_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_elevation_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_elevation_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_west_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_west_text[z][1]);
                                        wm_pos_gps_elevation_text[z][0] = temp_stm_pos_gps_elevation_text[y][0];
                                        wm_pos_gps_elevation_text[z][1] = temp_stm_pos_gps_elevation_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_x[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_x[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_x[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_x[z][1]);
                                        wm_pos_x[z][0] = temp_stm_pos_x[y][0];
                                        wm_pos_x[z][1] = temp_stm_pos_x[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_y[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_y[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_y[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_y[z][1]);
                                        wm_pos_y[z][0] = temp_stm_pos_y[y][0];
                                        wm_pos_y[z][1] = temp_stm_pos_y[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_z[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_z[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_z[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_z[z][1]);
                                        wm_pos_z[z][0] = temp_stm_pos_z[y][0];
                                        wm_pos_z[z][1] = temp_stm_pos_z[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_simple_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_simple_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_simple_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_simple_text[z][1]);
                                        wm_simple_text[z][0] = temp_stm_simple_text[y][0];
                                        wm_simple_text[z][1] = temp_stm_simple_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_simple_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_simple_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_simple_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_simple_image[z][1]);
                                        wm_simple_image[z][0] = temp_stm_simple_image[y][0];
                                        wm_simple_image[z][1] = temp_stm_simple_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "minutes" && isdigit(stoi(words_temp[j + 7])) && words_temp[j + 8] == "seconds" && words_temp[j + 9] == "")
            {
                string temp_stm_vision_path_camera1[1000][2];
                string temp_stm_vision_path_camera2[1000][2];
                string temp_stm_longterm_memory[1000][2];
                string temp_stm_sound_path[1000][2];
                string temp_stm_speech_dialogue[1000][2];
                string temp_stm_action1_text[1000][2];
                string temp_stm_action2_text[1000][2];
                string temp_stm_action3_text[1000][2];
                string temp_stm_text_identification[1000][2];
                string temp_stm_reading_text[1000][2];
                string temp_stm_reading_image[1000][2];
                string temp_stm_algebra_text[1000][2];
                string temp_stm_vision_objects_image_path_camera1[1000][2];
                string temp_stm_vision_objects_image_path_camera2[1000][2];
                string temp_stm_vision_actions_image_path_camera1[1000][2];
                string temp_stm_vision_actions_image_path_camera2[1000][2];
                string temp_stm_vision_objects_text_camera1[1000][2];
                string temp_stm_vision_objects_text_camera2[1000][2];
                string temp_stm_vision_analysis_text_camera1[1000][2];
                string temp_stm_vision_analysis_text_camera2[1000][2];
                string temp_stm_typing_text[1000][2];
                string temp_stm_Reference_pos_gps_north[1000][2];
                string temp_stm_Reference_pos_gps_west[1000][2];
                string temp_stm_Reference_pos_gps_image[1000][2];
                string temp_stm_pos_gps_north_text[1000][2];
                string temp_stm_pos_gps_west_text[1000][2];
                string temp_stm_pos_gps_elevation_text[1000][2];
                string temp_stm_pos_x[1000][2];
                string temp_stm_pos_y[1000][2];
                string temp_stm_pos_z[1000][2];
                string temp_stm_simple_text[1000][2];
                string temp_stm_simple_image[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_path_camera2(mtx_stm_vision_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_sound_path(mtx_stm_sound_path[x][y]);
                        lock_guard<mutex> lock_stm_speech_dialogue(mtx_stm_speech_dialogue[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera1(mtx_stm_vision_objects_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera2(mtx_stm_vision_objects_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_actions_image_path_camera1(mtx_stm_vision_actions_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_actions_image_path_camera2(mtx_stm_vision_actions_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera1(mtx_stm_vision_objects_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera2(mtx_stm_vision_objects_text_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_analysis_text_camera1(mtx_stm_vision_analysis_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_analysis_text_camera2(mtx_stm_vision_analysis_text_camera2[x][y]);
                        lock_guard<mutex> lock_stm_action1_text(mtx_stm_action1_text[x][y]);
                        lock_guard<mutex> lock_stm_action2_text(mtx_stm_action2_text[x][y]);
                        lock_guard<mutex> lock_stm_action3_text(mtx_stm_action3_text[x][y]);
                        lock_guard<mutex> lock_stm_reading_text(mtx_stm_reading_text[x][y]);
                        lock_guard<mutex> lock_stm_algebra_text(mtx_stm_algebra_text[x][y]);
                        lock_guard<mutex> lock_stm_reading_image(mtx_stm_reading_image[x][y]);
                        lock_guard<mutex> lock_stm_typing_text(mtx_stm_typing_text[x][y]);
                        lock_guard<mutex> lock_stm_simple_text(mtx_stm_simple_text[x][y]);
                        lock_guard<mutex> lock_stm_simple_image(mtx_stm_simple_image[x][y]);

                        temp_stm_vision_path_camera1[x][y] = stm_vision_path_camera1[x][y];
                        temp_stm_vision_path_camera2[x][y] = stm_vision_path_camera2[x][y];
                        temp_stm_sound_path[x][y] = stm_sound_path[x][y];
                        temp_stm_speech_dialogue[x][y] = stm_speech_dialogue[x][y];
                        temp_stm_vision_objects_image_path_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_image_path_camera2[x][y] = stm_vision_objects_image_path_camera2[x][y];
                        temp_stm_vision_actions_image_path_camera1[x][y] = temp_stm_vision_actions_image_path_camera1[x][y];
                        temp_stm_vision_actions_image_path_camera2[x][y] = temp_stm_vision_actions_image_path_camera2[x][y];
                        temp_stm_vision_objects_text_camera1[x][y] = stm_vision_objects_text_camera1[x][y];
                        temp_stm_vision_objects_text_camera2[x][y] = stm_vision_objects_text_camera2[x][y];
                        temp_stm_vision_analysis_text_camera1[x][y] = stm_vision_analysis_text_camera1[x][y];
                        temp_stm_vision_analysis_text_camera2[x][y] = stm_vision_analysis_text_camera2[x][y];
                        temp_stm_action1_text[x][y] = stm_action1_text[x][y];
                        temp_stm_action2_text[x][y] = stm_action2_text[x][y];
                        temp_stm_action3_text[x][y] = stm_action3_text[x][y];
                        temp_stm_reading_text[x][y] = stm_reading_text[x][y];
                        temp_stm_algebra_text[x][y] = stm_algebra_text[x][y];
                        temp_stm_reading_image[x][y] = stm_reading_image[x][y];
                        temp_stm_typing_text[x][y] = stm_typing_text[x][y];
                        temp_stm_simple_text[x][y] = stm_simple_text[x][y];
                        temp_stm_simple_image[x][y] = stm_simple_image[x][y];
                    }
                }

                // Convert the speech command into temporary memory then convert to seconds
                long seconds_digit = stoi(words_temp[j + 5]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, NULL, NULL, seconds_digit);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera1[x][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera1[x][1]);
                                        wm_vision_path_camera1[z][0] = temp_stm_vision_path_camera1[y][0];
                                        wm_vision_path_camera1[z][1] = temp_stm_vision_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera2[y][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera2[y][1]);
                                        wm_vision_path_camera2[z][0] = temp_stm_vision_path_camera2[y][0];
                                        wm_vision_path_camera2[z][1] = temp_stm_vision_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_longterm_memory[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_longterm_memory[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_longterm_memory[z][0]);
                    //                    lock_guard<mutex> lock1(mtx_wm_longterm_memory[z][1]);
                    //                    wm_longterm_memory[z][0] = temp_stm_longterm_memory[y][0];
                    //                    wm_longterm_memory[z][1] = temp_stm_longterm_memory[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_sound_path[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_sound_path[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_sound_path[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_sound_path[z][1]);
                                        wm_sound_path[z][0] = temp_stm_sound_path[y][0];
                                        wm_sound_path[z][1] = temp_stm_sound_path[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_speech_dialogue[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_speech_dialogue[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_speech_dialogue[z][0]);
                    //                    lock_guard<mutex> lock1(mtx_wm_speech_dialogue[z][1]);
                    //                    wm_speech_dialogue[z][0] = temp_stm_speech_dialogue[y][0];
                    //                    wm_speech_dialogue[z][1] = temp_stm_speech_dialogue[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action1_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action1_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action1_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action1_text[z][1]);
                                        wm_action1_text[z][0] = temp_stm_action1_text[y][0];
                                        wm_action1_text[z][1] = temp_stm_action1_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action2_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action2_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action2_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action2_text[z][1]);
                                        wm_action2_text[z][0] = temp_stm_action2_text[y][0];
                                        wm_action2_text[z][1] = temp_stm_action2_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action3_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action3_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action3_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action3_text[z][1]);
                                        wm_action3_text[z][0] = temp_stm_action3_text[y][0];
                                        wm_action3_text[z][1] = temp_stm_action3_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_text_identification[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_text_identification[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_text_identification[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_text_identification[z][1]);
                                        wm_text_identification[z][0] = temp_stm_text_identification[y][0];
                                        wm_text_identification[z][1] = temp_stm_text_identification[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_reading_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_reading_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_reading_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_reading_text[z][1]);
                                        wm_reading_text[z][0] = temp_stm_reading_text[y][0];
                                        wm_reading_text[z][1] = temp_stm_reading_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_reading_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_reading_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_reading_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_reading_image[z][1]);
                                        wm_reading_image[z][0] = temp_stm_reading_image[y][0];
                                        wm_reading_image[z][1] = temp_stm_reading_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_algebra_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_algebra_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_algebra_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_algebra_text[z][1]);
                                        wm_algebra_text[z][0] = temp_stm_algebra_text[y][0];
                                        wm_algebra_text[z][1] = temp_stm_algebra_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera1[z][1]);
                                        wm_vision_objects_image_path_camera1[z][0] = temp_stm_vision_objects_image_path_camera1[y][0];
                                        wm_vision_objects_image_path_camera1[z][1] = temp_stm_vision_objects_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera2[z][1]);
                                        wm_vision_objects_image_path_camera2[z][0] = temp_stm_vision_objects_image_path_camera2[y][0];
                                        wm_vision_objects_image_path_camera2[z][1] = temp_stm_vision_objects_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_actions_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_actions_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_actions_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_actions_image_path_camera1[z][1]);
                                        wm_vision_actions_image_path_camera1[z][0] = temp_stm_vision_actions_image_path_camera1[y][0];
                                        wm_vision_actions_image_path_camera1[z][1] = temp_stm_vision_actions_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_actions_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_actions_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_actions_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_actions_image_path_camera2[z][1]);
                                        wm_vision_actions_image_path_camera2[z][0] = temp_stm_vision_actions_image_path_camera2[y][0];
                                        wm_vision_actions_image_path_camera2[z][1] = temp_stm_vision_actions_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera1[z][1]);
                                        wm_vision_objects_text_camera1[z][0] = temp_stm_vision_objects_text_camera1[y][0];
                                        wm_vision_objects_text_camera1[z][1] = temp_stm_vision_objects_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera2[z][1]);
                                        wm_vision_objects_text_camera2[z][0] = temp_stm_vision_objects_text_camera2[y][0];
                                        wm_vision_objects_text_camera2[z][1] = temp_stm_vision_objects_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_analysis_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_analysis_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_analysis_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_analysis_text_camera1[z][1]);
                                        wm_vision_analysis_text_camera1[z][0] = temp_stm_vision_analysis_text_camera1[y][0];
                                        wm_vision_analysis_text_camera1[z][1] = temp_stm_vision_analysis_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_analysis_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_analysis_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_analysis_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_analysis_text_camera2[z][1]);
                                        wm_vision_analysis_text_camera2[z][0] = temp_stm_vision_analysis_text_camera2[y][0];
                                        wm_vision_analysis_text_camera2[z][1] = temp_stm_vision_analysis_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_typing_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_typing_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_typing_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_typing_text[z][1]);
                                        wm_typing_text[z][0] = temp_stm_typing_text[y][0];
                                        wm_typing_text[z][1] = temp_stm_typing_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_north[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_north[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_north[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_north[z][1]);
                                        wm_Reference_pos_gps_north[z][0] = temp_stm_Reference_pos_gps_north[y][0];
                                        wm_Reference_pos_gps_north[z][1] = temp_stm_Reference_pos_gps_north[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_west[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_west[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_west[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_west[z][1]);
                                        wm_Reference_pos_gps_west[z][0] = temp_stm_Reference_pos_gps_west[y][0];
                                        wm_Reference_pos_gps_west[z][1] = temp_stm_Reference_pos_gps_west[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_image[z][1]);
                                        wm_Reference_pos_gps_image[z][0] = temp_stm_Reference_pos_gps_image[y][0];
                                        wm_Reference_pos_gps_image[z][1] = temp_stm_Reference_pos_gps_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_north_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_north_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_north_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_north_text[z][1]);
                                        wm_pos_gps_north_text[z][0] = temp_stm_pos_gps_north_text[y][0];
                                        wm_pos_gps_north_text[z][1] = temp_stm_pos_gps_north_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_west_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_west_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_west_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_west_text[z][1]);
                                        wm_pos_gps_west_text[z][0] = temp_stm_pos_gps_west_text[y][0];
                                        wm_pos_gps_west_text[z][1] = temp_stm_pos_gps_west_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_elevation_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_elevation_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_west_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_west_text[z][1]);
                                        wm_pos_gps_elevation_text[z][0] = temp_stm_pos_gps_elevation_text[y][0];
                                        wm_pos_gps_elevation_text[z][1] = temp_stm_pos_gps_elevation_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_x[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_x[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_x[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_x[z][1]);
                                        wm_pos_x[z][0] = temp_stm_pos_x[y][0];
                                        wm_pos_x[z][1] = temp_stm_pos_x[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_y[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_y[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_y[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_y[z][1]);
                                        wm_pos_y[z][0] = temp_stm_pos_y[y][0];
                                        wm_pos_y[z][1] = temp_stm_pos_y[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_z[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_z[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_z[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_z[z][1]);
                                        wm_pos_z[z][0] = temp_stm_pos_z[y][0];
                                        wm_pos_z[z][1] = temp_stm_pos_z[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_simple_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_simple_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_simple_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_simple_text[z][1]);
                                        wm_simple_text[z][0] = temp_stm_simple_text[y][0];
                                        wm_simple_text[z][1] = temp_stm_simple_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_simple_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_simple_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_simple_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_simple_image[z][1]);
                                        wm_simple_image[z][0] = temp_stm_simple_image[y][0];
                                        wm_simple_image[z][1] = temp_stm_simple_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "hours" && words_temp[j + 7] == "")
            {
                string temp_stm_vision_path_camera1[1000][2];
                string temp_stm_vision_path_camera2[1000][2];
                string temp_stm_longterm_memory[1000][2];
                string temp_stm_sound_path[1000][2];
                string temp_stm_speech_dialogue[1000][2];
                string temp_stm_action1_text[1000][2];
                string temp_stm_action2_text[1000][2];
                string temp_stm_action3_text[1000][2];
                string temp_stm_text_identification[1000][2];
                string temp_stm_reading_text[1000][2];
                string temp_stm_reading_image[1000][2];
                string temp_stm_algebra_text[1000][2];
                string temp_stm_vision_objects_image_path_camera1[1000][2];
                string temp_stm_vision_objects_image_path_camera2[1000][2];
                string temp_stm_vision_actions_image_path_camera1[1000][2];
                string temp_stm_vision_actions_image_path_camera2[1000][2];
                string temp_stm_vision_objects_text_camera1[1000][2];
                string temp_stm_vision_objects_text_camera2[1000][2];
                string temp_stm_vision_analysis_text_camera1[1000][2];
                string temp_stm_vision_analysis_text_camera2[1000][2];
                string temp_stm_typing_text[1000][2];
                string temp_stm_Reference_pos_gps_north[1000][2];
                string temp_stm_Reference_pos_gps_west[1000][2];
                string temp_stm_Reference_pos_gps_image[1000][2];
                string temp_stm_pos_gps_north_text[1000][2];
                string temp_stm_pos_gps_west_text[1000][2];
                string temp_stm_pos_gps_elevation_text[1000][2];
                string temp_stm_pos_x[1000][2];
                string temp_stm_pos_y[1000][2];
                string temp_stm_pos_z[1000][2];
                string temp_stm_simple_text[1000][2];
                string temp_stm_simple_image[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_path_camera2(mtx_stm_vision_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_sound_path(mtx_stm_sound_path[x][y]);
                        lock_guard<mutex> lock_stm_speech_dialogue(mtx_stm_speech_dialogue[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera1(mtx_stm_vision_objects_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera2(mtx_stm_vision_objects_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_actions_image_path_camera1(mtx_stm_vision_actions_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_actions_image_path_camera2(mtx_stm_vision_actions_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera1(mtx_stm_vision_objects_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera2(mtx_stm_vision_objects_text_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_analysis_text_camera1(mtx_stm_vision_analysis_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_analysis_text_camera2(mtx_stm_vision_analysis_text_camera2[x][y]);
                        lock_guard<mutex> lock_stm_action1_text(mtx_stm_action1_text[x][y]);
                        lock_guard<mutex> lock_stm_action2_text(mtx_stm_action2_text[x][y]);
                        lock_guard<mutex> lock_stm_action3_text(mtx_stm_action3_text[x][y]);
                        lock_guard<mutex> lock_stm_reading_text(mtx_stm_reading_text[x][y]);
                        lock_guard<mutex> lock_stm_algebra_text(mtx_stm_algebra_text[x][y]);
                        lock_guard<mutex> lock_stm_reading_image(mtx_stm_reading_image[x][y]);
                        lock_guard<mutex> lock_stm_typing_text(mtx_stm_typing_text[x][y]);
                        lock_guard<mutex> lock_stm_simple_text(mtx_stm_simple_text[x][y]);
                        lock_guard<mutex> lock_stm_simple_image(mtx_stm_simple_image[x][y]);

                        temp_stm_vision_path_camera1[x][y] = stm_vision_path_camera1[x][y];
                        temp_stm_vision_path_camera2[x][y] = stm_vision_path_camera2[x][y];
                        temp_stm_sound_path[x][y] = stm_sound_path[x][y];
                        temp_stm_speech_dialogue[x][y] = stm_speech_dialogue[x][y];
                        temp_stm_vision_objects_image_path_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_image_path_camera2[x][y] = stm_vision_objects_image_path_camera2[x][y];
                        temp_stm_vision_actions_image_path_camera1[x][y] = temp_stm_vision_actions_image_path_camera1[x][y];
                        temp_stm_vision_actions_image_path_camera2[x][y] = temp_stm_vision_actions_image_path_camera2[x][y];
                        temp_stm_vision_objects_text_camera1[x][y] = stm_vision_objects_text_camera1[x][y];
                        temp_stm_vision_objects_text_camera2[x][y] = stm_vision_objects_text_camera2[x][y];
                        temp_stm_vision_analysis_text_camera1[x][y] = stm_vision_analysis_text_camera1[x][y];
                        temp_stm_vision_analysis_text_camera2[x][y] = stm_vision_analysis_text_camera2[x][y];
                        temp_stm_action1_text[x][y] = stm_action1_text[x][y];
                        temp_stm_action2_text[x][y] = stm_action2_text[x][y];
                        temp_stm_action3_text[x][y] = stm_action3_text[x][y];
                        temp_stm_reading_text[x][y] = stm_reading_text[x][y];
                        temp_stm_algebra_text[x][y] = stm_algebra_text[x][y];
                        temp_stm_reading_image[x][y] = stm_reading_image[x][y];
                        temp_stm_typing_text[x][y] = stm_typing_text[x][y];
                        temp_stm_simple_text[x][y] = stm_simple_text[x][y];
                        temp_stm_simple_image[x][y] = stm_simple_image[x][y];
                    }
                }

                // Convert the speech command into temporary memory then convert to seconds
                long seconds_digit = stoi(words_temp[j + 5]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, NULL, NULL, seconds_digit);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera1[x][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera1[x][1]);
                                        wm_vision_path_camera1[z][0] = temp_stm_vision_path_camera1[y][0];
                                        wm_vision_path_camera1[z][1] = temp_stm_vision_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera2[y][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera2[y][1]);
                                        wm_vision_path_camera2[z][0] = temp_stm_vision_path_camera2[y][0];
                                        wm_vision_path_camera2[z][1] = temp_stm_vision_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_longterm_memory[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_longterm_memory[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_longterm_memory[z][0]);
                    //                    lock_guard<mutex> lock1(mtx_wm_longterm_memory[z][1]);
                    //                    wm_longterm_memory[z][0] = temp_stm_longterm_memory[y][0];
                    //                    wm_longterm_memory[z][1] = temp_stm_longterm_memory[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_sound_path[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_sound_path[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_sound_path[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_sound_path[z][1]);
                                        wm_sound_path[z][0] = temp_stm_sound_path[y][0];
                                        wm_sound_path[z][1] = temp_stm_sound_path[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_speech_dialogue[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_speech_dialogue[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_speech_dialogue[z][0]);
                    //                    lock_guard<mutex> lock1(mtx_wm_speech_dialogue[z][1]);
                    //                    wm_speech_dialogue[z][0] = temp_stm_speech_dialogue[y][0];
                    //                    wm_speech_dialogue[z][1] = temp_stm_speech_dialogue[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action1_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action1_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action1_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action1_text[z][1]);
                                        wm_action1_text[z][0] = temp_stm_action1_text[y][0];
                                        wm_action1_text[z][1] = temp_stm_action1_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action2_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action2_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action2_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action2_text[z][1]);
                                        wm_action2_text[z][0] = temp_stm_action2_text[y][0];
                                        wm_action2_text[z][1] = temp_stm_action2_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action3_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action3_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action3_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action3_text[z][1]);
                                        wm_action3_text[z][0] = temp_stm_action3_text[y][0];
                                        wm_action3_text[z][1] = temp_stm_action3_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_text_identification[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_text_identification[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_text_identification[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_text_identification[z][1]);
                                        wm_text_identification[z][0] = temp_stm_text_identification[y][0];
                                        wm_text_identification[z][1] = temp_stm_text_identification[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_reading_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_reading_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_reading_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_reading_text[z][1]);
                                        wm_reading_text[z][0] = temp_stm_reading_text[y][0];
                                        wm_reading_text[z][1] = temp_stm_reading_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_reading_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_reading_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_reading_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_reading_image[z][1]);
                                        wm_reading_image[z][0] = temp_stm_reading_image[y][0];
                                        wm_reading_image[z][1] = temp_stm_reading_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_algebra_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_algebra_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_algebra_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_algebra_text[z][1]);
                                        wm_algebra_text[z][0] = temp_stm_algebra_text[y][0];
                                        wm_algebra_text[z][1] = temp_stm_algebra_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera1[z][1]);
                                        wm_vision_objects_image_path_camera1[z][0] = temp_stm_vision_objects_image_path_camera1[y][0];
                                        wm_vision_objects_image_path_camera1[z][1] = temp_stm_vision_objects_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera2[z][1]);
                                        wm_vision_objects_image_path_camera2[z][0] = temp_stm_vision_objects_image_path_camera2[y][0];
                                        wm_vision_objects_image_path_camera2[z][1] = temp_stm_vision_objects_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_actions_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_actions_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_actions_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_actions_image_path_camera1[z][1]);
                                        wm_vision_actions_image_path_camera1[z][0] = temp_stm_vision_actions_image_path_camera1[y][0];
                                        wm_vision_actions_image_path_camera1[z][1] = temp_stm_vision_actions_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_actions_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_actions_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_actions_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_actions_image_path_camera2[z][1]);
                                        wm_vision_actions_image_path_camera2[z][0] = temp_stm_vision_actions_image_path_camera2[y][0];
                                        wm_vision_actions_image_path_camera2[z][1] = temp_stm_vision_actions_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera1[z][1]);
                                        wm_vision_objects_text_camera1[z][0] = temp_stm_vision_objects_text_camera1[y][0];
                                        wm_vision_objects_text_camera1[z][1] = temp_stm_vision_objects_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera2[z][1]);
                                        wm_vision_objects_text_camera2[z][0] = temp_stm_vision_objects_text_camera2[y][0];
                                        wm_vision_objects_text_camera2[z][1] = temp_stm_vision_objects_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_analysis_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_analysis_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_analysis_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_analysis_text_camera1[z][1]);
                                        wm_vision_analysis_text_camera1[z][0] = temp_stm_vision_analysis_text_camera1[y][0];
                                        wm_vision_analysis_text_camera1[z][1] = temp_stm_vision_analysis_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_analysis_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_analysis_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_analysis_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_analysis_text_camera2[z][1]);
                                        wm_vision_analysis_text_camera2[z][0] = temp_stm_vision_analysis_text_camera2[y][0];
                                        wm_vision_analysis_text_camera2[z][1] = temp_stm_vision_analysis_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_typing_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_typing_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_typing_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_typing_text[z][1]);
                                        wm_typing_text[z][0] = temp_stm_typing_text[y][0];
                                        wm_typing_text[z][1] = temp_stm_typing_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_north[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_north[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_north[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_north[z][1]);
                                        wm_Reference_pos_gps_north[z][0] = temp_stm_Reference_pos_gps_north[y][0];
                                        wm_Reference_pos_gps_north[z][1] = temp_stm_Reference_pos_gps_north[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_west[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_west[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_west[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_west[z][1]);
                                        wm_Reference_pos_gps_west[z][0] = temp_stm_Reference_pos_gps_west[y][0];
                                        wm_Reference_pos_gps_west[z][1] = temp_stm_Reference_pos_gps_west[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_image[z][1]);
                                        wm_Reference_pos_gps_image[z][0] = temp_stm_Reference_pos_gps_image[y][0];
                                        wm_Reference_pos_gps_image[z][1] = temp_stm_Reference_pos_gps_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_north_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_north_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_north_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_north_text[z][1]);
                                        wm_pos_gps_north_text[z][0] = temp_stm_pos_gps_north_text[y][0];
                                        wm_pos_gps_north_text[z][1] = temp_stm_pos_gps_north_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_west_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_west_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_west_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_west_text[z][1]);
                                        wm_pos_gps_west_text[z][0] = temp_stm_pos_gps_west_text[y][0];
                                        wm_pos_gps_west_text[z][1] = temp_stm_pos_gps_west_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_elevation_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_elevation_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_west_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_west_text[z][1]);
                                        wm_pos_gps_elevation_text[z][0] = temp_stm_pos_gps_elevation_text[y][0];
                                        wm_pos_gps_elevation_text[z][1] = temp_stm_pos_gps_elevation_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_x[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_x[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_x[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_x[z][1]);
                                        wm_pos_x[z][0] = temp_stm_pos_x[y][0];
                                        wm_pos_x[z][1] = temp_stm_pos_x[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_y[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_y[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_y[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_y[z][1]);
                                        wm_pos_y[z][0] = temp_stm_pos_y[y][0];
                                        wm_pos_y[z][1] = temp_stm_pos_y[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_z[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_z[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_z[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_z[z][1]);
                                        wm_pos_z[z][0] = temp_stm_pos_z[y][0];
                                        wm_pos_z[z][1] = temp_stm_pos_z[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_simple_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_simple_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_simple_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_simple_text[z][1]);
                                        wm_simple_text[z][0] = temp_stm_simple_text[y][0];
                                        wm_simple_text[z][1] = temp_stm_simple_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_simple_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_simple_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_simple_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_simple_image[z][1]);
                                        wm_simple_image[z][0] = temp_stm_simple_image[y][0];
                                        wm_simple_image[z][1] = temp_stm_simple_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "hours" && isdigit(stoi(words_temp[j + 7])) && words_temp[j + 8] == "minutes" && words_temp[j + 9] == "")
            {
                string temp_stm_vision_path_camera1[1000][2];
                string temp_stm_vision_path_camera2[1000][2];
                string temp_stm_longterm_memory[1000][2];
                string temp_stm_sound_path[1000][2];
                string temp_stm_speech_dialogue[1000][2];
                string temp_stm_action1_text[1000][2];
                string temp_stm_action2_text[1000][2];
                string temp_stm_action3_text[1000][2];
                string temp_stm_text_identification[1000][2];
                string temp_stm_reading_text[1000][2];
                string temp_stm_reading_image[1000][2];
                string temp_stm_algebra_text[1000][2];
                string temp_stm_vision_objects_image_path_camera1[1000][2];
                string temp_stm_vision_objects_image_path_camera2[1000][2];
                string temp_stm_vision_actions_image_path_camera1[1000][2];
                string temp_stm_vision_actions_image_path_camera2[1000][2];
                string temp_stm_vision_objects_text_camera1[1000][2];
                string temp_stm_vision_objects_text_camera2[1000][2];
                string temp_stm_vision_analysis_text_camera1[1000][2];
                string temp_stm_vision_analysis_text_camera2[1000][2];
                string temp_stm_typing_text[1000][2];
                string temp_stm_Reference_pos_gps_north[1000][2];
                string temp_stm_Reference_pos_gps_west[1000][2];
                string temp_stm_Reference_pos_gps_image[1000][2];
                string temp_stm_pos_gps_north_text[1000][2];
                string temp_stm_pos_gps_west_text[1000][2];
                string temp_stm_pos_gps_elevation_text[1000][2];
                string temp_stm_pos_x[1000][2];
                string temp_stm_pos_y[1000][2];
                string temp_stm_pos_z[1000][2];
                string temp_stm_simple_text[1000][2];
                string temp_stm_simple_image[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_path_camera2(mtx_stm_vision_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_sound_path(mtx_stm_sound_path[x][y]);
                        lock_guard<mutex> lock_stm_speech_dialogue(mtx_stm_speech_dialogue[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera1(mtx_stm_vision_objects_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera2(mtx_stm_vision_objects_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_actions_image_path_camera1(mtx_stm_vision_actions_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_actions_image_path_camera2(mtx_stm_vision_actions_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera1(mtx_stm_vision_objects_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera2(mtx_stm_vision_objects_text_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_analysis_text_camera1(mtx_stm_vision_analysis_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_analysis_text_camera2(mtx_stm_vision_analysis_text_camera2[x][y]);
                        lock_guard<mutex> lock_stm_action1_text(mtx_stm_action1_text[x][y]);
                        lock_guard<mutex> lock_stm_action2_text(mtx_stm_action2_text[x][y]);
                        lock_guard<mutex> lock_stm_action3_text(mtx_stm_action3_text[x][y]);
                        lock_guard<mutex> lock_stm_reading_text(mtx_stm_reading_text[x][y]);
                        lock_guard<mutex> lock_stm_algebra_text(mtx_stm_algebra_text[x][y]);
                        lock_guard<mutex> lock_stm_reading_image(mtx_stm_reading_image[x][y]);
                        lock_guard<mutex> lock_stm_typing_text(mtx_stm_typing_text[x][y]);
                        lock_guard<mutex> lock_stm_simple_text(mtx_stm_simple_text[x][y]);
                        lock_guard<mutex> lock_stm_simple_image(mtx_stm_simple_image[x][y]);

                        temp_stm_vision_path_camera1[x][y] = stm_vision_path_camera1[x][y];
                        temp_stm_vision_path_camera2[x][y] = stm_vision_path_camera2[x][y];
                        temp_stm_sound_path[x][y] = stm_sound_path[x][y];
                        temp_stm_speech_dialogue[x][y] = stm_speech_dialogue[x][y];
                        temp_stm_vision_objects_image_path_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_image_path_camera2[x][y] = stm_vision_objects_image_path_camera2[x][y];
                        temp_stm_vision_actions_image_path_camera1[x][y] = temp_stm_vision_actions_image_path_camera1[x][y];
                        temp_stm_vision_actions_image_path_camera2[x][y] = temp_stm_vision_actions_image_path_camera2[x][y];
                        temp_stm_vision_objects_text_camera1[x][y] = stm_vision_objects_text_camera1[x][y];
                        temp_stm_vision_objects_text_camera2[x][y] = stm_vision_objects_text_camera2[x][y];
                        temp_stm_vision_analysis_text_camera1[x][y] = stm_vision_analysis_text_camera1[x][y];
                        temp_stm_vision_analysis_text_camera2[x][y] = stm_vision_analysis_text_camera2[x][y];
                        temp_stm_action1_text[x][y] = stm_action1_text[x][y];
                        temp_stm_action2_text[x][y] = stm_action2_text[x][y];
                        temp_stm_action3_text[x][y] = stm_action3_text[x][y];
                        temp_stm_reading_text[x][y] = stm_reading_text[x][y];
                        temp_stm_algebra_text[x][y] = stm_algebra_text[x][y];
                        temp_stm_reading_image[x][y] = stm_reading_image[x][y];
                        temp_stm_typing_text[x][y] = stm_typing_text[x][y];
                        temp_stm_simple_text[x][y] = stm_simple_text[x][y];
                        temp_stm_simple_image[x][y] = stm_simple_image[x][y];
                    }
                }

                // Convert the speech command into temporary memory then convert to seconds
                long seconds_digit = stoi(words_temp[j + 5]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, NULL, NULL, seconds_digit);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera1[x][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera1[x][1]);
                                        wm_vision_path_camera1[z][0] = temp_stm_vision_path_camera1[y][0];
                                        wm_vision_path_camera1[z][1] = temp_stm_vision_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera2[y][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera2[y][1]);
                                        wm_vision_path_camera2[z][0] = temp_stm_vision_path_camera2[y][0];
                                        wm_vision_path_camera2[z][1] = temp_stm_vision_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_longterm_memory[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_longterm_memory[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_longterm_memory[z][0]);
                    //                    lock_guard<mutex> lock1(mtx_wm_longterm_memory[z][1]);
                    //                    wm_longterm_memory[z][0] = temp_stm_longterm_memory[y][0];
                    //                    wm_longterm_memory[z][1] = temp_stm_longterm_memory[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_sound_path[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_sound_path[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_sound_path[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_sound_path[z][1]);
                                        wm_sound_path[z][0] = temp_stm_sound_path[y][0];
                                        wm_sound_path[z][1] = temp_stm_sound_path[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_speech_dialogue[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_speech_dialogue[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_speech_dialogue[z][0]);
                    //                    lock_guard<mutex> lock1(mtx_wm_speech_dialogue[z][1]);
                    //                    wm_speech_dialogue[z][0] = temp_stm_speech_dialogue[y][0];
                    //                    wm_speech_dialogue[z][1] = temp_stm_speech_dialogue[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action1_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action1_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action1_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action1_text[z][1]);
                                        wm_action1_text[z][0] = temp_stm_action1_text[y][0];
                                        wm_action1_text[z][1] = temp_stm_action1_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action2_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action2_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action2_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action2_text[z][1]);
                                        wm_action2_text[z][0] = temp_stm_action2_text[y][0];
                                        wm_action2_text[z][1] = temp_stm_action2_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action3_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action3_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action3_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action3_text[z][1]);
                                        wm_action3_text[z][0] = temp_stm_action3_text[y][0];
                                        wm_action3_text[z][1] = temp_stm_action3_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_text_identification[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_text_identification[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_text_identification[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_text_identification[z][1]);
                                        wm_text_identification[z][0] = temp_stm_text_identification[y][0];
                                        wm_text_identification[z][1] = temp_stm_text_identification[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_reading_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_reading_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_reading_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_reading_text[z][1]);
                                        wm_reading_text[z][0] = temp_stm_reading_text[y][0];
                                        wm_reading_text[z][1] = temp_stm_reading_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_reading_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_reading_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_reading_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_reading_image[z][1]);
                                        wm_reading_image[z][0] = temp_stm_reading_image[y][0];
                                        wm_reading_image[z][1] = temp_stm_reading_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_algebra_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_algebra_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_algebra_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_algebra_text[z][1]);
                                        wm_algebra_text[z][0] = temp_stm_algebra_text[y][0];
                                        wm_algebra_text[z][1] = temp_stm_algebra_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera1[z][1]);
                                        wm_vision_objects_image_path_camera1[z][0] = temp_stm_vision_objects_image_path_camera1[y][0];
                                        wm_vision_objects_image_path_camera1[z][1] = temp_stm_vision_objects_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera2[z][1]);
                                        wm_vision_objects_image_path_camera2[z][0] = temp_stm_vision_objects_image_path_camera2[y][0];
                                        wm_vision_objects_image_path_camera2[z][1] = temp_stm_vision_objects_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_actions_image_path_camera1[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_vision_actions_image_path_camera1[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_vision_actions_image_path_camera1[z][0]);
                    //                    lock_guard<mutex> lock1(mtx_wm_vision_actions_image_path_camera1[z][1]);
                    //                    wm_vision_actions_image_path_camera1[z][0] = temp_stm_vision_actions_image_path_camera1[y][0];
                    //                    wm_vision_actions_image_path_camera1[z][1] = temp_stm_vision_actions_image_path_camera1[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_actions_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_actions_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_actions_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_actions_image_path_camera2[z][1]);
                                        wm_vision_actions_image_path_camera2[z][0] = temp_stm_vision_actions_image_path_camera2[y][0];
                                        wm_vision_actions_image_path_camera2[z][1] = temp_stm_vision_actions_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera1[z][1]);
                                        wm_vision_objects_text_camera1[z][0] = temp_stm_vision_objects_text_camera1[y][0];
                                        wm_vision_objects_text_camera1[z][1] = temp_stm_vision_objects_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera2[z][1]);
                                        wm_vision_objects_text_camera2[z][0] = temp_stm_vision_objects_text_camera2[y][0];
                                        wm_vision_objects_text_camera2[z][1] = temp_stm_vision_objects_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_analysis_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_analysis_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_analysis_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_analysis_text_camera1[z][1]);
                                        wm_vision_analysis_text_camera1[z][0] = temp_stm_vision_analysis_text_camera1[y][0];
                                        wm_vision_analysis_text_camera1[z][1] = temp_stm_vision_analysis_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_analysis_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_analysis_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_analysis_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_analysis_text_camera2[z][1]);
                                        wm_vision_analysis_text_camera2[z][0] = temp_stm_vision_analysis_text_camera2[y][0];
                                        wm_vision_analysis_text_camera2[z][1] = temp_stm_vision_analysis_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_typing_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_typing_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_typing_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_typing_text[z][1]);
                                        wm_typing_text[z][0] = temp_stm_typing_text[y][0];
                                        wm_typing_text[z][1] = temp_stm_typing_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_north[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_north[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_north[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_north[z][1]);
                                        wm_Reference_pos_gps_north[z][0] = temp_stm_Reference_pos_gps_north[y][0];
                                        wm_Reference_pos_gps_north[z][1] = temp_stm_Reference_pos_gps_north[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_west[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_west[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_west[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_west[z][1]);
                                        wm_Reference_pos_gps_west[z][0] = temp_stm_Reference_pos_gps_west[y][0];
                                        wm_Reference_pos_gps_west[z][1] = temp_stm_Reference_pos_gps_west[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_image[z][1]);
                                        wm_Reference_pos_gps_image[z][0] = temp_stm_Reference_pos_gps_image[y][0];
                                        wm_Reference_pos_gps_image[z][1] = temp_stm_Reference_pos_gps_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_north_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_north_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_north_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_north_text[z][1]);
                                        wm_pos_gps_north_text[z][0] = temp_stm_pos_gps_north_text[y][0];
                                        wm_pos_gps_north_text[z][1] = temp_stm_pos_gps_north_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_west_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_west_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_west_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_west_text[z][1]);
                                        wm_pos_gps_west_text[z][0] = temp_stm_pos_gps_west_text[y][0];
                                        wm_pos_gps_west_text[z][1] = temp_stm_pos_gps_west_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_elevation_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_elevation_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_west_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_west_text[z][1]);
                                        wm_pos_gps_elevation_text[z][0] = temp_stm_pos_gps_elevation_text[y][0];
                                        wm_pos_gps_elevation_text[z][1] = temp_stm_pos_gps_elevation_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_x[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_x[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_x[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_x[z][1]);
                                        wm_pos_x[z][0] = temp_stm_pos_x[y][0];
                                        wm_pos_x[z][1] = temp_stm_pos_x[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_y[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_y[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_y[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_y[z][1]);
                                        wm_pos_y[z][0] = temp_stm_pos_y[y][0];
                                        wm_pos_y[z][1] = temp_stm_pos_y[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_z[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_z[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_z[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_z[z][1]);
                                        wm_pos_z[z][0] = temp_stm_pos_z[y][0];
                                        wm_pos_z[z][1] = temp_stm_pos_z[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_simple_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_simple_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_simple_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_simple_text[z][1]);
                                        wm_simple_text[z][0] = temp_stm_simple_text[y][0];
                                        wm_simple_text[z][1] = temp_stm_simple_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_simple_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_simple_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_simple_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_simple_image[z][1]);
                                        wm_simple_image[z][0] = temp_stm_simple_image[y][0];
                                        wm_simple_image[z][1] = temp_stm_simple_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "hours" && isdigit(stoi(words_temp[j + 7])) && words_temp[j + 8] == "minutes" && isdigit(stoi(words_temp[j + 9])) && words_temp[j + 10] == "seconds")
            {
                string temp_stm_vision_path_camera1[1000][2];
                string temp_stm_vision_path_camera2[1000][2];
                string temp_stm_longterm_memory[1000][2];
                string temp_stm_sound_path[1000][2];
                string temp_stm_speech_dialogue[1000][2];
                string temp_stm_action1_text[1000][2];
                string temp_stm_action2_text[1000][2];
                string temp_stm_action3_text[1000][2];
                string temp_stm_text_identification[1000][2];
                string temp_stm_reading_text[1000][2];
                string temp_stm_reading_image[1000][2];
                string temp_stm_algebra_text[1000][2];
                string temp_stm_vision_objects_image_path_camera1[1000][2];
                string temp_stm_vision_objects_image_path_camera2[1000][2];
                string temp_stm_vision_actions_image_path_camera1[1000][2];
                string temp_stm_vision_actions_image_path_camera2[1000][2];
                string temp_stm_vision_objects_text_camera1[1000][2];
                string temp_stm_vision_objects_text_camera2[1000][2];
                string temp_stm_vision_analysis_text_camera1[1000][2];
                string temp_stm_vision_analysis_text_camera2[1000][2];
                string temp_stm_typing_text[1000][2];
                string temp_stm_Reference_pos_gps_north[1000][2];
                string temp_stm_Reference_pos_gps_west[1000][2];
                string temp_stm_Reference_pos_gps_image[1000][2];
                string temp_stm_pos_gps_north_text[1000][2];
                string temp_stm_pos_gps_west_text[1000][2];
                string temp_stm_pos_gps_elevation_text[1000][2];
                string temp_stm_pos_x[1000][2];
                string temp_stm_pos_y[1000][2];
                string temp_stm_pos_z[1000][2];
                string temp_stm_simple_text[1000][2];
                string temp_stm_simple_image[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_path_camera2(mtx_stm_vision_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_sound_path(mtx_stm_sound_path[x][y]);
                        lock_guard<mutex> lock_stm_speech_dialogue(mtx_stm_speech_dialogue[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera1(mtx_stm_vision_objects_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera2(mtx_stm_vision_objects_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_actions_image_path_camera1(mtx_stm_vision_actions_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_actions_image_path_camera2(mtx_stm_vision_actions_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera1(mtx_stm_vision_objects_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera2(mtx_stm_vision_objects_text_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_analysis_text_camera1(mtx_stm_vision_analysis_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_analysis_text_camera2(mtx_stm_vision_analysis_text_camera2[x][y]);
                        lock_guard<mutex> lock_stm_action1_text(mtx_stm_action1_text[x][y]);
                        lock_guard<mutex> lock_stm_action2_text(mtx_stm_action2_text[x][y]);
                        lock_guard<mutex> lock_stm_action3_text(mtx_stm_action3_text[x][y]);
                        lock_guard<mutex> lock_stm_reading_text(mtx_stm_reading_text[x][y]);
                        lock_guard<mutex> lock_stm_algebra_text(mtx_stm_algebra_text[x][y]);
                        lock_guard<mutex> lock_stm_reading_image(mtx_stm_reading_image[x][y]);
                        lock_guard<mutex> lock_stm_typing_text(mtx_stm_typing_text[x][y]);
                        lock_guard<mutex> lock_stm_simple_text(mtx_stm_simple_text[x][y]);
                        lock_guard<mutex> lock_stm_simple_image(mtx_stm_simple_image[x][y]);

                        temp_stm_vision_path_camera1[x][y] = stm_vision_path_camera1[x][y];
                        temp_stm_vision_path_camera2[x][y] = stm_vision_path_camera2[x][y];
                        temp_stm_sound_path[x][y] = stm_sound_path[x][y];
                        temp_stm_speech_dialogue[x][y] = stm_speech_dialogue[x][y];
                        temp_stm_vision_objects_image_path_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_image_path_camera2[x][y] = stm_vision_objects_image_path_camera2[x][y];
                        temp_stm_vision_actions_image_path_camera1[x][y] = temp_stm_vision_actions_image_path_camera1[x][y];
                        temp_stm_vision_actions_image_path_camera2[x][y] = temp_stm_vision_actions_image_path_camera2[x][y];
                        temp_stm_vision_objects_text_camera1[x][y] = stm_vision_objects_text_camera1[x][y];
                        temp_stm_vision_objects_text_camera2[x][y] = stm_vision_objects_text_camera2[x][y];
                        temp_stm_vision_analysis_text_camera1[x][y] = stm_vision_analysis_text_camera1[x][y];
                        temp_stm_vision_analysis_text_camera2[x][y] = stm_vision_analysis_text_camera2[x][y];
                        temp_stm_action1_text[x][y] = stm_action1_text[x][y];
                        temp_stm_action2_text[x][y] = stm_action2_text[x][y];
                        temp_stm_action3_text[x][y] = stm_action3_text[x][y];
                        temp_stm_reading_text[x][y] = stm_reading_text[x][y];
                        temp_stm_algebra_text[x][y] = stm_algebra_text[x][y];
                        temp_stm_reading_image[x][y] = stm_reading_image[x][y];
                        temp_stm_typing_text[x][y] = stm_typing_text[x][y];
                        temp_stm_simple_text[x][y] = stm_simple_text[x][y];
                        temp_stm_simple_image[x][y] = stm_simple_image[x][y];
                    }
                }

                // Convert the speech command into temporary memory then convert to seconds
                long seconds_digit = stoi(words_temp[j + 5]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, NULL, NULL, seconds_digit);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera1[x][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera1[x][1]);
                                        wm_vision_path_camera1[z][0] = temp_stm_vision_path_camera1[y][0];
                                        wm_vision_path_camera1[z][1] = temp_stm_vision_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera2[y][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera2[y][1]);
                                        wm_vision_path_camera2[z][0] = temp_stm_vision_path_camera2[y][0];
                                        wm_vision_path_camera2[z][1] = temp_stm_vision_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_longterm_memory[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_longterm_memory[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_longterm_memory[z][0]);
                    //                    lock_guard<mutex> lock1(mtx_wm_longterm_memory[z][1]);
                    //                    wm_longterm_memory[z][0] = temp_stm_longterm_memory[y][0];
                    //                    wm_longterm_memory[z][1] = temp_stm_longterm_memory[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_sound_path[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_sound_path[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_sound_path[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_sound_path[z][1]);
                                        wm_sound_path[z][0] = temp_stm_sound_path[y][0];
                                        wm_sound_path[z][1] = temp_stm_sound_path[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_speech_dialogue[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_speech_dialogue[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_speech_dialogue[z][0]);
                    //                    lock_guard<mutex> lock1(mtx_wm_speech_dialogue[z][1]);
                    //                    wm_speech_dialogue[z][0] = temp_stm_speech_dialogue[y][0];
                    //                    wm_speech_dialogue[z][1] = temp_stm_speech_dialogue[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action1_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action1_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action1_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action1_text[z][1]);
                                        wm_action1_text[z][0] = temp_stm_action1_text[y][0];
                                        wm_action1_text[z][1] = temp_stm_action1_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action2_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action2_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action2_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action2_text[z][1]);
                                        wm_action2_text[z][0] = temp_stm_action2_text[y][0];
                                        wm_action2_text[z][1] = temp_stm_action2_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_action3_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_action3_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_action3_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_action3_text[z][1]);
                                        wm_action3_text[z][0] = temp_stm_action3_text[y][0];
                                        wm_action3_text[z][1] = temp_stm_action3_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_text_identification[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_text_identification[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_text_identification[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_text_identification[z][1]);
                                        wm_text_identification[z][0] = temp_stm_text_identification[y][0];
                                        wm_text_identification[z][1] = temp_stm_text_identification[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_reading_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_reading_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_reading_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_reading_text[z][1]);
                                        wm_reading_text[z][0] = temp_stm_reading_text[y][0];
                                        wm_reading_text[z][1] = temp_stm_reading_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_reading_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_reading_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_reading_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_reading_image[z][1]);
                                        wm_reading_image[z][0] = temp_stm_reading_image[y][0];
                                        wm_reading_image[z][1] = temp_stm_reading_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_algebra_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_algebra_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_algebra_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_algebra_text[z][1]);
                                        wm_algebra_text[z][0] = temp_stm_algebra_text[y][0];
                                        wm_algebra_text[z][1] = temp_stm_algebra_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera1[z][1]);
                                        wm_vision_objects_image_path_camera1[z][0] = temp_stm_vision_objects_image_path_camera1[y][0];
                                        wm_vision_objects_image_path_camera1[z][1] = temp_stm_vision_objects_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera2[z][1]);
                                        wm_vision_objects_image_path_camera2[z][0] = temp_stm_vision_objects_image_path_camera2[y][0];
                                        wm_vision_objects_image_path_camera2[z][1] = temp_stm_vision_objects_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_actions_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_actions_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_actions_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_actions_image_path_camera1[z][1]);
                                        wm_vision_actions_image_path_camera1[z][0] = temp_stm_vision_actions_image_path_camera1[y][0];
                                        wm_vision_actions_image_path_camera1[z][1] = temp_stm_vision_actions_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_actions_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_actions_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_actions_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_actions_image_path_camera2[z][1]);
                                        wm_vision_actions_image_path_camera2[z][0] = temp_stm_vision_actions_image_path_camera2[y][0];
                                        wm_vision_actions_image_path_camera2[z][1] = temp_stm_vision_actions_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera1[z][1]);
                                        wm_vision_objects_text_camera1[z][0] = temp_stm_vision_objects_text_camera1[y][0];
                                        wm_vision_objects_text_camera1[z][1] = temp_stm_vision_objects_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera2[z][1]);
                                        wm_vision_objects_text_camera2[z][0] = temp_stm_vision_objects_text_camera2[y][0];
                                        wm_vision_objects_text_camera2[z][1] = temp_stm_vision_objects_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_analysis_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_analysis_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_analysis_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_analysis_text_camera1[z][1]);
                                        wm_vision_analysis_text_camera1[z][0] = temp_stm_vision_analysis_text_camera1[y][0];
                                        wm_vision_analysis_text_camera1[z][1] = temp_stm_vision_analysis_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_analysis_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_analysis_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_analysis_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_analysis_text_camera2[z][1]);
                                        wm_vision_analysis_text_camera2[z][0] = temp_stm_vision_analysis_text_camera2[y][0];
                                        wm_vision_analysis_text_camera2[z][1] = temp_stm_vision_analysis_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_typing_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_typing_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_typing_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_typing_text[z][1]);
                                        wm_typing_text[z][0] = temp_stm_typing_text[y][0];
                                        wm_typing_text[z][1] = temp_stm_typing_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_north[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_north[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_north[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_north[z][1]);
                                        wm_Reference_pos_gps_north[z][0] = temp_stm_Reference_pos_gps_north[y][0];
                                        wm_Reference_pos_gps_north[z][1] = temp_stm_Reference_pos_gps_north[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_west[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_west[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_west[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_west[z][1]);
                                        wm_Reference_pos_gps_west[z][0] = temp_stm_Reference_pos_gps_west[y][0];
                                        wm_Reference_pos_gps_west[z][1] = temp_stm_Reference_pos_gps_west[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_Reference_pos_gps_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_Reference_pos_gps_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_Reference_pos_gps_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_Reference_pos_gps_image[z][1]);
                                        wm_Reference_pos_gps_image[z][0] = temp_stm_Reference_pos_gps_image[y][0];
                                        wm_Reference_pos_gps_image[z][1] = temp_stm_Reference_pos_gps_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_north_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_north_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_north_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_north_text[z][1]);
                                        wm_pos_gps_north_text[z][0] = temp_stm_pos_gps_north_text[y][0];
                                        wm_pos_gps_north_text[z][1] = temp_stm_pos_gps_north_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_west_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_west_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_west_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_west_text[z][1]);
                                        wm_pos_gps_west_text[z][0] = temp_stm_pos_gps_west_text[y][0];
                                        wm_pos_gps_west_text[z][1] = temp_stm_pos_gps_west_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_gps_elevation_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_gps_elevation_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_gps_west_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_gps_west_text[z][1]);
                                        wm_pos_gps_elevation_text[z][0] = temp_stm_pos_gps_elevation_text[y][0];
                                        wm_pos_gps_elevation_text[z][1] = temp_stm_pos_gps_elevation_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_x[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_x[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_x[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_x[z][1]);
                                        wm_pos_x[z][0] = temp_stm_pos_x[y][0];
                                        wm_pos_x[z][1] = temp_stm_pos_x[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_y[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_y[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_y[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_y[z][1]);
                                        wm_pos_y[z][0] = temp_stm_pos_y[y][0];
                                        wm_pos_y[z][1] = temp_stm_pos_y[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_pos_z[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_pos_z[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_pos_z[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_pos_z[z][1]);
                                        wm_pos_z[z][0] = temp_stm_pos_z[y][0];
                                        wm_pos_z[z][1] = temp_stm_pos_z[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_simple_text[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_simple_text[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_simple_text[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_simple_text[z][1]);
                                        wm_simple_text[z][0] = temp_stm_simple_text[y][0];
                                        wm_simple_text[z][1] = temp_stm_simple_text[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_simple_image[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_simple_image[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_simple_image[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_simple_image[z][1]);
                                        wm_simple_image[z][0] = temp_stm_simple_image[y][0];
                                        wm_simple_image[z][1] = temp_stm_simple_image[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "seconds" && words_temp[j + 7] == "of" && words_temp[j + 8] == "vision")
            {
                string temp_stm_vision_path_camera1[1000][2];
                string temp_stm_vision_path_camera2[1000][2];
                string temp_stm_vision_objects_image_path_camera1[1000][2];
                string temp_stm_vision_objects_image_path_camera2[1000][2];
                string temp_stm_vision_objects_text_camera1[1000][2];
                string temp_stm_vision_objects_text_camera2[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock_stm_vision_path_camera1(mtx_stm_vision_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_path_camera2(mtx_stm_vision_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera1(mtx_stm_vision_objects_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera2(mtx_stm_vision_objects_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera1(mtx_stm_vision_objects_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera2(mtx_stm_vision_objects_text_camera2[x][y]);

                        temp_stm_vision_path_camera1[x][y] = stm_vision_path_camera1[x][y];
                        temp_stm_vision_path_camera2[x][y] = stm_vision_path_camera2[x][y];
                        temp_stm_vision_objects_image_path_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_image_path_camera2[x][y] = stm_vision_objects_image_path_camera2[x][y];
                        temp_stm_vision_objects_text_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_text_camera2[x][y] = stm_vision_objects_text_camera2[x][y];
                    }
                }

                long seconds_digit = stoi(words_temp[j + 5]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, NULL, NULL, seconds_digit);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 999; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera1[z][1]);
                                        wm_vision_path_camera1[z][0] = temp_stm_vision_path_camera1[y][0];
                                        wm_vision_path_camera1[z][1] = temp_stm_vision_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera2[z][1]);
                                        wm_vision_path_camera2[z][0] = temp_stm_vision_path_camera2[y][0];
                                        wm_vision_path_camera2[z][1] = temp_stm_vision_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera1[z][1]);
                                        wm_vision_objects_image_path_camera1[z][0] = temp_stm_vision_objects_image_path_camera1[y][0];
                                        wm_vision_objects_image_path_camera1[z][1] = temp_stm_vision_objects_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera2[z][1]);
                                        wm_vision_objects_image_path_camera2[z][0] = temp_stm_vision_objects_image_path_camera2[y][0];
                                        wm_vision_objects_image_path_camera2[z][1] = temp_stm_vision_objects_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera1[z][1]);
                                        wm_vision_objects_text_camera1[z][0] = temp_stm_vision_objects_text_camera1[y][0];
                                        wm_vision_objects_text_camera1[z][1] = temp_stm_vision_objects_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera2[z][1]);
                                        wm_vision_objects_text_camera2[z][0] = temp_stm_vision_objects_text_camera2[y][0];
                                        wm_vision_objects_text_camera2[z][1] = temp_stm_vision_objects_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "minutes" && words_temp[j + 7] == "of" && words_temp[j + 8] == "vision")
            {
                string temp_stm_vision_path_camera1[1000][2];
                string temp_stm_vision_path_camera2[1000][2];
                string temp_stm_vision_objects_image_path_camera1[1000][2];
                string temp_stm_vision_objects_image_path_camera2[1000][2];
                string temp_stm_vision_objects_text_camera1[1000][2];
                string temp_stm_vision_objects_text_camera2[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock_stm_vision_path_camera1(mtx_stm_vision_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_path_camera2(mtx_stm_vision_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera1(mtx_stm_vision_objects_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera2(mtx_stm_vision_objects_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera1(mtx_stm_vision_objects_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera2(mtx_stm_vision_objects_text_camera2[x][y]);

                        temp_stm_vision_path_camera1[x][y] = stm_vision_path_camera1[x][y];
                        temp_stm_vision_path_camera2[x][y] = stm_vision_path_camera2[x][y];
                        temp_stm_vision_objects_image_path_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_image_path_camera2[x][y] = stm_vision_objects_image_path_camera2[x][y];
                        temp_stm_vision_objects_text_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_text_camera2[x][y] = stm_vision_objects_text_camera2[x][y];
                    }
                }

                long seconds_digit = stoi(words_temp[j + 5]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, NULL, NULL, seconds_digit);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera1[z][1]);
                                        wm_vision_path_camera1[z][0] = temp_stm_vision_path_camera1[y][0];
                                        wm_vision_path_camera1[z][1] = temp_stm_vision_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera2[z][1]);
                                        wm_vision_path_camera2[z][0] = temp_stm_vision_path_camera2[y][0];
                                        wm_vision_path_camera2[z][1] = temp_stm_vision_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera1[z][1]);
                                        wm_vision_objects_image_path_camera1[z][0] = temp_stm_vision_objects_image_path_camera1[y][0];
                                        wm_vision_objects_image_path_camera1[z][1] = temp_stm_vision_objects_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera2[z][1]);
                                        wm_vision_objects_image_path_camera2[z][0] = temp_stm_vision_objects_image_path_camera2[y][0];
                                        wm_vision_objects_image_path_camera2[z][1] = temp_stm_vision_objects_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera1[z][1]);
                                        wm_vision_objects_text_camera1[z][0] = temp_stm_vision_objects_text_camera1[y][0];
                                        wm_vision_objects_text_camera1[z][1] = temp_stm_vision_objects_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera2[z][1]);
                                        wm_vision_objects_text_camera2[z][0] = temp_stm_vision_objects_text_camera2[y][0];
                                        wm_vision_objects_text_camera2[z][1] = temp_stm_vision_objects_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "minutes" && words_temp[j + 7] == "and" && isdigit(stoi(words_temp[j + 8])) && words_temp[j + 9] == "seconds" && words_temp[j + 10] == "of" && words_temp[j + 11] == "vision")
            {
                string temp_stm_vision_path_camera1[1000][2];
                string temp_stm_vision_path_camera2[1000][2];
                string temp_stm_vision_objects_image_path_camera1[1000][2];
                string temp_stm_vision_objects_image_path_camera2[1000][2];
                string temp_stm_vision_objects_text_camera1[1000][2];
                string temp_stm_vision_objects_text_camera2[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock_stm_vision_path_camera1(mtx_stm_vision_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_path_camera2(mtx_stm_vision_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera1(mtx_stm_vision_objects_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera2(mtx_stm_vision_objects_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera1(mtx_stm_vision_objects_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera2(mtx_stm_vision_objects_text_camera2[x][y]);

                        temp_stm_vision_path_camera1[x][y] = stm_vision_path_camera1[x][y];
                        temp_stm_vision_path_camera2[x][y] = stm_vision_path_camera2[x][y];
                        temp_stm_vision_objects_image_path_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_image_path_camera2[x][y] = stm_vision_objects_image_path_camera2[x][y];
                        temp_stm_vision_objects_text_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_text_camera2[x][y] = stm_vision_objects_text_camera2[x][y];
                    }
                }

                long seconds_digit = stoi(words_temp[j + 5]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, NULL, NULL, seconds_digit);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera1[z][1]);
                                        wm_vision_path_camera1[z][0] = temp_stm_vision_path_camera1[y][0];
                                        wm_vision_path_camera1[z][1] = temp_stm_vision_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera2[z][1]);
                                        wm_vision_path_camera2[z][0] = temp_stm_vision_path_camera2[y][0];
                                        wm_vision_path_camera2[z][1] = temp_stm_vision_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera1[z][1]);
                                        wm_vision_objects_image_path_camera1[z][0] = temp_stm_vision_objects_image_path_camera1[y][0];
                                        wm_vision_objects_image_path_camera1[z][1] = temp_stm_vision_objects_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera2[z][1]);
                                        wm_vision_objects_image_path_camera2[z][0] = temp_stm_vision_objects_image_path_camera2[y][0];
                                        wm_vision_objects_image_path_camera2[z][1] = temp_stm_vision_objects_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera1[z][1]);
                                        wm_vision_objects_text_camera1[z][0] = temp_stm_vision_objects_text_camera1[y][0];
                                        wm_vision_objects_text_camera1[z][1] = temp_stm_vision_objects_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera2[z][1]);
                                        wm_vision_objects_text_camera2[z][0] = temp_stm_vision_objects_text_camera2[y][0];
                                        wm_vision_objects_text_camera2[z][1] = temp_stm_vision_objects_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "hours" && words_temp[j + 7] == "of" && words_temp[j + 8] == "vision")
            {
                string temp_stm_vision_path_camera1[1000][2];
                string temp_stm_vision_path_camera2[1000][2];
                string temp_stm_vision_objects_image_path_camera1[1000][2];
                string temp_stm_vision_objects_image_path_camera2[1000][2];
                string temp_stm_vision_objects_text_camera1[1000][2];
                string temp_stm_vision_objects_text_camera2[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock_stm_vision_path_camera1(mtx_stm_vision_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_path_camera2(mtx_stm_vision_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera1(mtx_stm_vision_objects_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera2(mtx_stm_vision_objects_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera1(mtx_stm_vision_objects_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera2(mtx_stm_vision_objects_text_camera2[x][y]);

                        temp_stm_vision_path_camera1[x][y] = stm_vision_path_camera1[x][y];
                        temp_stm_vision_path_camera2[x][y] = stm_vision_path_camera2[x][y];
                        temp_stm_vision_objects_image_path_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_image_path_camera2[x][y] = stm_vision_objects_image_path_camera2[x][y];
                        temp_stm_vision_objects_text_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_text_camera2[x][y] = stm_vision_objects_text_camera2[x][y];
                    }
                }

                long seconds_digit = stoi(words_temp[j + 5]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, NULL, NULL, seconds_digit);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera1[z][1]);
                                        wm_vision_path_camera1[z][0] = temp_stm_vision_path_camera1[y][0];
                                        wm_vision_path_camera1[z][1] = temp_stm_vision_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera2[z][1]);
                                        wm_vision_path_camera2[z][0] = temp_stm_vision_path_camera2[y][0];
                                        wm_vision_path_camera2[z][1] = temp_stm_vision_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera1[z][1]);
                                        wm_vision_objects_image_path_camera1[z][0] = temp_stm_vision_objects_image_path_camera1[y][0];
                                        wm_vision_objects_image_path_camera1[z][1] = temp_stm_vision_objects_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera2[z][1]);
                                        wm_vision_objects_image_path_camera2[z][0] = temp_stm_vision_objects_image_path_camera2[y][0];
                                        wm_vision_objects_image_path_camera2[z][1] = temp_stm_vision_objects_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera1[z][1]);
                                        wm_vision_objects_text_camera1[z][0] = temp_stm_vision_objects_text_camera1[y][0];
                                        wm_vision_objects_text_camera1[z][1] = temp_stm_vision_objects_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera2[z][1]);
                                        wm_vision_objects_text_camera2[z][0] = temp_stm_vision_objects_text_camera2[y][0];
                                        wm_vision_objects_text_camera2[z][1] = temp_stm_vision_objects_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "hours" && isdigit(stoi(words_temp[j + 7])) && words_temp[j + 8] == "minutes" && words_temp[j + 9] == "of" && words_temp[j + 10] == "vision")
            {
                string temp_stm_vision_path_camera1[1000][2];
                string temp_stm_vision_path_camera2[1000][2];
                string temp_stm_vision_objects_image_path_camera1[1000][2];
                string temp_stm_vision_objects_image_path_camera2[1000][2];
                string temp_stm_vision_objects_text_camera1[1000][2];
                string temp_stm_vision_objects_text_camera2[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock_stm_vision_path_camera1(mtx_stm_vision_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_path_camera2(mtx_stm_vision_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera1(mtx_stm_vision_objects_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera2(mtx_stm_vision_objects_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera1(mtx_stm_vision_objects_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera2(mtx_stm_vision_objects_text_camera2[x][y]);

                        temp_stm_vision_path_camera1[x][y] = stm_vision_path_camera1[x][y];
                        temp_stm_vision_path_camera2[x][y] = stm_vision_path_camera2[x][y];
                        temp_stm_vision_objects_image_path_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_image_path_camera2[x][y] = stm_vision_objects_image_path_camera2[x][y];
                        temp_stm_vision_objects_text_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_text_camera2[x][y] = stm_vision_objects_text_camera2[x][y];
                    }
                }

                long seconds_digit = stoi(words_temp[j + 5]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, NULL, NULL, seconds_digit);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera1[z][1]);
                                        wm_vision_path_camera1[z][0] = temp_stm_vision_path_camera1[y][0];
                                        wm_vision_path_camera1[z][1] = temp_stm_vision_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera2[z][1]);
                                        wm_vision_path_camera2[z][0] = temp_stm_vision_path_camera2[y][0];
                                        wm_vision_path_camera2[z][1] = temp_stm_vision_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera1[z][1]);
                                        wm_vision_objects_image_path_camera1[z][0] = temp_stm_vision_objects_image_path_camera1[y][0];
                                        wm_vision_objects_image_path_camera1[z][1] = temp_stm_vision_objects_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera2[z][1]);
                                        wm_vision_objects_image_path_camera2[z][0] = temp_stm_vision_objects_image_path_camera2[y][0];
                                        wm_vision_objects_image_path_camera2[z][1] = temp_stm_vision_objects_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera1[z][1]);
                                        wm_vision_objects_text_camera1[z][0] = temp_stm_vision_objects_text_camera1[y][0];
                                        wm_vision_objects_text_camera1[z][1] = temp_stm_vision_objects_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera2[z][1]);
                                        wm_vision_objects_text_camera2[z][0] = temp_stm_vision_objects_text_camera2[y][0];
                                        wm_vision_objects_text_camera2[z][1] = temp_stm_vision_objects_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "hours" && isdigit(stoi(words_temp[j + 7])) && words_temp[j + 8] == "minutes" && isdigit(stoi(words_temp[j + 9])) && words_temp[j + 10] == "seconds" && words_temp[j + 11] == "of" && words_temp[j + 12] == "vision")
            {
                string temp_stm_vision_path_camera1[1000][2];
                string temp_stm_vision_path_camera2[1000][2];
                string temp_stm_vision_objects_image_path_camera1[1000][2];
                string temp_stm_vision_objects_image_path_camera2[1000][2];
                string temp_stm_vision_objects_text_camera1[1000][2];
                string temp_stm_vision_objects_text_camera2[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock_stm_vision_path_camera1(mtx_stm_vision_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_path_camera2(mtx_stm_vision_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera1(mtx_stm_vision_objects_image_path_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_image_path_camera2(mtx_stm_vision_objects_image_path_camera2[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera1(mtx_stm_vision_objects_text_camera1[x][y]);
                        lock_guard<mutex> lock_stm_vision_objects_text_camera2(mtx_stm_vision_objects_text_camera2[x][y]);

                        temp_stm_vision_path_camera1[x][y] = stm_vision_path_camera1[x][y];
                        temp_stm_vision_path_camera2[x][y] = stm_vision_path_camera2[x][y];
                        temp_stm_vision_objects_image_path_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_image_path_camera2[x][y] = stm_vision_objects_image_path_camera2[x][y];
                        temp_stm_vision_objects_text_camera1[x][y] = stm_vision_objects_image_path_camera1[x][y];
                        temp_stm_vision_objects_text_camera2[x][y] = stm_vision_objects_text_camera2[x][y];
                    }
                }

                long seconds_digit = stoi(words_temp[j + 5]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, NULL, NULL, seconds_digit);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera1[z][1]);
                                        wm_vision_path_camera1[z][0] = temp_stm_vision_path_camera1[y][0];
                                        wm_vision_path_camera1[z][1] = temp_stm_vision_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_path_camera2[z][1]);
                                        wm_vision_path_camera2[z][0] = temp_stm_vision_path_camera2[y][0];
                                        wm_vision_path_camera2[z][1] = temp_stm_vision_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera1[z][1]);
                                        wm_vision_objects_image_path_camera1[z][0] = temp_stm_vision_objects_image_path_camera1[y][0];
                                        wm_vision_objects_image_path_camera1[z][1] = temp_stm_vision_objects_image_path_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_image_path_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_image_path_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_image_path_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_image_path_camera2[z][1]);
                                        wm_vision_objects_image_path_camera2[z][0] = temp_stm_vision_objects_image_path_camera2[y][0];
                                        wm_vision_objects_image_path_camera2[z][1] = temp_stm_vision_objects_image_path_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera1[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera1[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera1[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera1[z][1]);
                                        wm_vision_objects_text_camera1[z][0] = temp_stm_vision_objects_text_camera1[y][0];
                                        wm_vision_objects_text_camera1[z][1] = temp_stm_vision_objects_text_camera1[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    test_seek = _Time::ConvertDateToSeconds(temp_stm_vision_objects_text_camera2[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_vision_objects_text_camera2[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_vision_objects_text_camera2[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_vision_objects_text_camera2[z][1]);
                                        wm_vision_objects_text_camera2[z][0] = temp_stm_vision_objects_text_camera2[y][0];
                                        wm_vision_objects_text_camera2[z][1] = temp_stm_vision_objects_text_camera2[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "seconds" && words_temp[j + 7] == "of" && words_temp[j + 8] == "sound")
            {
                string temp_stm_sound_path[1000][2];
                string temp_stm_speech_dialogue[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock_stm_sound_path(mtx_stm_sound_path[x][y]);
                        lock_guard<mutex> lock_stm_speech_dialogue(mtx_stm_speech_dialogue[x][y]);
                        
                        temp_stm_sound_path[x][y] = stm_sound_path[x][y];
                        temp_stm_speech_dialogue[x][y] = stm_speech_dialogue[x][y];
                    }
                }

                // Convert the speech command into temporary memory then convert to seconds
                long seconds_digit = stoi(words_temp[j + 5]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, NULL, NULL, seconds_digit);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(temp_stm_sound_path[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(temp_stm_sound_path[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_sound_path[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_sound_path[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_sound_path[z][0]);
                                        lock_guard<mutex> lock1(mtx_wm_sound_path[z][1]);
                                        wm_sound_path[z][0] = temp_stm_sound_path[y][0];
                                        wm_sound_path[z][1] = temp_stm_sound_path[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_speech_dialogue[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_speech_dialogue[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_speech_dialogue[z][0]);
                    //                    lock_guard<mutex> lock1(mtx_wm_speech_dialogue[z][1]);
                    //                    wm_speech_dialogue[z][0] = temp_stm_speech_dialogue[y][0];
                    //                    wm_speech_dialogue[z][1] = temp_stm_speech_dialogue[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "minutes" && words_temp[j + 7] == "of" && words_temp[j + 8] == "sound")
            {
                string temp_stm_sound_path[1000][2];
                string temp_stm_speech_dialogue[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock_stm_sound_path(mtx_stm_sound_path[x][y]);
                        lock_guard<mutex> lock_stm_speech_dialogue(mtx_stm_speech_dialogue[x][y]);
                        temp_stm_sound_path[x][y] = stm_sound_path[x][y];
                        temp_stm_speech_dialogue[x][y] = stm_speech_dialogue[x][y];
                    }
                }

                // Convert the speech command into temporary memory then convert to seconds
                long minutes_digit = stoi(words_temp[j + 5]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, NULL, minutes_digit, NULL);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_sound_path[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_sound_path[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_sound_path[z][0]);
                                        lock_guard<mutex> lock2(mtx_wm_sound_path[z][1]);
                                        wm_sound_path[z][0] = temp_stm_sound_path[y][0];
                                        wm_sound_path[z][1] = temp_stm_sound_path[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_speech_dialogue[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_speech_dialogue[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_speech_dialogue[x][y]);
                    //                    lock_guard<mutex> lock2(mtx_wm_speech_dialogue[x][y]);
                    //                    wm_speech_dialogue[z][0] = temp_stm_speech_dialogue[y][0];
                    //                    wm_speech_dialogue[z][1] = temp_stm_speech_dialogue[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "minutes" && isdigit(stoi(words_temp[j + 7])) && words_temp[j + 8] == "seconds" && words_temp[j + 9] == "of" && words_temp[j + 10] == "sound")
            {
                string temp_stm_sound_path[1000][2];
                string temp_stm_speech_dialogue[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock_stm_sound_path(mtx_stm_sound_path[x][y]);
                        lock_guard<mutex> lock_stm_speech_dialogue(mtx_stm_speech_dialogue[x][y]);
                        temp_stm_sound_path[x][y] = stm_sound_path[x][y];
                        temp_stm_speech_dialogue[x][y] = stm_speech_dialogue[x][y];
                    }
                }

                // Convert the speech command into temporary memory then convert to seconds
                long minutes_digit = stoi(words_temp[j + 5]);
                long seconds_digit = stoi(words_temp[j + 7]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, NULL, minutes_digit, NULL);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_sound_path[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_sound_path[z][0] == "")
                                    {
                                        lock_guard<mutex> lock_stm_sound_path(mtx_wm_sound_path[z][0]);
                                        lock_guard<mutex> lock_stm_speech_dialogue(mtx_wm_sound_path[z][1]);
                                        wm_sound_path[z][0] = temp_stm_sound_path[y][0];
                                        wm_sound_path[z][1] = temp_stm_sound_path[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_speech_dialogue[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_speech_dialogue[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_speech_dialogue[z][0]);
                    //                    lock_guard<mutex> lock1(mtx_wm_speech_dialogue[z][1]);
                    //                    wm_speech_dialogue[z][0] = temp_stm_speech_dialogue[y][0];
                    //                    wm_speech_dialogue[z][1] = temp_stm_speech_dialogue[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "hours" && words_temp[j + 7] == "of" && words_temp[j + 8] == "sound")
            {
                string temp_stm_sound_path[1000][2];
                string temp_stm_speech_dialogue[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock_stm_sound_path(mtx_stm_sound_path[x][y]);
                        lock_guard<mutex> lock_stm_speech_dialogue(mtx_stm_speech_dialogue[x][y]);
                        temp_stm_sound_path[x][y] = stm_sound_path[x][y];
                        temp_stm_speech_dialogue[x][y] = stm_speech_dialogue[x][y];
                    }
                }

                // Convert the speech command into temporary memory then convert to seconds
                long hours_digit = stoi(words_temp[j + 5]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, hours_digit, NULL, NULL);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(temp_stm_sound_path[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(temp_stm_sound_path[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_sound_path[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_sound_path[z][0] == "")
                                    {
                                        lock_guard<mutex> lock_stm_sound_path(mtx_wm_sound_path[z][0]);
                                        lock_guard<mutex> lock2(mtx_wm_sound_path[z][0]);
                                        wm_sound_path[z][0] = temp_stm_sound_path[y][0];
                                        wm_sound_path[z][1] = temp_stm_sound_path[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_speech_dialogue[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_speech_dialogue[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_stm_sound_path[z][0]);
                    //                    lock_guard<mutex> lock2(mtx_stm_speech_dialogue[z][1]);
                    //                    wm_speech_dialogue[z][0] = temp_stm_speech_dialogue[y][0];
                    //                    wm_speech_dialogue[z][1] = temp_stm_speech_dialogue[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "hours" && isdigit(stoi(words_temp[j + 7])) && words_temp[j + 8] == "minutes" && words_temp[j + 9] == "of" && words_temp[j + 10] == "sound")
            {
                string temp_stm_sound_path[1000][2];
                string temp_stm_speech_dialogue[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock_stm_sound_path(mtx_stm_sound_path[x][y]);
                        lock_guard<mutex> lock_stm_speech_dialogue(mtx_stm_speech_dialogue[x][y]);
                        temp_stm_sound_path[x][y] = stm_sound_path[x][y];
                        temp_stm_speech_dialogue[x][y] = stm_speech_dialogue[x][y];
                    }
                }

                // Convert the speech command into temporary memory then convert to seconds
                long hours_digit = stoi(words_temp[j + 5]);
                long minutes_digit = stoi(words_temp[j + 7]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, hours_digit, minutes_digit, NULL);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(temp_stm_sound_path[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(temp_stm_sound_path[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_sound_path[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_sound_path[z][0] == "")
                                    {
                                        lock_guard<mutex> lock_stm_sound_path(mtx_wm_sound_path[z][0]);
                                        lock_guard<mutex> lock2(mtx_wm_sound_path[z][0]);
                                        wm_sound_path[z][0] = temp_stm_sound_path[y][0];
                                        wm_sound_path[z][1] = temp_stm_sound_path[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_speech_dialogue[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_speech_dialogue[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_speech_dialogue[z][0]);
                    //                    lock_guard<mutex> lock2(mtx_wm_speech_dialogue[z][1]);
                    //                    wm_speech_dialogue[z][0] = temp_stm_speech_dialogue[y][0];
                    //                    wm_speech_dialogue[z][1] = temp_stm_speech_dialogue[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "the" && words_temp[j + 4] == "last" && isdigit(stoi(words_temp[j + 5])) && words_temp[j + 6] == "hours" && isdigit(stoi(words_temp[j + 7])) && words_temp[j + 8] == "minutes" && isdigit(stoi(words_temp[j + 9])) && words_temp[j + 10] == "seconds" && words_temp[j + 11] == "of" && words_temp[j + 12] == "sound")
            {
                string temp_stm_sound_path[1000][2];
                string temp_stm_speech_dialogue[1000][2];

                // Lock all of working and short term memory temporarily
                for (int x = 0; x < 1000; x++)
                {
                    for (int y = 0; y < 2; y++)
                    {
                        lock_guard<mutex> lock_stm_sound_path(mtx_stm_sound_path[x][y]);
                        lock_guard<mutex> lock_stm_speech_dialogue(mtx_stm_speech_dialogue[x][y]);

                        temp_stm_sound_path[x][y] = stm_sound_path[x][y];
                        temp_stm_speech_dialogue[x][y] = stm_speech_dialogue[x][y];
                    }
                }

                // Convert the speech command into temporary memory then convert to seconds
                long hours_digit = stoi(words_temp[j + 5]);
                long minutes_digit = stoi(words_temp[j + 7]);
                long seconds_digit = stoi(words_temp[j + 9]);
                long seek_seconds = _Time::ConvertToSeconds(NULL, NULL, NULL, hours_digit, minutes_digit, seconds_digit);
                long* seek_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, seek_seconds);
                long front_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[999][1]);
                long* front_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, front_seconds);
                long back_seconds = _Time::ConvertDateToSeconds(stm_vision_path_camera1[0][1]);
                long* back_long_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, back_seconds);
                long* subtracted = _Time::TimeSubtract(front_long_arr, seek_long_arr);
                long test_seek;
                long* test_seek_arr;

                for (int x = 998; x >= 0; x--)
                {
                    test_seek = _Time::ConvertDateToSeconds(temp_stm_sound_path[x][1]);
                    test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    {
                        // The time is not inbetween the two tests
                        // Check if there is enough room in working memory
                        if (999 - x >= 0)
                        {
                            // There is room
                            for (int y = x + 1; y < 1000; y++)
                            {
                                // Find the first available place in working memory
                                for (int z = 0; z < 1000; z++)
                                {
                                    if (wm_sound_path[z][0] == "")
                                    {
                                        lock_guard<mutex> lock(mtx_wm_sound_path[z][0]);
                                        lock_guard<mutex> lock2(mtx_wm_sound_path[z][1]);
                                        wm_sound_path[z][0] = temp_stm_sound_path[y][0];
                                        wm_sound_path[z][1] = temp_stm_sound_path[y][1];
                                    }
                                }
                            }
                            break;
                        }
                    }

                    //test_seek = _Time::ConvertDateToSeconds(temp_stm_speech_dialogue[x][1]);
                    //test_seek_arr = _Time::ConvertLongTimeToArr(NULL, NULL, NULL, NULL, NULL, test_seek);

                    //if (!_Time::isInbetween(front_long_arr, subtracted, test_seek_arr))
                    //{
                    //    // The time is not inbetween the two tests
                    //    // Check if there is enough room in working memory
                    //    if (999 - x >= 0)
                    //    {
                    //        // There is room
                    //        for (int y = x + 1; y < 1000; y++)
                    //        {
                    //            // Find the first available place in working memory
                    //            for (int z = 0; z < 1000; z++)
                    //            {
                    //                if (wm_speech_dialogue[z][0] == "")
                    //                {
                    //                    lock_guard<mutex> lock(mtx_wm_speech_dialogue[z][0]);
                    //                    lock_guard<mutex> lock2(mtx_wm_speech_dialogue[z][1]);
                    //                    wm_speech_dialogue[z][0] = temp_stm_speech_dialogue[y][0];
                    //                    wm_speech_dialogue[z][1] = temp_stm_speech_dialogue[y][1];
                    //                }
                    //            }
                    //        }
                    //        break;
                    //    }
                    //}
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "wikipedia" && words_temp[j + 4] == "article" && words_temp[j + 5] != "")
            {
                // Find the number of words are past the 'article' keyword
                size_t size = sizeof(words_temp) - 4;
                string title = "";
                int z = 0;
                
                while (z <= size)
                {
                    if (z == 0 || z < size)
                        title = words_temp[z + 5] + " ";
                    else
                        title += words_temp[z + 5];
                    z++;
                }

                title = _Utilities::FixWikiTableName(title);
                string returned_table = _DatabaseFunctions::SearchWikipedia(title);

                for (int x = 0; x < 1000; x++)
                {
                    if (wm_wikipedia[x][0] == "")
                    {
                        // Lock the variables
                        lock_guard<mutex> lock_mtx_wm_wikipedia_1(mtx_wm_wikipedia[x][0]);
                        lock_guard<mutex> lock_mtx_wm_wikipedia_2(mtx_wm_wikipedia[x][1]);
                        lock_guard<mutex> lock_mtx_wm_wikipedia_3(mtx_wm_wikipedia[x][2]);

                        // Look for the first empty line in working memory
                        wm_wikipedia[x][0] = returned_table;
                        wm_wikipedia[x][1] = title;
                        wm_wikipedia[x][2] = current_date;
                        mtx_wm_wikipedia[x][0].unlock();
                        mtx_wm_wikipedia[x][1].unlock();
                        mtx_wm_wikipedia[x][2].unlock();
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "wikisimple" && words_temp[j + 4] == "article" && words_temp[j + 5] != "")
            {
                // Find the number of words are past the 'article' keyword
                size_t size = sizeof(words_temp) - 4;
                string title = "";
                int z = 0;

                while (z <= size)
                {
                    if (z == 0 || z < size)
                        title = words_temp[z + 5] + " ";
                    else
                        title += words_temp[z + 5];
                    z++;
                }

                title = _Utilities::FixWikiTableName(title);
                string returned_table = _DatabaseFunctions::SearchWikisimple(title);

                for (int x = 0; x < 1000; x++)
                {
                    if (wm_wikisimple[x][0] == "")
                    {
                        // Lock the variables
                        lock_guard<mutex> lock_mtx_wm_wikisimple_1(mtx_wm_wikisimple[x][0]);
                        lock_guard<mutex> lock_mtx_wm_wikisimple_2(mtx_wm_wikisimple[x][1]);
                        lock_guard<mutex> lock_mtx_wm_wikisimple_3(mtx_wm_wikisimple[x][2]);

                        // Look for the first empty line in working memory
                        wm_wikisimple[x][0] = returned_table;
                        wm_wikisimple[x][1] = title;
                        wm_wikisimple[x][2] = current_date;
                        mtx_wm_wikisimple[x][0].unlock();
                        mtx_wm_wikisimple[x][1].unlock();
                        mtx_wm_wikisimple[x][2].unlock();
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "wikihow" && words_temp[j + 4] == "article" && words_temp[j + 5] != "")
            {
                // Find the number of words are past the 'article' keyword
                size_t size = sizeof(words_temp) - 4;
                string title = "";
                int z = 0;

                while (z <= size)
                {
                    if (z == 0 || z < size)
                        title = words_temp[z + 5] + " ";
                    else
                        title += words_temp[z + 5];
                    z++;
                }

                title = _Utilities::FixWikiTableName(title);
                string returned_table = _DatabaseFunctions::SearchWikihow(title);

                for (int x = 0; x < 1000; x++)
                {
                    if (wm_wikihow[x][0] == "")
                    {
                        // Lock the variables
                        lock_guard<mutex> lock_mtx_wm_wikihow_1(mtx_wm_wikihow[x][0]);
                        lock_guard<mutex> lock_mtx_wm_wikihow_2(mtx_wm_wikihow[x][1]);
                        lock_guard<mutex> lock_mtx_wm_wikihow_3(mtx_wm_wikihow[x][2]);

                        // Look for the first empty line in working memory
                        wm_wikihow[x][0] = returned_table;
                        wm_wikihow[x][1] = title;
                        wm_wikihow[x][2] = current_date;
                        mtx_wm_wikihow[x][0].unlock();
                        mtx_wm_wikihow[x][1].unlock();
                        mtx_wm_wikihow[x][2].unlock();
                    }                    
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "wikiquote" && words_temp[j + 4] == "article" && words_temp[j + 5] != "")
            {
                // Find the number of words are past the 'article' keyword
                size_t size = sizeof(words_temp) - 4;
                string title = "";
                int z = 0;

                while (z <= size)
                {
                    if (z == 0 || z < size)
                        title = words_temp[z + 5] + " ";
                    else
                        title += words_temp[z + 5];
                    z++;
                }

                title = _Utilities::FixWikiTableName(title);
                string returned_table = _DatabaseFunctions::SearchWikiquote(title);

                for (int x = 0; x < 1000; x++)
                {
                    if (wm_wikiquote[x][0] == "")
                    {
                        // Lock the variables
                        lock_guard<mutex> lock_mtx_wm_wikiquote_1(mtx_wm_wikiquote[x][0]);
                        lock_guard<mutex> lock_mtx_wm_wikiquote_2(mtx_wm_wikiquote[x][1]);
                        lock_guard<mutex> lock_mtx_wm_wikiquote_3(mtx_wm_wikiquote[x][2]);

                        // Look for the first empty line in working memory
                        wm_wikiquote[x][0] = returned_table;
                        wm_wikiquote[x][1] = title;
                        wm_wikiquote[x][2] = current_date;
                        mtx_wm_wikiquote[x][0].unlock();
                        mtx_wm_wikiquote[x][1].unlock();
                        mtx_wm_wikiquote[x][2].unlock();
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "wikisource" && words_temp[j + 4] == "article" && words_temp[j + 5] != "")
            {
                // Find the number of words are past the 'article' keyword
                size_t size = sizeof(words_temp) - 4;
                string title = "";
                int z = 0;

                while (z <= size)
                {
                    if (z == 0 || z < size)
                        title = words_temp[z + 5] + " ";
                    else
                        title += words_temp[z + 5];
                    z++;
                }

                title = _Utilities::FixWikiTableName(title);
                string returned_table = _DatabaseFunctions::SearchWikisource(title);

                for (int x = 0; x < 1000; x++)
                {
                    if (wm_wikisource[x][0] == "")
                    {
                        // Lock the variables
                        lock_guard<mutex> lock_mtx_wm_wikisource_1(mtx_wm_wikisource[x][0]);
                        lock_guard<mutex> lock_mtx_wm_wikisource_2(mtx_wm_wikisource[x][1]);
                        lock_guard<mutex> lock_mtx_wm_wikisource_3(mtx_wm_wikisource[x][2]);

                        // Look for the first empty line in working memory
                        wm_wikisource[x][0] = returned_table;
                        wm_wikisource[x][1] = title;
                        wm_wikisource[x][2] = current_date;
                        mtx_wm_wikisource[x][0].unlock();
                        mtx_wm_wikisource[x][1].unlock();
                        mtx_wm_wikisource[x][2].unlock();
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "wikibooks" && words_temp[j + 4] == "article" && words_temp[j + 5] != "")
            {
                // Find the number of words are past the 'article' keyword
                size_t size = sizeof(words_temp) - 4;
                string title = "";
                int z = 0;

                while (z <= size)
                {
                    if (z == 0 || z < size)
                        title = words_temp[z + 5] + " ";
                    else
                        title += words_temp[z + 5];
                    z++;
                }

                title = _Utilities::FixWikiTableName(title);
                string returned_table = _DatabaseFunctions::SearchWikibooks(title);

                for (int x = 0; x < 1000; x++)
                {
                    if (wm_wikibooks[x][0] == "")
                    {
                        // Lock the variables
                        lock_guard<mutex> lock_mtx_wm_wikibooks_1(mtx_wm_wikibooks[x][0]);
                        lock_guard<mutex> lock_mtx_wm_wikibooks_2(mtx_wm_wikibooks[x][1]);
                        lock_guard<mutex> lock_mtx_wm_wikibooks_3(mtx_wm_wikibooks[x][2]);

                        // Look for the first empty line in working memory
                        wm_wikibooks[x][0] = returned_table;
                        wm_wikibooks[x][1] = title;
                        wm_wikibooks[x][2] = current_date;
                        mtx_wm_wikibooks[x][0].unlock();
                        mtx_wm_wikibooks[x][1].unlock();
                        mtx_wm_wikibooks[x][2].unlock();
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "stackexchange" && words_temp[j + 4] == "article" && words_temp[j + 5] != "")
            {
                // Find the number of words are past the 'article' keyword
                size_t size = sizeof(words_temp) - 4;
                string title = "";
                int z = 0;

                while (z <= size)
                {
                    if (z == 0 || z < size)
                        title = words_temp[z + 5] + " ";
                    else
                        title += words_temp[z + 5];
                    z++;
                }

                title = _Utilities::FixWikiTableName(title);
                string returned_table = _DatabaseFunctions::SearchStackexchange(title);

                for (int x = 0; x < 1000; x++)
                {
                    if (wm_stackexchange[x][0] == "")
                    {
                        // Lock the variables
                        lock_guard<mutex> lock_mtx_wm_stackexchange_1(mtx_wm_stackexchange[x][0]);
                        lock_guard<mutex> lock_mtx_wm_stackexchange_2(mtx_wm_stackexchange[x][1]);
                        lock_guard<mutex> lock_mtx_wm_stackexchange_3(mtx_wm_stackexchange[x][2]);

                        // Look for the first empty line in working memory
                        wm_stackexchange[x][0] = returned_table;
                        wm_stackexchange[x][1] = title;
                        wm_stackexchange[x][2] = current_date;
                        mtx_wm_stackexchange[x][0].unlock();
                        mtx_wm_stackexchange[x][1].unlock();
                        mtx_wm_stackexchange[x][2].unlock();
                    }
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "book" && words_temp[j + 4] != "")
            {
                string title = words_temp[j + 4];
                if (words_temp[j + 5] != "")
                    title += words_temp[j + 5];
                if (words_temp[j + 6] != "")
                    title += words_temp[j + 6];
                title = _Utilities::FixWikiTableName(title);

                string* literature_returned = _DatabaseFunctions::SearchWikiTables("literature", title);
                string* literature_ancient_asia_returned = _DatabaseFunctions::SearchWikiTables("literature_ancient_asia", title);
                string* literature_ancient_egyption_returned = _DatabaseFunctions::SearchWikiTables("literature_ancient_egyption", title);
                string* literature_ancient_greece_returned = _DatabaseFunctions::SearchWikiTables("literature_ancient_greece", title);
                string* literature_ancient_near_east_returned = _DatabaseFunctions::SearchWikiTables("literature_ancient_near_east", title);
                string* literature_ancient_rome_returned = _DatabaseFunctions::SearchWikiTables("literature_ancient_rome", title);
                string* literature_anthropology_returned = _DatabaseFunctions::SearchWikiTables("literature_anthropology", title);
                string* literature_articles_and_essays_returned = _DatabaseFunctions::SearchWikiTables("literature_articles_and_essays", title);
                string* literature_australia_new_zealand_returned = _DatabaseFunctions::SearchWikiTables("literature_australia_new_zealand", title);
                string* literature_autobiographies_returned = _DatabaseFunctions::SearchWikiTables("literature_autobiographies", title);
                string* literature_christian_returned = _DatabaseFunctions::SearchWikiTables("literature_christian", title);
                //string* literature_corpus_returned = _DatabaseFunctions::SearchWikiTables("literature_corpus", search);
                string* literature_esoteric_occult_returned = _DatabaseFunctions::SearchWikiTables("literature_esoteric_occult", title);
                string* literature_fiction_returned = _DatabaseFunctions::SearchWikiTables("literature_fiction", title);

                if (sizeof(literature_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_returned) << " matches have been found in literature database!" << endl;
                        cout << literature_returned[z] << endl;
                    }
                }
                if (sizeof(literature_ancient_asia_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_ancient_asia_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_ancient_asia_returned) << " matches have been found in literature_ancient_asia database" << endl;
                        cout << literature_ancient_asia_returned[z] << endl;
                    }
                }
                if (sizeof(literature_ancient_egyption_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_ancient_egyption_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_ancient_egyption_returned) << " matches have been found in literature_ancient_egyption database" << endl;
                        cout << literature_ancient_egyption_returned[z] << endl;
                    }
                }
                if (sizeof(literature_ancient_greece_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_ancient_greece_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_ancient_greece_returned) << " matches have been found in literature_ancient_greece database" << endl;
                        cout << literature_ancient_greece_returned[z] << endl;
                    }
                }
                if (sizeof(literature_ancient_near_east_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_ancient_near_east_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_ancient_near_east_returned) << " matches have been found in literature_ancient_near_east database" << endl;
                        cout << literature_ancient_near_east_returned[z] << endl;
                    }
                }
                if (sizeof(literature_ancient_rome_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_ancient_rome_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_ancient_rome_returned) << " matches have been found in literature_ancient_rome database" << endl;
                        cout << literature_ancient_rome_returned[z] << endl;
                    }
                }
                if (sizeof(literature_anthropology_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_anthropology_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_anthropology_returned) << " matches have been found in literature_anthropology database" << endl;
                        cout << literature_anthropology_returned[z] << endl;
                    }
                }
                if (sizeof(literature_articles_and_essays_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_articles_and_essays_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_articles_and_essays_returned) << " matches have been found in literature_articles_and_essays database" << endl;
                        cout << literature_articles_and_essays_returned[z] << endl;
                    }
                }
                if (sizeof(literature_australia_new_zealand_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_australia_new_zealand_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_australia_new_zealand_returned) << " matches have been found in literature_australia_new_zealand database" << endl;
                        cout << literature_australia_new_zealand_returned[z] << endl;
                    }
                }
                if (sizeof(literature_autobiographies_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_autobiographies_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_autobiographies_returned) << " matches have been found in literature_autobiographies database" << endl;
                        cout << literature_autobiographies_returned[z] << endl;
                    }
                }
                if (sizeof(literature_christian_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_christian_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_christian_returned) << " matches have been found in literature_christian database" << endl;
                        cout << literature_christian_returned[z] << endl;
                    }
                }
                if (sizeof(literature_esoteric_occult_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_esoteric_occult_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_esoteric_occult_returned) << " matches have been found in literature_esoteric_occult database!" << endl;
                        cout << literature_esoteric_occult_returned[z] << endl;
                    }
                }
                if (sizeof(literature_fiction_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_fiction_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_fiction_returned) << " matches have been found in literature_fiction database!" << endl;
                        cout << literature_fiction_returned[z] << endl;
                    }
                }
                else
                {
                    // No matches
                    cout << "No matches found..." << endl;
                }
            }
            if (words_temp[j + 2] == "add" && words_temp[j + 3] == "bible")
            {
                //_DatabaseFunctions::BibleVerseSearch();
            }
            if (words_temp[j + 2] == "print" && words_temp[j + 3] == "data" && words_temp[j + 4] == "members")
            {
                int vision_path_camera1 = _Utilities::getDatatypeUsed("wm_vision_path_camera1");
                cout << "Camera 1 Images: " << vision_path_camera1 << "of 1000." << endl;
                int vision_path_camera2 = _Utilities::getDatatypeUsed("wm_vision_path_camera2");
                cout << "Camera 2 Images: " << vision_path_camera2 << "of 1000." << endl;
                int sound_path = _Utilities::getDatatypeUsed("wm_sound_path");
                cout << "Sound Path: " << sound_path << "of 1000." << endl;
                int speech_dialogue = _Utilities::getDatatypeUsed("wm_speech_dialogue");
                cout << "Speech Dialogue: " << speech_dialogue << "of 1000." << endl;
                int action1_text = _Utilities::getDatatypeUsed("wm_action1_text");
                cout << "Action 1 Text: " << action1_text << "of 1000." << endl;
                int action2_text = _Utilities::getDatatypeUsed("wm_action2_text");
                cout << "Action 2 Text: " << action2_text << "of 1000." << endl;
                int action3_text = _Utilities::getDatatypeUsed("wm_action3_text");
                cout << "Action 3 Text: " << action3_text << "of 1000." << endl;
                int text_identification = _Utilities::getDatatypeUsed("wm_text_identification");
                cout << "Text Identification: " << text_identification << "of 1000." << endl;
                int reading_text = _Utilities::getDatatypeUsed("wm_reading_text");
                cout << "Reading: " << reading_text << "of 1000." << endl;
                int reading_image = _Utilities::getDatatypeUsed("wm_reading_image");
                cout << "Reading Image: " << reading_image << "of 1000." << endl;
                int algebra_text = _Utilities::getDatatypeUsed("wm_algebra_text");
                cout << "Algebra Text: " << algebra_text << "of 1000." << endl;
                int vision_objects_image_path_camera1 = _Utilities::getDatatypeUsed("wm_vision_objects_image_path_camera1");
                cout << "Vision Objects Image Camera 1: " << vision_objects_image_path_camera1 << "of 1000." << endl;
                int vision_objects_image_path_camera2 = _Utilities::getDatatypeUsed("wm_vision_objects_image_path_camera2");
                cout << "Vision Objects Image Camera 2: " << vision_objects_image_path_camera2 << "of 1000." << endl;
                int vision_actions_image_path_camera1 = _Utilities::getDatatypeUsed("wm_vision_actions_image_path_camera1");
                cout << "Vision Actions Camera 1: " << vision_actions_image_path_camera1 << "of 1000." << endl;
                int vision_actions_image_path_camera2 = _Utilities::getDatatypeUsed("wm_vision_actions_image_path_camera2");
                cout << "Vision Actions Camera 2: " << vision_actions_image_path_camera2 << "of 1000." << endl;
                int vision_objects_text_camera1 = _Utilities::getDatatypeUsed("wm_vision_objects_text_camera1");
                cout << "Vision Objects Text Camera 1: " << vision_objects_text_camera1 << "of 1000." << endl;
                int vision_objects_text_camera2 = _Utilities::getDatatypeUsed("wm_vision_objects_text_camera2");
                cout << "Vision Objects Text Camera 2: " << vision_objects_text_camera2 << "of 1000." << endl;
                int vision_analysis_text_camera1 = _Utilities::getDatatypeUsed("wm_vision_analysis_text_camera1");
                cout << "Vision Analysis Text Camera 1: " << vision_analysis_text_camera1 << "of 1000." << endl;
                int vision_analysis_text_camera2 = _Utilities::getDatatypeUsed("wm_vision_analysis_text_camera2");
                cout << "Vision Analysis Text Camera 2: " << vision_analysis_text_camera2 << "of 1000." << endl;
                int wm_typing_text = _Utilities::getDatatypeUsed("wm_typing_text");
                cout << "Typing Text: " << wm_typing_text << "of 1000." << endl;
                int Reference_pos_gps_north = _Utilities::getDatatypeUsed("wm_Reference_pos_gps_north");
                cout << "Reference POS GPS North: " << Reference_pos_gps_north << "of 1000." << endl;
                int Reference_pos_gps_west = _Utilities::getDatatypeUsed("wm_Reference_pos_gps_west");
                cout << "Reference POS GPS West: " << Reference_pos_gps_west << "of 1000." << endl;
                int Reference_pos_gps_image = _Utilities::getDatatypeUsed("wm_Reference_pos_gps_image");
                cout << "Reference POS GPS Image: " << Reference_pos_gps_image << "of 1000." << endl;
                int pos_gps_north_text = _Utilities::getDatatypeUsed("wm_pos_gps_north_text");
                cout << "POS GPS North Text: " << pos_gps_north_text << "of 1000." << endl;
                int pos_gps_west_text = _Utilities::getDatatypeUsed("wm_pos_gps_west_text");
                cout << "POS GPS West Text: " << pos_gps_west_text << "of 1000." << endl;
                int pos_gps_elevation_text = _Utilities::getDatatypeUsed("wm_pos_gps_elevation_text");
                cout << "POS GPS Elevation Text: " << pos_gps_elevation_text << "of 1000." << endl;
                int pos_x = _Utilities::getDatatypeUsed("wm_pos_x");
                cout << "POS X: " << pos_x << "of 1000." << endl;
                int pos_y = _Utilities::getDatatypeUsed("wm_pos_y");
                cout << "POS Y: " << pos_y << "of 1000." << endl;
                int pos_z = _Utilities::getDatatypeUsed("wm_pos_z");
                cout << "POS Z: " << pos_z << "of 1000." << endl;
                int simple_text = _Utilities::getDatatypeUsed("wm_simple_text");
                cout << "Simple Text: " << simple_text << "of 1000." << endl;
                int simple_image = _Utilities::getDatatypeUsed("wm_simple_image");
                cout << "Simple Image: " << simple_image << "of 1000." << endl;
                int llm_prompt_history = _Utilities::getDatatypeUsed("wm_llm_prompt_history");
                cout << "LLM Prompt History: " << llm_prompt_history << "of 1000." << endl;
                int llm_response = _Utilities::getDatatypeUsed("wm_llm_response");
                cout << "LLM Responses: " << llm_response << "of 1000." << endl;
                int wikipedia = _Utilities::getDatatypeUsed("wm_wikipedia");
                cout << "Wikipedia Articles: " << wikipedia << "of 1000." << endl;
                int wikisimple = _Utilities::getDatatypeUsed("wm_wikisimple");
                cout << "Wikisimple Articles: " << wikisimple << "of 1000." << endl;
                int wikiquote = _Utilities::getDatatypeUsed("wm_wikiquote");
                cout << "Wikiquote Articles: " << wikiquote << "of 1000." << endl;
                int wikisource = _Utilities::getDatatypeUsed("wm_wikisource");
                cout << "Wikisource Articles: " << wikisource << "of 1000." << endl;
                int wikihow = _Utilities::getDatatypeUsed("wm_wikihow");
                cout << "Wikihow Articles: " << wikihow << "of 1000." << endl;
                int wikibooks = _Utilities::getDatatypeUsed("wm_wikibooks");
                cout << "Wikibooks Articles: " << wikibooks << "of 1000." << endl;
                int stackexchange = _Utilities::getDatatypeUsed("wm_stackexchange");
                cout << "Stackexchange Articles: " << stackexchange << "of 1000." << endl;
            }
            if (words_temp[j + 2] == "print" && words_temp[j + 3] == "")
            {
                // To do: Select individual Data members and give option to delete
            }
            if (words_temp[j + 2] == "read" && words_temp[j + 3] == "image")
            {
                // 1. Get the most updated image in memory
                for (int n = 999; n >= 0; n--)
                {
                    if (!stm_vision_path_camera1[n][0].empty())
                    {
                        // 2. Read the image
                        string output = _Reading::TextIdentification(stm_vision_path_camera1[n][0]);

                        for (int m = 999; m >= 0; m--)
                        {
                            // 3. Get the most updated indicie in working memory reading and wm_vision_path_camera1
                            if (!wm_vision_path_camera1[m][0].empty() && wm_vision_path_camera1[m + 1][0].empty())
                            {
                                wm_vision_path_camera1[m + 1][0] = stm_vision_path_camera1[n][0];
                                wm_vision_path_camera1[m + 1][1] = current_date.c_str();
                                wm_vision_path_camera1[m + 1][2] = stm_vision_path_camera1[n][2];
                            }
                            // 4. Get the most updated indicie in wm_reading_text
                            if (!wm_reading_text[m][0].empty() && wm_reading_text[m + 1][0].empty())
                            {
                                wm_reading_text[m][0] = output;
                                wm_reading_text[m][1] = current_date.c_str();
                            }
                            // 5. Get the most updated indicie in wm_reading_image
                            if (!wm_reading_image[m][0].empty() && wm_reading_image[m + 1][0].empty())
                            {
                                string reading_hash = _Utilities::getHash(stm_vision_path_camera1[n][0]);
                                wm_reading_image[m + 1][0] = stm_vision_path_camera1[n][0];
                                wm_reading_image[m + 1][0] = reading_hash;
                            }
                        }
                    }
                }
            }
            if (words_temp[j + 2] == "read" && words_temp[j + 3] == "image" && words_temp[j + 4] == "method" && words_temp[j + 5] == "two")
            {
                // 1. Get the most updated image in memory
                for (int n = 999; n >= 0; n--)
                {
                    if (!stm_vision_path_camera1[n][0].empty())
                    {
                        // 2. Read the image
                        string output = _Reading::Reading(stm_vision_path_camera1[n][0]);

                        for (int m = 999; m >= 0; m--)
                        {
                            // 3. Get the most updated indicie in working memory reading and wm_vision_path_camera1
                            if (!wm_vision_path_camera1[m][0].empty() && wm_vision_path_camera1[m + 1][0].empty())
                            {
                                wm_vision_path_camera1[m + 1][0] = stm_vision_path_camera1[n][0];
                                wm_vision_path_camera1[m + 1][1] = current_date.c_str();
                                wm_vision_path_camera1[m + 1][2] = stm_vision_path_camera1[n][2];
                            }
                            // 4. Get the most updated indicie in wm_reading_text
                            if (!wm_reading_text[m][0].empty() && wm_reading_text[m + 1][0].empty())
                            {
                                wm_reading_text[m][0] = output;
                                wm_reading_text[m][1] = current_date.c_str();
                            }
                            // 5. Get the most updated indicie in wm_reading_image
                            if (!wm_reading_image[m][0].empty() && wm_reading_image[m + 1][0].empty())
                            {
                                string reading_hash = _Utilities::getHash(stm_vision_path_camera1[n][0]);
                                wm_reading_image[m + 1][0] = stm_vision_path_camera1[n][0];
                                wm_reading_image[m + 1][0] = reading_hash;
                            }
                        }
                    }
                }
            }
            if (words_temp[j + 2] == "read" && words_temp[j + 3] == "image" && words_temp[j + 4] == "method" && words_temp[j + 5] == "three")
            {
                // 1. Get the most updated image in memory
                for (int n = 999; n >= 0; n--)
                {
                    if (!stm_vision_path_camera1[n][0].empty())
                    {
                        // 2. Read the image
                        string output = _Reading::OllamaReading(stm_vision_path_camera1[n][0]);

                        for (int m = 999; m >= 0; m--)
                        {
                            // 3. Get the most updated indicie in working memory reading and wm_vision_path_camera1
                            if (!wm_vision_path_camera1[m][0].empty() && wm_vision_path_camera1[m + 1][0].empty())
                            {
                                wm_vision_path_camera1[m + 1][0] = stm_vision_path_camera1[n][0];
                                wm_vision_path_camera1[m + 1][1] = current_date.c_str();
                                wm_vision_path_camera1[m + 1][2] = stm_vision_path_camera1[n][2];
                            }
                            // 4. Get the most updated indicie in wm_reading_text
                            if (!wm_reading_text[m][0].empty() && wm_reading_text[m + 1][0].empty())
                            {
                                wm_reading_text[m][0] = output;
                                wm_reading_text[m][1] = current_date.c_str();
                            }
                            // 5. Get the most updated indicie in wm_reading_image
                            if (!wm_reading_image[m][0].empty() && wm_reading_image[m + 1][0].empty())
                            {
                                string reading_hash = _Utilities::getHash(stm_vision_path_camera1[n][0]);
                                wm_reading_image[m + 1][0] = stm_vision_path_camera1[n][0];
                                wm_reading_image[m + 1][0] = reading_hash;
                            }
                        }
                    }
                }
                }
            if (words_temp[j + 2] == "clear")
            {
                _WorkingMemory::ClearWorkingMemory();
            }
            if (words_temp[j + 2] == "close" || words_temp[j + 2] == "shutdown")
            {
                exit(0);
            }
            else
            {
                // No duration was specified, add it all!
            }
        }
        if (words_temp[j] == "long" && words_temp[j + 1] == "term" && words_temp[j + 2] == "memory" && long_term_memory_enabled)
        {
            if (words_temp[j + 3] == "add" && words_temp[j + 4] == "wikipedia" && words_temp[j + 5] == "article" && words_temp[j + 6] != "")
            {

            }
            if (words_temp[j + 3] == "add" && words_temp[j + 4] == "wikisimple" && words_temp[j + 5] == "article" && words_temp[j + 6] != "")
            {

            }
            if (words_temp[j + 3] == "add" && words_temp[j + 4] == "wikihow" && words_temp[j + 6] == "article" && words_temp[j + 7] != "")
            {

            }
        }
        if (words_temp[j] == "search")
        {
            if (words_temp[j + 1] == "wikipedia")
            {
                // Find the number of words are past the 'article' keyword
                size_t size = sizeof(words_temp) - 2;
                string search = "";
                int z = 0;

                while (z <= size)
                {
                    if (z == 0 || z < size)
                        search = words_temp[z + 2] + " ";
                    else
                        search += words_temp[z + 2];
                    z++;
                }

                search = _Utilities::FixWikiTableName(search);
                string* wikipedia_returned = _DatabaseFunctions::SearchWikiTables("wikipedia", search);

                if (sizeof(wikipedia_returned) > 0)
                {
                    for (int q = 0; q <= sizeof(wikipedia_returned); q++)
                    {
                        if (wm_wikipedia[q][0] != "")
                        {
                            for (int z = 0; z <= sizeof(wikipedia_returned); z++)
                            {
                                if (z == sizeof(wikipedia_returned))
                                    wm_wikipedia[q][0] += wikipedia_returned[z];
                                else
                                    wm_wikipedia[q][0] += wikipedia_returned[z] + "\n\n";
                            }
                        }
                    }
                }
            }
            if (words_temp[j + 1] == "wikisimple")
            {
                // Find the number of words are past the 'article' keyword
                size_t size = sizeof(words_temp) - 2;
                string search = "";
                int z = 0;

                while (z <= size)
                {
                    if (z == 0 || z < size)
                        search = words_temp[z + 2] + " ";
                    else
                        search += words_temp[z + 2];
                    z++;
                }

                search = _Utilities::FixWikiTableName(search);
                string* wikisimple_returned = _DatabaseFunctions::SearchWikiTables("wikisimple", search);

                if (sizeof(wikisimple_returned) > 0)
                {
                    for (int q = 0; q <= sizeof(wikisimple_returned); q++)
                    {
                        if (wm_wikisimple[q][0] != "")
                        {
                            for (int z = 0; z <= sizeof(wikisimple_returned); z++)
                            {
                                if (z == sizeof(wikisimple_returned))
                                    wm_wikisimple[q][0] += wikisimple_returned[z];
                                else
                                    wm_wikisimple[q][0] += wikisimple_returned[z] + "\n\n";
                            }
                        }
                    }
                }
            }
            if (words_temp[j + 1] == "wikihow")
            {
                // Find the number of words are past the 'article' keyword
                size_t size = sizeof(words_temp) - 2;
                string search = "";
                int z = 0;

                while (z <= size)
                {
                    if (z == 0 || z < size)
                        search = words_temp[z + 2] + " ";
                    else
                        search += words_temp[z + 2];
                    z++;
                }

                search = _Utilities::FixWikiTableName(search);
                string* wikihow_returned = _DatabaseFunctions::SearchWikiTables("wikihow", search);

                if (sizeof(wikihow_returned) > 0)
                {
                    for (int q = 0; q <= sizeof(wikihow_returned); q++)
                    {
                        if (wm_wikiquote[q][0] != "")
                        {
                            for (int z = 0; z <= sizeof(wikihow_returned); z++)
                            {
                                if (z == sizeof(wikihow_returned))
                                    wm_wikiquote[q][0] += wikihow_returned[z];
                                else
                                    wm_wikiquote[q][0] += wikihow_returned[z] + "\n\n";
                            }
                        }
                    }
                }
            }
            if (words_temp[j + 1] == "wikiquote")
            {
                // Find the number of words are past the 'article' keyword
                size_t size = sizeof(words_temp) - 2;
                string search = "";
                int z = 0;

                while (z <= size)
                {
                    if (z == 0 || z < size)
                        search = words_temp[z + 2] + " ";
                    else
                        search += words_temp[z + 2];
                    z++;
                }

                search = _Utilities::FixWikiTableName(search);
                string* wikiquote_returned = _DatabaseFunctions::SearchWikiTables("wikiquote", search);

                if (sizeof(wikiquote_returned) > 0)
                {
                    for (int q = 0; q <= sizeof(wm_wikiquote); q++)
                    {
                        if (wm_wikiquote[q][0] != "")
                        {
                            for (int z = 0; z <= sizeof(wikiquote_returned); z++)
                            {
                                if (z == sizeof(wikiquote_returned))
                                    wm_wikiquote[q][0] += wikiquote_returned[z];
                                else
                                    wm_wikiquote[q][0] += wikiquote_returned[z] + "\n\n";
                            }
                        }
                    }
                }
            }
            if (words_temp[j + 1] == "wikisource")
            {
                // Find the number of words are past the 'article' keyword
                size_t size = sizeof(words_temp) - 2;
                string search = "";
                int z = 0;

                while (z <= size)
                {
                    if (z == 0 || z < size)
                        search = words_temp[z + 2] + " ";
                    else
                        search += words_temp[z + 2];
                    z++;
                }

                search = _Utilities::FixWikiTableName(search);
                string* wikisource_returned = _DatabaseFunctions::SearchWikiTables("wikisource", search);

                if (sizeof(wikisource_returned) > 0)
                {
                    for (int q = 0; q <= sizeof(wm_wikisource); q++)
                    {
                        if (wm_wikisource[q][0] != "")
                        {
                            for (int z = 0; z <= sizeof(wikisource_returned); z++)
                            {
                                if (z == sizeof(wikisource_returned))
                                    wm_wikisource[q][0] += wikisource_returned[z];
                                else
                                    wm_wikisource[q][0] += wikisource_returned[z] + "\n\n";
                            }
                        }
                    }
                }
            }
            if (words_temp[j + 1] == "books" && words_temp[j + 2] != "list")
            {
                // There are several databases for books in MySQL
                // 1. books
                // 2. literature
                // 3. literature_ancient_asia
                // 4. literature_ancient_egyptian
                // 5. literature_ancient_greece
                // 6. literature_ancient_near_east
                // 7. literature_ancient_rome
                // 8. literature_anthropology
                // 9. literature_articles_and_essays
                // 10. literature_australia_new_zealand
                // 11. literature_autobiographies
                // 12. literature_christian
                // 13. literature_corpus
                // 14. literature_esoteric_and_occult
                // 15. literature_fiction
                
                string search = words_temp[j + 2];

                for (int x = j + 3; x <= sizeof(words_temp); x++)
                {
                    if (words_temp[x] != "")
                    {
                        if (!(x == sizeof(words_temp) - 1))
                            search += words_temp[x] + " ";
                        else
                            search += words_temp[x];
                    }
                }

                search = _Utilities::FixWikiTableName(search);
                
                string* literature_returned = _DatabaseFunctions::SearchWikiTables("literature", search);
                string* literature_ancient_asia_returned = _DatabaseFunctions::SearchWikiTables("literature_ancient_asia", search);
                string* literature_ancient_egyption_returned = _DatabaseFunctions::SearchWikiTables("literature_ancient_egyption", search);
                string* literature_ancient_greece_returned = _DatabaseFunctions::SearchWikiTables("literature_ancient_greece", search);
                string* literature_ancient_near_east_returned = _DatabaseFunctions::SearchWikiTables("literature_ancient_near_east", search);
                string* literature_ancient_rome_returned = _DatabaseFunctions::SearchWikiTables("literature_ancient_rome", search);
                string* literature_anthropology_returned = _DatabaseFunctions::SearchWikiTables("literature_anthropology", search);
                string* literature_articles_and_essays_returned = _DatabaseFunctions::SearchWikiTables("literature_articles_and_essays", search);
                string* literature_australia_new_zealand_returned = _DatabaseFunctions::SearchWikiTables("literature_australia_new_zealand", search);
                string* literature_autobiographies_returned = _DatabaseFunctions::SearchWikiTables("literature_autobiographies", search);
                string* literature_christian_returned = _DatabaseFunctions::SearchWikiTables("literature_christian", search);
                //string* literature_corpus_returned = _DatabaseFunctions::SearchWikiTables("literature_corpus", search);
                string* literature_esoteric_occult_returned = _DatabaseFunctions::SearchWikiTables("literature_esoteric_occult", search);
                string* literature_fiction_returned = _DatabaseFunctions::SearchWikiTables("literature_fiction", search);

                
                if (sizeof(literature_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_returned) << " matches have been found in literature database!" << endl;
                        cout << literature_returned[z] << endl;
                    }
                }
                if (sizeof(literature_ancient_asia_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_ancient_asia_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_ancient_asia_returned) << " matches have been found in literature_ancient_asia database" << endl;
                        cout << literature_ancient_asia_returned[z] << endl;
                    }
                }
                if (sizeof(literature_ancient_egyption_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_ancient_egyption_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_ancient_egyption_returned) << " matches have been found in literature_ancient_egyption database" << endl;
                        cout << literature_ancient_egyption_returned[z] << endl;
                    }
                }
                if (sizeof(literature_ancient_greece_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_ancient_greece_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_ancient_greece_returned) << " matches have been found in literature_ancient_greece database" << endl;
                        cout << literature_ancient_greece_returned[z] << endl;
                    }
                }
                if (sizeof(literature_ancient_near_east_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_ancient_near_east_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_ancient_near_east_returned) << " matches have been found in literature_ancient_near_east database" << endl;
                        cout << literature_ancient_near_east_returned[z] << endl;
                    }
                }
                if (sizeof(literature_ancient_rome_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_ancient_rome_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_ancient_rome_returned) << " matches have been found in literature_ancient_rome database" << endl;
                        cout << literature_ancient_rome_returned[z] << endl;
                    }
                }
                if (sizeof(literature_anthropology_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_anthropology_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_anthropology_returned) << " matches have been found in literature_anthropology database" << endl;
                        cout << literature_anthropology_returned[z] << endl;
                    }
                }
                if (sizeof(literature_articles_and_essays_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_articles_and_essays_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_articles_and_essays_returned) << " matches have been found in literature_articles_and_essays database" << endl;
                        cout << literature_articles_and_essays_returned[z] << endl;
                    }
                }
                if (sizeof(literature_australia_new_zealand_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_australia_new_zealand_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_australia_new_zealand_returned) << " matches have been found in literature_australia_new_zealand database" << endl;
                        cout << literature_australia_new_zealand_returned[z] << endl;
                    }
                }
                if (sizeof(literature_autobiographies_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_autobiographies_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_autobiographies_returned) << " matches have been found in literature_autobiographies database" << endl;
                        cout << literature_autobiographies_returned[z] << endl;
                    }
                }
                if (sizeof(literature_christian_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_christian_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_christian_returned) << " matches have been found in literature_christian database" << endl;
                        cout << literature_christian_returned[z] << endl;
                    }
                }
                if (sizeof(literature_esoteric_occult_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_esoteric_occult_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_esoteric_occult_returned) << " matches have been found in literature_esoteric_occult database!" << endl;
                        cout << literature_esoteric_occult_returned[z] << endl;
                    }
                }
                if (sizeof(literature_fiction_returned) > 0)
                {
                    for (int z = 0; z <= sizeof(literature_fiction_returned); z++)
                    {
                        // Sent the output to NeuralLink or console
                        if (z == 0)
                            cout << sizeof(literature_fiction_returned) << " matches have been found in literature_fiction database!" << endl;
                        cout << literature_fiction_returned[z] << endl;
                    }
                }
                else
                {
                    // No matches
                    cout << "No matches found..." << endl;
                }
                // Check if the string was found in any of the strings

                // Send the completed strings to the awareness?
            }
            if (words_temp[j + 1] == "dictionary")
            {
                // There are several tables in the dictionary database
                // 1. entries
                // How many words are passed 'dictionary'
                size_t size = sizeof(words_temp) - 2;
                string word;
                string word_type;
                
                if (size == 1)
                {
                    word = words_temp[j + 2];
                    string** dictionary_single_return = _DatabaseFunctions::SearchDictionary(word);
                }
                if (size == 2)
                {
                    word = words_temp[j + 2];
                    word_type = words_temp[j + 3];
                    string** dictionary_wt_return = _DatabaseFunctions::SearchDictionary(word, word_type);
                }
                else
                {
                    // Throw exception
                }
            }
            if (words_temp[j + 1] == "vector")
            {
                // 1. GloveVectors
                // 2. vectors
                // 3. wiki_vectors <---
                size_t size = sizeof(words_temp) - 2;
                string word;
                string word_type;

                if (size == 1)
                {
                    word = words_temp[j + 2];
                    string** dictionary_single_return = _DatabaseFunctions::SearchDictionaryVector(word);
                }
                if (size == 2)
                {
                    word = words_temp[j + 2];
                    word_type = words_temp[j + 3];

                    if (word_type == "verb")
                    {
                        word_type = "v.";
                    }
                    if (word_type == "noun")
                    {
                        word_type = "n.";
                    }
                    if (word_type == "pronoun")
                    {
                        word_type = "pron.";
                    }
                    if (word_type == "adjective")
                    {
                        word_type = "a.";
                    }
                    if (word_type == "preposition")
                    {
                        word_type = "prep.";
                    }
                    if (word_type == "adverb")
                    {
                        word_type = "adv.";
                    }
                    if (word_type == "superlative")
                    {
                        word_type = "super.";
                    }
                    if (word_type == "imperative")
                    {
                        word_type = "imp.";
                    }
                    else
                    {
                        cout << "The word type you chose does not exist..." << endl;
                    }

                    string** dictionary_wt_return = _DatabaseFunctions::SearchDictionaryVector(word, word_type);
                }
                else
                {
                    // Throw exception
                }
            }
            if (words_temp[j + 1] == "list")
            {
                // There are two databases with lists.
                // 1. Lists
                // 2. Dictionary
            }
        }
        if (words_temp[j] == "create" && words_temp[j + 1] == "prompt" && words_temp[j + 2] == "for" && words_temp[j + 3] != "" && words_temp[j + 4] != "")
        {
            size_t size = sizeof(words_temp) - 4;
            string model = words_temp[j + 3];
            string prompt = "";

            for (int q = j + 4; q <= size; q++)
            {
                if (words_temp[q] != "")
                {
                    prompt += words_temp[q] + " ";
                }
            }

            string response = _LLM::OllamaAPI(model, prompt, NULL);
            response = _Parsers::LLM::LLama3Parse(response);

            // Add the prompt to working_memory
            for (int y = 0; y < 1000; y++)
            {
                if (wm_llm_response[y][0].empty() && y != 999)
                {
                    lock_guard<mutex> lock(mtx_wm_llm_response[y][0]);
                    lock_guard<mutex> lock2(mtx_wm_llm_response[y][1]);
                    lock_guard<mutex> lock3(mtx_wm_llm_response[y][2]);
                    lock_guard<mutex> lock4(mtx_wm_llm_response[y][3]);
                    wm_llm_response[y][0] = current_date;
                    wm_llm_response[y][1] = model;
                    wm_llm_response[y][2] = prompt;
                    wm_llm_response[y][3] = response;
                }
                if (!wm_llm_response[y][0].empty() && y == 999)
                {
                    // Send the prompt history to long term memory history
                    for (int z = 0; z < 1000; z++)
                    {
                        if (wm_llm_response[z][0] == "" && z != 999)
                        {
                            lock_guard<mutex> lock(mtx_wm_llm_response[z][0]);
                            lock_guard<mutex> lock1(mtx_wm_llm_response[z][1]);
                            lock_guard<mutex> lock2(mtx_wm_llm_response[z][2]);
                            lock_guard<mutex> lock3(mtx_wm_llm_response[z][3]);
                            lock_guard<mutex> lock4(mtx_wm_llm_response[z + 1][0]);
                            lock_guard<mutex> lock5(mtx_wm_llm_response[z + 1][1]);
                            lock_guard<mutex> lock6(mtx_wm_llm_response[z + 1][2]);
                            lock_guard<mutex> lock7(mtx_wm_llm_response[z + 1][3]);
                            wm_llm_response[z][0] = wm_llm_response[z + 1][0];
                            wm_llm_response[z][1] = wm_llm_response[z + 1][1];
                            wm_llm_response[z][2] = wm_llm_response[z + 1][2];
                            wm_llm_response[z][3] = wm_llm_response[z + 1][3];
                        }
                        if (wm_llm_response[z][0] != "" && z == 999)
                        {
                            wm_llm_response[0][0].clear();
                            wm_llm_response[0][1].clear();
                            wm_llm_response[0][2].clear();
                            wm_llm_response[0][3].clear();

                            for (int q = 0; q < 1000; q++)
                            {
                                if (q != 999)
                                {
                                    lock_guard<mutex> lock(mtx_wm_llm_response[q][0]);
                                    lock_guard<mutex> lock1(mtx_wm_llm_response[q][1]);
                                    lock_guard<mutex> lock2(mtx_wm_llm_response[q][2]);
                                    lock_guard<mutex> lock3(mtx_wm_llm_response[q][3]);
                                    lock_guard<mutex> lock4(mtx_wm_llm_response[q + 1][0]);
                                    lock_guard<mutex> lock5(mtx_wm_llm_response[q + 1][1]);
                                    lock_guard<mutex> lock6(mtx_wm_llm_response[q + 1][2]);
                                    lock_guard<mutex> lock7(mtx_wm_llm_response[q + 1][3]);
                                    wm_llm_response[q][0] = wm_llm_response[q + 1][0];
                                    wm_llm_response[q][1] = wm_llm_response[q + 1][1];
                                    wm_llm_response[q][2] = wm_llm_response[q + 1][2];
                                    wm_llm_response[q][3] = wm_llm_response[q + 1][3];
                                }
                                else
                                {
                                    lock_guard<mutex> lock(mtx_wm_llm_response[q][0]);
                                    lock_guard<mutex> lock1(mtx_wm_llm_response[q][1]);
                                    lock_guard<mutex> lock2(mtx_wm_llm_response[q][2]);
                                    lock_guard<mutex> lock3(mtx_wm_llm_response[q][3]);
                                    wm_llm_response[q][0] = current_date;
                                    wm_llm_response[q][1] = model;
                                    wm_llm_response[q][2] = prompt;
                                    wm_llm_response[q][3] = response;
                                }
                            }
                        }
                    }
                }
            }
            // Creative...
        }
        else if ((words_temp[j] == "algebra") || (words_temp[j] == "calculate") || (words_temp[j] == "factor") || (words_temp[j] == "simplify"))
        {
            string result = _Math::ManualMathPrompt();
        }
        if (words_temp[j] == "geometry" && words_temp[j + 1] == "calculate")
        {
            string result = _Math::ManualMathPrompt();
        }
        if (words_temp[j] == "trigonometry" && words_temp[j + 1] == "calculate")
        {
            string result = _Math::ManualMathPrompt();
        }
        if (words_temp[j] == "calculus" && words_temp[j + 1] == "calculate")
        {
            string result = _Math::ManualMathPrompt();
        }
        if (words_temp[j] == "statistics" && words_temp[j + 1] == "calculate")
        {
            //_Math::StatisticsParse(text);
        }
        if (words_temp[j] == "create" && words_temp[j + 1] == "deductive" && words_temp[j + 2] == "argument")
        {
            string text = "";

            // 1. Get all words that are after j + 2 up to the terminator command, then send them to _Argument::CreateDeductiveArgument()
            for (int x = j + 3; words_temp[x] != speech_commands_terminator; x++)
            {
                text += words_temp[x];
                text += ' ';
            }

            // 2. Create the deductive argument
            string argument = _Argument::CreateDeductiveArgument(text);

            // 3. Save the argument into the wm_simple_text data member
            for (int y = 999; y >= 0; y--)
            {
                if (!wm_simple_text[y][0].empty() && wm_simple_text[y + 1][0].empty())
                {
                    wm_simple_text[y + 1][0] = argument;
                    wm_simple_text[y + 1][1] = current_date;
                    break;
                }
            }
        }
        if (words_temp[j] == "create" && words_temp[j + 1] == "inductive" && words_temp[j + 2] == "argument")
        {
            string text = "";

            // 1. Get all words that are after j + 2 up to the terminator command, then send them to _Argument::CreateDeductiveArgument()
            for (int x = j + 3; words_temp[x] != speech_commands_terminator; x++)
            {
                text += words_temp[x];
                text += ' ';
            }

            // 2. Create the deductive argument
            string argument = _Argument::CreateInductiveArgument(text);

            // 3. Save the argument into the wm_simple_text data member
            for (int y = 999; y >= 0; y--)
            {
                if (!wm_simple_text[y][0].empty() && wm_simple_text[y + 1][0].empty())
                {
                    wm_simple_text[y + 1][0] = argument;
                    wm_simple_text[y + 1][1] = current_date;
                    break;
                }
            }
        }
        else if ((words_temp[j] == "convert" && words_temp[j + 1] == "units") || (words_temp[j] == "units" && words_temp[j + 1] == "conversion"))
        {
            //_Math::UnitConversions(text);
        }
        if (words_temp[j] == "fallacy" && words_temp[j + 1] == "check" && !words_temp[j + 2].empty() && words_temp[j + 3] == "seconds")
        {
            // Check for fallacy in working_memory datamembers, reading, dialogue, writing
            // 1. Get the time now
            long long now_seconds = _Time::ConvertDateToSeconds(current_date);
            long long search_seconds;
            long long duration_seconds = stoi(words_temp[j + 2]);
            int initial_position;
            string text = "";
            string fallacy;

            // 2. Iterate through the array looking for a duration greater than the amount of seconds specified
            for (int m = 999; m >= 0; m--)
            {
                if (!stm_sound_path[m][1].empty())
                {
                    search_seconds = _Time::ConvertDateToSeconds(stm_sound_path[m][1]);

                    // Check if the search seconds and the current seconds matches the duration
                    if (now_seconds - search_seconds >= duration_seconds)
                    {
                        for (int b = m; b < initial_position; b++)
                        {
                            if (!stm_sound_path[b][1].empty())
                            {
                                text += stm_sound_path[b][1];
                            }
                        }

                        // Fallacy Check
                        fallacy = _Fallacy::FallacyCheck(text);

                        if (!fallacy.empty())
                        {
                            cout << current_date << " String: " << text << endl;
                            cout << current_date << " Fallacy: " << fallacy << endl;

                            // Find the first empty position in fallacy memory
                            for (int n = 999; n >= 0; n--)
                            {
                                if (!wm_fallacy_check_text[n][0].empty() && wm_fallacy_check_text[n + 1][0].empty())
                                {
                                    wm_fallacy_check_text[n + 1][0] = fallacy;
                                    wm_fallacy_check_text[n + 1][1] = text;
                                    wm_fallacy_check_text[n + 1][2] = current_date;
                                    break;
                                }
                            }
                        }
                    }
                    else
                    {
                        initial_position = m;
                    }
                }
            }
        }
        if (words_temp[j] == "fallacy" && words_temp[j + 1] == "check" && words_temp[j + 2] == "working" && words_temp[j + 3] == "memory")
        {
            string text;

            // Check for fallacy in working_memory datamembers, reading, dialogue, writing
            for (int n = 0; n < 1000; n++)
            {
                if (!wm_sound_path[n][2].empty())
                {
                    text += wm_sound_path[n][2];
                    text += " ";
                }
            }

            string fallacy = _Fallacy::FallacyCheck(text);

            if (!fallacy.empty())
            {
                cout << current_date << " String: " << text << endl;
                cout << current_date << " Fallacy: " << fallacy << endl;

                // Find the first empty position in fallacy memory
                for (int n = 999; n >= 0; n--)
                {
                    if (!wm_fallacy_check_text[n][0].empty() && wm_fallacy_check_text[n + 1][0].empty())
                    {
                        wm_fallacy_check_text[n + 1][0] = fallacy;
                        wm_fallacy_check_text[n + 1][1] = text;
                        wm_fallacy_check_text[n + 1][2] = current_date;
                        break;
                    }
                }
            }
        }
        if (words_temp[j] == "fallacy" && words_temp[j + 1] == "check" && words_temp[j + 2] == "text")
        {
            string text;

            // Check for fallacy in working_memory datamembers, reading, dialogue, writing
            for (int n = 0; n < 1000; n++)
            {
                if (!wm_simple_text[n][0].empty())
                {
                    text += wm_sound_path[n][0];
                    text += " ";
                }
            }

            string fallacy = _Fallacy::FallacyCheck(text);

            if (!fallacy.empty())
            {
                cout << current_date << " String: " << text << endl;
                cout << current_date << " Fallacy: " << fallacy << endl;
            }
        }
        if (words_temp[j] == "bias" && words_temp[j + 1] == "check" && !words_temp[j + 2].empty() && words_temp[j + 3] == "seconds")
        {
            // Check for fallacy in working_memory datamembers, reading, dialogue, writing
            // 1. Get the time now
            long long now_seconds = _Time::ConvertDateToSeconds(current_date);
            long long search_seconds;
            long long duration_seconds = stoi(words_temp[j + 2]);
            int initial_position;
            string text = "";
            string bias;

            // 2. Iterate through the array looking for a duration greater than the amount of seconds specified
            for (int m = 999; m >= 0; m--)
            {
                if (!stm_sound_path[m][1].empty())
                {
                    search_seconds = _Time::ConvertDateToSeconds(stm_sound_path[m][1]);

                    // Check if the search seconds and the current seconds matches the duration
                    if (now_seconds - search_seconds >= duration_seconds)
                    {
                        for (int b = m; b < initial_position; b++)
                        {
                            if (!stm_sound_path[b][1].empty())
                            {
                                text += stm_sound_path[b][1];
                            }
                        }

                        // Fallacy Check
                        bias = _Bias::BiasCheck(text);

                        if (!bias.empty())
                        {
                            cout << current_date << " String: " << text << endl;
                            cout << current_date << " Cognitive Bias: " << bias << endl;
                            break;
                        }
                    }
                    else
                    {
                        initial_position = m;
                    }
                }
            }
        }
        if (words_temp[j] == "bias" && words_temp[j + 1] == "check" && words_temp[j + 2] == "working" && words_temp[j + 3] == "memory")
        {
            string text;

            // Check for fallacy in working_memory datamembers, reading, dialogue, writing
            for (int n = 0; n < 1000; n++)
            {
                if (!wm_sound_path[n][2].empty())
                {
                    text += wm_sound_path[n][2];
                    text += " ";
                }
            }

            string bias = _Bias::BiasCheck(text);

            if (!bias.empty())
            {
                cout << current_date << " String: " << text << endl;
                cout << current_date << " Cognitive Bias: " << bias << endl;
            }
        }
        // Translate from:
        // 1. Speech Command
        // 2. Dialogue
        // 3. Writing
        // 4. Reading
        if (words_temp[j] == "translate" && words_temp[j + 1] == "to" && words_temp[j + 2] == "english" && words_temp[j + 3] == "from" && words_temp[j + 4] == "dialogue")
        {
            string text = "";

            // 1. Get dialogue from stm_sound_path
            for (int r = 999; r >= 0; r--)
            {
                if (!stm_sound_path[r][2].empty() && stm_sound_path[r + 1][2].empty())
                {
                    text = stm_sound_path[r + 1][2];
                }
            }

            // 2. Create the deductive argument
            string translate = _Translation::Translate2English(text);
            cout << "Translate: " << translate << endl;

            // 3. Save the argument into the wm_simple_text data member
            for (int y = 999; y >= 0; y--)
            {
                if (!wm_simple_text[y][0].empty() && wm_simple_text[y + 1][0].empty())
                {
                    wm_simple_text[y + 1][0] = translate;
                    wm_simple_text[y + 1][1] = current_date;
                    break;
                }
            }

            // 3. Save the argument into the wm_simple_text data member
            for (int y = 999; y >= 0; y--)
            {
                if (!wm_translate_text[y][0].empty() && wm_translate_text[y + 1][0].empty())
                {
                    wm_translate_text[y + 1][0] = translate;
                    wm_translate_text[y + 1][1] = current_date;
                    break;
                }
            }
        }
        if (words_temp[j] == "translate" && words_temp[j + 1] == "to" && words_temp[j + 2] == "english")
        {
            string text = "";

            // Get the text from the command
            for (int x = j + 3; words_temp[x] != speech_commands_terminator; x++)
            {
                text += words_temp[x];
                text += ' ';
            }

            // 2. Create the deductive argument
            string translate = _Translation::Translate2English(text);

            // 3. Save the argument into the wm_simple_text data member
            for (int y = 999; y >= 0; y--)
            {
                if (!wm_simple_text[y][0].empty() && wm_simple_text[y + 1][0].empty())
                {
                    wm_simple_text[y + 1][0] = translate;
                    wm_simple_text[y + 1][1] = current_date;
                    break;
                }
            }

            for (int y = 999; y >= 0; y--)
            {
                if (!wm_translate_text[y][0].empty() && wm_translate_text[y + 1][0].empty())
                {
                    wm_translate_text[y + 1][0] = translate;
                    wm_translate_text[y + 1][1] = current_date;
                    break;
                }
            }
        }
        if (words_temp[j] == "find" && words_temp[j + 1] == "object" && words_temp[j + 2] != "")
        {
            _DatabaseFunctions::FindObject(words_temp[j + 3]);
        }
        if (words_temp[j] == "where" && words_temp[j + 1] == "is" && words_temp[j + 2] == "it")
        {
            _DatabaseFunctions::FindObject(words_temp[j + 3]);
        }
        if (words_temp[j] == "part" && words_temp[j + 1] == "of" && words[j + 2] == "speech" && words_temp[j + 2] == "tag")
        {

        }
        if (words_temp[j] == "reading" && (words_temp[j + 1] == "mode" || words_temp[j + 1] == ""))
        {
            //_Reading::TextIdentification();
        }
        if (words_temp[j] == "add" && words_temp[j + 1] == "to" && words_temp[j + 2] == "string" && words_temp[j + 3] != "")
        {
            string temp_string = "";

            for (int x = j + 3; x <= sizeof(words_temp); x++)
            {
                temp_string += words_temp[x];
                temp_string += " ";
            }

            for (int y = 999; y >= 0; y--)
            {
                if (!wm_simple_text[y][0].empty() && wm_simple_text[y + 1][0].empty())
                {
                    wm_simple_text[y + 1][0] += temp_string;
                    wm_simple_text[y + 1][1] = current_date;
                }
            }
        }
        if (words_temp[j] == "get" && words_temp[j + 1] == "setting")
        {
            if (words_temp[j + 2] == "awareness" && words_temp[j + 3] == "")
            {
                if (awareness_interface)
                    cout << "Setting: awareness_interface: True" << endl;
                else
                    cout << "Setting: awareness_interface: false" << endl;
            }
            if (words_temp[j + 2] == "cuda" && words_temp[j + 3] == "")
            {
                if (cuda_accelleration)
                    cout << "Setting: CUDA: Enabled" << endl;
                else
                    cout << "Setting: CUDA: Disabled" << endl;
            }
            if (words_temp[j + 2] == "cuda" && words_temp[j + 3] == "remote" && words_temp[j + 4] == "")
            {
                if (cuda_accelleration_remote_enabled)
                    cout << "Setting: CUDA Remote: Enabled" << endl;
                else
                    cout << "Setting: CUDA Remote: Disabled" << endl;
            }
            if (words_temp[j + 2] == "cuda" && words_temp[j + 3] == "remote" && words_temp[j + 4] == "hostname")
            {
                cout << "Setting: CUDA Remote Hostname: " << cuda_accelleration_remote_hostname << endl;
            }
            if (words_temp[j + 2] == "cuda" && words_temp[j + 3] == "remote" && words_temp[j + 4] == "cores")
            {
                cout << "Setting: CUDA Remote Cores: " << cuda_accelleration_remote_cores << endl;
            }
            if (words_temp[j + 2] == "tensor" && words_temp[j + 3] == "cores" && words_temp[j + 4] == "")
            {
                if (tensor_accelleration)
                    cout << "Setting: Tensor Core Accelleration: Enabled" << endl;
                else
                    cout << "Setting: Tensor Core Accelleration: Disabled" << endl;
            }
            if (words_temp[j + 2] == "tensor" && words_temp[j + 3] == "cores" && words_temp[j + 4] == "remote" && words_temp[j + 5] == "")
            {
                if (tensor_accelleration_remote_enabled)
                    cout << "Setting: Tensor Core Accelleration Remote: Enabled" << endl;
                else
                    cout << "Setting: Tensor Core Accelleration Remote: Disabled" << endl;
            }
            if (words_temp[j + 2] == "tensor" && words_temp[j + 3] == "cores" && words_temp[j + 4] == "remote" && words_temp[j + 5] == "hostname")
            {
                cout << "Setting: Tensor Core Accelleration Remote Hostname: " << tensor_accelleration_remote_hostname << endl;
            }
            if (words_temp[j + 2] == "tensor" && words_temp[j + 3] == "cores" && words_temp[j + 4] == "remote" && words_temp[j + 5] == "cores")
            {
                cout << "Setting: Tensor Core Accelleration Remote Cores: " << tensor_accelleration_remote_cores << endl;
            }
            if (words_temp[j + 2] == "working" && words_temp[j + 3] == "memory" && words_temp[j + 4] == "")
            {
                if (working_memory_enabled)
                    cout << "Setting: Working Memory: Enabled" << endl;
                else
                    cout << "Setting: Working Memory: Disabled" << endl;
            }
            if (words_temp[j + 2] == "working" && words_temp[j + 3] == "memory" && words_temp[j + 4] == "limit")
            {
                cout << "Setting: Working Memory Limit: " << working_memory_limit << endl;
            }
            if (words_temp[j + 2] == "short" && words_temp[j + 3] == "term" && words_temp[j + 4] == "memory" && words_temp[j + 5] == "")
            {
                if (short_term_memory_enabled)
                    cout << "Setting: Short Term Memory: Enabled" << endl;
                else
                    cout << "Setting: Short Term Memory: Disabled" << endl;
            }
            if (words_temp[j + 2] == "short" && words_temp[j + 3] == "term" && words_temp[j + 4] == "memory" && words_temp[j + 5] == "limit")
            {
                if (short_term_memory_limit != "")
                    cout << "Setting: Short Term Memory Limit: " << short_term_memory_limit << endl;
                else
                    cout << "Setting: Short Term Memory Limit: " << short_term_memory_limit << endl;
            }
            if (words_temp[j + 2] == "long" && words_temp[j + 3] == "term" && words_temp[j + 4] == "memory" && words_temp[j + 5] == "")
            {
                if (long_term_memory_enabled)
                    cout << "Setting: Long Term Memory: Enabled" << endl;
                else
                    cout << "Setting: Long Term Memory: Disabled" << endl;
            }
            if (words_temp[j + 2] == "long" && words_temp[j + 3] == "term" && words_temp[j + 4] == "memory" && words_temp[j + 5] == "limit")
            {
                cout << "Setting: Long Term Memory Limit: " << long_term_memory_limit << endl;
            }
            if (words_temp[j + 2] == "speech" && words_temp[j + 3] == "memory" && words_temp[j + 4] == "")
            {
                if (speech_memory_enabled)
                    cout << "Setting: Speech Memory: Enabled" << endl;
                else
                    cout << "Setting: Speech Memory: Disabled" << endl;
            }
            if (words_temp[j + 2] == "vision" && words_temp[j + 3] == "object" && words_temp[j + 4] == "detection" && words_temp[j + 5] == "")
            {
                if (vision_object_detection)
                    cout << "Setting: Vision Object Detection: Enabled" << endl;
                else
                    cout << "Setting: Vision Object Detection: Disabled" << endl;
            }
            if (words_temp[j + 2] == "vision" && words_temp[j + 3] == "object" && words_temp[j + 4] == "detection" && words_temp[j + 5] == "remote")
            {
                if (vision_object_detection_server)
                    cout << "Setting: Vision Object Detection Server: Enabled" << endl;
                else
                    cout << "Setting: Vision Object Detection Server: Disabled" << endl;
            }
            if (words_temp[j + 2] == "vision" && words_temp[j + 3] == "object" && words_temp[j + 4] == "detection" && words_temp[j + 5] == "hostname")
            {
                cout << "Setting: Vision Object Detection Hostname: " << vision_object_detection_server_hostname << endl;
            }
            if (words_temp[j + 2] == "tensorflow" && words_temp[j + 3] == "model" && words_temp[j + 4] == "")
            {
                cout << "Setting: Tensorflow Model: " << tensorflow_model << endl;
            }
            if (words_temp[j + 2] == "tensorflow" && words_temp[j + 3] == "labels" && words_temp[j + 4] == "")
            {
                cout << "Setting: Tensorflow Labels: " << tensorflow_labels << endl;
            }
            if (words_temp[j + 2] == "whisper" && words_temp[j + 3] == "model" && words_temp[j + 4] == "")
            {
                cout << "Setting: Whisper Model: " << whisper_model << endl;
            }
            if (words_temp[j + 2] == "visual" && words_temp[j + 3] == "reasoning" && words_temp[j + 4] == "")
            {
                if (visual_reasoning)
                    cout << "Setting: Visual Reasoning: Enabled" << endl;
                else
                    cout << "Setting: Visual Reasoning: Disabled" << endl;
            }
            if (words_temp[j + 2] == "visual" && words_temp[j + 3] == "reasoning" && words_temp[j + 4] == "model")
            {
                cout << "Setting: Visual Reasoning Model: " << visual_reasoning_model << endl;
            }
            if (words_temp[j + 2] == "visual" && words_temp[j + 3] == "memory" && words_temp[j + 4] == "")
            {
                if (visual_memory)
                    cout << "Setting: Visual Memory: Enabled" << endl;
                else
                    cout << "Setting: Visual Memory: Disabled" << endl;
            }
            if (words_temp[j + 2] == "visual" && words_temp[j + 3] == "memory" && words_temp[j + 4] == "directory")
            {
                cout << "Setting: Visual Memory Directory: " << vision_memory_directory << endl;
            }
            if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "one" && words_temp[j + 4] == "")
            {
                if (camera1_enabled)
                    cout << "Setting: Camera 1: Enabled" << endl;
                else
                    cout << "Setting: Camera 2: Disabled" << endl;
            }
            if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "one" && words_temp[j + 4] == "fps" && words_temp[j + 5] == "")
            {
                cout << "Setting: Camera 1 FPS: " << camera1_fps << endl;
            }
            if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "one" && words_temp[j + 4] == "resolution" && words_temp[j + 5] == "height")
            {
                cout << "Setting: Camera 1 Resolution Height: " << camera1_resolution_height << endl;
            }
            if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "one" && words_temp[j + 4] == "resolution" && words_temp[j + 5] == "width")
            {
                cout << "Setting: Camera 1 Resolution Width: " << camera1_resolution_width << endl;
            }
            if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "two" && words_temp[j + 4] == "")
            {
                if (camera2_enabled)
                    cout << "Setting: Camera 2: Enabled" << endl;
                else
                    cout << "Setting: Camera 2: Disabled" << endl;
            }
            if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "two" && words_temp[j + 4] == "fps")
            {
                cout << "Setting: Camera 2 FPS: " << camera2_fps << endl;
            }
            if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "two" && words_temp[j + 4] == "resolution" && words_temp[j + 5] == "height" && words_temp[j + 6] == "")
            {
                cout << "Setting: Camera 2 Resolution Height: " << camera2_resolution_height << endl;
            }
            if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "two" && words_temp[j + 4] == "resolution" && words_temp[j + 5] == "width" && words_temp[j + 6] == "")
            {
                cout << "Setting: Camera 2 Resolution Width: " << camera2_resolution_width << endl;
            }
            if (words_temp[j + 2] == "speech" && words_temp[j + 3] == "commands")
            {
                if (speech_commands)
                    cout << "Setting: Speech Commands: Enabled" << endl;
                else
                    cout << "Setting: Speech Commands: Disabled" << endl;
            }
            if (words_temp[j + 2] == "action" && words_temp[j + 3] == "commands")
            {
                if (action_commands)
                    cout << "Setting: Action Commands: Enabled" << endl;
                else
                    cout << "Setting: Action Commands: Disabled" << endl;
            }
            if (words_temp[j + 2] == "vision" && words_temp[j + 3] == "commands")
            {
                if (vision_commands)
                    cout << "Setting: Vision Commands: Enabled" << endl;
                else
                    cout << "Setting: Vision Commands: Disabled" << endl;
            }
            if (words_temp[j + 2] == "phone" && words_temp[j + 3] == "commands")
            {
                if (phone_commands)
                    cout << "Setting: Phone Commands: Enabled" << endl;
                else
                    cout << "Setting: Phone Commands: Disabled" << endl;
            }
            if (words_temp[j + 2] == "visual" && words_temp[j + 3] == "thinking")
            {
                if (visual_thinking)
                    cout << "Setting: Visual Thinking: Enabled" << endl;
                else
                    cout << "Setting: Visual Thinking: Disabled" << endl;
            }
            if (words_temp[j + 2] == "computer" && words_temp[j + 3] == "use")
            {
                if (computer_use)
                    cout << "Setting: Computer Use: Enabled" << endl;
                else
                    cout << "Setting: Computer Use: Disabled" << endl;
            }
            if (words_temp[j + 2] == "reading" && words_temp[j + 3] == "")
            {
                if (reading)
                    cout << "Setting: Reading: Enabled" << endl;
                else
                    cout << "Setting: Reading: Disabled" << endl;
            }
            if (words_temp[j + 2] == "sound" && words_temp[j + 3] == "memory" && words_temp[j + 4] == "")
            {
                if (sound_memory)
                    cout << "Setting: Sound Memory: Enabled" << endl;
                else
                    cout << "Setting: Sound Memory: Disabled" << endl;
            }
            if (words_temp[j + 2] == "speech" && words_temp[j + 3] == "recognition" && words_temp[j + 4] == "")
            {
                if (speech_recognition)
                    cout << "Setting: Speech Recognition: Enabled" << endl;
                else
                    cout << "Setting: Speech Recognition: Disabled" << endl;
            }
            if (words_temp[j + 2] == "sound" && words_temp[j + 3] == "recognition" && words_temp[j + 4] == "")
            {
                if (sound_recognition)
                    cout << "Setting: Sound Recognition: Enabled" << endl;
                else
                    cout << "Setting: Sound Recognition: Disabled" << endl;
            }
            if (words_temp[j + 2] == "sound" && words_temp[j + 3] == "directory" && words_temp[j + 4] == "")
            {
                cout << "Setting: Sound Directory: " << sound_directory << endl;
            }
            if (words_temp[j + 2] == "sound" && words_temp[j + 3] == "reasoning")
            {
                if (sound_reasoning)
                    cout << "Setting: Sound Reasoning: Enabled" << endl;
                else
                    cout << "Setting: Sound Reasoning: Disabled" << endl;
            }
            if (words_temp[j + 2] == "reading" && words_temp[j + 3] == "reasoning")
            {
                if (reading_reasoning)
                    cout << "Setting: Reading Reasoning: Enabled" << endl;
                else
                    cout << "Setting: Reading Reasoning: Disabled" << endl;
            }
            if (words_temp[j + 2] == "speech" && words_temp[j + 3] == "reasoning")
            {
                if (speech_reasoning)
                    cout << "Setting: Speech Reasoning: Enabled" << endl;
                else
                    cout << "Setting: Speech Reasoning: Disabled" << endl;
            }
            if (words_temp[j + 2] == "news" && words_temp[j + 3] == "watching")
            {
                if (news_watching)
                    cout << "Setting: News Watching: Enabled" << endl;
                else
                    cout << "Setting: News Watching: Disabled" << endl;
            }
            if (words_temp[j + 2] == "action" && words_temp[j + 3] == "commands")
            {
                if (action_commands)
                    cout << "Setting: Action Commands: Enabled" << endl;
                else
                    cout << "Setting: Action Commands: Disabled" << endl;
            }
            if (words_temp[j + 2] == "action" && words_temp[j + 3] == "detection")
            {
                if (action_detection)
                    cout << "Setting: Action Detection: Enabled" << endl;
                else
                    cout << "Setting: Action Detection: Disabled" << endl;
            }
            if (words_temp[j + 2] == "needs" && words_temp[j + 3] == "detection")
            {
                if (needs_detection)
                    cout << "Setting: Needs Detection: Enabled" << endl;
                else
                    cout << "Setting: Needs Detection: Disabled" << endl;
            }
            if (words_temp[j + 2] == "navigation")
            {
                if (navigation_detection)
                    cout << "Setting: Navigation Detection: Enabled" << endl;
                else
                    cout << "Setting: Navigation Detection: Disabled" << endl;
            }
            if (words_temp[j + 2] == "listening" && words_temp[j + 3] == "fallacy" && words_temp[j + 4] == "checking")
            {
                if (listening_fallacy_checking)
                    cout << "Setting: Listening Fallacy Checking: Enabled" << endl;
                else
                    cout << "Setting: Listening Fallacy Checking: Disabled" << endl;
            }
            if (words_temp[j + 2] == "listening" && words_temp[j + 3] == "bias" && words_temp[j + 4] == "checking")
            {
                if (listening_bias_checking)
                    cout << "Setting: Listening Bias Checking: Enabled" << endl;
                else
                    cout << "Setting: Listening Bias Checking: Disabled" << endl;
            }
            if (words_temp[j + 2] == "listening" && words_temp[j + 3] == "literature" && words_temp[j + 4] == "devices")
            {
                if (listening_literature_device_checking)
                    cout << "Setting: Literature Device Checking: Enabled" << endl;
                else
                    cout << "Setting: Literature Device Checking: Disabled" << endl;
            }
            if (words_temp[j + 2] == "listening" && words_temp[j + 3] == "axioms")
            {
                if (listening_axiom_checking)
                    cout << "Setting: Axiom Checking: Enabled" << endl;
                else
                    cout << "Setting: Axiom Checking: Disabled" << endl;
            }
            if (words_temp[j + 2] == "listening" && words_temp[j + 3] == "abuse")
            {
                if (listening_abuse_checking)
                    cout << "Setting: Listening Abuse Checking: Enabled" << endl;
                else
                    cout << "Setting: Listening Abuse Checking: Disabled" << endl;
            }
            if (words_temp[j + 2] == "listening" && words_temp[j + 3] == "law")
            {
                if (listening_law_checking)
                    cout << "Setting: Listening Law Checking: Enabled" << endl;
                else
                    cout << "Setting: Listening Law Checking: Disabled" << endl;
            }
            if (words_temp[j + 2] == "listening" && words_temp[j + 3] == "dictionary")
            {
                if (listening_dictionary_checking)
                    cout << "Setting: Listening Dictionary Checking: Enabled" << endl;
                else
                    cout << "Setting: Listening Dictionary Checking: Disabled" << endl;
            }
            if (words_temp[j + 2] == "ftp" && words_temp[j + 3] == "server")
            {
                if (listening_dictionary_checking)
                    cout << "Setting: Listening Dictionary Checking: Enabled" << endl;
                else
                    cout << "Setting: Listening Dictionary Checking: Disabled" << endl;
            }
            if (words_temp[j + 2] == "ftp" && words_temp[j + 3] == "hostname")
            {
                cout << "Setting: FTP Hostname: " << ftp_hostname << endl;
            }
            if (words_temp[j + 2] == "ftp" && words_temp[j + 3] == "username")
            {
                cout << "Setting: FTP Username: " << ftp_username << endl;
            }
            if (words_temp[j + 2] == "ftp" && words_temp[j + 3] == "password")
            {
                cout << "Setting: FTP Password: " << ftp_password << endl;
            }
            if (words_temp[j + 2] == "ftp" && words_temp[j + 3] == "vision" && words_temp[j + 4] == "directory")
            {
                cout << "Setting: FTP Vision Directory: " << ftp_vision_directory << endl;
            }
            if (words_temp[j + 2] == "ftp" && words_temp[j + 3] == "sound" && words_temp[j + 4] == "directory")
            {
                cout << "Setting: FTP Sound Directory: " << ftp_sound_directory << endl;
            }
            if (words_temp[j + 2] == "ftp" && words_temp[j + 3] == "vision" && words_temp[j + 4] == "storage" && words_temp[j + 5] == "limit")
            {
                cout << "Setting: FTP Vision Storage Limit: " << ftp_vision_storage_limit << endl;
            }
            if (words_temp[j + 2] == "ftp" && words_temp[j + 3] == "sound" && words_temp[j + 4] == "storage" && words_temp[j + 5] == "limit")
            {
                cout << "Setting: FTP Sound Storage Limit: " << ftp_sound_storage_limit << endl;
            }
            if (words_temp[j + 2] == "computer" && words_temp[j + 3] == "hostname")
            {
                cout << "Setting: Computer Hostname: " << computer_hostname << endl;
            }
            if (words_temp[j + 2] == "computer" && words_temp[j + 3] == "username")
            {
                cout << "Setting: Computer Username: " << computer_username << endl;
            }
            if (words_temp[j + 2] == "computer" && words_temp[j + 3] == "password")
            {
                cout << "Setting: Computer Password: " << computer_password << endl;
            }
            if (words_temp[j + 2] == "mysql" && words_temp[j + 3] == "hostname")
            {
                cout << "Setting: MySQL Hostname: " << mysql_hostname << endl;
            }
            if (words_temp[j + 2] == "mysql" && words_temp[j + 3] == "username")
            {
                cout << "Setting: MySQL Username: " << mysql_username << endl;
            }
            if (words_temp[j + 2] == "mysql" && words_temp[j + 3] == "password")
            {
                cout << "Setting: MySQL Password: " << mysql_password << endl;
            }
            if (words_temp[j + 2] == "mysql" && words_temp[j + 3] == "vision" && words_temp[j + 4] == "database")
            {
                cout << "Setting: MySQL Vision Database: " << mysql_vision_database << endl;
            }
            if (words_temp[j + 2] == "mysql" && words_temp[j + 3] == "sound" && words_temp[j + 4] == "database")
            {
                cout << "Setting: MySQL Sound Database: " << mysql_sound_database << endl;
            }
            if (words_temp[j + 2] == "mysql" && words_temp[j + 3] == "dictionary" && words_temp[j + 4] == "database")
            {
                cout << "Setting: MySQL Dictionary Database: " << mysql_dictionary_database << endl;
            }
            if (words_temp[j + 2] == "remote" && words_temp[j + 3] == "mysql" && words_temp[j + 4] == "hostname")
            {
                cout << "Setting: MySQL Remote Hostname: " << remote_mysql_hostname << endl;
            }
            if (words_temp[j + 2] == "remote" && words_temp[j + 3] == "mysql" && words_temp[j + 4] == "username")
            {
                cout << "Setting: MySQL Remote Username: " << remote_mysql_username << endl;
            }
            if (words_temp[j + 2] == "remote" && words_temp[j + 3] == "mysql" && words_temp[j + 4] == "password")
            {
                cout << "Setting: MySQL Remote Password: " << remote_mysql_password << endl;
            }
            if (words_temp[j + 2] == "remote" && words_temp[j + 3] == "mysql" && words_temp[j + 4] == "working" && words_temp[j + 5] == "memory" && words_temp[j + 6] == "database")
            {
                cout << "Setting: MySQL Remote Working Memory Database: " << remote_mysql_working_memory_database << endl;
            }
            if (words_temp[j + 2] == "remote" && words_temp[j + 3] == "mysql" && words_temp[j + 4] == "short" && words_temp[j + 5] == "term" && words_temp[j + 6] == "memory" && words_temp[j + 7] == "database")
            {
                cout << "Setting: MySQL Remote MySQL Short Term Memory Database: " << remote_mysql_short_term_memory_database << endl;
            }
            if (words_temp[j + 2] == "remote" && words_temp[j + 3] == "mysql" && words_temp[j + 4] == "long" && words_temp[j + 5] == "term" && words_temp[j + 6] == "memory" && words_temp[j + 7] == "database")
            {
                cout << "Setting: MySQL Remote Long Term Memory Database: " << remote_mysql_long_term_memory_database << endl;
            }
            if (words_temp[j + 2] == "remote" && words_temp[j + 3] == "mysql" && words_temp[j + 4] == "dictionary" && words_temp[j + 5] == "database")
            {
                cout << "Setting: MySQL Remote Dictionary Database: " << remote_mysql_dictionary_database << endl;
            }
            if (words_temp[j + 2] == "remote" && words_temp[j + 3] == "mysql" && words_temp[j + 4] == "destination" && words_temp[j + 5] == "database" && words_temp[j + 6] == "words")
            {
                cout << "Setting: MySQL Remote Wikipedia POS Tag Words Database: " << remote_mysql_destination_database_words << endl;
            }
            if (words_temp[j + 2] == "remote" && words_temp[j + 3] == "mysql" && words_temp[j + 4] == "destination" && words_temp[j + 5] == "database" && words_temp[j + 6] == "sentences")
            {
                cout << "Setting: MySQL Remote Wikipedia POS Tag Sentences Database: " << remote_mysql_destination_database_sentences << endl;
            }
            if (words_temp[j + 2] == "whisper" && words_temp[j + 3] == "server" && words_temp[j + 4] != "")
            {
                if (whisper_server_enabled)
                    cout << "Setting: Whisper Server: Enabled" << endl;
                else
                    cout << "Setting: Whisper Server: Disabled" << endl;
            }
            if (words_temp[j + 2] == "whisper" && words_temp[j + 3] == "hostname")
            {
                cout << "Setting: MySQL Remote Wikipedia POS Tag Sentences Database: " << remote_mysql_destination_database_sentences << endl;
            }
            if (words_temp[j + 2] == "whisper" && words_temp[j + 3] == "username")
            {
                cout << "Setting: Whisper Username: " << whisper_username << endl;
            }
            if (words_temp[j + 2] == "whisper" && words_temp[j + 3] == "password")
            {
                cout << "Setting: Whisper Password: " << whisper_password << endl;
            }
            if (words_temp[j + 2] == "whisper" && words_temp[j + 3] == "model")
            {
                cout << "Setting: Whisper Model: " << whisper_model << endl;
            }
            if (words_temp[j + 2] == "whisper" && words_temp[j + 3] == "prompt" && words_temp[j + 4] == "seconds")
            {
                cout << "Setting: Whisper Prompt Seconds: " << whisper_prompt_seconds << endl;
            }
            if (words_temp[j + 2] == "whisper" && words_temp[j + 3] == "command" && words_temp[j + 4] == "seconds")
            {
                cout << "Setting: Whisper Command Prompt Seconds: " << whisper_command_seconds << endl;
            }
            if (words_temp[j + 2] == "driving" && words_temp[j + 3] == "enabled")
            {
                if (driving_enabled)
                    cout << "Setting: Driving: Enabled" << endl;
                else
                    cout << "Setting: Driving: Disabled" << endl;
            }
            if (words_temp[j + 2] == "driving" && words_temp[j + 3] == "head" && words_temp[j + 4] == "position")
            {
                cout << "Setting: Driving Head Position: " << driving_head_position << endl;
            }
            if (words_temp[j + 2] == "driving" && words_temp[j + 3] == "left" && words_temp[j + 4] == "mirror")
            {
                cout << "Setting: Driving Left Mirror Position: " << driving_left_mirror << endl;
            }
            if (words_temp[j + 2] == "driving" && words_temp[j + 3] == "right" && words_temp[j + 5] == "mirror")
            {
                cout << "Setting: Driving Right Mirror Position: " << driving_right_mirror << endl;
            }
            if (words_temp[j + 2] == "driving" && words_temp[j + 3] == "center" && words_temp[j + 5] == "mirror")
            {
                cout << "Setting: Driving Center Mirror Position: " << driving_center_mirror << endl;
            }
        }
        else if ((words_temp[j] == "set" || words_temp[j] == "change") && words_temp[j + 1] == "setting")
        {
            if (words_temp[j + 2] == "awareness" && words_temp[j + 3] == "")
            {
                if (awareness_interface)
                    awareness_interface = false;
                else
                    awareness_interface = true;
            }
            if (words_temp[j + 2] == "cuda" && words_temp[j + 3] == "")
            {
                if (cuda_accelleration)
                    cuda_accelleration = false;
                else
                    cuda_accelleration = true;
            }
            if (words_temp[j + 2] == "cuda" && words_temp[j + 3] == "remote" && words_temp[j + 4] == "")
            {
                if (cuda_accelleration_remote_enabled)
                    cuda_accelleration_remote_enabled = false;
                else
                    cuda_accelleration_remote_enabled = true;
            }
            //if (words_temp[j + 2] == "cuda" && words_temp[j + 3] == "remote" && words_temp[j + 4] == "hostname")
            //{
            //    cout << "Setting: CUDA Remote Hostname: " << cuda_accelleration_remote_hostname << endl;
            //}
            //if (words_temp[j + 2] == "cuda" && words_temp[j + 3] == "remote" && words_temp[j + 4] == "cores")
            //{
            //    cout << "Setting: CUDA Remote Cores: " << cuda_accelleration_remote_cores << endl;
            //}
            if (words_temp[j + 2] == "tensor" && words_temp[j + 3] == "cores" && words_temp[j + 4] == "")
            {
                if (tensor_accelleration)
                    tensor_accelleration = false;
                else
                    tensor_accelleration = true;
            }
            if (words_temp[j + 2] == "tensor" && words_temp[j + 3] == "cores" && words_temp[j + 4] == "remote" && words_temp[j + 5] == "")
            {
                if (tensor_accelleration_remote_enabled)
                    tensor_accelleration_remote_enabled = false;
                else
                    tensor_accelleration_remote_enabled = true;
            }
            //if (words_temp[j + 2] == "tensor" && words_temp[j + 3] == "cores" && words_temp[j + 4] == "remote" && words_temp[j + 5] == "hostname")
            //{
            //    cout << "Setting: Tensor Core Accelleration Remote Hostname: " << tensor_accelleration_remote_hostname << endl;
            //}
            //if (words_temp[j + 2] == "tensor" && words_temp[j + 3] == "cores" && words_temp[j + 4] == "remote" && words_temp[j + 5] == "cores")
            //{
            //    cout << "Setting: Tensor Core Accelleration Remote Cores: " << tensor_accelleration_remote_cores << endl;
            //}
            if (words_temp[j + 2] == "working" && words_temp[j + 3] == "memory" && words_temp[j + 4] == "")
            {
                if (working_memory_enabled)
                    working_memory_enabled = false;
                else
                    working_memory_enabled = true;
            }
            //if (words_temp[j + 2] == "working" && words_temp[j + 3] == "memory" && words_temp[j + 4] == "limit")
            //{
            //    cout << "Setting: Working Memory Limit: " << working_memory_limit << endl;
            //}
            if (words_temp[j + 2] == "short" && words_temp[j + 3] == "term" && words_temp[j + 4] == "memory" && words_temp[j + 5] == "")
            {
                if (short_term_memory_enabled)
                    short_term_memory_enabled = false;
                else
                    short_term_memory_enabled = true;
            }
            //if (words_temp[j + 2] == "short" && words_temp[j + 3] == "term" && words_temp[j + 4] == "memory" && words_temp[j + 5] == "limit")
            //{
            //    cout << "Setting: Short Term Memory Limit: " << short_term_memory_limit << endl;
            //}
            if (words_temp[j + 2] == "long" && words_temp[j + 3] == "term" && words_temp[j + 4] == "memory" && words_temp[j + 5] == "")
            {
                if (long_term_memory_enabled)
                    long_term_memory_enabled = false;
                else
                    long_term_memory_enabled = true;
            }
            //if (words_temp[j + 2] == "long" && words_temp[j + 3] == "term" && words_temp[j + 4] == "memory" && words_temp[j + 5] == "limit")
            //{
            //    cout << "Setting: Long Term Memory Limit: " << long_term_memory_limit << endl;
            //}
            if (words_temp[j + 2] == "speech" && words_temp[j + 3] == "memory" && words_temp[j + 4] == "")
            {
                if (speech_memory_enabled)
                    speech_memory_enabled = false;
                else
                    speech_memory_enabled = true;
            }
            if (words_temp[j + 2] == "vision" && words_temp[j + 3] == "object" && words_temp[j + 4] == "detection" && words_temp[j + 5] == "")
            {
                if (vision_object_detection)
                    vision_object_detection = false;
                else
                    vision_object_detection = true;
            }
            if (words_temp[j + 2] == "vision" && words_temp[j + 3] == "object" && words_temp[j + 4] == "detection" && words_temp[j + 5] == "remote")
            {
                if (vision_object_detection_server)
                    vision_object_detection_server = false;
                else
                    vision_object_detection_server = true;
            }
            //if (words_temp[j + 2] == "vision" && words_temp[j + 3] == "object" && words_temp[j + 4] == "detection" && words_temp[j + 5] == "hostname")
            //{
            //    cout << "Setting: Vision Object Detection Hostname: " << vision_object_detection_server_hostname << endl;
            //}
            //if (words_temp[j + 2] == "tensorflow" && words_temp[j + 3] == "model" && words_temp[j + 4] == "")
            //{
            //    cout << "Setting: Tensorflow Model: " << tensorflow_model << endl;
            //}
            //if (words_temp[j + 2] == "tensorflow" && words_temp[j + 3] == "labels" && words_temp[j + 4] == "")
            //{
            //    cout << "Setting: Tensorflow Labels: " << tensorflow_labels << endl;
            //}
            //if (words_temp[j + 2] == "whisper" && words_temp[j + 3] == "model" && words_temp[j + 4] == "")
            //{
            //    cout << "Setting: Whisper Model: " << whisper_model << endl;
            //}
            if (words_temp[j + 2] == "visual" && words_temp[j + 3] == "reasoning" && words_temp[j + 4] == "")
            {
                if (visual_reasoning)
                    visual_reasoning = false;
                else
                    visual_reasoning = true;
            }
            //if (words_temp[j + 2] == "visual" && words_temp[j + 3] == "reasoning" && words_temp[j + 4] == "model")
            //{
            //    cout << "Setting: Visual Reasoning Model: " << visual_reasoning_model << endl;
            //}
            if (words_temp[j + 2] == "visual" && words_temp[j + 3] == "memory" && words_temp[j + 4] == "")
            {
                if (visual_memory)
                    visual_memory = false;
                else
                    visual_memory = true;
            }
            //if (words_temp[j + 2] == "visual" && words_temp[j + 3] == "memory" && words_temp[j + 4] == "directory")
            //{
            //    cout << "Setting: Visual Memory Directory: " << vision_memory_directory << endl;
            //}
            if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "one" && words_temp[j + 4] == "")
            {
                if (camera1_enabled)
                    camera1_enabled = false;
                else
                    camera1_enabled = true;
            }
            //if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "one" && words_temp[j + 4] == "fps" && words_temp[j + 5] == "")
            //{
            //    cout << "Setting: Camera 1 FPS: " << camera1_fps << endl;
            //}
            //if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "one" && words_temp[j + 4] == "resolution" && words_temp[j + 5] == "height")
            //{
            //    cout << "Setting: Camera 1 Resolution Height: " << camera1_resolution_height << endl;
            //}
            //if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "one" && words_temp[j + 4] == "resolution" && words_temp[j + 5] == "width")
            //{
            //    cout << "Setting: Camera 1 Resolution Width: " << camera1_resolution_width << endl;
            //}
            if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "two" && words_temp[j + 4] == "")
            {
                if (camera2_enabled)
                    camera2_enabled = false;
                else
                    camera2_enabled = true;
            }
            //if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "two" && words_temp[j + 4] == "fps")
            //{
            //    cout << "Setting: Camera 2 FPS: " << camera2_fps << endl;
            //}
            //if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "two" && words_temp[j + 4] == "resolution" && words_temp[j + 5] == "height" && words_temp[j + 6] == "")
            //{
            //    cout << "Setting: Camera 2 Resolution Height: " << camera2_resolution_height << endl;
            //}
            //if (words_temp[j + 2] == "camera" && words_temp[j + 3] == "two" && words_temp[j + 4] == "resolution" && words_temp[j + 5] == "width" && words_temp[j + 6] == "")
            //{
            //    cout << "Setting: Camera 2 Resolution Width: " << camera2_resolution_width << endl;
            //}
            if (words_temp[j + 2] == "speech" && words_temp[j + 3] == "commands")
            {
                if (speech_commands)
                    speech_commands = false;
                else
                    speech_commands = true;
            }
            if (words_temp[j + 2] == "action" && words_temp[j + 3] == "commands")
            {
                if (action_commands)
                    action_commands = false;
                else
                    action_commands = true;
            }
            if (words_temp[j + 2] == "vision" && words_temp[j + 3] == "commands")
            {
                if (vision_commands)
                    vision_commands = false;
                else
                    vision_commands = true;
            }
            if (words_temp[j + 2] == "phone" && words_temp[j + 3] == "commands")
            {
                if (phone_commands)
                    phone_commands = false;
                else
                    phone_commands = true;
            }
            if (words_temp[j + 2] == "visual" && words_temp[j + 3] == "thinking")
            {
                if (visual_thinking)
                    visual_thinking = false;
                else
                    visual_thinking = true;
            }
            if (words_temp[j + 2] == "computer" && words_temp[j + 3] == "use")
            {
                if (computer_use)
                    computer_use = false;
                else
                    computer_use = true;
            }
            if (words_temp[j + 2] == "reading" && words_temp[j + 3] == "")
            {
                if (reading)
                    reading = false;
                else
                    reading = true;
            }
            if (words_temp[j + 2] == "sound" && words_temp[j + 3] == "memory" && words_temp[j + 4] == "")
            {
                if (sound_memory)
                    sound_memory = false;
                else
                    sound_memory = true;
            }
            if (words_temp[j + 2] == "speech" && words_temp[j + 3] == "recognition" && words_temp[j + 4] == "")
            {
                if (speech_recognition)
                    speech_recognition = false;
                else
                    speech_recognition = true;
            }
            if (words_temp[j + 2] == "sound" && words_temp[j + 3] == "recognition" && words_temp[j + 4] == "")
            {
                if (sound_recognition)
                    sound_recognition = false;
                else
                    sound_recognition = true;
            }
            //if (words_temp[j + 2] == "sound" && words_temp[j + 3] == "directory" && words_temp[j + 4] == "")
            //{
            //    cout << "Setting: Sound Directory: " << sound_directory << endl;
            //}
            if (words_temp[j + 2] == "sound" && words_temp[j + 3] == "reasoning")
            {
                if (sound_reasoning)
                    sound_reasoning = false;
                else
                    sound_reasoning = true;
            }
            if (words_temp[j + 2] == "reading" && words_temp[j + 3] == "reasoning")
            {
                if (reading_reasoning)
                    reading_reasoning = false;
                else
                    reading_reasoning = true;
            }
            if (words_temp[j + 2] == "speech" && words_temp[j + 3] == "reasoning")
            {
                if (speech_reasoning)
                    speech_reasoning = false;
                else
                    speech_reasoning = true;
            }
            if (words_temp[j + 2] == "news" && words_temp[j + 3] == "watching")
            {
                if (news_watching)
                    news_watching = false;
                else
                    news_watching = true;
            }
            if (words_temp[j + 2] == "action" && words_temp[j + 3] == "commands")
            {
                if (action_commands)
                    action_commands = false;
                else
                    action_commands = true;
            }
            if (words_temp[j + 2] == "action" && words_temp[j + 3] == "detection")
            {
                if (action_detection)
                    action_detection = false;
                else
                    action_detection = true;
            }
            if (words_temp[j + 2] == "needs" && words_temp[j + 3] == "detection")
            {
                if (needs_detection)
                    needs_detection = false;
                else
                    needs_detection = true;
            }
            if (words_temp[j + 2] == "navigation")
            {
                if (navigation_detection)
                    navigation_detection = false;
                else
                    navigation_detection = true;
            }
            if (words_temp[j + 2] == "listening" && words_temp[j + 3] == "fallacy" && words_temp[j + 4] == "checking")
            {
                if (listening_fallacy_checking)
                    listening_fallacy_checking = false;
                else
                    listening_fallacy_checking = true;
            }
            if (words_temp[j + 2] == "listening" && words_temp[j + 3] == "bias" && words_temp[j + 4] == "checking")
            {
                if (listening_bias_checking)
                    listening_bias_checking = false;
                else
                    listening_bias_checking = true;
            }
            if (words_temp[j + 2] == "listening" && words_temp[j + 3] == "literature" && words_temp[j + 4] == "devices")
            {
                if (listening_literature_device_checking)
                    listening_literature_device_checking = false;
                else
                    listening_literature_device_checking = true;
            }
            if (words_temp[j + 2] == "listening" && words_temp[j + 3] == "axioms")
            {
                if (listening_axiom_checking)
                    listening_axiom_checking = false;
                else
                    listening_axiom_checking = true;
            }
            if (words_temp[j + 2] == "listening" && words_temp[j + 3] == "abuse")
            {
                if (listening_abuse_checking)
                    listening_abuse_checking = false;
                else
                    listening_abuse_checking = true;
            }
            if (words_temp[j + 2] == "listening" && words_temp[j + 3] == "law")
            {
                if (listening_law_checking)
                    listening_law_checking = false;
                else
                    listening_law_checking = true;
            }
            if (words_temp[j + 2] == "listening" && words_temp[j + 3] == "dictionary")
            {
                if (listening_dictionary_checking)
                    listening_dictionary_checking = false;
                else
                    listening_dictionary_checking = true;
            }
            if (words_temp[j + 2] == "ftp" && words_temp[j + 3] == "enabled")
            {
                if (ftp_enabled)
                    ftp_enabled = false;
                else
                    ftp_enabled = true;
            }
            if (words_temp[j + 2] == "llm" && words_temp[j + 3] == "server")
            {
                if (llm_server_enabled)
                    llm_server_enabled = false;
                else
                    llm_server_enabled = true;
            }
            if (words_temp[j + 2] == "whisper" && words_temp[j + 3] == "server")
            {
                if (whisper_server_enabled)
                    whisper_server_enabled = false;
                else
                    whisper_server_enabled = true;
            }
            if (words_temp[j + 2] == "driving")
            {
                if (driving_enabled)
                    driving_enabled = false;
                else
                    driving_enabled = true;
            }
        }
        else
        {
            // This command has not been implemented yet
            //return;
        }
    }
}

