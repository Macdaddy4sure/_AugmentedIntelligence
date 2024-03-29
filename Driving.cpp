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
#include "Driving.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reference.h"
#include "NLP.h"
#include "NLU.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

using namespace std;

struct myVehicle
{
    float speed;
    float accelleration;
};

struct otherVehicle
{
    float speed;
    float accelleration;
    float distance;
    float breaking_probability;
};

struct obstruction
{
    float distance;
    float breaking_probability;
};

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
//      m. Distance to vehicle braking relative to position, speed, distance, accelleration of other objects
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
    thread getMyCar(_Driving::init_getMyCar);
    thread init_getOtherCars(_Driving::init_getOtherCars);
    thread obstructions(_Driving::getObstructions);
    thread myEyePosition(_Driving::getEyePosition);
    thread myEyeRelativeMirrorRight(_Driving::getLeftMirrorLocation);
    thread myEyeRelativeMirrorLeft(_Driving::getRightMirrorLocation);
    thread myEyeRelativeRearView(_Driving::getRearViewMirror);
    thread myEyeRelativeGagues(_Driving::getGagueLocation);
    thread leftLaneLocation(_Driving::getLeftLaneLocation);
    thread rightLaneLocation(_Driving::getRightLaneLocation);
}

void _Driving::init_getMyCar()
{
    thread myVehicleSpeed(_Driving::getVehicleSpeed);
    thread myVehicleAccelleration(_Driving::getVehicleAccelleration);
    thread myVehicleFeatures(_Driving::getVehicleFeatures);
}

void _Driving::init_getOtherCars()
{
    thread NNtrackVehicles(_Driving::trackVehicles);
}

void _Driving::getVehicleSpeed()
{
    thread getGagueSpeed(_Driving::getGaguesSpeed);
    thread getotherSpeed(_Driving::getOtherSpeed);
}

void _Driving::getVehicleAccelleration()
{
    thread getGagueAccelleration(_Driving::getGaguesAccelleration);
    thread getOtherAccelleration(_Driving::getOtherAccelleration);
}

void _Driving::trackVehicles()
{
    // One large neural network to track all the cars in the field of view
    // Then open a thread for each individual vehicle and the get their position and accelleration with respect to our car
    // Get the closing distance and breaking probability
    // Mirror
}

void _Driving::getOtherVehicleSpeed()
{
    thread getGagueSpeed(_Driving::getGaguesSpeed);
    thread getotherSpeed(_Driving::getOtherSpeed);
}

void _Driving::getOtherVehicleAccelleration()
{
    thread getGagueAccelleration(_Driving::getGaguesAccelleration);
    thread getOtherAccelleration(_Driving::getOtherAccelleration);
}

void _Driving::DrivingObjectDetection()
{
    string pythonFile = "./Driving_yolov5n.pt";
    string functionName = "main";
    string arguments = "--weights ./yolov5n.pt --source '0' --imgsz 3820, 2160 --device 0";


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

void _Driving::getGaguesAccelleration()
{
    while (true)
    {

    }
}

void _Driving::getOtherAccelleration()
{
    while (true)
    {

    }
}

void _Driving::getVehicleFeatures()
{

}



float _Driving::Math::getAccelleration(float& f, float& x, float& h)
{
    return (f * (x - h) - 2 * f * (x) + f * (x + h)) / (h * h);
}

string* _Driving::ObjectDetection::ObjectDetectionDriving(string image_path)
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
    }

    // Preprocess the image
    cv::Mat image = _Driving::Utilities::PreprocessImage(image_path, targetWidth, targetHeight);

    // Convert image to tensor
    TF_Tensor* inputTensor = _Driving::Utilities::MatToTensor(image);

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
    auto boxes = _Driving::Utilities::ExtractBoxes(output_tensors[0], image.size()); // Needs implementation
    auto classIds = _Driving::Utilities::ExtractClassIds(output_tensors[1]); // Needs implementation
    auto scores = _Driving::Utilities::ExtractScores(output_tensors[2]); // Needs implementation
    std::string* classLabels = _Driving::Utilities::LoadLabels("D:/_test/coco.names");

    DrawBoundingBoxes(image, boxes, classIds, scores, classLabels);

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