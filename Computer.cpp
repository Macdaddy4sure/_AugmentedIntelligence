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
#include "Computers.h"
#include "Working-Memory.h"
#include "Short-Term Memory.h"
#include "Long-Term Memory.h"
#include "Reading.h"
#include "Reference.h"
#include "NLP.h"
#include "NLU.h"
#include "Settings.h"
#include "Variables.h"
#include "Utilities.h"

using namespace std;

// PURPOSE: Gather data from screen captures from personal computer coupled with definitions of computer processes for general use
//	1. Create client for private computers
//	2. Send screenshots from private computer to client
//	3. Get current action or task
//	3. Transfer Windows.h information
//		a. Cursor position
//		b. Active window title and 2D coordinates
//		c. Get other running processes
//	4. Use TensorFlow to identify text in images
//	5. Use Tesseract to read text
//	6. Use _NLP and NLU to understand text
//	7. Create neural networks and profiles for applications
//	8. Neural networks for video games

/*
	Desktop Application Profiles for Computers
	1. Go through a list of commonly used applications for Windows and create application Profiles
		a. For web browsers, parse the page source code for different types of information on the page.
			i. The source code can be intercepted with WireShark
			ii. Check for chanes to the site
		b. Configure a Neural Network for image buttons
			i.  OpenCV to detect different images and what the behavior for a hotspot link
			ii. Check for changes
		c. Concept creation (gather data) regarding buttons and features
		d. Application list
		   - Chrome
		   - Opera
		   - Firefox
		   - Edge
		   - Internet Explorer
		   - AVG
		   - Bitdefender
		   - Avast
		   - Zoom
		   - Discord
		   - Ventrilo
		   - MIRC
		   - Skype
		   - Google Earth
		   - Steam
		   - VLC
		   - foobar2000
		   - Winamp
		   - Audacity
		   - HandBrake
		   - TeamViewer
		   - ImgBurn
		   - Explorer
		   - Blender
		   - Cinema 4D
		   - Paint.NET
		   - GIMP
		   - 7-Zip
		   - WinRAR
		   - Adobe Reader
		   - Adobe Acrobat
		   - Adobe Photoshop
		   - Adobe Illustrator
		   - Adobe InDesign
		   - Adobe Premiere Pro
		   - Adobe XD
		   - Adobe Lightroom
		   - Adobe Lightroom Classic
		   - Access
		   - Excel
		   - OneNote
		   - OutLook
		   - PowerPoint
		   - OneNote
		   - Word

	2. Create database for where individual files are located
	3. Commandline programs and concepts
	3. List of applications
*/

// Purpose: Initialize the functions required for using a computer
void _Computers::ComputersInit()
{
	//int horizontal;
	//int vertical;

	if (_AI::getOsName() == "Windows 32-bit")
	{

	}
	if (_AI::getOsName() == "Windows 64-bit")
	{
		// Load all command prompt / powershell batch and ps1. commands into memory
		// Get all commandline commands

	}
	if (_AI::getOsName() == "Linux")
	{

	}
	if (_AI::getOsName() == "Mac OSX")
	{

	}
	if (_AI::getOsName() == "Unix")
	{

	}
}

void _Computers::TrackCursor()
{
	POINT p;

	if (GetCursorPos(&p))
	{
		//cursor position now in p.x and p.y
	}
}

void _Computers::getLeftMouseClick()
{
	if (GetKeyState(VK_LBUTTON))
	{   //finding clicked position
		HWND hWnd = FindWindowA(0, ("Motion Paths"));
		LPDWORD pid;
		GetWindowThreadProcessId(hWnd, pid);
		if (hWnd) { cout << "Found" << endl; }

		POINT p;
		GetCursorPos(&p);
		if (ScreenToClient(hWnd, &p))
		{
			int mouseX = p.x;
			int mouseY = p.y;
			cout << p.x << " " << p.y << endl;
		}
	}
}

void _Computers::getRightMouseClick()
{
	if (GetKeyState(VK_RBUTTON))
	{   //finding clicked position
		HWND hWnd = FindWindowA(0, ("Motion Paths"));
		LPDWORD pid;
		GetWindowThreadProcessId(hWnd, pid);
		if (hWnd) { cout << "Found" << endl; }

		POINT p;
		GetCursorPos(&p);

		if (ScreenToClient(hWnd, &p))
		{
			int mouseX = p.x;
			int mouseY = p.y;
			cout << p.x << " " << p.y << endl;
		}
	}
}

