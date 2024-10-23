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
#include "Speech Recognition.h"
#include "Variables.h"
#include "Settings.h"
#include "Time.h"
#include "Utilities.h"

using namespace std;

// TODO: Cut record every 5 seconds
// This funnction will listen through the microphone and save raw sound data then upload to MySQL Database
void _Sound::Sound()
{
    //const int sampleRate = 48000;
    //const int numChannels = 2;
    //const int bitsPerSample = 24;
    //const int seconds = 5;
    const int recordTime = 5; // Record for 5 seconds
    const PaSampleFormat sampleFormat = paFloat32;
    std::vector<float> recordedSamples;
    string command;
    string filename;
    string transcription;
    string sound_detection;
    //sound_directory = _Settings::GetSoundDirectory();
    ostringstream oss;

    while (true)
    {
        auto t = std::time(nullptr);
        auto tm = *std::localtime(&t);
        oss << std::put_time(&tm, "%d-%m-%Y_%H-%M-%S");
        string current_time = oss.str();

        PaError err = Pa_Initialize();
        if (err != paNoError) return;

        PaStream* stream;
        err = Pa_OpenDefaultStream(&stream, sound_channels, 0, sampleFormat, sound_sample_rate, paFramesPerBufferUnspecified, _Sound::RecordCallback, &recordedSamples);
        if (err != paNoError) return;

        err = Pa_StartStream(stream);
        if (err != paNoError) return;

        // Use chrono to accurately measure time for recording duration
        auto startTime = std::chrono::high_resolution_clock::now();
        bool recording = true;
        while (recording)
        {
            auto currentTime = std::chrono::high_resolution_clock::now();
            auto elapsed = std::chrono::duration_cast<std::chrono::seconds>(currentTime - startTime).count();
            if (elapsed >= recordTime) 
            {
                recording = false;
            }
        }

        //// Record for a few seconds
        //Pa_Sleep(seconds * 1000);

        err = Pa_CloseStream(stream);
        if (err != paNoError) return;

        Pa_Terminate();

        filename = sound_directory.c_str();
        filename += "/";
        filename += current_time.c_str();
        filename += "_output.wav";

        // Write to WAV file
        std::ofstream outFile(filename.c_str(), std::ios::binary);
        WriteWAVHeader(outFile, sound_sample_rate, sound_bits_per_sample, sound_channels, recordedSamples.size());
        for (float sample : recordedSamples)
        {
            int16_t intSample = static_cast<int16_t>(sample * 32767);
            outFile.write(reinterpret_cast<const char*>(&intSample), sizeof(intSample));
        }
        outFile.close();

        //Debug
        //std::cout << "Recording finished." << std::endl;

        if (speech_recognition_enable)
        {
            // Whisper transcription
            transcription = _SpeechRecognition::SpeechRecognition(filename);
            cout << "transcription: " << transcription << endl; // Debug
        }
        if (sound_recognition)
        {
            // Sound recognition that detects small sounds not transription
            //sound_detection = _Sound::SoundRecognition(filename);
            sound_detection = "NULL";
        }

        _Sound::MySQL_Sound(filename, current_time, transcription, sound_detection);

        if (sound_memory)
        {
            for (int x = 0; x < 1000; x++)
            {
                if (stm_sound_path[x][0] == "")
                {
                    lock_guard<mutex> lock(mtx_stm_sound_path[x][0]);
                    lock_guard<mutex> lock2(mtx_stm_sound_path[x][1]);
                    lock_guard<mutex> lock3(mtx_stm_sound_path[x][2]);
                    lock_guard<mutex> lock4(mtx_stm_sound_path[x][3]);
                    stm_sound_path[x][0] = filename;
                    stm_sound_path[x][1] = current_time;
                    stm_sound_path[x][2] = transcription;
                    stm_sound_path[x][3] = sound_detection;
                    break;
                }
                if (stm_sound_path[x][0] != "" && x == 999)
                {
                    for (int y = 0; y < 999; y++)
                    {
                        //lock_guard<mutex> lock(mtx_stm_sound_path[y][0]);
                        //lock_guard<mutex> lock2(mtx_stm_sound_path[y][1]);
                        //lock_guard<mutex> lock3(mtx_stm_sound_path[y + 1][0]);
                        //lock_guard<mutex> lock4(mtx_stm_sound_path[y + 1][1]);
                        stm_sound_path[y][0] = stm_sound_path[y + 1][0];
                        stm_sound_path[y][1] = stm_sound_path[y + 1][1];
                        stm_sound_path[y][2] = stm_sound_path[y + 1][2];
                        stm_sound_path[y][3] = stm_sound_path[y + 1][3];
                    }
                    lock_guard<mutex> lock(mtx_stm_sound_path[999][0]);
                    lock_guard<mutex> lock2(mtx_stm_sound_path[999][1]);
                    lock_guard<mutex> lock3(mtx_stm_sound_path[999][2]);
                    lock_guard<mutex> lock4(mtx_stm_sound_path[999][3]);
                    stm_sound_path[999][0] = filename;
                    stm_sound_path[999][1] = current_time;
                    stm_sound_path[999][2] = transcription;
                    stm_sound_path[999][3] = sound_detection;
                    break;
                }
            }
        }
    }
}

