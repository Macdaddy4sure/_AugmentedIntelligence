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

/*
    Copyright(C) 2023 TensorFlow

    https://github.com/tensorflow/tensorflow/blob/master/LICENSE

    Licensed under the Apache License, Version 2.0 (the "License");
    you may not use this file except in compliance with the License.
    You may obtain a copy of the License at

        http://www.apache.org/licenses/LICENSE-2.0

    Unless required by applicable law or agreed to in writing, software
    distributed under the License is distributed on an "AS IS" BASIS,
    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
    See the License for the specific language governing permissions and
    limitations under the License.
*/

/*
    Copyright(C) 2023 OpenCV

    https://github.com/opencv/opencv/blob/master/LICENSE

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

/*
    YOLO LICENSE
    Version 2, July 29 2016

    THIS SOFTWARE LICENSE IS PROVIDED "ALL CAPS" SO THAT YOU KNOW IT IS SUPER
    SERIOUS AND YOU DON'T MESS AROUND WITH COPYRIGHT LAW BECAUSE YOU WILL GET IN
    TROUBLE HERE ARE SOME OTHER BUZZWORDS COMMONLY IN THESE THINGS WARRANTIES
    LIABILITY CONTRACT TORT LIABLE CLAIMS RESTRICTION MERCHANTABILITY.NOW HERE'S
    THE REAL LICENSE :

    0. Darknet is public domain.
    1. Do whatever you want with it.
    2. Stop emailing me about it!
*/

#include "AugmentedIntelligence.h"
#include "Vision.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reference.h"
#include "Variables.h"
#include "Settings.h"
#include "Utilities.h"

using namespace std;
using namespace filesystem;
using namespace chrono_literals;
//using namespace cv;
//using namespace cv::dnn;
////using namespace cv;
////using namespace cv::dnn;
//
//// Constants.
//const float INPUT_WIDTH = 640.0;
//const float INPUT_HEIGHT = 640.0;
//const float SCORE_THRESHOLD = 0.5;
//const float NMS_THRESHOLD = 0.45;
//const float CONFIDENCE_THRESHOLD = 0.45;
//
//// Text parameters.
//const float FONT_SCALE = 0.7;
//const int FONT_FACE = FONT_HERSHEY_SIMPLEX;
//const int THICKNESS = 1;
//
//// Colors.
//Scalar BLACK = Scalar(0, 0, 0);
//Scalar BLUE = Scalar(255, 178, 50);
//Scalar YELLOW = Scalar(0, 255, 255);
//Scalar RED = Scalar(0, 0, 255);

// char* coco_classes[] = { "person","bicycle","car","motorcycle","airplane","bus","train","truck","boat","traffic light","fire hydrant","stop sign","parking meter","bench","bird","cat","dog","horse","sheep","cow","elephant","bear","zebra","giraffe","backpack","umbrella","handbag","tie","suitcase","frisbee","skis","snowboard","sports ball","kite","baseball bat","baseball glove","skateboard","surfboard","tennis racket","bottle","wine glass","cup","fork","knife","spoon","bowl","banana","apple","sandwich","orange","broccoli","carrot","hot dog","pizza","donut","cake","chair","couch","potted plant","bed","dining table","toilet","tv","laptop","mouse","remote","keyboard","cell phone","microwave","oven","toaster","sink","refrigerator","book","clock","vase","scissors","teddy bear","hair drier","toothbrush" };

void _Vision::Vision()
{

}

// The following function will initialize the webcam and record raw visual data to memory
void _Vision::VisionRawCamera1()
{
    string command;
    string ffmpeg_location = _Settings::GetFFMpegLocation();
    string camera1 = _Settings::GetCamera1();
    string camera1_resolution = _Settings::GetCamera1Resolution();
    string camera1_fps = _Settings::GetCamera1FPS();
    string vision_directory = _Settings::GetVisionDirectory();
    string current_time;
    ostringstream oss;

    while (camera1_enabled && visual_memory)
    {
        auto entry = time(nullptr);
        auto tm1 = *localtime(&entry);

        oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
        current_time = oss.str();

        command = "ffmpeg -f dshow -video_size ";
        command += camera1_resolution;
        command += "-i video=\"";
        command += camera1;
        command += "\" -vf fps=";
        command += camera1_fps;
        command += " ";
        command += vision_directory;
        command += "\\camera1\\";
        command += "\\image_camera1_%d.jpg";
        system(command.c_str());
    }
}

// The following function will initialize the webcam and record raw visual data to memory
void _Vision::VisionRawCamera2()
{
    string command;
    string ffmpeg_location = _Settings::GetFFMpegLocation();
    string camera2 = _Settings::GetCamera2();
    string camera2_resolution = _Settings::GetCamera2Resolution();
    string camera2_fps = _Settings::GetCamera2FPS();
    string vision_directory = _Settings::GetVisionDirectory();

    while (camera2_enabled && visual_memory)
    {
        command = "ffmpeg -f dshow -video_size ";
        command += camera2_resolution;
        command += "-i video=\"";
        command += camera2;
        command += "\" -vf fps=";
        command += camera2_fps;
        command += " ";
        command += vision_directory;
        command += "\\camera2\\";
        command += "image_camera2_%d.jpg";
        system(command.c_str());
    }
}

