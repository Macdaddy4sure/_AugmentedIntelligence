#pragma once

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

#include "AugmentedIntelligence.h"

using namespace std;
using namespace cv;
using namespace cv::dnn;

class _Vision
{
public:
    static void Vision();
    static void VisionRawCamera1();
    static void VisionRawCamera2();
    static void MySQLVisionRAWCamera1();
    static void MySQLVisionRAWCamera2();
    static string* ObjectDetection(string image_path);
    static void RunSession(TF_Session* session, TF_Graph* graph, TF_Status* status, TF_SessionOptions* options, TF_Tensor* inputTensor, cv::Mat image, int image_number);
    static void DrawBoundingBoxes(cv::Mat& image, const std::vector<cv::Rect>& boxes, const std::vector<int>& classIds, std::vector<float>& scores, std::string* classLabels);
    static cv::Mat PreprocessImage(const std::string& imagePath, int targetWidth, int targetHeight);
    static TF_Tensor* MatToTensor(const cv::Mat& image);
    static std::vector<cv::Rect> ExtractBoxes(TF_Tensor* boxesTensor, const cv::Size& imageSize);
    static std::vector<float> ExtractScores(TF_Tensor* scoresTensor);
    static std::vector<int> ExtractClassIds(TF_Tensor* classesTensor);
    static std::string* LoadLabels(const std::string& labelFilePath);


private:
    //static void TextDetection();
    //static void TextRecognition(string image);
    // User defined image sequence, pre-encoded
    // Variables
    static string vision_camera1_image_path;
    static string vision_camera2_image_path;
};

