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
#include "Driving.hpp"
#include "Vision.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Reference.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Variables.hpp"
#include "Settings.hpp"
#include "Utilities.hpp"

using namespace std;

// This function will be a simple driving heuristic for well driving a car
//  Invokation: Entering the driver side door of a car
//  1. Load vision_path images into working memory
//  2. Have you been drinking, doing drugs, or are extremely tired or a combination?
//  3. Create datatypes for vehicles and obstructions
//      a. Normal driving eyes position
//          i. Eye should be straight and level, observing the road and vehicles in front of you
//          ii. Use OpenCV neural network to detect eye position
//          iii. Take panoramic construction of drvier's field of view
//          iv. Get the coordinates within the image of normal driving position
//      b. Left mirror location relative to eye position
//          i. Thread with location of left mirror relative to eyes
//      c. Right mirror location relative to eye position
//          i. Thread with location of right mirror relative to eyes
//      d. Rear view mirror relative to eye position
//          i. Thread with location of rear mirror relative to eyes
//      e. Gagues relative to eye position
//          i. Thread watching and awareness of gague values
//      i. Object plane size
//          i. Use OpenCV cars model and save the size of the object plane
//      j. Distance
//          i. Get the distance to the object
//      k. Object speed
//          i. 
//      l. Object change in x, z
//      m. Distance to vehicle braking relative to position, speed, distance, acceleration of other objects
//      n. Object angle relative to normal eye position
//      o. Measurments of your car
//      p. Size of lanes
//  4. Repeat for all detected objects
//  5. Maintain awareness of all objects in 360 degrees and their properties
//      a. Check safe distances between 
//  6. In relation to objects, vehicle speed, distance between other objects, speed of objects, acceleration and deceleration of objects, use the steering wheel to move the tires
//      a. In the country you are in, load the street signs into memory and read what they say and abide by all official signs
//  7. In relation to the speed of other objects, descelerate ar accellerate
//
//  Threads required
//      1. Get eye position relative to normal driving position
//      2. Left mirror location relative to eyes
//      3. Right mirror location relative to eyes
//      4. Rear view mirror location relative to eyes
//      5. Gagues location relative to eys
//      6. Is the user looking at a mirror, window, behind, or through the windshield
//      7. Get user's vehicle relative to lanes
//      8. Neural network to detect cars, people, animals, objects (CUDA?)
//          a. Get the location relaive to obstructions
//          b. Get the size of the object in pixels
//          c. Calculate change in size of the object
//              i.  Calculate the distance of the object
//              ii. Calculate the speed of the object
//              iii Compare user's vehicle speed and closing distance to the object
void _Driving::DrivingHeuristicInit()
{
    //thread getMyCar(_Driving::init_getMyCar);
    //thread init_getOtherCars(_Driving::init_getOtherCars);
    //thread obstructions(_Driving::getObstructions);
    //thread myEyePosition(_Driving::getEyePosition);
    //thread myEyeRelativeMirrorRight(_Driving::getLeftMirrorLocation);
    //thread myEyeRelativeMirrorLeft(_Driving::getRightMirrorLocation);
    //thread myEyeRelativeRearView(_Driving::getRearViewMirror);
    //thread myEyeRelativeGagues(_Driving::getGagueLocation);
    //thread leftLaneLocation(_Driving::getLeftLaneLocation);
    //thread rightLaneLocation(_Driving::getRightLaneLocation);

    if (vision_object_detection)
    {
        TF_Status* status = TF_NewStatus();
        TF_Graph* graph = TF_NewGraph();
        TF_SessionOptions* options = TF_NewSessionOptions();
        TF_Buffer* run_opts = nullptr;
        const char* tags = "serve";
        TF_Session* session = TF_LoadSessionFromSavedModel(options, nullptr, tensorflow_model.c_str(), &tags, 1, graph, nullptr, status);

        for (;;)
        {
            cv::Mat frame;

            // Find the last image and use that image for object detection
            for (int x = 999; x >= 0; x--)
            {
                if (!stm_vision_path_camera1[x][0].empty())
                {
                    frame = cv::imread(stm_vision_path_camera1[x][0]);
                    // Check the hash of the image?

                    // Store the current image inside the driving memory array
                    for (int y = 0; y < 999; y++)
                    {
                        if (wm_driving_text[y][0].empty())
                        {
                            lock_guard<mutex> lock(mtx_stm_vision_path_camera1[x][0]);
                            lock_guard<mutex> lock1(mtx_stm_vision_path_camera1[x][1]);
                            wm_driving_text[y][0] = stm_vision_path_camera1[x][0];
                            wm_driving_text[y][1] = stm_vision_path_camera1[x][1];
                        }
                    }
                    break;
                }
            }

            vector<vector<string>> coco_driving = _Driving::ObjectDetection::ObjectDetectionDriving(status, graph, options, run_opts, tags, session, frame);

            // Read the values from the coco_driving array and store them into memory
            for (int x = 0; x <= coco_driving.size(); x++)
            {
                Object current_object;
                Object prev_object;

                current_object.unique_id = "vehicle " + to_string(x);
                current_object.class_name = coco_driving[x][1];
                current_object.x = stoi(coco_driving[x][2]);
                current_object.box_width = stoi(coco_driving[x][3]);
                current_object.y = stoi(coco_driving[x][4]);
                current_object.box_height = stoi(coco_driving[x][5]);
                current_object.distance = _Driving::Math::getVehicleDistance(current_object);

                // Save the coordinates to the current array
                // How to save individual vehicles into memory and access that memory
                // Find the first empty position in the array
                for (int a = 0; a < 1000; a++)
                {
                    if (current_object.class_name == "car" || current_object.class_name == "person" || current_object.class_name == "bicycle" || current_object.class_name == "aeroplane" || current_object.class_name == "motorbike" || current_object.class_name == "bus" || current_object.class_name == "truck" || current_object.class_name == "boat" || current_object.class_name == "bird" || current_object.class_name == "cat" || current_object.class_name == "dog" || current_object.class_name == "horse" || current_object.class_name == "sheep" || current_object.class_name == "cow" || current_object.class_name == "elephant" || current_object.class_name == "bear" || current_object.class_name == "sports ball")
                    {
                        if (wm_driving_cars_text[a][0].empty())
                        {
                            lock_guard<mutex> lock(mtx_wm_driving_cars_text[a][0]);
                            lock_guard<mutex> lock1(mtx_wm_driving_cars_text[a][1]);
                            lock_guard<mutex> lock2(mtx_wm_driving_cars_text[a][2]);
                            lock_guard<mutex> lock3(mtx_wm_driving_cars_text[a][3]);
                            lock_guard<mutex> lock4(mtx_wm_driving_cars_text[a][4]);
                            lock_guard<mutex> lock5(mtx_wm_driving_cars_text[a][5]);
                            lock_guard<mutex> lock6(mtx_wm_driving_cars_text[a][6]);
                            lock_guard<mutex> lock7(mtx_wm_driving_cars_text[a][7]);
                            lock_guard<mutex> lock8(mtx_wm_driving_cars_text[a][8]);
                            lock_guard<mutex> lock9(mtx_wm_driving_cars_text[a][9]);
                            lock_guard<mutex> lock10(mtx_wm_driving_cars_text[a][10]);
                            wm_driving_cars_text[a][0] = current_object.unique_id;
                            wm_driving_cars_text[a][1] = current_object.class_name;
                            wm_driving_cars_text[a][2] = to_string(current_object.x);
                            wm_driving_cars_text[a][3] = to_string(current_object.box_width);
                            wm_driving_cars_text[a][4] = to_string(current_object.y);
                            wm_driving_cars_text[a][5] = to_string(current_object.box_height);
                            wm_driving_cars_text[a][6] = to_string(current_object.distance);
                            wm_driving_cars_text[a][7] = to_string(current_object.velocity[0]);
                            wm_driving_cars_text[a][8] = to_string(current_object.velocity[1]);
                            wm_driving_cars_text[a][9] = to_string(current_object.acceleration[0]);
                            wm_driving_cars_text[a][10] = to_string(current_object.acceleration[1]);

                            // Check if the previous 'a' is occupied?
                            if (!wm_driving_cars_text[a - 1][0].empty())
                            {
                                // Get the previous object's data
                                prev_object.unique_id = wm_driving_cars_text[a - 1][0];
                                prev_object.class_name = wm_driving_cars_text[a - 1][1];
                                prev_object.x = stod(wm_driving_cars_text[a - 1][2]);
                                prev_object.box_width = stod(wm_driving_cars_text[a - 1][3]);
                                prev_object.y = stod(wm_driving_cars_text[a - 1][4]);
                                prev_object.box_height = stod(wm_driving_cars_text[a - 1][5]);
                                prev_object.distance = stod(wm_driving_cars_text[a - 1][6]);
                                prev_object.velocity[0] = stod(wm_driving_cars_text[a - 1][7]);
                                prev_object.velocity[1] = stod(wm_driving_cars_text[a - 1][8]);
                                prev_object.acceleration[0] = stod(wm_driving_cars_text[a - 1][9]);
                                prev_object.acceleration[1] = stod(wm_driving_cars_text[a - 1][10]);
                            }
                            break;
                        }
                        if (!wm_driving_cars_text[a][0].empty() && a == 999)
                        {
                            for (int y = 0; y < 999; y++)
                            {
                                lock_guard<mutex> lock(mtx_wm_driving_cars_text[y][0]);
                                lock_guard<mutex> lock1(mtx_wm_driving_cars_text[y][1]);
                                lock_guard<mutex> lock2(mtx_wm_driving_cars_text[y][2]);
                                lock_guard<mutex> lock3(mtx_wm_driving_cars_text[y][3]);
                                lock_guard<mutex> lock4(mtx_wm_driving_cars_text[y][4]);
                                lock_guard<mutex> lock5(mtx_wm_driving_cars_text[y][5]);
                                lock_guard<mutex> lock6(mtx_wm_driving_cars_text[y][6]);
                                lock_guard<mutex> lock7(mtx_wm_driving_cars_text[y][7]);
                                lock_guard<mutex> lock8(mtx_wm_driving_cars_text[y][8]);
                                lock_guard<mutex> lock9(mtx_wm_driving_cars_text[y][9]);
                                lock_guard<mutex> lock10(mtx_wm_driving_cars_text[y][10]);
                                lock_guard<mutex> lock11(mtx_wm_driving_cars_text[y + 1][0]);
                                lock_guard<mutex> lock12(mtx_wm_driving_cars_text[y + 1][1]);
                                lock_guard<mutex> lock13(mtx_wm_driving_cars_text[y + 1][2]);
                                lock_guard<mutex> lock14(mtx_wm_driving_cars_text[y + 1][3]);
                                lock_guard<mutex> lock15(mtx_wm_driving_cars_text[y + 1][4]);
                                lock_guard<mutex> lock16(mtx_wm_driving_cars_text[y + 1][5]);
                                lock_guard<mutex> lock17(mtx_wm_driving_cars_text[y + 1][6]);
                                lock_guard<mutex> lock18(mtx_wm_driving_cars_text[y + 1][7]);
                                lock_guard<mutex> lock19(mtx_wm_driving_cars_text[y + 1][8]);
                                lock_guard<mutex> lock20(mtx_wm_driving_cars_text[y + 1][9]);
                                lock_guard<mutex> lock21(mtx_wm_driving_cars_text[y + 1][10]);
                                wm_driving_cars_text[y][0] = wm_driving_cars_text[y + 1][0];
                                wm_driving_cars_text[y][1] = wm_driving_cars_text[y + 1][1];
                                wm_driving_cars_text[y][2] = wm_driving_cars_text[y + 1][2];
                                wm_driving_cars_text[y][3] = wm_driving_cars_text[y + 1][3];
                                wm_driving_cars_text[y][4] = wm_driving_cars_text[y + 1][4];
                                wm_driving_cars_text[y][5] = wm_driving_cars_text[y + 1][5];
                                wm_driving_cars_text[y][6] = wm_driving_cars_text[y + 1][6];
                                wm_driving_cars_text[y][7] = wm_driving_cars_text[y + 1][7];
                                wm_driving_cars_text[y][8] = wm_driving_cars_text[y + 1][8];
                                wm_driving_cars_text[y][9] = wm_driving_cars_text[y + 1][9];
                                wm_driving_cars_text[y][10] = wm_driving_cars_text[y + 1][10];
                            }
                            lock_guard<mutex> lock(mtx_wm_driving_cars_text[999][0]);
                            lock_guard<mutex> lock1(mtx_wm_driving_cars_text[999][1]);
                            lock_guard<mutex> lock2(mtx_wm_driving_cars_text[999][2]);
                            lock_guard<mutex> lock3(mtx_wm_driving_cars_text[999][3]);
                            lock_guard<mutex> lock4(mtx_wm_driving_cars_text[999][4]);
                            lock_guard<mutex> lock5(mtx_wm_driving_cars_text[999][5]);
                            lock_guard<mutex> lock6(mtx_wm_driving_cars_text[999][6]);
                            lock_guard<mutex> lock7(mtx_wm_driving_cars_text[999][7]);
                            lock_guard<mutex> lock8(mtx_wm_driving_cars_text[999][8]);
                            lock_guard<mutex> lock9(mtx_wm_driving_cars_text[999][9]);
                            lock_guard<mutex> lock10(mtx_wm_driving_cars_text[999][10]);
                            wm_driving_cars_text[999][0] = current_object.unique_id;
                            wm_driving_cars_text[999][1] = current_object.class_name;
                            wm_driving_cars_text[999][2] = to_string(current_object.x);
                            wm_driving_cars_text[999][3] = to_string(current_object.box_width);
                            wm_driving_cars_text[999][4] = to_string(current_object.y);
                            wm_driving_cars_text[999][5] = to_string(current_object.box_height);
                            wm_driving_cars_text[999][6] = to_string(current_object.distance);
                            wm_driving_cars_text[999][7] = to_string(current_object.velocity[0]);
                            wm_driving_cars_text[999][8] = to_string(current_object.velocity[1]);
                            wm_driving_cars_text[999][9] = to_string(current_object.acceleration[0]);
                            wm_driving_cars_text[999][10] = to_string(current_object.acceleration[1]);

                            // Check if the previous 'a' is occupied?
                            if (!wm_driving_cars_text[a - 1][0].empty())
                            {
                                // Get the previous object's data
                                prev_object.unique_id = wm_driving_cars_text[a - 1][0];
                                prev_object.class_name = wm_driving_cars_text[a - 1][1];
                                prev_object.x = stod(wm_driving_cars_text[a - 1][2]);
                                prev_object.box_width = stod(wm_driving_cars_text[a - 1][3]);
                                prev_object.y = stod(wm_driving_cars_text[a - 1][4]);
                                prev_object.box_height = stod(wm_driving_cars_text[a - 1][5]);
                                prev_object.distance = stod(wm_driving_cars_text[a - 1][6]);
                                prev_object.velocity[0] = stod(wm_driving_cars_text[a - 1][7]);
                                prev_object.velocity[1] = stod(wm_driving_cars_text[a - 1][8]);
                                prev_object.acceleration[0] = stod(wm_driving_cars_text[a - 1][9]);
                                prev_object.acceleration[1] = stod(wm_driving_cars_text[a - 1][10]);
                            }
                            break;
                        }

                        // Check if the current and the previous objects have the same class_name
                        if (current_object.class_name == prev_object.class_name)
                        {
                            // Everything is organized into 'Objects', get the IoU of the frames
                            double IoU = _Driving::Math::CalculateIoU(current_object, prev_object);

                            if (IoU >= 0.3 && IoU <= 0.5)
                            {
                                current_object.velocity = _Driving::Math::CalculateObjectVelocity(current_object, prev_object, 1 / camera1_fps);
                                current_object.acceleration = _Driving::Math::CalculateObjectVelocity(current_object, prev_object, 1 / camera1_fps);

                                wm_driving_cars_text[a][7] = to_string(current_object.velocity[0]);
                                wm_driving_cars_text[a][8] = to_string(current_object.velocity[1]);
                                wm_driving_cars_text[a][9] = to_string(current_object.acceleration[0]);
                                wm_driving_cars_text[a][10] = to_string(current_object.acceleration[1]);
                            }

                            // Get the estimated amount of time until collision
                            

                            // Get the probability of collision
                        }
                    }

                    // Get logic and opperations for other labels
                }
            }
        }
    }
    else
    {

    }
}

