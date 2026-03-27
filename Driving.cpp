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
#include "Thought.hpp"
#include "Utilities.hpp"

using namespace std;

// Define collision probability thresholds
const double LOW_RISK_THRESHOLD = 0.20;
const double MODERATE_RISK_THRESHOLD = 0.40;
const double HIGH_RISK_THRESHOLD = 0.60;
const double CRITICAL_RISK_THRESHOLD = 0.80;

// This function will be a simple driving heuristic for well driving a car
//  Invokation: Speech command of "driving mode"
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
//      k. Object velocity
//          i. 
//      l. Object change in x, z
//      m. Distance to vehicle braking relative to position, velocity, distance, acceleration of other objects
//      n. Object angle relative to normal eye position
//      o. Measurments of your car
//      p. Size of lanes
//  4. Repeat for all detected objects
//  5. Maintain awareness of all objects in 360 degrees and their properties
//      a. Check safe distances between 
//  6. In relation to objects, vehicle velocity, distance between other objects, velocity of objects, acceleration and deceleration of objects, use the steering wheel to move the tires
//      a. In the country you are in, load the street signs into memory and read what they say and abide by all official signs
//  7. In relation to the data of other objects, descelerate ar accellerate
//  8. Check manually if there is a car or object where you are looking...
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
//              ii. Calculate the velocity of the object
//              iii Compare user's vehicle velocity and closing distance to the object
void _Driving::DrivingHeuristicInit()
{
    //thread myEyePosition(_Driving::getEyePosition, eye_pos_x, eye_pos_y, eye_pos_z);
    //thread myEyeRelativeMirrorRight(_Driving::getLeftMirrorLocation, left_mirror_x, left_mirror_y, left_mirror_z);
    //thread myEyeRelativeMirrorLeft(_Driving::getRightMirrorLocation, right_mirror_x, right_mirror_y, right_mirror_z);
    //thread myEyeRelativeRearView(_Driving::getRearViewMirror, center_mirror_x, center_mirror_y, center_mirror_z);

    double left_mirror_x, left_mirror_y, left_mirror_z;
    double right_mirror_x, right_mirror_y, right_mirror_z;
    double center_mirror_x, center_mirror_y, center_mirror_z;
    double eye_pos_x, eye_pos_y, eye_pos_z;
    double left_lane_x, left_lane_y, left_lane_z;
    double right_lane_x, right_lane_y, right_lane_z;
    double steering_wheel_x, steering_wheel_y, steering_wheel_z, steering_wheel_angle;
    double velocity;

    std::mutex mtx_stm_vision_path_camera1;
    std::mutex mtx_wm_driving_text;

    Object my_car;
    Object current_object;
    Object prev_object;

    if (!vision_object_detection)
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
                std::lock_guard<std::mutex> lock(mtx_stm_vision_path_camera1);

                if (!stm_vision_path_camera1[x][0].empty())
                {
                    frame = cv::imread(stm_vision_path_camera1[x][0]);

                    // Store the current image inside the driving memory array
                    for (int y = 0; y < 999; y++)
                    {
                        std::lock_guard<std::mutex> lock_wm(mtx_wm_driving_text);

                        if (wm_driving_text[y][0].empty())
                        {
                            wm_driving_text[y][0] = stm_vision_path_camera1[x][0];
                            wm_driving_text[y][1] = stm_vision_path_camera1[x][1];
                        }
                    }
                    break;
                }
            }

            vector<vector<string>> coco_driving = _Driving::ObjectDetection::ObjectDetectionDriving(status, graph, options, run_opts, tags, session, frame);
			_Driving::Math::getStreeringWheelPosition(steering_wheel_x, steering_wheel_y, steering_wheel_z, steering_wheel_angle, frame);
            _Driving::getGagueVelocity(velocity, frame);
			_Driving::getLeftLaneLocation(left_lane_x, left_lane_y, left_lane_z, frame);
			_Driving::getRightLaneLocation(right_lane_x, right_lane_y, right_lane_z, frame);

            int my_car_index = -1;
            double max_area = 0.0;

            // Find the details of our car. Our car should be the largest box in the array
            for (int a = 0; a < coco_driving.size(); a++)
            {
                if (coco_driving[a][1] == "car")
                { // Only consider cars
                    double area = stod(coco_driving[a][3]) * stod(coco_driving[a][5]);

                    if (area > max_area)
                    {
                        my_car.unique_id = "object " + to_string(a);
                        my_car.class_name = coco_driving[a][1];
                        my_car.x = stoi(coco_driving[a][2]);
                        my_car.box_width = stoi(coco_driving[a][3]);
                        my_car.y = stoi(coco_driving[a][4]);
                        my_car.box_height = stoi(coco_driving[a][5]);
                        max_area = area;
                        my_car_index = a;
                    }
                }
            }

            // Read the values from the coco_driving array and store them into memory
            for (int x = 0; x <= coco_driving.size(); x++)
            {
                if (x != my_car_index && (coco_driving[x][1] == "car" || coco_driving[x][1] == "truck" || coco_driving[x][1] == "bicycle" || coco_driving[x][1] == "motorbike" && coco_driving[x][1] == "aeroplane" && coco_driving[x][1] == "bus" && coco_driving[x][1] == "train" && coco_driving[x][1] == "boat" && coco_driving[x][1] == "sports ball" && coco_driving[x][1] == "dog" && coco_driving[x][1] == "cat" && coco_driving[x][1] == "skateboard" && coco_driving[x][1] == "sheep" && coco_driving[x][1] == "bear" && coco_driving[x][1] == "horse" && coco_driving[x][1] == "cow" && coco_driving[x][1] == "fire hydrant" && coco_driving[x][1] == "bird"))
                {
                    current_object.unique_id = "object " + to_string(x);
                    current_object.class_name = coco_driving[x][1];
                    current_object.x = stoi(coco_driving[x][2]);
                    current_object.box_width = stoi(coco_driving[x][3]);
                    current_object.y = stoi(coco_driving[x][4]);
                    current_object.box_height = stoi(coco_driving[x][5]);
                    current_object.distance = _Driving::Math::getVehicleDistance(my_car, current_object);
                }
            }

            if (current_object.class_name == prev_object.class_name)
            {
                double IoU = _Driving::Math::CalculateIoU(current_object, prev_object);

                if (IoU >= iou_min && IoU <= iou_max)
                {
                    current_object.velocity = _Driving::Math::CalculateObjectVelocity(current_object, prev_object, 1 / camera1_fps);
                    current_object.acceleration = _Driving::Math::CalculateAcceleration(current_object, prev_object, 1 / camera1_fps);

                    // Get the probability of collision from this data
                    double relativeVelocity = _Driving::Math::calculateRelativeVelocity(my_car, current_object);
                    double ttc = _Driving::Math::calculateTTC(current_object.distance, relativeVelocity);

                    // Define a threshold for TTC (e.g., 2 seconds)
                    const double threshold = ttc_threshold;

                    double probability = _Driving::Math::calculateCollisionProbability(ttc, threshold);

                    // How does this translate between pressing on the gas and how much and pressing the brake?
                    // Determine driving action based on collision probability
                    if (probability <= LOW_RISK_THRESHOLD)
                    {
                        // Speed up to maintain a safe distance from the leading vehicle
                        //current_object.acceleration += 0.1; // Adjust acceleration to speed up
                        std::cout << probability << "% <= No Risk - Speed Up" << endl;
                    }
                    else if (probability > LOW_RISK_THRESHOLD && probability <= MODERATE_RISK_THRESHOLD)
                    {
                        // Cruise at a constant speed to avoid sudden acceleration or braking
                        //current_object.acceleration = 0.0; // Maintain constant velocity
                        std::cout << probability << "% <= Low Risk - Maintain current velocity" << endl;
                    }
                    else if (probability > MODERATE_RISK_THRESHOLD && probability <= HIGH_RISK_THRESHOLD)
                    {
                        // Slow down by reducing throttle input and preparing for potential braking
                        //current_object.acceleration -= 0.1; // Adjust acceleration to slow down
                        std::cout << probability << "% <= Moderate Risk - Slow Down a little" << endl;
                    }
                    else if (probability > HIGH_RISK_THRESHOLD && probability <= CRITICAL_RISK_THRESHOLD)
                    {
                        // Brake moderately to maintain a safe distance from the leading vehicle
                        //current_object.acceleration -= 0.2; // Adjust acceleration to brake moderately
                        std::cout << probability << "% <= HIGH RISK - Brake Moderately" << endl;
                    }
                    else
                    {
                        // Brake aggressively to avoid a potential collision
                        //current_object.acceleration -= 0.5; // Adjust acceleration to brake aggressively
                        std::cout << probability << "% <= CRITICAL RISK - Slow Down Heavily" << endl;
                    }
                }
            }

            // Save the coordinates to the current array
            // How to save individual vehicles into memory and access that memory
            // Find the first empty position in the array
            // Get the previous object's data
            prev_object.unique_id = current_object.unique_id;
            prev_object.class_name = current_object.class_name;
            prev_object.x = current_object.x;
            prev_object.box_width = current_object.box_width;
            prev_object.y = current_object.y;
            prev_object.box_height = current_object.box_height;
            prev_object.distance = current_object.distance;
            prev_object.velocity[0] = current_object.velocity[0];
            prev_object.velocity[1] = current_object.velocity[1];
            prev_object.acceleration[0] = current_object.acceleration[0];
            prev_object.acceleration[1] = current_object.acceleration[1];
        }
    }
    else
    {
        vision_object_detection = false;
    }
}

