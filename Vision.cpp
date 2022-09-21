/*
    Copyright(C) 2022 Tyler Crockett | Macdaddy4sure.com

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
    Copyright(c) 2022 TensorFlow

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
    Copyright(c) 2022 OpenCV

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

// char* coco_classes[] = { "person","bicycle","car","motorcycle","airplane","bus","train","truck","boat","traffic light","fire hydrant","stop sign","parking meter","bench","bird","cat","dog","horse","sheep","cow","elephant","bear","zebra","giraffe","backpack","umbrella","handbag","tie","suitcase","frisbee","skis","snowboard","sports ball","kite","baseball bat","baseball glove","skateboard","surfboard","tennis racket","bottle","wine glass","cup","fork","knife","spoon","bowl","banana","apple","sandwich","orange","broccoli","carrot","hot dog","pizza","donut","cake","chair","couch","potted plant","bed","dining table","toilet","tv","laptop","mouse","remote","keyboard","cell phone","microwave","oven","toaster","sink","refrigerator","book","clock","vase","scissors","teddy bear","hair drier","toothbrush" };

void _Vision::Vision()
{

}

void _Vision::ObjectDetection()
{
    //PyObject* pName, * pModule, * pFunc;
    //PyObject* pArgs, * pValue;
    //int i;

    //if (argc < 3)
    //{
    //    fprintf(stderr, "Usage: call pythonfile funcname [args]\n");
    //    return 1;
    //}

    //Py_Initialize();
    //pName = PyUnicode_DecodeFSDefault(argv[1]);
    ///* Error checking of pName left out */

    //pModule = PyImport_Import(pName);
    //Py_DECREF(pName);

    //if (pModule != NULL) {
    //    pFunc = PyObject_GetAttrString(pModule, argv[2]);
    //    /* pFunc is a new reference */

    //    if (pFunc && PyCallable_Check(pFunc)) {
    //        pArgs = PyTuple_New(argc - 3);
    //        for (i = 0; i < argc - 3; ++i) {
    //            pValue = PyLong_FromLong(atoi(argv[i + 3]));
    //            if (!pValue) {
    //                Py_DECREF(pArgs);
    //                Py_DECREF(pModule);
    //                fprintf(stderr, "Cannot convert argument\n");
    //                return 1;
    //            }
    //            /* pValue reference stolen here: */
    //            PyTuple_SetItem(pArgs, i, pValue);
    //        }
    //        pValue = PyObject_CallObject(pFunc, pArgs);
    //        Py_DECREF(pArgs);
    //        if (pValue != NULL) {
    //            printf("Result of call: %ld\n", PyLong_AsLong(pValue));
    //            Py_DECREF(pValue);
    //        }
    //        else {
    //            Py_DECREF(pFunc);
    //            Py_DECREF(pModule);
    //            PyErr_Print();
    //            fprintf(stderr, "Call failed\n");
    //            return 1;
    //        }
    //    }
    //    else {
    //        if (PyErr_Occurred())
    //            PyErr_Print();
    //        fprintf(stderr, "Cannot find function \"%s\"\n", argv[2]);
    //    }
    //    Py_XDECREF(pFunc);
    //    Py_DECREF(pModule);
    //}
    //else {
    //    PyErr_Print();
    //    fprintf(stderr, "Failed to load \"%s\"\n", argv[1]);
    //    return 1;
    //}
    //if (Py_FinalizeEx() < 0) {
    //    return 120;
    //}
    //return 0;
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
    ostringstream oss;

    while (camera1_enabled && visual_memory)
    {
        command = ffmpeg_location;
        command += "ffmpeg.exe -f dshow -video_size ";
        command += camera1_resolution;
        command += "-i video=\"";
        command += camera1;
        command += "\" -vf fps=";
        command += camera1_fps;
        command += " ";
        command += "\\Camera1\\out%d.jpg";
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
    ostringstream oss;

    while (camera2_enabled && visual_memory)
    {
        command = ffmpeg_location;
        command += "ffmpeg.exe -f dshow -video_size ";
        command += camera2_resolution;
        command += "-i video=\"";
        command += camera2;
        command += "\" -vf fps=";
        command += camera2_fps;
        command += " ";
        command += "\\Camera2\\out%d.jpg";
        system(command.c_str());
    }
}

void _Vision::MySQLVisionRAWCamera1()
{
    MYSQL* conn;
    string camera_vision_database = "";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string vision_directory = _Settings::GetVisionDirectory();
    string table_name = "vision_raw_camera1";
    vision_directory += ".\\Camera1\\";
    string framerate = _Settings::GetCamera1FPS();
    string resolution = _Settings::GetCamera1Resolution();
    string temp_path;
    string current_date;
    ostringstream query1;
    ostringstream oss;
    string sql1;
    
    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), camera_vision_database.c_str(), 3306, NULL, 0);

    while (visual_memory)
    {
        if (conn)
        {
            for (auto& p : directory_iterator(vision_directory.c_str()))
            {
                temp_path = p.path().string();

                auto entry = time(nullptr);
                auto tm1 = *localtime(&entry);

                oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
                current_date = oss.str();

                query1 << "INSERT INTO " << table_name << "(date, fileLocation, framerate, resolution) VALUES(" << current_date << ", " << temp_path << ", " << framerate << ", " << resolution << ");";
                sql1 = query1.str();
                mysql_query(conn, sql1.c_str());
                //std::this_thread::sleep_for(std::chrono::milliseconds(10));
            }
        }
    }

    //terminate();
}

void _Vision::MySQLVisionRAWCamera2()
{
    MYSQL* conn;
    string camera_vision_database = "";
    string mysql_username = _Settings::GetMySQLUsername();
    string mysql_password = _Settings::GetMySQLPassword();
    string vision_directory = _Settings::GetVisionDirectory();
    string table_name = "vision_raw_camera2";
    vision_directory += "\\Camera2\\";
    string framerate = _Settings::GetCamera2FPS();
    string resolution = _Settings::GetCamera2Resolution();
    string temp_path;
    string current_date;
    ostringstream query1;
    ostringstream oss;
    string sql1;

    conn = mysql_init(0);
    conn = mysql_real_connect(conn, "127.0.0.1", mysql_username.c_str(), mysql_password.c_str(), camera_vision_database.c_str(), 3306, NULL, 0);

    while (visual_memory)
    {
        if (conn)
        {
            for (auto& p : directory_iterator(vision_directory.c_str()))
            {
                temp_path = p.path().string();

                auto entry = time(nullptr);
                auto tm1 = *localtime(&entry);

                oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
                current_date = oss.str();

                query1 << "INSERT INTO " << table_name << "(date, fileLocation, framerate, resolution) VALUES(" << current_date << ", " << temp_path << ", " << framerate << ", " << resolution << ");";
                sql1 = query1.str();
                mysql_query(conn, sql1.c_str());
                //std::this_thread::sleep_for(std::chrono::milliseconds(10));
            }
        }
    }

    //terminate();
}