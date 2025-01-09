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
#include "Actions.hpp"
#include "Analysis.hpp"
#include "Argument.hpp"
#include "Awareness.hpp"
#include "Bias.hpp"
#include "Computers.hpp"
#include "Database Functions.hpp"
#include "Directories.hpp"
#include "Driving.hpp"
#include "EKG.hpp"
#include "Ethics.hpp"
#include "Executive Functions.hpp"
#include "Fallacy.hpp"
#include "Gaming.hpp"
#include "Heuristics.hpp"
#include "Home Database.hpp"
#include "Large Language Models.hpp"
#include "Learning.hpp"
#include "Listening.hpp"
#include "Long-Term Memory.hpp"
#include "Mathematics.hpp"
#include "Mind.hpp"
#include "Mods.hpp"
#include "Needs.hpp"
#include "NetworkingClient.hpp"
#include "NetworkingServer.hpp"
#include "NeuraLink.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Parsers.hpp"
#include "Pattern Recognition.hpp"
#include "Reading.hpp"
#include "Reference.hpp"
#include "Scrapers.hpp"
#include "Server Functions.hpp"
#include "Short-Term Memory.hpp"
#include "Smart Phone.hpp"
#include "Speech Commands.hpp"
#include "Social.hpp"
#include "Sound.hpp"
#include "Speech.hpp"
#include "Speech Recognition.hpp"
#include "Time.hpp"
#include "Typing.hpp"
#include "Variables.hpp"
#include "Vision.hpp"
#include "Whisper.hpp"
#include "WikiMedia.hpp"
#include "Working-Memory.hpp"
#include "Writing.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;
using namespace filesystem;

