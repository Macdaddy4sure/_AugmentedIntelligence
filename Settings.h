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
    static int GetMemoryLimit();
    static bool GetShortTermMemoryEnable();
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
    //static void SaveSettingsFTP();
    //static string GetAudioCodec();
    static string GetGPUAccellerationRemoteHostname();
    static bool GetCUDAAcellerationEnable();
    static string GetGPUAccelerationRemoteHostname();
    static bool GetWorkingMemoryEnable();
    static bool GetEthicsCheckEnabled();
    static void SaveSettingsComputer();
    static bool GetNewsWatchingEnable();
    static bool GetActionWatchingEnable();
    static bool GetNeedsWatchingEnable();
    static bool GetNavigationDetectionEnable();
    static bool GetSocialNeedsDetectionEnable();
};

static bool terms_conditions;
static bool cuda_accelleration;
static bool cuda_accelleration_remote_enabled;
static string cuda_accelleration_remote_hostname;
static string cuda_accelleration_remote_cores;
static bool tensor_accelleration;
static bool tensor_accelleration_remote_enabled;
static string tensor_accelleration_remote_hostname;
static string tensor_accelleration_remote_cores;
static bool working_memory_enabled;
static string working_memory_limit;
static bool short_term_memory_enabled;
static string short_term_memory_limit;
static bool long_term_memory_enabled;
static string long_term_memory_limit;
static bool speech_memory_enabled;
static bool vision_object_detection;
static bool vision_object_detection_cuda;
static bool vision_object_detection_server;
static string vision_object_detection_server_hostname;
static bool visual_reasoning;
static bool visual_memory;
static string vision_memory_directory;
static string camera1;
static bool camera1_enabled;
static string camera1_fps;
static string camera1_resolution;
static string camera2;
static bool camera2_enabled;
static string camera2_fps;
static string camera2_resolution;
static bool computer_use;
static bool computer_monitor_recognition;
static bool reading;
static bool reading_fallacy_check;
static bool sound_memory;
static bool speech_memory;
static bool speech_recognition;
static bool ethics_check_enabled;
static string sound_directory;
static string sound_codec;
static string sound_bitrate;
static string speech_directory;
static bool speech_recognition_enable;
static bool speech_lie_detection;
static string short_term_memory_time;
static bool sound_memory_enabled;
static bool vision_object_detection_remote_enabled;
static bool microphone1_enabled;
static string microphone1_device_name;
static bool microphone2_enabled;
static string microphone2_device_name;
static bool computer_owned_recognition;
static string ffmpeg_location;
static bool microphone1_enable;
static string microphone1_device;
static bool microphone2_enable;
static string microphone2_device;
static bool sound_reasoning;
static bool reading_reasoning;
static bool speaking_reasoning;
static string working_memory_location;
static string short_term_memory_location;
static string long_term_memory_location;
static bool news_watching;
static bool actions_watching;
static bool action_detection;
static bool needs_detection;
static bool navigation_detection;
static bool social_needs_detection;

// FTP Settings
static bool ftp_enabled;
static string ftp_hostname;
static string ftp_username;
static string ftp_password;
static string ftp_vision_directory;
static string ftp_sound_directory;
static string ftp_vision_storage_limit;
static string ftp_sound_storage_limit;

// Computer Settings
static bool private_computer;
static string computer_hostname;
static string computer_username;
static string computer_password;

// MySQL Settings
static string mysql_hostname = "MOON.CROCKETT.AI";
static string mysql_username = "tyler";
static string mysql_password = "Anaheim92801%";
static string mysql_vision_database = "vision";
static string mysql_sound_database = "sound";
static string mysql_speech_database = "speech";
static string mysql_working_memory_database = "working_memory";
static string mysql_short_term_memory_database = "short_term_memory";
static string mysql_long_term_memory_database = "long_term_memory";