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

/*
    Copyright(C) 2024 TensorFlow

    https://github.com/tensorflow/tensorflow/blob/master/LICENSE

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
    Copyright(C) 2024 OpenCV

    https://github.com/opencv/opencv/blob/master/LICENSE

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
#include "Vision.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Awareness.hpp"
#include "Reference.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;
using namespace filesystem;
using namespace chrono;
using namespace chrono_literals;
using namespace cv;
using namespace cv::dnn;

// Constants.
const float INPUT_WIDTH = 3840.0;
const float INPUT_HEIGHT = 2160.0;
const float SCORE_THRESHOLD = 0.5;
const float NMS_THRESHOLD = 0.45;
const float CONFIDENCE_THRESHOLD = 0.45;

// Text parameters.
const float FONT_SCALE = 0.7;
const int FONT_FACE = FONT_HERSHEY_SIMPLEX;
const int THICKNESS = 1;

// Colors.
Scalar BLACK = Scalar(0, 0, 0);
Scalar BLUE = Scalar(255, 178, 50);
Scalar YELLOW = Scalar(0, 255, 255);
Scalar RED = Scalar(0, 0, 255);

// char* coco_classes[] = { "person","bicycle","car","motorcycle","airplane","bus","train","truck","boat","traffic light","fire hydrant","stop sign","parking meter","bench","bird","cat","dog","horse","sheep","cow","elephant","bear","zebra","giraffe","backpack","umbrella","handbag","tie","suitcase","frisbee","skis","snowboard","sports ball","kite","baseball bat","baseball glove","skateboard","surfboard","tennis racket","bottle","wine glass","cup","fork","knife","spoon","bowl","banana","apple","sandwich","orange","broccoli","carrot","hot dog","pizza","donut","cake","chair","couch","potted plant","bed","dining table","toilet","tv","laptop","mouse","remote","keyboard","cell phone","microwave","oven","toaster","sink","refrigerator","book","clock","vase","scissors","teddy bear","hair drier","toothbrush" };

// Todo
// User defined image sequence

void _Vision::Vision()
{
    if (camera1_enabled)
    {
        //_Vision::VisionRawCamera1();
        thread VisionCamera1Raw(_Vision::VisionRawCamera1);
        VisionCamera1Raw.std::thread::detach();
        //thread VisionCamera1MySQL(_Vision::MySQLVisionRAWCamera1);
    }
    if (camera2_enabled)
    {
        thread VisionCamera2Raw(_Vision::VisionRawCamera2);
        VisionCamera2Raw.std::thread::detach();
        //thread VisionCamera2MySQL(_Vision::MySQLVisionRAWCamera2);
    }
}

// The following function will initialize the webcam and record raw visual data to memory
void _Vision::VisionRawCamera1()
{
    string current_time;
    ostringstream oss;
    cv::Mat frame;
    string image_path;
    int frameNumber = 0;
    string swap;
    string swap2;

    // Open the default video camera
    cv::VideoCapture cap(0);

    // Check if the webcam is opened successfully
    if (!cap.isOpened())
    {
        std::cerr << "Error opening video camera" << std::endl;
    }

    cap.set(cv::CAP_PROP_FRAME_WIDTH, camera1_resolution_height);
    cap.set(cv::CAP_PROP_FRAME_HEIGHT, camera1_resolution_width);

    // Set the FPS of the video capture
    cap.set(cv::CAP_PROP_FPS, camera1_fps);

    // Debug
    //std::string model_path = "D:/_AugmentedIntelligence/_src/tensorflow_models/coco_object_detection/saved_model/";

    // Initialize TensorFlow
    TF_Status* status = TF_NewStatus();

    // Call LoadGraph to load the model into a graph
    //TF_Graph* graph = LoadGraph(model_path.c_str(), status);

    TF_Graph* graph = TF_NewGraph();
    TF_SessionOptions* options = TF_NewSessionOptions();
    TF_Buffer* run_opts = nullptr;
    const char* tags = "serve";
    TF_Session* session = TF_LoadSessionFromSavedModel(options, nullptr, tensorflow_model.c_str(), &tags, 1, graph, nullptr, status);

    for (;;)
    {
        if (vision_object_detection && !vision_object_detection_remote_enabled && !visual_reasoning)
        {
            if (visual_memory)
            {
                auto now = std::chrono::system_clock::now();
                // Convert to a time_t object, representing system time in seconds since the epoch
                std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
                // Convert to local time
                std::tm* now_tm = std::localtime(&now_time_t);

                oss << std::put_time(now_tm, "%d-%m-%Y_%H-%M-%S");
                current_time = oss.str();

                // Capture frame-by-frame from the camera
                cap >> frame;

                // If the frame is empty, break immediately
                //if (frame.empty())
                //    break;

                image_path = vision_memory_directory + "/camera1/" + current_time.c_str() + "_" + to_string(frameNumber) + "_camera1.jpg";
                //cout << image_path << endl;
                cv::imwrite(image_path, frame);
                std::cout << "Saved: " << image_path << std::endl;

                //vector<vector<string>> coco_object_detection = _Vision::ObjectDetectionBalls(frame);
                vector<vector<string>> coco_object_detection = _Vision::ObjectDetectionSequence(status, graph, options, run_opts, tags, session, frame);
                //vector<vector<string>> coco_object_detection = _Vision::ObjectDetection(frame);

                _Vision::MySQLVisionRAWCamera1(image_path, camera1_fps, coco_object_detection, "NULL");

                for (int x = 0; x < 1000; x++)
                {
                    if (stm_vision_path_camera1[x][0].empty())
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera1[x][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_path_camera1[x][1]);
                        stm_vision_path_camera1[x][0] = image_path;
                        stm_vision_path_camera1[x][1] = current_time;
                        break;
                    }
                    if (x == 999 && !stm_vision_path_camera1[x][0].empty())
                    {
                        for (int y = 0; y < 999; y++)
                        {
                            lock_guard<mutex> lock(mtx_stm_vision_path_camera1[y][0]);
                            lock_guard<mutex> lock1(mtx_stm_vision_path_camera1[y][1]);
                            lock_guard<mutex> lock2(mtx_stm_vision_path_camera1[y + 1][0]);
                            lock_guard<mutex> lock3(mtx_stm_vision_path_camera1[y + 1][1]);
                            stm_vision_path_camera1[y][0] = stm_vision_path_camera1[y + 1][0];
                            stm_vision_path_camera1[y][1] = stm_vision_path_camera1[y + 1][1];
                        }
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera1[999][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_path_camera1[999][1]);
                        stm_vision_path_camera1[999][0] = image_path;
                        stm_vision_path_camera1[999][1] = current_time;
                        break;
                    }
                    if (stm_vision_objects_image_path_camera1[x][0].empty())
                    {
                        lock_guard<mutex> lock1(mtx_stm_vision_objects_image_path_camera1[x][0]);
                        lock_guard<mutex> lock2(mtx_stm_vision_objects_image_path_camera1[x][1]);
                        stm_vision_objects_image_path_camera1[x][0] = coco_object_detection[0][0];
                        stm_vision_objects_image_path_camera1[x][1] = current_time;
                        //cout << "stm_vision_objects_image_path_camera1[x][0]: " << stm_vision_objects_image_path_camera1[x][0] << endl;
                        //cout << "stm_vision_objects_image_path_camera1[x][1]: " << stm_vision_objects_image_path_camera1[x][1] << endl;
                        break;
                    }
                    if (x == 999 && !stm_vision_objects_image_path_camera1[x][0].empty())
                    {
                        for (int y = 0; y < 999; y++)
                        {
                            lock_guard<mutex> lock(mtx_stm_vision_objects_image_path_camera1[y][0]);
                            lock_guard<mutex> lock1(mtx_stm_vision_objects_image_path_camera1[y][1]);
                            lock_guard<mutex> lock2(mtx_stm_vision_objects_image_path_camera1[y + 1][0]);
                            lock_guard<mutex> lock3(mtx_stm_vision_objects_image_path_camera1[y + 1][1]);
                            stm_vision_objects_image_path_camera1[y][0] = stm_vision_objects_image_path_camera1[y + 1][0];
                            stm_vision_objects_image_path_camera1[y][1] = stm_vision_objects_image_path_camera1[y + 1][1];
                            //cout << "stm_vision_objects_image_path_camera1[y][0]: " << stm_vision_objects_image_path_camera1[y][0] << endl;
                            //cout << "stm_vision_objects_image_path_camera1[y][1]: " << stm_vision_objects_image_path_camera1[y][1] << endl;
                        }
                        lock_guard<mutex> lock(mtx_stm_vision_objects_image_path_camera1[999][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_objects_image_path_camera1[999][1]);
                        stm_vision_objects_image_path_camera1[999][0] = coco_object_detection[0][0];
                        stm_vision_objects_image_path_camera1[999][1] = current_time;
                        //cout << "stm_vision_objects_image_path_camera1[999][0]: " << stm_vision_path_camera1[999][0] << endl;
                        //cout << "stm_vision_objects_image_path_camera1[999][1]: " << stm_vision_path_camera1[999][1] << endl;
                        break;
                    }
                }

                // Debug
                //for (int x = 0; x < 999; x++)
                //{
                //    if (stm_vision_path_camera1[x][0] != "")
                //        cout << "stm_vision_path_camera1[" << x << "][0]: " << stm_vision_path_camera1[x][0] << endl;
                //    if (stm_vision_path_camera1[x][1] != "")
                //        cout << "stm_vision_path_camera1[" << x << "][1]: " << stm_vision_path_camera1[x][1] << endl;
                //    if (stm_vision_objects_image_path_camera1[x][0] != "")
                //        cout << "stm_vision_objects_image_path_camera1[" << x << "][0]: " << stm_vision_objects_image_path_camera1[x][0] << endl;
                //    if (stm_vision_objects_image_path_camera1[x][1] != "")
                //        cout << "stm_vision_objects_image_path_camera1[" << x << "][1]: " << stm_vision_objects_image_path_camera1[x][1] << endl;
                //}

                //cout << "Test" << endl;

                if (frameNumber >= camera1_fps)
                    frameNumber = 0;
                else
                    frameNumber++;
                current_time.clear();
                image_path.clear();
                oss.str(""); // Correct way to clear the contents of the stringstream
                oss.clear(); // Clear any error flags
                coco_object_detection.clear();
            }
        }
        else if (vision_object_detection && !vision_object_detection_remote_enabled && visual_reasoning)
        {
            if (visual_memory)
            {
                auto now = std::chrono::system_clock::now();
                // Convert to a time_t object, representing system time in seconds since the epoch
                std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
                // Convert to local time
                std::tm* now_tm = std::localtime(&now_time_t);

                oss << std::put_time(now_tm, "%d-%m-%Y_%H-%M-%S");
                current_time = oss.str();

                // Capture frame-by-frame from the camera
                cap >> frame;

                // If the frame is empty, break immediately
                if (frame.empty())
                    break;

                image_path = vision_memory_directory + "/camera1/" + current_time.c_str() + "_" + to_string(frameNumber) + "_camera1.jpg";
                //cout << image_path << endl;
                cv::imwrite(image_path, frame);
                std::cout << "Saved: " << image_path << std::endl;

                vector<vector<string>> coco_object_detection = _Vision::ObjectDetectionSequence(status, graph, options, run_opts, tags, session, frame);
                //vector<vector<string>> coco_object_detection = _Vision::ObjectDetection(frame);

                string analysis_text_camera1 = _LLM::OllamaAPI("image", "Analyze the following image", image_path);
                analysis_text_camera1 = _Parsers::LLM::LLama3Parse(analysis_text_camera1);
                cout << "Analysis: " << analysis_text_camera1 << endl;

                _Vision::MySQLVisionRAWCamera1(image_path, camera1_fps, coco_object_detection, analysis_text_camera1);

                for (int x = 0; x < 1000; x++)
                {
                    if (stm_vision_path_camera1[x][0].empty())
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera1[x][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_path_camera1[x][1]);
                        stm_vision_path_camera1[x][0] = image_path;
                        stm_vision_path_camera1[x][1] = current_time;
                        break;
                    }
                    if (x == 999 && !stm_vision_path_camera1[x][0].empty())
                    {
                        for (int y = 0; y < 999; y++)
                        {
                            lock_guard<mutex> lock(mtx_stm_vision_path_camera1[y][0]);
                            lock_guard<mutex> lock1(mtx_stm_vision_path_camera1[y][1]);
                            lock_guard<mutex> lock2(mtx_stm_vision_path_camera1[y + 1][0]);
                            lock_guard<mutex> lock3(mtx_stm_vision_path_camera1[y + 1][1]);
                            stm_vision_path_camera1[y][0] = stm_vision_path_camera1[y + 1][0];
                            stm_vision_path_camera1[y][1] = stm_vision_path_camera1[y + 1][1];
                        }
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera1[999][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_path_camera1[999][1]);
                        stm_vision_path_camera1[999][0] = image_path;
                        stm_vision_path_camera1[999][1] = current_time;
                        break;
                    }
                    if (stm_vision_objects_image_path_camera1[x][0].empty())
                    {
                        lock_guard<mutex> lock1(mtx_stm_vision_objects_image_path_camera1[x][0]);
                        lock_guard<mutex> lock2(mtx_stm_vision_objects_image_path_camera1[x][1]);
                        stm_vision_objects_image_path_camera1[x][0] = coco_object_detection[0][0];
                        stm_vision_objects_image_path_camera1[x][1] = current_time;
                        //cout << "stm_vision_objects_image_path_camera1[x][0]: " << stm_vision_objects_image_path_camera1[x][0] << endl;
                        //cout << "stm_vision_objects_image_path_camera1[x][1]: " << stm_vision_objects_image_path_camera1[x][1] << endl;
                        break;
                    }
                    if (x == 999 && !stm_vision_objects_image_path_camera1[x][0].empty())
                    {
                        for (int y = 0; y < 999; y++)
                        {
                            lock_guard<mutex> lock(mtx_stm_vision_objects_image_path_camera1[y][0]);
                            lock_guard<mutex> lock1(mtx_stm_vision_objects_image_path_camera1[y][1]);
                            lock_guard<mutex> lock2(mtx_stm_vision_objects_image_path_camera1[y + 1][0]);
                            lock_guard<mutex> lock3(mtx_stm_vision_objects_image_path_camera1[y + 1][1]);
                            stm_vision_objects_image_path_camera1[y][0] = stm_vision_objects_image_path_camera1[y + 1][0];
                            stm_vision_objects_image_path_camera1[y][1] = stm_vision_objects_image_path_camera1[y + 1][1];
                            //cout << "stm_vision_objects_image_path_camera1[y][0]: " << stm_vision_objects_image_path_camera1[y][0] << endl;
                            //cout << "stm_vision_objects_image_path_camera1[y][1]: " << stm_vision_objects_image_path_camera1[y][1] << endl;
                        }
                        stm_vision_objects_image_path_camera1[999][0] = coco_object_detection[0][0];
                        stm_vision_objects_image_path_camera1[999][1] = current_time;
                        //cout << "stm_vision_objects_image_path_camera1[999][0]: " << stm_vision_path_camera1[999][0] << endl;
                        //cout << "stm_vision_objects_image_path_camera1[999][1]: " << stm_vision_path_camera1[999][1] << endl;
                        break;
                    }
                    //if (stm_vision_objects_text_camera1[x][0].empty())
                    //{
                    //    stm_vision_objects_text_camera1[x][0];
                    //    stm_vision_objects_text_camera1[x][1];
                    //}
                    //if (!stm_vision_objects_text_camera1[x][0].empty() && x == 999)
                    //{
                    //    for (int y = 0; y < 999; y++)
                    //    {
                    //        lock_guard<mutex> lock(mtx_stm_vision_objects_image_path_camera1[y][0]);
                    //        lock_guard<mutex> lock1(mtx_stm_vision_objects_image_path_camera1[y][1]);
                    //        lock_guard<mutex> lock2(mtx_stm_vision_objects_image_path_camera1[y + 1][0]);
                    //        lock_guard<mutex> lock3(mtx_stm_vision_objects_image_path_camera1[y + 1][1]);
                    //        stm_vision_objects_text_camera1[y][0] = stm_vision_objects_text_camera1[y + 1][0];
                    //        stm_vision_objects_text_camera1[y][1] = stm_vision_objects_text_camera1[y + 1][1];
                    //    }
                    //    stm_vision_objects_text_camera1[999][0];
                    //    stm_vision_objects_text_camera1[999][1];
                    //    break;
                    //}
                    if (!stm_vision_analysis_text_camera1[x][0].empty())
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_analysis_text_camera1[x][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_analysis_text_camera1[x][1]);
                        stm_vision_analysis_text_camera1[x][0] = analysis_text_camera1;
                        stm_vision_analysis_text_camera1[x][1] = current_time;
                        break;
                        //mtx_stm_vision_analysis_text_camera1[x][0].unlock();
                        //mtx_stm_vision_analysis_text_camera1[x][1].unlock();
                    }
                    if (!stm_vision_analysis_text_camera1[x][0].empty() && x == 999)
                    {
                        for (int y = 0; y < 999; y++)
                        {
                            lock_guard<mutex> lock(mtx_stm_vision_analysis_text_camera1[y][0]);
                            lock_guard<mutex> lock1(mtx_stm_vision_analysis_text_camera1[y][1]);
                            stm_vision_analysis_text_camera1[y][0] = stm_vision_analysis_text_camera1[y + 1][0];
                            stm_vision_analysis_text_camera1[y][1] = stm_vision_analysis_text_camera1[y + 1][1];
                        }
                        lock_guard<mutex> lock(mtx_stm_vision_analysis_text_camera1[999][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_analysis_text_camera1[999][1]);
                        stm_vision_analysis_text_camera1[999][0] = analysis_text_camera1;
                        stm_vision_analysis_text_camera1[999][1] = current_time;
                        break;

                        //for (int z = 0; z < 1000; z++)
                        //{
                        //    mtx_stm_vision_analysis_text_camera1[z][0].unlock();
                        //    mtx_stm_vision_path_camera1[z][1].unlock();
                        //}
                    }
                }

                //for (int x = 0; x < 999; x++)
                //{
                //    if (stm_vision_path_camera1[x][0] != "")
                //        cout << "stm_vision_path_camera1[" << x << "][0]: " << stm_vision_path_camera1[x][0] << endl;
                //    if (stm_vision_path_camera1[x][1] != "")
                //        cout << "stm_vision_path_camera1[" << x << "][1]: " << stm_vision_path_camera1[x][1] << endl;
                //    if (stm_vision_objects_image_path_camera1[x][0] != "")
                //        cout << "stm_vision_objects_image_path_camera1[" << x << "][0]: " << stm_vision_objects_image_path_camera1[x][0] << endl;
                //    if (stm_vision_objects_image_path_camera1[x][1] != "")
                //        cout << "stm_vision_objects_image_path_camera1[" << x << "][1]: " << stm_vision_objects_image_path_camera1[x][1] << endl;
                //    if (stm_vision_analysis_text_camera1[x][0] != "")
                //        cout << "stm_vision_analysis_text_camera1[" << x << "][0]: " << stm_vision_analysis_text_camera1[x][0] << endl;
                //    if (stm_vision_analysis_text_camera1[x][1] != "")
                //        cout << "stm_vision_analysis_text_camera1[" << x << "][1]: " << stm_vision_analysis_text_camera1[x][1] << endl;
                //}

                if (frameNumber >= camera1_fps)
                    frameNumber = 0;
                else
                    frameNumber++;

                current_time.clear();
                image_path.clear();
                oss.str(""); // Correct way to clear the contents of the stringstream
                oss.clear(); // Clear any error flags
                coco_object_detection.clear();
            }
        }
        else if (!vision_object_detection && !vision_object_detection_remote_enabled && visual_reasoning)
        {
            if (visual_memory)
            {
                auto now = std::chrono::system_clock::now();
                // Convert to a time_t object, representing system time in seconds since the epoch
                std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
                // Convert to local time
                std::tm* now_tm = std::localtime(&now_time_t);

                oss << std::put_time(now_tm, "%d-%m-%Y_%H-%M-%S");
                current_time = oss.str();

                // Capture frame-by-frame from the camera
                cap >> frame;

                // If the frame is empty, break immediately
                if (frame.empty())
                    break;

                image_path = vision_memory_directory + "/camera1/" + current_time.c_str() + "_" + to_string(frameNumber) + "_camera1.jpg";
                //cout << image_path << endl;
                cv::imwrite(image_path, frame);
                std::cout << "Saved: " << image_path << std::endl;

                vector<vector<string>> coco_object_detection;
                coco_object_detection.push_back(vector<string>()); // Add an empty row

                string analysis_text_camera1 = _LLM::OllamaAPI("image", "Analyze the following image", image_path);
                analysis_text_camera1 = _Parsers::LLM::LLama3Parse(analysis_text_camera1);

                _Vision::MySQLVisionRAWCamera1(image_path, camera1_fps, coco_object_detection, analysis_text_camera1);

                for (int x = 0; x < 1000; x++)
                {
                    if (stm_vision_path_camera1[x][0].empty())
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera1[x][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_path_camera1[x][1]);
                        stm_vision_path_camera1[x][0] = image_path;
                        stm_vision_path_camera1[x][1] = current_time;
                        break;
                        //mtx_stm_vision_path_camera1[x][0].unlock();
                        //mtx_stm_vision_path_camera1[x][1].unlock();
                    }
                    if (!stm_vision_path_camera1[x][0].empty() && x == 999)
                    {
                        for (int y = 0; y < 999; y++)
                        {
                            lock_guard<mutex> lock(mtx_stm_vision_path_camera1[y][0]);
                            lock_guard<mutex> lock1(mtx_stm_vision_path_camera1[y][1]);
                            lock_guard<mutex> lock2(mtx_stm_vision_path_camera1[y + 1][0]);
                            lock_guard<mutex> lock3(mtx_stm_vision_path_camera1[y + 1][1]);
                            stm_vision_path_camera1[y][0] = stm_vision_path_camera1[y + 1][0];
                            stm_vision_path_camera1[y][1] = stm_vision_path_camera1[y + 1][1];
                        }
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera1[999][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_path_camera1[999][1]);
                        stm_vision_path_camera1[999][0] = image_path;
                        stm_vision_path_camera1[999][1] = current_time;
                        break;

                        //for (int z = 0; z < 1000; z++)
                        //{
                        //    mtx_stm_vision_path_camera1[z][0].unlock();
                        //    mtx_stm_vision_path_camera1[z][1].unlock();
                        //}
                    }
                    if (!stm_vision_analysis_text_camera1[x][0].empty())
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_analysis_text_camera1[x][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_analysis_text_camera1[x][1]);
                        stm_vision_analysis_text_camera1[x][0] = analysis_text_camera1;
                        stm_vision_analysis_text_camera1[x][1] = current_time;
                        break;
                        //mtx_stm_vision_analysis_text_camera1[x][0].unlock();
                        //mtx_stm_vision_analysis_text_camera1[x][1].unlock();
                    }
                    if (!stm_vision_analysis_text_camera1[x][0].empty() && x == 999)
                    {
                        for (int y = 0; y < 999; y++)
                        {
                            lock_guard<mutex> lock(mtx_stm_vision_analysis_text_camera1[y][0]);
                            lock_guard<mutex> lock1(mtx_stm_vision_analysis_text_camera1[y][1]);
                            lock_guard<mutex> lock2(mtx_stm_vision_analysis_text_camera1[y + 1][0]);
                            lock_guard<mutex> lock3(mtx_stm_vision_analysis_text_camera1[y + 1][1]);
                            stm_vision_analysis_text_camera1[y][0] = stm_vision_analysis_text_camera1[y + 1][0];
                            stm_vision_analysis_text_camera1[y][1] = stm_vision_analysis_text_camera1[y + 1][1];
                        }
                        lock_guard<mutex> lock(mtx_stm_vision_analysis_text_camera1[999][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_analysis_text_camera1[999][1]);
                        stm_vision_analysis_text_camera1[999][0] = analysis_text_camera1;
                        stm_vision_analysis_text_camera1[999][1] = current_time;
                        break;

                        //for (int z = 0; z < 1000; z++)
                        //{
                        //    mtx_stm_vision_analysis_text_camera1[z][0].unlock();
                        //    mtx_stm_vision_path_camera1[z][1].unlock();
                        //}
                    }

                    //cout << "stm_vision_path_camera1[" << x << "][0]: " << stm_vision_path_camera1[x][0] << endl;
                    //cout << "stm_vision_path_camera1[" << x << "][1]: " << stm_vision_path_camera1[x][1] << endl;
                    //cout << "stm_vision_analysis_text_camera1[" << x << "][0]: " << stm_vision_analysis_text_camera1[x][0] << endl;
                    //cout << "stm_vision_analysis_text_camera1[" << x << "][1]: " << stm_vision_analysis_text_camera1[x][1] << endl;
                }

                //for (int x = 0; x < 999; x++)
                //{
                //    cout << "stm_vision_path_camera1[" << x << "][0]: " << stm_vision_path_camera1[x][0] << endl;
                //    cout << "stm_vision_path_camera1[" << x << "][1]: " << stm_vision_path_camera1[x][1] << endl;
                //    cout << "stm_vision_analysis_text_camera1[" << x << "][0]: " << stm_vision_analysis_text_camera1[x][0] << endl;
                //    cout << "stm_vision_analysis_text_camera1[" << x << "][1]: " << stm_vision_analysis_text_camera1[x][1] << endl;
                //}

                if (frameNumber >= camera1_fps)
                    frameNumber = 0;
                else
                    frameNumber++;

                current_time.clear();
                image_path.clear();
                oss.str(""); // Correct way to clear the contents of the stringstream
                oss.clear(); // Clear any error flags
            }
        }
        else if (vision_object_detection_remote_enabled)
        {
            // Not implemented yet
        }
        else
        {
            auto now = std::chrono::system_clock::now();
            // Convert to a time_t object, representing system time in seconds since the epoch
            std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
            // Convert to local time
            std::tm* now_tm = std::localtime(&now_time_t);

            oss << std::put_time(now_tm, "%d-%m-%Y_%H-%M-%S");
            current_time = oss.str();

            // Capture frame-by-frame from the camera
            cap >> frame;

            // If the frame is empty, break immediately
            if (frame.empty())
                break;

            image_path = vision_memory_directory + "/camera1/" + current_time.c_str() + "_" + to_string(frameNumber) + "_camera1.jpg";
            //cout << image_path << endl;
            cv::imwrite(image_path, frame);
            std::cout << "Saved: " << image_path << std::endl;

            vector<vector<string>> coco_object_detection;
            coco_object_detection.push_back(vector<string>()); // Add an empty row

            _Vision::MySQLVisionRAWCamera1(image_path, camera1_fps, coco_object_detection, "NULL");

            for (int x = 0; x < 1000; x++)
            {
                if (stm_vision_path_camera1[x][0].empty())
                {
                    lock_guard<mutex> lock(mtx_stm_vision_path_camera1[x][0]);
                    lock_guard<mutex> lock1(mtx_stm_vision_path_camera1[x][1]);
                    stm_vision_path_camera1[x][0] = image_path;
                    stm_vision_path_camera1[x][1] = current_time;
                    break;
                }
                if (!stm_vision_path_camera1[x][0].empty() && x == 999)
                {
                    for (int y = 0; y < 1000; y++)
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera1[y][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_path_camera1[y][1]);
                        lock_guard<mutex> lock2(mtx_stm_vision_path_camera1[y + 1][0]);
                        lock_guard<mutex> lock3(mtx_stm_vision_path_camera1[y + 1][1]);
                        stm_vision_path_camera1[y][0] = stm_vision_path_camera1[y + 1][0];
                        stm_vision_path_camera1[y][1] = stm_vision_path_camera1[y + 1][1];
                    }
                    lock_guard<mutex> lock(mtx_stm_vision_path_camera1[999][0]);
                    lock_guard<mutex> lock1(mtx_stm_vision_path_camera1[999][1]);
                    stm_vision_path_camera1[999][0] = image_path;
                    stm_vision_path_camera1[999][1] = current_time;
                    break;

                    for (int z = 0; z < 1000; z++)
                    {
                        mtx_stm_vision_path_camera1[z][0].unlock();
                        mtx_stm_vision_path_camera1[z][1].unlock();
                    }
                }
            }

            //for (int x = 0; x < 999; x++)
            //{
            //    cout << "stm_vision_path_camera1[" << x << "][0]: " << stm_vision_path_camera1[x][0] << endl;
            //    cout << "stm_vision_path_camera1[" << x << "][1]: " << stm_vision_path_camera1[x][1] << endl;
            //}

            if (frameNumber >= camera1_fps)
                frameNumber = 0;
            else
                frameNumber++;


            current_time.clear();
            image_path.clear();
        }

        current_time.clear();
        image_path.clear();
        oss.str(""); // Correct way to clear the contents of the stringstream
        oss.clear(); // Clear any error flags
    }
}

// The following function will initialize the webcam and record raw visual data to memory
void _Vision::VisionRawCamera2()
{
    string current_time;
    ostringstream oss;
    cv::Mat frame;
    string image_path;
    int frameNumber = 0;
    string swap;
    string swap2;

    // Open the default video camera
    cv::VideoCapture cap(1);

    // Check if the webcam is opened successfully
    if (!cap.isOpened())
    {
        std::cerr << "Error opening video camera" << std::endl;
    }

    cap.set(cv::CAP_PROP_FRAME_WIDTH, camera2_resolution_height);
    cap.set(cv::CAP_PROP_FRAME_HEIGHT, camera2_resolution_width);

    // Set the FPS of the video capture
    cap.set(cv::CAP_PROP_FPS, camera2_fps);

    while (true)
    {
        if (vision_object_detection && !vision_object_detection_remote_enabled && !visual_reasoning)
        {
            if (visual_memory)
            {
                auto now = std::chrono::system_clock::now();
                // Convert to a time_t object, representing system time in seconds since the epoch
                std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
                // Convert to local time
                std::tm* now_tm = std::localtime(&now_time_t);

                oss << std::put_time(now_tm, "%d-%m-%Y_%H-%M-%S");
                current_time = oss.str();

                // Capture frame-by-frame from the camera
                cap >> frame;

                // If the frame is empty, break immediately
                //if (frame.empty())
                //    break;

                image_path = vision_memory_directory + "/camera2/" + current_time.c_str() + "_" + to_string(frameNumber) + "_camera2.jpg";
                //cout << image_path << endl;
                cv::imwrite(image_path, frame);
                std::cout << "Saved: " << image_path << std::endl;

                vector<vector<string>> coco_object_detection = _Vision::ObjectDetection(frame);

                _Vision::MySQLVisionRAWCamera2(image_path, camera2_fps, coco_object_detection, "NULL");

                for (int x = 0; x < 1000; x++)
                {
                    if (stm_vision_path_camera1[x][0].empty())
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera2[x][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_path_camera2[x][1]);
                        stm_vision_path_camera1[x][0] = image_path;
                        stm_vision_path_camera1[x][1] = current_time;
                        break;
                    }
                    if (x == 999 && !stm_vision_path_camera1[x][0].empty())
                    {
                        for (int y = 0; y < 999; y++)
                        {
                            lock_guard<mutex> lock(mtx_stm_vision_path_camera2[y][0]);
                            lock_guard<mutex> lock1(mtx_stm_vision_path_camera2[y][1]);
                            lock_guard<mutex> lock2(mtx_stm_vision_path_camera2[y + 1][0]);
                            lock_guard<mutex> lock3(mtx_stm_vision_path_camera2[y + 1][1]);
                            stm_vision_path_camera1[y][0] = stm_vision_path_camera1[y + 1][0];
                            stm_vision_path_camera1[y][1] = stm_vision_path_camera1[y + 1][1];
                        }
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera2[999][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_path_camera2[999][1]);
                        stm_vision_path_camera1[999][0] = image_path;
                        stm_vision_path_camera1[999][1] = current_time;
                        break;
                    }
                    if (stm_vision_objects_image_path_camera2[x][0].empty())
                    {
                        lock_guard<mutex> lock1(mtx_stm_vision_objects_image_path_camera2[x][0]);
                        lock_guard<mutex> lock2(mtx_stm_vision_objects_image_path_camera2[x][1]);
                        stm_vision_objects_image_path_camera2[x][0] = coco_object_detection[0][0];
                        stm_vision_objects_image_path_camera2[x][1] = current_time;
                        //cout << "stm_vision_objects_image_path_camera2[x][0]: " << stm_vision_objects_image_path_camera2[x][0] << endl;
                        //cout << "stm_vision_objects_image_path_camera2[x][1]: " << stm_vision_objects_image_path_camera2[x][1] << endl;
                        break;
                    }
                    if (x == 999 && !stm_vision_objects_image_path_camera2[x][0].empty())
                    {
                        for (int y = 0; y < 999; y++)
                        {
                            lock_guard<mutex> lock(mtx_stm_vision_objects_image_path_camera2[y][0]);
                            lock_guard<mutex> lock1(mtx_stm_vision_objects_image_path_camera2[y][1]);
                            lock_guard<mutex> lock2(mtx_stm_vision_objects_image_path_camera2[y + 1][0]);
                            lock_guard<mutex> lock3(mtx_stm_vision_objects_image_path_camera2[y + 1][1]);
                            stm_vision_objects_image_path_camera2[y][0] = stm_vision_objects_image_path_camera2[y + 1][0];
                            stm_vision_objects_image_path_camera2[y][1] = stm_vision_objects_image_path_camera2[y + 1][1];
                            //cout << "stm_vision_objects_image_path_camera2[y][0]: " << stm_vision_objects_image_path_camera2[y][0] << endl;
                            //cout << "stm_vision_objects_image_path_camera2[y][1]: " << stm_vision_objects_image_path_camera2[y][1] << endl;
                        }
                        stm_vision_objects_image_path_camera2[999][0] = coco_object_detection[0][0];
                        stm_vision_objects_image_path_camera2[999][1] = current_time;
                        //cout << "stm_vision_objects_image_path_camera2[999][0]: " << stm_vision_path_camera1[999][0] << endl;
                        //cout << "stm_vision_objects_image_path_camera2[999][1]: " << stm_vision_path_camera1[999][1] << endl;
                        break;
                    }
                    /*if (stm_vision_objects_image_path_camera2[x][0].empty())
                    {
                        stm_vision_objects_text_camera2[x][0];
                        stm_vision_objects_text_camera2[x][1];
                    }
                    if (!stm_vision_objects_text_camera2[x][0].empty() && x == 999)
                    {
                        for (int y = 0; y < 999; y++)
                        {
                            lock_guard<mutex> lock(mtx_stm_vision_objects_image_path_camera2[y][0]);
                            lock_guard<mutex> lock1(mtx_stm_vision_objects_image_path_camera2[y][1]);
                            lock_guard<mutex> lock2(mtx_stm_vision_objects_camera2[y + 1][0]);
                            lock_guard<mutex> lock3(mtx_stm_vision_objects_camera2[y + 1][1]);
                            stm_vision_objects_text_camera2[y][0] = stm_vision_objects_text_camera2[y + 1][0];
                            stm_vision_objects_text_camera2[y][1] = stm_vision_objects_text_camera2[y + 1][1];
                        }
                        stm_vision_objects_text_camera2[999][0];
                        stm_vision_objects_text_camera2[999][1];
                        break;
                    }*/
                }

                // Debug
                //for (int x = 0; x < 999; x++)
                //{
                //    cout << "stm_vision_path_camera1[" << x << "][0]: " << stm_vision_path_camera1[x][0] << endl;
                //    cout << "stm_vision_path_camera1[" << x << "][1]: " << stm_vision_path_camera1[x][1] << endl;
                //    cout << "stm_vision_objects_image_path_camera2[" << x << "][0]: " << stm_vision_objects_image_path_camera2[x][0] << endl;
                //    cout << "stm_vision_objects_image_path_camera2[" << x << "][1]: " << stm_vision_objects_image_path_camera2[x][1] << endl;
                //}

                //cout << "Test" << endl;

                if (frameNumber >= camera2_fps)
                    frameNumber = 0;
                else
                    frameNumber++;

                current_time.clear();
                image_path.clear();
                oss.str(""); // Correct way to clear the contents of the stringstream
                oss.clear(); // Clear any error flags
            }
        }
        else if (vision_object_detection && !vision_object_detection_remote_enabled && visual_reasoning)
        {
            if (visual_memory)
            {
                auto now = std::chrono::system_clock::now();
                // Convert to a time_t object, representing system time in seconds since the epoch
                std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
                // Convert to local time
                std::tm* now_tm = std::localtime(&now_time_t);

                oss << std::put_time(now_tm, "%d-%m-%Y_%H-%M-%S");
                current_time = oss.str();

                // Capture frame-by-frame from the camera
                cap >> frame;

                // If the frame is empty, break immediately
                if (frame.empty())
                    break;

                image_path = vision_memory_directory + "/camera2/" + current_time.c_str() + "_" + to_string(frameNumber) + "_camera2.jpg";
                //cout << image_path << endl;
                cv::imwrite(image_path, frame);
                std::cout << "Saved: " << image_path << std::endl;

                vector<vector<string>> coco_object_detection = _Vision::ObjectDetection(frame);

                string analysis_text_camera2 = _LLM::OllamaAPI("image", "Analyze the following image", image_path);

                _Vision::MySQLVisionRAWCamera2(image_path, camera2_fps, coco_object_detection, analysis_text_camera2);

                for (int x = 0; x < 1000; x++)
                {
                    if (stm_vision_path_camera1[x][0].empty())
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera2[x][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_path_camera2[x][1]);
                        stm_vision_path_camera1[x][0] = image_path;
                        stm_vision_path_camera1[x][1] = current_time;
                        //cout << "stm_vision_path_camera1[x][0]: " << stm_vision_path_camera1[x][0] << endl;
                        //cout << "stm_vision_path_camera1[x][1]: " << stm_vision_path_camera1[x][1] << endl;
                        //mtx_stm_vision_path_camera2[x][0].unlock();
                        //mtx_stm_vision_path_camera2[x][1].unlock();
                    }
                    if (x == 999 && !stm_vision_path_camera1[x][0].empty())
                    {
                        for (int y = 0; y < 999; y++)
                        {
                            lock_guard<mutex> lock(mtx_stm_vision_path_camera2[y][0]);
                            lock_guard<mutex> lock1(mtx_stm_vision_path_camera2[y][1]);
                            lock_guard<mutex> lock2(mtx_stm_vision_path_camera2[y + 1][0]);
                            lock_guard<mutex> lock3(mtx_stm_vision_path_camera2[y + 1][1]);
                            stm_vision_path_camera1[y][0] = stm_vision_path_camera1[y + 1][0];
                            stm_vision_path_camera1[y][1] = stm_vision_path_camera1[y + 1][1];
                            //cout << "stm_vision_path_camera1[y][0]: " << stm_vision_path_camera1[y][0] << endl;
                            //cout << "stm_vision_path_camera1[y][1]: " << stm_vision_path_camera1[y][1] << endl;
                        }
                        //lock_guard<mutex> lock(mtx_stm_vision_path_camera2[999][0]);
                        //lock_guard<mutex> lock1(mtx_stm_vision_path_camera2[999][1]);
                        stm_vision_path_camera1[999][0] = image_path;
                        stm_vision_path_camera1[999][1] = current_time;
                        break;
                        //cout << "stm_vision_path_camera1[999][0]: " << stm_vision_path_camera1[999][0] << endl;
                        //cout << "stm_vision_path_camera1[999][1]: " << stm_vision_path_camera1[999][1] << endl;

                        //for (int z = 0; z < 1000; z++)
                        //{
                        ////    mtx_stm_vision_path_camera2[z][0].unlock();
                        ////    mtx_stm_vision_path_camera2[z][1].unlock();
                        //}
                    }
                    if (stm_vision_objects_image_path_camera2[x][0].empty())
                    {
                        lock_guard<mutex> lock1(mtx_stm_vision_objects_image_path_camera2[x][0]);
                        lock_guard<mutex> lock2(mtx_stm_vision_objects_image_path_camera2[x][1]);
                        stm_vision_objects_image_path_camera2[x][0] = coco_object_detection[0][0];
                        stm_vision_objects_image_path_camera2[x][1] = current_time;
                        //cout << "stm_vision_objects_image_path_camera2[x][0]: " << stm_vision_objects_image_path_camera2[x][0] << endl;
                        //cout << "stm_vision_objects_image_path_camera2[x][1]: " << stm_vision_objects_image_path_camera2[x][1] << endl;
                        //mtx_stm_vision_path_camera2[x][0].unlock();
                        //mtx_stm_vision_path_camera2[x][1].unlock();
                        break;
                    }
                    if (!stm_vision_objects_image_path_camera2[x][0].empty() && x == 999)
                    {
                        for (int y = 0; y < 999; y++)
                        {
                            lock_guard<mutex> lock(mtx_stm_vision_objects_image_path_camera2[y][0]);
                            lock_guard<mutex> lock1(mtx_stm_vision_objects_image_path_camera2[y][1]);
                            lock_guard<mutex> lock2(mtx_stm_vision_objects_image_path_camera2[y + 1][0]);
                            lock_guard<mutex> lock3(mtx_stm_vision_objects_image_path_camera2[y + 1][1]);
                            stm_vision_objects_image_path_camera2[y][0] = stm_vision_objects_image_path_camera2[y + 1][0];
                            stm_vision_objects_image_path_camera2[y][1] = stm_vision_objects_image_path_camera2[y + 1][1];
                            //cout << "stm_vision_objects_image_path_camera2[y][0]: " << stm_vision_objects_image_path_camera2[y][0] << endl;
                            //cout << "stm_vision_objects_image_path_camera2[y][1]: " << stm_vision_objects_image_path_camera2[y][1] << endl;
                        }
                        stm_vision_objects_image_path_camera2[999][0] = coco_object_detection[0][0];
                        stm_vision_objects_image_path_camera2[999][1] = current_time;
                        break;
                        //cout << "stm_vision_objects_image_path_camera2[999][0]: " << stm_vision_path_camera1[999][0] << endl;
                        //cout << "stm_vision_objects_image_path_camera2[999][1]: " << stm_vision_path_camera1[999][1] << endl;
                    }
                    if (!stm_vision_analysis_text_camera2[x][0].empty())
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_analysis_text_camera2[x][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_analysis_text_camera2[x][1]);
                        stm_vision_analysis_text_camera2[x][0] = analysis_text_camera2;
                        stm_vision_analysis_text_camera2[x][1] = current_time;
                        break;
                        //mtx_stm_vision_analysis_text_camera2[x][0].unlock();
                        //mtx_stm_vision_analysis_text_camera2[x][1].unlock();
                    }
                    if (!stm_vision_analysis_text_camera2[x][0].empty() && x == 999)
                    {
                        for (int y = 0; y < 999; y++)
                        {
                            lock_guard<mutex> lock(mtx_stm_vision_analysis_text_camera2[y][0]);
                            lock_guard<mutex> lock1(mtx_stm_vision_analysis_text_camera2[y][1]);
                            lock_guard<mutex> lock2(mtx_stm_vision_analysis_text_camera2[y + 1][0]);
                            lock_guard<mutex> lock3(mtx_stm_vision_analysis_text_camera2[y + 1][1]);
                            stm_vision_analysis_text_camera2[y][0] = stm_vision_analysis_text_camera2[y + 1][0];
                            stm_vision_analysis_text_camera2[y][1] = stm_vision_analysis_text_camera2[y + 1][1];
                        }
                        //lock_guard<mutex> lock(mtx_stm_vision_analysis_text_camera2[999][0]);
                        //lock_guard<mutex> lock1(mtx_stm_vision_analysis_text_camera2[999][1]);
                        stm_vision_analysis_text_camera2[999][0] = analysis_text_camera2;
                        stm_vision_analysis_text_camera2[999][1] = current_time;
                        break;

                        //for (int z = 0; z < 1000; z++)
                        //{
                        //    mtx_stm_vision_analysis_text_camera2[z][0].unlock();
                        //    mtx_stm_vision_path_camera2[z][1].unlock();
                        //}
                    }
                }

                //for (int x = 0; x < 999; x++)
                //{
                //    cout << "stm_vision_path_camera1[" << x << "][0]: " << stm_vision_path_camera1[x][0] << endl;
                //    cout << "stm_vision_path_camera1[" << x << "][1]: " << stm_vision_path_camera1[x][1] << endl;
                //    cout << "stm_vision_objects_image_path_camera2[" << x << "][0]: " << stm_vision_objects_image_path_camera2[x][0] << endl;
                //    cout << "stm_vision_objects_image_path_camera2[" << x << "][1]: " << stm_vision_objects_image_path_camera2[x][1] << endl;
                //    cout << "stm_vision_analysis_text_camera2[" << x << "][0]: " << stm_vision_analysis_text_camera2[x][0] << endl;
                //    cout << "stm_vision_analysis_text_camera2[" << x << "][1]: " << stm_vision_analysis_text_camera2[x][1] << endl;
                //}

                if (frameNumber >= camera2_fps)
                    frameNumber = 0;
                else
                    frameNumber++;

                current_time.clear();
                image_path.clear();
                oss.str(""); // Correct way to clear the contents of the stringstream
                oss.clear(); // Clear any error flags
            }
        }
        else if (!vision_object_detection && !vision_object_detection_remote_enabled && visual_reasoning)
        {
            if (visual_memory)
            {
                auto now = std::chrono::system_clock::now();
                // Convert to a time_t object, representing system time in seconds since the epoch
                std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
                // Convert to local time
                std::tm* now_tm = std::localtime(&now_time_t);

                oss << std::put_time(now_tm, "%d-%m-%Y_%H-%M-%S");
                current_time = oss.str();

                // Capture frame-by-frame from the camera
                cap >> frame;

                // If the frame is empty, break immediately
                if (frame.empty())
                    break;

                image_path = vision_memory_directory + "/camera2/" + current_time.c_str() + "_" + to_string(frameNumber) + "_camera2.jpg";
                //cout << image_path << endl;
                cv::imwrite(image_path, frame);
                std::cout << "Saved: " << image_path << std::endl;

                vector<vector<string>> coco_object_detection;
                coco_object_detection.push_back(vector<string>()); // Add an empty row

                string analysis_text_camera2 = _LLM::OllamaAPI("image", "Analyze the following image", image_path);

                _Vision::MySQLVisionRAWCamera2(image_path, camera2_fps, coco_object_detection, analysis_text_camera2);

                for (int x = 0; x < 1000; x++)
                {
                    if (stm_vision_path_camera1[x][0].empty())
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera2[x][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_path_camera2[x][1]);
                        stm_vision_path_camera1[x][0] = image_path;
                        stm_vision_path_camera1[x][1] = current_time;
                        break;
                        //mtx_stm_vision_path_camera2[x][0].unlock();
                        //mtx_stm_vision_path_camera2[x][1].unlock();
                    }
                    if (!stm_vision_path_camera1[x][0].empty() && x == 999)
                    {
                        for (int y = 0; y < 999; y++)
                        {
                            //lock_guard<mutex> lock(mtx_stm_vision_path_camera2[y][0]);
                            //lock_guard<mutex> lock1(mtx_stm_vision_path_camera2[y][1]);
                            //lock_guard<mutex> lock2(mtx_stm_vision_path_camera2[y + 1][0]);
                            //lock_guard<mutex> lock3(mtx_stm_vision_path_camera2[y + 1][1]);
                            stm_vision_path_camera1[y][0] = stm_vision_path_camera1[y + 1][0];
                            stm_vision_path_camera1[y][1] = stm_vision_path_camera1[y + 1][1];
                        }
                        lock_guard<mutex> lock(mtx_stm_vision_path_camera2[999][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_path_camera2[999][1]);
                        stm_vision_path_camera1[999][0] = image_path;
                        stm_vision_path_camera1[999][1] = current_time;
                        break;

                        //for (int z = 0; z < 1000; z++)
                        //{
                        //    mtx_stm_vision_path_camera2[z][0].unlock();
                        //    mtx_stm_vision_path_camera2[z][1].unlock();
                        //}
                    }
                    if (!stm_vision_analysis_text_camera2[x][0].empty())
                    {
                        lock_guard<mutex> lock(mtx_stm_vision_analysis_text_camera2[x][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_analysis_text_camera2[x][1]);
                        stm_vision_analysis_text_camera2[x][0] = analysis_text_camera2;
                        stm_vision_analysis_text_camera2[x][1] = current_time;
                        break;
                        //mtx_stm_vision_analysis_text_camera2[x][0].unlock();
                        //mtx_stm_vision_analysis_text_camera2[x][1].unlock();
                    }
                    if (!stm_vision_analysis_text_camera2[x][0].empty() && x == 999)
                    {
                        for (int y = 0; y < 999; y++)
                        {
                            //lock_guard<mutex> lock(mtx_stm_vision_analysis_text_camera2[y][0]);
                            //lock_guard<mutex> lock1(mtx_stm_vision_analysis_text_camera2[y][1]);
                            //lock_guard<mutex> lock2(mtx_stm_vision_analysis_text_camera2[y + 1][0]);
                            //lock_guard<mutex> lock3(mtx_stm_vision_analysis_text_camera2[y + 1][1]);
                            stm_vision_analysis_text_camera2[y][0] = stm_vision_analysis_text_camera2[y + 1][0];
                            stm_vision_analysis_text_camera2[y][1] = stm_vision_analysis_text_camera2[y + 1][1];
                        }
                        lock_guard<mutex> lock(mtx_stm_vision_analysis_text_camera2[999][0]);
                        lock_guard<mutex> lock1(mtx_stm_vision_analysis_text_camera2[999][1]);
                        stm_vision_analysis_text_camera2[999][0] = analysis_text_camera2;
                        stm_vision_analysis_text_camera2[999][1] = current_time;
                        break;

                        //for (int z = 0; z < 1000; z++)
                        //{
                        //    mtx_stm_vision_analysis_text_camera2[z][0].unlock();
                        //    mtx_stm_vision_path_camera2[z][1].unlock();
                        //}
                    }

                    //cout << "stm_vision_path_camera1[" << x << "][0]: " << stm_vision_path_camera1[x][0] << endl;
                    //cout << "stm_vision_path_camera1[" << x << "][1]: " << stm_vision_path_camera1[x][1] << endl;
                    //cout << "stm_vision_analysis_text_camera2[" << x << "][0]: " << stm_vision_analysis_text_camera2[x][0] << endl;
                    //cout << "stm_vision_analysis_text_camera2[" << x << "][1]: " << stm_vision_analysis_text_camera2[x][1] << endl;
                }

                //for (int x = 0; x < 999; x++)
                //{
                //    cout << "stm_vision_path_camera1[" << x << "][0]: " << stm_vision_path_camera1[x][0] << endl;
                //    cout << "stm_vision_path_camera1[" << x << "][1]: " << stm_vision_path_camera1[x][1] << endl;
                //    cout << "stm_vision_analysis_text_camera2[" << x << "][0]: " << stm_vision_analysis_text_camera2[x][0] << endl;
                //    cout << "stm_vision_analysis_text_camera2[" << x << "][1]: " << stm_vision_analysis_text_camera2[x][1] << endl;
                //}

                if (frameNumber >= camera2_fps)
                    frameNumber = 0;
                else
                    frameNumber++;

                current_time.clear();
                image_path.clear();
                oss.str(""); // Correct way to clear the contents of the stringstream
                oss.clear(); // Clear any error flags
            }
        }
        else if (vision_object_detection_remote_enabled)
        {
            // Not implemented yet
            
            // getting there...
        }
        else
        {
            auto now = std::chrono::system_clock::now();
            // Convert to a time_t object, representing system time in seconds since the epoch
            std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
            // Convert to local time
            std::tm* now_tm = std::localtime(&now_time_t);

            oss << std::put_time(now_tm, "%d-%m-%Y_%H-%M-%S");
            current_time = oss.str();

            // Capture frame-by-frame from the camera
            cap >> frame;

            // If the frame is empty, break immediately
            if (frame.empty())
                break;

            image_path = vision_memory_directory + "/camera2/" + current_time.c_str() + "_" + to_string(frameNumber) + "_camera2.jpg";
            //cout << image_path << endl;
            cv::imwrite(image_path, frame);
            std::cout << "Saved: " << image_path << std::endl;

            vector<vector<string>> coco_object_detection;
            coco_object_detection.push_back(vector<string>()); // Add an empty row

            _Vision::MySQLVisionRAWCamera2(image_path, camera2_fps, coco_object_detection, nullptr);

            if (frameNumber >= camera2_fps)
                frameNumber = 0;
            else
                frameNumber++;

            current_time.clear();
            image_path.clear();
            oss.str(""); // Correct way to clear the contents of the stringstream
            oss.clear(); // Clear any error flags
        }

        current_time.clear();
        image_path.clear();
        oss.str(""); // Correct way to clear the contents of the stringstream
        oss.clear(); // Clear any error flags
    }
}