/*
    TODO: Create a function for converting the long_time array to a date string
    Create a function converting long times to a date string
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
bool terms_conditions = true;
bool awareness_interface = true;
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
string visual_reasoning_model;
bool visual_memory = true;
string vision_memory_directory = "D:/visual_memory";
string camera1 = "Depstech webcam";
bool camera1_enabled = true;
int camera1_fps = 10;
string camera1_resolution = "1920x1080";
int camera1_resolution_width = 1920;
int camera1_resolution_height = 1080;
string camera2 = "Depstech Webcam";
bool camera2_enabled = false;
int camera2_fps = 10;
string camera2_resolution = "1920x1080";
int camera2_resolution_width = 1920;
int camera2_resolution_height = 1080;
bool computer_use = true;
bool computer_monitor_recognition = true;
bool reading = true;
bool reading_fallacy_check = true;
bool sound_memory = true;
bool speech_memory = true;
bool speech_recognition = true;
bool ethics_check_enabled = true;
string sound_directory = "D:/sound_memory";
string sound_codec = "flac";
string sound_bitrate = "1000";
string speech_directory = "D:/speech_directory/";
int sound_sample_rate = 16000;
int sound_channels = 1;
int sound_bits_per_sample = 16;
int sound_recording_interval = 5;
bool speech_recognition_enable = true;
bool sound_recognition = true;
bool speech_commands = true;
bool vision_commands = true;
bool action_commands = true;
bool phone_commands = true;
bool visual_thinking = true;
bool speech_lie_detection = true;
string short_term_memory_time = "1000";
string tensorflow_model = "C:/_AugmentedIntelligence/tensorflow_models/coco_object_detection2/saved_model/";
string tensorflow_labels = "C:/_AugmentedIntelligence/tensorflow_models/coco_object_detection/coco.names";
bool vision_object_detection_remote_enabled = false;
bool microphone1_enabled = true;
string microphone1_device_name = "Microphone (Logitech USB Microphone)";
int microphone1_device_id = 135;
bool microphone2_enabled = true;
string microphone2_device_name = "Microphone (HyperX SoloCast)";
int microphone2_device_id = 136;
bool computer_owned_recognition = "";
string ffmpeg_location = "";
bool sound_reasoning = false;
bool reading_reasoning = true;
bool speech_reasoning = false;
string working_memory_location = "D:/working_memory/";
string short_term_memory_location = "D:/short_term_memory/";
string long_term_memory_location = "D:/long_term_memory/";
bool news_watching = false;
//bool action_commands = false;
bool action_detection = false;
bool needs_detection = false;
bool navigation_detection = false;
bool social_needs_detection = false;
bool vision_text_detection = false;
bool vision_text_recognition = false;
bool vision_face_recognition = false;
bool listening_fallacy_checking = true;
bool listening_bias_checking = true;
bool listening_axiom_checking = false;
bool listening_literature_device_checking = true;
bool listening_abuse_checking = true;
bool listening_logic_detection = true;
bool listening_law_checking = false;
bool listening_dictionary_checking = false;

// FTP Settings
bool ftp_enabled = true;
string ftp_hostname = "ftp://macdaddy4sure.ai";
string ftp_username = "Tyler";
string ftp_password = "Bellflower90706%";
string ftp_vision_directory = "/MARS_AI/vision_memory/";
string ftp_sound_directory = "/MARS_AI/sound_memory/";
string ftp_vision_storage_limit;
string ftp_sound_storage_limit;

// Computer Settings
bool private_computer;
string computer_hostname = "EARTH.CROCKETT.AI";
string computer_username = "Tyler";
string computer_password = "Anaheim92801$";

// MySQL Settings
string mysql_hostname = "localhost";
string mysql_username = "root";
string mysql_password = "Anaheim92801$";
string mysql_vision_database = "vision";
string mysql_sound_database = "sound";
string mysql_speech_database = "speech";
string mysql_working_memory_database = "working_memory";
string mysql_short_term_memory_database = "short_term_memory";
string mysql_long_term_memory_database = "long_term_memory";
string mysql_dictionary_database = "dictionary";
string mysql_destination_database_words = "wikipedia_pos_tagged_words";
string mysql_destination_database_sentences = "wikipedia_pos_tagged_sentences";

// Remote MySQL Settings
string remote_mysql_hostname = "localhost";
string remote_mysql_username = "root";
string remote_mysql_password = "Bellflower90706%";
string remote_mysql_vision_database = "vision";
string remote_mysql_sound_database = "sound";
string remote_mysql_speech_database = "speech";
string remote_mysql_working_memory_database = "working_memory";
string remote_mysql_short_term_memory_database = "short_term_memory";
string remote_mysql_long_term_memory_database = "long_term_memory";
string remote_mysql_dictionary_database = "dictionary";
string remote_mysql_destination_database_words = "wikipedia_pos_tagged_words";
string remote_mysql_destination_database_sentences = "wikipedia_pos_tagged_sentences";

// LLM Server
string speech_commands_activation = "machina";
string speech_commands_terminator = "confractus";
bool llm_server_enabled = true;
string llm_hostname = "http://localhost:11436/api/generate";
string llm_username = "Tyler";
string llm_password = "Anaheim92801$";
string llm_model = "llama3.3:latest";

// Whisper Server Settings
bool whisper_server_enabled = true;
string whisper_hostname = "http://localhost:4999/transcribe";
string whisper_username = "Tyler";
string whisper_password = "Anaheim92801$";
string whisper_model = "C:/_AugmentedIntelligence/whisper_models/ggml-base.bin";
int whisper_prompt_seconds = 7;
int whisper_command_seconds = 10;
//int mic_sample_rate = 48000;
//int mic_num_channels = 2;
//int mic_bits_per_sample = 16;

// Driving Settings
bool driving_enabled = false;
float driving_head_position;
float driving_left_mirror;
float driving_right_mirror;
float driving_center_mirror;

int main()
{
    string input;
    string input2;

    //_AI::InitDatabases();

    while (!terms_conditions)
    {
        system("cls");

        //string image_location = "C:/29-09-2024_21-20-07_0_camera1.jpg";
        //string response = _LLM::OllamaAPI("image", "Analyze the following image", image_location);
        //response = _Parsers::LLM::LLama3Parse(response);
        //cout << response << endl;
        //cin.get();

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
        cout << "| 13. LLM Server Settings         |" << endl;
        //cout << "| 14. Tensorflow Settings         |" << endl;
        cout << "| 14. Whisper Server Settings     |" << endl;
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
        if (llm_server_enabled)
            cout << "LLM Server: True" << endl;
        else
            cout << "LLM Server: False" << endl;
        if (whisper_server_enabled)
            cout << "Transcription Server: True" << endl;
        else
            cout << "Transcription Server: False" << endl;
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
        if (speech_reasoning)
            cout << "Speech Reasoning: True" << endl;
        else
            cout << "Speech Reasoning: False" << endl;
        if (camera1_enabled)
            cout << "Camera 1 Enabled: True" << endl;
        else
            cout << "Camera 1 Enabled: False" << endl;
        if (camera2_enabled)
            cout << "Camera 2 Enabled: True" << endl;
        else
            cout << "Camera 2 Enabled: False" << endl;
        if (microphone1_enabled)
            cout << "Microphone 1 Enabled: True" << endl;
        else
            cout << "Microphone 1 Enabled: False" << endl;
        if (microphone2_enabled)
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
            cout << "Reading Fallacy Checking: True" << endl;
        else
            cout << "Reading Fallacy Checking : False" << endl;
        if (listening_fallacy_checking)
            cout << "Listening Fallacy Checking: True" << endl;
        else
            cout << "Listening Fallacy Checking: False" << endl;
        if (listening_bias_checking)
            cout << "Listening Bias Checking: True" << endl;
        else
            cout << "Listening Bias Checking: False" << endl;
        if (listening_literature_device_checking)
            cout << "Listening Literature Device Checking: True" << endl;
        else
            cout << "Listening Literature Device Checking: False" << endl;
        if (listening_axiom_checking)
            cout << "Listening Axiom Checking: True" << endl;
        else
            cout << "Listening Axiom Checking: False" << endl;
        if (listening_abuse_checking)
            cout << "Listening Abuse Checking: True" << endl;
        else
            cout << "Listening Abuse Checking: False" << endl;
        if (listening_law_checking)
            cout << "Listening Law Checking: True" << endl;
        else
            cout << "Listening Law Checking: False" << endl;
        if (listening_dictionary_checking)
            cout << "Listening Dictionary Checking: True" << endl;
        else
            cout << "Listening Dictionary Checking: False" << endl;
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
        cout << "Tensorflow Object Detection Model: " << tensorflow_model << endl;
        cout << "Tensorflow Object Detection Labels: " << tensorflow_labels << endl;
        cout << "Whisper Model: " << whisper_model << endl;
        cout << "FFMpeg Location: " << ffmpeg_location << endl;
        cout << "Camera 1 Device: " << camera1 << endl;
        cout << "Camera 1 FPS: " << camera1_fps << endl;
        cout << "Camera 1 Resolution: " << camera1_resolution << endl;
        cout << "Camera 2 Device: " << camera2 << endl;
        cout << "Camera 2 FPS: " << camera2_fps << endl;
        cout << "Camera 2 Resolution: " << camera2_resolution << endl;
        cout << "Microphone 1 Device: " << microphone1_device_name << endl;
        cout << "Microphone 1 Device ID: " << microphone1_device_id << endl;
        cout << "Microphone 2 Device: " << microphone2_device_name << endl;
        cout << "Microphone 2 Device ID: " << microphone2_device_id << endl;
        cout << "Microphone Codec: " << sound_codec << endl;
        cout << "Microphone Bitrate: " << sound_bitrate << " Kb/s" << endl;
        cout << "Microphone Sample Rate: " << sound_sample_rate << " Hz" << endl;
        cout << "Microphone Channels: " << sound_channels << endl;
        //cout << "Microphone Bits Per Sample: " << sound_bits_per_sample << endl;
        //cout << "Object Detection Model: " << tensorflow_model << endl;
        cout << "Speech Commands Activation: " << speech_commands_activation << endl;
        cout << "Speech Commands Terminator: " << speech_commands_terminator << endl;
        cout << "Transcription Server Hostname: " << whisper_hostname << endl;
        cout << "Transcription Server Username: " << whisper_username << endl;
        cout << "Transcription Server Password: " << whisper_password << endl;
        //cout << "Microphone Sample Rate: " << mic_sample_rate << endl;
        //cout << "Microphone Number Channels: " << mic_num_channels << endl;
        //cout << "Microphone Bits Per Sample: " << mic_bits_per_sample << endl;
        cout << "LLM Server Hostname: " << llm_hostname << endl;
        cout << "LLM Server Username: " << llm_username << endl;
        cout << "LLM Server Password: " << llm_password << endl;
        if (news_watching)
            cout << "News Watching: True" << endl;
        else
            cout << "News Watching: False" << endl;
        if (action_commands)
            cout << "Action Commands: True" << endl;
        else
            cout << "Action Commands: False" << endl;
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
        getline(cin, input2);

        //input = "1";

        if (input2 == "1")
        {
            _AI::InitThreads();
        }
        else if (input2 == "0")
        {
            _Settings::Settings();
        }
        else if (input2 == "10")
        {
            _Settings::MemoryManagementSettings();
        }
        else if (input2 == "11")
        {
            _Settings::MySQLSettings();
        }
        else if (input2 == "12")
        {
            _Settings::ComputerSettings();
        }
        else if (input2 == "13")
        {
            _Settings::LLMServerSettings();
        }
        else if (input2 == "14")
        {
            _Settings::WhisperServerSettings();
        }
        else if (input2 == "license" || input2 == "LICENSE" || input2 == "License")
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
    //_Reference::InitReference();

    // InitLists
    if (awareness_interface)
    {
        // Debug
        //_Awareness::AwarenessInterface();

        // Actual implementation
        // std::thread awarenessInterface(_Awareness::AwarenessInterface);
        // awarenessInterface.std::thread::detach();
    }
    //if (android_interface)
    //{

    //}
    if (camera1_enabled || camera2_enabled)
    {
        // Debug
        //_Vision::Vision();

        // Actual implementation
        std::thread vision(_Vision::Vision);
        vision.std::thread::detach();
    }
    if (sound_memory)
    {
        // Debug
        //_Sound::Sound();

        // Actual implementation
        thread sound(_Sound::Sound);
        sound.std::thread::detach();
    }
    if (speech_commands)
    {
        std::thread whisper_asr(_Whisper::Whisper);
        whisper_asr.std::thread::detach();
    }
    if (listening_fallacy_checking)
    {
        std::thread listening_fallacy_checking1(_Listening::FallacyChecking);
        listening_fallacy_checking1.std::thread::detach();
    }
    if (listening_bias_checking)
    {
        std::thread listening_bias_checking1(_Listening::BiasChecking);
        listening_bias_checking1.std::thread::detach();
    }
    if (listening_axiom_checking)
    {
        std::thread listening_axiom_checking1(_Listening::AxiomChecking);
        listening_axiom_checking1.std::thread::detach();
    }
    if (listening_literature_device_checking)
    {
        std::thread listening_literature_device_checking1(_Listening::LiteratureDeviceChecking);
        listening_literature_device_checking1.std::thread::detach();
    }
    if (listening_abuse_checking)
    {
        
    }
    if (reading)
    {

    }
    if (ftp_enabled)
    {
        //thread memoryManagement(_DatabaseFunctions::MemoryManagement);
        //memoryManagement.join();
    }
    if (short_term_memory_enabled)
    {
        // Debug
        //_ShortTermMemory::ShortTermMemory();

        // Actual implementation
        // thread short_term_memory(_ShortTermMemory::ShortTermMemory);
        // short_term_memory.std::thread::detach();
    }
    if (working_memory_enabled)
    {
        // thread working_memory(_WorkingMemory::WorkingMemory);
        // This should be something like awareness...
    }
    if (long_term_memory_enabled)
    {
        // Debug ?
        //_LongTermMemory::LongTermMemory();

        // Actual implementation
        //thread long_term_memory(_LongTermMemory::LongTermMemory);
        //long_term_memory.std::thread::detach();
    }
     //Should be its own app...
    if (news_watching)
    {
        // Debug
        // _Actions::NewsWatching();
        // thread newsWatchingScraper(_NLU::NewsWatchingScraper);
        // newsWatchingScraper.std::thread::detach();
    }
    if (action_detection)
    {
        // Debug
        //_Actions::GetCurrentAction();

        // Actual implementation
        // std::thread actions(_Actions::GetCurrentAction);
        // actions.std::thread::detach();
    }
    if (computer_use)
    {
        if (computer_monitor_recognition)
        {
            //thread computer_monitor_recognition;
            // computer_monitor_recognition.std::thread::detach();
        }
        if (computer_owned_recognition)
        {
            // thread computer_owned_recognition;
            // computer_owned_recognition.std::thread::detach();
        }
    }
    if (ethics_check_enabled)
    {
        //thread ethics_check;
        //thread visual_reasoning;
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