void _Driving::init_getMyCar()
{
    //thread myVehicleSpeed(_Driving::getVehicleVelocity);
    //thread myVehicleacceleration(_Driving::getVehicleacceleration);
    //thread myVehicleFeatures(_Driving::getVehicleFeatures);
}

void _Driving::init_getOtherCars()
{
    //thread NNtrackVehicles(_Driving::trackVehicles);
}

double _Driving::Math::getVehicleDistance(Object object)
{
    // Get the distance to the vehicle with 22 mm eyes focal length
    double focal_length_eyes_mm = 22;
    double real_object_height = 1800;
    double image_width = 640;
    double image_height = 480;
    double focal_length_eyes_pixels = _Driving::Math::convertMmToPixels(real_object_height, focal_length_eyes_mm, image_width);
    double object_height_pixels = image_width - object.box_height;
    double object_distance_meters = ((focal_length_eyes_pixels * real_object_height) / object_height_pixels) / 1000;
    double object_distance_feet = object_distance_meters * 3.28084;
    return object_distance_feet;
}

// Object = current object
// Object2 = previous object
double _Driving::Math::CalculateIoU(Object current_object, Object prev_object)
{
    double xA = std::max(current_object.x, prev_object.x);
    double yA = std::max(current_object.y, prev_object.y);
    double xB = std::min(current_object.x + current_object.box_width, prev_object.x + prev_object.box_width);
    double yB = std::min(current_object.y + current_object.box_height, prev_object.y + prev_object.box_height);

    // calculate the area of intersection rectangle
    double interArea = std::abs(std::max(0.0, xB - xA)) * std::abs(std::max(0.0, yB - yA));

    // calculate the area of both boxes
    double boxAArea = (current_object.box_width) * (current_object.box_height);
    double boxBArea = (prev_object.box_width) * (prev_object.box_height);

    // intersection over union
    return interArea / std::max(boxAArea + boxBArea - interArea, 1.0e-6);
}

