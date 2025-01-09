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
#include "Awareness.hpp"
#include "Actions.hpp"
#include "Analysis.hpp"
#include "Argument.hpp"
#include "Bias.hpp"
#include "Computers.hpp"
#include "Database Functions.hpp"
#include "Directories.hpp"
#include "Drawing.hpp"
#include "Driving.hpp"
#include "Ethics.hpp"
#include "Executive Functions.hpp"
#include "Fallacy.hpp"
#include "Feel.hpp"
#include "Finance.hpp"
#include "Gaming.hpp"
#include "Goals.hpp"
#include "Heuristics.hpp"
#include "Keyboard.hpp"
#include "Kinesthetics.hpp"
#include "Large Language Models.hpp"
#include "Learning.hpp"
#include "Logic.hpp"
#include "Long-Term Memory.hpp"
#include "Mathematics.hpp"
#include "Mind.hpp"
#include "Mods.hpp"
#include "Morality.hpp"
#include "Mouse.hpp"
#include "Music.hpp"
#include "Needs.hpp"
#include "NetworkingClient.hpp"
#include "NetworkingServer.hpp"
#include "NeuraLink.hpp"
#include "NLP.hpp"
#include "NLU.hpp"
#include "Parsers.hpp"
#include "Pathfinding.hpp"
#include "Pattern Recognition.hpp"
#include "Prediction.hpp"
#include "Programming.hpp"
#include "QA.hpp"
#include "Qualitative Reasoning.hpp"
#include "Quantitative Reasoning.hpp"
#include "Reading.hpp"
#include "Reference.hpp"
#include "Scrapers.hpp"
#include "Server Functions.hpp"
#include "Settings.hpp"
#include "Short-Term Memory.hpp"
#include "Smart Phone.hpp"
#include "Smell.hpp"
#include "Social.hpp"
#include "Sound.hpp"
#include "Speech.hpp"
#include "Speech Recognition.hpp"
#include "Speech Commands.hpp"
#include "Sports.hpp"
#include "Stocks.hpp"
#include "Strategy.hpp"
#include "Tensorflow.hpp"
#include "Time.hpp"
#include "Translation.hpp"
#include "Typing.hpp"
#include "Utilities.hpp"
#include "Variables.hpp"
#include "Vision.hpp"
#include "Working-Memory.hpp"
#include "Writing.hpp"

using namespace std;

// Awareness To Do
// 1. Make a button for detecting an object by the camera
// 2. Make a button for loading items into working memory
// 3. Make a voice command for calling a function to detect objects
// 4. Make a voice command for calling items into working memory
// 5. Other buttons for other commands
// 6. Blink to refresh object detection and entire awareness interface
// 7. Computer Monitor recognition and use
// 8. Make aware of text with "Database Functions.hpp"
// 9. Make a Button for speaking?
// 10. Waterpolo funtion
// 11. Baseball function
// 12. Football function
// 13. Make a function for different languages?
void _Awareness::AwarenessInterface()
{
    if (speech_commands)
    {
        //thread sound_activation_keyword(_Awareness::getSoundActivationKeywords);

        //if (sound_activation_keyword.joinable())
        //    sound_activation_keyword.join();
        //else
        //    sound_activation_keyword.detach();
    }
    if (vision_commands)
    {
        thread vision_activation_commands(_Awareness::getVisionActivation);

        if (vision_activation_commands.joinable())
            vision_activation_commands.join();
        else
            vision_activation_commands.detach();
    }
    if (action_commands)
    {
        thread action_activation_commands(_Awareness::getActionDetectionActivation);

        if (action_activation_commands.joinable())
            action_activation_commands.join();
        else
            action_activation_commands.detach();
    }
    if (phone_commands)
    {
        thread phone_activation_commands(_Awareness::getPhoneActivation);

        if (phone_activation_commands.joinable())
            phone_activation_commands.join();
        else
            phone_activation_commands.detach();
    }
    if (visual_thinking)
    {
        // Print all nessasary information to the user
    }

    // Send output to the phone?
}

void _Awareness::AwarenessInterfaceComputers()
{
    if (speech_commands)
    {
        //thread sound_activation_keyword(_Awareness::getSoundActivationKeywords);

        //if (sound_activation_keyword.joinable())
        //    sound_activation_keyword.join();
        //else
        //    sound_activation_keyword.detach();
    }
    if (vision_commands)
    {
        thread vision_activation_commands(_Awareness::getVisionActivation);

        if (vision_activation_commands.joinable())
            vision_activation_commands.join();
        else
            vision_activation_commands.detach();
    }
    if (action_commands)
    {
        thread action_activation_commands(_Awareness::getActionDetectionActivation);

        if (action_activation_commands.joinable())
            action_activation_commands.join();
        else
            action_activation_commands.detach();
    }
    if (phone_commands)
    {
        thread phone_activation_commands(_Awareness::getPhoneActivation);

        if (phone_activation_commands.joinable())
            phone_activation_commands.join();
        else
            phone_activation_commands.detach();
    }
    if (visual_thinking)
    {
        // Print all nessasary information to the user
    }
}

void _Awareness::AwarenessInterfaceTyping()
{
    if (speech_commands)
    {
        //thread sound_activation_keyword(_Awareness::getSoundActivationKeywords);

        //if (sound_activation_keyword.joinable())
        //    sound_activation_keyword.join();
        //else
        //    sound_activation_keyword.detach();
    }
    if (vision_commands)
    {
        thread vision_activation_commands(_Awareness::getVisionActivation);

        if (vision_activation_commands.joinable())
            vision_activation_commands.join();
        else
            vision_activation_commands.detach();
    }
    if (action_commands)
    {
        thread action_activation_commands(_Awareness::getActionDetectionActivation);

        if (action_activation_commands.joinable())
            action_activation_commands.join();
        else
            action_activation_commands.detach();
    }
    if (phone_commands)
    {
        thread phone_activation_commands(_Awareness::getPhoneActivation);

        if (phone_activation_commands.joinable())
            phone_activation_commands.join();
        else
            phone_activation_commands.detach();
    }
    if (visual_thinking)
    {
        // Print all nessasary information to the user
    }
}

