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
    static void VisionRawCamera1();
    static void VisionRawCamera2();
    static void Vision();
    static string** ObjectDetection(string image_path);
    static void MySQLVisionRAWCamera1();
    static void MySQLVisionRAWCamera2();
    static void TextDetection();
    static void TextRecognition();
};

//
//struct Detection
//{
//    int class_id;
//    float confidence;
//    cv::Rect box;
//};