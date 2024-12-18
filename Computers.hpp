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
using namespace cv;

// Struct to represent system information
struct SystemInfo
{
    string model;
    string os;
    string cpu;
    int ram;
};

class _Computers
{
public:
    static void ComputersInit();
    static void GetDesktopResolution(int& horizontal, int& vertical);
    static void GetMonitors();
    static void ComputerTroubleshooting();
    static void Reading();
    //static bool isLinux();
    //static bool isWindows();
    //static bool isLinuxApplication();
    //static bool isWindowsApplication();
    static string CurrentTask();
    static void GetTaskbar();
    static void GetIndividualMonitors();
    static float TrackCursor();
    static void getLeftMouseClick(int& left_mouse_click_x, int& left_mouse_click_y);
    static void getRightMouseClick(int& right_mouse_click_x, int& right_mouse_click_y);
    static void getMiddleMouseClick(int& middle_mouse_click_x, int& middle_mouse_click_y);
    static void GetWindowDimensions(int& horizontal, int& vertical, HWND window);
    static void GetWindowLocation(int& horizonal, int& vertical, HWND window);
    //static void GetIndividualMonitors(string hostname);
    //static string CurrentTask(string hostname);
    static string GetCurrentWindowString();
    static string GetPasswords();
    static string GetHostname();
    static bool isRemoteDesktop();
    //static void ComputerTroubleshooting2();
    static string HWNDToString(HWND inputA);
    //static void Computer();

    class ObjectDetection
    {
    public:
        static vector<vector<string>> ObjectDetectionComputers(TF_Status* status, TF_Graph* graph, TF_SessionOptions* options, TF_Buffer* run_opts, const char* tags, TF_Session* session, Mat frame);
    };

    // Terms from A+, Network+, and Security+ and various other sources
    class Terms
    {
    public:
        static string Application(string text);
        static string Program(string text);
        static string Browser(string text);
        static string CPU(string text);
        static string Click(string text);
        static string Cloud(string text);
        static string Cursor(string text);
        static string Default(string text);
        static string Defragmentation(string text);
        static string Desktop(string text);
        static string DoubleClick(string text);
        static string Download(string text);
        static string DragAndDrop(string text);
        static string Email(string text);
        static string EmailAddress(string text);
        static string ExternalHardDrive(string text);
        static string FileExplorer(string text);
        static string File(string text);
        static string Folder(string text);
        static string Font(string text);
        static string Formatting(string text);
        static string HardDrive(string text);
        static string Hardware(string text);
        static string Highlight(string text);
        static string HoverMouseOver(string text);
        static string Icon(string text);
        static string Input(string text);
        static string InputDevice(string text);
        static string Internet(string text);
        static string Link(string text);
        static string Maximize(string text);
        static string Menu(string text);
        static string Minimize(string text);
        static string Modem(string text);
        static string Motherboard(string text);
        static string Network(string text);
        static string OperatingSystem(string text);
        static string Output(string text);
        static string OutputDevices(string text);
        static string Password(string text);
        static string Pointers(string text);
        static string PowerButton(string text);
        static string RAM(string text);
        static string RightClick(string text);
        static string Router(string text);
        static string Scroll(string text);
        static string ScrollBar(string text);
        static string ScrollWheel(string text);
        static string SearchEngine(string text);
        static string Select(string text);
        static string Software(string text);
        static string Tabs(string text);
        static string Taskbar(string text);
        static string Upload(string text);
        static string USB(string text);
        static string Webpage(string text);
        static string Website(string text);
        static string WIFI(string text);
        static string Window(string text);
    };
};