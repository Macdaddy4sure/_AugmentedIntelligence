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
#include "WaterPolo.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _WaterPolo::Terms::Meter2Defense(string text)
{
    string model = "llama3";
    string definition = "See hole D.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "2 Meter Defense";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Meter2Line(string text)
{
    string model = "llama3";
    string definition = "The line at each end of the pool crossing 2 meters in front of the goal, designated by a red mark on the edge of the pool. The edge of the playing area from the 2 meter mark to the goal line is a red line.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "2 Meter Line";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Meter2Offense(string text)
{
    string model = "llama3";
    string definition = "See center forward.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "2 Meter Offense";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Meter2Zone(string text)
{
    string model = "llama3";
    string definition = "The area between the 2 meter line and the goal line. No attacking player may be in this area without the ball.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "2 Meter Zone";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Offense33(string text)
{
    string model = "llama3";
    string definition = "A basic positional offense composed of two lines containing 3 players each: point and two drivers along the 5 meter line, and wings and center forward along the 2 meter line.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "3-3 Offense";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Offense42(string text)
{
    string model = "llama3";
    string definition = "Team on offense positions four players on the 2 meter line, and two players on 5 meter line. Commonly used in man up situations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "4-2 Offense";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::MeterLine5(string text)
{
    string model = "llama3";
    string definition = "The line at each end of the pool crossing 5 meters in front of the goal, designated by a yellow mark on the edge of the pool. The edge of the pool from the 5 meter mark to the 2 meter mark is a yellow line. A player may shoot at the goal from beyond this line without taking a free pass after an ordinary foul, if the shot is made with one continuous motion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Meter Line5";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Meter5Shot(string text)
{
    string model = "llama3";
    string definition = "A shot awarded when any foul is committed inside the five meter line and the offensive player had an opportunity to score, or a goal was prevented by the foul. The penalty shot is attempted from five meters with play stopped. Any defenders flanking the player taking the shot must be no closer than two meters. The goalkeeper must be on the goal line. The referee signals with a whistle and by lowering their arm, and the player taking the penalty shot must immediately throw the ball with an uninterrupted motion toward the goal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "5 Meter Shot";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Offense6On5(string text)
{
    string model = "llama3";
    string definition = "A team has one player more than its opponent, after a player of the opposing team is ejected for an exclusion foul.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Offense6 On5";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::AdvantageRule(string text)
{
    string model = "llama3";
    string definition = "The referee may refrain from calling a foul if it would give an advantage to the offending player\'s team.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Advantage Rule";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::CuttingTheAngle(string text)
{
    string model = "llama3";
    string definition = "The path that a defender must swim to cut off a fast breaking attacker.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cutting The Angle";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::GoalAngle(string text)
{
    string model = "llama3";
    string definition = "The triangle between the ball carrier and the two goal posts. The goalkeeper must play the angle, or position him/herself to best contest the shot.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Goal Angle";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Assist(string text)
{
    string model = "llama3";
    string definition = "A pass to a teammate that leads directly to scoring a goal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Assist";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Attacker(string text)
{
    string model = "llama3";
    string definition = "A field player on the team in possession of the ball";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Attacker";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::BackDoor(string text)
{
    string model = "llama3";
    string definition = "Offensive player on the weak side gets behind their defender and open for a quick shot.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Back Door";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Backhand(string text)
{
    string model = "llama3";
    string definition = "A pass or shot in which the ball carrier flips the ball directly behind him/her.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Backhand";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Ball(string text)
{
    string model = "llama3";
    string definition = "A water polo ball is usually a bright yellow color with a gripable surface, allowing it to be held with one hand despite its large size. The cover is a buffed rubberized fabric over a wound nylon fiber base with an inflatable bladder. Ball weight is 400-450 grams (14-16 ounces) and inflated to approximately 90 kPa (13 PSI) of pressure. Water polo balls come in two main sizes: size 5 (0.7 meters or 28 inches in circumference), intended for use by men, and size 4 (0.65 meters or 26.5 inches in circumference), intended for women.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ball";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::BallOut(string text)
{
    string model = "llama3";
    string definition = "The referee calls for the ball to be thrown to him/her during a timeout or dead time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ball Out";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::BallUnder(string text)
{
    string model = "llama3";
    string definition = "The player holding the ball, if it is forced under water as a result of contact with a defender, is charged with an ordinary foul, and loses possession.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ball Under";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Baulk(string text)
{
    string model = "llama3";
    string definition = "When using an outside water shot, the player gets in position to shoot and but stops halfway through, immobilizing or misdirecting the goalkeeper before releasing the ball.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Baulk";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::BatShot(string text)
{
    string model = "llama3";
    string definition = "Executed by scooping the ball with the non-dominant hand, loading the ball to the dominant hand, and propelling the ball forward. The off-hand sets itself up as a tee, as in golf or baseball, and the two hands also finish in the shape of a \"T\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bat Shot";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::BlueBall(string text)
{
    string model = "llama3";
    string definition = "Shouted to teammates when dark cap team has possession.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Blue Ball";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::BounceShot(string text)
{
    string model = "llama3";
    string definition = "An outside water shot executed by throwing the ball at an angle directly into the water. If done properly and with enough force, the ball will skip off the water into the goal, since the goalkeeper cannot easily anticipate the angle. Also called a bounce shot.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bounce Shot";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::BoxOut(string text)
{
    string model = "llama3";
    string definition = "As a shot or pass is taken, a player moves quickly in front of the opponent to prevent the opponent from recovering the pass or rebound.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Box Out";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Breakaway(string text)
{
    string model = "llama3";
    string definition = "The team recovering the ball, usually after an unexpected turnover, sprints to the opponent\'s goal to gain an advantage in numbers or position, and an easy goal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Breakaway";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Brutality(string text)
{
    string model = "llama3";
    string definition = "A violent foul with intention to harm. The fouling player is ejected from the game without substitution. The opponents are awarded a penalty shot, and the ejected player\'s team plays one man down for the next four minutes of game time. This type of foul is signaled by the referee by crossing the arms in the form of an X.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Brutality";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Bunny(string text)
{
    string model = "llama3";
    string definition = "A goal scored on a power shot close to the goalkeepers head.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bunny";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Caps(string text)
{
    string model = "llama3";
    string definition = "Visiting team field players wear numbered white caps, and home team field players wear dark caps. Both starting goalkeepers wear quartered red caps, numbered \"1\", substitute goalies caps are numbered either \"1-A\" in NCAA play or \"13\" for FINA international play. Caps are fitted with ear protectors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Caps";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::CenterForward(string text)
{
    string model = "llama3";
    string definition = "Offense player positioned at the 2 meter line in front of the opposing team\'s goal. Also called 2 meter offense or hole set.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Center Forward";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Check(string text)
{
    string model = "llama3";
    string definition = "To place a hand or forearm on an opponent\'s chest to hinder movement or maintain position. Also called chug.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Check";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::CherryPicking(string text)
{
    string model = "llama3";
    string definition = "A player stays on their offensive end of the pool when the rest of their team is defending, waiting for a turnover, often resulting in a long pass and uncontested goal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cherry Picking";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Commit(string text)
{
    string model = "llama3";
    string definition = "To make a move or take a position over other options, from which recovery is difficult.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Commit";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::CornerThrow(string text)
{
    string model = "llama3";
    string definition = "Free throw awarded to the attacking team when the ball is deflected over the goal line and out of the playing area by the goalkeeper (but NOT defending field player). An attacker puts the ball in play from the 2 meter mark at the edge of the pool.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Corner Throw";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Counter(string text)
{
    string model = "llama3";
    string definition = "Transition when the defensive team regains control of the ball, advances the ball and sets up offense in front of the opponent\'s goal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Counter";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::CoverBack(string text)
{
    string model = "llama3";
    string definition = "Call to defensive teammates to defend players between them and their goal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cover Back";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::CrashBack(string text)
{
    string model = "llama3";
    string definition = "All six defensive field players swim back rapidly to the center of their end as soon as the other team recovers possession, to counter the offensive counterattack.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Crash Back";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::DeadTime(string text)
{
    string model = "llama3";
    string definition = "The time between the whistle for a foul and the restarting of play and the clock. A foul during dead time results in a player ejection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dead Time";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Donut(string text)
{
    string model = "llama3";
    string definition = "A goal scored over the goalie\'s outstretched arms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Donut";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::DoublePost(string text)
{
    string model = "llama3";
    string definition = "Offense with two attackers on the 2 meter line in front of the opponent\'s goal. Also called double hole.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Double Post";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::DrawAFoul(string text)
{
    string model = "llama3";
    string definition = "Causing an opponent to receive a foul (or ejection).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Draw A Foul";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Dribbling(string text)
{
    string model = "llama3";
    string definition = "The technique of moving the ball while swimming forward, propelled ahead of the player with the wake created by alternating armstrokes. Since ball contact is minimal, this creates advantage for the ball carrier advancing the ball; their defender may not make contact unless the attacker is touching the ball.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dribbling";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Driver(string text)
{
    string model = "llama3";
    string definition = "A perimeter player in the 3-3 offense, positioned on either side of the point or center forward, who attempts to swim toward the goal to escape their defender, receive the ball and score.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Driver";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Drop(string text)
{
    string model = "llama3";
    string definition = "Defenders swim back to the center of the pool to block passes and shots by advancing attackers, while a defender presses the ball carrier to cause a hurried pass.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Drop";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::DryPass(string text)
{
    string model = "llama3";
    string definition = "A pass thrown and caught in one hand between players; the ball does not touch the water. This pass allows for optimal speed due to fluid motion between catching and throwing.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dry Pass";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::DumpingTheBall(string text)
{
    string model = "llama3";
    string definition = "An attacking player throws the ball into a far corner, away from the defenders, before the 30 seconds of possession expires for their team, to avoid a fast break opportunity for the opposing team.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dumping The Ball";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::EggBeater(string text)
{
    string model = "llama3";
    string definition = "A form of treading water, named because the circular movement of the legs resembles the motion of an egg-beater. This kick allows the player to maintain a constant position to the water level, and also by kicking faster for a brief period the player can get high out of the water for a block, pass, or shot.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Egg Beater";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Ejection(string text)
{
    string model = "llama3";
    string definition = "Exclusion or major foul: A referee signals a major foul by two short whistle bursts and indicates that the player must leave the field without impacting play and move to the penalty area for twenty seconds. Dunking (sinking in FINA rules), intentional splashing, or pulling an opponent back who does not have the ball, also interfering with a free throw or attempting to block a shot with two hands. Striking another player intentionally, misconduct or disrespect will also result in exclusion for the entire game.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ejection";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::EntryPass(string text)
{
    string model = "llama3";
    string definition = "Also called entering the ball, refers to the pass, most often a wet pass, into the center forward or 2-meter man. Most offenses focus on entering the ball early in the shot clock, and reacting if a foul or ejection is drawn.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Entry Pass";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::FaceOff(string text)
{
    string model = "llama3";
    string definition = "The referee restarts play by throwing the ball into the pool between two opposing players, giving each an equal opportunity to recover the ball (like a jump ball in basketball). A neutral throw results when players of each team commit a fouls at the same time, or if the referees disagree on which team committed a foul.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Face Off";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::FastBreak(string text)
{
    string model = "llama3";
    string definition = "The team recovering the ball, usually after an unexpected turnover, sprints to the opponent\'s goal to gain an advantage in numbers or position, and an easy goal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fast Break";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::FieldPlayer(string text)
{
    string model = "llama3";
    string definition = "One of a team\'s six players who swim up and down the field of play, excluding the goalkeeper.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Field Player";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Flat(string text)
{
    string model = "llama3";
    string definition = "An offensive player position, on either side of the point, about 5 to 8 meters out from the goal. See also driver.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Flat";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Fouls(string text)
{
    string model = "llama3";
    string definition = "Very common in water polo, both as a defensive strategy or because of holding (usually underwater) and rough play.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fouls";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::FreeThrow(string text)
{
    string model = "llama3";
    string definition = "After an ordinary foul, a player of the team retaining possession of the ball puts the ball in play without delay. The defender may not challenge the player in possession until the ball leaves their hand. After a foul, the player putting the ball in play may only make a direct shot on goal if he/she is beyond the 5 meter line and shoots with one continuous motion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Free Throw";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Front(string text)
{
    string model = "llama3";
    string definition = "Defensive tactic by the hole D when guarding the center forward close to the 2 meter line. The hole D moves between the center forward and the ball to cut off the passing lane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Front";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Gamed(string text)
{
    string model = "llama3";
    string definition = "A player is \"gamed\" who receives a third exclusion foul or is removed from play for misconduct and may not return for the remainder of the game. Often referred to as being \"wrapped\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gamed";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::GiveAndGo(string text)
{
    string model = "llama3";
    string definition = "Offensive move where player passes the ball and then drives toward the goal to receive a pass and attempt a shot.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Give And Go";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Goal(string text)
{
    string model = "llama3";
    string definition = "Refers to both the result of a score and the physical structure that defines where a score is achieved. A goal is scored after the ball passes completely over the goal line, between the goal posts and under the crossbar. The goal posts are 3 meters apart and the crossbar is 0.9 meters above the water surface.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Goal";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::GoalLine(string text)
{
    string model = "llama3";
    string definition = "The line at each end of the pool crossing the front of the goal, designated by a white mark on the edge of the pool. The playing area extends 0.3 meters behind the goal line, which must be at least 1.66 meters from the pool wall.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Goal Line";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::GoalJudge(string text)
{
    string model = "llama3";
    string definition = "Official positioned at each goal line who rules on entry of players, goal scoring, corner and penalty throws, and the start of play.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Goal Judge";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::GoalkeeperOrGoalie(string text)
{
    string model = "llama3";
    string definition = "The player for each team assigned to remain directly in front of the goal to prevent the opposite team from scoring. Within the five meter area in front of their goal, the goalkeeper may touch the ball with two hands, strike the ball with a clenched fist and touch the bottom of the pool (pool depth permitting). Unlike the field players, he/she cannot cross the half-distance line. Both goalkeepers wear quartered red caps, numbered \"1\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Goalkeeper Or Goalie";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::GoalThrow(string text)
{
    string model = "llama3";
    string definition = "A free pass by the defending goalkeeper from behind the 2 meter line to restart play, if anyone but the defending goalkeeper was last to touch the ball before it went out over the goal line.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Goal Throw";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Greenie(string text)
{
    string model = "llama3";
    string definition = "A quick shot taken by a perimeter player following a pass from the hole set.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Greenie";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::HalfDistanceLine(string text)
{
    string model = "llama3";
    string definition = "The midpoint of the pool or playing area, designated on the pool edge by a white mark. The ball is dropped here at the start of play. The edge of the playing area from the half-distance line to each 5 meter line is marked with a green line.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Half Distance Line";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Hole(string text)
{
    string model = "llama3";
    string definition = "Position directly in front of the goal, closest to the 2 meter line.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hole";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::HoleD(string text)
{
    string model = "llama3";
    string definition = "Defense player or position on the 2 meter line directly in front of the goal. This position is also called 2 meter defense or hole guard.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hole D";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::HoleSet(string text)
{
    string model = "llama3";
    string definition = "Offense player or position on the 2 meter line directly in front of the goal. This position is also called 2 meter offense or center forward.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hole Set";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Impede(string text)
{
    string model = "llama3";
    string definition = "Defensive guarding that prevents a player from moving; a foul if the impeded player does not have the ball.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Impede";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::InnerTubeWaterPolo(string text)
{
    string model = "llama3";
    string definition = "A version of water polo in which players are allowed to float in inner tubes to avoid treading water during the game, which requires superb conditioning. Usually played as an intramural sport on college campuses, often coed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inner Tube Water Polo";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::InsideWater(string text)
{
    string model = "llama3";
    string definition = "Best position for a defender: between the attacker he/she is guarding and the goal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inside Water";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::InsideWaterShot(string text)
{
    string model = "llama3";
    string definition = "The shooter swims toward the goal and unexpectedly flips the ball out of the water past the goalkeeper into the goal, timed with their swimming stroke. Examples are the pop shot and spring shot.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inside Water Shot";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Jam(string text)
{
    string model = "llama3";
    string definition = "Defenders crash back and occupy the center of the pool, forcing any fast break to the outside and toward the perimeter positions";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Jam";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Kickout(string text)
{
    string model = "llama3";
    string definition = "Exclusion or major foul: A referee signals a major foul by two short whistle bursts and indicates that the player must leave the field without impacting play and move to the penalty area for twenty seconds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kickout";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Lead(string text)
{
    string model = "llama3";
    string definition = "To throw a pass ahead of a teammate who is swimming.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lead";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::LoadingTheBall(string text)
{
    string model = "llama3";
    string definition = "To transfer the ball from one hand to the other immediately before a shot, often misdirecting the goalkeeper and increasing the speed and suddenness of the shot.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Loading The Ball";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::LobShot(string text)
{
    string model = "llama3";
    string definition = "An outside water shot thrown with a high arc, intended to pass over the goalie\'s hands and under the crossbar.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lob Shot";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::ManToMan(string text)
{
    string model = "llama3";
    string definition = "Defensive tactic where each attacker is guarded by a specific defender, regardless of their position on the field of play.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Man To Man";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::ManUp(string text)
{
    string model = "llama3";
    string definition = "A team has one player more than its opponent, after a player of the opposing team is ejected for an exclusion foul.:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Man Up";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Math(string text)
{
    string model = "llama3";
    string definition = "A tactical approach to winning games.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Math";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::NaturalGoal(string text)
{
    string model = "llama3";
    string definition = "A goal scored from play with both teams at full strength, i.e., not a man up or penalty throw.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Natural Goal";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::NeutralThrow(string text)
{
    string model = "llama3";
    string definition = "The referee restarts play by throwing the ball into the pool between two opposing players, giving each an equal opportunity to recover the ball (like a jump ball in basketball). A neutral throw results when players of each team commit a fouls at the same time, or if the referees disagree on which team committed a foul.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neutral Throw";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::NoSet(string text)
{
    string model = "llama3";
    string definition = "A call from the goalie or point to their offensive teammates to avoid passing the ball into the hole set because of close coverage by defenders. See setting the ball.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "No Set";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Open(string text)
{
    string model = "llama3";
    string definition = "When an offensive player is not guarded by a defender.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Open";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::OutletPass(string text)
{
    string model = "llama3";
    string definition = "During the counterattack, the goalkeeper looks to pass to an open teammate downfield who is fast breaking to the goal or setting up the offense.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Outlet Pass";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::OutsideWaterShot(string text)
{
    string model = "llama3";
    string definition = "The shooter holds the ball out of water before taking the shot at the goal, i.e.: power shot, lob shot or skip shot. Outside water shots require a player to stop swimming, and usually occur outside the 2 meter zone.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Outside Water Shot";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Overplay(string text)
{
    string model = "llama3";
    string definition = "A player commits too early and is caught out of position by an opponent\'s move.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Overplay";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Overtime(string text)
{
    string model = "llama3";
    string definition = "If the score is tied at the end of regulation play, two overtime periods of three minutes each are played. Overtime periods are common in tournament play due to the high level of skill of these superior teams";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Overtime";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Pass(string text)
{
    string model = "llama3";
    string definition = "A pass thrown and caught in one hand between players; the ball does not touch the water. This pass allows for optimal speed due to fluid motion between catching and throwing. A deliberate pass into the water, just out of reach of the intended teammate and their defender. The receiving player can then lunge towards the ball and out of the water to make a shot or pass.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pass";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::PassingLane(string text)
{
    string model = "llama3";
    string definition = "The path between the player with the ball and their teammate to whom he/she intends to pass.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Passing Lane";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Period(string text)
{
    string model = "llama3";
    string definition = "The game is divided into four periods; the length depends on the level of play: 6 minutes high school jr varsity. 7 minutes high school varsity. 8 minutes US college.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Period";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::PenaltyShootout(string text)
{
    string model = "llama3";
    string definition = "A tie breaker if the score is tied after two overtime periods. Five players and a goalkeeper are chosen by the coaches of each team. Players shoot from the 5-meter line alternately at either end of the pool in turn until all five have taken a shot. If the score is still tied, the same players shoot alternately until one team misses and the other scores, deciding the winner.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Penalty Shootout";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::PenaltyThrow(string text)
{
    string model = "llama3";
    string definition = "A shot awarded when any foul is committed inside the five meter line and the offensive player had an opportunity to score, or a goal was prevented by the foul. The penalty shot is attempted from five meters with play stopped. Any defenders flanking the player taking the shot must be no closer than two meters. The goalkeeper must be on the goal line. The referee signals with a whistle and by lowering their arm, and the player taking the penalty shot must immediately throw the ball with an uninterrupted motion toward the goal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Penalty Throw";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::PerimeterPlayer(string text)
{
    string model = "llama3";
    string definition = "The five offensive positions, other than the center forward, i.e.: wings, drivers and point. The perimeter players interchange their positions several times during a single offensive play.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Perimeter Player";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Point(string text)
{
    string model = "llama3";
    string definition = "Position on offense in the center of the line furthest from the goal. The point player\'s position provides opportunities to pass to teammates and communicate among the offense, like the point guard in basketball.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Point";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::PopShot(string text)
{
    string model = "llama3";
    string definition = "An inside water shot, executed by scooping the ball with the non-dominant hand, and \"popping\" the ball upward, as the player treads up out of the water to meet the ball at its highest point with their outstretched dominant hand and shoots at the goal. During the flight of the ball, from when it is \"Popped\" up until it reaches the shooting-hand, and contact from behind by a defender will result in a 5-meter penalty shot, and thus it is an effective tool when one has inside water.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pop Shot";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Possession(string text)
{
    string model = "llama3";
    string definition = "Undisputed control of the ball. The team with the ball has 30 seconds to take a shot until possession is given to the opposing team.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Possession";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::PowerPlay(string text)
{
    string model = "llama3";
    string definition = "A team has one player more than its opponent, after a player of the opposing team is ejected for an exclusion foul.:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Power Play";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::PowerShot(string text)
{
    string model = "llama3";
    string definition = "An outside water shot in which a player propels their body out of the water and uses their momentum to shoot the ball into the net.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Power Shot";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Press(string text)
{
    string model = "llama3";
    string definition = "Defensive pressure on the attacking team by closely defending each player man to man. See also lane press.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Press";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::PumpFake(string text)
{
    string model = "llama3";
    string definition = "When using an outside water shot, the player gets in position to shoot and but stops halfway through, immobilizing or misdirecting the goalkeeper before releasing the ball.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pump Fake";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Quarter(string text)
{
    string model = "llama3";
    string definition = "The game is divided into four periods; the length depends on the level of play:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quarter";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::RearBack(string text)
{
    string model = "llama3";
    string definition = "a move used by an attacking player to create space between him/herself and their defender in an attempt to become open for a pass and subsequently attempt a shot. The attacker begins to swim toward the opponents\' goal and abruptly stops and slides backward, awaiting a pass from a teammate, usually the center or 2-meter man.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rear Back";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Rebound(string text)
{
    string model = "llama3";
    string definition = "After an unsuccessful shot at the goal, the ball becomes free in the water, and can be recovered by the offense for another goal attempt or by the defense for a counterattack. A rebound after a shot on goal resets the 30 second possession clock.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rebound";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Red(string text)
{
    string model = "llama3";
    string definition = "Shouted to teammates when 10 seconds remain on the shot clock, or in cases where a different color (usually yellow) is used to signify 10 seconds, red can be used to warn teammates of only 5 seconds remaining on the shot clock.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Red";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::RedCard(string text)
{
    string model = "llama3";
    string definition = "Shown by a referee to signify that a coach, substitute, or bench personnel has been excluded for misconduct, and is required to leave the pool area immediately and cannot return to the game. See also yellow card.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Red Card";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::RedFlag(string text)
{
    string model = "llama3";
    string definition = "A red flag is used by officials at the scorer/timekeeper\'s table to signal when a player has received three exclusion fouls and must sit out the rest of the game.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Red Flag";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::ReentryArea(string text)
{
    string model = "llama3";
    string definition = "Area at each end of the pool near each team bench, designated by a red line, where players may enter and exit the playing area for substitution or exclusion penalties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reentry Area";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Referee(string text)
{
    string model = "llama3";
    string definition = "The two referees control the players, game play and the playing area throughout the match. Their decisions are final including rule infractions, fouls, scoring, possession of the ball and rulings of the timekeeper and goal judges. One referee stands on each side of the pool. The referee with the goal to their right when a team is on the attack is called the attacking or offensive referee. The other, the defensive referee, remains as far back as the attacking player who is furthest from the goal. When the other team regains the ball, their roles reverse as the ball moves to the other goal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Referee";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Release(string text)
{
    string model = "llama3";
    string definition = "To break free from a defender to receive a pass.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Release";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Rolled(string text)
{
    string model = "llama3";
    string definition = "the foul regarding a misconduct or game exclusion. This is because of the referee\'s circular arm motions signifying the player is done for the game.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rolled";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Save(string text)
{
    string model = "llama3";
    string definition = "Successful blocked shot by the goalkeeper. Also called a stop.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Save";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::SettingAScreen(string text)
{
    string model = "llama3";
    string definition = "An offense player is positioned to allow their teammate to swim by, while blocking or delaying their defender.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Setting A Screen";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::SettingTheBall(string text)
{
    string model = "llama3";
    string definition = "To pass the ball into the center forward, ideally just out of reach of their defender, allowing the center to lunge for the ball and sweep it into the goal with a backhand or power shot.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Setting The Ball";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::ShotClock(string text)
{
    string model = "llama3";
    string definition = "A clock at each corner of the pool deck counting down (from 30 seconds) the time remaining for a team to take a shot. Also known as the possession clock.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Shot Clock";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Sink(string text)
{
    string model = "llama3";
    string definition = "To push an opposing player under the water, an exclusion foul if the player is not holding the ball and is in a position of offensive advantage.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sink";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::SkipShot(string text)
{
    string model = "llama3";
    string definition = "An outside water shot executed by throwing the ball at an angle directly into the water. If done properly and with enough force, the ball will skip off the water into the goal, since the goalkeeper cannot easily anticipate the angle. Also called a bounce shot.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Skip Shot";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Slough(string text)
{
    string model = "llama3";
    string definition = "A defensive perimeter player intentionally causes an ordinary foul and then moves toward the goal, away from their attacker, who must take a free throw. This tactic allows the defense an opportunity to double-team the hole set and possibly steal the inbound pass. Also called foul and in or foul and drop.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Slough";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::SpringShot(string text)
{
    string model = "llama3";
    string definition = "An inside water shot executed by pushing the ball slightly into the water (but avoiding a ball under foul) and then allowing a sudden release, and a soft tap-in to beat the goalkeeper.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Spring Shot";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Sprint(string text)
{
    string model = "llama3";
    string definition = "At the start of each period, teams line up on their own goal line. At the referee\'s whistle, both teams swim to midpoint of the field, where the referee drops the ball. The first team to recover the ball begins their offense.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sprint";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Stalling(string text)
{
    string model = "llama3";
    string definition = "Failing to take a shot within 30 seconds or intentional delay in advancing the ball results in a turnover.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stalling";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Steal(string text)
{
    string model = "llama3";
    string definition = "A steal occurs when a defensive player or goalkeeper legally causes a turnover by their positive, aggressive action(s).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Steal";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::SwimOff(string text)
{
    string model = "llama3";
    string definition = "At the start of each period, teams line up on their own goal line. At the referee\'s whistle, both teams swim to midpoint of the field, where the referee drops the ball. The first team to recover the ball begins their offense.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Swim Off";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Switch(string text)
{
    string model = "llama3";
    string definition = "Players change defensive assignments to cover a teammate who has fallen behind an opponent, or to match up better with an offensive player in size or speed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Switch";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::TeeShot(string text)
{
    string model = "llama3";
    string definition = "Executed by scooping the ball with the non-dominant hand, loading the ball to the dominant hand, and propelling the ball forward. The off-hand sets itself up as a tee, as in golf or baseball, and the two hands also finish in the shape of a \"T\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tee Shot";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Timeout(string text)
{
    string model = "llama3";
    string definition = "Each team may call two 60 second timeouts in the four periods of regulation play, and one timeout if the game goes into overtime. During game play, only the team in possession of the ball may call a timeout.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Timeout";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Turn(string text)
{
    string model = "llama3";
    string definition = "An offensive move to get by an opponent using leverage or strength. The result is a 180 degree turn, where the defender is \"wheeled\" around, resulting in the attacking player possessing inside-water, or position towards the goal, with the defender trailing behind. This maneuver often results in the defender being forced to foul.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Turn";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Turnover(string text)
{
    string model = "llama3";
    string definition = "A team loses possession of the ball, which reverts to the opponent, as a result of a foul or possession for more than 30 seconds without a shot on goal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Turnover";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::UtilityPlayer(string text)
{
    string model = "llama3";
    string definition = "A player skilled at several offensive or defensive roles, often coming off the bench for substitutions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Utility Player";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::USAWaterPolo(string text)
{
    string model = "llama3";
    string definition = "The National Governing Body (NGB) for the sport of water polo in the United States.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "USA Water Polo";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::VCut(string text)
{
    string model = "llama3";
    string definition = "Offensive player cuts in and quickly out of the defender\'s area, pushing off of the defender to increase speed; making the letter \"V\" . Also called \"V-out\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "V Cut";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::WalkItIn(string text)
{
    string model = "llama3";
    string definition = "The attacker grips the ball in one hand and either eggbeaters or strokes in toward the goal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Walk It In";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::WeakSide(string text)
{
    string model = "llama3";
    string definition = "When an offensive player has possession of the ball on one side of the playing area (the strong side), the opposite side is called the weak side. Players will shout \"weak\" to notify a teammate with the ball that they are open on the other side of the pool.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Weak Side";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::WetPass(string text)
{
    string model = "llama3";
    string definition = "A deliberate pass into the water, just out of reach of the intended teammate and their defender. The receiving player can then lunge towards the ball and out of the water to make a shot or pass.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wet Pass";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::WhiteBall(string text)
{
    string model = "llama3";
    string definition = "Shouted to teammates when white cap team has possession.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "White Ball";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Wing(string text)
{
    string model = "llama3";
    string definition = "The position on offense on either side of the center forward, along the 2 meter line. Players at this position may set screens for the drivers, recover rebounds, and shift laterally or toward the half-distance line to spread out the defenders. More generally, the wing is a player or location to either side of the center of the playing area. To move toward the side of the pool to get open for a pass is to wing out.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wing";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::YellowCard(string text)
{
    string model = "llama3";
    string definition = "Shown by the referee to indicate that a coach, substitute, or bench personnel has been officially cautioned for misconduct, but may continue participating in the game. If a person receives a second yellow card caution, it has the effect of receiving a red card, and the individual must leave the playing area for the rest of the match. Players out of the water are not show a yellow card in Water Polo.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Yellow Card";
        }
    }

    return nullptr;
}

string _WaterPolo::Terms::Zone(string text)
{
    string model = "llama3";
    string definition = "Defensive arrangement in which players are assigned to defend an area, rather than a specific opponent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zone";
        }
    }

    return nullptr;
}
