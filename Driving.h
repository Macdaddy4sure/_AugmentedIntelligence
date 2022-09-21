#pragma once

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

using namespace std;

class _Driving
{
public:
    static void DrivingHeuristicInit();
    static void DrivingObjectDetection();
    static void init_getMyCar();
    static void init_getOtherCars();
    static void getVehicleFeatures();
    static void getEyePosition();
    static void getVehicleSpeed();
    static void getVehicleAccelleration();
    static void trackVehicles();
    static void getOtherVehicleSpeed();
    static void getOtherVehicleAccelleration();
    static void getLeftMirrorLocation();
    static void getRightMirrorLocation();
    static void getRearViewMirror();
    static void getGagueLocation();
    static void getRightLaneLocation();
    static void getLeftLaneLocation();
    static void getObstructions();
    static void getGaguesSpeed();
    static void getOtherSpeed();
    static void getGaguesAccelleration();
    static void getOtherAccelleration();
};
