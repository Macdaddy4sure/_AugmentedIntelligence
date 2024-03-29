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
#include "Actions.h"
#include "Analysis.h"
#include "Argument.h"
#include "Bias.h"
#include "Computers.h"
#include "Database Functions.h"
#include "Directories.h"
#include "Driving.h"
#include "EKG.h"
#include "Ethics.h"
#include "Executive Functions.h"
#include "Fallacies.h"
#include "Gaming.h"
#include "Heuristics.h"
#include "Home Database.h"
#include "Learning.h"
#include "Long-Term Memory.h"
#include "Mathematics.h"
#include "Mind.h"
#include "Mods.h"
#include "Needs.h"
#include "NetworkingClient.h"
#include "NetworkingServer.h"
#include "NeuraLink.h"
#include "NLP.h"
#include "NLU.h"
#include "Pattern Recognition.h"
#include "Reading.h"
#include "Reference.h"
#include "Scrapers.h"
#include "Server Functions.h"
#include "Short-Term Memory.h"
#include "Smart Phone.h"
#include "Social.h"
#include "Sound.h"
#include "Speaking.h"
#include "Speech Recognition.h"
#include "Time.h"
#include "Typing.h"
#include "Variables.h"
#include "Vision.h"
#include "WikiMedia.h"
#include "Working-Memory.h"
#include "Writing.h"
#include "Settings.h"
#include "Utilities.h"

using namespace std;
using namespace filesystem;

/*
    TODO: Create a way to backup and flash all of Short Term Memory
*/

// Intelligence According to Psychology For Dummies - Page 110
// 1. Crystalized Intelligence: Comprehensive and acquired knowledge
// 2. Fluid Intelligence: Reason and problem-solving abilities
// 3. Quantitative Reasoning: Quantitative and numerical abilities. Creativity via quantitative reasoning
// 4. Reading and Writing ability: Reading and writting ability
// 5. Short-term memory: Immediate memory
// 6. Working memory: Temporary space for problem solving and other operations
// 7. Long-term storage and retrieval: Long term memory
// 8. Visual Processing: Analysis and use of information
// 9. Auditory processing: Analysis and use of arbitrary information
// 10. Processing speed: Thinking fast and automatically
// 11. Decision and reaction speed: Coming to a decision and reacting swiftly
// 12. Creativity?
// 13. Street Smarts?

// Theory of Multiple Intelligences
// 1. Analytical Intelligence: The ability to analyze, evaluate, judge, decide, choose, compare, and contrast
// 2. Creative Intelligence: The ability to generate novel or creative ways to deal with novel problems
// 3. Practical Intelligence: The type of intelligence to solve problems and think about actions of everyday life. Like Einstein tying his shoes, opening up a jar of pickles, or figuring out how to log into a streaming service or how to send a group text.

// Multiple Intelligences and Intelligence Attributes
// 1. Bodily kinesthetic ability: Michael Jordan seems to posses a lot of this ability. People high in bodily kinesthetic ability have superior hand-eye coordination, a great sense of balance, and a keen understanding of and control over the bodies while engaged in physical activities
// 2. Musical Abilities: If you can tap youyr foot and clap your hands in unison, then you got a little musical intelligence - a little. People high in musical intelligence possess he natural ability to read, write, and play music exceptionally well.
// 3. Spatial Ability: Have you ever gotten lost in your backyard? If so, you probably don't have high in spacial intelligence. This intelligence involves the ability to navigate and move around in space and the ability tl picture three dimensional scenes in your mind
// 4. Lingustic Ability: This is the traditional ability to read, write, and speak well. Poets, writers, and articulate speakers are high in this ability.
// 5. Logical-mathematical ability: This intelligenceincludes basic and complex mathematical problem solving ability.
// 6. Interpersonal ability: The gift of gab and the used-car salesman act are good indicators of interpersonal intelligence.
// 7. Intrapersonal ability: How well do you know yourself? Intrapersonal intelligence involves the ability to understand your motives, emotions, and other aspects of your personality.

// Types of Encoding Information in Intelligence