void _Computers::getMiddleMouseClick()
{
	if (GetKeyState(VK_LBUTTON))
	{   //finding clicked position
		HWND hWnd = FindWindowA(0, ("Motion Paths"));
		LPDWORD pid;
		GetWindowThreadProcessId(hWnd, pid);
		if (hWnd) { cout << "Found" << endl; }

		POINT p;
		GetCursorPos(&p);

		if (ScreenToClient(hWnd, &p))
		{
			int mouseX = p.x;
			int mouseY = p.y;
			cout << p.x << " " << p.y << endl;
		}
	}
}

void _Computers::getBackMouseClick()
{
	if (GetKeyState(VK_LBUTTON))
	{   //finding clicked position
		HWND hWnd = FindWindowA(0, ("Motion Paths"));
		LPDWORD pid;
		GetWindowThreadProcessId(hWnd, pid);
		if (hWnd) { cout << "Found" << endl; }

		POINT p;
		GetCursorPos(&p);
		if (ScreenToClient(hWnd, &p))
		{
			int mouseX = p.x;
			int mouseY = p.y;
			cout << p.x << " " << p.y << endl;
		}
	}
}

void _Computers::getKeypresses()
{
	if (GetKeyState(VK_LBUTTON))
	{   //finding clicked position
		HWND hWnd = FindWindowA(0, ("Motion Paths"));
		LPDWORD pid;
		GetWindowThreadProcessId(hWnd, pid);
		if (hWnd) { cout << "Found" << endl; }

		POINT p;
		GetCursorPos(&p);
		if (ScreenToClient(hWnd, &p))
		{
			int mouseX = p.x;
			int mouseY = p.y;
			cout << p.x << " " << p.y << endl;
		}
	}
}

void _Computers::GetMonitors()
{
	while (true)
	{

	}
}

string _Computers::GetHostname()
{
	//char *hostname;
	////int name_langth;

	//string hostname = gethostname(hostname, NULL);
    //return "true";
}

bool _Computers::isRemoteDesktop()
{
	while (true)
	{

	}
}

// Get the horizontal and vertical screen sizes in pixels
void _Computers::GetDesktopResolution(int& horizontal, int& vertical)
{
	RECT desktop;
	// Get a handle to the desktop window
	string active_window_str = _Computers::GetCurrentWindowString();
	HWND active_window = GetActiveWindow();
	// Get the size of screen to the variable desktop
	GetWindowRect(active_window, &desktop);
	// The top left corner will have coordinates (0,0)
	// and the bottom right corner will have coordinates
	// (horizontal, vertical)
	horizontal = desktop.right;
	vertical = desktop.bottom;
}

void _Computers::GetWindowDimensions(int& horizontal, int& vertical, HWND window)
{
	RECT rect;

	if (GetWindowRect(window, &rect))
	{
		int width = rect.right - rect.left;
		int height = rect.bottom - rect.top;
	}
}

void _Computers::GetWindowLocation(int& horizontal, int& vertical, HWND window)
{
	RECT rect = { NULL };

	if (GetWindowRect(GetConsoleWindow(), &rect))
	{
		horizontal = rect.left;
		vertical = rect.top;
	}
}

void _Computers::GetIndividualMonitors()
{
	int x1, y1, x2, y2, w, h;

	// get screen dimensions
	x1 = GetSystemMetrics(SM_XVIRTUALSCREEN);
	y1 = GetSystemMetrics(SM_YVIRTUALSCREEN);
	x2 = GetSystemMetrics(SM_CXVIRTUALSCREEN);
	y2 = GetSystemMetrics(SM_CYVIRTUALSCREEN);
	w = x2 - x1;
	h = y2 - y1;

	// copy screen to bitmap
	HDC     hScreen = GetDC(NULL);
	HDC     hDC = CreateCompatibleDC(hScreen);
	HBITMAP hBitmap = CreateCompatibleBitmap(hScreen, w, h);
	HGDIOBJ old_obj = SelectObject(hDC, hBitmap);
	BOOL    bRet = BitBlt(hDC, 0, 0, w, h, hScreen, x1, y1, SRCCOPY);

	// save bitmap to clipboard
	OpenClipboard(NULL);
	EmptyClipboard();
	SetClipboardData(CF_BITMAP, hBitmap);
	CloseClipboard();

	// clean up
	SelectObject(hDC, old_obj);
	DeleteDC(hDC);
	ReleaseDC(NULL, hScreen);
	DeleteObject(hBitmap);
}

