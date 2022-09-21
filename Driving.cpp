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

    //PyObject* pName, * pModule, * pFunc;
    //PyObject* pArgs, * pValue;
    //int i;

    //if (argc < 3) {
    //    fprintf(stderr, "Usage: call pythonfile funcname [args]\n");
    //    return 1;
    //}

    //Py_Initialize();
    //pName = PyUnicode_DecodeFSDefault(pythonFile.c_str());
    ///* Error checking of pName left out */

    //pModule = PyImport_Import(pName);
    //Py_DECREF(pName);

    //if (pModule != NULL) {
    //    pFunc = PyObject_GetAttrString(pModule, functionName.c_str());
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