double* _Driving::Math::CalculateObjectVelocity(Object current_object, Object prev_object, double timestamp)
{
    double dx = current_object.x - prev_object.x;
    double dy = current_object.y - prev_object.y;

    // velocity calculation in x and y direction
    double vx = dx / timestamp;
    double vy = dy / timestamp;

    double* solution = new double[2];
    solution[0] = vx;
    solution[1] = vy;

    return solution;
}

double* _Driving::Math::CalculateAcceleration(Object current_object, Object prev_object, double timestamp)
{
    double dx = current_object.x - prev_object.x;
    double dy = current_object.y - prev_object.y;

    // velocity calculation in x and y direction
    double vx = dx / timestamp;
    double vy = dy / timestamp;

    // acceleration calculation (assuming constant frame rate)
    double ax = 0.0; // first derivative of position with respect to time, i.e., change in velocity over time.
    double ay = 0.0;

    if (timestamp > 1)
    {
        ax = vx - current_object.x / (timestamp - 1);
        ay = vy - prev_object.y / (timestamp - 1);
    }

    double* solution = new double[2];
    solution[0] = ax;
    solution[1] = ay;

    return solution;
}

double* _Driving::Math::CalculateDecelleration(Object current_object, Object prev_object, double timestamp)
{
    double dx = current_object.x - prev_object.x;
    double dy = current_object.y - prev_object.y;

    // velocity calculation in x and y direction
    double vx = dx / timestamp;
    double vy = dy / timestamp;

    // acceleration calculation (assuming constant frame rate)
    double ax = 0.0; // first derivative of position with respect to time, i.e., change in velocity over time.
    double ay = 0.0;

    if (timestamp > 1)
    {
        ax = vx - current_object.x / (timestamp - 1);
        ay = vy - prev_object.y / (timestamp - 1);
    }

    double* solution = new double[2];
    solution[0] = -ax;
    solution[1] = -ay;

    return solution;
}

