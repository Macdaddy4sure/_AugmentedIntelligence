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
#include "Sound.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Database Functions.h"
#include "Mathematics.h"
#include "NLP.h"
#include "Reference.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

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
//  Speaking()                                              | ???                                                          | Intermediate (Calls to long and short term memory to find words to speak)
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
//      a. Test if the transcription contains ords that were not caught by whispe. Also check if the person is looking at you and words are being missed.
void _Sound::SoundListener()
{
    string text;
    int number;
    double result;
    string words[20];
    string temp_word;
    int spaces = 0;

    while (true)
    {
        //text = _AI::SpeechRecognition();
        
        // Look for commands to the program
        for (int i = 0; i <= text.length(); i++)
        {
            // Parse the file to find individual words denoted by spaces
            if (!isspace(text[i]))
            {
                words[spaces] += text[i];
            }
            else
            {
                spaces++;
            }
        }

        // Check for keywords to call functions
        for (int j = 0; j <= spaces; j++)
        {
            temp_word = words[j];

            if (isdigit((temp_word[j])) || words[j] == "absolute" || words[j] == "modulus" || words[j] == "square" || words[j] == "third" || words[j] == "factorial" || words[j] == "log" || words[j] == "natural" || words[j] == "sine" || words[j] == "cosine" || words[j] == "tangent" || words[j] == "secant" || words[j] == "cosecant" || words[j] == "cotangent" || words[j] == "arcsine" || words[j] == "arcosine" || words[j] == "arctangent" || words[j] == "arcsecant" || words[j] == "arccosecant" || words[j] == "arccotangent" || words[j] == "hyperbolic" || (words[j] == "area" && words[j + 1] == "hyperbolic" && words[j + 2] == "sine") || (words[j] == "area" && words[j + 1] == "hyperbolic" && words[j + 2] == "cosine") || (words[j] == "area" && words[j + 1] == "hyperbolic" && words[j + 2] == "tangent") || (words[j] == "area" && words[j + 1] == "hyperbolic" && words[j + 2] == "cosecant") || (words[j] == "area" && words[j + 1] == "hyperbolic" && words[j + 2] == "secant") || (words[j] == "area" && words[j + 1] == "hyperbolic" && words[j + 2] == "cotangent"))
            {
                _Math::ArithmeticParse(text);
            }
            else if ((words[j] == "algebra" && words[j + 1] == "calculate") || (words[j] == "factor" && (words[j + 1] == "binomial" || words[j + 1] == "trinomial")))
            {
                _Math::AlgebraParse(text);
            }
            else if (words[j] == "geometry" && words[j + 1] == "calculate")
            {
                _Math::GeometryParse(text);
            }
            else if (words[j] == "trigonometry" && words[j + 1] == "calculate")
            {
                _Math::TrigonometryParse(text);
            }
            else if (words[j] == "calculus" && words[j + 1] == "calculate")
            {
                _Math::CalculusParse(text);
            }
            else if (words[j] == "statistics" && words[j + 1] == "calculate")
            {
                _Math::StatisticsParse(text);
            }
            else if (words[j] == "create" && words[j + 1] == "deductive" && words[j + 2] == "argument")
            {
                //_NLP::CreateDeductiveArgument(text);
            }
            else if (words[j] == "create" && words[j + 1] == "inductive" && words[j + 2] == "argument")
            {
                //_NLP::CreateInductiveArgument(text);
            }
            else if ((words[j] == "convert" && words[j + 1] == "units") || words[j] == "units" && words[j + 1] == "conversion")
            {
                _Math::UnitConversions(text);
            }
            else if (words[j] == "fallacy" && words[j + 1] == "check" && words[j + 2] == "text")
            {

            }
            else if (words[j] == "fallacy" && words[j + 1] == "check" && words[j + 2] == "data")
            {

            }
            else if (words[j] == "bias" && words[j + 1] == "check" && words[j + 2] == "text")
            {

            }
            else if (words[j] == "bias" && words[j + 1] == "check" && words[j + 2] == "data")
            {

            }
            else if (words[j] == "find" && words[j + 1] == "object")
            {
                _DatabaseFunctions::FindObject(words[j + 2]);
            }
            else if (words[j] == "where" && words[j + 1] == "is" && words[j + 2] == "it")
            {
                // Do stuff
            }
        }
    }
}


