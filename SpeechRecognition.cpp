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

/* 
    Other Licenses:
    onlinebin / online - gmm - decode - faster.cc

    Copyright 2012 Cisco Systems (author: Matthias Paulik)

    Modifications to the original contribution by Cisco Systems made by:
    Vassil Panayotov

    See ../../COPYING for clarification regarding multiple authors

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

    THIS CODE IS PROVIDED *AS IS* BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
    KIND, EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION ANY IMPLIED
    WARRANTIES OR CONDITIONS OF TITLE, FITNESS FOR A PARTICULAR PURPOSE,
    MERCHANTABLITY OR NON-INFRINGEMENT.
    See the Apache 2 License for the specific language governing permissions and
    limitations under the License.
*/

#include "AugmentedIntelligence.h"
#include "Speech Recognition.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reference.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

using namespace std;

//void _SpeechRecognition::SpeechRecognition()
//{
//    //ps_decoder_t* decoder;
//    //ps_config_t* config;
//    //ps_endpointer_t* ep;
//    //ad_rec_t* ad;
//    //short* frame;
//    //size_t frame_size;
//
//    //config = ps_config_init(NULL);
//    //ps_default_search_args(config);
//
//    //decoder = ps_init(config);
//
//    //// initialize the pocketsphinx decoder
//    //ad = ad_open_dev("sysdefault", 192000);
//    //// open default microphone at default samplerate
//
//    //while (true)
//    //{
//    //    string decoded_speech = _SpeechRecognition::Recognize_From_Microphone(decoder, config, ep, ad);          // call the function to captureand decode speech
//    //    cout << "Decoded Speech: " << decoded_speech << "\n" << endl;                     // send decoded speech to screen
//    //}
//
//    //ad_close(ad);
//}
//
//string _SpeechRecognition::Recognize_From_Microphone(ps_decoder_t* decoder, ps_config_t* config, ps_endpointer_t* ep, ad_rec_t* ad)
//{
//    //uint8 utt_started, in_speech;
//    //int16 adbuf[4096];
//    //char const* hyp;
//    //int32 k;                           // holds the number of frames in the audio buffer
//
//    //ad_start_rec(ad);                               // start recording
//    //ps_start_utt(decoder);                               // mark the start of the utterance
//    //utt_started = FALSE;                            // clear the utt_started flag
//
//    //while (true)
//    //{
//    //    k = ad_read(ad, adbuf, 4096);               // capture the number of frames in the audio buffer
//    //    ps_process_raw(decoder, adbuf, k, FALSE, FALSE); // send the audio buffer to the pocketsphinx decoder
//
//    //    in_speech = ps_get_in_speech(decoder);           // test to see if speech is being detected
//
//    //    if (in_speech && !utt_started)              // if speech has started and utt_started flag is false
//    //    {
//    //        utt_started = TRUE;                     // then set the flag
//    //    }
//
//    //    if (!in_speech && utt_started)              // if speech has ended and the utt_started flag is true 
//    //    {
//    //        ps_end_utt(decoder);                          // then mark the end of the utterance
//    //        ad_stop_rec(ad);                         // stop recording
//    //        hyp = ps_get_hyp(decoder, NULL);             // query pocketsphinx for "hypothesis" of decoded statement
//    //        return hyp;                              // the function returns the hypothesis
//    //        break;                                   // exit the while loop and return to main
//    //    }
//    //}
//}