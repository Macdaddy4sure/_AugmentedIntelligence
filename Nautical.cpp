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
#include "Nautical.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Short-Term Memory.hpp"
#include "Working-Memory.hpp"
#include "Utilities.hpp"

using namespace std;

string _Nautical::Terms::AAW(string text)
{
    string model = "llama3";
    string definition = "An acronym for anti-aircraft warfare.";
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
            return "A A W";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Aback(string text)
{
    string model = "llama3";
    string definition = "(of a sail) Filled by the wind on the opposite side to the one normally used to move the vessel forward. On a square-rigged ship, any of the square sails can be braced round to be aback, the purpose of which may be to reduce speed (such as when a ship-of-the-line is keeping station with others), to heave to, or to assist moving the ship\'s head through the eye of the wind when tacking. A sudden shift in the wind can also cause a square-rigged vessel to be unintentionally \"caught aback\" with all sails aback. This is a dangerous situation that risks serious damage. In a fore-and-aft-rigged vessel, a headsail is backed either by hauling it across with the weather sheet or by tacking without releasing the sheet. It is used to heave to or to assist with tacking. See also back and fill.";
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
            return "Aback";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Abaft(string text)
{
    string model = "llama3";
    string definition = "Toward the stern, relative to some object (e.g. \"abaft the cockpit\").";
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
            return "Abaft";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AbaftTheBeam(string text)
{
    string model = "llama3";
    string definition = "Farther aft than the beam; a relative bearing of greater than 90 degrees from the bow; e.g. \"two points abaft the beam, starboard side\" would describe \"an object lying 22.5 degrees toward the rear of the ship, as measured clockwise from a perpendicular line from the right side, center, of the ship, toward the horizon\".";
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
            return "Abaft The Beam";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AbandonShip(string text)
{
    string model = "llama3";
    string definition = "An imperative to leave the vessel immediately, usually in the face of some imminent overwhelming danger. It is an order issued by the master or a delegated person in command, and must be a verbal order. It is usually the last resort after all other mitigating actions have failed or become impossible, when destruction or loss of the ship is imminent, and is customarily followed by a command to \"man the lifeboats\" or life rafts.";
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
            return "Abandon Ship";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Abeam(string text)
{
    string model = "llama3";
    string definition = "On the beam; a relative bearing at right angles to the ship\'s keel; e.g. describing an object located at a bearing of 90 degrees (starboard) or 270 degrees (port) as measured clockwise from the ship\'s bow.";
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
            return "Abeam";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AbleSeaman(string text)
{
    string model = "llama3";
    string definition = "An able seaman (AB) is a seaman and member of the deck department of a merchant ship with more than two years\' experience at sea and considered \"well acquainted with his duty\". An AB may work as a watchstander, a day worker, or a combination of these roles. Once a sufficient amount of sea time is acquired, then the AB can apply to take a series of courses/examinations to become certified as an officer.";
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
            return "Able Seaman";
        }
    }

    return nullptr;
}

string _Nautical::Terms::About(string text)
{
    string model = "llama3";
    string definition = "To change the course of a ship by tacking. \"Ready about\" is the order to prepare for tacking.";
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
            return "About";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AboveBoard(string text)
{
    string model = "llama3";
    string definition = "On or above the deck; in plain view; not hiding anything. Pirates would often hide their crews below decks, thereby creating the false impression that an encounter with another ship was a casual matter of chance rather than a planned assault.";
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
            return "Above Board";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AboveWaterHull(string text)
{
    string model = "llama3";
    string definition = "The section of a vessel\'s hull above the waterline; the visible part of a ship. See also topsides.";
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
            return "Above Water Hull";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AbsenteePennant(string text)
{
    string model = "llama3";
    string definition = "A special pennant flown to indicate the absence of a ship\'s commanding officer, admiral, chief-of-staff, or an officer whose flag is nonetheless flying (a division, squadron, or flotilla commander).";
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
            return "Absentee Pennant";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AbsoluteBearing(string text)
{
    string model = "llama3";
    string definition = "In nautical navigation the absolute bearing is the clockwise angle between north and an object observed from the vessel. If the north used as reference is the true geographical north then the bearing is a true bearing whereas if the reference used is magnetic north then the bearing is a magnetic bearing. An absolute bearing is measured with a bearing compass. The measurement of absolute bearings of fixed landmarks and other navigation aids is useful for the navigator because this information can be used on the nautical chart together with simple geometrical techniques to aid in determining the position of the vessel. A grid bearing (also known as grid azimuth) is measured in relation to the fixed horizontal reference plane of grid north, that is, using the direction northwards along the grid lines of the map projection as a reference point. A compass bearing, as in vehicle or marine navigation, is measured in relation to the magnetic compass of the navigator\'s vehicle or vessel (if aboard ship). It should be very close to the magnetic bearing. The difference between a magnetic bearing and a compass bearing is the deviation caused to the compass by ferrous metals and local magnetic fields generated by any variety of vehicle or shipboard sources (steel vehicle bodies/frames or vessel hulls, ignition systems, etc.)";
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
            return "Absolute Bearing";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AccommodationLadder(string text)
{
    string model = "llama3";
    string definition = "An accommodation ladder is a foldable flight of steps down a ship\'s side.Accommodation ladders can be mounted parallel or perpendicular to the ship\'s board. If the ladder is parallel to the ship, it has to have an upper platform. Upper platforms are mostly turnable. The lower platform (or the ladder itself) hangs on a bail and can be lifted as required. To prevent damage to boats going under the ladder as the water level rises and falls, a boat fender is fitted to the end of the ladder. The ladder has handrails on both sides for safety. Accommodation ladders are constructed in such a way that the steps are horizontal whatever the angle of inclination of the ladder. The lower end the ladder/lower platform is based on a roll to compensate for the motion of the ship in relation to the quay.";
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
            return "Accommodation Ladder";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BarracksShip(string text)
{
    string model = "llama3";
    string definition = "A barracks ship or barracks barge or berthing barge, or in civilian use accommodation vessel or accommodation ship, is a ship or a non-self-propelled barge containing a superstructure of a type suitable for use as a temporary barracks for sailors or other military personnel. A barracks ship, a military form of a dormitory ship, may also be used as a receiving unit for sailors who need temporary residence prior to being assigned to their ship. The United States Navy used to call them Yard Repair Berthing and Messing with designations YRBM and YRBM(L) and now classes them as either Auxiliary Personnel Barracks (APB) or Auxiliary Personnel Lighter (aka barge) (APL).";
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
            return "Barracks Ship";
        }
    }

    return nullptr;
}

string _Nautical::Terms::ActOfPardon(string text)
{
    string model = "llama3";
    string definition = "A letter from a state or power authorising action by a privateer. See also letter of marque.";
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
            return "Act Of Pardon";
        }
    }

    return nullptr;
}

string _Nautical::Terms::ActionStations(string text)
{
    string model = "llama3";
    string definition = "See battle stations.";
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
            return "Action Stations";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Admiral(string text)
{
    string model = "llama3";
    string definition = "Admiral is one of the highest ranks in some navies. In the Commonwealth nations and the United States, a \"full\" admiral is equivalent to a \"full\" general in the army or the air force. Admiral is ranked above vice admiral and below admiral of the fleet, or fleet admiral.";
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
            return "Admiral";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Admiralty(string text)
{
    string model = "llama3";
    string definition = "An Admiralty is a governmental and/or naval body responsible for the administration of a navy.";
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
            return "Admiralty";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AdmiraltyLaw(string text)
{
    string model = "llama3";
    string definition = "Admiralty law or maritime law is a body of law that governs nautical issues and private maritime disputes. Admiralty law consists of both domestic law on maritime activities, and private international law governing the relationships between private parties operating or using ocean-going ships. While each legal jurisdiction usually has its own legislation governing maritime matters, the international nature of the topic and the need for uniformity has, since 1900, led to considerable international maritime law developments, including numerous multilateral treaties. Admiralty law may be distinguished from the law of the sea, which is a body of public international law dealing with navigational rights, mineral rights, jurisdiction over coastal waters, and the maritime relationships between nations. The United Nations Convention on the Law of the Sea has been adopted by 167 countries and the European Union, and disputes are resolved at the ITLOS tribunal in Hamburg.";
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
            return "Admiralty Law";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Adrift(string text)
{
    string model = "llama3";
    string definition = "1. Afloat and unattached in any way to the shore or seabed, but not underway. When referring to a vessel, it implies that the vessel is not being or able to be controlled and therefore goes where the wind and current take her; a vessel in this condition may also be described as \"loose from her moorings\" or \"out of place\". 2. Any gear not fastened down or stored properly. 3. Any person or thing that is misplaced or missing. When applied to a member of the Navy or Marine Corps, such a person is said to be \"absent without leave\" (AWOL) or, in US Navy and US Marine Corps terminology, is guilty of an \"unauthorized absence\" (UA).";
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
            return "Adrift";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AdvanceNote(string text)
{
    string model = "llama3";
    string definition = "A note for one month\'s wages issued to a sailor on his signing a ship\'s articles.";
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
            return "Advance Note";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Adviso(string text)
{
    string model = "llama3";
    string definition = "See aviso.";
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
            return "Adviso";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Afloat(string text)
{
    string model = "llama3";
    string definition = "1.  (of a vessel) Floating freely (not aground or sunk). The term may also be used more generally of any floating object or person. 2.  In service, even if not currently underway, but not stranded, crewless, in repair, or under construction (e.g. \"the company has 10 ships afloat\").";
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
            return "Afloat";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Afore(string text)
{
    string model = "llama3";
    string definition = "1.  In, on, or toward the fore or front of a vessel. 2.  In front of a vessel.";
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
            return "Afore";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Aft(string text)
{
    string model = "llama3";
    string definition = "1.  Toward the stern or rear of a vessel. Contrast fore. 2.  The portion of a vessel behind the middle area of the vessel.";
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
            return "Aft";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Afterbrow(string text)
{
    string model = "llama3";
    string definition = "On larger ships, a secondary gangway rigged in the area aft of midship. On some military vessels, such as US naval vessels, enlisted personnel below E-7 board the ship at the afterbrow; officers and CPO/SCPO/MCPO board the ship at the brow.";
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
            return "Afterbrow";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Aftercastle(string text)
{
    string model = "llama3";
    string definition = "A stern structure behind the mizzenmast and above the transom on large sailing ships, much larger but less common than a forecastle. The aftercastle houses the captain\'s cabin and sometimes other cabins and is topped by the poop deck.";
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
            return "Aftercastle";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Afterdeck(string text)
{
    string model = "llama3";
    string definition = "The portion of the deck that is aft of amidships.";
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
            return "Afterdeck";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AfternoonWatch(string text)
{
    string model = "llama3";
    string definition = "The 1200-1600 watch.";
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
            return "Afternoon Watch";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Aground(string text)
{
    string model = "llama3";
    string definition = "Resting on or touching the ground or land, or the bottom of a body of water (either unintentionally or deliberately, such as in a drying harbour), as opposed to afloat.";
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
            return "Aground";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Ahead(string text)
{
    string model = "llama3";
    string definition = "Forward of the bow.";
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
            return "Ahead";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Ahoo(string text)
{
    string model = "llama3";
    string definition = "An adjective indicating an un-seamanlike state of disarray. Used to describe something awry, askew, or even round but out of true. E.g. \"What a sad lubberly display is that craft underway! They\'re still dragging their fenders in the surf, and their sails are all ahoo!\".";
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
            return "Ahoo";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Ahoy(string text)
{
    string model = "llama3";
    string definition = "A cry to draw attention. Used to hail a boat or a ship, e.g. \"boat ahoy\".";
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
            return "Ahoy";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Ahull(string text)
{
    string model = "llama3";
    string definition = "1.  Lying broadside to the sea. 2.  To ride out a storm with no sails and helm held to leeward.";
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
            return "Ahull";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AidToNavigation(string text)
{
    string model = "llama3";
    string definition = "A navigational aid (NAVAID), also known as aid to navigation (ATON), is any sort of signal, markers or guidance equipment which aids the traveler in navigation, usually nautical or aviation travel. Common types of such aids include lighthouses, buoys, fog signals, and day beacons.";
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
            return "Aid To Navigation";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AircraftCarrier(string text)
{
    string model = "llama3";
    string definition = "A warship designed with a primary mission of deploying and recovering aircraft while at sea, thereby acting as a seagoing airbase. Since 1918, the term generally has been limited to a warship with an extensive flight deck designed to operate conventional fixed-wing aircraft. In US Navy slang, also called a \"flat top\" or a \"bird farm\".";
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
            return "Aircraft Carrier";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AirDraught(string text)
{
    string model = "llama3";
    string definition = "maximum vertical extent of any part of the vessel above the water surface. Clearance required for passing under a bridge.";
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
            return "Air Draught";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Aka(string text)
{
    string model = "llama3";
    string definition = "Structural section of a vessel that joins together the hulls of a multihulled vessel.";
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
            return "Aka";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Alee(string text)
{
    string model = "llama3";
    string definition = "1.  On the lee side of a ship. 2.  To leeward.";
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
            return "Alee";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AllHands(string text)
{
    string model = "llama3";
    string definition = "A ship\'s entire company, including both officers and enlisted personnel.";
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
            return "All Hands";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AllNightIn(string text)
{
    string model = "llama3";
    string definition = "Having no night watches.";
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
            return "All Night In";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AllStanding(string text)
{
    string model = "llama3";
    string definition = "Bringing a person or thing up short; i.e. an unforeseen and sudden stop.";
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
            return "All Standing";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Allision(string text)
{
    string model = "llama3";
    string definition = "The impact of a moving vessel with a stationary object (not submerged), such as a bridge abutment or dolphin, pier or wharf, or another vessel made fast to a pier or wharf. More than incidental contact is required. The vessel is said to \"allide\" with the fixed object and is considered at fault. Contrast collision.";
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
            return "Allision";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Aloft(string text)
{
    string model = "llama3";
    string definition = "1.  In the rigging of a sailing ship. 2.  Above the ship\'s uppermost solid structure. 3.  Overhead or high above.";
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
            return "Aloft";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Alongside(string text)
{
    string model = "llama3";
    string definition = "By the side of a ship or pier.";
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
            return "Alongside";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Ama(string text)
{
    string model = "llama3";
    string definition = "A secondary hull or float attached to the primary hull of a vessel for stability, or the hulls of a modern catamaran.";
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
            return "Ama";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Amidships(string text)
{
    string model = "llama3";
    string definition = "1.  A position half way along the length of a ship or boat. 2.  A position half way between the port and starboard sides of a ship or boat, as in \"helm amidships\", when the rudder is in line with the keel.";
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
            return "Amidships";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AmmunitionShip(string text)
{
    string model = "llama3";
    string definition = "An ammunition ship is an auxiliary ship specially configured to carry ammunition, usually for naval ships and aircraft. An ammunition ship\'s cargo handling systems, designed with extreme safety in mind, include ammunition hoists with airlocks between decks, and mechanisms for flooding entire compartments with sea water in case of emergencies. Ammunition ships most often deliver their cargo to other ships using underway replenishment, using both connected replenishment and vertical replenishment. To a lesser extent, they transport ammunition from one shore-based weapons station to another.";
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
            return "Ammunition Ship";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AmphibiousWarfareShip(string text)
{
    string model = "llama3";
    string definition = "An amphibious warfare ship (or amphib) is an amphibious vehicle warship employed to land and support ground forces, such as marines, on enemy territory during an amphibious assault. Specialized shipping can be divided into two types, most crudely described as ships and craft. In general, the ships carry the troops from the port of embarkation to the drop point for the assault and the craft carry the troops from the ship to the shore. Amphibious assaults taking place over short distances can also involve the shore-to-shore technique, where landing craft go directly from the port of embarkation to the assault point. Some tank landing ships may also be able to land troops and equipment directly onto shore after travelling long distances, such as the Ivan Rogov-class landing ship.";
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
            return "Amphibious Warfare Ship";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Anchor(string text)
{
    string model = "llama3";
    string definition = "1.  Any object designed to prevent or slow the drift of a ship, attached to the ship by a line or chain; usually a metal, hook, or plough-like object designed to grip the solid seabed under the body of water. See also sea anchor. 2.  To deploy an anchor (e.g. \"she anchored offshore\").";
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
            return "Anchor";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AnchorBall(string text)
{
    string model = "llama3";
    string definition = "A round, black shape hoisted in the forepart of a vessel to show that it is anchored.";
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
            return "Anchor Ball";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AnchorBolster(string text)
{
    string model = "llama3";
    string definition = "A metal fabrication or casting on a vessel through which the anchor chain passes, and against which the anchor rests when fully housed. Also called bolster plate.";
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
            return "Anchor Bolster";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AnchorBuoy(string text)
{
    string model = "llama3";
    string definition = "A small buoy secured to a line attached to the crown of an anchor. The line allows the anchor to be unhooked from an obstruction, such as a rock or another vessel\'s anchor cable, so preventing raising the anchor in the normal way.";
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
            return "Anchor Buoy";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AnchorChain(string text)
{
    string model = "llama3";
    string definition = "A chain connecting a ship to an anchor.";
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
            return "Anchor Chain";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AnchorDetail(string text)
{
    string model = "llama3";
    string definition = "A group of men who handle ground tackle when the ship is anchoring or getting under way.";
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
            return "Anchor Detail";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AnchorHome(string text)
{
    string model = "llama3";
    string definition = "When the anchor is secured aboard the ship for sea; i.e. when it is not deployed. Typically rests just outside the hawsepipe on the outer side of the hull, at the bow of a vessel.";
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
            return "Anchor Home";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AnchorLight(string text)
{
    string model = "llama3";
    string definition = "A white light displayed by a ship to indicate that it is at anchor. Two such lights are displayed by a ship over 150 feet (46 m) in length.";
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
            return "Anchor Light";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AnchorRode(string text)
{
    string model = "llama3";
    string definition = "The anchor line, rope, or cable connecting the anchor chain to the vessel.";
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
            return "Anchor Rode";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AnchorSentinel(string text)
{
    string model = "llama3";
    string definition = "A separate weight on a separate line that is loosely attached to the anchor rode so that it can slide down it easily. It is made fast at a distance slightly longer than the draft of the boat. It is used to prevent the anchor rode from becoming fouled on the keel or other underwater structures when the boat is resting at anchor and moving randomly during slack tide.";
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
            return "Anchor Sentinel";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AnchorWatch(string text)
{
    string model = "llama3";
    string definition = "The crewmen assigned to take care of a ship while it is anchored or moored, and charged with such duties as making sure that the anchor is holding and the vessel is not drifting. Most marine GPS units have an anchor watch alarm capability.";
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
            return "Anchor Watch";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AnchorWinch(string text)
{
    string model = "llama3";
    string definition = "A horizontal capstan in the bow used for weighing anchor.";
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
            return "Anchor Winch";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Anchorage(string text)
{
    string model = "llama3";
    string definition = "Any place suitable for a ship to anchor, often an area of a port or harbor.";
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
            return "Anchorage";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AnchorsAweigh(string text)
{
    string model = "llama3";
    string definition = "Said of an anchor to indicate that it is just clear of the bottom and that the ship is therefore no longer anchored.";
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
            return "Anchors Aweigh";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Andrew(string text)
{
    string model = "llama3";
    string definition = "Traditional lower-deck slang term for the Royal Navy.";
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
            return "Andrew";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Anemometer(string text)
{
    string model = "llama3";
    string definition = "In meteorology, an anemometer (from Ancient Greek ??εµ?? (ánemos) \'wind\' and µ?τ??? (métron) \'measure\') is a device that measures wind speed and direction. It is a common instrument used in weather stations. The earliest known description of an anemometer was by Italian architect and author Leon Battista Alberti (1404-1472) in 1450.";
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
            return "Anemometer";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AneroidBarometer(string text)
{
    string model = "llama3";
    string definition = "An instrument used to measure air pressure, often with the aim of predicting changes in weather.";
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
            return "Aneroid Barometer";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AngleOnTheBow(string text)
{
    string model = "llama3";
    string definition = "A naval submariner\'s term for the angle between a target\'s course and the line of sight to the submarine. It is expressed as port or starboard, so never exceeds 180 degrees. This is one of the figures entered into the Torpedo Data Computer that makes all the calculations necessary for a torpedo attack on the target. Not to be confused with doubling the angle on the bow.";
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
            return "Angle On The Bow";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Answer(string text)
{
    string model = "llama3";
    string definition = "The expected response of a vessel to control mechanisms, such as a turn \"answering\" to the wheel and rudder. \"She won\'t answer\" might be the report from a helmsman when turning the wheel under a pilot\'s order fails to produce the expected change of direction.";
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
            return "Answer";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AntiRollingTanks(string text)
{
    string model = "llama3";
    string definition = "A pair of fluid-filled tanks mounted on opposite sides of a ship below the waterline. The tanks are cross-linked by piping or ducts to allow water to flow between them and at the top by vents or air pipes. The piping is sized so that as the fluid flows from side to side it damps the amount of roll.";
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
            return "Anti Rolling Tanks";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AntiSubmarineNet(string text)
{
    string model = "llama3";
    string definition = "An anti-submarine net or anti-submarine boom is a boom placed across the mouth of a harbour or a strait for protection against submarines. Net laying ships would be used to place and remove the nets. The US Navy used anti-submarine nets in the Pacific War to protect major US Naval Advance Bases. Some net cutter submarines were used in the war.";
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
            return "Anti Submarine Net";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Apeak(string text)
{
    string model = "llama3";
    string definition = "More or less vertical. Having the anchor rode or chain as nearly vertical as possible without freeing the anchor.";
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
            return "Apeak";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Aport(string text)
{
    string model = "llama3";
    string definition = "Toward the port side of a vessel.";
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
            return "Aport";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Apron(string text)
{
    string model = "llama3";
    string definition = "A piece of wood fitted to the after side of the stem post and the fore side of the sternpost of a clinker-built boat, where the planking is secured.";
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
            return "Apron";
        }
    }

    return nullptr;
}

string _Nautical::Terms::ApparentWind(string text)
{
    string model = "llama3";
    string definition = "The apparent wind is the wind experienced by an observer in motion and is the relative velocity of the wind in relation to the observer. The velocity of the apparent wind is the vector sum of the velocity of the headwind (which is the velocity a moving object would experience in still air) plus the velocity of the true wind. The headwind is the additive inverse of the object\'s velocity; therefore, the velocity of the apparent wind can also be defined as a vector sum of the velocity of the true wind minus the velocity of the object.";
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
            return "Apparent Wind";
        }
    }

    return nullptr;
}

string _Nautical::Terms::ArcOfVisibility(string text)
{
    string model = "llama3";
    string definition = "The portion of the horizon over which a lighted aid to navigation is visible from seaward.";
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
            return "Arc Of Visibility";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Archboard(string text)
{
    string model = "llama3";
    string definition = "A plank along the stern where the name of a ship is commonly painted.";
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
            return "Archboard";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Armament(string text)
{
    string model = "llama3";
    string definition = "A ship\'s complement of weapons";
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
            return "Armament";
        }
    }

    return nullptr;
}

string _Nautical::Terms::ArmorBelt(string text)
{
    string model = "llama3";
    string definition = "See belt armor.";
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
            return "Armor Belt";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Armory(string text)
{
    string model = "llama3";
    string definition = "Area on a warship for storage of small arms and ammunition.";
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
            return "Armory";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AsTheCrowFlies(string text)
{
    string model = "llama3";
    string definition = "As measured by a straight line between two points (which might cross land), in the way that a crow or other bird would be capable of traveling rather than a ship, which must go around land. See also great circle.";
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
            return "As The Crow Flies";
        }
    }

    return nullptr;
}

string _Nautical::Terms::ASDIC(string text)
{
    string model = "llama3";
    string definition = "Purportedly an acronym for Allied Submarine Devices Investigation Committee, and a type of SONAR used by the Allies for detecting submarines during the First and Second World Wars. The term has been generically applied to equipment for \"under-water supersonic echo-ranging equipment\" of submarines and other vessels.";
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
            return "ASDIC";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Ashore(string text)
{
    string model = "llama3";
    string definition = "1.  On the beach, shore, or land (as opposed to aboard or on board a vessel). 2.  Towards the shore. 3.  \"To run ashore\": to collide with the shore (as opposed to \"to run aground\", which is to strike a submerged feature such as a reef or sandbar).";
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
            return "Ashore";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AssemblyStation(string text)
{
    string model = "llama3";
    string definition = "See muster station.";
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
            return "Assembly Station";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Astarboard(string text)
{
    string model = "llama3";
    string definition = "Toward the starboard side of a vessel.";
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
            return "Astarboard";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Astern(string text)
{
    string model = "llama3";
    string definition = "1.  Toward the stern or rear of a vessel. 2.  Behind a vessel.";
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
            return "Astern";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AsternGear(string text)
{
    string model = "llama3";
    string definition = "The gear or gears that, when engaged with an engine or motor, result in backwards movement or force. Equivalent to reverse in a manual-transmission automobile.";
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
            return "Astern Gear";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AsylumHarbour(string text)
{
    string model = "llama3";
    string definition = "A harbour used to provide shelter from a storm. See harbor of refuge.";
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
            return "Asylum Harbour";
        }
    }

    return nullptr;
}

string _Nautical::Terms::ASW(string text)
{
    string model = "llama3";
    string definition = "An acronym for anti-submarine warfare.";
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
            return "A S W";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AtlanticBow(string text)
{
    string model = "llama3";
    string definition = "A raised bow with noticeable sheer and flare introduced in German warships in the late 1930s to improve seakeeping by keeping the forecastle drier and to allow easier operation of weapons.";
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
            return "Atlantic Bow";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Athwartships(string text)
{
    string model = "llama3";
    string definition = "At right angles to the fore and aft or centerline of a ship";
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
            return "Athwartships";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Auxiliary(string text)
{
    string model = "llama3";
    string definition = "1.  An engine installed on a sailing vessel to provide mechanical power when entering harbour or in light or contrary winds. 2.  A vessel in naval service but manned entirely or mostly by a civilian crew";
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
            return "Auxiliary";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AuxiliaryShip(string text)
{
    string model = "llama3";
    string definition = "A naval ship designed to operate in any number of roles supporting combatant ships and other naval operations, including a wide range of activities related to replenishment, transport, repair, harbor services and research.";
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
            return "Auxiliary Ship";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Avast(string text)
{
    string model = "llama3";
    string definition = "Stop, cease or desist from whatever is being done. From the Dutch hou\' vast (\"hold on\"), the imperative form of vasthouden (\"to hold on to\") or the Italian word basta. Compare Ya basta.";
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
            return "Avast";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Aviso(string text)
{
    string model = "llama3";
    string definition = "A kind of dispatch boat or advice boat, surviving particularly in the French Navy. They are considered equivalent to modern sloops.";
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
            return "Aviso";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Awash(string text)
{
    string model = "llama3";
    string definition = "So low in the water that the water is constantly washing across the surface.";
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
            return "Awash";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Aweigh(string text)
{
    string model = "llama3";
    string definition = "The position of an anchor that is just clear of making contact with the bottom.";
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
            return "Aweigh";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AxialFire(string text)
{
    string model = "llama3";
    string definition = "Fire oriented towards the ends of the ship; the opposite of broadside fire. In the Age of Sail, this was known as \"raking fire\".";
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
            return "Axial Fire";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AyeAye(string text)
{
    string model = "llama3";
    string definition = "A reply to an order or command to indicate that it, firstly, is heard; and, secondly, is understood and will be carried out (e.g. \"Aye, aye, sir\" to officers). Also the proper reply from a hailed boat, to indicate that an officer is on board.";
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
            return "Aye Aye";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AzimuthCircle(string text)
{
    string model = "llama3";
    string definition = "An instrument used to take the bearings of celestial objects.";
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
            return "Azimuth Circle";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AzimuthCompass(string text)
{
    string model = "llama3";
    string definition = "An instrument employed for ascertaining the position of the Sun with respect to magnetic north. The azimuth of an object is its bearing from the observer measured as an angle clockwise from true north.";
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
            return "Azimuth Compass";
        }
    }

    return nullptr;
}

string _Nautical::Terms::AzimuthThruster(string text)
{
    string model = "llama3";
    string definition = "A steerable drive leg fitted through the bottom of a hull, carrying a propeller. Compare stern drive and sail drive.";
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
            return "Azimuth Thruster";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BAndRRig(string text)
{
    string model = "llama3";
    string definition = "A style of standing rigging used on sailboats that lacks a backstay. The mast is said to be supported like a \"tripod\", with swept-back spreaders and a forestay. Used widely on Hunter brand sailboats, among others. Designed and named by Lars Bergstrom and Sven Ridder.";
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
            return "BAndR Rig";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Back(string text)
{
    string model = "llama3";
    string definition = "1.  To make a sail fill with wind on the opposite side normally used for sailing forward. A fore and aft headsail is backed by either not moving the sail across when tacking, or by hauling it to windward with the weather sheet. A square sail is backed by hauling the yards round with the braces. The sail is then aback. 2.  (With oars) to push against the water with the oar in the opposite direction than normally used for moving the boat forward. This is used to slow the speed of the boat, or to move astern when manoeuvring.";
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
            return "Back";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BackAndFill(string text)
{
    string model = "llama3";
    string definition = "A method of keeping a square-rigged vessel under control while drifting with the tide along a narrow channel. The ship lies broadside to the current, with the main topsail backed and the fore and mizzen topsail full: essentially a hove-to position. Selective backing and filling of these sails moves the ship ahead or astern, so allowing it to be kept in the best part of the channel. A jib and the spanker are used to help balance the sail plan. This method cannot be used if the wind is going in the same direction and at the same speed as the tide.";
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
            return "Back And Fill";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Backstay(string text)
{
    string model = "llama3";
    string definition = "A stay or cable, reaching from the mast heads, of the topmast, the topgallant-mast the royal-mast, the skysail-mast to the ship\'s side abaft the lower rigging; used to support the mast.";
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
            return "Backstay";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BackWash(string text)
{
    string model = "llama3";
    string definition = "Water forced astern by the action of the propeller. Also, the receding of waves.";
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
            return "Back Wash";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Baggywrinkle(string text)
{
    string model = "llama3";
    string definition = "A soft covering for standing rigging (such as shrouds and stays) that reduces sail chafing.";
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
            return "Baggywrinkle";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Bailer(string text)
{
    string model = "llama3";
    string definition = "Any device for removing water that has entered a vessel.";
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
            return "Bailer";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BailOut(string text)
{
    string model = "llama3";
    string definition = "Tacking away from other boats to obtain clear air. Often used for starting situations.";
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
            return "Bail Out";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Baldie(string text)
{
    string model = "llama3";
    string definition = "A type of Scottish sailboat introduced in 1860, used for fishing. A baldie is carvel-built, with her mast far forward and rigged with a lug sail and sometimes a jib. Some historians believe \"Baldie\" is a contraction of \"Garibaldi\", a reference to the Italian general and nationalist Giuseppe Garibaldi, whose name was a household word at the time the baldie was introduced.";
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
            return "Baldie";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BalanceRudder(string text)
{
    string model = "llama3";
    string definition = "Not usually a single rudder, but a set of three or four rudders operating together to maneuver a sternwheel steamboat. Placed just forward of the paddlewheels, the effectiveness of the balance rudder is increased by the flow of water generated by the paddles, giving such steamboats a high degree of maneuverability.";
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
            return "Balance Rudder";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BalancedRudder(string text)
{
    string model = "llama3";
    string definition = "A rudder with a significant amount of area ahead of the rorational axis, which moves the hydrodynamic centre of the rudder nearer to the rotation axis and reduces the torque required to steer.";
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
            return "Balanced Rudder";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Ballast(string text)
{
    string model = "llama3";
    string definition = "Heavy material that is placed in a position low in the hull to provide stability. It can be moveable material, such as gravel or stones, permanently or semi-permanently installed, or integral to the hull, such as the (typically) lead or cast-iron ballast keel of a sailing yacht. See also in ballast.";
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
            return "Ballast";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BallastTank(string text)
{
    string model = "llama3";
    string definition = "A compartment which can be filled or partly filled with water, used on ships, submarines and other submersibles to control buoyancy and stability.";
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
            return "Ballast Tank";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BaltimoreClipper(string text)
{
    string model = "llama3";
    string definition = "A fast sailing ship - an early form of clipper - built on the Mid-Atlantic seaboard of the United States, especially at Baltimore, Maryland. Popular as merchant ships in both the United States and the United Kingdom by the late 18th century, Baltimore Clippers usually were two-masted schooners or brigantines.";
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
            return "Baltimore Clipper";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BallsToFourWatch(string text)
{
    string model = "llama3";
    string definition = "US Navy slang for the 0000-0400 watch.";
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
            return "Balls To Four Watch";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Bank(string text)
{
    string model = "llama3";
    string definition = "A large area of elevated sea floor, deep enough to allow navigation.";
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
            return "Bank";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Banyan(string text)
{
    string model = "llama3";
    string definition = "A traditional Royal Navy term for a day or less of rest and relaxation.";
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
            return "Banyan";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Bar(string text)
{
    string model = "llama3";
    string definition = "Mass of sand or earth raised above the general seabed depth by the motion of water. Bars are often found at the mouth of rivers or entrances to harbours and can make navigation over them extremely dangerous at some states of tide and current flow, but can also confer tranquility in the inshore waters by acting as a barrier to large waves. See also touch and go and grounding.";
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
            return "Bar";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BarPilot(string text)
{
    string model = "llama3";
    string definition = "A navigator who guides a ship over dangerous sandbars at the mouths of rivers and bays.";
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
            return "Bar Pilot";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BarberHauler(string text)
{
    string model = "llama3";
    string definition = "A technique of temporarily rigging a sailboat lazy sheet so as to allow the boat to sail closer to the wind; i.e. using the lazy jib sheet to pull the jib closer to the mid line, allowing a point of sail that would otherwise not be achievable.";
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
            return "Barber Hauler";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Barbette(string text)
{
    string model = "llama3";
    string definition = "1.  A fixed armored enclosure protecting a ship\'s guns aboard warships without gun turrets, generally taking the form of a ring of armor over which guns mounted on an open-topped rotating turntable could fire, particularly on ships built during the second half of the 19th century. 2.  The inside fixed trunk of a warship\'s turreted gun-mounting, on which the turret revolves, containing the hoists for shells and cordite from the shell-room and magazine, particularly on ships built after the late 19th century.";
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
            return "Barbette";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BarcaLonga(string text)
{
    string model = "llama3";
    string definition = "A two- or three-masted lugger used for fishing on the coasts of Spain and Portugal and more widely in the Mediterranean Sea in the late 17th and 18th centuries.";
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
            return "Barca Longa";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BareboatCharter(string text)
{
    string model = "llama3";
    string definition = "An arrangement for the chartering or hiring of a vessel, whereby the vessel\'s owner provides no crew or provisions as part of the agreement; instead, the people who rent the vessel are responsible for crewing and provisioning her.";
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
            return "Bareboat Charter";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BarePoles(string text)
{
    string model = "llama3";
    string definition = "Sailing without any canvas raised, usually in a strong wind.";
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
            return "Bare Poles";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Barge(string text)
{
    string model = "llama3";
    string definition = "1.  A towed or self-propelled flat-bottomed boat, built mainly for river, canal or coastal transport of heavy goods. 2.  Admiral\'s barge: A boat (or aircraft) at the disposal of an admiral (or other high ranking flag officer) for his or her use as transportation between a larger vessel and the shore, or within a harbor. In Royal Navy service, the colour of the hull (or aircraft cheat-line) denotes the rank - green for Commanders-in-Chief and dark blue for other Flag Officers.";
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
            return "Barge";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BargeSlip(string text)
{
    string model = "llama3";
    string definition = "A specialized docking facility designed to receive a barge or car float that is used to carry wheeled vehicles across a body of water.";
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
            return "Barge Slip";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Bark(string text)
{
    string model = "llama3";
    string definition = "An alternate spelling of barque.";
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
            return "Bark";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Barkentine(string text)
{
    string model = "llama3";
    string definition = "An alternate spelling of barquentine.";
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
            return "Barkentine";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Barque(string text)
{
    string model = "llama3";
    string definition = "A sailing vessel of three or more masts, with all masts square-rigged except the sternmost, which is fore-and-aft-rigged.";
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
            return "Barque";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Barquentine(string text)
{
    string model = "llama3";
    string definition = "A sailing vessel with three or more masts, with all masts fore-and-aft-rigged except the foremast, which is square-rigged.";
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
            return "Barquentine";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BarrackShip(string text)
{
    string model = "llama3";
    string definition = "A ship or craft designed to function as a floating barracks for housing military personnel.";
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
            return "Barrack Ship";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Barratry(string text)
{
    string model = "llama3";
    string definition = "In admiralty law, an act of gross misconduct against a shipowner or a ship\'s demise charterer by a ship\'s master or crew that damages the ship or its cargo. Acts of barratry can include desertion, illegal scuttling, theft of the ship or cargo and committing any actions that may not be in the shipowner\'s or demise charterer\'s best interests.";
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
            return "Barratry";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Barometer(string text)
{
    string model = "llama3";
    string definition = "An instrument for measuring air pressure. Used in weather forecasting.";
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
            return "Barometer";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Barrelman(string text)
{
    string model = "llama3";
    string definition = "A sailor stationed in the crow\'s nest.";
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
            return "Barrelman";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Batten(string text)
{
    string model = "llama3";
    string definition = "1.  A stiff strip used to support the roach of a sail, increasing the sail area. 2.  Any thin strip of material (wood, plastic, etc.).";
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
            return "Batten";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BattenDownTheHatches(string text)
{
    string model = "llama3";
    string definition = "To prepare for inclement weather by securing the closed cargo hatch covers with wooden battens so as to prevent water from entering from any angle.";
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
            return "Batten Down The Hatches";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BattleStations(string text)
{
    string model = "llama3";
    string definition = "1. An announcement made aboard a naval warship to signal the crew to prepare for battle, imminent damage, or any other emergency (such as a fire). 2.  Specific positions in a naval warship to which one or more crew members are assigned when battle stations is called.";
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
            return "Battle Stations";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Battlecruiser(string text)
{
    string model = "llama3";
    string definition = "A type of large capital ship of the first half of the 20th century, similar in size, appearance, and cost to a battleship and typically armed with the same kind of heavy guns, but much more lightly armored (on the scale of a cruiser) and therefore faster than a battleship but more vulnerable to damage.";
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
            return "Battlecruiser";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Battleship(string text)
{
    string model = "llama3";
    string definition = "A type of large, heavily armored warship of the second half of the 19th century and first half of the 20th century, armed with heavy-caliber guns and designed to fight other battleships in a line of battle. It was the successor to the ship-of-the-line used during the Age of Sail.";
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
            return "Battleship";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Beach(string text)
{
    string model = "llama3";
    string definition = "A term used broadly to refer to land or the shore, and not necessarily literally to a beach. For example, a ship which turns toward the shore can be said to have turned toward the beach, and a person or object on land can be said to be on the beach. See also on the beach.";
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
            return "Beach";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Beaching(string text)
{
    string model = "llama3";
    string definition = "Deliberately running a vessel aground so as to load or unload it (as with landing craft), or sometimes to prevent a damaged vessel from sinking or to facilitate repairs below the waterline.";
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
            return "Beaching";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Beacon(string text)
{
    string model = "llama3";
    string definition = "A lighted or unlighted fixed aid to navigation attached directly to the Earth\'s surface. Examples include lighthouses and daybeacons.";
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
            return "Beacon";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Beakhead(string text)
{
    string model = "llama3";
    string definition = "1.  The ram on the prow of a fighting galley of ancient and medieval times. 2.  The protruding part of the foremost section of a sailing ship of the 16th to the 18th centuries, usually ornate, which was used as a working platform by sailors handling the sails of the bowsprit. It also housed the crew\'s heads (toilets).";
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
            return "Beakhead";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Beam(string text)
{
    string model = "llama3";
    string definition = "The width of a vessel at its widest point, or a point alongside the ship at the midpoint of its length.";
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
            return "Beam";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BeamEnds(string text)
{
    string model = "llama3";
    string definition = "The sides of a ship. To describe a ship as \"on her beam ends\" may mean the vessel is literally on her side and possibly about to capsize; more often, the phrase means the vessel is listing 45 degrees or more.";
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
            return "Beam Ends";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BeamReach(string text)
{
    string model = "llama3";
    string definition = "Sailing with the wind coming across the vessel\'s beam. This is normally the fastest point of sail for a fore-and-aft-rigged vessel.";
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
            return "Beam Reach";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BeamSea(string text)
{
    string model = "llama3";
    string definition = "A sea in which waves are moving perpendicular to a vessel\'s course.";
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
            return "Beam Sea";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BeamWind(string text)
{
    string model = "llama3";
    string definition = "A wind blowing perpendicular to a vessel\'s course.";
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
            return "Beam Wind";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Bear(string text)
{
    string model = "llama3";
    string definition = "A large, squared-off stone used with sand for scraping wooden decks clean.";
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
            return "Bear";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BearDown(string text)
{
    string model = "llama3";
    string definition = "To turn or steer a vessel away from the wind, often with reference to a transit.";
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
            return "Bear Down";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BearUp(string text)
{
    string model = "llama3";
    string definition = "To turn or steer a vessel into the wind.";
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
            return "Bear Up";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Bearing(string text)
{
    string model = "llama3";
    string definition = "The horizontal direction of a line of sight between two objects on the surface of the Earth. See also absolute bearing and relative bearing.";
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
            return "Bearing";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BeatToQuarters(string text)
{
    string model = "llama3";
    string definition = "Prepare for battle (in reference to beating a drum to signal the need for battle preparation).";
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
            return "Beat To Quarters";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Beting(string text)
{
    string model = "llama3";
    string definition = "Sailing as close as possible towards the wind (perhaps only about 60°) in a zig-zag course so as to attain an upwind direction into which it is otherwise impossible to sail directly. See also tacking.";
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
            return "Beting";
        }
    }

    return nullptr;
}

string _Nautical::Terms::BeaufortScale(string text)
{
    string model = "llama3";
    string definition = "A scale describing wind speed, devised by Admiral Sir Francis Beaufort in 1808, in which winds are graded by the effects of their force on the surface of the sea or on a vessel (originally, the amount of sail that a fully rigged frigate could carry).";
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
            return "Beaufort Scale";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Becalm(string text)
{
    string model = "llama3";
    string definition = "To cut off the wind from a sailing vessel, either by the proximity of land or by another vessel.";
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
            return "Becalm";
        }
    }

    return nullptr;
}

string _Nautical::Terms::Becalmed(string text)
{
    string model = "llama3";
    string definition = "Unable to move due to a lack of wind, said of a sailing vessel; resigned merely to drift with the current rather to move by controlled management of sails.";
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
            return "Becalmed";
        }
    }

    return nullptr;
}