// Import images into MySQL
void _Vision::MySQLVisionRAWCamera1(string filename, int camera1_fps, vector<vector<string>> coco_object_detection, string image_analysis)
{
    MYSQL* conn;
    string table_name = "ai_vision_camera1";
    string temp_path;
    string image_hash;
    string object_detection_image_hash;
    string current_date;
    ostringstream oss;
    string sql1;
    
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_vision_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        image_hash = _Utilities::getHash(filename);

        if (coco_object_detection.size() > 0 && coco_object_detection[0].size() > 0)
            object_detection_image_hash = _Utilities::getHash(coco_object_detection[0][0]);

        auto entry = time(nullptr);
        auto tm1 = *localtime(&entry);

        oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
        current_date = oss.str();

        sql1 = "INSERT INTO `";
        sql1 += table_name;
        // Classes cannot be saved at the moment, Tensorflow bug
        sql1 += "`(image_path, image_fps, camera_number, creation_time, image_hash, object_detection_image_path, object_detection_image_hash, image_analysis, class1, class1_x, class1_width, class1_y, class1_height, classs1_score, class2, class2_x, class2_width, class2_y, class2_height, class2_score, class3, class3_x, class3_width, class3_y, class3_height, class3_score, class4, class4_x, class4_width, class4_y, class4_height, class4_score, class5, class5_x, class5_width, class5_y, class5_height, class5_score, class6, class6_x, class6_width, class6_y, class6_height, class6_score, class7, class7_x, class7_width, class7_y, class7_height, class7_score, class8, class8_x, class8_width, class8_y, class8_height, class8_score, class9, class9_x, class9_width, class9_y, class9_height, class9_score, class10, class10_x, class10_width, class10_y, class10_height, class10_score, class11, class11_x, class11_width, class11_y, class11_height, class11_score, class12, class12_x, class12_width, class12_y, class12_height, class12_score, class13, class13_x, class13_width, class13_y, class13_height, class13_score, class14, class14_x, class14_width, class14_y, class14_height, class14_score, class15, class15_x, class15_width, class15_y, class15_height, class15_score, class16, class16_x, class16_width, class16_y, class16_height, class16_score, class17, class17_x, class17_width, class17_y, class17_height, class17_score, class18, class18_x, class18_width, class18_y, class18_height, class18_score, class19, class19_x, class19_width, class19_y, class19_height, class19_score, class20, class20_x, class20_width, class20_y, class20_height, class20_score) VALUES(\"";
        //sql1 += "(image_path, creation_time, image_hash) VALUES(\"";
        sql1 += filename.c_str();
        sql1 += "\", \"";
        sql1 += to_string(camera1_fps);
        sql1 += "\", \"";
        sql1 += "1";
        sql1 += "\", \"";
        sql1 += current_date.c_str();
        sql1 += "\", \"";
        sql1 += image_hash.c_str();
        sql1 += "\", \"";
        if (coco_object_detection.size() > 0 && coco_object_detection[0].size() > 0)
            sql1 += coco_object_detection[0][0];
        else
            sql1 += "NULL";
        sql1 += "\", \"";
        if (object_detection_image_hash != "")
            sql1 += object_detection_image_hash.c_str();
        else
            sql1 += "NULL";
        sql1 += "\", \"";
        if (image_analysis != "")
            sql1 += image_analysis.c_str();
        else
            sql1 += "NULL";

        for (int z = 0; z < 20; z++)
        {
            sql1 += "\", \"";
            if (coco_object_detection.size() > z && coco_object_detection[z].size() > 1)
                sql1 += coco_object_detection[z][1];
            else
                sql1 += "NULL";
            sql1 += "\", \"";
            if (coco_object_detection.size() > z && coco_object_detection[z].size() > 2)
                sql1 += coco_object_detection[z][2];
            else
                sql1 += "NULL";
            sql1 += "\", \"";
            if (coco_object_detection.size() > z && coco_object_detection[z].size() > 3)
                sql1 += coco_object_detection[z][3];
            else
                sql1 += "NULL";
            sql1 += "\", \"";
            if (coco_object_detection.size() > z && coco_object_detection[z].size() > 4)
                sql1 += coco_object_detection[z][4];
            else
                sql1 += "NULL";
            sql1 += "\", \"";
            if (coco_object_detection.size() > z && coco_object_detection[z].size() > 5)
                sql1 += coco_object_detection[z][5];
            else
                sql1 += "NULL";
            sql1 += "\", \"";
            if (coco_object_detection.size() > z && coco_object_detection[z].size() > 6)
                sql1 += coco_object_detection[z][6];
            else
                sql1 += "NULL";
        }

        sql1 += "\");";
        //cout << "sq1l: " << sql1 << endl;
        mysql_query(conn, sql1.c_str());
    }

    //terminate();
}

