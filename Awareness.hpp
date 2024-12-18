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

#include "AugmentedIntelligence.hpp"

using namespace std;

class _Awareness
{
public:
    static void AwarenessInterface();
    static void AwarenessInterfaceComputers();
    static void AwarenessInterfaceTyping();
    static void AwarenessInterfaceDriving();
    static void AwarenessInterfaceWriting();
    static void AwarenessInterfaceGaming();
    static void AwarenessInterfaceMathematics();
    static void PrintToAwareness(string text);
    static void AwarenessBoundingBoxes(vector<vector<string>> coco_awareness);
    static void getVisionActivation();
    static void getActionDetectionActivation();
    static void getPhoneActivation();
    static void getSoundActivationKeywords();
    static void VisualThinking();

    class Computer
    {

    };

    class Typing
    {

    };

    class Driving
    {

    };

    class Writing
    {

    };

    class Gaming
    {

    };

    class Mathematics
    {

    };
};