// The following function will upadte the MySQL database with raw sound information
void _Sound::MySQL_Sound(string filename, string current_time, string transcription, string sound_recognition)
{
    MYSQL* conn;
    MYSQL_RES* result;
    string sql1;
    string sql2;
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
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_sound_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        // Create the table if it does not exist
        sql1 = "CREATE TABLE IF NOT EXISTS `";
        sql1 += table_name.c_str();
        sql1 += "`(filelocation TEXT, date TEXT, transcription TEXT, sound_recognition TEXT)";
        mysql_query(conn, sql1.c_str());

        sql2 = "INSERT INTO `";
        sql2 += table_name.c_str();
        sql2 += "`(date, filelocation, transcription, sound_recognition) VALUES(\"";
        sql2 += current_date.c_str();
        sql2 += "\", \"";
        sql2 += filename.c_str();
        sql2 += "\", \"";
        sql2 += transcription.c_str();
        sql2 += "\", \"";
        sql2 += sound_recognition.c_str();
        sql2 += "\");";
        mysql_query(conn, sql2.c_str());
    }
}

// This function will recall sound, recognition, and both memory an x amount of minutes or seconds
//  1. Get the current time
//  2. Convert the string to integers and subtract the time from current time
//  3. Recall the memory from the x amount of time to the current time
// Returns filename of the encoded sound file
void _Sound::RecallSoundMemory(int search_years, int search_months, int search_days, int search_hours, int search_minutes, int search_seconds, int duration_years, int duration_months, int duration_days, int duration_hours, int duration_minutes, int duration_seconds, string &encoded_filename, string &transcription, string &sound_recognition)
{
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    ostringstream oss;
    oss << put_time(&tm, "%d-%m-%Y_%H-%M-%S");
    string current_time = oss.str();

    MYSQL* conn;
    MYSQL_RES* result;
    MYSQL_ROW row;
    string sql1;
    string table_name = "sound";
    string str_current_years;
    string str_current_months;
    string str_current_days;
    string str_current_hours;
    string str_current_minutes;
    long long current_seconds = _Time::ConvertDateToSeconds(current_time);
    long long database_temp_seconds;
    long long search_seconds_long;
    long long difference_seconds;
    long long sum_seconds_duration;
    long long sum_seconds_long;
    long long temp_seconds;
    string* past_data = new string[4];
    string* current_data = new string[4];
    string* filenames = new string[1000];
    //string output_directory = "D:/Temp/";
    
    bool caught = false;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_sound_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        sql1 = "SELECT * FROM ";
        sql1 += table_name.c_str();
        sql1 += ";";
        /*cout << "SQL1: " << sql1 << endl;*/
        mysql_query(conn, sql1.c_str());
        result = mysql_store_result(conn);

        // Convert the search seconds to a single variable
        search_seconds_long = search_years * 31536000;
        search_seconds_long += search_months * 2419200;
        search_seconds_long += search_days * 86400;
        search_seconds_long += search_hours * 3600;
        search_seconds_long += search_minutes * 60;
        search_seconds_long += search_seconds;

        // Convert the amount of time to play after the search variable is found
        sum_seconds_long = duration_years * 31536000;
        sum_seconds_long += duration_months * 2419200;
        sum_seconds_long += duration_days * 86400;
        sum_seconds_long += duration_hours * 3600;
        sum_seconds_long += duration_minutes * 60;
        sum_seconds_long += duration_seconds;

        // Get the difference in seconds from the current seconds to the search seconds
        difference_seconds = current_seconds - search_seconds_long;

        // Get the sum of the seconds from the seaerch parameter to the duration of the search
        sum_seconds_duration = search_seconds_long + sum_seconds_long;

        // Get the file name
        while (row = mysql_fetch_row(result))
        {
            // Find the sound files that correspond to the dates
            // 1. Get the current date
            // 2. Find the file where the search term is included in the file
            //  a. Convert the amount of time to seconds
            database_temp_seconds = _Time::ConvertDateToSeconds(row[0]);

            if (current_data[0] != "")
            {
                past_data[0] = current_data[0];
                past_data[1] = current_data[1];
                past_data[2] = current_data[2];
                past_data[3] = current_data[3];
                current_data[0] = row[0];
                current_data[1] = row[1];
                current_data[2] = row[2];
                current_data[3] = row[3];
            }
            else
            {
                current_data[0] = row[0];
                current_data[1] = row[1];
                current_data[2] = row[2];
                current_data[3] = row[3];
            }

            if (database_temp_seconds >= difference_seconds && !caught)
            {
                filenames[0] = past_data[1];
                filenames[1] = current_data[1];
                transcription = past_data[2] + " ";
                transcription += current_data[2] + " ";
                sound_recognition = past_data[3] + " ";
                sound_recognition += current_data[3] + " ";
                caught = true;
            }
            // Get all of the data until the end of the duration
            if (database_temp_seconds <= sum_seconds_duration && caught)
            {
                // Find a empty space in the filename
                for (int x = 0; x <= 10000; x++)
                {
                    if (filenames[x] == "")
                    {
                        filenames[x] = current_data[1];
                        break;
                    }  
                }

                transcription += current_data[2] + " ";
                sound_recognition += current_data[2] + " ";
                encoded_filename = _Sound::CombineWAV(filenames, sound_directory);
                return;
            }
        }
    }

    current_time.clear();
    oss.str(""); // Correct way to clear the contents of the stringstream
    oss.clear(); // Clear any error flags
    return;
}