void _Vision::MySQLVisionRAWCamera2(string filename, int camera2_fps, vector<vector<string>> coco_object_detection, string image_analysis)
{
    MYSQL* conn;
    string table_name = "ai_vision_camera2";
    string image_hash;
    string object_detection_image_hash;
    string current_date;
    ostringstream oss;
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_vision_database.c_str(), 3306, NULL, 0);

    if (conn)
    {
        image_hash = _Utilities::getHash(filename);
        object_detection_image_hash = _Utilities::getHash(coco_object_detection[0][0]);

        auto entry = time(nullptr);
        auto tm1 = *localtime(&entry);

        oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
        current_date = oss.str();

        sql1 = "INSERT INTO ";
        sql1 += table_name;
        // Classes cannot be saved at the moment, Tensorflow bug
        sql1 += "`(image_path, image_fps, camera_number, creation_time, image_hash, object_detection_image_path, object_detection_image_hash, image_analysis, class1, class1_x, class1_width, class1_y, class1_height, classs1_score, class2, class2_x, class2_width, class2_y, class2_height, class2_score, class3, class3_x, class3_width, class3_y, class3_height, class3_score, class4, class4_x, class4_width, class4_y, class4_height, class4_score, class5, class5_x, class5_width, class5_y, class5_height, class5_score, class6, class6_x, class6_width, class6_y, class6_height, class6_score, class7, class7_x, class7_width, class7_y, class7_height, class7_score, class8, class8_x, class8_width, class8_y, class8_height, class8_score, class9, class9_x, class9_width, class9_y, class9_height, class9_score, class10, class10_x, class10_width, class10_y, class10_height, class10_score, class11, class11_x, class11_width, class11_y, class11_height, class11_score, class12, class12_x, class12_width, class12_y, class12_height, class12_score, class13, class13_x, class13_width, class13_y, class13_height, class13_score, class14, class14_x, class14_width, class14_y, class14_height, class14_score, class15, class15_x, class15_width, class15_y, class15_height, class15_score, class16, class16_x, class16_width, class16_y, class16_height, class16_score, class17, class17_x, class17_width, class17_y, class17_height, class17_score, class18, class18_x, class18_width, class18_y, class18_height, class18_score, class19, class19_x, class19_width, class19_y, class19_height, class19_score, class20, class20_x, class20_width, class20_y, class20_height, class20_score) VALUES(\"";
        //sql1 += "(image_path, creation_time, image_hash) VALUES(\"";
        sql1 += filename.c_str();
        sql1 += "\", \"";
        sql1 += to_string(camera2_fps);
        sql1 += "\", \"";
        sql1 += "2";
        sql1 += "\", \"";
        sql1 += current_date.c_str();
        sql1 += "\", \"";
        sql1 += image_hash.c_str();
        sql1 += "\", \"";
        sql1 += coco_object_detection[0][0];
        sql1 += "\", \"";
        sql1 += object_detection_image_hash;
        sql1 += "\", \"";
        sql1 += image_analysis;

        for (int z = 0; z < 20; z++)
        {
            sql1 += "\", \"";
            if (coco_object_detection[z][1] != "")
                sql1 += coco_object_detection[z][1].c_str();
            else
                sql1 += "NULL";
            sql1 += "\", \"";
            if (coco_object_detection[z][2] != "")
                sql1 += coco_object_detection[z][2].c_str();
            else
                sql1 += "NULL";
            sql1 += "\", \"";
            if (coco_object_detection[z][3] != "")
                sql1 += coco_object_detection[z][3].c_str();
            else
                sql1 += "NULL";
            sql1 += "\", \"";
            if (coco_object_detection[z][4] != "")
                sql1 += coco_object_detection[z][4].c_str();
            else
                sql1 += "NULL";
            sql1 += "\", \"";
            if (coco_object_detection[z][5] != "")
                sql1 += coco_object_detection[z][5].c_str();
            else
                sql1 += "NULL";
            sql1 += "\", \"";
            if (coco_object_detection[z][6] != "")
                sql1 += coco_object_detection[z][6].c_str();
            else
                sql1 += "NULL";
        }

        sql1 += "\");";
        mysql_query(conn, sql1.c_str());
    }

    //terminate();
}

