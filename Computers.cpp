/*
	Copyright(C) 2025 Tyler Crockett | Macdaddy4sure.com

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
#include "Computers.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Working-Memory.hpp"
#include "Short-Term Memory.hpp"
#include "Long-Term Memory.hpp"
#include "Reading.hpp"
#include "Reference.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Settings.hpp"
#include "Variables.hpp"
#include "Vision.hpp"
#include "Utilities.hpp"

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
	int horizontal;
	int vertical;
	string current_task;
	string current_window;
	float cursor_position;
	int left_mouse_click_x;
	int left_mouse_click_y;
	int right_mouse_click_x;
	int right_mouse_click_y;
	int back_mouse_x;
	int back_mouse_y;

	// Use Object Detection to check if the user is looking at monitors, keyboard, and mice

	if (_AI::getOsName() == "Windows 64-bit")
	{
		// Load all command prompt / powershell batch and ps1. commands into memory. Should be in the batch.cpp file
		// Create threads for computer feature recognition
		GetMonitors();
		GetDesktopResolution(horizontal, vertical);

		while (computer_use)
		{
			current_task = CurrentTask();
			cursor_position = TrackCursor();

		}
	}
}

vector<vector<string>> _Computers::ObjectDetection::ObjectDetectionComputers(TF_Status* status, TF_Graph* graph, TF_SessionOptions* options, TF_Buffer* run_opts, const char* tags, TF_Session* session, Mat frame)
{
	string current_date;
	ostringstream oss;
	auto entry = time(nullptr);
	auto tm1 = *localtime(&entry);

	oss << put_time(&tm1, "%d-%m-%Y_%H-%M-%S");
	current_date = oss.str();

	//std::string imagePath = "D:/_test/saved_sequence2/";
	// Debug
	//std::string model_path = "D:/_AugmentedIntelligence/_src/tensorflow_models/coco_object_detection/saved_model/";
	//std::string labelsPath = "D:/_AugmentedIntelligence/_src/tensorflow_models/coco_object_detection/coco.names";

	// Convert image to tensor
	TF_Tensor* inputTensor = _Vision::MatToTensor(frame);

	// Define input operation
	TF_Output input_op = { TF_GraphOperationByName(graph, "serving_default_input_tensor"), 0 };

	// Define output operations
	std::vector<TF_Output> output_ops{
		{ TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 1 },
		{ TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 2 },
		{ TF_GraphOperationByName(graph, "StatefulPartitionedCall"), 4 },
	};

	std::vector<TF_Tensor*> input_tensors = { inputTensor };
	TF_Tensor* output_tensors[] = { NULL, NULL, NULL };

	if (TF_GetCode(status) != TF_OK)
	{
		fprintf(stderr, "Error: %s\n", TF_Message(status));
		// Handle error appropriately
	}

	// Run the session
	TF_SessionRun(session, nullptr,
		&input_op, input_tensors.data(), input_tensors.size(),
		output_ops.data(), output_tensors, output_ops.size(),
		nullptr, 0, nullptr, status);

	if (TF_GetCode(status) == TF_OK)
	{
		printf("Session run successfully\n");
	}
	else
	{
		fprintf(stderr, "Session run error: %s\n", TF_Message(status));
	}

	// Debug
	cout << "output_tensors[0]: " << output_tensors[0] << endl;
	cout << "output_tensors[1]: " << output_tensors[1] << endl;
	cout << "output_tensors[2]: " << output_tensors[2] << endl;
	//cin.get();

	// Process the output tensors to extract boxes, scores, and class IDs
	auto boxes = _Vision::ExtractBoxes(output_tensors[0], frame.size()); // Needs implementation
	auto classIds = _Vision::ExtractClassIds(output_tensors[1]); // Needs implementation
	auto scores = _Vision::ExtractScores(output_tensors[2]); // Needs implementation
	std::string* classLabels = _Vision::LoadLabels(tensorflow_labels);
	cout << "classIds: " << classIds[0] << endl;

	_Vision::DrawBoundingBoxes(frame, boxes, classIds, scores, classLabels);

	// Debug
	std::string temp = vision_memory_directory;
	temp += "/camera1/computers/object_detection/";
	temp += current_date.c_str();
	temp += "_object_detection_camera1.png";
	std::cout << "Writing image: " << temp << std::endl;
	cv::imwrite(temp.c_str(), frame);

	vector<vector<string>> return_array;

	// Create the return array
	for (int i = 0; i < boxes.size(); i++)
	{
		const auto& box = boxes[i];
		int classId = classIds[i];
		float score = scores[i];

		if (score >= 0.90)
		{
			vector<string> row(7);
			row[0] = temp;
			cout << row[0] << endl;
			row[1] = classLabels[classId - 1]; // Use the actual class ID instead of x
			cout << row[1] << endl;
			row[2] = to_string(box.x);
			cout << row[2] << endl;
			row[3] = to_string(box.width);
			cout << row[3] << endl;
			row[4] = to_string(box.y);
			cout << row[4] << endl;
			row[5] = to_string(box.height);
			cout << row[5] << endl;
			row[6] = to_string(score);
			cout << row[6] << endl;

			return_array.push_back(row);
		}
	}

	// Cleanup
	//TF_DeleteTensor(inputTensor);
	//TF_DeleteTensor(output_tensors[0]);
	//TF_DeleteTensor(output_tensors[1]);
	//TF_DeleteTensor(output_tensors[2]);
	//TF_DeleteSession(session, status);
	//TF_DeleteSessionOptions(options);
	//TF_DeleteStatus(status);

	return return_array;
}


float _Computers::TrackCursor()
{
	POINT p;
	float cursor_pos;

	cursor_pos = GetCursorPos(&p);
	return cursor_pos;
}

void _Computers::getLeftMouseClick(int &left_mouse_click_x, int &left_mouse_click_y)
{
	if (GetKeyState(VK_LBUTTON))
	{
		//finding clicked position
		HWND hWnd = FindWindowA(0, ("Motion Paths"));
		LPDWORD pid;
		GetWindowThreadProcessId(hWnd, pid);

		if (hWnd) { cout << "Found" << endl; }

		POINT p;
		GetCursorPos(&p);

		if (ScreenToClient(hWnd, &p))
		{
			int left_mouse_click_x = p.x;
			int left_mouse_click_y = p.y;
			cout << p.x << " " << p.y << endl;
		}
	}
}

void _Computers::getRightMouseClick(int &right_mouse_click_x, int &right_mouse_click_y)
{
	if (GetKeyState(VK_RBUTTON))
	{   
		//finding clicked position
		HWND hWnd = FindWindowA(0, ("Motion Paths"));
		LPDWORD pid;
		GetWindowThreadProcessId(hWnd, pid);

		if (hWnd) { cout << "Found" << endl; }

		POINT p;
		GetCursorPos(&p);

		if (ScreenToClient(hWnd, &p))
		{
			int right_mouse_click_x = p.x;
			int right_mouse_click_y = p.y;
			cout << p.x << " " << p.y << endl;
		}
	}
}

void _Computers::getMiddleMouseClick(int &middle_mouse_click_x, int &middle_mouse_click_y)
{
	if (GetKeyState(VK_MBUTTON))
	{
		//finding clicked position
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

//void _Computers::getBackMouseClick()
//{
//	if (GetKeyState(VK_LBUTTON))
//	{
//		//finding clicked position
//		HWND hWnd = FindWindowA(0, ("Motion Paths"));
//		LPDWORD pid;
//		GetWindowThreadProcessId(hWnd, pid);
//		if (hWnd) { cout << "Found" << endl; }
//
//		POINT p;
//		GetCursorPos(&p);
//		if (ScreenToClient(hWnd, &p))
//		{
//			int mouseX = p.x;
//			int mouseY = p.y;
//			cout << p.x << " " << p.y << endl;
//		}
//	}
//}

void _Computers::GetMonitors()
{

}

string _Computers::GetHostname()
{
	string temp;
	return temp;
}

bool _Computers::isRemoteDesktop()
{
	return false;
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
	//printf("\n ** This is a message from the child process. ** \n");

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
	string temp;
	return temp;
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

// The following function is designed to troubleshoot computer problems
//  Invokation: This function should be invoked with a voice command
//  0. There is a problem
//  1. Gather information about the problem
//		a. Get information from Service Now, in person, and email.
//		b. Check if there are any windows with error messages
//			i. Read the information on screen with Reading()
//		c. Check the Windows Event Viewer and application logs.
//			i. Read event viewer with Reading()
//      d. Check against MySQL wisdom database
//		e. Use empty dictionary technique to find previous solutions
//  2. With the gathered information, search the database for common problems
//      a. If the problem is found: use proposed solutions in the database
//      b. If the problem is not found: collect information from other sources
//          i. Link the problem with known similar concepts in database to form a question
//              x. Search the internet for solution with problem keywords (search database for safe websites)
//              xx. Parse the HTML file and extract text
//  3. Trial and error test iterative solutions
//      a. Check each iteration with ethics, moral, wisdom, fallacy databases

//	A simple computer troubleshooting algorithm can be designed using a decision tree approach.Here's a high-level outline of the steps:
//	1. Identify symptoms: Gather information about the problem(e.g., error messages, crash logs, user reports).
//	2. Classify issue: Determine if the issue is related to hardware, software, or network.
//	3. Gather system information: Collect data about the computer's configuration (e.g., operating system, CPU, RAM, installed software).
//	4. Apply decision rules: Use a set of predefined rules to narrow down the possible causes based on the gathered information.
//	5. Perform diagnostic tests: Run specific tests or checks to verify the suspected cause.
//	6. Take corrective action: Apply fixes or workarounds based on the identified cause.
void _Computers::ComputerTroubleshooting()
{
	// yay!
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

string _Computers::Terms::Application(string text)
{
	string model = "llama3";
	string definition = "A software tool used to complete a specific task such as create a letter, browse the Internet, and calculate a math problem.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "application";
		}
	}
	return nullptr;
}

string _Computers::Terms::Program(string text)
{
	string model = "llama3";
	string definition = "A software tool used to complete a specific task such as create a letter, browse the Internet, and calculate a math problem. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "program";
		}
	}
	return nullptr;
}

string _Computers::Terms::Browser(string text)
{
	string model = "llama3";
	string definition = "An application/program used to access and view websites.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "browser";
		}
	}
	return nullptr;
}

string _Computers::Terms::CPU(string text)
{
	string model = "llama3";
	string definition = "Stands for Central Processing Unit. The CPU is the primary component of a computer that processes instructions. It runs the operating system and applications, constantly receiving input from the user or active software programs. It processes the data and produces output, which may stored by an application or displayed on the screen. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "cpu";
		}
	}
	return nullptr;
}

string _Computers::Terms::Click(string text)
{
	string model = "llama3";
	string definition = "Pressing and releasing the left (primary) mouse button. Can also be called left-clicking. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "click";
		}
	}
	return nullptr;
}

string _Computers::Terms::Cloud(string text)
{
	string model = "llama3";
	string definition = "Where we store and access data and programs over the Internet instead of your computer's hard drive. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "cloud";
		}
	}
	return nullptr;
}

string _Computers::Terms::Cursor(string text)
{
	string model = "llama3";
	string definition = "A highlighted or bright (sometimes blinking) line or other mark that shows where information is being input; that is, where the next letter or character will appear. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "cursor";
		}
	}
	return nullptr;
}

string _Computers::Terms::Default(string text)
{
	string model = "llama3";
	string definition = "Factory setting for any given option in a software program or operating system.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "default";
		}
	}
	return nullptr;
}

string _Computers::Terms::Defragmentation(string text)
{
	string model = "llama3";
	string definition = "Defragmentation is the process of consolidating fragmented files on the user's hard drive. The process of defragmentation moves the data blocks on the hard drive around to bring all the parts of a file together. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "defragmentation";
		}
	}
	return nullptr;
}

string _Computers::Terms::Desktop(string text)
{
	string model = "llama3";
	string definition = "The home screen on your computer, what you see when you first log on.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "desktop";
		}
	}
	return nullptr;
}

string _Computers::Terms::DoubleClick(string text)
{
	string model = "llama3";
	string definition = "Quickly press and release the primary (left) mouse button twice.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "double click";
		}
	}
	return nullptr;
}

string _Computers::Terms::Download(string text)
{
	string model = "llama3";
	string definition = "To download data or software means to transfer it to your computer or phone from another device or from the internet";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "download";
		}
	}
	return nullptr;
}

string _Computers::Terms::DragAndDrop(string text)
{
	string model = "llama3";
	string definition = "Points the mouse at an icon or folder, presses the button and without releasing the button, moves the icon or folder to another place on the computer where the button is released";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "drag and drop";
		}
	}
	return nullptr;
}

string _Computers::Terms::Email(string text)
{
	string model = "llama3";
	string definition = "Private messages, called electronic mail, that are sent and received over a computer network. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "email";
		}
	}
	return nullptr;
}

string _Computers::Terms::EmailAddress(string text)
{
	string model = "llama3";
	string definition = "Your digital address or where people can send you mail on the internet.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "email address";
		}
	}
	return nullptr;
}

string _Computers::Terms::ExternalHardDrive(string text)
{
	string model = "llama3";
	string definition = "An external hard drive is a storage device located outside of a computer that is connected through a USB cable or wireless connection. An external hard drive is usually used to store media that a user needs to be portable, for backups, and when the internal drive of the computer is already at its full memory capacity. These devices have a high storage capacity compared to flash drives and are mostly used for backing up numerous computer files or serving as a network drive to store shared content. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "external hard drive";
		}
	}
	return nullptr;
}

string _Computers::Terms::FileExplorer(string text)
{
	string model = "llama3";
	string definition = "Program that is part of the opperating system that exists for browsing files and directories in the filesytem";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "file explorer";
		}
	}
	return nullptr;
}

string _Computers::Terms::File(string text)
{
	string model = "llama3";
	string definition = "A piece of computer information-document, spreadsheet, music, video, etc. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "file";
		}
	}
	return nullptr;
}

string _Computers::Terms::Folder(string text)
{
	string model = "llama3";
	string definition = "Just like a file folder in a filing cabinet, a file is where documents (letters, spreadsheets, etc.) are kept. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "folder";
		}
	}
	return nullptr;
}

string _Computers::Terms::Font(string text)
{
	string model = "llama3";
	string definition = "The size and style of letters.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "font";
		}
	}
	return nullptr;
}

string _Computers::Terms::Formatting(string text)
{
	string model = "llama3";
	string definition = "Changing the way that text, graphics, tables and other elements looks on the page.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "formatting";
		}
	}
	return nullptr;
}

string _Computers::Terms::HardDrive(string text)
{
	string model = "llama3";
	string definition = "Located inside your computer; location where you store data including the operating system.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "hard drive";
		}
	}
	return nullptr;
}

string _Computers::Terms::Hardware(string text)
{
	string model = "llama3";
	string definition = "The physical equipment of the computer system that you can see and touch.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "hardware";
		}
	}
	return nullptr;
}

string _Computers::Terms::Highlight(string text)
{
	string model = "llama3";
	string definition = "Click and drag across a word or sentence to highlight it. When it is highlighted you can make changes to it.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "highlight";
		}
	}
	return nullptr;
}

string _Computers::Terms::HoverMouseOver(string text)
{
	string model = "llama3";
	string definition = "Position the mouse pointer over top of an icon without clicking the icon. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "hover mouse over";
		}
	}
	return nullptr;
}

string _Computers::Terms::Icon(string text)
{
	string model = "llama3";
	string definition = "A small picture used to represent a file or program. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "icon";
		}
	}
	return nullptr;
}

string _Computers::Terms::Input(string text)
{
	string model = "llama3";
	string definition = "Whenever you enter data into your computer, it is referred to as input. This can be text typed in a word processing document, keywords entered in a search engine's search box, or data entered into a spreadsheet. Input can be something as simple as moving the mouse or clicking the mouse button or it can be as complex as scanning a document or downloading photos from a digital camera. Input devices perform these tasks, sending information and instructions to the computer.  ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "input";
		}
	}
	return nullptr;
}

string _Computers::Terms::InputDevice(string text)
{
	string model = "llama3";
	string definition = "Whenever you enter data into your computer, it is referred to as input. This can be text typed in a word processing document, keywords entered in a search engine's search box, or data entered into a spreadsheet. Input can be something as simple as moving the mouse or clicking the mouse button or it can be as complex as scanning a document or downloading photos from a digital camera. Input devices perform these tasks, sending information and instructions to the computer.  ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "input device";
		}
	}
	return nullptr;
}

string _Computers::Terms::Internet(string text)
{
	string model = "llama3";
	string definition = "A network of computer networks.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "internet";
		}
	}
	return nullptr;
}

string _Computers::Terms::Link(string text)
{
	string model = "llama3";
	string definition = "Short for hyperlink object or string of text that allows you to jump to a new location. Usually blue text.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "link";
		}
	}
	return nullptr;
}

string _Computers::Terms::Maximize(string text)
{
	string model = "llama3";
	string definition = "When you maximize a window on your computer screen, it becomes larger. In Windows, maximizing a window makes it take up the entire screen. In Mac OS X, a maximized window typically only takes up as much space as it needs. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "maximize";
		}
	}
	return nullptr;
}

string _Computers::Terms::Menu(string text)
{
	string model = "llama3";
	string definition = "A list of operations available to the user of a program. Menus can be accessed a variety of ways, including both left and right click. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "menu";
		}
	}
	return nullptr;
}

string _Computers::Terms::Minimize(string text)
{
	string model = "llama3";
	string definition = "When you minimize a window, you hide it from view. This is commonly done to unclutter the display or to view other open windows without closing the current window. In Windows, minimizing a window will create a button for it in the taskbar. In Mac OS X, an icon for the minimized window is added to the right size of the dock. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "minimize";
		}
	}
	return nullptr;
}

string _Computers::Terms::Modem(string text)
{
	string model = "llama3";
	string definition = "The hardware that allows computer to connect to the internet. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "modem";
		}
	}
	return nullptr;
}

string _Computers::Terms::Motherboard(string text)
{
	string model = "llama3";
	string definition = "The motherboard is a computer’s central communications backbone connectivity point, through which all components and external peripherals connect";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "motherboard";
		}
	}
	return nullptr;
}

string _Computers::Terms::Network(string text)
{
	string model = "llama3";
	string definition = "A collection of computers and other devices that are connected via an ethernet cable.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "network";
		}
	}
	return nullptr;
}

string _Computers::Terms::OperatingSystem(string text)
{
	string model = "llama3";
	string definition = "Most important software on the computer; controls the hardware and makes it possible to run other types of software.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "operating system";
		}
	}
	return nullptr;
}

string _Computers::Terms::Output(string text)
{
	string model = "llama3";
	string definition = "Data generated by a computer is referred to as output. This includes data produced at a software level, such as the result of a calculation, or at a physical level, such as a printed document. Output devices perform these tasks by sending information or instructions to a user or device.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "output";
		}
	}
	return nullptr;
}

string _Computers::Terms::OutputDevices(string text)
{
	string model = "llama3";
	string definition = "Data generated by a computer is referred to as output. This includes data produced at a software level, such as the result of a calculation, or at a physical level, such as a printed document. Output devices perform these tasks by sending information or instructions to a user or device.  ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "output device";
		}
	}
	return nullptr;
}

string _Computers::Terms::Password(string text)
{
	string model = "llama3";
	string definition = "A secret word or phrase used to access information stored on a computer or computer network.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "password";
		}
	}
	return nullptr;
}

string _Computers::Terms::Pointers(string text)
{
	string model = "llama3";
	string definition = "the symbols that appear on the computer screen that indicate your movement of the mouse. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "pointers";
		}
	}
	return nullptr;
}

string _Computers::Terms::PowerButton(string text)
{
	string model = "llama3";
	string definition = "Activates or Deactivates a particular device.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "power button";
		}
	}
	return nullptr;
}

string _Computers::Terms::RAM(string text)
{
	string model = "llama3";
	string definition = "Random access memory (RAM) is a type of data storage used in computers that is generally located on the motherboard. This type of memory is volatile and all information that was stored in RAM is lost when the computer is turned off. Volatile memory is temporary memory.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ram";
		}
	}
	return nullptr;
}

string _Computers::Terms::RightClick(string text)
{
	string model = "llama3";
	string definition = "To press and release the right button on the mouse. Usually pulls up shortcut menu options for the program upon which you've clicked.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "right click";
		}
	}
	return nullptr;
}

string _Computers::Terms::Router(string text)
{
	string model = "llama3";
	string definition = "A device that plugs into a cable or phone line and broadcasts the digital signal wirelessly. This device is what make WiFi possible.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "router";
		}
	}
	return nullptr;
}

string _Computers::Terms::Scroll(string text)
{
	string model = "llama3";
	string definition = "Control which portion of the document is visible in the window; available either horizontally or vertically or both. There are multiple ways (all depending on your device) to perform this function.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "scroll";
		}
	}
	return nullptr;
}

string _Computers::Terms::ScrollBar(string text)
{
	string model = "llama3";
	string definition = "A vertical bar on the right side of a window or a horizontal bar at the bottom of a window that is used to move the window contents up and down or left and right. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "scroll bar";
		}
	}
	return nullptr;
}

string _Computers::Terms::ScrollWheel(string text)
{
	string model = "llama3";
	string definition = "The center wheel/button on a mouse that performs a range of special page movement functions.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "scroll wheel";
		}
	}
	return nullptr;
}

string _Computers::Terms::SearchEngine(string text)
{
	string model = "llama3";
	string definition = "A tool for finding information on the Internet.  Examples are Google and Yahoo.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "search engine";
		}
	}
	return nullptr;
}

string _Computers::Terms::Select(string text)
{
	string model = "llama3";
	string definition = "To point to an object and then press and release the primary (left) mouse button. There are multiple ways (all depending on your device) to perform this function.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "select";
		}
	}
	return nullptr;
}

string _Computers::Terms::Software(string text)
{
	string model = "llama3";
	string definition = "The instructions that tell the computer what to do; the programs of the computer system.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "software";
		}
	}
	return nullptr;
}

string _Computers::Terms::Tabs(string text)
{
	string model = "llama3";
	string definition = "In a program, such as an Internet browser, a tab is one of several small, labeled, clickable, areas at the top of a window. Tabs allow you to switch between separate documents or web pages. Can be used within programs or browsers. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "tabs";
		}
	}
	return nullptr;
}

string _Computers::Terms::Taskbar(string text)
{
	string model = "llama3";
	string definition = "The taskbar is an element of an operating system located at the bottom of the screen in windows (called a Dock in Mac). It allows you to locate and launch programs through Start and the Start menu, or view any program that is currently open. ";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "taskbar";
		}
	}
	return nullptr;
}

string _Computers::Terms::Upload(string text)
{
	string model = "llama3";
	string definition = "To transfer (data or programs) from a peripheral computer or device to a central computer or website.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);
	
	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "upload";
		}
	}
	return nullptr;
}

string _Computers::Terms::USB(string text)
{
	string model = "llama3";
	string definition = "Universal serial bus, a standardized technology for attaching peripheral devices to a computer.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "usb";
		}
	}
	return nullptr;
}

string _Computers::Terms::Webpage(string text)
{
	string model = "llama3";
	string definition = "A document that lives on the World-Wide Web.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "webpage";
		}
	}
	return nullptr;
}

string _Computers::Terms::Website(string text)
{
	string model = "llama3";
	string definition = "A location connected to the Internet that maintains one or more pages on the World Wide Web.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "website";
		}
	}
	return nullptr;
}

string _Computers::Terms::WIFI(string text)
{
	string model = "llama3";
	string definition = "Technology that allows computers and other devices to communicate over a wireless signal.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "wifi";
		}
	}
	return nullptr;
}

string _Computers::Terms::Window(string text)
{
	string model = "llama3";
	string definition = "A box that appears on top of the desktop. It is the portal or way in which you interact with an app.";
	string prompt = "Check if the following text matches this computing definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "window";
		}
	}
	return nullptr;
}
