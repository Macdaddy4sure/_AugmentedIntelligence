#pragma once

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

#include "AugmentedIntelligence.h"

using namespace std;

class _Kinesthetics
{
public:

    class LeftLeg
    {
    public:

        class LeftBigToe
        {
        public:

        };

        class Left1stDigit
        {
        public:

        };

        class Left2ndDigit
        {
        public:

        };

        class Left3rdDigit
        {
        public:

        };

        class Left4thDigit
        {
        public:

        };
    };

    class RightLeg
    {
    public:

        class RightBigToe
        {
        public:

        };

        class Right1stDigit
        {
        public:

        };

        class Right2ndDigit
        {
        public:

        };

        class Right3rdDigit
        {
        public:

        };

        class Right4thDigit
        {
        public:

        };
    };

    class LeftArm
    {
    public:

        class LeftHand
        {
        public:

            class LeftIndexFinder
            {
            public:

            };

            class LeftMiddleFinger
            {
            public:

            };

            class LeftRingFinger
            {
            public:

            };

            class LeftPinkyFinger
            {
            public:

            };

            class LeftThumb
            {
            public:

            };
        };
    };

    class RightArm
    {
    public:

        class RightHand
        {
        public:

            class RightIndexFinder
            {
            public:

            };

            class RightMiddleFinger
            {
            public:

            };

            class RightRingFinger
            {
            public:

            };

            class RightPinkyFinger
            {
            public:

            };

            class RightThumb
            {
            public:

            };
        };
    };

    class Torso
    {
    public:

        class Genitals
        {
        public:

        };
    };

    class Head
    {
    public:

        class LeftEye
        {
        public:
            static bool LeftEyeTracking(float& left_eye);
            static bool getLeftSuperiorRectusTension(float& LeftSuperiorRectusTension);
            static bool getLeftLateralRectusTension(float& LeftLateralRectusTension);
            static bool getLeftInferiorObliqueTension(float& LeftInferiorObliqueTension);
            static bool getLeftInferiorRectusTension(float& LeftInteriorRectusTension);
            static bool getLeftMedialRectusTension(float& LeftMedialRectusTension);
            static bool setLeftEyeMuscleTension(float LeftSuperiorRectus, float LeftLeteralRectus, float LeftInferiorOblique, float LeftInferiorRectus, float leftMedialRectus);
        };

        class RightEye
        {
        public:
            static bool RightEyeTracking(float& right_eye);
            static bool getRightSuperiorRectusTension(float& RightSuperiorRectusTension);
            static bool getRightLateralRectusTension(float& RightLateralRectusTension);
            static bool getRightInferiorObliqueTension(float& RightInferiorObliqueTension);
            static bool getRightInferiorRectusTension(float& RightInferiorRectusTension);
            static bool getRightMedialRectusTension(float& RightMedialRectusTension);
            static bool setRightEyeMuscleTension(float RightSuperiorRectus, float RightLeteralRectus, float RightInferiorOblique, float RightInferiorRectus, float RightMedialRectus);
        };

        class Neck
        {
        public:

        };

        class Nose
        {
        public:

        };
    };

    //static float* RightShoulderAngleTracking();
    //static void MoveRightArm(float* dimenisons);
};