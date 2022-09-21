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
    NVIDIA’s platforms and application frameworks enable developers to build a wide array of AI applications. Consider potential algorithmic bias when choosing or creating the models being deployed. Work with the model’s developer to ensure that it meets the requirements for the relevant industry and use case; that the necessary instruction and documentation are provided to understand error rates, confidence intervals, and results; and that the model is being used under the conditions and in the manner intended.
*/

#include <iostream>
#include <cuda.h>
#include <cuda_runtime.h>
#include <algorithm>
#include <cctype>
#include <chrono>
#include <cmath>
#include <complex>
#include <cstdlib>
#include <ctime>
#include <stdio.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <curl/curl.h>
#include <curl/curlver.h>
#include <curl/easy.h>
#include <curl/system.h>
#include <string>
#include <cuda_runtime.h>
#include <helper_functions.h>
#include <helper_cuda.h>
#include <errno.h>
#include <fcntl.h>
#include <filesystem>
#include <fstream>
#include <io.h>
#include <iomanip>
#include <mutex>
#include <mysql.h>
//#include <Python.h>
#include <queue>
#include <random>
#include <stdio.h>
#include <stdlib.h>
#include <stdexcept>
#include <sys/stat.h>
#include <sys/types.h>
#include <thread>
#include <time.h>
#include <vector>
#include <winsock2.h>
#include <windows.h>
//#include <deepspeech.h>
//#include <alphabet.h>
//#include <ctcdecode/decoder_utils.h>
#include <assert.h>
#include <errno.h>
#include <math.h>
#include <time.h>
#include <cmath>
#include <memory>
#include <utility>
#include <vector>
//#include <modelstate.h>
//#include <workspace_status.h>
//#include <tfmodelstate.h>
#include <wtypes.h>
//#include <dirent.h>
//#include <unistd.h>
//#include "feat/feature-mfcc.h"
//#include "online/online-audio-source.h"
//#include "online/online-feat-input.h"
//#include "online/online-decodable.h"
//#include "online/online-faster-decoder.h"
//#include "online/onlinebin-util.h"
//#include <ctcdecode/ctc_beam_search_decoder.h>
//#include <boost/program_options.hpp>
//#include <ctcdecode/decoder_utils.h>
//#include <ctcdecode/scorer.h>
//#include <word2vec.hpp>
//#include <wordReader.hpp>
//#include <mapper.hpp>
//#include <darknet.h>
#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>
//#include <tensorflow/cc/saved_model/loader.h>
//#include <tensorflow/cc/ops/const_op.h>
//#include <tensorflow/cc/ops/image_ops.h>
//#include <tensorflow/cc/ops/standard_ops.h>
//#include <tensorflow/core/framework/graph.pb.h>
//#include <tensorflow/core/framework/tensor.h>
//#include <tensorflow/core/graph/default_device.h>
//#include <tensorflow/core/graph/graph_def_builder.h>
//#include <tensorflow/core/lib/core/errors.h>
//#include <tensorflow/core/lib/core/stringpiece.h>
//#include <tensorflow/core/lib/core/threadpool.h>
//#include <tensorflow/core/lib/io/path.h>
//#include <tensorflow/core/lib/strings/stringprintf.h>
//#include <tensorflow/core/platform/init_main.h>
//#include <tensorflow/core/platform/logging.h>
//#include <tensorflow/core/platform/types.h>
//#include <tensorflow/core/public/session.h>
//#include <tensorflow/cc/client/client_session.h>
//#include <tensorflow/core/util/command_line_flags.h>
//#include <tensorflow/core/framework/tensor_slice.h>
//#include <absl/types/optional.h>
#include <opencv2/opencv.hpp>
#include <opencv2/dnn.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/core/mat.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc/imgproc_c.h>
#include <boost/bind.hpp>
#include <boost/asio.hpp>
#include <boost/asio/ssl.hpp>

#pragma comment(lib, "WS2_32")

//#define PY_SSIZE_T_CLEAN

using namespace std;
using namespace filesystem;
using namespace tesseract;
using namespace cv;
//using namespace cv::dnn;
//using tensorflow::int32;
//using tensorflow::Status;
//using tensorflow::string;
//using tensorflow::Tensor;
//using tensorflow::tstring;
//using tensorflow::SavedModelBundle;
//using tensorflow::SessionOptions;
//using tensorflow::RunOptions;
//using tensorflow::Scope;
//using tensorflow::ClientSession;

class _AI
{
public:
    static void InitThreads();
    static void InitDatabases();
    static string getOsName();
};

//class _SpeechRecognition
//{
//public:
//    static void SpeechRecognition();
//};

#pragma once