double _Driving::Math::convertMmToPixels(double measurementMm, double sensorWidthMm, int imageWidthPixels)
{
    // Calculate pixel density (pixels per mm)
    double pixelDensity = imageWidthPixels / sensorWidthMm;

    // Convert the measurement from mm to pixels
    double measurementPixels = measurementMm * pixelDensity;

    return measurementPixels;
}

void _Driving::getVehicleVelocity(double& velocity)
{
    //thread getGagueSpeed(_Driving::getGaguesSpeed);
    //thread getotherSpeed(_Driving::getOtherSpeed);
}

void _Driving::getVehicleacceleration(double& acceleration)
{
    //thread getGagueacceleration(_Driving::getGaguesacceleration);
    //thread getOtheracceleration(_Driving::getOtheracceleration);
}

double _Driving::Math::getVehicleDecelleration(double& decelleration)
{
    double temp;
    return temp;
}

void _Driving::trackVehicles()
{
    // One large neural network to track all the cars in the field of view
    // Then open a thread for each individual vehicle and the get their position and acceleration with respect to our car
    // Get the closing distance and breaking probability
    // Mirror
}

void _Driving::getOtherVehicleVelocity(double& velocity)
{
    // thread getGagueSpeed(_Driving::getGaguesSpeed);
    //thread getotherSpeed(_Driving::getOtherSpeed);
}

