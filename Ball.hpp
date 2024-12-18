#pragma once

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

#include "AugmentedIntelligence.hpp"

using namespace std;
using namespace cv;

struct Object
{
    string unique_id;
    string class_name;
    double x;
    double box_width;
    double y;
    double box_height;
    double distance;
    double* velocity;
    double* acceleration;
};

class _Ball
{
public:
    static void BallHeuristic();

    class ObjectDetection
    {
    public:
        static vector<vector<string>> ObjectDetectionBall(TF_Status* status, TF_Graph* graph, TF_SessionOptions* options, TF_Buffer* run_opts, const char* tags, TF_Session* session, Mat frame);
        static void DrawBoundingBoxes(cv::Mat& image, const std::vector<cv::Rect>& boxes, const std::vector<int>& classIds, std::vector<float>& scores, std::string* classLabels);
    };

    class Math
    {
    public:
        static double getBallDistance(Object Car);
        static double getClosingDistance(double& vehicle_distance, double& vehicle_speed, double& myCar_speed, double& myCar_acceleration);
        static double convertMmToPixels(double measurementMm, double sensorWidthMm, int imageWidthPixels);
        static double CalculateIoU(Object current_object, Object prev_object);
        static double* CalculateObjectVelocity(Object current_object, Object prev_object, double timestamp);
        static double* CalculateAcceleration(Object current_object, Object prev_object, double timestamp);
        static double* CalculateDecelleration(Object current_object, Object prev_object, double timestamp);
    };

    class Utilities
    {
    public:
        static Mat PreprocessImage(const std::string& imagePath, int targetWidth, int targetHeight);
        static TF_Tensor* MatToTensor(const cv::Mat& image);
        static std::vector<cv::Rect> ExtractBoxes(TF_Tensor* boxesTensor, const cv::Size& imageSize);
        static std::vector<float> ExtractScores(TF_Tensor* scoresTensor);
        static std::vector<int> ExtractClassIds(TF_Tensor* classesTensor);
        static std::string* LoadLabels(const std::string& labelFilePath);
    };
};
