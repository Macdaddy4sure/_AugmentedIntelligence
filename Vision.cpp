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

/*
    YOLO LICENSE
    Version 2, July 29 2016

    THIS SOFTWARE LICENSE IS PROVIDED "ALL CAPS" SO THAT YOU KNOW IT IS SUPER
    SERIOUS AND YOU DON'T MESS AROUND WITH COPYRIGHT LAW BECAUSE YOU WILL GET IN
    TROUBLE HERE ARE SOME OTHER BUZZWORDS COMMONLY IN THESE THINGS WARRANTIES
    LIABILITY CONTRACT TORT LIABLE CLAIMS RESTRICTION MERCHANTABILITY.NOW HERE'S
    THE REAL LICENSE :

    0. Darknet is public domain.
    1. Do whatever you want with it.
    2. Stop emailing me about it!
*/

#include "AugmentedIntelligence.h"
#include "Vision.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reference.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

using namespace std;
using namespace filesystem;
using namespace chrono;
using namespace chrono_literals;
using namespace cv;
using namespace cv::dnn;

// Constants.
const float INPUT_WIDTH = 640.0;
const float INPUT_HEIGHT = 640.0;
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
        thread VisionCamera1Raw(_Vision::VisionRawCamera1);
        thread VisionCamera1MySQL(_Vision::MySQLVisionRAWCamera1);
    }
    if (camera2_enabled)
    {
        thread VisionCamera2Raw(_Vision::VisionRawCamera2);
        thread VisionCamera2MySQL(_Vision::MySQLVisionRAWCamera2);
    }
}

// The following function will initialize the webcam and record raw visual data to memory
void _Vision::VisionRawCamera1()
{
    string command;
    string current_time;
    ostringstream oss;

    while (camera1_enabled && visual_memory)
    {
        auto entry = time(nullptr);
        auto tm1 = *localtime(&entry);

        oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
        current_time = oss.str();

        command = "ffmpeg -f dshow -video_size ";
        command += camera1_resolution;
        command += " -i video=\"";
        command += camera1.c_str();
        command += "\" -vf fps=\"";
        command += camera1_fps;
        command += "\" ";
        command += vision_memory_directory.c_str();
        command += "/camera1/";
        command += "/image_camera1_";
        command += current_time;
        command += ".jpg";
        system(command.c_str());
    }
}

// The following function will initialize the webcam and record raw visual data to memory
void _Vision::VisionRawCamera2()
{
    string command;
    string current_time;
    ostringstream oss;

    while (camera2_enabled && visual_memory)
    {
        auto entry = time(nullptr);
        auto tm1 = *localtime(&entry);

        oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S-%MSS");
        current_time = oss.str();

        command = "ffmpeg -f dshow -video_size ";
        command += camera2_resolution.c_str();
        command += "-i video=\"";
        command += camera2.c_str();
        command += "\" -vf fps=\"";
        command += camera2_fps.c_str();
        command += "\" ";
        command += vision_memory_directory.c_str();
        command += "/camera2/";
        command += "image_camera1_";
        command += current_time;
        command += ".jpg";
        system(command.c_str());
    }
}