// Function to combine WAV Files and return the destination of the file
string _Sound::CombineWAV(string* wav_files, string sound_directory)
{
    auto t = std::time(nullptr);
    auto tm = *std::localtime(&t);

    ostringstream oss;
    oss << put_time(&tm, "%d-%m-%Y_%H-%M-%S");
    string current_time = oss.str();

    string output_file = sound_directory + "/" + current_time + "_combined_file.wav";
    SF_INFO sfinfo;
    SNDFILE* infile;
    SNDFILE* outfile;

    // Open the first input file to read the format
    if (!(infile = sf_open(wav_files[0].c_str(), SFM_READ, &sfinfo)))
    {
        std::cerr << "Could not open input file: " << wav_files[0] << std::endl;
        return NULL;
    }

    // Create the output file with the same format as the input file
    if (!(outfile = sf_open(output_file.c_str(), SFM_WRITE, &sfinfo))) 
    {
        return NULL;
    }

    std::vector<short> buffer(1024);
    sf_count_t num_read;

    // Process each input file
    for (int x = 0; x <= sizeof(wav_files); x++)
    {
        infile = sf_open(wav_files[x].c_str(), SFM_READ, &sfinfo);
        if (!infile)
        {
            return NULL;
        }

        // Read samples from input file and write them to output file
        while ((num_read = sf_read_short(infile, buffer.data(), buffer.size())) > 0)
        {
            sf_write_short(outfile, buffer.data(), num_read);
        }

        sf_close(infile); // Close the current input file
    }

    sf_close(outfile); // Close the output file
    return output_file;
}

// Function to write the WAV header to a file
void _Sound::WriteWAVHeader(std::ofstream& file, int sampleRate, int bitsPerSample, int numChannels, uint32_t numSamples)
{
    WAVHeader header;
    header.numChannels = numChannels;
    header.sampleRate = sampleRate;
    header.bitsPerSample = bitsPerSample;
    header.byteRate = sampleRate * numChannels * bitsPerSample / 8;
    header.blockAlign = numChannels * bitsPerSample / 8;
    header.subchunk2Size = numSamples * numChannels * bitsPerSample / 8;
    header.chunkSize = 36 + header.subchunk2Size;

    file.write(reinterpret_cast<const char*>(&header), sizeof(header));
}

// PortAudio callback function
int _Sound::RecordCallback(const void* inputBuffer, void* outputBuffer,
    unsigned long framesPerBuffer,
    const PaStreamCallbackTimeInfo* timeInfo,
    PaStreamCallbackFlags statusFlags,
    void* userData)
{
    std::vector<float>* recordedSamples = static_cast<std::vector<float>*>(userData);
    const float* input = static_cast<const float*>(inputBuffer);

    for (unsigned long i = 0; i < framesPerBuffer; ++i)
    {
        recordedSamples->push_back(*input++);
    }

    return paContinue;
}

string _Sound::SoundRecognition(string wav_location)
{
    string model_path = "D:/_test3_audio/saved_model"; // Make this into a setting...
    string labelsPath = "D:/_test3_audio/saved_model/assets/labels.csv";

    std::vector<float> audioSamples = _Sound::loadWavFile(wav_location);
    int sampleRate = 44100;

    TF_Tensor* audio_tensor = _Sound::ImportWaveformAsTensor(audioSamples, sound_sample_rate);

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
        return NULL;
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

            //std::cout << "Frame " << i << ": Most probable class = " << classLabels[maxScoreIndex]
            //    << ", Score = " << maxScore << std::endl;
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