#pragma once

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
#include "Settings.hpp"

using namespace std;

// command-line parameters
struct whisper_params {
    int32_t n_threads = std::min(6, (int32_t)std::thread::hardware_concurrency());
    int32_t prompt_seconds = whisper_prompt_seconds;
    int32_t command_seconds = whisper_command_seconds;
    int32_t capture_id = 1;
    int32_t max_tokens = 1024;
    int32_t audio_ctx = 0;

    float vad_thold = 0.8f;
    float freq_thold = 100.0f;

    float grammar_penalty = 100.0f;

    grammar_parser::parse_state grammar_parsed;

    bool translate = false;
    bool print_special = false;
    bool print_energy = false;
    bool no_timestamps = true;
    bool use_gpu = true;
    bool flash_attn = false;

    std::string language = "en";
    std::string model = whisper_model;
    std::string fname_out;
    std::string commands;
    std::string prompt = speech_commands_activation;
    std::string end_prompt = speech_commands_terminator;
    std::string context;
    std::string grammar;

    // A regular expression that matches tokens to suppress
    std::string suppress_regex;
};

static const std::map<std::string, enum ggml_ftype> GGML_FTYPE_MAP = {
    {"q4_0", GGML_FTYPE_MOSTLY_Q4_0},
    {"q4_1", GGML_FTYPE_MOSTLY_Q4_1},
    {"q5_0", GGML_FTYPE_MOSTLY_Q5_0},
    {"q5_1", GGML_FTYPE_MOSTLY_Q5_1},
    {"q8_0", GGML_FTYPE_MOSTLY_Q8_0},
    {"q2_k", GGML_FTYPE_MOSTLY_Q2_K},
    {"q3_k", GGML_FTYPE_MOSTLY_Q3_K},
    {"q4_k", GGML_FTYPE_MOSTLY_Q4_K},
    {"q5_k", GGML_FTYPE_MOSTLY_Q5_K},
    {"q6_k", GGML_FTYPE_MOSTLY_Q6_K},
};

class _Whisper
{
public:
    static void Whisper();
    static string transcribe(whisper_context* ctx, const whisper_params& params, const std::vector<float>& pcmf32, const std::string& grammar_rule, float& logprob_min, float& logprob_sum, int& n_tokens, int64_t& t_ms);
    static int process_general_transcription(struct whisper_context* ctx, whisper_params& params);
    static std::string trim(const std::string& s);
    static std::string replace(const std::string& s, const std::string& from, const std::string& to);
    static void high_pass_filter(std::vector<float>& data, float cutoff, float sample_rate);
    static bool vad_simple(std::vector<float>& pcmf32, int sample_rate, int last_ms, float vad_thold, float freq_thold, bool verbose);
    static float similarity(const std::string& s0, const std::string& s1);
    static int audioCallback(void* outputBuffer, void* inputBuffer, unsigned int nBufferFrames, double streamTime, RtAudioStreamStatus status, void* userdata);
    static void get_audio(int seconds);
    static bool PromptRecognize(string prompt);
    static std::string gpt_random_prompt(std::mt19937& rng);
    static std::map<std::string, int32_t> json_parse(const std::string& fname);
    static std::string convert_to_utf8(const std::wstring& input);
    static std::wstring convert_to_wstring(const std::string& input);
    static void gpt_split_words(std::string str, std::vector<std::string>& words);
    static std::vector<gpt_vocab::id> gpt_tokenize(const gpt_vocab& vocab, const std::string& text);
    static std::vector<gpt_vocab::id> parse_tokens_from_string(const std::string& input, char delimiter);
    static std::map<std::string, std::vector<gpt_vocab::id>> extract_tests_from_file(const std::string& fpath_test);
    static void test_gpt_tokenizer(gpt_vocab& vocab, const std::string& fpath_test);
    static bool gpt_vocab_init(const std::string& fname, gpt_vocab& vocab);
    static gpt_vocab::id gpt_sample_top_k_top_p(const gpt_vocab& vocab, const float* logits, int top_k, double top_p, double temp, std::mt19937& rng);
    static gpt_vocab::id gpt_sample_top_k_top_p_repeat(const gpt_vocab& vocab, const float* logits, const int32_t* last_n_tokens_data, size_t last_n_tokens_data_size, int top_k, double top_p, double temp, int repeat_last_n, float repeat_penalty, std::mt19937& rng);
    static bool is_wav_buffer(const std::string buf);
    static bool read_wav(const std::string& fname, std::vector<float>& pcmf32, std::vector<std::vector<float>>& pcmf32s, bool stereo);
    static std::string to_timestamp(int64_t t, bool comma);
    static int timestamp_to_sample(int64_t t, int n_samples, int whisper_sample_rate);
    static bool is_file_exist(const char* fileName);
    static bool speak_with_file(const std::string& command, const std::string& text, const std::string& path, int voice_id);
    static void ggml_print_ftypes(FILE* fp);
    static enum ggml_ftype ggml_parse_ftype(const char* str);
    static bool ggml_common_quantize_0(std::ifstream& finp, std::ofstream& fout, const ggml_ftype ftype, const std::vector<std::string>& to_quant, const std::vector<std::string>& to_skip);
};