void _Driving::getOtherVehicleacceleration(double& acceleration)
{
    //thread getGagueacceleration(_Driving::getGaguesacceleration);
    //thread getOtheracceleration(_Driving::getOtheracceleration);
}

void _Driving::DrivingObjectDetection()
{

}

void _Driving::getEyePosition()
{
    // Use the features of our car and other land marks to get the eyeposition in three dimensions

    while (true)
    {

    }
}

void _Driving::getLeftMirrorLocation()
{
    // Thread to coninuously calculate the location of hte mirror with respect to other features and the eyes

    while (true)
    {

    }
}

void _Driving::getRightMirrorLocation()
{

    while (true)
    {

    }
}

void _Driving::getRearViewMirror()
{
    while (true)
    {

    }
}

void _Driving::getGagueLocation()
{
    while (true)
    {

    }
}

void _Driving::getRightLaneLocation()
{
    while (true)
    {

    }
}

void _Driving::getLeftLaneLocation()
{
    while (true)
    {

    }
}

void _Driving::getObstructions()
{
    while (true)
    {

    }
}

void _Driving::getGaguesSpeed()
{
    while (true)
    {

    }
}

void _Driving::getOtherSpeed()
{
    while (true)
    {

    }
}

void _Driving::getGaguesacceleration(double& acceleration)
{
    while (true)
    {

    }
}