// Settings
bool terms_conditions = false;
bool cuda_accelleration = false;
bool cuda_accelleration_remote_enabled = false;
string cuda_accelleration_remote_hostname = "";
string cuda_accelleration_remote_cores = "";
bool tensor_accelleration = false;
bool tensor_accelleration_remote_enabled = false;
string tensor_accelleration_remote_hostname = "";
string tensor_accelleration_remote_cores = "";
bool working_memory_enabled = true;
string working_memory_limit = "1000";
bool short_term_memory_enabled = true;
string short_term_memory_limit = "1000";
bool long_term_memory_enabled = true;
string long_term_memory_limit = "1000";
bool speech_memory_enabled = true;
bool vision_object_detection = true;
bool vision_object_detection_cuda = false;
bool vision_object_detection_server = false;
string vision_object_detection_server_hostname = "";
bool visual_reasoning = false;
bool visual_memory = true;
string vision_memory_directory = "";
string camera1 = "Depstech webcam";
bool camera1_enabled = true;
string camera1_fps = "15";
string camera1_resolution = "3840x2160";
string camera2;
bool camera2_enabled;
string camera2_fps;
string camera2_resolution;
bool computer_use = false;
bool computer_monitor_recognition = false;
bool reading = true;
bool reading_fallacy_check = true;
bool sound_memory = true;
bool speech_memory = true;
bool speech_recognition = true;
bool ethics_check_enabled = false;
string sound_directory = "J:/sound_memory/";
string sound_codec = "flac";
string sound_bitrate = "1000";
string speech_directory = "J:/speech_directory/";
bool speech_recognition_enable = true;
bool speech_lie_detection = false;
string short_term_memory_time = "1000";
bool sound_memory_enabled = true;
bool vision_object_detection_remote_enabled;
bool microphone1_enabled = true;
bool microphone1_enable = true;
string microphone1_device = "Microphone (Depstech webcam MIC)";
string microphone1_device_name = "Microphone (Depstech webcam MIC)";
bool microphone2_enabled = false;
string microphone2_device_name = "";
bool computer_owned_recognition = "";
string ffmpeg_location = "";
bool microphone2_enable = false;
string microphone2_device = "";
bool sound_reasoning = false;
bool reading_reasoning = false;
bool speaking_reasoning = false;
string working_memory_location = "J:/working_memory/";
string short_term_memory_location = "J:/short_term_memory/";
string long_term_memory_location = "J:/long_term_memory/";
bool news_watching = false;
bool actions_watching = false;
bool action_detection = false;
bool needs_detection = false;
bool navigation_detection = false;
bool social_needs_detection = false;
bool vision_text_detection = false;
bool vision_text_recognition = false;
bool vision_face_recognition = false;

// FTP Settings
bool ftp_enabled = false;
string ftp_hostname;
string ftp_username;
string ftp_password;
string ftp_vision_directory;
string ftp_sound_directory;
string ftp_vision_storage_limit;
string ftp_sound_storage_limit;

// Computer Settings
bool private_computer;
string computer_hostname;
string computer_username;
string computer_password;

// MySQL Settings
string mysql_hostname = "MARS";
string mysql_username = "root";
string mysql_password = "Anaheim92801%";
string mysql_vision_database = "vision";
string mysql_sound_database = "sound";
string mysql_speech_database = "speech";
string mysql_working_memory_database = "working_memory";
string mysql_short_term_memory_database = "short_term_memory";
string mysql_long_term_memory_database = "long_term_memory";
string mysql_dictionary_database = "dictionary";
string mysql_destination_database_words = "wikipedia_pos_tagged_words";
string mysql_destination_database_sentences = "wikipedia_pos_tagged_sentences";

// Driving Settings
bool driving_enabled = false;
float driving_head_position;
float driving_left_mirror;
float driving_right_mirror;
float driving_center_mirror;