void _Driving::init_getMyCar()
{
    //thread myVehiclevelocity(_Driving::getVehicleVelocity);
    //thread myVehicleacceleration(_Driving::getVehicleacceleration);
    //thread myVehicleFeatures(_Driving::getVehicleFeatures);
}

void _Driving::init_getOtherCars()
{
    //thread NNtrackVehicles(_Driving::trackVehicles);
}

void _Driving::Math::getStreeringWheelPosition(double &x, double &y, double &z, double &angle, Mat frame)
{
    // Convert the frame to grayscale and apply thresholding for edge detection
    cv::Mat grayFrame, threshFrame;
    cv::cvtColor(frame, grayFrame, cv::COLOR_BGR2GRAY);
    cv::threshold(grayFrame, threshFrame, 0, 255, cv::THRESH_BINARY_INV + cv::THRESH_OTSU);

    // Apply Canny edge detection
    cv::Mat edges;
    cv::Canny(threshFrame, edges, 50, 150);

    // Detect circles (steering wheel) using Hough transform
    std::vector<cv::Vec3f> circles;
    cv::HoughCircles(edges, circles, cv::HOUGH_GRADIENT, 1, edges.rows / 8, 100, 30, 0, 0);

    if (!circles.empty())
    {
        // Calculate the center of the detected circle (steering wheel)
        double centerX = circles[0][0];
        double centerY = circles[0][1];

        // Update x and y variables
        x = centerX;
        y = centerY;

        // For simplicity, assume z is always 0 (no depth information available in this example)
        z = 0.0;

        // Calculate the angle of the steering wheel based on the circle's center position
        // This is a simplified assumption and may require more complex calculations depending on your specific use case
        double centerXNormalized = (centerX - frame.cols / 2) / (frame.cols / 2);
        angle = atan(centerXNormalized);

        // Optional: Draw the detected circle and its center on the original frame for visualization purposes
        //cv::circle(frame, cv::Point(centerX, centerY), circles[0][2], cv::Scalar(0, 255, 0), 2);
        //cv::circle(frame, cv::Point(centerX, centerY), 2, cv::Scalar(0, 0, 255), -1);

        // Optional: Display the frame with detected circle
        //cv::imshow("Steering Wheel Detection", frame);
    }

    //if (cv::waitKey(30) >= 0)
    //{
    //    break;
    //}
}