vector<vector<string>> _Vision::ObjectDetection(Mat frame)
{
    string current_date;
    ostringstream oss;
    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    current_date = oss.str();

    //std::string imagePath = "D:/_test/saved_sequence2/";
    std::string model_path = "D:/_AugmentedIntelligence/_src/tensorflow_models/coco_object_detection/saved_model/";
    std::string labelsPath = "D:/_AugmentedIntelligence/_src/tensorflow_models/coco_object_detection/coco.names";

    // Initialize TensorFlow
    TF_Status* status = TF_NewStatus();
    // Call LoadGraph to load the model into a graph
    //TF_Graph* graph = LoadGraph(model_path.c_str(), status);
    TF_Graph* graph = TF_NewGraph();
    TF_SessionOptions* options = TF_NewSessionOptions();
    TF_Buffer* run_opts = nullptr;
    const char* tags = "serve";
    TF_Session* session = TF_LoadSessionFromSavedModel(options, nullptr, model_path.c_str(), &tags, 1, graph, nullptr, status);

    // Convert image to tensor
    TF_Tensor* inputTensor = _Vision::MatToTensor(frame);

    // Define input operation
    TF_Output input_op = { TF_GraphOperationByName(graph, "serving_default_input_tensor"), 0 };

    // Define output operations
    std::vector<TF_Output> output_ops{
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 1 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 2 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 4 },
    };

    std::vector<TF_Tensor*> input_tensors = { inputTensor };
    TF_Tensor* output_tensors[] = { NULL, NULL, NULL };

    if (TF_GetCode(status) != TF_OK)
    {
        fprintf(stderr, "Error: %s\n", TF_Message(status));
        // Handle error appropriately
    }

    // Run the session
    TF_SessionRun(session, nullptr,
        &input_op, input_tensors.data(), input_tensors.size(),
        output_ops.data(), output_tensors, output_ops.size(),
        nullptr, 0, nullptr, status);

    if (TF_GetCode(status) == TF_OK)
    {
        printf("Session run successfully\n");
    }
    else
    {
        fprintf(stderr, "Session run error: %s\n", TF_Message(status));
    }

    // Debug
    //cout << "output_tensors[0]: " << output_tensors[0] << endl;
    //cout << "output_tensors[1]: " << output_tensors[1] << endl;
    //cout << "output_tensors[2]: " << output_tensors[2] << endl;
    //cin.get();

    // Process the output tensors to extract boxes, scores, and class IDs
    auto boxes = _Vision::ExtractBoxes(output_tensors[0], frame.size()); // Needs implementation
    auto classIds = _Vision::ExtractClassIds(output_tensors[1]); // Needs implementation
    auto scores = _Vision::ExtractScores(output_tensors[2]); // Needs implementation
    std::string* classLabels = _Vision::LoadLabels(labelsPath);
    cout << "classIds: " << classIds[0] << endl;

    _Vision::DrawBoundingBoxes(frame, boxes, classIds, scores, classLabels);

    // Debug
    std::string temp = vision_memory_directory;
    temp += "/camera1/object_detection/";
    temp += current_date.c_str();
    temp += "_object_detection_camera1.png";
    std::cout << "Writing image: " << temp << std::endl;
    cv::imwrite(temp.c_str(), frame);

    vector<vector<string>> return_array;

    // Create the return array
    for (int i = 0; i < boxes.size(); i++)
    {
        const auto& box = boxes[i];
        int classId = classIds[i];
        float score = scores[i];

        if (score >= 0.90)
        {
            vector<string> row(7);
            row[0] = temp;
            cout << row[0] << endl;
            row[1] = classLabels[classId - 1]; // Use the actual class ID instead of x
            cout << row[1] << endl;
            row[2] = to_string(box.x);
            cout << row[2] << endl;
            row[3] = to_string(box.width);
            cout << row[3] << endl;
            row[4] = to_string(box.y);
            cout << row[4] << endl;
            row[5] = to_string(box.height);
            cout << row[5] << endl;
            row[6] = to_string(score);
            cout << row[6] << endl;

            return_array.push_back(row);
        }
    }

    // Cleanup
    TF_DeleteTensor(inputTensor);
    TF_DeleteTensor(output_tensors[0]);
    TF_DeleteTensor(output_tensors[1]);
    TF_DeleteTensor(output_tensors[2]);
    TF_DeleteSession(session, status);
    TF_DeleteSessionOptions(options);
    TF_DeleteStatus(status);

    return return_array;
}

