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
#include "Ball.hpp"
#include "Football.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _Football::Terms::Defense245(string text)
{
    string model = "llama3";
    string definition = "A type of nickel formation with two linemen (two defensive ends, DEs, or one DE and one defensive tackle, DT), four linebackers (two interior linebackers, ILBs, and two outer linebackers, OLBs), and five defensive backs (three cornerbacks, CBs, one free safety, FS, and one strong safety, SS). More common among teams with 3-4 base defenses than the 3-3-5, because all four starting linebackers remain on-field while the defensive linemen (the slowest players on the defense) come out. This maximizes versatility for the defense against three- and four-wide receiver, WR, offensive sets. a safety will often cover the fourth receiver, and a linebacker will cover the tight end or halfback, leaving three to patrol the middle of the field. The 2-4-5 is most often used against the two-minute offense, when substituting players may be difficult.";
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
            return "245 Defense";
        }
    }

    return nullptr;
}

string _Football::Terms::Defense335(string text)
{
    string model = "llama3";
    string definition = "In American football, the 3-3-5 defense is a defensive alignment consisting of three down linemen, three linebackers, and five defensive backs. The 3-3-5 defense can also be referred to as the 3-3 stack or the spread defense. It is one form of the nickel defense, a generic term for a formation with five defensive backs. Veteran college football defensive coordinator Joe Lee Dunn is widely credited with being the main innovator of the 3-3-5 scheme. This alignment is generally used when the defense is trying to confuse the offense by applying different blitz pressures on the offense while playing mostly zone or sometimes man coverage. This alignment is rarely seen in the NFL , but is used by many high schools to counterattack the spread offense scheme. Boise State, West Virginia, BYU, SDSU and Arizona have used this formation with success in college football. Michigan ran this formation during the 2010 season. TCU uses this as a variant formation; its base defense is a different nickel set, the 4-2-5. In 2017 Iowa State adopted this defense as a counter to the air raid offenses commonly encountered in the Big 12 Conference. Teams that run the 3-3-5 generally use it because they are a relatively fast but smaller unit compared to the opposing offense, and they want to cause blocking assignment issues for that offense. Also, a 3-3-5 can be adjusted to a 4-3, 3-4, or 4-4 defense with the same starting players. To effectively play the 3-3-5, the \"Front 8\" (i.e., the eight defensive players closest to the line of scrimmage) must be physical and tough. The three down lineman must be able to control the running lanes, execute an effective pass rush, and be able to keep the opposing offensive line occupied so that the linebackers can make plays. The two outside or \"Stud\" linebackers must be effective at pressuring the offensive line and reading and reacting to the play as it develops. The middle linebacker (also known as the \"Mike\" linebacker) must be able to effectively move in the direction the play is going (also known as \"flowing to the ball\") while also being able to shed blockers and make plays. The defensive secondary must be equally capable of pressuring the offensive lineman and dropping back into pass coverage. In the 3-3 stack version, the third safety (nicknamed the \"Aztec\" safety) must be a versatile athlete capable of dropping into coverage, pressuring the quarterback, or coming up in run support as a \"Mike\" linebacker would in a 3-4 alignment. The 3-3-5 defense is often called a \"bend but don\'t break\" defense in that it often gives up big yardage, particularly \"between the 20s\", but gels in their Red zone (gridiron football). This is best exemplified by the 2008 West Virginia Mountaineers football defensive statistics; on average the team gave up 328 yards per game, but lead the nation in red zone efficiency, allowing their opponents to only score 68% of the time. The 3-3-5 zone coverage is often vulnerable to short and medium pass routes over the middle, particularly in the \"hole\" and \"hook\" coverage zones.";
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
            return "Defense335";
        }
    }

    return nullptr;
}

string _Football::Terms::Defense34(string text)
{
    string model = "llama3";
    string definition = "In American football, the 3-4 defense is a common defensive alignment consisting of three down linemen and four linebackers. It is called a \"base defense\" because it will readily switch to other defensive alignments (such as a nickel defense or a dime defense) as circumstances change. Alternatively, some defenses use a 4-3 defense: four down linemen and three linebackers.";
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
            return "Defense34";
        }
    }

    return nullptr;
}