double _Driving::Math::getVehicleDistance(Object my_car, Object other_car)
{
    // Get the average height of the two objects in meters (assuming both are cars with similar heights)
    double real_object_height = 1800; // mm

    // Convert the real object height from millimeters to pixels
    //double focal_length_eyes_mm = 22;
    double image_width = (double)camera1_resolution_width;
    double image_height = (double)camera1_resolution_height;
    double camera1_focal_length_pixels = _Driving::Math::convertMmToPixels(real_object_height, camera1_focal_length, image_width);

    // Calculate the average height of the two objects in pixels
    double object1_height_pixels = my_car.box_height;
    double object2_height_pixels = other_car.box_height;
    double avg_object_height_pixels = (object1_height_pixels + object2_height_pixels) / 2.0;

    // Calculate the distance between the camera and the first object
    double object_distance_meters = ((camera1_focal_length_pixels * real_object_height) / avg_object_height_pixels) / 1000.0;

    // Calculate the distance between the two objects using their positions (x, y)
    double dx = abs(my_car.x - other_car.x);
    double dy = abs(my_car.y - other_car.y);
    double distance_between_objects_meters = sqrt(dx * dx + dy * dy);
    double distance_between_objects_feet = distance_between_objects_meters * 3.28084;

    return distance_between_objects_feet;
}

double _Driving::Math::getVehicleDistanceFocalLength(Object other_car)
{
    // Get the distance to the vehicle with 22 mm eyes focal length
    //double focal_length_eyes_mm = 22;
    double real_object_height = 1800;
    double image_width = (double)camera1_resolution_width;
    double image_height = (double)camera1_resolution_height;
    double camera1_focal_length_pixels = _Driving::Math::convertMmToPixels(real_object_height, camera1_focal_length, image_width);
    double object_height_pixels = image_width - other_car.box_height;
    double object_distance_meters = ((camera1_focal_length_pixels * real_object_height) / object_height_pixels) / 1000;
    double object_distance_feet = object_distance_meters * 3.28084;

    return object_distance_feet;
}

double _Driving::Math::calculateDistance(Object obj1, Object obj2)
{
    double dx = obj1.x - obj2.x;
    double dy = obj1.y - obj2.y;

    return sqrt(dx * dx + dy * dy);
}

double _Driving::Math::calculateRelativeVelocity(Object my_car, Object other_car)
{
    double vx = other_car.velocity[0] - my_car.velocity[0];
    double vy = other_car.velocity[1] - my_car.velocity[1];

    return sqrt(vx * vx + vy * vy);
}