vector<vector<string>> _Vision::ObjectDetectionSequence(TF_Status* status, TF_Graph* graph, TF_SessionOptions* options, TF_Buffer* run_opts, const char* tags, TF_Session* session, Mat frame)
{
    string current_date;
    ostringstream oss;
    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    current_date = oss.str();

    //std::string imagePath = "D:/_test/saved_sequence2/";
    // Debug
    //std::string model_path = "D:/_AugmentedIntelligence/_src/tensorflow_models/coco_object_detection/saved_model/";
    //std::string labelsPath = "D:/_AugmentedIntelligence/_src/tensorflow_models/coco_object_detection/coco.names";

    // Convert image to tensor
    TF_Tensor* inputTensor = _Vision::MatToTensor(frame);

    // Define input operation
    TF_Output input_op = { TF_GraphOperationByName(graph, "serving_default_input_tensor"), 0 };

    // Define output operations
    std::vector<TF_Output> output_ops{
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 1 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 2 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 4 },
    };

    std::vector<TF_Tensor*> input_tensors = { inputTensor };
    TF_Tensor* output_tensors[] = { NULL, NULL, NULL };

    if (TF_GetCode(status) != TF_OK)
    {
        fprintf(stderr, "Error: %s\n", TF_Message(status));
        // Handle error appropriately
    }

    // Run the session
    TF_SessionRun(session, nullptr,
        &input_op, input_tensors.data(), input_tensors.size(),
        output_ops.data(), output_tensors, output_ops.size(),
        nullptr, 0, nullptr, status);

    if (TF_GetCode(status) == TF_OK)
    {
        printf("Session run successfully\n");
    }
    else
    {
        fprintf(stderr, "Session run error: %s\n", TF_Message(status));
    }

    // Debug
    //cout << "output_tensors[0]: " << output_tensors[0] << endl;
    //cout << "output_tensors[1]: " << output_tensors[1] << endl;
    //cout << "output_tensors[2]: " << output_tensors[2] << endl;
    //cin.get();

    // Process the output tensors to extract boxes, scores, and class IDs
    auto boxes = _Vision::ExtractBoxes(output_tensors[0], frame.size()); // Needs implementation
    auto classIds = _Vision::ExtractClassIds(output_tensors[1]); // Needs implementation
    auto scores = _Vision::ExtractScores(output_tensors[2]); // Needs implementation
    std::string* classLabels = _Vision::LoadLabels(tensorflow_labels);
    cout << "classIds: " << classIds[0] << endl;

    _Vision::DrawBoundingBoxes(frame, boxes, classIds, scores, classLabels);

    // Debug
    std::string temp = vision_memory_directory;
    temp += "/camera1/object_detection/";
    temp += current_date.c_str();
    temp += "_object_detection_camera1.png";
    std::cout << "Writing image: " << temp << std::endl;
    cv::imwrite(temp.c_str(), frame);

    vector<vector<string>> return_array;

    // Create the return array
    for (int i = 0; i < boxes.size(); i++)
    {
        const auto& box = boxes[i];
        int classId = classIds[i];
        float score = scores[i];

        if (score >= 0.90)
        {
            vector<string> row(7);
            row[0] = temp;
            cout << row[0] << endl;
            row[1] = classLabels[classId - 1]; // Use the actual class ID instead of x
            cout << row[1] << endl;
            row[2] = to_string(box.x);
            cout << row[2] << endl;
            row[3] = to_string(box.width);
            cout << row[3] << endl;
            row[4] = to_string(box.y);
            cout << row[4] << endl;
            row[5] = to_string(box.height);
            cout << row[5] << endl;
            row[6] = to_string(score);
            cout << row[6] << endl;

            return_array.push_back(row);
        }
    }

    // Pass to awareness
    //thread awarenessdetections(_Awareness::AwarenessBoundingBoxes, return_array);

    // Cleanup
    //TF_DeleteTensor(inputTensor);
    //TF_DeleteTensor(output_tensors[0]);
    //TF_DeleteTensor(output_tensors[1]);
    //TF_DeleteTensor(output_tensors[2]);
    //TF_DeleteSession(session, status);
    //TF_DeleteSessionOptions(options);
    //TF_DeleteStatus(status);

    return return_array;
}

