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

// https://github.com/dafanghe/DeepSceneTextReader

#include "AugmentedIntelligence.h"

using namespace std;
//using namespace cv;
//using namespace tensorflow;
//using namespace torch;

class _Utilities
{
public:
    static void CleanUpImages(string object, string fileLocation, string start_date, string current_date);
    static void Sentence2Memory();
    static void PrintLicense();
    static void MusicLyricsSync(string search);
    static string* String2Sentences(string input);
    static string* String2Words(string input);
    static string ImageSequenceFFMpeg(string current_date, string duration_previous);
    //static void fourPointsTransform(const Mat& frame, const Point2f vertices[], Mat& result);
    static void swap(int* a, int* b);
    static int partition(int arr[], int low, int high);
    static void quickSort(int arr[], int low, int high);
    static string* sortLines(string outText, string* recognition);
    static int GenerateRandomNumber(int low, int high);
    static string* StringArraySorter(string* input);
    static void MoviesSorter();
    static bool MovieExists(string title);
    static void CreateReminder();
    static string FixArticle(string article);
    static string toLowerWord(string word);
    static string CreateSummary(string data);
    static void UpdateMySQL();
    static string ReturnPunctuation(string* words);
    static double* ParseVector(string vector);
    static double* VectorSum(double* vector_sum, double* vector);
    static double* VectorAverage(double* vector_sum, int word_count);
    static string DictionarySpellCheck(string word);
    static string FixWikiTableName(string title);
    static string fixQuoteFederal(string input);
    /*static string getHash(string filename);*/
    static string* ArrayOfStringsToLowercase(string* words);
    static string to_timestamp(int64_t t);
    static string** Create2DStringArray(unsigned int width, unsigned int height);
    //static void resize_image_max_len(const cv::Mat& image, cv::Mat& resized_image, float& ratio_h, float& ratio_w, int max_side_len);
    //static void resize_image_fix_height(const cv::Mat& image, cv::Mat& resized_image, float& ratio, int fixed_height);
    //static void pad_image_width(const cv::Mat& image, cv::Mat& padded_image, int target_width);
    //static tensorflow::Tensor cv_mat_to_tensor(const cv::Mat& image);
    //static cv::Mat tensor_to_cv_mat(const tensorflow::Tensor tensor);
    //static float get_angle(TextBox& text_box);
    //static void get_cropped_extend_image(cv::Mat& image, TextBox& box, cv::Mat& cropped, std::vector<cv::Point>& new_points);
    //static cv::Point rotate_point(cv::Point& point, float angle, cv::Point& center);
    //static void rotate_image_and_points(cv::Mat& cropped, std::vector<cv::Point>& points,float angle, cv::Mat& rotated_image, std::vector<cv::Point>& rotated_points);
    //static void draw_polygon(cv::Mat& image, std::vector<cv::Point>& points);
    //static void draw_text_box(cv::Mat& image, TextBox& text_box);
    //static vector<Tensor> non_max_suppression(Tensor preds, float score_thresh, float iou_thresh);
    //static static void preprocess(const Mat& frame, Net& net, Size inpSize, float scale, const Scalar& mean, static bool swapRB);
    //static string postprocess(Mat& frame, const std::vector<Mat>& out, Net& net, static int backend);
};