double _Driving::Math::calculateTTC(double distance, double relativeVelocity)
{
    if (relativeVelocity == 0)
    {
        return INFINITY; // or a large value indicating no collision
    }

    return distance / relativeVelocity;
}

double _Driving::Math::calculateCollisionProbability(double ttc, double threshold)
{
    if (ttc <= threshold)
    {
        return 1.0; // high probability of collision
    }
    else
    {
        return 0.0; // low probability of collision
    }
}

double _Driving::Math::calculateCollisionProbability(Object currentObject, Object otherObject)
{
    double distance = _Driving::Math::calculateDistance(currentObject, otherObject);
    double relativeVelocity = _Driving::Math::calculateRelativeVelocity(currentObject, otherObject);
    double ttc = _Driving::Math::calculateTTC(distance, relativeVelocity);

    // Define a threshold for TTC (e.g., 2 seconds)
    const double threshold = 2.0;

    return _Driving::Math::calculateCollisionProbability(ttc, threshold);
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

// Calculate the IoU of two objects in CUDA
//void _Driving::Math::CUDA::CalculateIoU(Object current_object, Object prev_object, int numBoundingBoxes)
//{
//    //float* boundingBoxes;
//    //cudaMalloc((void**)&boundingBoxes, numBoundingBoxes * 4 * sizeof(float));
//
//    //// Launch kernel
//    //int blockSize = 1024;
//    //int numBlocks = (numBoundingBoxes + blockSize - 1) / blockSize;
//    //calculateIoU <<< numBlocks, blockSize >> > (boundingBoxes, numBoundingBoxes);
//
//    //cudaFree(boundingBoxes);
//}

//__global__ void calculateIoU(float* boundingBoxes, int numBoundingBoxes)
//{
    //// Calculate IoU for each pair of bounding boxes
    //int idx = blockIdx.x * blockDim.x + threadIdx.x;
    //if (idx >= numBoundingBoxes) return;

    //float box1_x = boundingBoxes[idx * 4];
    //float box1_y = boundingBoxes[idx * 4 + 1];
    //float box1_w = boundingBoxes[idx * 4 + 2];
    //float box1_h = boundingBoxes[idx * 4 + 3];

    //// Iterate over other bounding boxes
    //for (int i = idx + 1; i < numBoundingBoxes; i++) {
    //    float box2_x = boundingBoxes[i * 4];
    //    float box2_y = boundingBoxes[i * 4 + 1];
    //    float box2_w = boundingBoxes[i * 4 + 2];
    //    float box2_h = boundingBoxes[i * 4 + 3];

    //    // Calculate IoU
    //    float intersection_x = max(box1_x, box2_x);
    //    float intersection_y = max(box1_y, box2_y);
    //    float intersection_w = min(box1_x + box1_w, box2_x + box2_w) - intersection_x;
    //    float intersection_h = min(box1_y + box1_h, box2_y + box2_h) - intersection_y;

    //    if (intersection_w > 0 && intersection_h > 0) {
    //        // Calculate IoU
    //        float iou = (intersection_w * intersection_h) / (box1_w * box1_h + box2_w * box2_h - intersection_w * intersection_h);
    //        printf("IoU: %f\n", iou);
    //    }
    //}
//}

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
    // Static variables to store velocities from the previous frame
    static double prev_vx = 0.0;
    static double prev_vy = 0.0;

    if (timestamp <= 0)
    {
        std::cerr << "Error: Invalid timestamp value." << std::endl;
        return nullptr;  // Return a null pointer to indicate an error
    }

    // Calculate velocity in x and y directions for the current object
    double curr_vx = (current_object.x - prev_object.x) / timestamp;
    double curr_vy = (current_object.y - prev_object.y) / timestamp;

    // Calculate acceleration as the change in velocity over time
    double ax = (curr_vx - prev_vx) / timestamp;
    double ay = (curr_vy - prev_vy) / timestamp;

    // Update the previous velocities for the next frame
    prev_vx = curr_vx;
    prev_vy = curr_vy;

    double* solution = new double[2];
    solution[0] = ax;
    solution[1] = ay;

    return solution;
}

double* _Driving::Math::CalculateDeceleration(Object current_object, Object prev_object, double timestamp)
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
    //thread getGaguevelocity(_Driving::getGaguesvelocity);
    //thread getothervelocity(_Driving::getOthervelocity);
}

void _Driving::getVehicleacceleration(double& acceleration)
{
    //thread getGagueacceleration(_Driving::getGaguesacceleration);
    //thread getOtheracceleration(_Driving::getOtheracceleration);
}

//double _Driving::Math::getVehicleDeceleration(double& decelleration)
//{
//    double temp;
//    return temp;
//}

