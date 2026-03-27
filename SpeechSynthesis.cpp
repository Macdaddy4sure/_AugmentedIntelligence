/*
    Copyright(C) 2025 Tyler Crockett | Macdaddy4sure.ai

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
#include "Settings.hpp"
#include "SpeechSynthesis.hpp"
#include "Short-Term Memory.hpp"
#include "Thought.hpp"
#include "Working-Memory.hpp"

using namespace std;

//void _SpeechSynthesis::TextToSpeech(string text)
//{
//    // Create a client
//    std::string project_id = "your-project-id";
//    auto text_to_speech_client = std::make_unique<google::cloud::texttospeech::v1beta1::TextToSpeechClient>(
//        google::cloud::Options{}
//        .set<google::cloud::UnifiedCredentialsOption>(google::cloud::MakeUnifiedCredentials())
//        .set<google::cloud::AuthorityOption>("https://texttospeech.googleapis.com"));
//
//    // Set up the synthesis request
//    std::string text = "Hello, world!";
//    auto input = google::cloud::texttospeech::v1beta1::SynthesisInput();
//    input.set_text(text);
//
//    auto voice = google::cloud::texttospeech::v1beta1::VoiceSelectionParams();
//    voice.set_language_code("en-US");
//    voice.set_name("en-US-Wavenet-A");
//
//    auto audio_config = google::cloud::texttospeech::v1beta1::AudioConfig();
//    audio_config.set_audio_encoding(google::cloud::texttospeech::v1beta1::AudioEncoding::LINEAR16);
//    audio_config.set_sample_rate_hertz(44100);
//
//    // Synthesize the text
//    auto response = text_to_speech_client->SynthesizeSpeech(input, voice, audio_config);
//
//    // Create an RtAudio instance
//    RtAudio dac;
//    unsigned int bufferFrames = 256;
//
//    // Open a stream to play the synthesized audio
//    RtAudio::StreamParameters parameters;
//    parameters.deviceId = dac.getDefaultOutputDevice();
//    parameters.nChannels = 1;  // Mono
//    parameters.firstChannel = 0;
//
//    dac.openStream(&parameters, &parameters, RTAUDIO_FLOAT32, 44100, &bufferFrames, NULL);
//
//    // Play the synthesized audio
//    RtAudio::StreamOptions options;
//    dac.startStream();
//
//    char* buffer = new char[bufferFrames * sizeof(float)];
//    int offset = 0;
//
//    while (offset < response.audio_content.size())
//    {
//        // Get the next chunk of audio data from the synthesis response
//        int bytes_to_copy = std::min(bufferFrames * sizeof(float), static_cast<int>(response.audio_content.size() - offset));
//        memcpy(buffer, &response.audio_content[offset], bytes_to_copy);
//
//        // Play the audio chunk
//        dac.writeStream(buffer, bufferFrames);
//        offset += bytes_to_copy;
//    }
//
//    delete[] buffer;
//    dac.stopStream();
//    dac.closeStream();
//}