void _Awareness::AwarenessInterfaceDriving()
{
    if (speech_commands)
    {
        //thread sound_activation_keyword(_Awareness::getSoundActivationKeywords);

        //if (sound_activation_keyword.joinable())
        //    sound_activation_keyword.join();
        //else
        //    sound_activation_keyword.detach();
    }
    if (vision_commands)
    {
        thread vision_activation_commands(_Awareness::getVisionActivation);

        if (vision_activation_commands.joinable())
            vision_activation_commands.join();
        else
            vision_activation_commands.detach();
    }
    if (action_commands)
    {
        thread action_activation_commands(_Awareness::getActionDetectionActivation);

        if (action_activation_commands.joinable())
            action_activation_commands.join();
        else
            action_activation_commands.detach();
    }
    if (phone_commands)
    {
        thread phone_activation_commands(_Awareness::getPhoneActivation);

        if (phone_activation_commands.joinable())
            phone_activation_commands.join();
        else
            phone_activation_commands.detach();
    }
    if (visual_thinking)
    {
        // Print all nessasary information to the user
    }
}

void _Awareness::AwarenessInterfaceWriting()
{
    if (speech_commands)
    {
        //thread sound_activation_keyword(_Awareness::getSoundActivationKeywords);

        //if (sound_activation_keyword.joinable())
        //    sound_activation_keyword.join();
        //else
        //    sound_activation_keyword.detach();
    }
    if (vision_commands)
    {
        thread vision_activation_commands(_Awareness::getVisionActivation);

        if (vision_activation_commands.joinable())
            vision_activation_commands.join();
        else
            vision_activation_commands.detach();
    }
    if (action_commands)
    {
        thread action_activation_commands(_Awareness::getActionDetectionActivation);

        if (action_activation_commands.joinable())
            action_activation_commands.join();
        else
            action_activation_commands.detach();
    }
    if (phone_commands)
    {
        thread phone_activation_commands(_Awareness::getPhoneActivation);

        if (phone_activation_commands.joinable())
            phone_activation_commands.join();
        else
            phone_activation_commands.detach();
    }
    if (visual_thinking)
    {
        // Print all nessasary information to the user
    }
}

void _Awareness::AwarenessInterfaceGaming()
{
    if (speech_commands)
    {
        //thread sound_activation_keyword(_Awareness::getSoundActivationKeywords);

        //if (sound_activation_keyword.joinable())
        //    sound_activation_keyword.join();
        //else
        //    sound_activation_keyword.detach();
    }
    if (vision_commands)
    {
        thread vision_activation_commands(_Awareness::getVisionActivation);

        if (vision_activation_commands.joinable())
            vision_activation_commands.join();
        else
            vision_activation_commands.detach();
    }
    if (action_commands)
    {
        thread action_activation_commands(_Awareness::getActionDetectionActivation);

        if (action_activation_commands.joinable())
            action_activation_commands.join();
        else
            action_activation_commands.detach();
    }
    if (phone_commands)
    {
        thread phone_activation_commands(_Awareness::getPhoneActivation);

        if (phone_activation_commands.joinable())
            phone_activation_commands.join();
        else
            phone_activation_commands.detach();
    }
    if (visual_thinking)
    {
        // Print all nessasary information to the user
    }
}

void _Awareness::AwarenessInterfaceMathematics()
{
    if (speech_commands)
    {
        //thread sound_activation_keyword(_Awareness::getSoundActivationKeywords);

        //if (sound_activation_keyword.joinable())
        //    sound_activation_keyword.join();
        //else
        //    sound_activation_keyword.detach();
    }
    if (vision_commands)
    {
        thread vision_activation_commands(_Awareness::getVisionActivation);

        if (vision_activation_commands.joinable())
            vision_activation_commands.join();
        else
            vision_activation_commands.detach();
    }
    if (action_commands)
    {
        thread action_activation_commands(_Awareness::getActionDetectionActivation);

        if (action_activation_commands.joinable())
            action_activation_commands.join();
        else
            action_activation_commands.detach();
    }
    if (phone_commands)
    {
        thread phone_activation_commands(_Awareness::getPhoneActivation);

        if (phone_activation_commands.joinable())
            phone_activation_commands.join();
        else
            phone_activation_commands.detach();
    }
    if (visual_thinking)
    {
        // Print all nessasary information to the user
    }
}

void _Awareness::PrintToAwareness(string text)
{
    // Should be a driver for NeuralLink or another Brain Interface device :D
}

// The following function should print bounding boxes or a kind of awareness of detections
// 1. Get detected objects from wm_objects_text_camera1
// 2. Get detected objects from wm_objects_text_camera2
// 3. Create threads and track certain detections accross multiple images
void _Awareness::AwarenessBoundingBoxes(vector<vector<string>> coco_awareness)
{
    
}

void _Awareness::getVisionActivation()
{
    // This should be a menu of somekind
}

void _Awareness::getActionDetectionActivation()
{
    // When certain muscles are used, perform an action
}

void _Awareness::getPhoneActivation()
{
    // When a button is pressed on the smart phone, perform an action
}

void _Awareness::VisualThinking()
{
    // 
}