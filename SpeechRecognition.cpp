/*
    Copyright(C) 2022 Tyler Crockett | Macdaddy4sure.com

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
//using namespace fst;

//void _SpeechRecognition::SpeechRecognition()
//{
//    //typedef kaldi::int32 int32;
//    //typedef OnlineFeInput<Mfcc> FeInput;
//
//    //// Up to delta-delta derivative features are calculated (unless LDA is used)
//    //const int32 kDeltaOrder = 2;
//    //// Time out interval for the PortAudio source
//    //const int32 kTimeout = 500; // half second
//    //// Input sampling frequency is fixed to 16KHz
//    //const int32 kSampleFreq = 16000;
//    //// PortAudio's internal ring buffer size in bytes
//    //const int32 kPaRingSize = 32768;
//    //// Report interval for PortAudio buffer overflows in number of feat. batches
//    //const int32 kPaReportInt = 4;
//
//    //const char* usage =
//    //    "Decode speech, using microphone input(PortAudio)\n\n"
//    //    "Utterance segmentation is done on-the-fly.\n"
//    //    "Feature splicing/LDA transform is used, if the optional(last) argument "
//    //    "is given.\n"
//    //    "Otherwise delta/delta-delta(2-nd order) features are produced.\n\n"
//    //    "Usage: online-gmm-decode-faster [options] <model-in>"
//    //    "<fst-in> <word-symbol-table> <silence-phones> [<lda-matrix-in>]\n\n"
//    //    "Example: online-gmm-decode-faster --rt-min=0.3 --rt-max=0.5 "
//    //    "--max-active=4000 --beam=12.0 --acoustic-scale=0.0769 "
//    //    "model HCLG.fst words.txt '1:2:3:4:5' lda-matrix";
//    ////ParseOptions po(usage);
//    //BaseFloat acoustic_scale = 0.1;
//    //int32 cmn_window = 600, min_cmn_window = 100;
//    //int32 right_context = 4, left_context = 4;
//
//    //kaldi::DeltaFeaturesOptions delta_opts;
//    //delta_opts.Register(&po);
//    //OnlineFasterDecoderOpts decoder_opts;
//    //OnlineFeatureMatrixOptions feature_reading_opts;
//    //decoder_opts.Register(&po, true);
//    //feature_reading_opts.Register(&po);
//
//    ////po.Register("left-context", &left_context, "Number of frames of left context");
//    ////po.Register("right-context", &right_context, "Number of frames of right context");
//    ////po.Register("acoustic-scale", &acoustic_scale,
//    ////    "Scaling factor for acoustic likelihoods");
//    ////po.Register("cmn-window", &cmn_window,
//    ////    "Number of feat. vectors used in the running average CMN calculation");
//    ////po.Register("min-cmn-window", &min_cmn_window,
//    ////    "Minumum CMN window used at start of decoding (adds "
//    ////    "latency only at start)");
//
//    ////po.Read(argc, argv);
//    ////if (po.NumArgs() != 4 && po.NumArgs() != 5) {
//    ////    po.PrintUsage();
//    ////    return 1;
//    ////}
//
//    //string model_rxfilename = po.GetArg(1),
//    //    fst_rxfilename = po.GetArg(2),
//    //    word_syms_filename = po.GetArg(3),
//    //    silence_phones_str = po.GetArg(4),
//    //    lda_mat_rspecifier = po.GetOptArg(5);
//
//    //Matrix<BaseFloat> lda_transform;
//
//    //if (lda_mat_rspecifier != "")
//    //{
//    //    bool binary_in;
//    //    Input ki(lda_mat_rspecifier, &binary_in);
//    //    lda_transform.Read(ki.Stream(), binary_in);
//    //}
//
//    //std::vector<int32> silence_phones;
//    //if (!SplitStringToIntegers(silence_phones_str, ":", false, &silence_phones))
//    //    KALDI_ERR << "Invalid silence-phones string " << silence_phones_str;
//    //if (silence_phones.empty())
//    //    KALDI_ERR << "No silence phones given!";
//
//    //TransitionModel trans_model;
//    //AmDiagGmm am_gmm;
//    //{
//    //    bool binary;
//    //    Input ki(model_rxfilename, &binary);
//    //    trans_model.Read(ki.Stream(), binary);
//    //    am_gmm.Read(ki.Stream(), binary);
//    //}
//
//    //fst::SymbolTable* word_syms = NULL;
//    //if (!(word_syms = fst::SymbolTable::ReadText(word_syms_filename)))
//    //    KALDI_ERR << "Could not read symbol table from file "
//    //    << word_syms_filename;
//
//    //fst::Fst<fst::StdArc>* decode_fst = ReadDecodeGraph(fst_rxfilename);
//}