void _Driving::trackVehicles()
{
    // One large neural network to track all the cars in the field of view
    // Then open a thread for each individual vehicle and the get their position and acceleration with respect to our car
    // Get the closing distance and breaking probability
    // Mirror
}

void _Driving::getOtherVehicleVelocity(double& velocity)
{
    //// thread getGaguevelocity(_Driving::getGaguesvelocity);
    ////thread getothervelocity(_Driving::getOthervelocity);

    //// Initialize variables to store detected objects and their velocities
    //std::vector<Object> detectedObjects;
    //std::map<int, double> objectVelocities;

    //while (true)
    //{
    //    // Capture a frame from the camera
    //    cv::Mat frame = captureFrameFromCamera();

    //    // Iterate through detected objects and calculate their velocity
    //    for (const auto& obj : detectedObjects)
    //    {
    //        int objectId = obj.id;

    //        // Check if object is already being tracked
    //        if (objectVelocities.find(objectId) != objectVelocities.end())
    //        {
    //            // Calculate velocity using previous frame's data
    //            double* velocity = _Driving::Math::CalculateObjectVelocity(obj, detectedObjects[objectId], 1.0 / 30.0);
    //            objectVelocities[objectId] = *velocity;
    //        }
    //        else
    //        {
    //            // Initialize velocity for new objects
    //            objectVelocities[objectId] = 0.0;
    //        }
    //    }
    //}
}

void _Driving::getOtherVehicleacceleration(double& acceleration)
{
    //thread getGagueacceleration(_Driving::getGaguesacceleration);
    //thread getOtheracceleration(_Driving::getOtheracceleration);
}

void _Driving::DrivingObjectDetection()
{

}

void _Driving::getEyePosition(double &eye_pos_x, double &eye_pos_y, double &eye_pos_z)
{
    // Use the features of our car and other land marks to get the eyeposition in three dimensions

    while (true)
    {

    }
}

// Requires a Tensorflow model for recognizing a mirror, which I do not have...
void _Driving::getLeftMirrorLocation(double& x, double& y, double& z, Mat frame)
{
    // Detect the left mirror in the frame using object detection algorithms (e.g., YOLO, SSD)
    //cv::Rect mirror_rect = detect_mirror(frame);

    //if (!mirror_rect.empty())
    //{
    //    //Calculate the mirror's 3D coordinates with respect to the eyes
    //    double focal_length_mm = 22; // Focal length of the camera in millimeters
    //    double image_width = frame.cols;
    //    double image_height = frame.rows;

    //    //Convert pixel coordinates to meters using the camera's intrinsic parameters
    //    double mirror_x_meters = (mirror_rect.x + mirror_rect.width / 2 - image_width / 2) * focal_length_mm / image_width;
    //    double mirror_y_meters = (mirror_rect.y + mirror_rect.height / 2 - image_height / 2) * focal_length_mm / image_height;

    //    //Calculate the mirror's depth using a distance estimation algorithm (e.g., stereo vision, monocular depth estimation)
    //    double mirror_z_meters = estimate_depth(mirror_x_meters, mirror_y_meters);

    //    //Convert meters to feet
    //    x = mirror_x_meters * 3.28084;
    //    y = mirror_y_meters * 3.28084;
    //    z = mirror_z_meters * 3.28084;
    //}

    // Sleep for a short interval before the next calculation (e.g., 10-20 milliseconds)
    //std::this_thread::sleep_for(std::chrono::milliseconds(10));
}

// Requires a Tensorflow model for recognizing a mirror, which I do not have...
void _Driving::getRightMirrorLocation(double& x, double& y, double& z, Mat frame)
{
    // Create a thread to calculate the mirror location

    // Detect the left mirror in the frame using object detection algorithms (e.g., YOLO, SSD)
    //cv::Rect mirror_rect = detect_mirror(frame);

    //if (!mirror_rect.empty())
    //{
    //    // Calculate the mirror's 3D coordinates with respect to the eyes
    //    double focal_length_mm = 22; // Focal length of the camera in millimeters
    //    double image_width = frame.cols;
    //    double image_height = frame.rows;

    //    // Convert pixel coordinates to meters using the camera's intrinsic parameters
    //    double mirror_x_meters = (mirror_rect.x + mirror_rect.width / 2 - image_width / 2) * focal_length_mm / image_width;
    //    double mirror_y_meters = (mirror_rect.y + mirror_rect.height / 2 - image_height / 2) * focal_length_mm / image_height;

    //    // Calculate the mirror's depth using a distance estimation algorithm (e.g., stereo vision, monocular depth estimation)
    //    // double mirror_z_meters = estimate_depth(mirror_x_meters, mirror_y_meters);

    //    // Convert meters to feet
    //    x = mirror_x_meters * 3.28084;
    //    y = mirror_y_meters * 3.28084;
    //    z = mirror_z_meters * 3.28084;
    //}

    // Sleep for a short interval before the next calculation (e.g., 10-20 milliseconds)
    //std::this_thread::sleep_for(std::chrono::milliseconds(10));
}