// TODO: Cut playback every five minutes
// This funnction will listen through the microphone and save raw sound data with PortAudio
void _Sound::SoundRAW()
{
    string command;
    string filename;
    microphone1_device_name = _Settings::GetMicrophone1Device();
    sound_bitrate = _Settings::GetSoundBitrate();
    sound_codec = _Settings::GetSoundCodec();
    sound_directory = _Settings::GetSoundDirectory();
    ostringstream oss;

    while (true)
    {
        auto t = std::time(nullptr);
        auto tm = *std::localtime(&t);
        oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
        auto date = oss.str();

        command = "ffmpeg -f dshow -i audio=\"";
        command += microphone1_device_name;
        command += "\" -c:a \"";
        command += sound_codec;
        command += "\"-ar 44100 -b:a \"";
        command += sound_bitrate;
        command += "\" -segment_time 300 -ac 1 \"";
        command += sound_directory;
        command += date;
        command += ".wav ";
        filename = date;
        filename += ".wav ";
        sound_directory += date;
        sound_directory += filename;

        system(command.c_str());

        // Send data to be imported to MySQL
        //MySQLSoundRAW(date, filename, NULL, bitrate, codec, fileLocation);
    }
}

// The following function will upadte the MySQL database with raw sound information
void _Sound::MySQL_Sound()
{
    MYSQL* conn;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    ostringstream query1;
    ostringstream query2;
    string sql1;
    string sql2;
    string database1 = "SoundRAW";
    int wait_milliseconds = 100;
    string current_date;
    string temp;
    string temp_date;

    ostringstream oss;
    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    current_date = oss.str();

    string table_name = current_date;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database1.c_str(), 3306, NULL, 0);
    result = mysql_use_result(conn);

    query1 << "" << table_name;

    if (conn)
    {
        while (sound_memory)
        {
            // Create the table if it does not exist
            query1 << "CREATE TABLE IF NOT EXISTS " << table_name << "(date TEXT, fileLocation TEXT)";
            sql1 = query1.str();
            mysql_query(conn, sql1.c_str());

            query2 << "INSERT INTO " << table_name << "(date, fileLocation) VALUES(" << current_date << ", " << sound_directory << ");";
            sql2 = query2.str();
            mysql_query(conn, sql2.c_str());
        }
    }

    //terminate();
}

// This function will recall sound, recognition, and both memory an x amount of minutes or seconds
//  1. Get the current time
//  2. Convert the string to integers and subtract the time from current time
//  3. Recall the memory from the x amount of time to the current time
void _Sound::RecallSoundMemory(string raw_recognition, int search_years, int search_months, int search_days, int search_weeks, int search_hours, int search_minutes, int search_seconds)
{
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    MYSQL* conn;
    MYSQL_ROW row;
    MYSQL_RES* result;
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    ostringstream query1;
    string sql1;
    string database1 = "Sound";
    string table_name;
    ostringstream oss;
    oss << put_time(&tm, "%d-%m-%Y_%H-%M-%S");
    string date = oss.str();
    string str_current_years;
    string str_current_months;
    string str_current_days;
    string str_current_hours;
    string str_current_minutes;
    //int current_years;
    //int current_months;
    //int current_days;
    //int current_hours;
    //int current_minutes;
    //int current_seconds;
    //int duration_years;
    //int duration_months;
    //int duration_days;
    //int duration_weeks;
    //int duration_hours;
    //int duration_minutes;
    int duration_seconds;
    //bool duration;
    string words[20];
    bool weeks_bool = false;
    int spaces = 0;

    if (raw_recognition == "raw")
    {
        table_name = "SoundRAW";

        conn = mysql_init(0);
        conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), database1.c_str(), 3306, NULL, 0);
        result = mysql_use_result(conn);

        if (conn)
        {
            query1 << "SELECT * FROM " << table_name;
            sql1 = query1.str();
            /*cout << "SQL1: " << sql1 << endl;*/
            mysql_query(conn, sql1.c_str());
            MYSQL_RES* result = mysql_store_result(conn);

            // Get the file name
            while (row = mysql_fetch_row(result))
            {
                // Find the sound files that correspond to the dates
                // 1. Get the current date
                // 2. Find the file where the search term is included in the file
                //  a. Convert the amount of time to seconds
                duration_seconds = search_years * 31536000;
                duration_seconds += search_months * 2419200;
                duration_seconds += search_weeks * 604800;
                duration_seconds += search_days * 86400;
                duration_seconds += search_hours * 3600;
                duration_seconds += search_minutes * 60;
            }
        }
    }
}