//vector<vector<string>> _Vision::ObjectDetectionYOLO(Mat frame)
//{
//
//    //return 0;
//}
//
//vector<vector<string>> _Vision::ImageSegmentationYOLO(Mat frame)
//{
//    //return NULL;
//}

vector<vector<string>> _Vision::ObjectDetectionAntsBees(Mat frame)
{
    //std::string imagePath = "D:/_test/saved_sequence2/";
    std::string model_path = "./tensorflow_models/saved_model";
    std::string labelsPath = "./tensorflow_models/coco.names";

    // Initialize TensorFlow
    TF_Status* status = TF_NewStatus();
    // Call LoadGraph to load the model into a graph
    //TF_Graph* graph = LoadGraph(model_path.c_str(), status);
    TF_Graph* graph = TF_NewGraph();
    TF_SessionOptions* options = TF_NewSessionOptions();
    TF_Buffer* run_opts = nullptr;
    const char* tags = "serve";
    TF_Session* session = TF_LoadSessionFromSavedModel(options, nullptr, model_path.c_str(), &tags, 1, graph, nullptr, status);

    // Convert image to tensor
    TF_Tensor* inputTensor = _Vision::MatToTensor(frame);

    // Define input operation
    TF_Output input_op = { TF_GraphOperationByName(graph, "serving_default_input_tensor"), 0 };

    // Define output operations
    std::vector<TF_Output> output_ops{
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 1 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 2 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 4 },
    };

    std::vector<TF_Tensor*> input_tensors = { inputTensor };
    TF_Tensor* output_tensors[] = { NULL, NULL, NULL };

    if (TF_GetCode(status) != TF_OK)
    {
        fprintf(stderr, "Error: %s\n", TF_Message(status));
        // Handle error appropriately
    }

    // Run the session
    TF_SessionRun(session, nullptr,
        &input_op, input_tensors.data(), input_tensors.size(),
        output_ops.data(), output_tensors, output_ops.size(),
        nullptr, 0, nullptr, status);

    if (TF_GetCode(status) == TF_OK)
    {
        printf("Session run successfully\n");
    }
    else
    {
        fprintf(stderr, "Session run error: %s\n", TF_Message(status));
    }

    //cout << "output_tensors[0]: " << output_tensors[0] << endl;
    //cout << "output_tensors[1]: " << output_tensors[1] << endl;
    //cout << "output_tensors[2]: " << output_tensors[2] << endl;
    //cin.get();

    // Process the output tensors to extract boxes, scores, and class IDs
    vector<cv::Rect> boxes = _Vision::ExtractBoxes(output_tensors[0], frame.size()); // Needs implementation
    vector<int> classIds = _Vision::ExtractClassIds(output_tensors[1]); // Needs implementation
    vector<float> scores = _Vision::ExtractScores(output_tensors[2]); // Needs implementation
    std::string* classLabels = _Vision::LoadLabels(labelsPath);
    //cout << "classIds: " << classIds[0] << endl;

    _Vision::DrawBoundingBoxes(frame, boxes, classIds, scores, classLabels);

    // Debug
    std::string temp = "G:/visual_memory/camera1/object_detection/object_detection_camera1_";
    //temp += std::to_string(image_number);
    temp += ".png";
    std::cout << "Writing image: " << temp << std::endl;
    cv::imwrite(temp.c_str(), frame);

    vector<vector<string>> return_array;

    // Create the return array
    for (int i = 0; i < boxes.size(); i++)
    {
        const auto& box = boxes[i];
        int classId = classIds[i];
        float score = scores[i];

        if (score >= 90.0)
        {
            vector<string> row(7);
            row[0] = temp;
            row[1] = classLabels[classId]; // Use the actual class ID instead of x
            row[2] = to_string(box.x);
            row[4] = to_string(box.width);
            row[3] = to_string(box.y);
            row[5] = to_string(box.height);
            row[6] = to_string(score);

            return_array.push_back(row);
        }
    }

    // Cleanup
    TF_DeleteTensor(inputTensor);
    TF_DeleteTensor(output_tensors[0]);
    TF_DeleteTensor(output_tensors[1]);
    TF_DeleteTensor(output_tensors[2]);
    TF_DeleteSession(session, status);
    TF_DeleteSessionOptions(options);
    TF_DeleteStatus(status);

    return return_array;
}

vector<vector<string>> _Vision::ObjectDetectionBirds(Mat frame)
{
    string current_date;
    ostringstream oss;
    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    current_date = oss.str();

    //std::string imagePath = "D:/_test/saved_sequence2/";
    std::string model_path = "./tensorflow_models/bird_vocalization_classifier/";
    std::string labelsPath = "./tensorflow_models/bird_vocalization_classifier/label.csv";

    // Initialize TensorFlow
    TF_Status* status = TF_NewStatus();
    // Call LoadGraph to load the model into a graph
    //TF_Graph* graph = LoadGraph(model_path.c_str(), status);
    TF_Graph* graph = TF_NewGraph();
    TF_SessionOptions* options = TF_NewSessionOptions();
    TF_Buffer* run_opts = nullptr;
    const char* tags = "serve";
    TF_Session* session = TF_LoadSessionFromSavedModel(options, nullptr, model_path.c_str(), &tags, 1, graph, nullptr, status);

    // Convert image to tensor
    TF_Tensor* inputTensor = _Vision::MatToTensor(frame);


    // Define input operation
    TF_Output input_op = { TF_GraphOperationByName(graph, "serving_default_input_tensor"), 0 };

    // Define output operations
    std::vector<TF_Output> output_ops{
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 1 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 2 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 4 },
    };

    std::vector<TF_Tensor*> input_tensors = { inputTensor };
    TF_Tensor* output_tensors[] = { NULL, NULL, NULL };

    if (TF_GetCode(status) != TF_OK)
    {
        fprintf(stderr, "Error: %s\n", TF_Message(status));
        // Handle error appropriately
    }

    // Run the session
    TF_SessionRun(session, nullptr,
        &input_op, input_tensors.data(), input_tensors.size(),
        output_ops.data(), output_tensors, output_ops.size(),
        nullptr, 0, nullptr, status);

    if (TF_GetCode(status) == TF_OK)
    {
        printf("Session run successfully\n");
    }
    else
    {
        fprintf(stderr, "Session run error: %s\n", TF_Message(status));
    }

    //cout << "output_tensors[0]: " << output_tensors[0] << endl;
    //cout << "output_tensors[1]: " << output_tensors[1] << endl;
    //cout << "output_tensors[2]: " << output_tensors[2] << endl;
    //cin.get();

    // Process the output tensors to extract boxes, scores, and class IDs
    vector<cv::Rect> boxes = _Vision::ExtractBoxes(output_tensors[0], frame.size()); // Needs implementation
    vector<int> classIds = _Vision::ExtractClassIds(output_tensors[1]); // Needs implementation
    vector<float> scores = _Vision::ExtractScores(output_tensors[2]); // Needs implementation
    std::string* classLabels = _Vision::LoadLabels(labelsPath);
    //cout << "classIds: " << classIds[0] << endl;

    _Vision::DrawBoundingBoxes(frame, boxes, classIds, scores, classLabels);

    // Debug
    std::string temp = vision_memory_directory;
    temp += "/camera1/object_detection/";
    temp += current_date.c_str();
    temp += "_object_detection_camera1.jpg";
    std::cout << "Writing image: " << temp << std::endl;
    cv::imwrite(temp.c_str(), frame);

    vector<vector<string>> return_array;

    // Create the return array
    for (int i = 0; i < boxes.size(); i++)
    {
        const auto& box = boxes[i];
        int classId = classIds[i];
        float score = scores[i];

        if (score >= 90.0)
        {
            vector<string> row(7);
            row[0] = temp;
            row[1] = classLabels[classId]; // Use the actual class ID instead of x
            row[2] = to_string(box.x);
            row[4] = to_string(box.width);
            row[3] = to_string(box.y);
            row[5] = to_string(box.height);
            row[6] = to_string(score);

            return_array.push_back(row);
        }
    }

    // Cleanup
    TF_DeleteTensor(inputTensor);
    TF_DeleteTensor(output_tensors[0]);
    TF_DeleteTensor(output_tensors[1]);
    TF_DeleteTensor(output_tensors[2]);
    TF_DeleteSession(session, status);
    TF_DeleteSessionOptions(options);
    TF_DeleteStatus(status);

    return return_array;
}

vector<vector<string>> _Vision::ObjectDetectionBoatsVessels(Mat frame)
{
    string current_date;
    ostringstream oss;
    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    current_date = oss.str();

    //std::string imagePath = "D:/_test/saved_sequence2/";
    std::string model_path = "./tensorflow_models/boats_and_vessels/";
    std::string labelsPath = "./tensorflow_models/boats_and_vessels/labels.txt";

    // Initialize TensorFlow
    TF_Status* status = TF_NewStatus();
    // Call LoadGraph to load the model into a graph
    //TF_Graph* graph = LoadGraph(model_path.c_str(), status);
    TF_Graph* graph = TF_NewGraph();
    TF_SessionOptions* options = TF_NewSessionOptions();
    TF_Buffer* run_opts = nullptr;
    const char* tags = "serve";
    TF_Session* session = TF_LoadSessionFromSavedModel(options, nullptr, model_path.c_str(), &tags, 1, graph, nullptr, status);

    // Convert image to tensor
    TF_Tensor* inputTensor = _Vision::MatToTensor(frame);


    // Define input operation
    TF_Output input_op = { TF_GraphOperationByName(graph, "serving_default_input_tensor"), 0 };

    // Define output operations
    std::vector<TF_Output> output_ops{
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 1 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 2 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 4 },
    };

    std::vector<TF_Tensor*> input_tensors = { inputTensor };
    TF_Tensor* output_tensors[] = { NULL, NULL, NULL };

    if (TF_GetCode(status) != TF_OK)
    {
        fprintf(stderr, "Error: %s\n", TF_Message(status));
        // Handle error appropriately
    }

    // Run the session
    TF_SessionRun(session, nullptr,
        &input_op, input_tensors.data(), input_tensors.size(),
        output_ops.data(), output_tensors, output_ops.size(),
        nullptr, 0, nullptr, status);

    if (TF_GetCode(status) == TF_OK)
    {
        printf("Session run successfully\n");
    }
    else
    {
        fprintf(stderr, "Session run error: %s\n", TF_Message(status));
    }

    //cout << "output_tensors[0]: " << output_tensors[0] << endl;
    //cout << "output_tensors[1]: " << output_tensors[1] << endl;
    //cout << "output_tensors[2]: " << output_tensors[2] << endl;
    //cin.get();

    // Process the output tensors to extract boxes, scores, and class IDs
    vector<cv::Rect> boxes = _Vision::ExtractBoxes(output_tensors[0], frame.size()); // Needs implementation
    vector<int> classIds = _Vision::ExtractClassIds(output_tensors[1]); // Needs implementation
    vector<float> scores = _Vision::ExtractScores(output_tensors[2]); // Needs implementation
    std::string* classLabels = _Vision::LoadLabels(labelsPath);
    //cout << "classIds: " << classIds[0] << endl;

    _Vision::DrawBoundingBoxes(frame, boxes, classIds, scores, classLabels);

    // Debug
    std::string temp = "G:/visual_memory/camera1/object_detection/object_detection_camera1_";
    //temp += std::to_string(image_number);
    temp += ".jpg";
    std::cout << "Writing image: " << temp << std::endl;
    cv::imwrite(temp.c_str(), frame);

    vector<vector<string>> return_array;

    // Create the return array
    for (int i = 0; i < boxes.size(); i++)
    {
        const auto& box = boxes[i];
        int classId = classIds[i];
        float score = scores[i];

        if (score >= 90.0)
        {
            vector<string> row(7);
            row[0] = temp;
            row[1] = classLabels[classId]; // Use the actual class ID instead of x
            row[2] = to_string(box.x);
            row[4] = to_string(box.width);
            row[3] = to_string(box.y);
            row[5] = to_string(box.height);
            row[6] = to_string(score);

            return_array.push_back(row);
        }
    }

    // Cleanup
    TF_DeleteTensor(inputTensor);
    TF_DeleteTensor(output_tensors[0]);
    TF_DeleteTensor(output_tensors[1]);
    TF_DeleteTensor(output_tensors[2]);
    TF_DeleteSession(session, status);
    TF_DeleteSessionOptions(options);
    TF_DeleteStatus(status);

    return return_array;
}