void _Driving::getOtheracceleration(double& acceleration)
{
    while (true)
    {

    }
}

void _Driving::getVehicleFeatures()
{

}

// Get the distance in seconds to the vehicle in front and base predictions based on this number
double _Driving::Math::getClosingDistance(double& vehicle_distance, double& vehicle_speed, double& myCar_speed, double& myCar_acceleration)
{
    float temp;
    return temp;
}

double _Driving::Math::getacceleration(double& f, double& x, double& h)
{
    return (f * (x - h) - 2 * f * (x) + f * (x + h)) / (h * h);
}

vector<vector<string>> _Driving::ObjectDetection::ObjectDetectionDriving(TF_Status* status, TF_Graph* graph, TF_SessionOptions* options, TF_Buffer* run_opts, const char* tags, TF_Session* session, Mat frame)
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
    std::vector<TF_Output> output_ops {
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
    cout << "output_tensors[0]: " << output_tensors[0] << endl;
    cout << "output_tensors[1]: " << output_tensors[1] << endl;
    cout << "output_tensors[2]: " << output_tensors[2] << endl;
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
    temp += "/camera1/driving/object_detection/";
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
    //TF_DeleteTensor(inputTensor);
    //TF_DeleteTensor(output_tensors[0]);
    //TF_DeleteTensor(output_tensors[1]);
    //TF_DeleteTensor(output_tensors[2]);
    //TF_DeleteSession(session, status);
    //TF_DeleteSessionOptions(options);
    //TF_DeleteStatus(status);

    return return_array;
}

cv::Mat _Driving::Utilities::PreprocessImage(const std::string& imagePath, int targetWidth, int targetHeight)
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

TF_Tensor* _Driving::Utilities::MatToTensor(const cv::Mat& image)
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

void _Driving::ObjectDetection::DrawBoundingBoxes(cv::Mat& image, const std::vector<cv::Rect>& boxes, const std::vector<int>& classIds, std::vector<float>& scores, std::string* classLabels)
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

std::vector<cv::Rect> _Driving::Utilities::ExtractBoxes(TF_Tensor* boxesTensor, const cv::Size& imageSize)
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

std::vector<float> _Driving::Utilities::ExtractScores(TF_Tensor* scoresTensor)
{
    auto numDetections = TF_Dim(scoresTensor, 1);
    auto* scoresData = static_cast<float*>(TF_TensorData(scoresTensor));

    std::vector<float> scores(scoresData, scoresData + numDetections);
    return scores;
}

std::vector<int> _Driving::Utilities::ExtractClassIds(TF_Tensor* classesTensor)
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

std::string* _Driving::Utilities::LoadLabels(const std::string& labelFilePath)
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