// Import images into MySQL
void _Vision::MySQLVisionRAWCamera1()
{
    MYSQL* conn;
    string table_name = "ai_vision_camera1";
    string temp_path;
    string image_hash;
    string current_date;
    string object_classes[20];
    string object_left[20];
    string object_top[20];
    string object_right[20];
    string object_bottom[20];
    string object_score[20];
    ostringstream oss;
    string sql1;
    
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_vision_database.c_str(), 3306, NULL, 0);

    while (visual_memory)
    {
        if (conn)
        {
            for (auto& p : directory_iterator(vision_memory_directory.c_str()))
            {
                temp_path = p.path().string();

                if (vision_object_detection)
                {
                    // 1. Get the data from the object detection function
                    // 2. Get the number of classes in the array
                    // 3. Sort the classes into 
                    string* object_detection_array = _Vision::ObjectDetection(temp_path);

                    for (int x = 0; x < sizeof(object_detection_array); x++)
                    {
                        if (x % 6 == 0)
                        {
                            for (int y = 0; y < 20; y++)
                            {
                                if (object_classes[y] == "")
                                    object_classes[y] = object_detection_array[x];
                            }
                        }
                        if (x % 6 == 1)
                        {
                            for (int y = 0; y < 20; y++)
                            {
                                if (object_left[y] == "")
                                    object_left[y] = object_detection_array[x];
                            }
                        }
                        if (x % 6 == 2)
                        {
                            for (int y = 0; y < 20; y++)
                            {
                                if (object_top[y] == "")
                                    object_top[y] = object_detection_array[x];
                            }
                        }
                        if (x % 6 == 3)
                        {
                            for (int y = 0; y < 20; y++)
                            {
                                if (object_right[y] == "")
                                    object_right[y] = object_detection_array[x];
                            }
                        }
                        if (x % 6 == 4)
                        {
                            for (int y = 0; y < 20; y++)
                            {
                                if (object_bottom[y] == "")
                                    object_bottom[y] = object_detection_array[x];
                            }
                        }
                        if (x % 6 == 5)
                        {
                            for (int y = 0; y < 20; y++)
                            {
                                if (object_score[y] == "")
                                    object_score[y] = object_detection_array[x];
                            }
                        }
                    }
                }
                else if (vision_object_detection_cuda)
                {
                    // Not implamented yet
                }
                else if (vision_object_detection_remote_enabled)
                {
                    // Not implamented yet
                }
                
                /*image_hash = _Utilities::getHash(temp_path);*/

                auto entry = time(nullptr);
                auto tm1 = *localtime(&entry);

                oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
                current_date = oss.str();

                sql1 = "INSERT INTO ";
                sql1 += table_name;
                sql1 += "(image_path, creation_time, image_hash, class1, class1_left, class1_top, class1_right, class1_bottom, classs1_score, class2, class2_left, class2_top, class2_right, class2_bottom, class2_score, class3, class3_left, class3_top, class3_right, class3_bottom, class3_score, class4, class4_left, class4_top, class4_right, class4_bottom, class4_score, class5, class5_left, class5_top, class5_right, class5_bottom, class5_score, class6, class6_left, class6_top, class6_right, class6_bottom, class6_score, class7, class7_left, class7_top, class7_right, class7_bottom, class7_score, class8, class8_left, class8_top, class8_right, class8_bottom, class8_score, class9, class9_left, class9_top, class9_right, class9_bottom, class9_score, class10, class10_left, class10_top, class10_right, class10_bottom, class10_score, class11, class11_left, class11_top, class11_right, class11_bottom, class11_score, class12, class12_left, class12_top, class12_right, class12_bottom, class12_score, class13, class13_left, class13_top, class13_right, class13_bottom, class13_score, class14, class14_left, class14_top, class14_right, class14_bottom, class14_score, class15, class15_left, class15_top, class15_right, class15_bottom, class15_score, class16, class16_left, class16_top, class16_right, class16_bottom, class16_score, class17, class17_left, class17_top, class17_right, class17_bottom, class17_score, class18, class18_left, class18_top, class18_right, class18_bottom, class18_score, class19, class19_left, class19_top, class19_right, class19_bottom, class19_score, class20, class20_left, class20_top, class20_right, class20_bottom, class20_score) VALUES(\"";
                sql1 += temp_path.c_str();
                sql1 += "\", \"";
                sql1 += current_date.c_str();
                sql1 += "\", \"";
                sql1 += image_hash.c_str();

                for (int z = 0; z < 20; z++)
                {
                    sql1 += "\", \"";
                    sql1 += object_classes[z].c_str();
                    sql1 += "\", \"";
                    sql1 += object_left[z].c_str();
                    sql1 += "\", \"";
                    sql1 += object_top[z].c_str();
                    sql1 += "\", \"";
                    sql1 += object_right[z].c_str();
                    sql1 += "\", \"";
                    sql1 += object_bottom[z].c_str();
                    sql1 += "\", \"";
                    sql1 += object_score[z].c_str();
                }

                sql1 += "\");";
                mysql_query(conn, sql1.c_str());
                this_thread::sleep_for(chrono::milliseconds(40));
            }
        }
    }

    //terminate();
}

