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
#include "Baseball.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Settings.hpp"
#include "Thought.hpp"
#include "Utilities.hpp"
#include "Working-Memory.hpp"
#include "Vision.hpp"

using namespace std;

// Define constants for arm movement
const double ARM_LENGTH = 0.7; // meters
const double ELBOW_BEND_ANGLE = M_PI / 2; // radians (90 degrees)
const double SHOULDER_ROTATION_ANGLE = M_PI / 4; // radians (45 degrees)

// Structure to represent hand and arm movements
struct HandMovement
{
    double x, y, z;
};

void _Baseball::Baseball()
{
    TF_Status* status = TF_NewStatus();
    TF_Graph* graph = TF_NewGraph();
    TF_SessionOptions* options = TF_NewSessionOptions();
    TF_Buffer* run_opts = nullptr;
    const char* tags = "serve";
    TF_Session* session = TF_LoadSessionFromSavedModel(options, nullptr, tensorflow_model.c_str(), &tags, 1, graph, nullptr, status);
    bool AtBat = true;
    string mode = "baseball";
    string image_location;
    string image_date;

    while (AtBat)
    {
        // Find the most recent frame in working memory
        for (int x = 999; x >= 0; x--)
        {
            if (wm_vision_path_camera1[x][0] != "")
            {
                image_location = wm_vision_path_camera1[x][0];
                image_date = wm_vision_path_camera1[x][1];
                break;
            }
        }

        cv::Mat frame = cv::imread(image_location, cv::IMREAD_COLOR);
        vector<vector<string>> object_detection = _Vision::ObjectDetectionSequence(status, graph, options, run_opts, tags, session, frame);

        for (int x = 0; x <= object_detection.size(); x++)
        {

        }

        // Wait for the ball and take a swing
    }
}

void _Baseball::Softball()
{
    TF_Status* status;
    TF_Graph* graph;
    TF_SessionOptions* options;
    TF_Buffer* run_opts;
    const char* tags;
    TF_Session* session;
    bool AtBat = true;
    string mode = "baseball";
    string image_location;
    string image_date;

    while (AtBat)
    {
        // Find the most recent frame in working memory
        for (int x = 999; x >= 0; x--)
        {
            if (wm_vision_path_camera1[x][0] != "")
            {
                image_location = wm_vision_path_camera1[x][0];
                image_date = wm_vision_path_camera1[x][1];
                break;
            }
        }

        cv::Mat frame = cv::imread(image_location, cv::IMREAD_COLOR);
        vector<vector<string>> object_detection = _Vision::ObjectDetectionSequence(status, graph, options, run_opts, tags, session, frame);

        // Wait for the ball and take a swing
    }
}

void _Baseball::SlowPitchSoftball()
{
    TF_Status* status;
    TF_Graph* graph;
    TF_SessionOptions* options;
    TF_Buffer* run_opts;
    const char* tags;
    TF_Session* session;
    bool AtBat = true;
    string mode = "baseball";
    string image_location;
    string image_date;

    while (AtBat)
    {
        // Find the most recent frame in working memory
        for (int x = 999; x >= 0; x--)
        {
            if (wm_vision_path_camera1[x][0] != "")
            {
                image_location = wm_vision_path_camera1[x][0];
                image_date = wm_vision_path_camera1[x][1];
                break;
            }
        }

        cv::Mat frame = cv::imread(image_location, cv::IMREAD_COLOR);
        vector<vector<string>> object_detection = _Vision::ObjectDetectionSequence(status, graph, options, run_opts, tags, session, frame);

        // Wait for the ball and take a swing
    }
}



// Function to simulate throwing motion with left or right hand
//void _Baseball::throwBall(int hand, HandMovement& handPosition)
//{
//    if (hand == 1)
//    { // Left hand
//        std::cout << "Throwing ball with left hand." << std::endl;
//
//        // Simulate arm movement for throwing
//        double elbowAngle = ELBOW_BEND_ANGLE;
//        double shoulderRotation = SHOULDER_ROTATION_ANGLE;
//        handPosition.x = ARM_LENGTH * sin(shoulderRotation) * cos(elbowAngle);
//        handPosition.y = ARM_LENGTH * sin(elbowAngle);
//        handPosition.z = ARM_LENGTH * cos(shoulderRotation) * cos(elbowAngle);
//
//        // Update arm movement for throwing
//        for (int i = 0; i < 10; ++i)
//        {
//            elbowAngle += M_PI / 180;
//            shoulderRotation -= M_PI / 180;
//            handPosition.x = ARM_LENGTH * sin(shoulderRotation) * cos(elbowAngle);
//            handPosition.y = ARM_LENGTH * sin(elbowAngle);
//            handPosition.z = ARM_LENGTH * cos(shoulderRotation) * cos(elbowAngle);
//
//            std::cout << "Left arm position: (" << handPosition.x << ", " << handPosition.y << ", " << handPosition.z << ")" << std::endl;
//        }
//    }
//    else if (hand == 2)
//    { // Right hand
//        std::cout << "Throwing ball with right hand." << std::endl;
//
//        // Simulate arm movement for throwing
//        double elbowAngle = ELBOW_BEND_ANGLE;
//        double shoulderRotation = -SHOULDER_ROTATION_ANGLE; // Invert rotation angle for right hand
//        handPosition.x = ARM_LENGTH * sin(shoulderRotation) * cos(elbowAngle);
//        handPosition.y = ARM_LENGTH * sin(elbowAngle);
//        handPosition.z = ARM_LENGTH * cos(shoulderRotation) * cos(elbowAngle);
//
//        // Update arm movement for throwing
//        for (int i = 0; i < 10; ++i)
//        {
//            elbowAngle += M_PI / 180;
//            shoulderRotation -= M_PI / 180;
//            handPosition.x = ARM_LENGTH * sin(shoulderRotation) * cos(elbowAngle);
//            handPosition.y = ARM_LENGTH * sin(elbowAngle);
//            handPosition.z = ARM_LENGTH * cos(shoulderRotation) * cos(elbowAngle);
//
//            std::cout << "Right arm position: (" << handPosition.x << ", " << handPosition.y << ", " << handPosition.z << ")" << std::endl;
//        }
//    }
//    else
//    {
//        std::cerr << "Invalid hand choice. Please choose 1 for left hand or 2 for right hand." << std::endl;
//    }
//}