string* _Sound::SoundRecognition(string wav_location)
{
    string model_path = "D:/_test3_audio/saved_model"; // Make this into a setting...
    string labelsPath = "D:/_test3_audio/saved_model/assets/labels.csv";

    std::vector<float> audioSamples = _Sound::loadWavFile(wav_location);
    int sampleRate = 44100;

    TF_Tensor* audio_tensor = _Sound::ImportWaveformAsTensor(audioSamples, sampleRate);

    // Initialize TensorFlow
    TF_Status* status = TF_NewStatus();

    //TF_Graph* graph = LoadGraph
    TF_Graph* graph = TF_NewGraph();

    // Get session options initialization
    TF_SessionOptions* options = TF_NewSessionOptions();

    TF_Buffer* run_opts = nullptr;

    const char* tags = "serve";
    TF_Session* session = TF_LoadSessionFromSavedModel(options, nullptr, model_path.c_str(), &tags, 1, graph, nullptr, status);

    if (TF_GetCode(status) == TF_OK)
    {
        printf("Model loaded successfully\n");
    }
    else
    {
        printf("Error loading model\n");
        return 0;
    }

    // Run object detection model DEBUG
    //_Sound::RunSession(session, graph, status, options, audio_tensor, labelsPath);

    // Define input operation
    TF_Output input_op = { TF_GraphOperationByName(graph, "serving_default_waveform"), 0 };

    // Define output operations
    std::vector<TF_Output> output_ops {
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 0 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 1 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 2 },
    };

    std::vector<TF_Tensor*> input_tensors = { audio_tensor };
    TF_Tensor* outputTensors[3] = { nullptr, nullptr, nullptr };

    if (TF_GetCode(status) != TF_OK)
    {
        fprintf(stderr, "Error: %s\n", TF_Message(status));
        // Handle error appropriately
    }

    // Run the session
    TF_SessionRun(session, nullptr,
        &input_op, input_tensors.data(), input_tensors.size(),
        output_ops.data(), outputTensors, output_ops.size(),
        nullptr, 0, nullptr, status);

    if (TF_GetCode(status) == TF_OK)
    {
        printf("Session run successfully\n");
    }
    else
    {
        fprintf(stderr, "Session run error: %s\n", TF_Message(status));
    }

    // Load the human readable labels into memory
    std::string* classLabels = _Sound::LoadClassLabels(labelsPath);

    // Process the output tensors to extract scores, and class IDs
    // Assuming outputTensors[0] contains the scores tensor.
    if (outputTensors[0] != nullptr)
    {
        float* scoresData = static_cast<float*>(TF_TensorData(outputTensors[0]));
        auto numFrames = TF_Dim(outputTensors[0], 0);
        auto numClasses = TF_Dim(outputTensors[0], 1);

        for (int i = 0; i < numFrames; ++i)
        {
            float maxScore = scoresData[i * numClasses]; // Initialize with the score of the first class
            int maxScoreIndex = 0;

            for (int j = 0; j < numClasses; ++j)
            {
                float score = scoresData[i * numClasses + j];

                // Process score, e.g., by checking if it's above a threshold.
                if (score > maxScore)
                {
                    maxScore = score;
                    maxScoreIndex = j;
                }
            }

            std::cout << "Frame " << i << ": Most probable class = " << classLabels[maxScoreIndex]
                << ", Score = " << maxScore << std::endl;
        }
    }
    // Assuming outputTensors[1] contains the embeddings tensor.
    if (outputTensors[1] != nullptr)
    {
        float* embeddingsData = static_cast<float*>(TF_TensorData(outputTensors[1]));
        auto numFrames = TF_Dim(outputTensors[1], 0);
        const int embeddingSize = 1024; // Typically 1024 for YAMNet

        for (int i = 0; i < numFrames; ++i)
        {
            std::vector<float> embedding(embeddingSize);

            for (int j = 0; j < embeddingSize; ++j)
            {
                embedding[j] = embeddingsData[i * embeddingSize + j];
            }
            // Now `embedding` contains the 1024-dimensional vector for frame `i`.
            // Further processing can be done here.
        }
    }
    // Assuming outputTensors[2] contains the spectrogram tensor.
    if (outputTensors[2] != nullptr)
    {
        float* spectrogramData = static_cast<float*>(TF_TensorData(outputTensors[2]));
        auto numFrames = TF_Dim(outputTensors[2], 0);
        auto numBins = TF_Dim(outputTensors[2], 1);

        for (int i = 0; i < numFrames; ++i)
        {
            for (int j = 0; j < numBins; ++j)
            {
                float binValue = spectrogramData[i * numBins + j];
                // Process binValue, e.g., for visualization or analysis.
            }
        }
    }

    // Cleanup
    input_tensors.clear();
    TF_DeleteTensor(audio_tensor);
    TF_DeleteTensor(outputTensors[0]);
    TF_DeleteTensor(outputTensors[1]);
    TF_DeleteTensor(outputTensors[2]);
    TF_DeleteSession(session, status);
    TF_DeleteSessionOptions(options);
}

