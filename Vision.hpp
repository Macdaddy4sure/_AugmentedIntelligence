#pragma once

/*
    Copyright(C) 2025 Tyler Crockett | Macdaddy4sure.com

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
using namespace cv::dnn;

class _Vision
{
public:
    static void Vision();
    static void VisionRawCamera1();
    static void VisionRawCamera2();
    //static void ImageProcessing(Mat frame);
    static void MySQLVisionRAWCamera1(string filename, int camera1_fps, vector<vector<string>> coco_object_detection, string image_analysis);
    static void MySQLVisionRAWCamera2(string filename, int camera1_fps, vector<vector<string>> coco_object_detection, string image_analysis);
    //static void ImageProcessing(string camera, cv::Mat frame);
    //static void MySQLVisionRAWCamera1(string filename, string** detected_objects);
    //static void MySQLVisionRAWCamera2(string filename, string** detected_objects);
    static vector<vector<string>> ObjectDetection(Mat frame);
    static vector<vector<string>> ObjectDetectionSequence(TF_Status* status, TF_Graph* graph, TF_SessionOptions* options, TF_Buffer* run_opts, const char* tags, TF_Session* session, Mat frame);
    //static vector<vector<string>> ObjectDetectionYOLO(Mat frame);
    //static vector<vector<string>> ImageSegmentationYOLO(Mat frame);
    static vector<vector<string>> ObjectDetectionAntsBees(Mat frame);
    static vector<vector<string>> ObjectDetectionBirds(Mat frame);
    static vector<vector<string>> ObjectDetectionBoatsVessels(Mat frame);
    static vector<vector<string>> ObjectDetectionEggs(Mat frame);
    static vector<vector<string>> ObjectDetectionCats(Mat frame);
    static vector<vector<string>> ObjectDetectionAntsDogs(Mat frame);
    static vector<vector<string>> ObjectDetectionAntsPests(Mat frame);
    static vector<vector<string>> ObjectDetectionBalls(Mat frame);
    static vector<vector<string>> ObjectDetectionTrash(Mat frame);
    static vector<vector<string>> ObjectDetectionUnknown(Mat frame);
    static void OpenImage(string image_location, int duration_milliseconds);
    static void OpenImage(string image_location);
    static void OpenImages(string* frames, int duration_milliseconds);
    static void EncodeStillFrames(string start_date, int duration_seconds);
    static vector<string> GetTimeStillFrames(long long long_time, int duration_seconds);
    static string EncodeVideo(const std::vector<std::string>& imagePaths, string& audioPath, string& outputFilePath);
    //static string** ObjectDetection(Mat frame);
    static cv::Mat PreprocessImage(const std::string& imagePath, int targetWidth, int targetHeight);
    static TF_Tensor* MatToTensor(const cv::Mat& frame);
    static void DrawBoundingBoxes(const cv::Mat& image, const std::vector<cv::Rect>& boxes, const std::vector<int>& classIds, std::vector<float>& scores, string* classLabels);
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