// Requires a Tensorflow model for recognizing a mirror, which I do not have...
void _Driving::getRearViewMirror(double& x, double& y, double& z, Mat frame)
{
    // Create a thread to calculate the mirror location
    // Calculate the mirror location with respect to other features and the eyes
    // For example, you can use computer vision techniques like object detection or tracking
    //cv::Mat frame = capture_frame(); // Capture a frame from the camera

    //// Detect the left mirror in the frame using object detection algorithms (e.g., YOLO, SSD)
    //cv::Rect mirror_rect = detect_mirror(frame);

    //if (!mirror_rect.empty())
    //{
    //    // Calculate the mirror's 3D coordinates with respect to the eyes
    //    double focal_length_mm = 22; // Focal length of the camera in millimeters
    //    double image_width = frame.cols;
    //    double image_height = frame.rows;

    //    // Convert pixel coordinates to meters using the camera's intrinsic parameters
    //    double mirror_x_meters = (mirror_rect.x + mirror_rect.width / 2 - image_width / 2) *
    //        focal_length_mm / image_width;
    //    double mirror_y_meters = (mirror_rect.y + mirror_rect.height / 2 - image_height / 2) *
    //        focal_length_mm / image_height;

    //    // Calculate the mirror's depth using a distance estimation algorithm (e.g., stereo vision, monocular depth estimation)
    //    double mirror_z_meters = estimate_depth(mirror_x_meters, mirror_y_meters);

    //    // Convert meters to feet
    //    x = mirror_x_meters * 3.28084;
    //    y = mirror_y_meters * 3.28084;
    //    z = mirror_z_meters * 3.28084;
    //}

    //// Sleep for a short interval before the next calculation (e.g., 10-20 milliseconds)
    //std::this_thread::sleep_for(std::chrono::milliseconds(10));
}

void _Driving::getGagueVelocity(double &velocity, Mat frame)
{
    // Mat frame = imread(stm_vision_path_camera1[filled][0]);

    // Convert the frame to grayscale and apply Gaussian blur
    cv::Mat gray;
    cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);
    cv::GaussianBlur(gray, gray, cv::Size(5, 5), 0);

    // Apply thresholding to segment out the gauge
    cv::Mat thresh;
    cv::threshold(gray, thresh, 0, 255, cv::THRESH_BINARY_INV + cv::THRESH_OTSU);

    // Find contours of the gauge
    std::vector<std::vector<cv::Point>> contours;
    cv::findContours(thresh, contours, cv::RETR_EXTERNAL, cv::CHAIN_APPROX_SIMPLE);

    // Iterate through contours to find the speedometer gauge
    for (const auto& contour : contours)
    {
        // Approximate the contour as a circle
        double area = cv::contourArea(contour);
        cv::Rect bounding_rect = cv::boundingRect(contour);
        double aspect_ratio = (double)bounding_rect.width / bounding_rect.height;

        if (area > 1000 && aspect_ratio > 2.5)
        {
            // Detect the needle position
            std::vector<cv::Point> needle_contour;
            for (const auto& point : contour)
            {
                if (point.x > bounding_rect.x + bounding_rect.width / 2 - 10 &&
                    point.x < bounding_rect.x + bounding_rect.width / 2 + 10) {
                    needle_contour.push_back(point);
                }
            }

            // Calculate the average y-coordinate of the needle points
            double sum_y = 0;

            for (const auto& point : needle_contour) {
                sum_y += point.y;
            }
            double needle_y = sum_y / needle_contour.size();

            // Detect the speed value corresponding to the needle position
            std::vector<cv::Point> mph_points;

            for (int i = 0; i < bounding_rect.width; i++)
            {
                cv::Point point(bounding_rect.x + i, bounding_rect.y + bounding_rect.height / 2);
                if (cv::pointPolygonTest(contour, point, false) >= 0) {
                    mph_points.push_back(point);
                }
            }

            // Calculate the average x-coordinate of the mph points
            double sum_x = 0;
            for (const auto& point : mph_points)
            {
                sum_x += point.x;
            }

            double mph_x = sum_x / mph_points.size();

            // Map the needle position to a speed value
            int speed_value = map_needle_position_to_speed(needle_y, bounding_rect.height);

            // Store the detected speed value
            speed_value = speed_value;

            // Trigger a callback function or notify other threads about the updated speed value
            //on_speed_value_updated();
        }
    }
}