vector<vector<string>> _Vision::ObjectDetectionEggs(Mat frame)
{
    string current_date;
    ostringstream oss;
    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    current_date = oss.str();

    //std::string imagePath = "D:/_test/saved_sequence2/";
    std::string model_path = "./tensorflow_models/broken_eggs/";
    std::string labelsPath = "./tensorflow_models/broken_eggs/labels.txt";

    // Initialize TensorFlow
    TF_Status* status = TF_NewStatus();
    // Call LoadGraph to load the model into a graph
    //TF_Graph* graph = LoadGraph(model_path.c_str(), status);
    TF_Graph* graph = TF_NewGraph();
    TF_SessionOptions* options = TF_NewSessionOptions();
    TF_Buffer* run_opts = nullptr;
    const char* tags = "serve";
    TF_Session* session = TF_LoadSessionFromSavedModel(options, nullptr, model_path.c_str(), &tags, 1, graph, nullptr, status);

    // Convert image to tensor
    TF_Tensor* inputTensor = _Vision::MatToTensor(frame);


    // Define input operation
    TF_Output input_op = { TF_GraphOperationByName(graph, "serving_default_input_tensor"), 0 };

    // Define output operations
    std::vector<TF_Output> output_ops{
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 1 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 2 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 4 },
    };

    std::vector<TF_Tensor*> input_tensors = { inputTensor };
    TF_Tensor* output_tensors[] = { NULL, NULL, NULL };

    if (TF_GetCode(status) != TF_OK)
    {
        fprintf(stderr, "Error: %s\n", TF_Message(status));
        // Handle error appropriately
    }

    // Run the session
    TF_SessionRun(session, nullptr,
        &input_op, input_tensors.data(), input_tensors.size(),
        output_ops.data(), output_tensors, output_ops.size(),
        nullptr, 0, nullptr, status);

    if (TF_GetCode(status) == TF_OK)
    {
        printf("Session run successfully\n");
    }
    else
    {
        fprintf(stderr, "Session run error: %s\n", TF_Message(status));
    }

    //cout << "output_tensors[0]: " << output_tensors[0] << endl;
    //cout << "output_tensors[1]: " << output_tensors[1] << endl;
    //cout << "output_tensors[2]: " << output_tensors[2] << endl;
    //cin.get();

    // Process the output tensors to extract boxes, scores, and class IDs
    vector<cv::Rect> boxes = _Vision::ExtractBoxes(output_tensors[0], frame.size()); // Needs implementation
    vector<int> classIds = _Vision::ExtractClassIds(output_tensors[1]); // Needs implementation
    vector<float> scores = _Vision::ExtractScores(output_tensors[2]); // Needs implementation
    std::string* classLabels = _Vision::LoadLabels(labelsPath);
    //cout << "classIds: " << classIds[0] << endl;

    _Vision::DrawBoundingBoxes(frame, boxes, classIds, scores, classLabels);

    // Debug
    std::string temp = vision_memory_directory;
    temp += "/camera1/object_detection/";
    temp += current_date.c_str();
    temp += "_object_detection_camera1.jpg";
    std::cout << "Writing image: " << temp << std::endl;
    cv::imwrite(temp.c_str(), frame);

    vector<vector<string>> return_array;

    // Create the return array
    for (int i = 0; i < boxes.size(); i++)
    {
        const auto& box = boxes[i];
        int classId = classIds[i];
        float score = scores[i];

        if (score >= 90.0)
        {
            vector<string> row(7);
            row[0] = temp;
            row[1] = classLabels[classId]; // Use the actual class ID instead of x
            row[2] = to_string(box.x);
            row[4] = to_string(box.width);
            row[3] = to_string(box.y);
            row[5] = to_string(box.height);
            row[6] = to_string(score);

            return_array.push_back(row);
        }
    }

    // Cleanup
    TF_DeleteTensor(inputTensor);
    TF_DeleteTensor(output_tensors[0]);
    TF_DeleteTensor(output_tensors[1]);
    TF_DeleteTensor(output_tensors[2]);
    TF_DeleteSession(session, status);
    TF_DeleteSessionOptions(options);
    TF_DeleteStatus(status);

    return return_array;
}

vector<vector<string>> _Vision::ObjectDetectionCats(Mat frame)
{
    string current_date;
    ostringstream oss;
    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    current_date = oss.str();

    //std::string imagePath = "D:/_test/saved_sequence2/";
    std::string model_path = "./tensorflow_models/cats/";
    std::string labelsPath = "./tensorflow_models/cats/labels.txt";

    // Initialize TensorFlow
    TF_Status* status = TF_NewStatus();
    // Call LoadGraph to load the model into a graph
    //TF_Graph* graph = LoadGraph(model_path.c_str(), status);
    TF_Graph* graph = TF_NewGraph();
    TF_SessionOptions* options = TF_NewSessionOptions();
    TF_Buffer* run_opts = nullptr;
    const char* tags = "serve";
    TF_Session* session = TF_LoadSessionFromSavedModel(options, nullptr, model_path.c_str(), &tags, 1, graph, nullptr, status);

    // Convert image to tensor
    TF_Tensor* inputTensor = _Vision::MatToTensor(frame);


    // Define input operation
    TF_Output input_op = { TF_GraphOperationByName(graph, "serving_default_input_tensor"), 0 };

    // Define output operations
    std::vector<TF_Output> output_ops{
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 1 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 2 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 4 },
    };

    std::vector<TF_Tensor*> input_tensors = { inputTensor };
    TF_Tensor* output_tensors[] = { NULL, NULL, NULL };

    if (TF_GetCode(status) != TF_OK)
    {
        fprintf(stderr, "Error: %s\n", TF_Message(status));
        // Handle error appropriately
    }

    // Run the session
    TF_SessionRun(session, nullptr,
        &input_op, input_tensors.data(), input_tensors.size(),
        output_ops.data(), output_tensors, output_ops.size(),
        nullptr, 0, nullptr, status);

    if (TF_GetCode(status) == TF_OK)
    {
        printf("Session run successfully\n");
    }
    else
    {
        fprintf(stderr, "Session run error: %s\n", TF_Message(status));
    }

    //cout << "output_tensors[0]: " << output_tensors[0] << endl;
    //cout << "output_tensors[1]: " << output_tensors[1] << endl;
    //cout << "output_tensors[2]: " << output_tensors[2] << endl;
    //cin.get();

    // Process the output tensors to extract boxes, scores, and class IDs
    vector<cv::Rect> boxes = _Vision::ExtractBoxes(output_tensors[0], frame.size()); // Needs implementation
    vector<int> classIds = _Vision::ExtractClassIds(output_tensors[1]); // Needs implementation
    vector<float> scores = _Vision::ExtractScores(output_tensors[2]); // Needs implementation
    std::string* classLabels = _Vision::LoadLabels(labelsPath);
    //cout << "classIds: " << classIds[0] << endl;

    _Vision::DrawBoundingBoxes(frame, boxes, classIds, scores, classLabels);

    // Debug
    std::string temp = vision_memory_directory;
    temp += "/camera1/object_detection/";
    temp += current_date.c_str();
    temp += "_object_detection_camera1.jpg";
    std::cout << "Writing image: " << temp << std::endl;
    cv::imwrite(temp.c_str(), frame);

    vector<vector<string>> return_array;

    // Create the return array
    for (int i = 0; i < boxes.size(); i++)
    {
        const auto& box = boxes[i];
        int classId = classIds[i];
        float score = scores[i];

        if (score >= 90.0)
        {
            vector<string> row(7);
            row[0] = temp;
            row[1] = classLabels[classId]; // Use the actual class ID instead of x
            row[2] = to_string(box.x);
            row[4] = to_string(box.width);
            row[3] = to_string(box.y);
            row[5] = to_string(box.height);
            row[6] = to_string(score);

            return_array.push_back(row);
        }
    }

    // Cleanup
    TF_DeleteTensor(inputTensor);
    TF_DeleteTensor(output_tensors[0]);
    TF_DeleteTensor(output_tensors[1]);
    TF_DeleteTensor(output_tensors[2]);
    TF_DeleteSession(session, status);
    TF_DeleteSessionOptions(options);
    TF_DeleteStatus(status);

    return return_array;
}

vector<vector<string>> _Vision::ObjectDetectionAntsDogs(Mat frame)
{
    string current_date;
    ostringstream oss;
    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    current_date = oss.str();

    //std::string imagePath = "D:/_test/saved_sequence2/";
    std::string model_path = "./tensorflow_models/dogs/";
    std::string labelsPath = "./tensorflow_models/dogs/labels.txt";

    // Initialize TensorFlow
    TF_Status* status = TF_NewStatus();
    // Call LoadGraph to load the model into a graph
    //TF_Graph* graph = LoadGraph(model_path.c_str(), status);
    TF_Graph* graph = TF_NewGraph();
    TF_SessionOptions* options = TF_NewSessionOptions();
    TF_Buffer* run_opts = nullptr;
    const char* tags = "serve";
    TF_Session* session = TF_LoadSessionFromSavedModel(options, nullptr, model_path.c_str(), &tags, 1, graph, nullptr, status);

    // Convert image to tensor
    TF_Tensor* inputTensor = _Vision::MatToTensor(frame);


    // Define input operation
    TF_Output input_op = { TF_GraphOperationByName(graph, "serving_default_input_tensor"), 0 };

    // Define output operations
    std::vector<TF_Output> output_ops{
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 1 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 2 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 4 },
    };

    std::vector<TF_Tensor*> input_tensors = { inputTensor };
    TF_Tensor* output_tensors[] = { NULL, NULL, NULL };

    if (TF_GetCode(status) != TF_OK)
    {
        fprintf(stderr, "Error: %s\n", TF_Message(status));
        // Handle error appropriately
    }

    // Run the session
    TF_SessionRun(session, nullptr,
        &input_op, input_tensors.data(), input_tensors.size(),
        output_ops.data(), output_tensors, output_ops.size(),
        nullptr, 0, nullptr, status);

    if (TF_GetCode(status) == TF_OK)
    {
        printf("Session run successfully\n");
    }
    else
    {
        fprintf(stderr, "Session run error: %s\n", TF_Message(status));
    }

    //cout << "output_tensors[0]: " << output_tensors[0] << endl;
    //cout << "output_tensors[1]: " << output_tensors[1] << endl;
    //cout << "output_tensors[2]: " << output_tensors[2] << endl;
    //cin.get();

    // Process the output tensors to extract boxes, scores, and class IDs
    vector<cv::Rect> boxes = _Vision::ExtractBoxes(output_tensors[0], frame.size()); // Needs implementation
    vector<int> classIds = _Vision::ExtractClassIds(output_tensors[1]); // Needs implementation
    vector<float> scores = _Vision::ExtractScores(output_tensors[2]); // Needs implementation
    std::string* classLabels = _Vision::LoadLabels(labelsPath);
    //cout << "classIds: " << classIds[0] << endl;

    _Vision::DrawBoundingBoxes(frame, boxes, classIds, scores, classLabels);

    // Debug
    std::string temp = vision_memory_directory;
    temp += "/camera1/object_detection/";
    temp += current_date.c_str();
    temp += "_object_detection_camera1.jpg";
    std::cout << "Writing image: " << temp << std::endl;
    cv::imwrite(temp.c_str(), frame);

    vector<vector<string>> return_array;

    // Create the return array
    for (int i = 0; i < boxes.size(); i++)
    {
        const auto& box = boxes[i];
        int classId = classIds[i];
        float score = scores[i];

        if (score >= 90.0)
        {
            vector<string> row(7);
            row[0] = temp;
            row[1] = classLabels[classId]; // Use the actual class ID instead of x
            row[2] = to_string(box.x);
            row[4] = to_string(box.width);
            row[3] = to_string(box.y);
            row[5] = to_string(box.height);
            row[6] = to_string(score);

            return_array.push_back(row);
        }
    }

    // Cleanup
    TF_DeleteTensor(inputTensor);
    TF_DeleteTensor(output_tensors[0]);
    TF_DeleteTensor(output_tensors[1]);
    TF_DeleteTensor(output_tensors[2]);
    TF_DeleteSession(session, status);
    TF_DeleteSessionOptions(options);
    TF_DeleteStatus(status);

    return return_array;
}

vector<vector<string>> _Vision::ObjectDetectionAntsPests(Mat frame)
{
    string current_date;
    ostringstream oss;
    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    current_date = oss.str();

    //std::string imagePath = "D:/_test/saved_sequence2/";
    std::string model_path = "./tensorflow_models/pests/";
    std::string labelsPath = "./tensorflow_models/pests/labels.txt";

    // Initialize TensorFlow
    TF_Status* status = TF_NewStatus();
    // Call LoadGraph to load the model into a graph
    //TF_Graph* graph = LoadGraph(model_path.c_str(), status);
    TF_Graph* graph = TF_NewGraph();
    TF_SessionOptions* options = TF_NewSessionOptions();
    TF_Buffer* run_opts = nullptr;
    const char* tags = "serve";
    TF_Session* session = TF_LoadSessionFromSavedModel(options, nullptr, model_path.c_str(), &tags, 1, graph, nullptr, status);

    // Convert image to tensor
    TF_Tensor* inputTensor = _Vision::MatToTensor(frame);


    // Define input operation
    TF_Output input_op = { TF_GraphOperationByName(graph, "serving_default_input_tensor"), 0 };

    // Define output operations
    std::vector<TF_Output> output_ops{
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 1 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 2 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 4 },
    };

    std::vector<TF_Tensor*> input_tensors = { inputTensor };
    TF_Tensor* output_tensors[] = { NULL, NULL, NULL };

    if (TF_GetCode(status) != TF_OK)
    {
        fprintf(stderr, "Error: %s\n", TF_Message(status));
        // Handle error appropriately
    }

    // Run the session
    TF_SessionRun(session, nullptr,
        &input_op, input_tensors.data(), input_tensors.size(),
        output_ops.data(), output_tensors, output_ops.size(),
        nullptr, 0, nullptr, status);

    if (TF_GetCode(status) == TF_OK)
    {
        printf("Session run successfully\n");
    }
    else
    {
        fprintf(stderr, "Session run error: %s\n", TF_Message(status));
    }

    //cout << "output_tensors[0]: " << output_tensors[0] << endl;
    //cout << "output_tensors[1]: " << output_tensors[1] << endl;
    //cout << "output_tensors[2]: " << output_tensors[2] << endl;
    //cin.get();

    // Process the output tensors to extract boxes, scores, and class IDs
    vector<cv::Rect> boxes = _Vision::ExtractBoxes(output_tensors[0], frame.size()); // Needs implementation
    vector<int> classIds = _Vision::ExtractClassIds(output_tensors[1]); // Needs implementation
    vector<float> scores = _Vision::ExtractScores(output_tensors[2]); // Needs implementation
    std::string* classLabels = _Vision::LoadLabels(labelsPath);

    _Vision::DrawBoundingBoxes(frame, boxes, classIds, scores, classLabels);

    // Debug
    std::string temp = vision_memory_directory;
    temp += "/camera1/object_detection/";
    temp += current_date.c_str();
    temp += "_object_detection_camera1.jpg";
    std::cout << "Writing image: " << temp << std::endl;
    cv::imwrite(temp.c_str(), frame);

    vector<vector<string>> return_array;

    // Create the return array
    for (int i = 0; i < boxes.size(); i++)
    {
        const auto& box = boxes[i];
        int classId = classIds[i];
        float score = scores[i];

        if (score >= 90.0)
        {
            vector<string> row(7);
            row[0] = temp;
            row[1] = classLabels[classId]; // Use the actual class ID instead of x
            row[2] = to_string(box.x);
            row[4] = to_string(box.width);
            row[3] = to_string(box.y);
            row[5] = to_string(box.height);
            row[6] = to_string(score);

            return_array.push_back(row);
        }
    }

    // Cleanup
    TF_DeleteTensor(inputTensor);
    TF_DeleteTensor(output_tensors[0]);
    TF_DeleteTensor(output_tensors[1]);
    TF_DeleteTensor(output_tensors[2]);
    TF_DeleteSession(session, status);
    TF_DeleteSessionOptions(options);
    TF_DeleteStatus(status);

    return return_array;
}