std::vector<float> _Sound::loadWavFile(std::string filename)
{
    // Open the WAV file
    SF_INFO sfinfo;
    SNDFILE* file = sf_open(filename.c_str(), SFM_READ, &sfinfo);

    if (file == nullptr)
    {
        std::cerr << "Failed to open file: " << filename << std::endl;
        return {}; // Return an empty vector on failure
    }

    // Prepare a buffer to hold all samples
    std::vector<float> samples(sfinfo.frames * sfinfo.channels);

    // Read the samples into the buffer
    sf_count_t num_samples_read = sf_readf_float(file, samples.data(), sfinfo.frames);

    if (num_samples_read < sfinfo.frames)
    {
        std::cerr << "Failed to read all samples from file: " << filename << std::endl;
        // Handle partial read or error appropriately
    }

    // Close the file
    sf_close(file);

    return samples; // Return the loaded samples
}

TF_Tensor* _Sound::ImportWaveformAsTensor(const std::vector<float>& audioSamples, int sampleRate)
{
    // Dimensions of the tensor. Assuming audioSamples is 1D for simplicity.
    int64_t dims[] = { static_cast<int64_t>(audioSamples.size()) };

    // Create a TensorFlow tensor with the dimensions and data type.
    TF_Tensor* tensor = TF_AllocateTensor(TF_FLOAT, dims, 1, audioSamples.size() * sizeof(float));

    // Copy audio samples into the TensorFlow tensor.
    std::memcpy(TF_TensorData(tensor), audioSamples.data(), audioSamples.size() * sizeof(float));

    // At this point, `tensor` contains your audio data and can be used with TensorFlow operations.
    return tensor;
}

std::string* _Sound::LoadClassLabels(const std::string& filePath)
{
    std::ifstream file(filePath);
    std::string line;
    std::string* labels = new std::string[300];
    int number = 0;

    while (std::getline(file, line))
    {
        labels[number] = line;
        number++;
    }

    return labels;
}