string _Computers::CurrentTask()
{
	CHAR chBuf[1];
	DWORD dwRead, dwWritten;
	HANDLE hStdin, hStdout;
	BOOL bSuccess;

	hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
	hStdin = GetStdHandle(STD_INPUT_HANDLE);
	if (
		(hStdout == INVALID_HANDLE_VALUE) ||
		(hStdin == INVALID_HANDLE_VALUE)
	)
		ExitProcess(1);

	// Send something to this process's stdout using printf.
	printf("\n ** This is a message from the child process. ** \n");

	// This simple algorithm uses the existence of the pipes to control execution.
	// It relies on the pipe buffers to ensure that no data is lost.
	// Larger applications would use more advanced process control.

	for (;;)
	{
		// Read from standard input and stop on error or no data.
		bSuccess = ReadFile(hStdin, chBuf, 1, &dwRead, NULL);

		if (!bSuccess || dwRead == 0)
			break;

		// Write to standard output and stop on error.
		bSuccess = WriteFile(hStdout, chBuf, dwRead, &dwWritten, NULL);

		if (!bSuccess)
			break;
	}
	return 0;
}

// Use object detection with pytorch to track the taskbar, the start menu, the icons, the flyout icons, the clock, and the tool tip menu
void _Computers::GetTaskbar()
{

}

//bool _Computers::isWindows()
//{
//
//}
//
//bool _Computers::isLinux()
//{
//
//}

//bool _Computers::isLinuxApplication()
//{
//
//}
//
//bool _Computers::isWindowsApplication()
//{
//
//}

// Purpose: Function to read the screen or screens
// 1. Capture all text data on the screen
// 2. Organize the text per the active process running
void _Computers::Reading()
{
	//_Computers::CurrentTask();
}

string _Computers::GetCurrentWindowString()
{
	HWND input;
	string active_window;

	input = GetActiveWindow();
	active_window = HWNDToString(input);

	return active_window;
}

string _Computers::GetPasswords()
{

}

// The following function is designed to troubleshoot computer problems
//  Invokation: This function should be invoked with a voice command
//  0. There is a problem
//  1. Gather information about the problem
//      0z. Test if the indiviudal wants to perform action
//          i. Possibility of feedback infinite loop with no relevent answer. The solution is to do nothing.
//      z. Check scene and mark analysis points that are not allowed to be analyzed
//          i. Other people...
//              1. Check with local, county, state, and federal laws
//                  a. Interpretation of hainging laws
//              2. If the analysis and gathering do not result in undermining another is accordance with law
//              3. Check if the user would like to cancel checking for troubleshooting
//      a. Invoke Tesseract to gather text data about the problem
//      b. Use pocketsphinx to gather dialogue information about the problem
//      c. Use OpenCV with a trained neural network to identify the problem
//      d. Use analysis from all senses to make a decision
//      e. Check each inference against database of logical fallacies
//      f. Check for wisdom database
//      g. Check other databases
//  2. With the gathered information, search the database for common problems
//      a. If the problem is found: use proposed solutions in the database
//      b. If the problem is not found: collect information from other sources
//          i. Link the problem with known similar concepts in database to form a question
//              x. Search the internet for solution with problem keywords (search database for safe websites)
//              xx. Parse the HTML file and extract text
//  3. Trial and error test iterative solutions
//      a. Check each iteration with ethics, moral, wisdom, fallacy databases
void _Computers::ComputerTroubleshooting()
{

}

string _Computers::HWNDToString(HWND inputA)
{
	string returnString;
	int len = GetWindowTextLength(inputA);

	if (len > 0)
	{
		returnString.resize(len + 1);
		len = GetWindowText(inputA, &returnString[0], returnString.size());
		returnString.resize(len);
	}
	return returnString;
}

// Create a function that sends commands from the client to a server computer
// Create a function that can get which computer is being used
// Create a function that sends screenshots of the server computer back to the AI client computer
// In the case more than one monitor is used, send screenshots of both monitors back to the client