vector<vector<string>> _Vision::ObjectDetectionBalls(Mat frame)
{
    string current_date;
    ostringstream oss;
    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    current_date = oss.str();

    //std::string imagePath = "D:/_test/saved_sequence2/";
    std::string model_path = "D:/_AugmentedIntelligence/_src/tensorflow_models/sports_balls/";
    std::string labelsPath = "D:/_AugmentedIntelligence/_src/tensorflow_models/sports_balls/labels.txt";

    // Initialize TensorFlow
    TF_Status* status = TF_NewStatus();
    // Call LoadGraph to load the model into a graph
    //TF_Graph* graph = LoadGraph(model_path.c_str(), status);
    TF_Graph* graph = TF_NewGraph();
    TF_SessionOptions* options = TF_NewSessionOptions();
    TF_Buffer* run_opts = nullptr;
    const char* tags = "serve";
    TF_Session* session = TF_LoadSessionFromSavedModel(options, nullptr, model_path.c_str(), &tags, 1, graph, nullptr, status);

    // Convert image to tensor
    TF_Tensor* inputTensor = _Vision::MatToTensor(frame);


    // Define input operation
    TF_Output input_op = { TF_GraphOperationByName(graph, "serving_default_input_tensor"), 0 };

    // Define output operations
    std::vector<TF_Output> output_ops{
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 1 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 2 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 4 },
    };

    std::vector<TF_Tensor*> input_tensors = { inputTensor };
    TF_Tensor* output_tensors[] = { NULL, NULL, NULL };

    if (TF_GetCode(status) != TF_OK)
    {
        fprintf(stderr, "Error: %s\n", TF_Message(status));
        // Handle error appropriately
    }

    // Run the session
    TF_SessionRun(session, nullptr,
        &input_op, input_tensors.data(), input_tensors.size(),
        output_ops.data(), output_tensors, output_ops.size(),
        nullptr, 0, nullptr, status);

    if (TF_GetCode(status) == TF_OK)
    {
        printf("Session run successfully\n");
    }
    else
    {
        fprintf(stderr, "Session run error: %s\n", TF_Message(status));
    }

    //cout << "output_tensors[0]: " << output_tensors[0] << endl;
    //cout << "output_tensors[1]: " << output_tensors[1] << endl;
    //cout << "output_tensors[2]: " << output_tensors[2] << endl;
    //cin.get();

    // Process the output tensors to extract boxes, scores, and class IDs
    vector<cv::Rect> boxes = _Vision::ExtractBoxes(output_tensors[0], frame.size()); // Needs implementation
    vector<int> classIds = _Vision::ExtractClassIds(output_tensors[1]); // Needs implementation
    vector<float> scores = _Vision::ExtractScores(output_tensors[2]); // Needs implementation
    std::string* classLabels = _Vision::LoadLabels(labelsPath);

    _Vision::DrawBoundingBoxes(frame, boxes, classIds, scores, classLabels);

    // Debug
    std::string temp = vision_memory_directory;
    temp += "/camera1/object_detection/";
    temp += current_date.c_str();
    temp += "_object_detection_camera1.jpg";
    std::cout << "Writing image: " << temp << std::endl;
    cv::imwrite(temp.c_str(), frame);

    vector<vector<string>> return_array;

    // Create the return array
    for (int i = 0; i < boxes.size(); i++)
    {
        const auto& box = boxes[i];
        int classId = classIds[i];
        float score = scores[i];

        if (score >= 90.0)
        {
            vector<string> row(7);
            row[0] = temp;
            row[1] = classLabels[classId]; // Use the actual class ID instead of x
            row[2] = to_string(box.x);
            row[4] = to_string(box.width);
            row[3] = to_string(box.y);
            row[5] = to_string(box.height);
            row[6] = to_string(score);

            return_array.push_back(row);
        }
    }

    // Cleanup
    TF_DeleteTensor(inputTensor);
    TF_DeleteTensor(output_tensors[0]);
    TF_DeleteTensor(output_tensors[1]);
    TF_DeleteTensor(output_tensors[2]);
    TF_DeleteSession(session, status);
    TF_DeleteSessionOptions(options);
    TF_DeleteStatus(status);

    return return_array;
}

vector<vector<string>> _Vision::ObjectDetectionTrash(Mat frame)
{
    string current_date;
    ostringstream oss;
    auto entry = time(nullptr);
    auto tm1 = *localtime(&entry);

    oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
    current_date = oss.str();

    //std::string imagePath = "D:/_test/saved_sequence2/";
    std::string model_path = "./tensorflow_models/trash_detection/";
    std::string labelsPath = "./tensorflow_models/trash_detection/coco.names";

    // Initialize TensorFlow
    TF_Status* status = TF_NewStatus();
    // Call LoadGraph to load the model into a graph
    //TF_Graph* graph = LoadGraph(model_path.c_str(), status);
    TF_Graph* graph = TF_NewGraph();
    TF_SessionOptions* options = TF_NewSessionOptions();
    TF_Buffer* run_opts = nullptr;
    const char* tags = "serve";
    TF_Session* session = TF_LoadSessionFromSavedModel(options, nullptr, model_path.c_str(), &tags, 1, graph, nullptr, status);

    // Convert image to tensor
    TF_Tensor* inputTensor = _Vision::MatToTensor(frame);


    // Define input operation
    TF_Output input_op = { TF_GraphOperationByName(graph, "serving_default_input_tensor"), 0 };

    // Define output operations
    std::vector<TF_Output> output_ops{
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 1 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 2 },
        { TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 4 },
    };

    std::vector<TF_Tensor*> input_tensors = { inputTensor };
    TF_Tensor* output_tensors[] = { NULL, NULL, NULL };

    if (TF_GetCode(status) != TF_OK)
    {
        fprintf(stderr, "Error: %s\n", TF_Message(status));
        // Handle error appropriately
    }

    // Run the session
    TF_SessionRun(session, nullptr,
        &input_op, input_tensors.data(), input_tensors.size(),
        output_ops.data(), output_tensors, output_ops.size(),
        nullptr, 0, nullptr, status);

    if (TF_GetCode(status) == TF_OK)
    {
        printf("Session run successfully\n");
    }
    else
    {
        fprintf(stderr, "Session run error: %s\n", TF_Message(status));
    }

    //cout << "output_tensors[0]: " << output_tensors[0] << endl;
    //cout << "output_tensors[1]: " << output_tensors[1] << endl;
    //cout << "output_tensors[2]: " << output_tensors[2] << endl;
    //cin.get();

    // Process the output tensors to extract boxes, scores, and class IDs
    vector<cv::Rect> boxes = _Vision::ExtractBoxes(output_tensors[0], frame.size()); // Needs implementation
    vector<int> classIds = _Vision::ExtractClassIds(output_tensors[1]); // Needs implementation
    vector<float> scores = _Vision::ExtractScores(output_tensors[2]); // Needs implementation
    std::string* classLabels = _Vision::LoadLabels(labelsPath);

    _Vision::DrawBoundingBoxes(frame, boxes, classIds, scores, nullptr);

    // Debug
    std::string temp = vision_memory_directory;
    temp += "/camera1/object_detection/";
    temp += current_date.c_str();
    temp += "_object_detection_camera1.jpg";
    std::cout << "Writing image: " << temp << std::endl;
    cv::imwrite(temp.c_str(), frame);

    vector<vector<string>> return_array;

    // Create the return array
    for (int i = 0; i < boxes.size(); i++)
    {
        const auto& box = boxes[i];
        int classId = classIds[i];
        float score = scores[i];

        if (score >= 90.0)
        {
            vector<string> row(7);
            row[0] = temp;
            row[1] = classLabels[classId]; // Use the actual class ID instead of x
            row[2] = to_string(box.x);
            row[4] = to_string(box.width);
            row[3] = to_string(box.y);
            row[5] = to_string(box.height);
            row[6] = to_string(score);

            return_array.push_back(row);
        }
    }

    // Cleanup
    TF_DeleteTensor(inputTensor);
    TF_DeleteTensor(output_tensors[0]);
    TF_DeleteTensor(output_tensors[1]);
    TF_DeleteTensor(output_tensors[2]);
    TF_DeleteSession(session, status);
    TF_DeleteSessionOptions(options);
    TF_DeleteStatus(status);

    return return_array;
}

//vector<vector<string>> _Vision::ObjectDetectionUnknown(Mat frame)
//{
//
//}

cv::Mat _Vision::PreprocessImage(const std::string& imagePath, int targetWidth, int targetHeight)
{
    // Load the image
    cv::Mat image = cv::imread(imagePath.c_str());

    if (image.empty())
    {
        std::cerr << "Error: Could not open image." << std::endl;
        exit(-1);
    }

    //// Resize the image to the target dimensions
    //cv::Mat resizedImage;
    //cv::resize(image, resizedImage, cv::Size(targetWidth, targetHeight));

    //// Convert BGR to RGB
    //cv::Mat rgbImage;
    //cv::cvtColor(resizedImage, rgbImage, cv::COLOR_BGR2RGB);

    return image;
}

TF_Tensor* _Vision::MatToTensor(const cv::Mat& image)
{
    // Ensure the image is in the format TensorFlow expects (uint8).
    cv::Mat image_uint8;

    // Dimensions of the tensor
    const int64_t dim[4] = { 1, image.rows, image.cols, image.channels() };

    // Calculate the size of the buffer in bytes
    size_t size = image.total() * image.elemSize();

    // Create a new TensorFlow tensor with the given dimensions and data type
    TF_Tensor* tensor = TF_AllocateTensor(TF_UINT8, dim, 4, size);

    // Copy the OpenCV data into the newly created tensor
    std::memcpy(TF_TensorData(tensor), image.data, size);

    return tensor;
}

void _Vision::DrawBoundingBoxes(const cv::Mat& image, const std::vector<cv::Rect>& boxes, const std::vector<int>& classIds, std::vector<float>& scores, string* classLabels)
{
    for (size_t i = 0; i < boxes.size(); ++i)
    {
        const auto& box = boxes[i];
        int classId = classIds[i];
        float score = scores[i];

        if (score >= 0.90)
        {
            std::string class_name = classLabels[classId - 1];
            std::string label = classLabels[classId - 1] + ": " + std::to_string(score);

            // Draw rectangle around the object
            cv::rectangle(image, box, cv::Scalar(255, 0, 0), 2);

            // Put a label near the rectangle
            int baseLine;
            cv::Size labelSize = cv::getTextSize(label, cv::FONT_HERSHEY_COMPLEX, 0.5, 1, &baseLine);
            cv::putText(image, label, cv::Point(box.x, box.y - labelSize.height), cv::FONT_HERSHEY_COMPLEX, 0.5, cv::Scalar(0, 0, 255), 1);
        }
    }
}

std::vector<cv::Rect> _Vision::ExtractBoxes(TF_Tensor* boxesTensor, const cv::Size& imageSize)
{
    auto numDetections = TF_Dim(boxesTensor, 1);
    auto* data = static_cast<float*>(TF_TensorData(boxesTensor));

    std::vector<cv::Rect> boxes;

    for (int i = 0; i < numDetections; ++i)
    {
        float ymin = data[i * 4 + 0] * imageSize.height;
        float xmin = data[i * 4 + 1] * imageSize.width;
        float ymax = data[i * 4 + 2] * imageSize.height;
        float xmax = data[i * 4 + 3] * imageSize.width;
        boxes.push_back(cv::Rect(cv::Point(xmin, ymin), cv::Point(xmax, ymax)));
    }
    return boxes;
}

std::vector<float> _Vision::ExtractScores(TF_Tensor* scoresTensor)
{
    auto numDetections = TF_Dim(scoresTensor, 1);
    auto* scoresData = static_cast<float*>(TF_TensorData(scoresTensor));

    std::vector<float> scores(scoresData, scoresData + numDetections);
    return scores;
}

std::vector<int> _Vision::ExtractClassIds(TF_Tensor* classesTensor)
{
    auto numDetections = TF_Dim(classesTensor, 1);
    auto* classIdsData = static_cast<float*>(TF_TensorData(classesTensor)); // Assuming float, convert if necessary

    std::vector<int> classIds(numDetections);
    for (int i = 0; i < numDetections; ++i)
    {
        classIds[i] = static_cast<int>(classIdsData[i]);
    }
    return classIds;
}

std::string* _Vision::LoadLabels(const std::string& labelFilePath)
{
    std::ifstream file(labelFilePath);
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