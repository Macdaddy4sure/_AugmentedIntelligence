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

class _Settings
{
public:
    static void Settings();
    static bool GetTermsConditions();
    static void MySQLSettings();
    static bool GetSpeechLieDetectionEnabled();
    static void MemoryManagementSettings();
    static bool GetObjectDetectionEnable();
    static bool GetVisualReasoningEnable();
    static bool GetVisualMemoryEnable();
    //static void MemoryManagementSettings();
    //static bool GetObjectDetectionEnable();
    static bool GetSoundMemoryEnabled();
    static bool GetSpeechMemoryEnabled();
    static bool GetSpeechRecognitionEnable();
    static bool GetWorkingMemoryEnabled();
    static bool GetComputerUseEnable();
    static bool GetComputerMonitorRecognitionEnable();
    static bool GetComputerOwnedRecognitionEnabled();
    static bool GetReadingFallacyCheckEnable();
    static bool GetGPUAccellerationEnable();
    static void ComputerSettings();
    static void LLMServerSettings();
    static void WhisperServerSettings();
    //static bool GetStereoVisionEnable();
    //static bool Get2DSemanticsEnable();
    static bool GetCUDAAccellerationEnable();
    static bool GetCUDAAccellerationRemoteEnable();
    static string GetCUDAAccellerationRemoteHostname();
    static string GetTensorAccellerationRemoteCores();
    static bool GetObjectDetectionCUDAEnabled();
    static bool GetShortTermMemoryEnabled();
    static string GetShortTermMemoryTime();
    static string GetMySQLHostname();
    static string GetMySQLUsername();
    static string GetMySQLPassword();
    static string GetMySQLVisionDatabase();
    static string GetMySQLSoundDatabase();
    static string GetMySQLSpeechDatabase();
    static string GetMySQLWorkingMemoryDatabase();
    static string GetMySQLShortTermMemoryDatabase();
    static string GetMySQLLongTermMemoryDatabase();
    static bool GetPrivateComputer();
    static string GetComputerHostname();
    static string GetComputerUsername();
    static string GetComputerPassword();
    static bool GetCamera1Enable();
    static string GetCamera1();
    static bool GetCamera2Enable();
    static string GetCamera2();
    static bool GetMicrophone1Enable();
    static string GetMicrophone1Device();
    static bool GetMicrophone2Enable();
    static string GetMicrophone2Device();
    static string GetVisionDirectory();
    static string GetSoundDirectory();
    static string GetSpeechDirectory();
    static string GetVideoFrameRate();
    static string GetSoundCodec();
    static string GetSoundBitrate();
    //static string GetShortTermTime();
    static bool GetFTPEnabled();
    static string GetFTPHostname();
    static string GetFTPUsername();
    static string GetFTPPassword();
    static string GetVisionFTPDirectory();
    static string GetSoundFTPDirectory();
    static string GetVisionStorageLimit();
    static string GetSoundStorageLimit();
    static bool GetEthicsCheckEnable();
    static bool GetSmartphoneRecognitionEnable();
    static bool GetComputerUseEnabled();
    static string GetCUDAAccelerationRemoteHostname();
    static string GetCUDAAccellerationRemoteCores();
    //static int GetMemoryLimit();
    //static bool GetShortTermMemoryEnable();
    static bool GetLongTermMemoryEnabled();
    static string GetLongTermMemoryLimit();
    static bool GetSpeechLieDetection();
    static bool GetSoundMemoryEnable();
    static bool GetTensorAccelleration();
    static bool GetTensorAccellerationRemoteEnabled();
    static string GetTensorAccellerationRemoteHostname();
    static string GetTensorRemoteCores();
    static bool GetReadingEnable();
    static string GetFFMpegLocation();
    static string GetTenorAccellerationRemoteHostname();
    static string GetWorkingMemoryLimit();
    static string GetShortTermMemoryLimit();
    //static bool GetObjectDetectionEnable();
    static bool GetObjectDetectionRemoteEnabled();
    static string GetObjectDetectionRemoteHostname();
    static string GetCamera1FPS();
    static string GetCamera1Resolution();
    static string GetCamera2FPS();
    static string GetCamera2Resolution();
    static bool GetComputerMonitorRecognitionEnabled();
    static void SaveSettings();
    static void SaveSettingsFile();
    //static void SaveSettingsFTP();
    //static string GetAudioCodec();
    static string GetGPUAccellerationRemoteHostname();
    static bool GetCUDAAcellerationEnable();
    //static string GetGPUAccelerationRemoteHostname();
    static bool GetWorkingMemoryEnable();
    static bool GetEthicsCheckEnabled();
    //static void SaveSettingsComputer();
    static bool GetNewsWatchingEnable();
    static bool GetActionWatchingEnable();
    static bool GetNeedsWatchingEnable();
    static bool GetNavigationDetectionEnable();
    static bool GetSocialNeedsDetectionEnable();
};