void _Vision::MySQLVisionRAWCamera2()
{
    MYSQL* conn;
    string camera_vision_database = "ai_senses";
    string table_name = "ai_vision_camera2";
    string temp_path;
    string current_date;
    ostringstream oss;
    string sql1;
    string image_hash;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), mysql_vision_database.c_str(), 3306, NULL, 0);

    while (visual_memory)
    {
        if (conn)
        {
            for (auto& p : directory_iterator(vision_memory_directory.c_str()))
            {
                temp_path = p.path().string();
                string* object_detection_array = _Vision::ObjectDetection(temp_path);
                /*image_hash = _Utilities::getHash(temp_path);*/

                auto entry = time(nullptr);
                auto tm1 = *localtime(&entry);

                oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
                current_date = oss.str();

                sql1 = "INSERT INTO ";
                sql1 += table_name.c_str();
                sql1 += "(image_path, creation_time, image_hash, class1, class1_left, class1_top, class1_right, class1_bottom, classs1_score, class2, class2_left, class2_top, class2_right, class2_bottom, class2_score, class3, class3_left, class3_top, class3_right, class3_bottom, class3_score, class4, class4_left, class4_top, class4_right, class4_bottom, class4_score, class5, class5_left, class5_top, class5_right, class5_bottom, class5_score, class6, class6_left, class6_top, class6_right, class6_bottom, class6_score, class7, class7_left, class7_top, class7_right, class7_bottom, class7_score, class8, class8_left, class8_top, class8_right, class8_bottom, class8_score, class9, class9_left, class9_top, class9_right, class9_bottom, class9_score, class10, class10_left, class10_top, class10_right, class10_bottom, class10_score, class11, class11_left, class11_top, class11_right, class11_bottom, class11_score, class12, class12_left, class12_top, class12_right, class12_bottom, class12_score, class13, class13_left, class13_top, class13_right, class13_bottom, class13_score, class14, class14_left, class14_top, class14_right, class14_bottom, class14_score, class15, class15_left, class15_top, class15_right, class15_bottom, class15_score, class16, class16_left, class16_top, class16_right, class16_bottom, class16_score, class17, class17_left, class17_top, class17_right, class17_bottom, class17_score, class18, class18_left, class18_top, class18_right, class18_bottom, class18_score, class19, class19_left, class19_top, class19_right, class19_bottom, class19_score, class20, class20_left, class20_top, class20_right, class20_bottom, class20_score) VALUES(\"";
                sql1 += temp_path.c_str();
                sql1 += "\", \"";
                sql1 += current_date.c_str();
                sql1 += "\", \"";
                sql1 += image_hash.c_str();
                sql1 += "\");";
                mysql_query(conn, sql1.c_str());
                this_thread::sleep_for(chrono::milliseconds(40));
            }
        }
    }

    //terminate();
}

string* _Vision::ObjectDetection(string image_path)
{
    //std::string imagePath = "D:/_test/saved_sequence2/";
    std::string model_path = "D:/_test/saved_model";
    std::string labelsPath = "D:/_test/coco.names";
    int targetWidth = 3840; // Adjust to your model's expected input dimensions
    int targetHeight = 2160;
    int image_number = 0;

    // Initialize TensorFlow
    TF_Status* status = TF_NewStatus();
    // Call LoadGraph to load the model into a graph
    //TF_Graph* graph = LoadGraph(model_path.c_str(), status);
    TF_Graph* graph = TF_NewGraph();
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

    // Preprocess the image
    cv::Mat image = _Vision::PreprocessImage(image_path, targetWidth, targetHeight);

    // Convert image to tensor
    TF_Tensor* inputTensor = _Vision::MatToTensor(image);

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

    // Process the output tensors to extract boxes, scores, and class IDs
    auto boxes = _Vision::ExtractBoxes(output_tensors[0], image.size()); // Needs implementation
    auto classIds = _Vision::ExtractClassIds(output_tensors[1]); // Needs implementation
    auto scores = _Vision::ExtractScores(output_tensors[2]); // Needs implementation
    std::string* classLabels = _Vision::LoadLabels("D:/_test/coco.names");

    _Vision::DrawBoundingBoxes(image, boxes, classIds, scores, classLabels);

    // Debug
    //std::string temp = "D:/_test/saved_sequence1/saved_sequence_b_";
    //temp += std::to_string(image_number);
    //temp += ".jpg";
    //std::cout << "Writing image: " << temp << std::endl;
    //cv::imwrite(temp.c_str(), image);

    // Cleanup
    TF_DeleteTensor(inputTensor);
    TF_DeleteTensor(output_tensors[0]);
    TF_DeleteTensor(output_tensors[1]);
    TF_DeleteTensor(output_tensors[2]);
    TF_DeleteSession(session, status);
    TF_DeleteSessionOptions(options);
    TF_DeleteStatus(status);
}

cv::Mat _Vision::PreprocessImage(const std::string& imagePath, int targetWidth, int targetHeight)
{
    // Load the image
    cv::Mat image = cv::imread(imagePath);

    //if (image.empty())
    //{
    //    std::cerr << "Error: Could not open image." << std::endl;
    //    exit(-1);
    //}

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

void _Vision::DrawBoundingBoxes(cv::Mat& image, const std::vector<cv::Rect>& boxes, const std::vector<int>& classIds, std::vector<float>& scores, std::string* classLabels)
{
    for (size_t i = 0; i < boxes.size(); ++i)
    {
        const auto& box = boxes[i];
        int classId = classIds[i];
        float score = scores[i];

        std::string class_name = classLabels[classId - 1];
        std::string label = classLabels[classId - 1] + ": " + std::to_string(score);

        if (score >= 90.0)
        {
            // Draw rectangle around the object
            cv::rectangle(image, box, cv::Scalar(0, 255, 0), 2);

            // Put a label near the rectangle
            int baseLine;
            cv::Size labelSize = cv::getTextSize(label, cv::FONT_HERSHEY_COMPLEX, 0.5, 1, &baseLine);
            cv::putText(image, label, cv::Point(box.x, box.y - labelSize.height), cv::FONT_HERSHEY_COMPLEX, 0.5, cv::Scalar(0, 255, 0), 1);
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