void _Vision::MySQLVisionRAWCamera1()
{
    MYSQL* conn;
    string camera_vision_database = "ai_senses";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string vision_directory = _Settings::GetVisionDirectory();
    string table_name = "ai_vision_camera1";
    vision_directory += "\\Camera1\\";
    string framerate = _Settings::GetCamera1FPS();
    string resolution = _Settings::GetCamera1Resolution();
    string object_class;
    string object_x;
    string object_y;
    string object_xy;
    string object_xz;
    string temp_path;
    string image_hash;
    string current_date;
    //string previous_paths[30];
    ostringstream oss;
    string sql1;
    
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), camera_vision_database.c_str(), 3306, NULL, 0);

    while (visual_memory)
    {
        if (conn)
        {
            for (auto& p : directory_iterator(vision_directory.c_str()))
            {
                temp_path = p.path().string();
                string** object_detection_array = _Utilities::Create2DStringArray(100, 5);
                object_detection_array = _Vision::ObjectDetection(temp_path);
                /*image_hash = _Utilities::getHash(temp_path);*/

                auto entry = time(nullptr);
                auto tm1 = *localtime(&entry);

                oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
                current_date = oss.str();

                sql1 = "INSERT INTO ";
                sql1 += table_name;
                sql1 += "(image_time, image_path, object_number, object_class, object_x, object_y, object_xy, object_xz, image_hash) VALUES(\"";
                sql1 += current_date.c_str();
                sql1 += "\", \"";
                sql1 += temp_path.c_str();
                sql1 += "\", \"";
                sql1 += object_class.c_str();
                sql1 += "\", \"";
                sql1 += object_x.c_str();
                sql1 += "\", \"";
                sql1 += object_y.c_str();
                sql1 += "\", \"";
                sql1 += object_xy.c_str();
                sql1 += "\", \"";
                sql1 += object_xz.c_str();
                sql1 += "\", \"";
                sql1 += image_hash.c_str();
                sql1 += "\");";
                mysql_query(conn, sql1.c_str());
                this_thread::sleep_for(chrono::milliseconds(40));
            }
        }
    }

    //terminate();
}

void _Vision::MySQLVisionRAWCamera2()
{
    MYSQL* conn;
    string camera_vision_database = "ai_senses";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string vision_directory = _Settings::GetVisionDirectory();
    string table_name = "ai_vision_camera2";
    vision_directory += "\\Camera2\\";
    string framerate = _Settings::GetCamera2FPS();
    string resolution = _Settings::GetCamera2Resolution();
    string object_class;
    string object_x;
    string object_y;
    string object_xy;
    string object_xz;
    string temp_path;
    string previous_path;
    string current_date;
    ostringstream oss;
    string sql1;
    string image_hash;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, mysql_hostname.c_str(), mysql_username.c_str(), mysql_password.c_str(), camera_vision_database.c_str(), 3306, NULL, 0);

    while (visual_memory)
    {
        if (conn)
        {
            for (auto& p : directory_iterator(vision_directory.c_str()))
            {
                temp_path = p.path().string();
                string** object_detection_array = _Utilities::Create2DStringArray(100, 5);
                object_detection_array = _Vision::ObjectDetection(temp_path);
                /*image_hash = _Utilities::getHash(temp_path);*/

                auto entry = time(nullptr);
                auto tm1 = *localtime(&entry);

                oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
                current_date = oss.str();

                sql1 = "INSERT INTO ";
                sql1 += table_name;
                sql1 += "(image_time, image_path, object_number, object_class, object_x, object_y, object_xy, object_xz, image_hash) VALUES(\"";
                sql1 += current_date.c_str();
                sql1 += "\", \"";
                sql1 += temp_path.c_str();
                sql1 += "\", \"";
                sql1 += object_class.c_str();
                sql1 += "\", \"";
                sql1 += object_x.c_str();
                sql1 += "\", \"";
                sql1 += object_y.c_str();
                sql1 += "\", \"";
                sql1 += object_xy.c_str();
                sql1 += "\", \"";
                sql1 += object_xz.c_str();
                sql1 += "\", \"";
                sql1 += image_hash.c_str();
                sql1 += "\");";
                mysql_query(conn, sql1.c_str());
                this_thread::sleep_for(chrono::milliseconds(40));
            }
        }
    }

    //terminate();
}

string** _Vision::ObjectDetection(string image_path)
{
    string** Object;

    //auto net = readNet("yolov5s.onnx");
    //vector<Mat> predictions;
    //net.forward(predictions, net.getUnconnectedOutLayersNames());
    //const Mat& output = predictions[0];

    return Object;
}

//Mat format_yolov5(const Mat& source)
//{
//    // put the image in a square big enough
//    int col = source.cols;
//    int row = source.rows;
//    int _max = MAX(col, row);
//    Mat resized = Mat::zeros(_max, _max, CV_8UC3);
//    source.copyTo(resized(Rect(0, 0, col, row)));
//
//    // resize to 640x640, normalize to [0,1[ and swap Red and Blue channels
//    Mat result;
//    blobFromImage(source, result, 1. / 255., Size(INPUT_WIDTH, INPUT_HEIGHT), Scalar(), true, false);
//
//    return result;
//}
