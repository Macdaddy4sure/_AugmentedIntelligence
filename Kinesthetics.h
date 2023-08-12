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

#include "AugmentedIntelligence.h"

using namespace std;

class _Kinesthetics
{
public:
    static float* LeftEyeTracking();
    static float LeftSuperiorRectusTension();
    static float LeftLateralRectusTension();
    static float LeftInferiorObliqueTension();
    static float LeftInferiorRectusTension();
    static float LeftMedialRectusTension();
    static bool LeftEyeMuscleTension(float LeftSuperiorRectus, float LeftLeteralRectus, float LeftInferiorOblique, float LeftInferiorRectus, float leftMedialRectus);
    static float* RightEyeTracking();
    static float RightSuperiorRectusTension();
    static float RightLateralRectusTension();
    static float RightInferiorObliqueTension();
    static float RightInferiorRectusTension();
    static float RightMedialRectusTension();
    static bool RightEyeMuscleTension(float RightSuperiorRectus, float RightLeteralRectus, float RightInferiorOblique, float RightInferiorRectus, float RightMedialRectus);

    //static float* RightShoulderAngleTracking();
    //static void MoveRightArm(float* dimenisons);
};