int main()
{
    string input;

    // Debug
    //_DatabaseFunctions::PrintWikipedia("NATO");

    ////MySQL Settings
    ////mysql_hostname = _Settings::GetMySQLHostname();
    ////cout << "MySQL Hostname Enabled: " << mysql_hostname << endl;
    //mysql_username = _Settings::GetMySQLUsername();
    ////cout << "MySQL Username: " << mysql_username << endl;
    //mysql_password = _Settings::GetMySQLPassword();
    ////cout << "MySQL Password: " << mysql_password << endl;
    //mysql_vision_database = _Settings::GetMySQLVisionDatabase();
    ////cout << "MySQL Vision Database: " << mysql_vision_database << endl;
    //mysql_sound_database = _Settings::GetMySQLSoundDatabase();
    ////cout << "MySQL Sound Database: " << mysql_sound_database << endl;
    //mysql_speech_database = _Settings::GetMySQLSpeechDatabase();
    ////cout << "MySQL Speech Database: " << mysql_speech_database << endl;
    //mysql_working_memory_database = _Settings::GetMySQLWorkingMemoryDatabase();
    ////cout << "MySQL Working Memory Database: " << mysql_working_memory_database << endl;
    //mysql_short_term_memory_database = _Settings::GetMySQLShortTermMemoryDatabase();
    ////cout << "MySQL Short-Term Memory Database: " << mysql_short_term_memory_database << endl;
    //mysql_long_term_memory_database = _Settings::GetMySQLLongTermMemoryDatabase();
    ////cout << "MySQL Long-Term Memory Database: " << mysql_long_term_memory_database << endl;

    ////// Settings
    //terms_conditions = _Settings::GetTermsConditions();
    ////cout << "Terms Conditions: " << terms_conditions << endl;
    //working_memory_enabled = _Settings::GetWorkingMemoryEnabled();
    ////cout << "Working Memory Limit: " << working_memory_limit << endl;
    //working_memory_limit = _Settings::GetWorkingMemoryLimit();
    ////cout << "Short Term Memory: " << short_term_memory_enabled << endl;
    //short_term_memory_enabled = _Settings::GetShortTermMemoryEnabled();
    ////cout << "STM Time: " << short_term_memory_time << endl;
    //short_term_memory_time = _Settings::GetShortTermMemoryTime();
    ////cout << "STM Enabled: " << short_term_memory_time << endl;
    //long_term_memory_enabled = _Settings::GetLongTermMemoryEnabled();
    ////cout << "STM Time: " << long_term_memory_enabled << endl;
    //long_term_memory_limit = _Settings::GetLongTermMemoryLimit();
    ////cout << "LTM Enabled: " << long_term_memory_limit << endl;
    //sound_memory_enabled = _Settings::GetSoundMemoryEnabled();
    ////cout << "LTM Limit: " << sound_memory_enabled << endl;
    //speech_memory = _Settings::GetSpeechMemoryEnabled();
    ////cout << "Speech Memory: " << speech_memory << endl;
    //speech_recognition = _Settings::GetSpeechRecognitionEnable();
    ////cout << "SM Enabled: " << speech_recognition << endl;
    //speech_lie_detection = _Settings::GetSpeechLieDetectionEnabled();
    ////cout << "Speech Recognition Enabled: " << speech_lie_detection << endl;
    //sound_directory = _Settings::GetSoundDirectory();
    ////cout << "Speech Lie Detection: " << sound_directory << endl;
    //sound_codec = _Settings::GetSoundCodec();
    ////cout << "Sound Directory: " << sound_codec << endl;
    //sound_bitrate = _Settings::GetSoundBitrate();
    ////cout << "Sound Codec: " << sound_bitrate << endl;
    //speech_directory = _Settings::GetSpeechRecognitionEnable();
    ////cout << "Speech Directory: " << speech_directory << endl;
    //ethics_check_enabled = _Settings::GetEthicsCheckEnabled();
    ////cout << "Speech Directory: " << ethics_check_enabled << endl;
    //cuda_accelleration = _Settings::GetCUDAAccellerationEnable();
    ////cout << "Ethics Check Enabled: " << cuda_accelleration << endl;
    //cuda_accelleration_remote_enabled = _Settings::GetCUDAAccellerationRemoteEnable();
    ////cout << "CUDA Accelleration: " << cuda_accelleration_remote_enabled << endl;
    //cuda_accelleration_remote_hostname = _Settings::GetCUDAAccellerationRemoteHostname();
    ////cout << "CUDA Accelleration Remote Enabled: " << cuda_accelleration_remote_hostname << endl;
    //cuda_accelleration_remote_cores = _Settings::GetCUDAAccellerationRemoteCores();
    ////cout << "CUDA Accelleration Remote Hostname: " << cuda_accelleration_remote_cores << endl;
    //tensor_accelleration = _Settings::GetTensorAccelleration();
    ////cout << "CUDA Accelleration Remote Cores: " << tensor_accelleration << endl;
    //tensor_accelleration_remote_enabled = _Settings::GetTensorAccellerationRemoteEnabled();
    ////cout << "Tensor Accelleration: " << tensor_accelleration_remote_enabled << endl;
    //tensor_accelleration_remote_hostname = _Settings::GetTenorAccellerationRemoteHostname();
    ////cout << "Tensor Accelleration Remote Hostname: " << tensor_accelleration_remote_hostname << endl;
    //tensor_accelleration_remote_cores = _Settings::GetTensorAccellerationRemoteCores();
    ////cout << "Tensor Accelleration Remote Cores: " << tensor_accelleration_remote_cores << endl;
    //vision_object_detection = _Settings::GetObjectDetectionEnable();
    ////cout << "Visual Object Detection: " << vision_object_detection << endl;
    //vision_object_detection_cuda = _Settings::GetObjectDetectionCUDAEnabled();
    ////cout << "Vision Object Detection CUDA: " << vision_object_detection_cuda << endl;
    //vision_object_detection_remote_enabled = _Settings::GetObjectDetectionRemoteEnabled();
    ////cout << "Vision Object Detection Remote Enabled: " << vision_object_detection_remote_enabled << endl;
    //vision_object_detection_server_hostname = _Settings::GetObjectDetectionRemoteHostname();
    ////cout << "Vision Object Detection Server Hostname: " << vision_object_detection_server_hostname << endl;
    //visual_reasoning = _Settings::GetVisualReasoningEnable();
    ////cout << "Visual Reasoning: " << visual_reasoning << endl;
    //visual_memory = _Settings::GetVisualMemoryEnable();
    ////cout << "Visual Memory: " << visual_memory << endl;
    //vision_memory_directory = _Settings::GetVisionDirectory();
    ////cout << "Vision Memory Directory: " << vision_memory_directory << endl;
    //camera1_enabled = _Settings::GetCamera1Enable();
    ////cout << "Camera1 Enabled: " << camera1_enabled << endl;
    //camera1 = _Settings::GetCamera1();
    ////cout << "Camera 1 Name: " << camera1 << endl;
    //camera1_fps = _Settings::GetCamera1FPS();
    ////cout << "Camera1_fps: " << camera1_fps << endl;
    //camera1_resolution = _Settings::GetCamera1Resolution();
    ////cout << "Camera 1 Resolution: " << camera1_resolution << endl;
    //camera2_enabled = _Settings::GetCamera2Enable();
    ////cout << "Camera2 Enabled: " << camera2_enabled << endl;
    //camera2 = _Settings::GetCamera2();
    ////cout << "Camera 2 Enabled: " << camera2 << endl;
    //camera2_fps = _Settings::GetCamera2FPS();
    ////cout << "Camera 2 FPS : " << camera2_fps << endl;
    //camera2_resolution = _Settings::GetCamera2Resolution();
    ////cout << "Camera 2 Resolution: " << camera2_resolution << endl;
    //microphone1_enable = _Settings::GetMicrophone1Enable();
    ////cout << "Microphone Enabled: " << microphone1_enable << endl;
    //microphone1_device = _Settings::GetMicrophone1Device();
    ////cout << "Microphone 1 Device: " << microphone1_device << endl;
    //microphone2_enable = _Settings::GetMicrophone2Enable();
    ////cout << "Microphone 2 Enabled: " << microphone2_enable << endl;
    //microphone2_device = _Settings::GetMicrophone2Device();
    ////cout << "Microphone 2 Device Name: " << microphone2_device << endl;
    //computer_use = _Settings::GetComputerUseEnabled();
    ////cout << "Computer Use: " << computer_use << endl;
    //computer_monitor_recognition = _Settings::GetComputerMonitorRecognitionEnabled();
    ////cout << "Computer Monitor Recognition: " << computer_monitor_recognition << endl;
    //computer_owned_recognition = _Settings::GetComputerOwnedRecognitionEnabled();
    //cout << "Computer Owned Recognition: " << computer_owned_recognition << endl;
    //reading = _Settings::GetReadingEnable();
    //cout << "Reading: " << reading << endl;
    //reading_fallacy_check = _Settings::GetReadingFallacyCheckEnable();
    //cout << "Reading Fallacy Check: " << reading_fallacy_check << endl;
    //ffmpeg_location = _Settings::GetFFMpegLocation();
    //cout << "FFMpeg Location: " << ffmpeg_location << endl;
    //microphone1_enable = _Settings::GetMicrophone1Enable();
    //cout << "Microphone 1 Enabled: " << microphone1_enable << endl;
    //microphone1_device = _Settings::GetMicrophone1Device();
    //cout << "Microphone 1 Name: " << microphone1_device << endl;
    //microphone2_enable = _Settings::GetMicrophone2Enable();
    //cout << "Microphone 2 Enabled: " << microphone2_enable << endl;
    //microphone2_device = _Settings::GetMicrophone2Device();
    //cout << "Microphone 2 Name: " << microphone2_device << endl;
    //news_watching = _Settings::GetNewsWatchingEnable();
    //cout << "News Watching: " << news_watching << endl;
    //actions_watching = _Settings::GetActionWatchingEnable();
    //cout << "Actions Detection: " << actions_watching << endl;
    //needs_detection = _Settings::GetNeedsWatchingEnable();
    //cout << "Needs Detection: " << needs_detection << endl;
    //navigation_detection = _Settings::GetNavigationDetectionEnable();
    //cout << "Navigation Detection: " << navigation_detection << endl;
    //social_needs_detection = _Settings::GetSocialNeedsDetectionEnable();
    //cout << "Social Needs Detection: " << social_needs_detection << endl;

    ////FTP Settings
    //ftp_enabled = _Settings::GetFTPEnabled();
    //cout << "FTP Enabled: " << ftp_enabled << endl;
    //ftp_hostname = _Settings::GetFTPHostname();
    //cout << "FTP Hostname: " << ftp_hostname << endl;
    //ftp_username = _Settings::GetFTPUsername();
    //cout << "FTP Username: " << ftp_username << endl;
    //ftp_password = _Settings::GetFTPPassword();
    //cout << "FTP Password: " << ftp_password << endl;
    //ftp_vision_directory = _Settings::GetVisionFTPDirectory();
    //cout << "FTP Vision Directory: " << ftp_vision_directory << endl;
    //ftp_sound_directory = _Settings::GetSoundFTPDirectory();
    //cout << "FTP Sound Directory: " << ftp_sound_directory << endl;

    ////Computer Settings
    //private_computer = _Settings::GetPrivateComputer();
    //cout << "Private Computer: " << private_computer << endl;
    //computer_hostname = _Settings::GetComputerHostname();
    //cout << "Computer Hostname: " << computer_hostname << endl;
    //computer_username = _Settings::GetComputerUsername();
    //cout << "Computer Username: " << computer_username << endl;
    //computer_password = _Settings::GetComputerPassword();
    //cout << "Computer Password: " << computer_password << endl;

    //_AI::InitDatabases();

    while (!terms_conditions)
    {
        system("cls");

        cout << endl;
        cout << "**RECORDING DISCLAIMER**" << endl;
        cout << endl;
        cout << "One-Party Consent: If the consent of one party is required, you can record a conversation if you’re a party to the conversation." << endl;
        cout << "If you’re not a party to the conversation, you can record a conversation or phone call provided one party consents to it after having full" << endl;
        cout << "knowledge and notice that the conversation will be recorded." << endl;
        cout << endl;
        cout << "All-Party Consent: consent of everybody involved in a conversation or phone call before the conversation can be recorded." << endl;
        cout << endl;
        cout << "Consent: What constitutes “consent” is also an issue of contention when you are considering recording a conversation." << endl;
        cout << "In some states, “consent” is given if the parties to the call are clearly notified that the conversation will be recorded, " << endl;
        cout << "and they engage in the conversation anyway.Their consent is implied." << endl;
        cout << endl;
        cout << "Exceptions: Nearly all states include an extensive list of exceptions to their consent requirements." << endl;
        cout << "Common exceptions found in a majority of states’ laws include recordings captured by police, court order, communication service providers, emergency services, etc." << endl;
        cout << "Generally, it is permissible to record conversations if all parties to the conversation are awareand consent to the interception of the communication." << endl;
        cout << "There are certain limited exceptions to the general prohibition against electronic surveillance.For example, so - called \"providers of wire or electronic " << endl;
        cout << "communication service\" (e.g., telephone companies and the like) and law enforcement in the furtherance of criminal investigative activities have certain abilities to eavesdrop." << endl;
        cout << endl;
        cout << "Federal: One-Party" << endl;
        cout << "Alabama: One-Party" << endl;
        cout << "Alaska: One-Party" << endl;
        cout << "Arizona: One-Party" << endl;
        cout << "Arkansas: One-Party" << endl;
        cout << "California: All-Parties" << endl;
        cout << "Colorado: Mixed" << endl;
        cout << "Connecticut: Mixed" << endl;
        cout << "Delaware: All-Parties" << endl;
        cout << "District of Columbia: One-Party" << endl;
        cout << "Florida: All-Parties" << endl;
        cout << "Georgia: One-Party" << endl;
        cout << "Hawaii: One-Party" << endl;
        cout << "Idaho: One-Party" << endl;
        cout << "Illinois: All-Parties" << endl;
        cout << "Indiana: One-Party" << endl;
        cout << "Iowa: One-Party" << endl;
        cout << "Kansas: One-Party" << endl;
        cout << "Kentucky: One-Party" << endl;
        cout << "Louisiana: One-Party" << endl;
        cout << "Maine: One-Party" << endl;
        cout << "Maryland: All-Parties" << endl;
        cout << "Massachusetts: All-Parties" << endl;
        cout << "Michigan: One-Party" << endl;
        cout << "Minnesota: One-Party" << endl;
        cout << "Mississippi: One-Party" << endl;
        cout << "Missouri: One-Party" << endl;
        cout << "Montana: All-Parties" << endl;
        cout << "Nebraska: One-Party" << endl;
        cout << "Nevada: Mixed" << endl;
        cout << "New Hampshire: All-Parties" << endl;
        cout << "New Jersey: One-Party" << endl;
        cout << "New Mexico: One-Party" << endl;
        cout << "New York: One-Party" << endl;
        cout << "North Carolina: One-Party" << endl;
        cout << "North Dakota: One-Party" << endl;
        cout << "Ohio: One-Party" << endl;
        cout << "Oklahoma: One-Party" << endl;
        cout << "Oregon: Mixed" << endl;
        cout << "Pennsylvania: All-Parties" << endl;
        cout << "Rhode Island: One-Party" << endl;
        cout << "South Carolina: One-Party" << endl;
        cout << "South Dakota: One-Party" << endl;
        cout << "Tennessee: One-Party" << endl;
        cout << "Texas: One-Party" << endl;
        cout << "Utah: One-Party" << endl;
        cout << "Vermont: No statutes" << endl;
        cout << "Virginia: One-Party" << endl;
        cout << "Washington: All-Parties" << endl;
        cout << "West Virginia: One-Party" << endl;
        cout << "Wisconsin: One-Party" << endl;
        cout << "Wyoming: One-Party" << endl;
        cout << endl;
        cout << "**Limitation of Liability**: The author of this program and Macdaddy4sure.com are not liable if this software is used illegally or to be the cause of illegal activity." << endl;
        cout << endl;
        cout << "Do you accept these terms? [y/n]: ";
        getline(cin, input);

        if (input == "y" || input == "Y")
        {
            terms_conditions = true;
        }
        else if (input == "n" || input == "N")
        {
            terms_conditions = false;
        }
        else
        {
            cout << "Invalid Input..." << endl;
        }
    }

    while (true)
    {
        system("cls");

        cout << endl;
        cout << "=========== Main Menu =============" << endl;
        cout << "| 1.  Run Program                 |" << endl;
        cout << "| License. Show License           |" << endl;
        cout << "-----------------------------------" << endl;
        cout << "| 0.  Settings                    |" << endl;
        cout << "| 10. FTP Settings                |" << endl;
        cout << "| 11. MySQL Settings              |" << endl;
        cout << "| 12. Computer Settings           |" << endl;
        cout << "-----------------------------------" << endl;
        cout << endl;
        cout << "Current Settings" << endl;
        if (working_memory_enabled)
            cout << "Working Memory: True" << endl;
        else
            cout << "Working Memory: False" << endl;
        if (short_term_memory_enabled)
            cout << "Short Term Memory: True" << endl;
        else
            cout << "Short Term Memory: False" << endl;
        if (long_term_memory_enabled)
            cout << "Long Term Memory: True" << endl;
        else
            cout << "Long Term Memory: False" << endl;
        if (visual_memory)
            cout << "Visual Memory: True" << endl;
        else
            cout << "Visual Memory: False" << endl;
        if (sound_memory)
            cout << "Sound Memory: True" << endl;
        else
            cout << "Sound Memory: False" << endl;
        if (speech_memory)
            cout << "Speech Memory: True" << endl;
        else
            cout << "Speech Memory: False" << endl;
        if (ethics_check_enabled)
            cout << "Ethics Check: True" << endl;
        else
            cout << "Ethics Check: False" << endl;
        if (cuda_accelleration)
            cout << "CUDA Accelleration: True" << endl;
        else
            cout << "CUDA Accelleration: False" << endl;
        if (cuda_accelleration_remote_enabled)
            cout << "CUDA Accelleration Remote: True" << endl;
        else
            cout << "CUDA Accelleration Remote: False" << endl;
        if (tensor_accelleration)
            cout << "Tensor Accelleration: True" << endl;
        else
            cout << "Tensor Accelleraton: False" << endl;
        if (tensor_accelleration_remote_enabled)
            cout << "Tensor Accelleration Remote: True" << endl;
        else
            cout << "Tensor Accelleration Remote: False" << endl;
        if (vision_object_detection)
            cout << "Visual Object Detection: True" << endl;
        else
            cout << "Visual Object Detection: False" << endl;
        if (vision_object_detection_cuda)
            cout << "Vision Object Detection CUDA: True" << endl;
        else
            cout << "Vision Object Detection CUDA: False" << endl;
        if (vision_object_detection_remote_enabled)
            cout << "Visual Object Detection Remote: True" << endl;
        else
            cout << "Visual Object Detection Remote: False" << endl;
        if (visual_reasoning)
            cout << "Visual Reasoning: True" << endl;
        else
            cout << "Visual Reasoning: False" << endl;
        if (sound_reasoning)
            cout << "Sound Reasoning: True" << endl;
        else
            cout << "Sound Reasoning: False" << endl;
        if (reading_reasoning)
            cout << "Reading Reasoning: True" << endl;
        else
            cout << "Reading Reasoning: False" << endl;
        if (speaking_reasoning)
            cout << "Speaking Reasoing: True" << endl;
        else
            cout << "Speaking Reasoning: False" << endl;
        if (camera1_enabled)
            cout << "Camera 1 Enabled: True" << endl;
        else
            cout << "Camera 1 Enabled: False" << endl;
        if (camera2_enabled)
            cout << "Camera 2 Enabled: True" << endl;
        else
            cout << "Camera 2 Enabled: False" << endl;
        if (microphone1_enable)
            cout << "Microphone 1 Enabled: True" << endl;
        else
            cout << "Microphone 1 Enabled: False" << endl;
        if (microphone2_enable)
            cout << "Microphone 2 Enabled: True" << endl;
        else
            cout << "Microphone 2 Enabled: False" << endl;
        if (speech_recognition)
            cout << "Speech Recognition: True" << endl;
        else
            cout << "Speech Recognition: False" << endl;
        if (computer_use)
            cout << "Computer Use: True" << endl;
        else
            cout << "Computer Use: False" << endl;
        if (computer_monitor_recognition)
            cout << "Computer Monitor Recognition: True" << endl;
        else
            cout << "Computer Monitor Recognition: False" << endl;
        if (computer_owned_recognition)
            cout << "Computer Owned Recognition: True" << endl;
        else
            cout << "Computer Owned Recognition: False" << endl;
        if (reading)
            cout << "Reading: True" << endl;
        else
            cout << "Reading: False" << endl;
        if (reading_fallacy_check)
            cout << "Fallacy Checking: True" << endl;
        else
            cout << "Fallacy Checking: False" << endl;
        cout << "Visual Memory Location: " << vision_memory_directory << endl;
        cout << "Sound Memory Location: " << sound_directory << endl;
        cout << "Working Memory Limit: " << working_memory_limit << " MB" << endl;
        cout << "Working Memory Location: " << working_memory_location << endl;
        cout << "Short Term Memory Limit: " << short_term_memory_limit << " GB" << endl;
        cout << "Short Term Memory Location: " << short_term_memory_location << endl;
        cout << "Long Term Memory Limit: " << long_term_memory_limit << " GB" << endl;
        cout << "Long Term Memory Location: " << long_term_memory_location << endl;
        cout << "CUDA Accelleration Remote Hostname: " << cuda_accelleration_remote_hostname << endl;
        cout << "CUDA Acelleration Remote Cores: " << cuda_accelleration_remote_cores << endl;
        cout << "Tensor Accelleration Remote Hostname: " << tensor_accelleration_remote_hostname << endl;
        cout << "Tensor Accelleration Remote Cores: " << tensor_accelleration_remote_cores << endl;
        cout << "FFMpeg Location: " << ffmpeg_location << endl;
        cout << "Camera 1 Device: " << camera1 << endl;
        cout << "Camera 1 FPS: " << camera1_fps << endl;
        cout << "Camera 1 Resolution: " << camera1_resolution << endl;
        cout << "Camera 2 Device: " << camera2 << endl;
        cout << "Camera 2 FPS: " << camera2_fps << endl;
        cout << "Camera 2 Resolution: " << camera2_resolution << endl;
        cout << "Microphone 1 Device: " << microphone1_device_name << endl;
        cout << "Microphone 2 Device: " << microphone2_device_name << endl;
        cout << "Sound Codec: " << sound_codec << endl;
        cout << "Sound Bitrate: " << sound_bitrate << " Kb/s" << endl;
        if (news_watching)
            cout << "News Watching: True" << endl;
        else
            cout << "News Watching: False" << endl;
        if (actions_watching)
            cout << "Actions Watching: True" << endl;
        else
            cout << "Actions Watching: False" << endl;
        if (needs_detection)
            cout << "Needs Detection: True" << endl;
        else
            cout << "Needs Detection: False" << endl;
        if (navigation_detection)
            cout << "Navigation Detection: True" << endl;
        else
            cout << "Navigation Detection: false" << endl;
        if (social_needs_detection)
            cout << "Social Needs Detection: True" << endl;
        else
            cout << "Social Needs Detection: False" << endl;
        cout << endl;
        cout << "Your Selection: ";
        getline(cin, input);

        if (input == "1")
        {
            _AI::InitThreads();
        }
        else if (input == "0")
        {
            _Settings::Settings();
        }
        else if (input == "10")
        {
            _Settings::MemoryManagementSettings();
        }
        else if (input == "11")
        {
            _Settings::MySQLSettings();
        }
        else if (input == "12")
        {
            _Settings::ComputerSettings();
        }
        else if (input == "license" || input == "LICENSE" || input == "License")
        {
            _Utilities::PrintLicense();
            cout << endl;
            cout << "Press Any Key to Continue..." << endl;
            cin.get();
        }
        else
        {
            cout << "You have entered an invalid option..." << endl;
        }
    }
}

