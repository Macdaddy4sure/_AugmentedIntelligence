/*
    Copyright(C) 2026 Tyler Crockett | Macdaddy4sure.ai

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
#include "Thought.hpp"
#include "Typing.hpp"
#include "Variables.hpp"
#include "Vision.hpp"
#include "Visual.hpp"
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
bool awareness_interface = false;
bool cuda_accelleration = false;                    // CUDA makes "matrix" or "vector" "Algebra very fast and  Matrix Algebra Computation Breakthrought! Lets see if we can find it? Also what if the same AI makes breakthroughs in new Tensor cores, should be simple since a breakthroug.!. It got out sorry...
bool cuda_accelleration_remote_enabled = false; // I have a dream of std::string as the data input frome these servers everythin is a string and other basic data lile time and date, and accessed with thread exchangeing infrmation with each pther thread safe.
string cuda_accelleration_remote_hostname = "";// Say we accomplished everything else. Not nyet
string cuda_accelleration_remote_cores = "";
bool tensor_accelleration = false; // Do not have the hardware, $2000 do not have the the credit, but lets turn it on. It does not matter until the hardware is present... 1080TI
bool tensor_accelleration_remote_enabled = false;
string tensor_accelleration_remote_hostname = "";
string tensor_accelleration_remote_cores = "";
bool working_memory_enabled = true;
string working_memory_limit = "1000";
bool short_term_memory_enabled = true;
string short_term_memory_limit = "1000";
bool long_term_memory_enabled = true;
string long_term_memory_limit = "1000";
bool speech_memory_enabled = false;
bool vision_object_detection = false; // Enable object detection immediately after Run_Program is executed? A Camera and visual memory must be enabled
bool vision_object_detection_cuda = false;
bool vision_object_detection_server = false;
string vision_object_detection_server_hostname = "";
bool visual_analysis = false; // Visual Analysis of frames immediately after Run_Program is executed? I warn you, this method is slow; I would recommend using visual analysis manually in working memory and simple_text or create a task in simple_compute
string visual_analysis_model = "llama3.2-vision:11b";
bool vision_memory = false;
bool visual_checking = false;
string vision_memory_directory = "D:/vision_memory";
string camera1 = "Depstech webcam";
bool camera1_enabled = false;
int camera1_fps = 10;
string camera1_resolution = "3840x2160";
int camera1_resolution_width = 3840;
int camera1_resolution_height = 2160;
int camera1_focal_length = 22;
string camera2 = "GoPro Hero9 Black";
bool camera2_enabled = false;
int camera2_fps = 10;
string camera2_resolution = "1920x1080";
int camera2_resolution_width = 1920;
int camera2_resolution_height = 1080;
int camera2_focal_length = 22;
bool computer_use = true;
bool computer_monitor_recognition = true; // This is integrated with how to attain Passwords with the encryottion key (AES) to decrypt out passwords securetly to login in to company assests
bool reading = false; // Reading from the camera or, short term memory, working memory completed! Buy use reading as a delibrate command which is done in 'simple image'
bool listening = false; // Computationaly expensive... We would get this to work with CUDA enabled graphics cards and a cuda statement to SIMD
bool thought = true;
//bool reading_fallacy_check = true;
bool sound_memory = false;
bool speech_memory = false;
bool speech_recognition = true;
bool ethics_check_enabled = true; // The default llm is designed to be ethical
string sound_directory = "D:/sound_memory";
string sound_codec = "flac";
string sound_bitrate = "1000";
string speech_directory = "D:/speech_directory/";
int sound_sample_rate = 16000;
int sound_channels = 1;
int sound_bits_per_sample = 16;
int sound_recording_interval = 10;
bool speech_recognition_enable = false;
bool sound_recognition = false;
bool sound_analysis = false;
bool speech_commands = false;
bool typing_commands = true;
bool vision_commands = true; // wtf is this?: blinking at regions of vision and secret. trust me for earning and owning as much as fucking possible by the end of your life! This is called no it is supported my child
bool action_commands = true; // Eye blink? Right
bool phone_commands = false;
bool visual_thinking = false;
bool speech_lie_detection = false;
string short_term_memory_time = "1000";
string tensorflow_model = "C:/_AugmentedIntelligence/tensorflow_models/coco_object_detection2/saved_model/";
string tensorflow_labels = "C:/_AugmentedIntelligence/tensorflow_models/coco_object_detection2/coco.names";
double tensorflow_score = 0.65;
bool vision_object_detection_remote_enabled = false;
bool microphone1_enabled = true;
string microphone1_device_name = "Microphone (HyperX SoloCast)";
int microphone1_device_id = 130;
bool microphone2_enabled = true;
string microphone2_device_name = "";
int microphone2_device_id = 131;
bool computer_owned_recognition = "";
string ffmpeg_location = "";
bool sound_reasoning = false;
bool reading_reasoning = false; // simple image read and analyze llm
bool speech_reasoning = false;
string working_memory_location = "D:/working_memory/";
string short_term_memory_location = "D:/short_term_memory/";
string long_term_memory_location = "D:/long_term_memory/";
bool news_watching = false;
bool action_detection = false;
bool needs_detection = false;
bool navigation_detection = false;
bool social_needs_detection = false;
bool vision_text_detection = false;
bool vision_text_recognition = false;
bool vision_face_recognition = false;
bool encrypt_thoughts = false;
bool watching = false;

unsigned char encryption_key[16] = {
        0x10, 0x23, 0x45, 0x67,
        0x89, 0xAB, 0xCD, 0xEF,
        0x01, 0x12, 0x34, 0x56,
        0x78, 0x9A, 0xBC, 0xDE
};

// Listening Functions
int listening_seconds_interval = 30; // These all need to be in their own thread running in CUDA Immediately
bool listening_fallacy_checking = false;
bool listening_bias_checking = false;
bool listening_axiom_checking = false;
bool listening_literature_device_checking = false;
bool listening_abuse_checking = false;
bool listening_logic_detection = false;
bool listening_law_checking = false;
bool listening_dictionary_checking = false;
bool listening_aerospace_engineering = false;
bool listening_algebra = false;
bool listening_artificial_intelligence = false;
bool listening_bash = false;
bool listening_batch = false;
bool listening_beauty = false;
bool listening_biology = false;
bool listening_botany = false;
bool listening_cpp = false;
bool listening_calculus = false;
bool listening_chemistry = false;
bool listening_civil_engineering = false; // City planning! What if Tyler is in with the  city planners and Tyler will always beet use. Havbe you not lerarned, Tyler is clearly God if he can just wak out or die on this project. Thank you. We need exchange rates as soonm as possible!
bool listening_college_algebra = false;
bool listening_computer_science = false;
bool listening_cryptography = false;
bool listening_dance = false;
bool listening_differential_equations = false;
bool listening_discrete_mathematics = false;
bool listening_ecology = false;
bool listening_economics = false;
bool listening_electrical_engineering = false;
bool listening_engineering = false;
bool listening_ethics = false;
bool listening_game_theory = false;
bool listening_geography = false;
bool listening_geology = false;
bool listening_geometry = false;
bool listening_graph_theory = false;
bool listening_internet = false;
bool listening_java = false;
bool listening_linear_algebra = false;
bool listening_logic = false;
bool listening_marketing = false;
bool listening_materials_science = false;
bool listening_mechanical_engineering = false;
bool listening_medicine = false;
bool listening_nautical = false;
bool listening_networking = false;
bool listening_poetry = false;
bool listening_pottery = false;
bool listening_philosophy = false;
bool listening_photography = false;
bool listening_physics = false;
bool listening_political_science = false;
bool listening_probability_and_statistics = false;
bool listening_programming = false;
bool listening_psychiatry = false;
bool listening_psychology = false;
bool listening_sales = false;
bool listening_stocks = false;
bool listening_structural_engineering = false;
bool listening_theatre = false;
bool listening_trigonometry = false;
bool listening_wood_working = false;
bool listening_writing = false;

// Reading functions
int reading_seconds_interval = 30;
bool reading_fallacy_checking = false;
bool reading_bias_checking = false;
bool reading_axiom_checking = false;
bool reading_literature_device_checking = false;
bool reading_abuse_checking = false;
bool reading_logic_detection = false;
bool reading_law_checking = false;
bool reading_dictionary_checking = false;
bool reading_aerospace_engineering = false;
bool reading_algebra = false;
bool reading_artificial_intelligence = false;
bool reading_bash = false;
bool reading_batch = false;
bool reading_beauty = false;
bool reading_biology = false;
bool reading_botany = false;
bool reading_cpp = false;
bool reading_calculus = false;
bool reading_chemistry = false;
bool reading_civil_engineering = false;
bool reading_college_algebra = false;
bool reading_computer_science = false;
bool reading_cryptography = false;
bool reading_dance = false;
bool reading_differential_equations = false;
bool reading_discrete_mathematics = false;
bool reading_ecology = false;
bool reading_economics = false;
bool reading_electrical_engineering = false;
bool reading_engineering = false;
bool reading_ethics = false;
bool reading_game_theory = false;
bool reading_geography = false;
bool reading_geology = false;
bool reading_geometry = false;
bool reading_graph_theory = false;
bool reading_internet = false;
bool reading_java = false;
bool reading_linear_algebra = false;
bool reading_logic = false;
bool reading_marketing = false;
bool reading_materials_science = false;
bool reading_mechanical_engineering = false;
bool reading_medicine = false;
bool reading_nautical = false;
bool reading_networking = false;
bool reading_poetry = false;
bool reading_pottery = false;
bool reading_philosophy = false;
bool reading_photography = false;
bool reading_physics = false;
bool reading_political_science = false;
bool reading_probability_and_statistics = false;
bool reading_programming = false;
bool reading_psychiatry = false;
bool reading_psychology = false;
bool reading_sales = false;
bool reading_stocks = false;
bool reading_structural_engineering = false;
bool reading_theatre = false;
bool reading_trigonometry = false;
bool reading_wood_working = false;
bool reading_writing = false;

// Vision Checking
int visual_seconds_interval = 60;
bool visual_fallacy_checking = false;
bool visual_bias_checking = false;
bool visual_axiom_checking = false;
bool visual_literature_device_checking = false;
bool visual_abuse_checking = false;
bool visual_logic_detection = false;
bool visual_law_checking = false;
bool visual_dictionary_checking = false;
bool visual_aerospace_engineering = false;
bool visual_algebra = false;
bool visual_artificial_intelligence = false;
bool visual_bash = false;
bool visual_batch = false;
bool visual_beauty = false;
bool visual_biology = false;
bool visual_botany = false;
bool visual_cpp = false;
bool visual_calculus = false;
bool visual_chemistry = false;
bool visual_civil_engineering = false;
bool visual_college_algebra = false;
bool visual_computer_science = false;
bool visual_cryptography = false;
bool visual_dance = false;
bool visual_differential_equations = false;
bool visual_discrete_mathematics = false;
bool visual_ecology = false;
bool visual_economics = false;
bool visual_electrical_engineering = false;
bool visual_engineering = false;
bool visual_ethics = false;
bool visual_game_theory = false;
bool visual_geography = false;
bool visual_geology = false;
bool visual_geometry = false;
bool visual_graph_theory = false;
bool visual_internet = false;
bool visual_java = false;
bool visual_linear_algebra = false;
bool visual_logic = false;
bool visual_marketing = false;
bool visual_materials_science = false;
bool visual_mechanical_engineering = false;
bool visual_medicine = false;
bool visual_nautical = false;
bool visual_networking = false;
bool visual_poetry = false;
bool visual_pottery = false;
bool visual_philosophy = false;
bool visual_photography = false;
bool visual_physics = false;
bool visual_political_science = false;
bool visual_probability_and_statistics = false;
bool visual_programming = false;
bool visual_psychiatry = false;
bool visual_psychology = false;
bool visual_sales = false;
bool visual_stocks = false;
bool visual_structural_engineering = false;
bool visual_theatre = false;
bool visual_trigonometry = false;
bool visual_wood_working = false;
bool visual_writing = false;

// FTP Settings
bool ftp_enabled = false;
string ftp_hostname = "ftp://macdaddy4sure.ai";
string ftp_username = "Tyler";
string ftp_password = "Anaheim228";
string ftp_vision_directory = "//JUPITER.CROCKETT.AI/vision_memory/";
string ftp_sound_directory = "//JUPITER.CROCKETT.AI/sound_memory/";
string ftp_vision_storage_limit;
string ftp_sound_storage_limit;

// Computer Settings
bool private_computer;
string computer_hostname = "";
string computer_username = "Tyler";
string computer_password = "Anaheim228";

// MySQL Settings
string mysql_hostname = "localhost";
string mysql_username = "root";
string mysql_password = "Anaheim92801$";
string mysql_vision_database = "vision";
string mysql_sound_database = "sound";
string mysql_thought_database = "thought";
string mysql_computer_database = "computer";
//string mysql_speech_database = "speech";
string mysql_working_memory_database = "working_memory";
string mysql_short_term_memory_database = "short_term_memory";
string mysql_long_term_memory_database = "long_term_memory";
string mysql_dictionary_database = "dictionary";
string mysql_destination_database_words = "wikipedia_pos_tagged_words";
string mysql_destination_database_sentences = "wikipedia_pos_tagged_sentences";

// Remote MySQL Settings
string remote_mysql_hostname = "localhost";
string remote_mysql_username = "root";
string remote_mysql_password = "Anaheim228";
string remote_mysql_vision_database = "vision";
string remote_mysql_sound_database = "sound";
//string remote_mysql_speech_database = "speech";
string remote_mysql_thought_database = "thought";
string remote_mysql_computer_database = "computer";
string remote_mysql_working_memory_database = "working_memory";
string remote_mysql_short_term_memory_database = "short_term_memory";
string remote_mysql_long_term_memory_database = "long_term_memory";
string remote_mysql_dictionary_database = "dictionary";
string remote_mysql_destination_database_words = "wikipedia_pos_tagged_words";
string remote_mysql_destination_database_sentences = "wikipedia_pos_tagged_sentences";

// LLM Server
string speech_commands_activation = "clue";
string speech_commands_terminator = "confractus";
bool typing_commands_threads = false;
bool llm_server_enabled = false;
bool remote_llm_server_enabled = true;
bool api_chat = false;
string llm_hostname = "http://localhost:11436/api/generate";
string llm_default_hostname = "10.0.0.151:11436";
string remote_llm_hostname = "http://108.250.71.10:11434/api/generate";
string remote_llm_hostname_1 = "http://108.259.71.10:11432/api/generate";
string remote_llm_hostname_2 = "http://108.259.71.10:11430/api/generate";
string remote_llm_hostname_3 = "http://108.259.71.10:11436/api/generate";
vector<string> remote_llm_hostnames = { "10.0.0.145:11434", "10.0.0.119:11431", "10.0.0.123:11432", "10.0.0.151:11436" };
string llm_username = "Tyler";
string llm_password = "Anaheim92801$";
string llm_model = "llama3.3:70b";
string llm_model_image = "llava:34b";
string remote_llm_model = "llama3.3:70b";

// Whisper Server Settings
bool whisper_server_enabled = false;
string whisper_hostname = "http://localhost:4999/transcribe";
string whisper_username = "Tyler";
string whisper_password = "";
string whisper_model = "C:/_AugmentedIntelligence/whisper_models/ggml-base.en.bin";
int whisper_threads = 6;
int whisper_prompt_seconds = 10;
int whisper_command_seconds = 15;
//int mic_sample_rate = 48000;
//int mic_num_channels = 2;
//int mic_bits_per_sample = 16;

// Driving Settings
bool driving_enabled = false;
float driving_head_position; // this must be a visor
float driving_left_mirror;
float driving_right_mirror;
float driving_center_mirror;
double iou_min = 0.3;
double iou_max = 0.5;
double ttc_threshold = 2.0;

int main()
{
    // Enable input echoing and line editing
    //HANDLE hStdIn = GetStdHandle(STD_INPUT_HANDLE);
    //DWORD dwMode;
    //GetConsoleMode(hStdIn, &dwMode);
    //SetConsoleMode(hStdIn, dwMode | ENABLE_LINE_INPUT);

    string input;
    string input2;
    bool boolean = false;

    //_AI::InitDatabases();

    while (true)
    {
        while (!terms_conditions)
        {
            //system("cls");

            //string image_location = "C:/29-09-2024_21-20-07_0_camera1.jpg";
            //string response = _LLM2::OllamaAPI("image", "Analyze the following image", image_location);
            //response = _Parsers::LLM::json_parser(response);
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
            cout << "**Limitation of Liability**: The author of this program and Macdaddy4sure.ai are not liable if this software is used illegally or to be the cause of illegal activity." << endl;
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

        while (!boolean)
        {
            //system("cls");

            cout << endl;
            cout << "============ Main Menu ============" << endl;
            cout << "| 1.  Run Program                 |" << endl;
            cout << "| License. Show License           |" << endl;
            cout << "-----------------------------------" << endl;
            cout << "| 0.  Settings                    |" << endl;
            cout << "| 10. FTP Settings                |" << endl;
            cout << "| 11. MySQL Settings              |" << endl;
            cout << "| 12. Computer Settings           |" << endl;
            cout << "| 13. LLM Server Settings         |" << endl;
            //cout << "| 14. Tensorflow Settings       |" << endl;
            cout << "| 14. Whisper Server Settings     |" << endl;
            cout << "| 15. Visual Checking Settings    |" << endl;
            cout << "| 16. Reading Checking Settings   |" << endl;
            cout << "| 17. Listening Checking Settings |" << endl;
            cout << "| 18. Driving Settings            |" << endl;
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
            if (vision_memory)
                cout << "Vision Memory: True" << endl;
            else
                cout << "Vision Memory: False" << endl;
            if (sound_memory)
                cout << "Sound Memory: True" << endl;
            else
                cout << "Sound Memory: False" << endl;
            if (speech_commands)
                cout << "Speech Commands: True" << endl;
            else
                cout << "Speech Commands: False" << endl;
            if (typing_commands)
                cout << "Type Commands: True" << endl;
            else
                cout << "Type Commands: False" << endl;
            if (visual_analysis)
                cout << "Visual Analysis: True" << endl;
            else
                cout << "Visual Analysis: False" << endl;
            if (llm_server_enabled)
                cout << "Local LLM Server: True" << endl;
            else
                cout << "Local LLM Server: False" << endl;
            if (remote_llm_server_enabled)
                cout << "Remote LLM Server: True" << endl;
            else
                cout << "Remote LLM Server: False" << endl;
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
            if (visual_checking)
                cout << "Visual Checking: True" << endl;
            else
                cout << "Visual Checking: False" << endl;
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
            //if (reading_fallacy_check)
            //    cout << "Reading Fallacy Checking: True" << endl;
            //else
            //    cout << "Reading Fallacy Checking: False" << endl;
            if (listening)
                cout << "Listening: True" << endl;
            else
                cout << "Listening: False" << endl;
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
            if (listening_aerospace_engineering)
                cout << "Listening Aerospace Engineering: True" << endl;
            else
                cout << "Listening Aerospace Engineering: False" << endl;
            if (listening_algebra)
                cout << "Listening Algebra: True" << endl;
            else
                cout << "Listening Algebra: False" << endl;
            if (listening_artificial_intelligence)
                cout << "Listening Artificial Intelligence: True" << endl;
            else
                cout << "Listening Artificial Intelligence: False" << endl;
            if (listening_bash)
                cout << "Listening BASH: True" << endl;
            else
                cout << "Listening BASH: False" << endl;
            if (listening_batch)
                cout << "Listening BATCH: True" << endl;
            else
                cout << "Listening BATCH: False" << endl;
            if (listening_beauty)
                cout << "Listening Beauty: True" << endl;
            else
                cout << "Listening Beauty: False" << endl;
            if (listening_biology)
                cout << "Listening Biology: True" << endl;
            else
                cout << "Listening Biology: False" << endl;
            if (listening_botany)
                cout << "Listening Botany: True" << endl;
            else
                cout << "Listening Botany: False" << endl;
            if (listening_cpp)
                cout << "Listening C++: True" << endl;
            else
                cout << "Listening C++: False" << endl;
            if (listening_calculus)
                cout << "Listening Calculus: True" << endl;
            else
                cout << "Listening Calculus: False" << endl;
            if (listening_chemistry)
                cout << "Listening Chemistry: True" << endl;
            else
                cout << "Listening Chemistry: False" << endl;
            if (listening_civil_engineering)
                cout << "Listening Civil Engineering: True" << endl;
            else
                cout << "Listening Civil Engineering: False" << endl;
            if (listening_college_algebra)
                cout << "Listening College Algebra: True" << endl;
            else
                cout << "Listening College Algebra: False" << endl;
            if (listening_computer_science)
                cout << "Listening Computer Science: True" << endl;
            else
                cout << "Listening Computer Science: False" << endl;
            if (listening_cryptography)
                cout << "Listening Cryptography: True" << endl;
            else
                cout << "Listening Cryptography: False" << endl;
            if (listening_dance)
                cout << "Listening Dance: True" << endl;
            else
                cout << "Listening Dance: False" << endl;
            if (listening_differential_equations)
                cout << "Listening Differential Equations: True" << endl;
            else
                cout << "Listening Differential Equations: False" << endl;
            if (listening_ecology)
                cout << "Listening Ecology: True" << endl;
            else
                cout << "Listening Ecology: False" << endl;
            if (listening_economics)
                cout << "Listening Economics: True" << endl;
            else
                cout << "Listening Economics: False" << endl;
            if (listening_electrical_engineering)
                cout << "Listening Electrical Engineering: True" << endl;
            else
                cout << "Listening Electrical Engineering: False" << endl;
            if (listening_engineering)
                cout << "Listening Engineering: True" << endl;
            else
                cout << "Listening Engineering: False" << endl;
            if (listening_ethics)
                cout << "Listening Ethics: True" << endl;
            else
                cout << "Listening Ethics: False" << endl;
            if (listening_game_theory)
                cout << "Listening Game Theory: True" << endl;
            else
                cout << "Listening Game Theory: False" << endl;
            if (listening_geography)
                cout << "Listening Geography: True" << endl;
            else
                cout << "Listening Geography: False" << endl;
            if (listening_geology)
                cout << "Listening Geology: True" << endl;
            else
                cout << "Listening Geology: False" << endl;
            if (listening_geometry)
                cout << "Listening Geometry: True" << endl;
            else
                cout << "Listening Geometry: False" << endl;
            if (listening_graph_theory)
                cout << "Listening Graph Theory: True" << endl;
            else
                cout << "Listening Graph Theory: False" << endl;
            if (listening_internet)
                cout << "Listening Internet: True" << endl;
            else
                cout << "Listening Internet: False" << endl;
            if (listening_java)
                cout << "Listening Java: True" << endl;
            else
                cout << "Listening Java: False" << endl;
            if (listening_linear_algebra)
                cout << "Listening Linear Algebra: True" << endl;
            else
                cout << "Listening Linear Algebra: False" << endl;
            if (listening_logic)
                cout << "Listening Logic: True" << endl;
            else
                cout << "Listening Logic: False" << endl;
            if (listening_marketing)
                cout << "Listening Marketing: True" << endl;
            else
                cout << "Listening Marketing: False" << endl;
            if (listening_materials_science)
                cout << "Listening Materials Science: True" << endl;
            else
                cout << "Listening Materials Science: False" << endl;
            if (listening_mechanical_engineering)
                cout << "Listening Mechanical Engineering: True" << endl;
            else
                cout << "Listening Mechanical Engineering: False" << endl;
            if (listening_medicine)
                cout << "Listening Medicine: True" << endl;
            else
                cout << "Listening Medicine: False" << endl;
            if (listening_nautical)
                cout << "Listening Nautical: True" << endl;
            else
                cout << "Listening Nautical: False" << endl;
            if (listening_networking)
                cout << "Listening Networking: True" << endl;
            else
                cout << "Listening Networking: False" << endl;
            if (listening_pottery)
                cout << "Listening pottery: True" << endl;
            else
                cout << "Listening Poetry: False" << endl;
            if (listening_philosophy)
                cout << "Listening Philosophy: True" << endl;
            else
                cout << "Listening Philosophy: False" << endl;
            if (listening_photography)
                cout << "Listening Photography: True" << endl;
            else
                cout << "Listening Photography: False" << endl;
            if (listening_physics)
                cout << "Listening Physics: True" << endl;
            else
                cout << "Listening Physics: False" << endl;
            if (listening_political_science)
                cout << "Listening Political Science: True" << endl;
            else
                cout << "Listening Political Science: False" << endl;
            if (listening_probability_and_statistics)
                cout << "Listening Probability and Statistics: True" << endl;
            else
                cout << "Listening Probability and Statistics: False" << endl;
            if (listening_programming)
                cout << "Listening Programming: True" << endl;
            else
                cout << "Listening Programming: False" << endl;
            if (listening_psychiatry)
                cout << "Listening Psychiatry: True" << endl;
            else
                cout << "Listening Psychiatry: False" << endl;
            if (listening_psychology)
                cout << "Listening Psychology: True" << endl;
            else
                cout << "Listening Psychology: False" << endl;
            if (listening_sales)
                cout << "Listening Sales: True" << endl;
            else
                cout << "Listening Sales: False" << endl;
            if (listening_stocks)
                cout << "Listening Stocks: True" << endl;
            else
                cout << "Listening Stocks: False" << endl;
            if (listening_structural_engineering)
                cout << "Listening Structural Engineering: True" << endl;
            else
                cout << "Listening Structural Engineering: False" << endl;
            if (listening_theatre)
                cout << "Listening Theatre: True" << endl;
            else
                cout << "Listening Theatre: False" << endl;
            if (listening_trigonometry)
                cout << "Listening Trigonometry: True" << endl;
            else
                cout << "Listening Trigonometry: False" << endl;
            if (listening_wood_working)
                cout << "Listening Wood Working: True" << endl;
            else
                cout << "Listening Wood Working: False" << endl;
            if (listening_writing)
                cout << "Listening Writing: True" << endl;
            else
                cout << "Listening Writing: False" << endl;
            if (reading_fallacy_checking)
                cout << "Reading Fallacy Checking: True" << endl;
            else
                cout << "Reading Fallacy Checking: False" << endl;
            if (reading_bias_checking)
                cout << "Reading Bias Checking: True" << endl;
            else
                cout << "Reading Bias Checking: False" << endl;
            if (reading_literature_device_checking)
                cout << "Reading Literature Device Checking: True" << endl;
            else
                cout << "Reading Literature Device Checking: False" << endl;
            if (reading_axiom_checking)
                cout << "Reading Axiom Checking: True" << endl;
            else
                cout << "Reading Axiom Checking: False" << endl;
            if (reading_abuse_checking)
                cout << "Reading Abuse Checking: True" << endl;
            else
                cout << "Reading Abuse Checking: False" << endl;
            if (reading_law_checking)
                cout << "Reading Law Checking: True" << endl;
            else
                cout << "Reading Law Checking: False" << endl;
            if (reading_dictionary_checking)
                cout << "Reading Dictionary Checking: True" << endl;
            else
                cout << "Reading Dictionary Checking: False" << endl;
            if (reading_aerospace_engineering)
                cout << "Reading Aerospace Engineering: True" << endl;
            else
                cout << "Reading Aerospace Engineering: False" << endl;
            if (reading_algebra)
                cout << "Reading Algebra: True" << endl;
            else
                cout << "Reading Algebra: False" << endl;
            if (reading_artificial_intelligence)
                cout << "Reading Artificial Intelligence: True" << endl;
            else
                cout << "Reading Artificial Intelligence: False" << endl;
            if (reading_bash)
                cout << "Reading BASH: True" << endl;
            else
                cout << "Reading BASH: False" << endl;
            if (reading_batch)
                cout << "Reading BATCH: True" << endl;
            else
                cout << "Reading BATCH: False" << endl;
            if (reading_beauty)
                cout << "Reading Beauty: True" << endl;
            else
                cout << "Reading Beauty: False" << endl;
            if (reading_biology)
                cout << "Reading Biology: True" << endl;
            else
                cout << "Reading Biology: False" << endl;
            if (reading_botany)
                cout << "Reading Botany: True" << endl;
            else
                cout << "Reading Botany: False" << endl;
            if (reading_cpp)
                cout << "Reading C++: True" << endl;
            else
                cout << "Reading C++: False" << endl;
            if (reading_calculus)
                cout << "Reading Calculus: True" << endl;
            else
                cout << "Reading Calculus: False" << endl;
            if (reading_chemistry)
                cout << "Reading Chemistry: True" << endl;
            else
                cout << "Reading Chemistry: False" << endl;
            if (reading_civil_engineering)
                cout << "Reading Civil Engineering: True" << endl;
            else
                cout << "Reading Civil Engineering: False" << endl;
            if (reading_college_algebra)
                cout << "Reading College Algebra: True" << endl;
            else
                cout << "Reading College Algebra: False" << endl;
            if (reading_computer_science)
                cout << "Reading Computer Science: True" << endl;
            else
                cout << "Reading Computer Science: False" << endl;
            if (reading_cryptography)
                cout << "Reading Cryptography: True" << endl;
            else
                cout << "Reading Cryptography: False" << endl;
            if (reading_dance)
                cout << "Reading Dance: True" << endl;
            else
                cout << "Reading Dance: False" << endl;
            if (reading_differential_equations)
                cout << "Reading Differential Equations: True" << endl;
            else
                cout << "Reading Differential Equations: False" << endl;
            if (reading_ecology)
                cout << "Reading Ecology: True" << endl;
            else
                cout << "Reading Ecology: False" << endl;
            if (reading_economics)
                cout << "Reading Economics: True" << endl;
            else
                cout << "Reading Economics: False" << endl;
            if (reading_electrical_engineering)
                cout << "Reading Electrical Engineering: True" << endl;
            else
                cout << "Reading Electrical Engineering: False" << endl;
            if (reading_engineering)
                cout << "Reading Engineering: True" << endl;
            else
                cout << "Reading Engineering: False" << endl;
            if (reading_ethics)
                cout << "Reading Ethics: True" << endl;
            else
                cout << "Reading Ethics: False" << endl;
            if (reading_game_theory)
                cout << "Reading Game Theory: True" << endl;
            else
                cout << "Reading Game Theory: False" << endl;
            if (reading_geography)
                cout << "Reading Geography: True" << endl;
            else
                cout << "Reading Geography: False" << endl;
            if (reading_geology)
                cout << "Reading Geology: True" << endl;
            else
                cout << "Reading Geology: False" << endl;
            if (reading_geometry)
                cout << "Reading Geometry: True" << endl;
            else
                cout << "Reading Geometry: False" << endl;
            if (reading_graph_theory)
                cout << "Reading Graph Theory: True" << endl;
            else
                cout << "Reading Graph Theory: False" << endl;
            if (reading_internet)
                cout << "Reading Internet: True" << endl;
            else
                cout << "Reading Internet: False" << endl;
            if (reading_java)
                cout << "Reading Java: True" << endl;
            else
                cout << "Reading Java: False" << endl;
            if (reading_linear_algebra)
                cout << "Reading Linear Algebra: True" << endl;
            else
                cout << "Reading Linear Algebra: False" << endl;
            if (reading_logic)
                cout << "Reading Logic: True" << endl;
            else
                cout << "Reading Logic: False" << endl;
            if (reading_marketing)
                cout << "Reading Marketing: True" << endl;
            else
                cout << "Reading Marketing: False" << endl;
            if (reading_materials_science)
                cout << "Reading Materials Science: True" << endl;
            else
                cout << "Reading Materials Science: False" << endl;
            if (reading_mechanical_engineering)
                cout << "Reading Mechanical Engineering: True" << endl;
            else
                cout << "Reading Mechanical Engineering: False" << endl;
            if (reading_medicine)
                cout << "Reading Medicine: True" << endl;
            else
                cout << "Reading Medicine: False" << endl;
            if (reading_nautical)
                cout << "Reading Nautical: True" << endl;
            else
                cout << "Reading Nautical: False" << endl;
            if (reading_networking)
                cout << "Reading Networking: True" << endl;
            else
                cout << "Reading Networking: False" << endl;
            if (reading_pottery)
                cout << "Reading pottery: True" << endl;
            else
                cout << "Reading Poetry: False" << endl;
            if (reading_philosophy)
                cout << "Reading Philosophy: True" << endl;
            else
                cout << "Reading Philosophy: False" << endl;
            if (reading_photography)
                cout << "Reading Photography: True" << endl;
            else
                cout << "Reading Photography: False" << endl;
            if (reading_physics)
                cout << "Reading Physics: True" << endl;
            else
                cout << "Reading Physics: False" << endl;
            if (reading_political_science)
                cout << "Reading Political Science: True" << endl;
            else
                cout << "Reading Political Science: False" << endl;
            if (reading_probability_and_statistics)
                cout << "Reading Probability and Statistics: True" << endl;
            else
                cout << "Reading Probability and Statistics: False" << endl;
            if (reading_programming)
                cout << "Reading Programming: True" << endl;
            else
                cout << "Reading Programming: False" << endl;
            if (reading_psychiatry)
                cout << "Reading Psychiatry: True" << endl;
            else
                cout << "Reading Psychiatry: False" << endl;
            if (reading_psychology)
                cout << "Reading Psychology: True" << endl;
            else
                cout << "Reading Psychology: False" << endl;
            if (reading_sales)
                cout << "Reading Sales: True" << endl;
            else
                cout << "Reading Sales: False" << endl;
            if (reading_stocks)
                cout << "Reading Stocks: True" << endl;
            else
                cout << "Reading Stocks: False" << endl;
            if (reading_structural_engineering)
                cout << "Reading Structural Engineering: True" << endl;
            else
                cout << "Reading Structural Engineering: False" << endl;
            if (reading_theatre)
                cout << "Reading Theatre: True" << endl;
            else
                cout << "Reading Theatre: False" << endl;
            if (reading_trigonometry)
                cout << "Reading Trigonometry: True" << endl;
            else
                cout << "Reading Trigonometry: False" << endl;
            if (reading_wood_working)
                cout << "Reading Wood Working: True" << endl;
            else
                cout << "Reading Wood Working: False" << endl;
            if (reading_writing)
                cout << "Reading Writing: True" << endl;
            else
                cout << "Reading Writing: False" << endl;
            if (visual_fallacy_checking)
                cout << "Visual Fallacy Checking: True" << endl;
            else
                cout << "Visual Fallacy Checking: False" << endl;
            if (visual_bias_checking)
                cout << "Visual Bias Checking: True" << endl;
            else
                cout << "Visual Bias Checking: False" << endl;
            if (visual_literature_device_checking)
                cout << "Visual Literature Device Checking: True" << endl;
            else
                cout << "Visual Literature Device Checking: False" << endl;
            if (visual_axiom_checking)
                cout << "Visual Axiom Checking: True" << endl;
            else
                cout << "Visual Axiom Checking: False" << endl;
            if (visual_abuse_checking)
                cout << "Visual Abuse Checking: True" << endl;
            else
                cout << "Visual Abuse Checking: False" << endl;
            if (visual_law_checking)
                cout << "Visual Law Checking: True" << endl;
            else
                cout << "Visual Law Checking: False" << endl;
            if (visual_dictionary_checking)
                cout << "Visual Dictionary Checking: True" << endl;
            else
                cout << "Visual Dictionary Checking: False" << endl;
            if (visual_aerospace_engineering)
                cout << "Visual Aerospace Engineering: True" << endl;
            else
                cout << "Visual Aerospace Engineering: False" << endl;
            if (visual_algebra)
                cout << "Visual Algebra: True" << endl;
            else
                cout << "Visual Algebra: False" << endl;
            if (visual_artificial_intelligence)
                cout << "Visual Artificial Intelligence: True" << endl;
            else
                cout << "Visual Artificial Intelligence: False" << endl;
            if (visual_bash)
                cout << "Visual BASH: True" << endl;
            else
                cout << "Visual BASH: False" << endl;
            if (visual_batch)
                cout << "Visual BATCH: True" << endl;
            else
                cout << "Visual BATCH: False" << endl;
            if (visual_beauty)
                cout << "Visual Beauty: True" << endl;
            else
                cout << "Visual Beauty: False" << endl;
            if (visual_biology)
                cout << "Visual Biology: True" << endl;
            else
                cout << "Visual Biology: False" << endl;
            if (visual_botany)
                cout << "Visual Botany: True" << endl;
            else
                cout << "Visual Botany: False" << endl;
            if (visual_cpp)
                cout << "Visual C++: True" << endl;
            else
                cout << "Visual C++: False" << endl;
            if (visual_calculus)
                cout << "Visual Calculus: True" << endl;
            else
                cout << "Visual Calculus: False" << endl;
            if (visual_chemistry)
                cout << "Visual Chemistry: True" << endl;
            else
                cout << "Visual Chemistry: False" << endl;
            if (visual_civil_engineering)
                cout << "Visual Civil Engineering: True" << endl;
            else
                cout << "Visual Civil Engineering: False" << endl;
            if (visual_college_algebra)
                cout << "Visual College Algebra: True" << endl;
            else
                cout << "Visual College Algebra: False" << endl;
            if (visual_computer_science)
                cout << "Visual Computer Science: True" << endl;
            else
                cout << "Visual Computer Science: False" << endl;
            if (visual_cryptography)
                cout << "Visual Cryptography: True" << endl;
            else
                cout << "Visual Cryptography: False" << endl;
            if (visual_dance)
                cout << "Visual Dance: True" << endl;
            else
                cout << "Visual Dance: False" << endl;
            if (visual_differential_equations)
                cout << "Visual Differential Equations: True" << endl;
            else
                cout << "Visual Differential Equations: False" << endl;
            if (visual_ecology)
                cout << "Visual Ecology: True" << endl;
            else
                cout << "Visual Ecology: False" << endl;
            if (visual_economics)
                cout << "Visual Economics: True" << endl;
            else
                cout << "Visual Economics: False" << endl;
            if (visual_electrical_engineering)
                cout << "Visual Electrical Engineering: True" << endl;
            else
                cout << "Visual Electrical Engineering: False" << endl;
            if (visual_engineering)
                cout << "Visual Engineering: True" << endl;
            else
                cout << "Visual Engineering: False" << endl;
            if (visual_ethics)
                cout << "Visual Ethics: True" << endl;
            else
                cout << "Visual Ethics: False" << endl;
            if (visual_game_theory)
                cout << "Visual Game Theory: True" << endl;
            else
                cout << "Visual Game Theory: False" << endl;
            if (visual_geography)
                cout << "Visual Geography: True" << endl;
            else
                cout << "Visual Geography: False" << endl;
            if (visual_geology)
                cout << "Visual Geology: True" << endl;
            else
                cout << "Visual Geology: False" << endl;
            if (visual_geometry)
                cout << "Visual Geometry: True" << endl;
            else
                cout << "Visual Geometry: False" << endl;
            if (visual_graph_theory)
                cout << "Visual Graph Theory: True" << endl;
            else
                cout << "Visual Graph Theory: False" << endl;
            if (visual_internet)
                cout << "Visual Internet: True" << endl;
            else
                cout << "Visual Internet: False" << endl;
            if (visual_java)
                cout << "Visual Java: True" << endl;
            else
                cout << "Visual Java: False" << endl;
            if (visual_linear_algebra)
                cout << "Visual Linear Algebra: True" << endl;
            else
                cout << "Visual Linear Algebra: False" << endl;
            if (visual_logic)
                cout << "Visual Logic: True" << endl;
            else
                cout << "Visual Logic: False" << endl;
            if (visual_marketing)
                cout << "Visual Marketing: True" << endl;
            else
                cout << "Visual Marketing: False" << endl;
            if (visual_materials_science)
                cout << "Visual Materials Science: True" << endl;
            else
                cout << "Visual Materials Science: False" << endl;
            if (visual_mechanical_engineering)
                cout << "Visual Mechanical Engineering: True" << endl;
            else
                cout << "Visual Mechanical Engineering: False" << endl;
            if (visual_medicine)
                cout << "Visual Medicine: True" << endl;
            else
                cout << "Visual Medicine: False" << endl;
            if (visual_nautical)
                cout << "Visual Nautical: True" << endl;
            else
                cout << "Visual Nautical: False" << endl;
            if (visual_networking)
                cout << "Visual Networking: True" << endl;
            else
                cout << "Visual Networking: False" << endl;
            if (visual_pottery)
                cout << "Visual pottery: True" << endl;
            else
                cout << "Visual Poetry: False" << endl;
            if (visual_philosophy)
                cout << "Visual Philosophy: True" << endl;
            else
                cout << "Visual Philosophy: False" << endl;
            if (visual_photography)
                cout << "Visual Photography: True" << endl;
            else
                cout << "Visual Photography: False" << endl;
            if (visual_physics)
                cout << "Visual Physics: True" << endl;
            else
                cout << "Visual Physics: False" << endl;
            if (visual_political_science)
                cout << "Visual Political Science: True" << endl;
            else
                cout << "Visual Political Science: False" << endl;
            if (visual_probability_and_statistics)
                cout << "Visual Probability and Statistics: True" << endl;
            else
                cout << "Visual Probability and Statistics: False" << endl;
            if (visual_programming)
                cout << "Visual Programming: True" << endl;
            else
                cout << "Visual Programming: False" << endl;
            if (visual_psychiatry)
                cout << "Visual Psychiatry: True" << endl;
            else
                cout << "Visual Psychiatry: False" << endl;
            if (visual_psychology)
                cout << "Visual Psychology: True" << endl;
            else
                cout << "Visual Psychology: False" << endl;
            if (visual_sales)
                cout << "Visual Sales: True" << endl;
            else
                cout << "Visual Sales: False" << endl;
            if (visual_stocks)
                cout << "Visual Stocks: True" << endl;
            else
                cout << "Visual Stocks: False" << endl;
            if (visual_structural_engineering)
                cout << "Visual Structural Engineering: True" << endl;
            else
                cout << "Visual Structural Engineering: False" << endl;
            if (visual_theatre)
                cout << "Visual Theatre: True" << endl;
            else
                cout << "Visual Theatre: False" << endl;
            if (visual_trigonometry)
                cout << "Visual Trigonometry: True" << endl;
            else
                cout << "Visual Trigonometry: False" << endl;
            if (visual_wood_working)
                cout << "Visual Wood Working: True" << endl;
            else
                cout << "Visual Wood Working: False" << endl;
            if (visual_writing)
                cout << "Visual Writing: True" << endl;
            else
                cout << "Visual Writing: False" << endl;
            cout << "Listening Interval: " << listening_seconds_interval << endl;
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
            cout << "Whisper Threads: " << whisper_threads << endl;
            cout << "FFMpeg Location: " << ffmpeg_location << endl;
            cout << "Camera 1 Device: " << camera1 << endl;
            cout << "Camera 1 FPS: " << camera1_fps << endl;
            cout << "Camera 1 Resolution: " << camera1_resolution << endl;
            cout << "Camera 1 Focal Length: " << camera1_focal_length << endl;
            cout << "Camera 2 Device: " << camera2 << endl;
            cout << "Camera 2 FPS: " << camera2_fps << endl;
            cout << "Camera 2 Resolution: " << camera2_resolution << endl;
            cout << "Camera 2 Focal Length: " << camera2_focal_length << endl;
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
            //if (news_watching)
            //    cout << "News Watching: True" << endl;
            //else
            //    cout << "News Watching: False" << endl;
            //if (action_commands)
            //    cout << "Action Commands: True" << endl;
            //else
            //    cout << "Action Commands: False" << endl;
            //if (needs_detection)
            //    cout << "Needs Detection: True" << endl;
            //else
            //    cout << "Needs Detection: False" << endl;
            //if (navigation_detection)
            //    cout << "Navigation Detection: True" << endl;
            //else
            //    cout << "Navigation Detection: false" << endl;
            //if (social_needs_detection)
            //    cout << "Social Needs Detection: True" << endl;
            //else
            //    cout << "Social Needs Detection: False" << endl;
            //int filled_text = 0;
            //int filled_math = 0;
            //int filled_image = 0;

            //// Find the most resent addition to wm_simple_text
            //for (int x = 999; x >= 0; x--)
            //{
            //    if (!wm_simple_text[x][0].empty())
            //    {
            //        filled_text = x;
            //        break;
            //    }
            //}

            //// Find the most resent addition to wm_simple_math
            //for (int x = 999; x >= 0; x--)
            //{
            //    if (!wm_simple_math[x][0].empty())
            //    {
            //        filled_math = x;
            //        break;
            //    }
            //}

            //// Find the most resent addition to wm_simple_image
            //for (int x = 999; x >= 0; x--)
            //{
            //    if (!wm_simple_image[x][0].empty())
            //    {
            //        filled_image = x;
            //        break;
            //    }
            //}

            // Output the last addition to simple math and text
            cout << endl;
            //cout << "Simple Math" << endl;
            //cout << wm_simple_math[filled_math][1] << endl;
            //cout << wm_simple_math[filled_math][0] << endl;
            //cout << endl;
            //cout << "Simple Text" << endl;
            //cout << wm_simple_text[filled_text][1] << endl;
            //cout << wm_simple_text[filled_text][0] << endl;
            //cout << endl;
            //cout << "Simple Image" << endl;
            //cout << wm_simple_image[filled_image][1] << endl;
            //cout << wm_simple_image[filled_image][0] << endl;
            //cout << endl;

            cout << "Your Selection: ";
            getline(cin, input2);

            //input = "1";

            if (input2 == "1")
            {
                boolean = true;
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
            else if (input2 == "15")
            {
                _Settings::VisualCheckingSettings();
            }
            else if (input2 == "16")
            {
                _Settings::ReadingCheckingSettings();
            }
            else if (input2 == "17")
            {
                _Settings::ListeningSettings();
            }
            else if (input2 == "18")
            {
                _Settings::DrivingSettings();
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
        // 
        // 
        // 
        //_Awareness::AwarenessInterface();
        

        // Actual implementation
        // std::thread awarenessInterface(_Awareness::AwarenessInterface);
        // awarenessInterface.std::thread::detach();
    }
    if (typing_commands)
    {
        std::thread typing_commands1(_AI::TypingCommands);
        typing_commands1.detach();
    }
    //if (android_interface)
    //{
    //
    //}
    if (vision_memory)
    {
        if (camera1_enabled || camera2_enabled)
        {
            // Debug
            //_Vision::Vision();

            // Actual implementation
            std::thread vision(_Vision::Vision);
            vision.std::thread::detach();
        }
    }
    if (visual_checking)
    {
        if (visual_fallacy_checking)
        {
            std::thread visual_fallacy_checking1(_Visual::VisualFallacyChecking);
            visual_fallacy_checking1.std::thread::detach();
        }
        if (visual_bias_checking)
        {
            std::thread visual_bias_checking1(_Visual::VisualBiasChecking);
            visual_bias_checking1.std::thread::detach();
        }
        if (visual_axiom_checking)
        {
            //std::thread visual_axiom_checking1(_Visual::AxiomChecking);
            //visual_axiom_checking1.std::thread::detach();
        }
        if (visual_literature_device_checking)
        {
            std::thread visual_literature_device_checking1(_Visual::LiteratureDeviceChecking);
            visual_literature_device_checking1.std::thread::detach();
        }
        if (visual_abuse_checking)
        {
            std::thread visual_abuse_checking1(_Visual::VisualAbuseChecking);
            visual_abuse_checking1.std::thread::detach();
        }
        if (visual_law_checking)
        {
            std::thread visual_law_checking1(_Visual::VisualLawChecking);
            visual_law_checking1.std::thread::detach();
        }
        if (visual_dictionary_checking)
        {
            std::thread visual_dictionary_checking1(_Visual::VisualDictionaryChecking);
            visual_dictionary_checking1.std::thread::detach();
        }
        if (visual_aerospace_engineering)
        {
            std::thread visual_aerospace_engineering1(_Visual::VisualAerospaceEngineering);
            visual_aerospace_engineering1.std::thread::detach();
        }
        if (visual_algebra)
        {
            std::thread visual_algebra1(_Visual::VisualAlgebra);
            visual_algebra1.std::thread::detach();
        }
        if (visual_artificial_intelligence)
        {
            std::thread visual_artificial_intelligence1(_Visual::VisualArtificialIntelligence);
            visual_artificial_intelligence1.std::thread::detach();
        }
        if (visual_bash)
        {
            std::thread visual_bash1(_Visual::VisualBASH);
            visual_bash1.std::thread::detach();
        }
        if (visual_batch)
        {
            std::thread visual_batch1(_Visual::VisualBATCH);
            visual_batch1.std::thread::detach();
        }
        if (visual_beauty)
        {
            std::thread visual_beauty1(_Visual::VisualBeauty);
            visual_beauty1.std::thread::detach();
        }
        if (visual_biology)
        {
            std::thread visual_biology1(_Visual::VisualBiology);
            visual_biology1.std::thread::detach();
        }
        if (visual_botany)
        {
            std::thread visual_botany1(_Visual::VisualBotany);
            visual_botany1.std::thread::detach();
        }
        if (visual_cpp)
        {
            std::thread visual_cpp1(_Visual::VisualCPP);
            visual_cpp1.std::thread::detach();
        }
        if (visual_calculus)
        {
            std::thread visual_calculus1(_Visual::VisualCalculus);
            visual_calculus1.std::thread::detach();
        }
        if (visual_chemistry)
        {
            std::thread visual_chemistry1(_Visual::VisualChemistry);
            visual_chemistry1.std::thread::detach();
        }
        if (visual_civil_engineering)
        {
            std::thread visual_civil_engineering1(_Visual::VisualCivilEngineering);
            visual_civil_engineering1.std::thread::detach();
        }
        if (visual_college_algebra)
        {
            std::thread visual_college_algebra1(_Visual::VisualCollegeAlgebra);
            visual_college_algebra1.std::thread::detach();
        }
        if (visual_computer_science)
        {
            std::thread visual_computer_science1(_Visual::VisualComputerScience);
            visual_computer_science1.std::thread::detach();
        }
        if (visual_cryptography)
        {
            std::thread visual_cryptography1(_Visual::VisualCryptography);
            visual_cryptography1.std::thread::detach();
        }
        if (visual_dance)
        {
            std::thread visual_dance1(_Visual::VisualDance);
            visual_dance1.std::thread::detach();
        }
        if (visual_differential_equations)
        {
            std::thread visual_differential_equations1(_Visual::VisualDifferentialEquations);
            visual_differential_equations1.std::thread::detach();
        }
        if (visual_discrete_mathematics)
        {
            std::thread visual_discrete_mathematics1(_Visual::LiteratureDeviceChecking);
            visual_discrete_mathematics1.std::thread::detach();
        }
        if (visual_ecology)
        {
            std::thread visual_ecology1(_Visual::VisualEcology);
            visual_ecology1.std::thread::detach();
        }
        if (visual_economics)
        {
            std::thread visual_economics1(_Visual::VisualEconomics);
            visual_economics1.std::thread::detach();
        }
        if (visual_electrical_engineering)
        {
            std::thread visual_electrical_engineering1(_Visual::VisualElectricalEngineering);
            visual_electrical_engineering1.std::thread::detach();
        }
        if (visual_engineering)
        {
            std::thread visual_engineering1(_Visual::VisualEngineering);
            visual_engineering1.std::thread::detach();
        }
        if (visual_ethics)
        {
            std::thread visual_ethics1(_Visual::VisualEthics);
            visual_ethics1.std::thread::detach();
        }
        if (visual_game_theory)
        {
            std::thread visual_game_theory1(_Visual::LiteratureDeviceChecking);
            visual_game_theory1.std::thread::detach();
        }
        if (visual_geography)
        {
            std::thread visual_geography1(_Visual::VisualGeography);
            visual_geography1.std::thread::detach();
        }
        if (visual_geology)
        {
            std::thread visual_geology1(_Visual::VisualGeology);
            visual_geology1.std::thread::detach();
        }
        if (visual_geometry)
        {
            std::thread visual_geometry1(_Visual::VisualGeometry);
            visual_geometry1.std::thread::detach();
        }
        if (visual_graph_theory)
        {
            std::thread visual_graph_theory1(_Visual::VisualGraphTheory);
            visual_graph_theory1.std::thread::detach();
        }
        if (visual_internet)
        {
            std::thread visual_internet1(_Visual::VisualInternet);
            visual_internet1.std::thread::detach();
        }
        if (visual_java)
        {
            std::thread visual_java1(_Visual::VisualJava);
            visual_java1.std::thread::detach();
        }
        if (visual_linear_algebra)
        {
            std::thread visual_linear_algebra1(_Visual::VisualLinearAlgebra);
            visual_linear_algebra1.std::thread::detach();
        }
        if (visual_logic)
        {
            std::thread visual_logic1(_Visual::VisualLogic);
            visual_logic1.std::thread::detach();
        }
        if (visual_marketing)
        {
            std::thread visual_marketing1(_Visual::VisualMarketing);
            visual_marketing1.std::thread::detach();
        }
        if (visual_materials_science)
        {
            //std::thread visual_materials_science1(_Visual::VisualMaterialScience);
            //visual_materials_science1.std::thread::detach();
        }
        if (visual_mechanical_engineering)
        {
            std::thread visual_mechanical_engineering1(_Visual::VisualMechanicalEngineering);
            visual_mechanical_engineering1.std::thread::detach();
        }
        if (visual_medicine)
        {
            std::thread visual_medicine1(_Visual::VisualMedicine);
            visual_medicine1.std::thread::detach();
        }
        if (visual_nautical)
        {
            std::thread visual_nautical1(_Visual::VisualNautical);
            visual_nautical1.std::thread::detach();
        }
        if (visual_networking)
        {
            std::thread visual_networking1(_Visual::VisualNetworking);
            visual_networking1.std::thread::detach();
        }
        //if (visual_poetry)
        //{
        //    std::thread visual_pottery1(_Visual::VisualPoetry);
        //    visual_pottery1.std::thread::detach();
        //}
        if (visual_philosophy)
        {
            std::thread visual_philosophy1(_Visual::VisualPhilosophy);
            visual_philosophy1.std::thread::detach();
        }
        //if (visual_photography)
        //{
        //    std::thread visual_photography1(_Visual::VisualPhotography);
        //    visual_photography1.std::thread::detach();
        //}
        if (visual_physics)
        {
            std::thread visual_physics1(_Visual::VisualPhysics);
            visual_physics1.std::thread::detach();
        }
        if (visual_political_science)
        {
            std::thread visual_political_science1(_Visual::VisualPoliticalScience);
            visual_political_science1.std::thread::detach();
        }
        if (visual_probability_and_statistics)
        {
            std::thread visual_probability_and_statistics1(_Visual::VisualProbabilityAndStatistics);
            visual_probability_and_statistics1.std::thread::detach();
        }
        if (visual_programming)
        {
            std::thread visual_programming1(_Visual::VisualProgramming);
            visual_programming1.std::thread::detach();
        }
        if (visual_psychiatry)
        {
            std::thread visual_psychiatry1(_Visual::VisualPsychiatry);
            visual_psychiatry1.std::thread::detach();
        }
        if (visual_psychology)
        {
            std::thread visual_psychology1(_Visual::VisualPsychology);
            visual_psychology1.std::thread::detach();
        }
        if (visual_sales)
        {
            std::thread visual_sales1(_Visual::VisualSales);
            visual_sales1.std::thread::detach();
        }
        if (visual_stocks)
        {
            std::thread visual_stocks1(_Visual::VisualStocks);
            visual_stocks1.std::thread::detach();
        }
        if (visual_structural_engineering)
        {
            std::thread visual_structural_engineering1(_Visual::VisualStructuralEngineering);
            visual_structural_engineering1.std::thread::detach();
        }
        if (visual_theatre)
        {
            std::thread visual_theatre1(_Visual::VisualTheatre);
            visual_theatre1.std::thread::detach();
        }
        if (visual_trigonometry)
        {
            std::thread visual_trigonometry1(_Visual::VisualTrigonometry);
            visual_trigonometry1.std::thread::detach();
        }
        if (visual_wood_working)
        {
            std::thread visual_wood_working1(_Visual::VisualWoodWorking);
            visual_wood_working1.std::thread::detach();
        }
        if (visual_writing)
        {
            std::thread visual_writing11(_Visual::VisualWriting);
            visual_writing11.std::thread::detach();
        }
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
    if (listening)
    {
        if (listening_fallacy_checking)
        {
            std::thread listening_fallacy_checking1(_Listening::ListeningFallacyChecking);
            listening_fallacy_checking1.std::thread::detach();
        }
        if (listening_bias_checking)
        {
            std::thread listening_bias_checking1(_Listening::ListeningBiasChecking);
            listening_bias_checking1.std::thread::detach();
        }
        if (listening_axiom_checking)
        {
            //std::thread listening_axiom_checking1(_Listening::AxiomChecking);
            //listening_axiom_checking1.std::thread::detach();
        }
        if (listening_literature_device_checking)
        {
            std::thread listening_literature_device_checking1(_Listening::LiteratureDeviceChecking);
            listening_literature_device_checking1.std::thread::detach();
        }
        if (listening_abuse_checking)
        {
            std::thread listening_abuse_checking1(_Listening::ListeningAbuseChecking);
            listening_abuse_checking1.std::thread::detach();
        }
        if (listening_law_checking)
        {
            std::thread listening_law_checking1(_Listening::ListeningLawChecking);
            listening_law_checking1.std::thread::detach();
        }
        if (listening_dictionary_checking)
        {
            std::thread listening_dictionary_checking1(_Listening::ListeningDictionaryChecking);
            listening_dictionary_checking1.std::thread::detach();
        }
        if (listening_aerospace_engineering)
        {
            std::thread listening_aerospace_engineering1(_Listening::ListeningAerospaceEngineering);
            listening_aerospace_engineering1.std::thread::detach();
        }
        if (listening_algebra)
        {
            std::thread listening_algebra1(_Listening::ListeningAlgebra);
            listening_algebra1.std::thread::detach();
        }
        if (listening_artificial_intelligence)
        {
            std::thread listening_artificial_intelligence1(_Listening::ListeningArtificialIntelligence);
            listening_artificial_intelligence1.std::thread::detach();
        }
        if (listening_bash)
        {
            std::thread listening_bash1(_Listening::ListeningBASH);
            listening_bash1.std::thread::detach();
        }
        if (listening_batch)
        {
            std::thread listening_batch1(_Listening::ListeningBATCH);
            listening_batch1.std::thread::detach();
        }
        if (listening_beauty)
        {
            std::thread listening_beauty1(_Listening::ListeningBeauty);
            listening_beauty1.std::thread::detach();
        }
        if (listening_biology)
        {
            std::thread listening_biology1(_Listening::ListeningBiology);
            listening_biology1.std::thread::detach();
        }
        if (listening_botany)
        {
            std::thread listening_botany1(_Listening::ListeningBotany);
            listening_botany1.std::thread::detach();
        }
        if (listening_cpp)
        {
            std::thread listening_cpp1(_Listening::ListeningCPP);
            listening_cpp1.std::thread::detach();
        }
        if (listening_calculus)
        {
            std::thread listening_calculus1(_Listening::ListeningCalculus);
            listening_calculus1.std::thread::detach();
        }
        if (listening_chemistry)
        {
            std::thread listening_chemistry1(_Listening::ListeningChemistry);
            listening_chemistry1.std::thread::detach();
        }
        if (listening_civil_engineering)
        {
            std::thread listening_civil_engineering1(_Listening::ListeningCivilEngineering);
            listening_civil_engineering1.std::thread::detach();
        }
        if (listening_college_algebra)
        {
            std::thread listening_college_algebra1(_Listening::ListeningCollegeAlgebra);
            listening_college_algebra1.std::thread::detach();
        }
        if (listening_computer_science)
        {
            std::thread listening_computer_science1(_Listening::ListeningComputerScience);
            listening_computer_science1.std::thread::detach();
        }
        if (listening_cryptography)
        {
            std::thread listening_cryptography1(_Listening::ListeningCryptography);
            listening_cryptography1.std::thread::detach();
        }
        if (listening_dance)
        {
            std::thread listening_dance1(_Listening::ListeningDance);
            listening_dance1.std::thread::detach();
        }
        if (listening_differential_equations)
        {
            std::thread listening_differential_equations1(_Listening::ListeningDifferentialEquations);
            listening_differential_equations1.std::thread::detach();
        }
        if (listening_discrete_mathematics)
        {
            std::thread listening_discrete_mathematics1(_Listening::LiteratureDeviceChecking);
            listening_discrete_mathematics1.std::thread::detach();
        }
        if (listening_ecology)
        {
            std::thread listening_ecology1(_Listening::ListeningEcology);
            listening_ecology1.std::thread::detach();
        }
        if (listening_economics)
        {
            std::thread listening_economics1(_Listening::ListeningEconomics);
            listening_economics1.std::thread::detach();
        }
        if (listening_electrical_engineering)
        {
            std::thread listening_electrical_engineering1(_Listening::ListeningElectricalEngineering);
            listening_electrical_engineering1.std::thread::detach();
        }
        if (listening_engineering)
        {
            std::thread listening_engineering1(_Listening::ListeningEngineering);
            listening_engineering1.std::thread::detach();
        }
        if (listening_ethics)
        {
            std::thread listening_ethics1(_Listening::ListeningEthics);
            listening_ethics1.std::thread::detach();
        }
        if (listening_game_theory)
        {
            std::thread listening_game_theory1(_Listening::LiteratureDeviceChecking);
            listening_game_theory1.std::thread::detach();
        }
        if (listening_geography)
        {
            std::thread listening_geography1(_Listening::ListeningGeography);
            listening_geography1.std::thread::detach();
        }
        if (listening_geology)
        {
            std::thread listening_geology1(_Listening::ListeningGeology);
            listening_geology1.std::thread::detach();
        }
        if (listening_geometry)
        {
            std::thread listening_geometry1(_Listening::ListeningGeometry);
            listening_geometry1.std::thread::detach();
        }
        if (listening_graph_theory)
        {
            std::thread listening_graph_theory1(_Listening::ListeningGraphTheory);
            listening_graph_theory1.std::thread::detach();
        }
        if (listening_internet)
        {
            std::thread listening_internet1(_Listening::ListeningInternet);
            listening_internet1.std::thread::detach();
        }
        if (listening_java)
        {
            std::thread listening_java1(_Listening::ListeningJava);
            listening_java1.std::thread::detach();
        }
        if (listening_linear_algebra)
        {
            std::thread listening_linear_algebra1(_Listening::ListeningLinearAlgebra);
            listening_linear_algebra1.std::thread::detach();
        }
        if (listening_logic)
        {
            std::thread listening_logic1(_Listening::ListeningLogic);
            listening_logic1.std::thread::detach();
        }
        if (listening_marketing)
        {
            std::thread listening_marketing1(_Listening::ListeningMarketing);
            listening_marketing1.std::thread::detach();
        }
        if (listening_materials_science)
        {
            //std::thread listening_materials_science1(_Listening::ListeningMaterialScience);
            //listening_materials_science1.std::thread::detach();
        }
        if (listening_mechanical_engineering)
        {
            std::thread listening_mechanical_engineering1(_Listening::ListeningMechanicalEngineering);
            listening_mechanical_engineering1.std::thread::detach();
        }
        if (listening_medicine)
        {
            std::thread listening_medicine1(_Listening::ListeningMedicine);
            listening_medicine1.std::thread::detach();
        }
        if (listening_nautical)
        {
            std::thread listening_nautical1(_Listening::ListeningNautical);
            listening_nautical1.std::thread::detach();
        }
        if (listening_networking)
        {
            std::thread listening_networking1(_Listening::ListeningNetworking);
            listening_networking1.std::thread::detach();
        }
        if (listening_poetry)
        {
            std::thread listening_pottery1(_Listening::ListeningPoetry);
            listening_pottery1.std::thread::detach();
        }
        if (listening_philosophy)
        {
            std::thread listening_philosophy1(_Listening::ListeningPhilosophy);
            listening_philosophy1.std::thread::detach();
        }
        if (listening_photography)
        {
            std::thread listening_photography1(_Listening::ListeningPhotography);
            listening_photography1.std::thread::detach();
        }
        if (listening_physics)
        {
            std::thread listening_physics1(_Listening::ListeningPhysics);
            listening_physics1.std::thread::detach();
        }
        if (listening_political_science)
        {
            std::thread listening_political_science1(_Listening::ListeningPoliticalScience);
            listening_political_science1.std::thread::detach();
        }
        if (listening_probability_and_statistics)
        {
            std::thread listening_probability_and_statistics1(_Listening::ListeningProbabilityAndStatistics);
            listening_probability_and_statistics1.std::thread::detach();
        }
        if (listening_programming)
        {
            std::thread listening_programming1(_Listening::ListeningProgramming);
            listening_programming1.std::thread::detach();
        }
        if (listening_psychiatry)
        {
            std::thread listening_psychiatry1(_Listening::ListeningPsychiatry);
            listening_psychiatry1.std::thread::detach();
        }
        if (listening_psychology)
        {
            std::thread listening_psychology1(_Listening::ListeningPsychology);
            listening_psychology1.std::thread::detach();
        }
        if (listening_sales)
        {
            std::thread listening_sales1(_Listening::ListeningSales);
            listening_sales1.std::thread::detach();
        }
        if (listening_stocks)
        {
            std::thread listening_stocks1(_Listening::ListeningStocks);
            listening_stocks1.std::thread::detach();
        }
        if (listening_structural_engineering)
        {
            std::thread listening_structural_engineering1(_Listening::ListeningStructuralEngineering);
            listening_structural_engineering1.std::thread::detach();
        }
        if (listening_theatre)
        {
            std::thread listening_theatre1(_Listening::ListeningTheatre);
            listening_theatre1.std::thread::detach();
        }
        if (listening_trigonometry)
        {
            std::thread listening_trigonometry1(_Listening::ListeningTrigonometry);
            listening_trigonometry1.std::thread::detach();
        }
        if (listening_wood_working)
        {
            std::thread listening_wood_working1(_Listening::ListeningWoodWorking);
            listening_wood_working1.std::thread::detach();
        }
        if (listening_writing)
        {
            std::thread listening_writing11(_Listening::ListeningWriting);
            listening_writing11.std::thread::detach();
        }
    }
    if (reading)
    {
        if (reading_fallacy_checking)
        {
            std::thread reading_fallacy_checking1(_Reading::ReadingFallacyChecking);
            reading_fallacy_checking1.std::thread::detach();
        }
        if (reading_bias_checking)
        {
            std::thread reading_bias_checking1(_Reading::ReadingBiasChecking);
            reading_bias_checking1.std::thread::detach();
        }
        if (reading_axiom_checking)
        {
            //std::thread reading_axiom_checking1(_Reading::AxiomChecking);
            //reading_axiom_checking1.std::thread::detach();
        }
        if (reading_literature_device_checking)
        {
            std::thread reading_literature_device_checking1(_Reading::LiteratureDeviceChecking);
            reading_literature_device_checking1.std::thread::detach();
        }
        if (reading_abuse_checking)
        {
            std::thread reading_abuse_checking1(_Reading::ReadingAbuseChecking);
            reading_abuse_checking1.std::thread::detach();
        }
        if (reading_law_checking)
        {
            std::thread reading_law_checking1(_Reading::ReadingLawChecking);
            reading_law_checking1.std::thread::detach();
        }
        if (reading_dictionary_checking)
        {
            std::thread reading_dictionary_checking1(_Reading::ReadingDictionaryChecking);
            reading_dictionary_checking1.std::thread::detach();
        }
        if (reading_aerospace_engineering)
        {
            std::thread reading_aerospace_engineering1(_Reading::ReadingAerospaceEngineering);
            reading_aerospace_engineering1.std::thread::detach();
        }
        if (reading_algebra)
        {
            std::thread reading_algebra1(_Reading::ReadingAlgebra);
            reading_algebra1.std::thread::detach();
        }
        if (reading_artificial_intelligence)
        {
            std::thread reading_artificial_intelligence1(_Reading::ReadingArtificialIntelligence);
            reading_artificial_intelligence1.std::thread::detach();
        }
        if (reading_bash)
        {
            std::thread reading_bash1(_Reading::ReadingBASH);
            reading_bash1.std::thread::detach();
        }
        if (reading_batch)
        {
            std::thread reading_batch1(_Reading::ReadingBATCH);
            reading_batch1.std::thread::detach();
        }
        if (reading_beauty)
        {
            std::thread reading_beauty1(_Reading::ReadingBeauty);
            reading_beauty1.std::thread::detach();
        }
        if (reading_biology)
        {
            std::thread reading_biology1(_Reading::ReadingBiology);
            reading_biology1.std::thread::detach();
        }
        if (reading_botany)
        {
            std::thread reading_botany1(_Reading::ReadingBotany);
            reading_botany1.std::thread::detach();
        }
        if (reading_cpp)
        {
            std::thread reading_cpp1(_Reading::ReadingCPP);
            reading_cpp1.std::thread::detach();
        }
        if (reading_calculus)
        {
            std::thread reading_calculus1(_Reading::ReadingCalculus);
            reading_calculus1.std::thread::detach();
        }
        if (reading_chemistry)
        {
            std::thread reading_chemistry1(_Reading::ReadingChemistry);
            reading_chemistry1.std::thread::detach();
        }
        if (reading_civil_engineering)
        {
            std::thread reading_civil_engineering1(_Reading::ReadingCivilEngineering);
            reading_civil_engineering1.std::thread::detach();
        }
        if (reading_college_algebra)
        {
            std::thread reading_college_algebra1(_Reading::ReadingCollegeAlgebra);
            reading_college_algebra1.std::thread::detach();
        }
        if (reading_computer_science)
        {
            std::thread reading_computer_science1(_Reading::ReadingComputerScience);
            reading_computer_science1.std::thread::detach();
        }
        if (reading_cryptography)
        {
            std::thread reading_cryptography1(_Reading::ReadingCryptography);
            reading_cryptography1.std::thread::detach();
        }
        if (reading_dance)
        {
            std::thread reading_dance1(_Reading::ReadingDance);
            reading_dance1.std::thread::detach();
        }
        if (reading_differential_equations)
        {
            std::thread reading_differential_equations1(_Reading::ReadingDifferentialEquations);
            reading_differential_equations1.std::thread::detach();
        }
        if (reading_discrete_mathematics)
        {
            std::thread reading_discrete_mathematics1(_Reading::LiteratureDeviceChecking);
            reading_discrete_mathematics1.std::thread::detach();
        }
        if (reading_ecology)
        {
            std::thread reading_ecology1(_Reading::ReadingEcology);
            reading_ecology1.std::thread::detach();
        }
        if (reading_economics)
        {
            std::thread reading_economics1(_Reading::ReadingEconomics);
            reading_economics1.std::thread::detach();
        }
        if (reading_electrical_engineering)
        {
            std::thread reading_electrical_engineering1(_Reading::ReadingElectricalEngineering);
            reading_electrical_engineering1.std::thread::detach();
        }
        if (reading_engineering)
        {
            std::thread reading_engineering1(_Reading::ReadingEngineering);
            reading_engineering1.std::thread::detach();
        }
        if (reading_ethics)
        {
            std::thread reading_ethics1(_Reading::ReadingEthics);
            reading_ethics1.std::thread::detach();
        }
        if (reading_game_theory)
        {
            std::thread reading_game_theory1(_Reading::LiteratureDeviceChecking);
            reading_game_theory1.std::thread::detach();
        }
        if (reading_geography)
        {
            std::thread reading_geography1(_Reading::ReadingGeography);
            reading_geography1.std::thread::detach();
        }
        if (reading_geology)
        {
            std::thread reading_geology1(_Reading::ReadingGeology);
            reading_geology1.std::thread::detach();
        }
        if (reading_geometry)
        {
            std::thread reading_geometry1(_Reading::ReadingGeometry);
            reading_geometry1.std::thread::detach();
        }
        if (reading_graph_theory)
        {
            std::thread reading_graph_theory1(_Reading::ReadingGraphTheory);
            reading_graph_theory1.std::thread::detach();
        }
        if (reading_internet)
        {
            std::thread reading_internet1(_Reading::ReadingInternet);
            reading_internet1.std::thread::detach();
        }
        if (reading_java)
        {
            std::thread reading_java1(_Reading::ReadingJava);
            reading_java1.std::thread::detach();
        }
        if (reading_linear_algebra)
        {
            std::thread reading_linear_algebra1(_Reading::ReadingLinearAlgebra);
            reading_linear_algebra1.std::thread::detach();
        }
        if (reading_logic)
        {
            std::thread reading_logic1(_Reading::ReadingLogic);
            reading_logic1.std::thread::detach();
        }
        if (reading_marketing)
        {
            std::thread reading_marketing1(_Reading::ReadingMarketing);
            reading_marketing1.std::thread::detach();
        }
        if (reading_materials_science)
        {
            //std::thread reading_materials_science1(_Reading::ReadingMaterialScience);
            //reading_materials_science1.std::thread::detach();
        }
        if (reading_mechanical_engineering)
        {
            std::thread reading_mechanical_engineering1(_Reading::ReadingMechanicalEngineering);
            reading_mechanical_engineering1.std::thread::detach();
        }
        if (reading_medicine)
        {
            std::thread reading_medicine1(_Reading::ReadingMedicine);
            reading_medicine1.std::thread::detach();
        }
        if (reading_nautical)
        {
            std::thread reading_nautical1(_Reading::ReadingNautical);
            reading_nautical1.std::thread::detach();
        }
        if (reading_networking)
        {
            std::thread reading_networking1(_Reading::ReadingNetworking);
            reading_networking1.std::thread::detach();
        }
        //if (reading_poetry)
        //{
        //    std::thread reading_pottery1(_Reading::ReadingPoetry);
        //    reading_pottery1.std::thread::detach();
        //}
        if (reading_philosophy)
        {
            std::thread reading_philosophy1(_Reading::ReadingPhilosophy);
            reading_philosophy1.std::thread::detach();
        }
        if (reading_photography)
        {
            //std::thread reading_photography1(_Reading::ReadingPhotography);
            //reading_photography1.std::thread::detach();
        }
        if (reading_physics)
        {
            std::thread reading_physics1(_Reading::ReadingPhysics);
            reading_physics1.std::thread::detach();
        }
        if (reading_political_science)
        {
            std::thread reading_political_science1(_Reading::ReadingPoliticalScience);
            reading_political_science1.std::thread::detach();
        }
        if (reading_probability_and_statistics)
        {
            std::thread reading_probability_and_statistics1(_Reading::ReadingProbabilityAndStatistics);
            reading_probability_and_statistics1.std::thread::detach();
        }
        if (reading_programming)
        {
            std::thread reading_programming1(_Reading::ReadingProgramming);
            reading_programming1.std::thread::detach();
        }
        if (reading_psychiatry)
        {
            std::thread reading_psychiatry1(_Reading::ReadingPsychiatry);
            reading_psychiatry1.std::thread::detach();
        }
        if (reading_psychology)
        {
            std::thread reading_psychology1(_Reading::ReadingPsychology);
            reading_psychology1.std::thread::detach();
        }
        if (reading_sales)
        {
            std::thread reading_sales1(_Reading::ReadingSales);
            reading_sales1.std::thread::detach();
        }
        if (reading_stocks)
        {
            std::thread reading_stocks1(_Reading::ReadingStocks);
            reading_stocks1.std::thread::detach();
        }
        if (reading_structural_engineering)
        {
            std::thread reading_structural_engineering1(_Reading::ReadingStructuralEngineering);
            reading_structural_engineering1.std::thread::detach();
        }
        if (reading_theatre)
        {
            std::thread reading_theatre1(_Reading::ReadingTheatre);
            reading_theatre1.std::thread::detach();
        }
        if (reading_trigonometry)
        {
            std::thread reading_trigonometry1(_Reading::ReadingTrigonometry);
            reading_trigonometry1.std::thread::detach();
        }
        if (reading_wood_working)
        {
            std::thread reading_wood_working1(_Reading::ReadingWoodWorking);
            reading_wood_working1.std::thread::detach();
        }
        if (reading_writing)
        {
            std::thread reading_writing11(_Reading::ReadingWriting);
            reading_writing11.std::thread::detach();
        }
    }
    if (ftp_enabled)
    {
        //thread memoryManagement(_DatabaseFunctions::MemoryManagement);
        //memoryManagement.join();
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
        //thread visual_analysis;
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

void _AI::TypingCommands()
{
    string input;
    string words;
    vector<string> command;
    bool boolean = false;

    while (typing_commands)
    {
        boolean = false;

        while (!boolean)
        {
            cout << ">> ";
            getline(cin, input);

            if (!input.empty())
            {
                for (int x = 0; x <= input.length(); x++)
                {
                    if (isspace(input[x]) || x == input.length())
                    {
						command.push_back(words);
                        words.clear();
                    }
                    else
                    {
						words += input[x];
                    }
                }

                //// Create a new console window
                //if (!AllocConsole())
                //{
                //    std::cerr << "Failed to allocate console" << std::endl;
                //}

                //// Get the handle of the new console window
                //HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

				//_SpeechCommands::SpeechCommands(command);
                if (typing_commands_threads)
                {
                    thread typed_commands1(_SpeechCommands::SpeechCommands, command);
                    typed_commands1.detach();
				}
                else
                {
					_SpeechCommands::SpeechCommands(command);
                }

                input.clear();
                words.clear();
				command.clear();
                boolean = true;
            }
        }
    }
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