void _Driving::getRightLaneLocation(double& x, double& y, double& z, Mat frame)
{
    // Create a thread to calculate the left lane location
    //Mat frame = imread(stm_vision_path_camera1[filled][0]);

    // Convert the frame to grayscale and apply Gaussian blur
    cv::Mat gray;
    //cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);
    cv::GaussianBlur(gray, gray, cv::Size(5, 5), 0);

    // Apply Canny edge detection to detect lane markings
    cv::Mat edges;
    cv::Canny(gray, edges, 50, 150);

    // Define the region of interest (ROI) for the left lane
    int roi_x = frame.cols / 2; // Start from the middle of the image
    int roi_y = frame.rows / 2; // Start from the middle of the image
    int roi_w = frame.cols / 2; // Width of the ROI
    int roi_h = frame.rows / 2; // Height of the ROI

    cv::Mat roi(edges, cv::Rect(roi_x, roi_y, roi_w, roi_h));

    // Apply Hough transform to detect lines in the ROI
    std::vector<cv::Vec4i> lines;
    cv::HoughLinesP(roi, lines, 1, CV_PI / 180, 50, 100, 10);

    // Filter out lines that are not relevant to the left lane
    std::vector<cv::Vec4i> right_lane_lines;
    for (const auto& line : lines)
    {
        double slope = (line[3] - line[1]) / (double)(line[2] - line[0]);

        if (slope > 0 && slope < 1) { // Adjust the slope range according to your needs
            right_lane_lines.push_back(line);
        }
    }

    // Calculate the average x, y coordinates of the right lane lines
    double sum_x = 0;
    double sum_y = 0;
    int count = 0;

    for (const auto& line : right_lane_lines)
    {
        sum_x += (line[0] + line[2]) / 2.0;
        sum_y += (line[1] + line[3]) / 2.0;
        count++;
    }

    if (count > 0)
    {
        x = sum_x / count;
        y = sum_y / count;

        // Calculate the depth of the left lane using a distance estimation algorithm
        //z = estimate_depth(x, y);

        // Convert pixels to meters or feet according to your needs
        x *= camera1_focal_length / camera1_resolution_width; // Focal length in millimeters
        y *= camera1_focal_length / camera1_resolution_height;
        z *= 3.28084; // Convert meters to feet
    }

    // Sleep for a short interval before the next calculation (e.g., 10-20 milliseconds)
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
}

void _Driving::getLeftLaneLocation(double& x, double& y, double& z, Mat frame)
{
    //Mat frame = imread(stm_vision_path_camera1[filled][0]);

    // Convert the frame to grayscale and apply Gaussian blur
    cv::Mat gray;
    cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);
    cv::GaussianBlur(gray, gray, cv::Size(5, 5), 0);

    // Apply Canny edge detection to detect lane markings
    cv::Mat edges;
    cv::Canny(gray, edges, 50, 150);

    // Define the region of interest (ROI) for the left lane
    int roi_x = frame.cols / 2; // Start from the middle of the image
    int roi_y = frame.rows / 2; // Start from the middle of the image
    int roi_w = frame.cols / 2; // Width of the ROI
    int roi_h = frame.rows / 2; // Height of the ROI

    cv::Mat roi(edges, cv::Rect(roi_x, roi_y, roi_w, roi_h));

    // Apply Hough transform to detect lines in the ROI
    std::vector<cv::Vec4i> lines;
    cv::HoughLinesP(roi, lines, 1, CV_PI / 180, 50, 100, 10);

    // Filter out lines that are not relevant to the left lane
    std::vector<cv::Vec4i> left_lane_lines;

    for (const auto& line : lines)
    {
        double slope = (line[3] - line[1]) / (double)(line[2] - line[0]);

        if (slope > 0 && slope < 1)
        { // Adjust the slope range according to your needs
            left_lane_lines.push_back(line);
        }
    }

    // Calculate the average x, y coordinates of the left lane lines
    double sum_x = 0;
    double sum_y = 0;
    int count = 0;

    for (const auto& line : left_lane_lines)
    {
        sum_x += (line[0] + line[2]) / 2.0;
        sum_y += (line[1] + line[3]) / 2.0;
        count++;
    }

    if (count > 0)
    {
        x = sum_x / count;
        y = sum_y / count;

        // Calculate the depth of the left lane using a distance estimation algorithm
        //z = estimate_depth(x, y);

        // Convert pixels to meters or feet according to your needs
        x *= camera1_focal_length / camera1_resolution_width; // Focal length in millimeters
        y *= camera1_focal_length / camera1_resolution_height;
        z *= 3.28084; // Convert meters to feet
    }

    // Sleep for a short interval before the next calculation (e.g., 10-20 milliseconds)
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
}

void _Driving::getObstructions()
{
    while (true)
    {

    }
}

//void _Driving::getGaguesVelocity(double& velocity)
//{
//    while (true)
//    {
//
//    }
//}

void _Driving::getOthersVelocity(double& velocity)
{
    
}

void _Driving::getGaguesAcceleration(double& acceleration)
{
    while (true)
    {

    }
}