extern bool terms_conditions;
extern bool awareness_interface;
extern bool cuda_accelleration;
extern bool cuda_accelleration_remote_enabled;
extern string cuda_accelleration_remote_hostname;
extern string cuda_accelleration_remote_cores;
extern bool tensor_accelleration;
extern bool tensor_accelleration_remote_enabled;
extern string tensor_accelleration_remote_hostname;
extern string tensor_accelleration_remote_cores;
extern bool working_memory_enabled;
extern string working_memory_limit;
extern bool short_term_memory_enabled;
extern string short_term_memory_limit;
extern bool long_term_memory_enabled;
extern string long_term_memory_limit;
extern bool speech_memory_enabled;
extern bool vision_object_detection;
extern bool vision_object_detection_cuda;
extern bool vision_object_detection_server;
extern string vision_object_detection_server_hostname;
extern string tensorflow_model;
extern string tensorflow_labels;
extern bool visual_reasoning;
extern bool visual_memory;
extern string vision_memory_directory;
extern string camera1;
extern bool camera1_enabled;
extern int camera1_fps;
extern string camera1_resolution;
extern int camera1_resolution_width;
extern int camera1_resolution_height;
extern string camera2;
extern bool camera2_enabled;
extern int camera2_fps;
extern string camera2_resolution;
extern int camera2_resolution_width;
extern int camera2_resolution_height;
extern bool speech_commands;
extern bool vision_commands;
extern bool action_commands;
extern bool phone_commands;
extern bool visual_thinking;
extern bool computer_use;
extern bool computer_monitor_recognition;
extern bool reading;
extern bool reading_fallacy_check;
extern bool sound_memory;
extern bool speech_memory;
extern bool speech_recognition;
extern bool sound_recognition;
extern bool ethics_check_enabled;
extern string sound_directory;
extern string sound_codec;
extern string sound_bitrate;
extern string speech_directory;
extern bool microphone1_enable;
extern string microphone1_device_name;
extern int sound_sample_rate;
extern int sound_channels;
extern int sound_bits_per_sample;
extern bool speech_recognition_enable;
extern int sound_recording_interval;
extern bool speech_lie_detection;
extern string short_term_memory_time;
extern bool sound_memory_enabled;
//extern string speech_activation_keyword;
//extern string speech_terminator_keyword;
extern bool vision_object_detection_remote_enabled;
//extern bool microphone1_enabled;
//extern string microphone1_device_name;
//extern bool microphone2_enabled;
//extern string microphone2_device_name;
extern bool computer_owned_recognition;
extern string ffmpeg_location;
//extern bool microphone1_enable;
//extern string microphone1_device;
//extern bool microphone2_enable;
//extern string microphone2_device;
extern bool sound_reasoning;
extern bool reading_reasoning;
extern bool speaking_reasoning;
extern string working_memory_location;
extern string short_term_memory_location;
extern string long_term_memory_location;
extern bool news_watching;
extern bool actions_watching;
extern bool action_detection;
extern bool needs_detection;
extern bool navigation_detection;
extern bool social_needs_detection;
extern bool vision_text_detection;
extern bool vision_text_recognition;
extern bool vision_face_recognition;
extern bool listening_fallacy_checking;
extern bool listening_bias_checking;
extern bool listening_literature_device_checking;
extern bool listening_axiom_checking;
extern bool listening_abuse_checking;
extern bool listening_law_checking;
extern bool listening_dictionary_checking;
extern bool watching;

// FTP Settings
extern bool ftp_enabled;
extern string ftp_hostname;
extern string ftp_username;
extern string ftp_password;
extern string ftp_vision_directory;
extern string ftp_sound_directory;
extern string ftp_vision_storage_limit;
extern string ftp_sound_storage_limit;

// Computer Settings
extern bool private_computer;
extern string computer_hostname;
extern string computer_username;
extern string computer_password;

// MySQL Settings
extern string mysql_hostname;
extern string mysql_username;
extern string mysql_password;
extern string mysql_vision_database;
extern string mysql_sound_database;
extern string mysql_speech_database;
extern string mysql_working_memory_database;
extern string mysql_short_term_memory_database;
extern string mysql_long_term_memory_database;
extern string mysql_dictionary_database;
extern string mysql_destination_database_words;
extern string mysql_destination_database_sentences;

// Whisper Server Settings
extern bool whisper_server_enabled;
extern string whisper_hostname;
extern string whisper_username;
extern string whisper_password;
//extern int mic_sample_rate;
//extern int mic_num_channels;
//extern int mic_bits_per_sample;

// LLM Server Settings
extern string speech_commands_activation;
extern string speech_commands_terminator;
extern bool llm_server_enabled;
extern string llm_hostname;
extern string llm_username;
extern string llm_password;

// Driving Settings
extern bool driving_enabled;