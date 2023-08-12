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

class _Computers
{
public:
    static void ComputersInit();
    static void GetDesktopResolution(int& horizontal, int& vertical);
    static void GetMonitors();
    static void ComputerTroubleshooting();
    static void Reading();
    static bool isLinux();
    static bool isWindows();
    //static bool isLinuxApplication();
    //static bool isWindowsApplication();
    static string CurrentTask();
    static void GetTaskbar();
    static void GetIndividualMonitors();
    static void TrackCursor();
    static void getKeypresses();
    static void getBackMouseClick();
    static void getMiddleMouseClick();
    static void getRightMouseClick();
    static void getLeftMouseClick();
    static void GetWindowDimensions(int& horizontal, int& vertical, HWND window);
    static void GetWindowLocation(int& horizonal, int& vertical, HWND window);
    static void GetIndividualMonitors(string hostname);
    static string CurrentTask(string hostname);
    static string GetCurrentWindowString();
    static string GetPasswords();
    static string GetHostname();
    static bool isRemoteDesktop();
    static void ComputerTroubleshooting2();
    static string HWNDToString(HWND inputA);
    //static void Computer();
};