void _Driving::getOtherAcceleration(double& acceleration)
{
    while (true)
    {

    }
}

void _Driving::getVehicleFeatures()
{

}

// Helper function to capture a frame from the camera
Mat _Driving::captureFrameFromCamera()
{
    //cv::VideoCapture cap(0); // Open default camera (index 0)

    //if (!cap.isOpened())
    //{
    //    std::cerr << "Error: Unable to open camera." << std::endl;
    //    exit(-1);
    //}

    cv::Mat frame;
    //cap.read(frame);
    return frame;
}

//// Helper function to update tracking data for each object
//void _Driving::updateTrackingData(std::vector<Object> objects)
//{
//    // Implement tracking data updates using your preferred library (e.g., Kalman filter, particle filter)
//    // For simplicity, we'll just store the current frame's data in a buffer
//    static std::queue<std::vector<Object>> trackingBuffer;
//
//    if (trackingBuffer.size() >= 5) // Store up to 5 frames of history
//    {
//        trackingBuffer.pop();
//    }
//
//    trackingBuffer.push(objects);
//}

// Get the distance in seconds to the vehicle in front and base predictions based on this number
double _Driving::Math::getClosingDistance(double& vehicle_distance, double& vehicle_velocity, double& myCar_velocity, double& myCar_acceleration)
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
    //cout << "output_tensors[0]: " << output_tensors[0] << endl;
    //cout << "output_tensors[1]: " << output_tensors[1] << endl;
    //cout << "output_tensors[2]: " << output_tensors[2] << endl;
    //cin.get();

    // Process the output tensors to extract boxes, scores, and class IDs
    auto boxes = _Vision::ExtractBoxes(output_tensors[0], frame.size()); // Needs implementation
    auto classIds = _Vision::ExtractClassIds(output_tensors[1]); // Needs implementation
    auto scores = _Vision::ExtractScores(output_tensors[2]); // Needs implementation
    std::vector<string> classLabels = _Vision::LoadLabels(tensorflow_labels);
    //cout << "classIds: " << classIds[0] << endl;

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

        if (score >= tensorflow_score)
        {
            vector<string> row(7);

            row[0] = temp;
            //cout << row[0] << endl;
            row[1] = classLabels[classId - 1]; // Use the actual class ID instead of x
            //cout << row[1] << endl;
            row[2] = to_string(box.x);
            //cout << row[2] << endl;
            row[3] = to_string(box.width);
            //cout << row[3] << endl;
            row[4] = to_string(box.y);
            //cout << row[4] << endl;
            row[5] = to_string(box.height);
            //cout << row[5] << endl;
            row[6] = to_string(score);
            //cout << row[6] << endl;

            return_array.push_back(row);
        }
    }

    // Cleanup
    TF_DeleteTensor(inputTensor);
    TF_DeleteTensor(output_tensors[0]);
    TF_DeleteTensor(output_tensors[1]);
    TF_DeleteTensor(output_tensors[2]);
    //TF_DeleteSession(session, status);
    //TF_DeleteSessionOptions(options);
    //TF_DeleteStatus(status);

    return return_array;
}

int _Driving::map_needle_position_to_speed(double needle_y, double gauge_height)
{
    // Define the mapping of needle positions to speed values
    std::vector<std::pair<double, int>> mappings = {
        {gauge_height * 0.1, 20},  // 20 mph at 10% from top
        {gauge_height * 0.3, 40},  // 40 mph at 30% from top
        {gauge_height * 0.5, 60},  // 60 mph at 50% from top
        {gauge_height * 0.7, 80},  // 80 mph at 70% from top
        {gauge_height * 0.9, 100}, // 100 mph at 90% from top
        {gauge_height * 1.0, 120}  // 120 mph at 100% from top
    };

    // Interpolate the speed value based on the needle position
    for (int i = 0; i < mappings.size() - 1; i++)
    {
        if (needle_y >= mappings[i].first && needle_y <= mappings[i + 1].first)
        {
            double ratio = (needle_y - mappings[i].first) / (mappings[i + 1].first - mappings[i].first);
            return mappings[i].second + (mappings[i + 1].second - mappings[i].second) * ratio;
        }
    }

    // Return a default value if the needle position is outside the defined range
    return 0;
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

void _Driving::ObjectDetection::DrawBoundingBoxes(cv::Mat& image, const std::vector<cv::Rect>& boxes, const std::vector<int>& classIds, std::vector<float>& scores, std::vector<string> classLabels)
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

std::vector<string> _Driving::Utilities::LoadLabels(const std::string& labelFilePath)
{
    std::ifstream file(labelFilePath);
    std::string line;
    std::vector<string> labels(300);
    int number = 0;

    while (std::getline(file, line))
    {
        labels[number] = line;
        number++;
    }

    return labels;
}