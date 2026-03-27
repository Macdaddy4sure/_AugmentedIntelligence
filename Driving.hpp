#pragma once

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

using namespace std;
using namespace cv;

class _Driving
{
public:
    static void DrivingHeuristicInit();
    static void DrivingObjectDetection();
    static void init_VisualSemantics();
    static void init_getMyCar();
    static void init_getOtherCars();
    static void getVehicleFeatures();
    static void getEyePosition(double& x, double& y, double& z);
    static void getVehicleVelocity(double& velocity);
    static void getVehicleacceleration(double& acceleration);
    static void trackVehicles();
    static void getOtherVehicleVelocity(double& velocity);
    static void getOtherVehicleacceleration(double& acceleration);
    static void displayObjectVelocities(std::map<int, double> objectVelocities);
    static void getLeftMirrorLocation(double& x, double& y, double& z, Mat frame);
    static void getRightMirrorLocation(double& x, double& y, double& z, Mat frame);
    static void getRearViewMirror(double& x, double& y, double& z, Mat frame);
    static void getGagueLocation();
    static int map_needle_position_to_speed(double needle_y, double gauge_height);
    static Mat captureFrameFromCamera();
    //static void updateTrackingData(std::vector<Object> objects);
    static void getRightLaneLocation(double& x, double& y, double& z, Mat frame);
    static void getLeftLaneLocation(double& x, double& y, double& z, Mat frame);
    static void getObstructions();
    static void getGagueVelocity(double& velocity, Mat frame);
    static void getOthersVelocity(double& velocity);
    static void getGaguesAcceleration(double& acceleration);
    static void getOtherAcceleration(double& acceleration);

    class ObjectDetection
    {
    public:
        static vector<vector<string>> ObjectDetectionDriving(TF_Status* status, TF_Graph* graph, TF_SessionOptions* options, TF_Buffer* run_opts, const char* tags, TF_Session* session, Mat frame);
        //static void RunSession(TF_Session* session, TF_Graph* graph, TF_Status* status, TF_SessionOptions* options, TF_Tensor* inputTensor, cv::Mat image, int image_number);
        static void DrawBoundingBoxes(cv::Mat& image, const std::vector<cv::Rect>& boxes, const std::vector<int>& classIds, std::vector<float>& scores, std::vector<string> classLabels);
    };

    class Math
    {
    public:
        static double getVehicleDistance(Object my_car, Object other_car);
        static double getacceleration(double& f, double& x, double& h);
        static void getStreeringWheelPosition(double& x, double& y, double& z, double& angle, Mat frame);
        static double getVehicleDistanceFocalLength(Object other_car);
        //static double getVehicleDecelleration(double& decelleration);
        static double getClosingDistance(double& vehicle_distance, double& vehicle_velocity, double& myCar_velocity, double& myCar_acceleration);
        static double convertMmToPixels(double measurementMm, double sensorWidthMm, int imageWidthPixels);
        static double CalculateIoU(Object current_object, Object prev_object);
        static double* CalculateObjectVelocity(Object current_object, Object prev_object, double timestamp);
        static double* CalculateAcceleration(Object current_object, Object prev_object, double timestamp);
        static double* CalculateDeceleration(Object current_object, Object prev_object, double timestamp);
        static double calculateDistance(Object obj1, Object obj2);
        static double calculateRelativeVelocity(Object obj1, Object obj2);
        static double calculateTTC(double distance, double relativeVelocity);
        static double calculateCollisionProbability(double ttc, double threshold);
        static double calculateCollisionProbability(Object currentObject, Object otherObject);

        class CUDA
        {
        public:
			static void CalculateObjectVelocity(Object current_object, Object prev_object, double timestamp);
            static void CalculateAcceleration(Object current_object, Object prev_object, double timestamp);
            static void CalculateDeceleration(Object current_object, Object prev_object, double timestamp);
            static void CalculateIoU(Object current_object, Object prev_object);
        };
    };

    class Utilities
    {
    public:
        static Mat PreprocessImage(const std::string& imagePath, int targetWidth, int targetHeight);
        static TF_Tensor* MatToTensor(const cv::Mat& image);
        static std::vector<cv::Rect> ExtractBoxes(TF_Tensor* boxesTensor, const cv::Size& imageSize);
        static std::vector<float> ExtractScores(TF_Tensor* scoresTensor);
        static std::vector<int> ExtractClassIds(TF_Tensor* classesTensor);
        static std::vector<string> LoadLabels(const std::string& labelFilePath);
    };
};

// Define collision probability thresholds
extern const double LOW_RISK_THRESHOLD;
extern const double MODERATE_RISK_THRESHOLD;
extern const double HIGH_RISK_THRESHOLD;
extern const double CRITICAL_RISK_THRESHOLD;