// The following function will create threads for senses
void _AI::InitThreads()
{
    //thread CurrentAction(_Actions::GetCurrentAction);
    //thread SettingsThread(_Settings::Settings);
    /*_Reference::InitReference();*/
    // InitLists
    if (short_term_memory_enabled)
    {
        thread short_term_memory(_ShortTermMemory::ShortTermMemory);

        //if (sound_memory)
        //{
        //    thread soundRAW(_Sound::SoundRAW);
        //    //soundRAW.join();

        //    if (speech_recognition)
        //    {
        //        if (sound_reasoning)
        //        {
        //            //thread sound_reasoning(_Sound::SoundReasoning);
        //        }
        //        if (speech_lie_detection)
        //        {
        //            //thread speech_recognition(_SpeechRecognition::SpeechRecognition);
        //            //thread lie_detection;
        //        }
        //        else
        //        {
        //            //thread speech_recognition;
        //        }
        //    }
        //}
        //if (visual_memory)
        //{
        //    if (camera1_enabled)
        //    {
        //        thread vision_thread(_Vision::VisionRawCamera1);

        //        if (vision_object_detection)
        //        {
        //            if (vision_object_detection_cuda)
        //            {
        //                if (vision_object_detection_remote_enabled)
        //                {
        //                    //thread vision_object_detection_remote_cuda;
        //                }
        //                else
        //                {
        //                    //thread vision_object_detection_cuda;
        //                }
        //            }
        //            if (tensor_accelleration)
        //            {
        //                if (tensor_accelleration_remote_enabled)
        //                {
        //                    //thread tensor_accelleration_remote;
        //                }
        //                else
        //                {
        //                    //thread tensor_accelleration;
        //                }
        //            }
        //            else
        //            {
        //                thread ObjectDetectionThread(_Vision::ObjectDetection);
        //            }
        //        }
        //        if (reading)
        //        {
        //            thread reading(_Reading::Reading);

        //            if (reading_fallacy_check)
        //            {
        //                //thread reading_fallacy_check();
        //            }
        //        }
        //    }
        //    if (camera2_enabled)
        //    {
        //        thread visionRAW2(_Vision::VisionRawCamera2);
        //        thread visionMySQL2(_Vision::MySQLVisionRAWCamera2);
        //        //visionRAW2.join();
        //        //visionMySQL2.join();
        //    }
        //    if (visual_reasoning)
        //    {
        //        //thread visual_reasoning(_Vision::VisualReasoning);
        //    }
        //}
    }
    if (working_memory_enabled)
    {
        thread working_memory(_WorkingMemory::WorkingMemory);
    }
    if (long_term_memory_enabled)
    {
        //thread long_term_memory(_LongTermMemory::LongTermMemory);
    }
    if (vision_text_detection)
    {

    }
    if (vision_text_recognition)
    {

    }
    if (vision_face_recognition)
    {

    }
    
    if (news_watching)
    {
        //thread newsWatchingScraper(_NLU::NewsWatchingScraper);
    }
    if (action_detection)
    {
        //thread action_watching;
        //thread visual_reasoning;

        if (ethics_check_enabled)
        {
            //thread ethics_check;
            //thread visual_reasoning;
        }
        if (computer_use)
        {
            if (computer_monitor_recognition)
            {
                //thread computer_monitor_recognition;
            }
            if (computer_owned_recognition)
            {
                //thread computer_owned_recognition;
            }
        }
        // Check if the user is watching or playing 
    }
    if (ftp_enabled)
    {
        //thread memoryManagement(_DatabaseFunctions::MemoryManagement);
        //memoryManagement.join();
    }

    //thread ConceptualLearning1 (ConceptualLearningWords);

    // thread reading (Reading);
    // thread writing (Writing);
    // thread computer (Computer);
    // thread speaking (Speaking);
    // thread memorySearch (MemorySearch); // Should memorySearch be initialized with its own thread or should it be called from recognition of another sense?
    // thread memoryAnalysis (MemoryAnalysis);

    //ConceptualLearning1.join();
    // reading.join();
    // writing.join();
    // computer.join();
    // speaking.join();
    // memorySearch.join();
    // memoryAnalysis.join();
}

// Purpose: Load certain data into memory
// 1. Fallacies
// 2. Scientific research concepts
// 3. Rationalism concepts
// 4. Desktop support and computer solutions
//      a. C/C++
//      b. Other verbs
//      c. Work and household tasks
void _AI::InitDatabases()
{
    
}

string _AI::getOsName()
{
    #ifdef _WIN32
        return "Windows 32-bit";
    #elif _WIN64
        return "Windows 64-bit";
    #elif __APPLE__ || __MACH__
        return "Mac OSX";
    #elif __linux__
        return "Linux";
    #elif __FreeBSD__
        return "FreeBSD";
    #elif __unix || __unix__
        return "Unix";
    #else
        return "Other";
    #endif
}