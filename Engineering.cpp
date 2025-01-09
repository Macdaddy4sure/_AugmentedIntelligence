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
#include "Engineering.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

// https://en.wikipedia.org/wiki/Glossary_of_engineering
// https://en.wikipedia.org/wiki/Glossary_of_engineering:_M%E2%80%93Z

string _Engineering::Terms::AbsoluteElectrodePotential(string text)
{
    string model = "llama3";
    string definition = "is the electrode potential of a metal measured with respect to a universal reference system (without any additional metal–solution interface).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absolute Electrode Potential";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AbsolutePressure(string text)
{
    string model = "llama3";
    string definition = "is zero-referenced against a perfect vacuum, using an absolute scale, so it is equal to gauge pressure plus atmospheric pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absolute Pressure";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AbsoluteZero(string text)
{
    string model = "llama3";
    string definition = "The lower limit of the thermodynamic temperature scale, a state at which the enthalpy and entropy of a cooled ideal gas reach their minimum value, taken as 0. Absolute zero is the point at which the fundamental particles of nature have minimal vibrational motion, retaining only quantum mechanical, zero-point energy-induced particle motion. The theoretical temperature is determined by extrapolating the ideal gas law; by international agreement, absolute zero is taken as −273.15° on the Celsius scale which equals −459.67° on the Fahrenheit scale. The corresponding Kelvin and Rankine temperature scales set their zero points at absolute zero by definition. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absolute Zero";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Absorbance(string text)
{
    string model = "llama3";
    string definition = "Absorbance or decadic absorbance is the common logarithm of the ratio of incident to transmitted radiant power through a material, and spectral absorbance or spectral decadic absorbance is the common logarithm of the ratio of incident to transmitted spectral radiant power through a material.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absorbance";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ACPower(string text)
{
    string model = "llama3";
    string definition = "Electric power delivered by alternating current; common household power is AC.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AC Power";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Acceleration(string text)
{
    string model = "llama3";
    string definition = "The rate at which the velocity of a body changes with time, and the direction in which that change is acting.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acceleration";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Acid(string text)
{
    string model = "llama3";
    string definition = "A molecule or ion capable of donating a hydron (proton or hydrogen ion H+), or, alternatively, capable of forming a covalent bond with an electron pair (a Lewis acid).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acid";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AcidBaseReaction(string text)
{
    string model = "llama3";
    string definition = "A chemical reaction that occurs between an acid and a base, which can be used to determine pH.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AcidBase Reaction";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AcidStrength(string text)
{
    string model = "llama3";
    string definition = "In strong acids, most of the molecules give up a hydrogen ion and become ionized.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acid Strength";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Acoustics(string text)
{
    string model = "llama3";
    string definition = "The scientific study of sound.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acoustics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ActivatedSludge(string text)
{
    string model = "llama3";
    string definition = "A type of wastewater treatment process for treating sewage or industrial wastewaters using aeration and a biological floc composed of bacteria and protozoa.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Activated Sludge";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ActivatedSludgeModel(string text)
{
    string model = "llama3";
    string definition = "A generic name for a group of mathematical methods to model activated sludge systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Activated Sludge Model";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ActiveTransport(string text)
{
    string model = "llama3";
    string definition = "the movement of molecules across a membrane from a region of their lower concentration to a region of their higher concentration—against the concentration gradient. Active transport requires cellular energy to achieve this movement. There are two types of active transport: primary active transport that uses ATP, and secondary active transport that uses an electrochemical gradient. An example of active transport in human physiology is the uptake of glucose in the intestines.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Active Transport";
        }
    }

    return nullptr;

}

string _Engineering::Terms::Actuator(string text)
{
    string model = "llama3";
    string definition = "A device that accepts 2 inputs (control signal, energy source) and outputs kinetic energy in the form of physical movement (linear, rotary, or oscillatory). The control signal input specifies which motion should be taken. The energy source input is typically either an electric current, hydraulic pressure, or pneumatic pressure. An actuator can be the final element of a control loop";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Actuator";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AdenosineTriphosphate(string text)
{
    string model = "llama3";
    string definition = "A complex organic chemical that provides energy to drive many processes in living cells, e.g. muscle contraction, nerve impulse propagation, chemical synthesis. Found in all forms of life, ATP is often referred to as the molecular unit of currency of intracellular energy transfer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Adenosine Triphosphate";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Adhesion(string text)
{
    string model = "llama3";
    string definition = "The tendency of dissimilar particles or surfaces to cling to one another (cohesion refers to the tendency of similar or identical particles/surfaces to cling to one another).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Adhesion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AdiabaticProcess(string text)
{
    string model = "llama3";
    string definition = "A process where no heat energy is lost to outside space.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Adiabatic Process";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AdiabaticWall(string text)
{
    string model = "llama3";
    string definition = "A barrier through which heat energy cannot pass.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Adiabatic Wall";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AerobicDigestion(string text)
{
    string model = "llama3";
    string definition = "A process in sewage treatment designed to reduce the volume of sewage sludge and make it suitable for subsequent use.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aerobic Digestion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Aerodynamics(string text)
{
    string model = "llama3";
    string definition = "The study of the motion of air, particularly its interaction with a solid object, such as an airplane wing. It is a sub-field of fluid dynamics and gas dynamics, and many aspects of aerodynamics theory are common to these fields.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aerodynamics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AerospaceEngineering(string text)
{
    string model = "llama3";
    string definition = "is the primary field of engineering concerned with the development of aircraft and spacecraft. It has two major and overlapping branches: Aeronautical engineering and Astronautical Engineering. Avionics engineering is similar, but deals with the electronics side of aerospace engineering.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aerospace Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AfocalSystem(string text)
{
    string model = "llama3";
    string definition = "An optical system that produces no net convergence or divergence of the beam, i.e. has an infinite effective focal length.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Afocal System";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AgriculturalEngineering(string text)
{
    string model = "llama3";
    string definition = "The profession of designing machinery, processes, and systems for use in agriculture.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Agricultural Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Albedo(string text)
{
    string model = "llama3";
    string definition = "A measure of the fraction of light reflected from an astronomical body or other object.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Albedo";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Alkane(string text)
{
    string model = "llama3";
    string definition = "an acyclic saturated hydrocarbon. In other words, an alkane consists of hydrogen and carbon atoms arranged in a tree structure in which all the carbon–carbon bonds are single.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alkane";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Alkene(string text)
{
    string model = "llama3";
    string definition = "An unsaturated hydrocarbon that contains at least one carbon–carbon double bond.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alkene";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Alkyne(string text)
{
    string model = "llama3";
    string definition = "is an unsaturated hydrocarbon containing at least one carbon—carbon triple bond.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alkyne";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Alloy(string text)
{
    string model = "llama3";
    string definition = "is a combination of metals or of a metal and another element. Alloys are defined by a metallic bonding character.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alloy";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AlphaParticle(string text)
{
    string model = "llama3";
    string definition = "consist of two protons and two neutrons bound together into a particle identical to a helium-4 nucleus. They are generally produced in the process of alpha decay, but may also be produced in other ways. Alpha particles are named after the first letter in the Greek alphabet";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alpha Particle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AlternatingCurrent(string text)
{
    string model = "llama3";
    string definition = "Electrical current that regularly reverses direction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alternating Current";
        }
    }

    return nullptr;

}

string _Engineering::Terms::AlternativeHypothesis(string text)
{
    string model = "llama3";
    string definition = "the alternative hypothesis (or maintained hypothesis or research hypothesis) and the null hypothesis are the two rival hypotheses which are compared by a statistical hypothesis test. In the domain of science two rival hypotheses can be compared by explanatory power and predictive power.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alternative Hypothesis";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Ammeter(string text)
{
    string model = "llama3";
    string definition = "An instrument that measures current.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ammeter";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AminoAcids(string text)
{
    string model = "llama3";
    string definition = " organic compounds containing amine (–NH2) and carboxyl (–COOH) functional groups, along with a side chain (R group) specific to each amino acid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amino Acids";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AmorphousSolid(string text)
{
    string model = "llama3";
    string definition = "non-crystalline solid is a solid that lacks the long-range order that is characteristic of a crystal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amorphous Solid";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Ampre(string text)
{
    string model = "llama3";
    string definition = "The SI unit of current flow, one coulomb per second.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ampre";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Amphoterism(string text)
{
    string model = "llama3";
    string definition = "a molecule or ion that can react both as an acid as well as a base.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amphoterism";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Amplifier(string text)
{
    string model = "llama3";
    string definition = "A device that replicates a signal with increased power.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amplifier";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Amplitude(string text)
{
    string model = "llama3";
    string definition = "a measure of its change over a single period (such as time or spatial period). There are various definitions of amplitude, which are all functions of the magnitude of the difference between the variable's extreme values";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amplitude";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AnaerobicDigestion(string text)
{
    string model = "llama3";
    string definition = "a collection of processes by which microorganisms break down biodegradable material in the absence of oxygen.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anaerobic Digestion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AngularAcceleration(string text)
{
    string model = "llama3";
    string definition = "the rate of change of angular velocity. In three dimensions, it is a pseudovector. In SI units, it is measured in radians per second squared (rad/s2), and is usually denoted by the Greek letter alpha";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Angular Acceleration";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AngularMomentum(string text)
{
    string model = "llama3";
    string definition = "angular momentum (rarely, moment of momentum or rotational momentum) is the rotational equivalent of linear momentum. It is an important quantity in physics because it is a conserved quantity—the total angular momentum of a system remains constant unless acted on by an external torque.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Angular Momentum";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AngularVelocity(string text)
{
    string model = "llama3";
    string definition = "the angular velocity of a particle is the rate at which it rotates around a chosen center point: that is, the time rate of change of its angular displacement relative to the origin (i.e. in layman's terms: how quickly an object goes around something over a period of time - e.g. how fast the earth orbits the sun). It is measured in angle per unit time, radians per second in SI units, and is usually represented by the symbol omega";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Angular Velocity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Anion(string text)
{
    string model = "llama3";
    string definition = "is an ion with more electrons than protons, giving it a net negative charge (since electrons are negatively charged and protons are positively charged).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Annealing(string text)
{
    string model = "llama3";
    string definition = "A heat treatment process that relieves internal stresses.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Annealing";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Annihilation(string text)
{
    string model = "llama3";
    string definition = "the process that occurs when a subatomic particle collides with its respective antiparticle to produce other particles, such as an electron colliding with a positron to produce two photons. The total energy and momentum of the initial pair are conserved in the process and distributed among a set of other particles in the final state. Antiparticles have exactly opposite additive quantum numbers from particles, so the sums of all quantum numbers of such an original pair are zero. Hence, any set of particles may be produced whose total quantum numbers are also zero as long as conservation of energy and conservation of momentum are obeyed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Annihilation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Andode(string text)
{
    string model = "llama3";
    string definition = "The electrode at which current enters a device such as an electrochemical cell or vacuum tube.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Andode";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ANSI(string text)
{
    string model = "llama3";
    string definition = "American National Standards Institute is a private non-profit organization that oversees the development of voluntary consensus standards for products, services, processes, systems, and personnel in the United States. The organization also coordinates U.S. standards with international standards so that American products can be used worldwide.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ANSI";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AntiGravity(string text)
{
    string model = "llama3";
    string definition = "a theory of creating a place or object that is free from the force of gravity. It does not refer to the lack of weight under gravity experienced in free fall or orbit, or to balancing the force of gravity with some other force, such as electromagnetism or aerodynamic lift.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anti Gravity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AppliedEngineering(string text)
{
    string model = "llama3";
    string definition = "is the field concerned with the application of management, design, and technical skills for the design and integration of systems, the execution of new product designs, the improvement of manufacturing processes, and the management and direction of physical and/or technical functions of a firm or organization. Applied-engineering degreed programs typically include instruction in basic engineering principles, project management, industrial processes, production and operations management, systems integration and control, quality control, and statistics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Applied Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AppliedMathematics(string text)
{
    string model = "llama3";
    string definition = "Mathematics used for solutions of practical problems, as opposed to pure mathematics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Applied Mathematics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ArcLength(string text)
{
    string model = "llama3";
    string definition = "the distance between two points along a section of a curve. Determining the length of an irregular arc segment is also called rectification of a curve. The advent of infinitesimal calculus led to a general formula that provides closed-form solutions in some cases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arc Length";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ArchimedesPrinciple(string text)
{
    string model = "llama3";
    string definition = "states that the upward buoyant force that is exerted on a body immersed in a fluid, whether fully or partially submerged, is equal to the weight of the fluid that the body displaces and acts in the upward direction at the center of mass of the displaced fluid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Archimedes Principle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AreaMomentOfInertia(string text)
{
    string model = "llama3";
    string definition = "The 2nd moment of area, also known as moment of inertia of plane area, area moment of inertia, or second area moment, is a geometrical property of an area which reflects how its points are distributed with regard to an arbitrary axis. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Area Moment of Inertia";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ArithmeticMean(string text)
{
    string model = "llama3";
    string definition = "the arithmetic mean or simply the mean or average when the context is clear, is the sum of a collection of numbers divided by the number of numbers in the collection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arithmetic Mean";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ArithmeticProgression(string text)
{
    string model = "llama3";
    string definition = "a sequence of numbers such that the difference between the consecutive terms is constant. Difference here means the second minus the first.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arithmetic Progression";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AromaticHydrocarbon(string text)
{
    string model = "llama3";
    string definition = "a hydrocarbon with sigma bonds and delocalized pi electrons between carbon atoms forming a circle. In contrast, aliphatic hydrocarbons lack this delocalization. The term aromatic was assigned before the physical mechanism determining aromaticity was discovered; the term was coined as such simply because many of the compounds have a sweet or pleasant odour.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aromatic Hydrocarbon";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ArrheniusEquation(string text)
{
    string model = "llama3";
    string definition = "a formula for the temperature dependence of reaction rates.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arrhenius Equation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ArtificialIntelligence(string text)
{
    string model = "llama3";
    string definition = "is intelligence demonstrated by machines, unlike the natural intelligence displayed by humans and animals. Leading AI textbooks define the field as the study of intelligent agents: any device that perceives its environment and takes actions that maximize its chance of successfully achieving its goals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Artificial Intelligence";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AssemblyLanguage(string text)
{
    string model = "llama3";
    string definition = "A computer programming language where most statements correspond to one or a few machine op-codes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Assembly Language";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AtomicOrbital(string text)
{
    string model = "llama3";
    string definition = "a mathematical function that describes the wave-like behavior of either one electron or a pair of electrons in an atom. This function can be used to calculate the probability of finding any electron of an atom in any specific region around the atom's nucleus. The term atomic orbital may also refer to the physical region or space where the electron can be calculated to be present, as defined by the particular mathematical form of the orbital.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomic Orbital";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AtomicPackingFactor(string text)
{
    string model = "llama3";
    string definition = "The percentage of the volume filled with atomic mass in a crystal formation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomic Packing Factor";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AudioFrequency(string text)
{
    string model = "llama3";
    string definition = "a periodic vibration whose frequency is audible to the average human. The SI unit of audio frequency is the hertz (Hz). It is the property of sound that most determines pitch.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Audio Frequency";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Austenitization(string text)
{
    string model = "llama3";
    string definition = "to heat iron, iron-based metal, or steel to a temperature at which it changes crystal structure from ferrite to austenite. The more open structure of the austenite is then able to absorb carbon from the iron-carbides in carbon steel. An incomplete initial austenitization can leave undissolved carbides in the matrix. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Austenitization";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Automation(string text)
{
    string model = "llama3";
    string definition = "is the technology by which a process or procedure is performed with minimum human assistance. the use of various control systems for operating equipment such as machinery, processes in factories, boilers, and heat-treating ovens, switching on telephone networks, steering and stabilization of ships, aircraft and other applications and vehicles with minimal or reduced human intervention. Some processes have been completely automated.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Automation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AutonomousVehicle(string text)
{
    string model = "llama3";
    string definition = "A vehicle capable of driving from one point to another without input from a human operator.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Autonomous Vehicle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::AzimuthalQuantumNumber(string text)
{
    string model = "llama3";
    string definition = "a quantum number for an atomic orbital that determines its orbital angular momentum and describes the shape of the orbital. The azimuthal quantum number is the second of a set of quantum numbers which describe the unique quantum state of an electron (the others being the principal quantum number, following spectroscopic notation, the magnetic quantum number, and the spin quantum number).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Azimuthal Quantum Number";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Barometer(string text)
{
    string model = "llama3";
    string definition = "A device for measuring pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Engineering::Terms::Battery(string text)
{
    string model = "llama3";
    string definition = "Electrochemical cells that transform chemical energy into electricity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Battery";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Base(string text)
{
    string model = "llama3";
    string definition = "substances that, in aqueous solution, release hydroxide (OH−) ions, are slippery to the touch, can taste bitter if an alkali, change the color of indicators (e.g., turn red litmus paper blue), react with acids to form salts, promote certain chemical reactions (base catalysis), accept protons from any proton donor, and/or contain completely or partially displaceable OH− ions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Base";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Baud(string text)
{
    string model = "llama3";
    string definition = "Rate at which data is transferred in symbols/second; a symbol may represent one or more bits.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Baud";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Beam(string text)
{
    string model = "llama3";
    string definition = "A structural element whose length is significantly greater than its width or height.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Engineering::Terms::BeerLambertLaw(string text)
{
    string model = "llama3";
    string definition = "relates the attenuation of light to the properties of the material through which the light is travelling. The law is commonly applied to chemical analysis measurements and used in understanding attenuation in physical optics, for photons, neutrons, or rarefied gases. In mathematical physics, this law arises as a solution of the BGK equation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Beer Lambert Law";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Belt(string text)
{
    string model = "llama3";
    string definition = "A closed loop of flexible material used to transmit mechanical power from one pulley to another.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Belt";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BeltFriction(string text)
{
    string model = "llama3";
    string definition = "Describes the friction forces between a belt and a surface, such as a belt wrapped around a bollard. When one end of the belt is being pulled only part of this force is transmitted to the other end wrapped about a surface. The friction force increases with the amount of wrap about a surface and makes it so the tension in the belt can be different at both ends of the belt. Belt friction can be modeled by the Belt friction equation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Belt Friction";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Bending(string text)
{
    string model = "llama3";
    string definition = "characterizes the behavior of a slender structural element subjected to an external load applied perpendicularly to a longitudinal axis of the element. The structural element is assumed to be such that at least one of its dimensions is a small fraction, typically 1/10 or less, of the other two.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bending";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BendingMoment(string text)
{
    string model = "llama3";
    string definition = "the reaction induced in a structural element when an external force or moment is applied to the element, causing the element to bend.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bending Moment";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BenefitCostAnalysis(string text)
{
    string model = "llama3";
    string definition = "a systematic approach to estimating the strengths and weaknesses of alternatives (for example in transactions, activities, functional business requirements); it is used to determine options that provide the best approach to achieve benefits while preserving savings.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Benefit Cost Analysis";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BernoulliDifferentialEquation(string text)
{
    string model = "llama3";
    string definition = "a Bernoulli differential equation where n is any real number and != 0 and n != 1. It is named after Jacob Bernoulli who discussed it in 1695. Bernoulli equations are special because they are nonlinear differential equations with known exact solutions. A famous special case of the Bernoulli equation is the logistic differential equation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bernoulli Differential Equation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BerboullisEquation(string text)
{
    string model = "llama3";
    string definition = "An equation for relating several measurements within a fluid flow, such as velocity, pressure, and potential energy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Berboullis Equation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BernoullisPrinciple(string text)
{
    string model = "llama3";
    string definition = "an increase in the speed of a fluid occurs simultaneously with a decrease in pressure or a decrease in the fluid's potential energy. The principle is only applicable for isentropic flows: when the effects of irreversible processes (like turbulence) and non-adiabatic processes (e.g. heat radiation) are small and can be neglected.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bernoullis Principle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BetaParticle(string text)
{
    string model = "llama3";
    string definition = "a high-energy, high-speed electron or positron emitted by the radioactive decay of an atomic nucleus during the process of beta decay. There are two forms of beta decay.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Beta Particle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BinomialDistribution(string text)
{
    string model = "llama3";
    string definition = "is the discrete probability distribution of the number of successes in a sequence of n independent experiments, each asking a yes–no question, and each with its own boolean-valued outcome: a random variable containing a single bit of information: success/yes/true/one (with probability p) or failure/no/false/zero (with probability q=1 − p). A single success-failure experiment is also called a Bernoulli trial or Bernoulli experiment and a sequence of outcomes is called a Bernoulli process; for a single trial, i.e., n=1, the binomial distribution is a Bernoulli distribution. The binomial distribution is the basis for the popular binomial test of statistical significance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Binomial Distribution";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Biocatalysis(string text)
{
    string model = "llama3";
    string definition = "the use of living (biological) systems or their parts to speed up (catalyze) chemical reactions. In biocatalytic processes, natural catalysts, such as enzymes, perform chemical transformations on organic compounds. Both enzymes that have been more or less isolated and enzymes still residing inside living cells are employed for this task.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biocatalysis";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BiomedicalEngineering(string text)
{
    string model = "llama3";
    string definition = "the application of engineering principles and design concepts to medicine and biology for healthcare purposes (e.g. diagnostic or therapeutic). This field seeks to close the gap between engineering and medicine, combining the design and problem solving skills of engineering with medical biological sciences to advance health care treatment, including diagnosis, monitoring, and therapy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biomedical Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Biomimetic(string text)
{
    string model = "llama3";
    string definition = "the imitation of the models, systems, and elements of nature for the purpose of solving complex human problems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biomimetic";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Bionics(string text)
{
    string model = "llama3";
    string definition = "The application of biological methods to engineering systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bionics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Biophysics(string text)
{
    string model = "llama3";
    string definition = "an interdisciplinary science that applies approaches and methods traditionally used in physics to study biological phenomena. Biophysics covers all scales of biological organization, from molecular to organismic and populations. Biophysical research shares significant overlap with biochemistry, molecular biology, physical chemistry, physiology, nanotechnology, bioengineering, computational biology, biomechanics and systems biology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biophysics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BiotNumber(string text)
{
    string model = "llama3";
    string definition = "a dimensionless quantity used in heat transfer calculations. It is named after the eighteenth century French physicist Jean-Baptiste Biot (1774–1862), and gives a simple index of the ratio of the heat transfer resistances inside of and at the surface of a body. This ratio determines whether or not the temperatures inside a body will vary significantly in space, while the body heats or cools over time, from a thermal gradient applied to its surface.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biot Number";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BlockAndTackle(string text)
{
    string model = "llama3";
    string definition = "A system of pulleys and a rope threaded between them, used to lift or pull heavy loads.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Block And Tackle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BodyForce(string text)
{
    string model = "llama3";
    string definition = "a force that acts throughout the volume of a body. Forces due to gravity, electric fields and magnetic fields are examples of body forces. Body forces contrast with contact forces or surface forces which are exerted to the surface of an object.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Body Force";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Boiler(string text)
{
    string model = "llama3";
    string definition = "a closed vessel in which fluid (generally water) is heated. The fluid does not necessarily boil. The heated or vaporized fluid exits the boiler for use in various processes or heating applications, including water heating, central heating, boiler-based power generation, cooking, and sanitation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boiler";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BoilingPoint(string text)
{
    string model = "llama3";
    string definition = "the temperature at which the vapor pressure of a liquid equals the pressure surrounding the liquid and the liquid changes into a vapor.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boiling Point";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BoilingPointElevation(string text)
{
    string model = "llama3";
    string definition = "the phenomenon that the boiling point of a liquid (a solvent) will be higher when another compound is added, meaning that a solution has a higher boiling point than a pure solvent. This happens whenever a non-volatile solute, such as a salt, is added to a pure solvent, such as water. The boiling point can be measured accurately using an ebullioscope.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boiling Point Elevation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BoltzmannConstant(string text)
{
    string model = "llama3";
    string definition = "a physical constant relating the average kinetic energy of particles in a gas with the temperature of the gas and occurs in Planck's law of black-body radiation and in Boltzmann's entropy formula. It was introduced by Max Planck, but named after Ludwig Boltzmann.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boltzmann Constant";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Boson(string text)
{
    string model = "llama3";
    string definition = "a particle that follows Bose–Einstein statistics. Bosons make up one of the two classes of particles, the other being fermions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boson";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BoylesLaw(string text)
{
    string model = "llama3";
    string definition = "is an experimental gas law that describes how the pressure of a gas tends to increase as the volume of the container decreases. A modern statement of Boyle's law is: The absolute pressure exerted by a given mass of an ideal gas is inversely proportional to the volume it occupies if the temperature and amount of gas remain unchanged within a closed system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boyles Law";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BravaisLattice(string text)
{
    string model = "llama3";
    string definition = "an infinite array (or a finite array, if we consider the edges, obviously) of discrete points generated by a set of discrete translation operations described in three dimensional space by: R = n1ai + n2a2 + n3a3. where ni are any integers and ai are known as the primitive vectors which lie in different directions (not necessarily mutually perpendicular) and span the lattice. This discrete set of vectors must be closed under vector addition and subtraction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bravais Lattice";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BraytonCycle(string text)
{
    string model = "llama3";
    string definition = "A thermodynamic cycle model for an ideal heat engine, in which heat is added or removed at constant pressure; approximated by a gas turbine.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Brayton Cycle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BreakEven(string text)
{
    string model = "llama3";
    string definition = " the point at which total cost and total revenue are equal, i.e. even. There is no net loss or gain, and one has broken even , though opportunity costs have been paid and capital has received the risk-adjusted, expected return. In short, all costs that must be paid are paid, and there is neither profit nor loss.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Break Even";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BrewstersAngle(string text)
{
    string model = "llama3";
    string definition = "an angle of incidence at which light with a particular polarization is perfectly transmitted through a transparent dielectric surface, with no reflection. When unpolarized light is incident at this angle, the light that is reflected from the surface is therefore perfectly polarized. This special angle of incidence is named after the Scottish physicist Sir David Brewster (1781–1868).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Brewsters Angle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Brittleness(string text)
{
    string model = "llama3";
    string definition = "A material is brittle if, when subjected to stress, it breaks without significant plastic deformation. Brittle materials absorb relatively little energy prior to fracture, even those of high strength. Breaking is often accompanied by a snapping sound. Brittle materials include most ceramics and glasses (which do not deform plastically) and some polymers, such as PMMA and polystyrene.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Brittleness";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Bromide(string text)
{
    string model = "llama3";
    string definition = "Any chemical substance made up of bromine, along with other elements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bromide";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BronstedLowryAcidBaseTheory(string text)
{
    string model = "llama3";
    string definition = "The fundamental concept of this theory is that when an acid and a base react with each other, the acid forms its conjugate base, and the base forms its conjugate acid by exchange of a proton (the hydrogen cation, or H+). This theory is a generalization of the Arrhenius theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bronsted Lowry Acid Base Theory";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BrownianMotion(string text)
{
    string model = "llama3";
    string definition = "the random motion of particles suspended in a fluid (a liquid or a gas) resulting from their collision with the fast-moving molecules in the fluid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Brownian Motion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BuckinghamTheorem(string text)
{
    string model = "llama3";
    string definition = "A method for determining Π groups, or dimensionless descriptors of physical phenomena.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Buckingham Theorem";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BufferSolution(string text)
{
    string model = "llama3";
    string definition = "an aqueous solution consisting of a mixture of a weak acid and its conjugate base, or vice versa. Its pH changes very little when a small amount of strong acid or base is added to it. Buffer solutions are used as a means of keeping pH at a nearly constant value in a wide variety of chemical applications. In nature, there are many systems that use buffering for pH regulation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Buffer Solution";
        }
    }

    return nullptr;
}

string _Engineering::Terms::BulkModulus(string text)
{
    string model = "llama3";
    string definition = "a measure of how resistant to compression that substance is. It is defined as the ratio of the infinitesimal pressure increase to the resulting relative decrease of the volume. Other moduli describe the material's response (strain) to other kinds of stress: the shear modulus describes the response to shear, and Young's modulus describes the response to linear stress. For a fluid, only the bulk modulus is meaningful. For a complex anisotropic solid such as wood or paper, these three moduli do not contain enough information to describe its behaviour, and one must use the full generalized Hooke's law.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bulk Modulus";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Buoyancy(string text)
{
    string model = "llama3";
    string definition = "A force caused by displacement in a fluid by an object of different density than the fluid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Buoyancy";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Calculus(string text)
{
    string model = "llama3";
    string definition = "The mathematics of change.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Calculus";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Capacitance(string text)
{
    string model = "llama3";
    string definition = "The ability of a body to store electrical charge.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Capacitance";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CapacitiveReactance(string text)
{
    string model = "llama3";
    string definition = "The impedance of a capacitor in an alternating current circuit, the opposition to current flow.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Capacitive Reactance";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Capacitor(string text)
{
    string model = "llama3";
    string definition = "An electrical component that stores energy in an electric field.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Capacitor";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CapilliaryAction(string text)
{
    string model = "llama3";
    string definition = "the ability of a liquid to flow in narrow spaces without the assistance of, or even in opposition to, external forces like gravity. The effect can be seen in the drawing up of liquids between the hairs of a paintbrush, in a thin tube, in porous materials such as paper and plaster, in some non-porous materials such as sand and liquefied carbon fiber, or in a cell. It occurs because of intermolecular forces between the liquid and surrounding solid surfaces. If the diameter of the tube is sufficiently small, then the combination of surface tension (which is caused by cohesion within the liquid) and adhesive forces between the liquid and container wall act to propel the liquid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Capilliary Action";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Carbonate(string text)
{
    string model = "llama3";
    string definition = "Any mineral with bound carbon dioxide.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Carbonate";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CarnotCycle(string text)
{
    string model = "llama3";
    string definition = "A hypothetical thermodynamic cycle for a heat engine; no thermodynamic cycle can be more efficient than a Carnot cycle operating between the same two temperature limits.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Carnot Cycle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CartesianCoordinates(string text)
{
    string model = "llama3";
    string definition = "Coordinates within a rectangular Cartesian plane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cartesian Coordinates";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CastiglianosMethod(string text)
{
    string model = "llama3";
    string definition = "a method for determining the displacements of a linear-elastic system based on the partial derivatives of the energy. He is known for his two theorems. The basic concept is that a change in energy is equal to the causing force times the resulting displacement. Therefore, the causing force is equal to the change in energy divided by the resulting displacement. Alternatively, the resulting displacement is equal to the change in energy divided by the causing force. Partial derivatives are needed to relate causing forces and resulting displacements to the change in energy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Castiglianos Method";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Casting(string text)
{
    string model = "llama3";
    string definition = "Forming of an object by pouring molten metal (or other substances) into a mold.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Casting";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Cathode(string text)
{
    string model = "llama3";
    string definition = "The terminal of a device by which current exits.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cathode";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CathodeRay(string text)
{
    string model = "llama3";
    string definition = "The stream of electrons emitted from a heated negative electrode and attracted to a positive electrode.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cathode Ray";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CellMembrane(string text)
{
    string model = "llama3";
    string definition = "a biological membrane that separates the interior of all cells from the outside environment (the extracellular space) which protects the cell from its environment consisting of a lipid bilayer with embedded proteins.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cell Membrane";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CellNucleus(string text)
{
    string model = "llama3";
    string definition = "a membrane-enclosed organelle found in eukaryotic cells. Eukaryotes usually have a single nucleus, but a few cell types, such as mammalian red blood cells, have no nuclei, and a few others including osteoclasts have many.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cell Nucleus";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CellTheory(string text)
{
    string model = "llama3";
    string definition = "the historic scientific theory, now universally accepted, that living organisms are made up of cells, that they are the basic structural/organizational unit of all organisms, and that all cells come from pre-existing cells. Cells are the basic unit of structure in all organisms and also the basic unit of reproduction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cell Theory";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CenterOfCravity(string text)
{
    string model = "llama3";
    string definition = "The center of mass of an object, its balance point.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Center Of Cravity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CenterOfMass(string text)
{
    string model = "llama3";
    string definition = "The weighted center of an object; a force applied through the center of mass will not cause rotation of the object.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Center Of Mass";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CenterOfPressure(string text)
{
    string model = "llama3";
    string definition = "is the point where the total sum of a pressure field acts on a body, causing a force to act through that point. The total force vector acting at the center of pressure is the value of the integrated vectorial pressure field. The resultant force and center of pressure location produce equivalent force and moment on the body as the original pressure field.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Center Of Pressure";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CentralForceMotion(string text)
{
    string model = "llama3";
    string definition = "is to determine the motion of a particle in a single central potential field. A central force is a force (possibly negative) that points from the particle directly towards a fixed point in space, the center, and whose magnitude only depends on the distance of the object to the center. In a few important cases, the problem can be solved analytically, i.e., in terms of well-studied functions such as trigonometric functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Central Force Motion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CentralLimitTheorem(string text)
{
    string model = "llama3";
    string definition = "central limit theorem (CLT) establishes that, in some situations, when independent random variables are added, their properly normalized sum tends toward a normal distribution (informally a bell curve) even if the original variables themselves are not normally distributed. The theorem is a key concept in probability theory because it implies that probabilistic and statistical methods that work for normal distributions can be applicable to many problems involving other types of distributions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Central Limit Theorem";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CentralProcessingUnit(string text)
{
    string model = "llama3";
    string definition = "the electronic circuitry within a computer that carries out the instructions of a computer program by performing the basic arithmetic, logic, controlling and input/output (I/O) operations specified by the instructions. The computer industry has used the term central processing unit at least since the early 1960s.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Central Processing Unit";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CentripetalAcceleration(string text)
{
    string model = "llama3";
    string definition = "";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Centripetal Acceleration";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CentripetalForce(string text)
{
    string model = "llama3";
    string definition = " a force that makes a body follow a curved path. The direction of the centripetal force is always orthogonal to the motion of the body and towards the fixed point of the instantaneous center of curvature of the path. Isaac Newton described it as a force by which bodies are drawn or impelled, or in any way tend, towards a point as to a centre. In Newtonian mechanics, gravity provides the centripetal force causing astronomical orbits.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Centripetal Force";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Centroid(string text)
{
    string model = "llama3";
    string definition = "also known as geometric center or center of figure, of a plane figure or solid figure is the arithmetic mean position of all the points in the surface of the figure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Centroid";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Centrosome(string text)
{
    string model = "llama3";
    string definition = "an organelle that serves as the main microtubule organizing center (MTOC) of the animal cell as well as a regulator of cell-cycle progression. The centrosome is thought to have evolved only in the metazoan lineage of eukaryotic cells. Fungi and plants lack centrosomes and therefore use structures other than MTOCs to organize their microtubules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Centrosome";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ChainReaction(string text)
{
    string model = "llama3";
    string definition = "a sequence of reactions where a reactive product or by-product causes additional reactions to take place. In a chain reaction, positive feedback leads to a self-amplifying chain of events.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chain Reaction";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ChangeOfBaseRule(string text)
{
    string model = "llama3";
    string definition = "";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Change Of Base Rule";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CharlesLaw(string text)
{
    string model = "llama3";
    string definition = "an experimental gas law that describes how gases tend to expand when heated. A modern statement of Charles's law is: When the pressure on a sample of a dry gas is held constant, the Kelvin temperature and the volume will be in direct proportion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Charles Law";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ChemicalBond(string text)
{
    string model = "llama3";
    string definition = "a lasting attraction between atoms, ions or molecules that enables the formation of chemical compounds. The bond may result from the electrostatic force of attraction between oppositely charged ions as in ionic bonds or through the sharing of electrons as in covalent bonds. The strength of chemical bonds varies considerably; there are strong bonds or primary bonds such as covalent, ionic and metallic bonds, and weak bonds or secondary bonds such as dipole–dipole interactions, the London dispersion force and hydrogen bonding.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemical Bond";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ChemicalCompound(string text)
{
    string model = "llama3";
    string definition = "a chemical substance composed of many identical molecules (or molecular entities) composed of atoms from more than one element held together by chemical bonds. A chemical element bonded to an identical chemical element is not a chemical compound since only one element, not two different elements, is involved.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemical Compound";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ChemicalEquilibrium(string text)
{
    string model = "llama3";
    string definition = "a chemical reaction, chemical equilibrium is the state in which both reactants and products are present in concentrations which have no further tendency to change with time, so that there is no observable change in the properties of the system. Usually, this state results when the forward reaction proceeds at the same rate as the reverse reaction. The reaction rates of the forward and backward reactions are generally not zero, but equal. Thus, there are no net changes in the concentrations of the reactants and products. Such a state is known as dynamic equilibrium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemical Equilibrium";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ChemicalKinetics(string text)
{
    string model = "llama3";
    string definition = "the study of rates of chemical processes. Chemical kinetics includes investigations of how different experimental conditions can influence the speed of a chemical reaction and yield information about the reaction's mechanism and transition states, as well as the construction of mathematical models that can describe the characteristics of a chemical reaction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemical Kinetics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ChemicalReaction(string text)
{
    string model = "llama3";
    string definition = "a process that leads to the chemical transformation of one set of chemical substances to another. Classically, chemical reactions encompass changes that only involve the positions of electrons in the forming and breaking of chemical bonds between atoms, with no change to the nuclei (no change to the elements present), and can often be described by a chemical equation. Nuclear chemistry is a sub-discipline of chemistry that involves the chemical reactions of unstable and radioactive elements where both electronic and nuclear changes can occur.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemical Reaction";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Chemistry(string text)
{
    string model = "llama3";
    string definition = "the scientific discipline involved with elements and compounds composed of atoms, molecules and ions: their composition, structure, properties, behavior and the changes they undergo during a reaction with other substances.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemistry";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Chloride(string text)
{
    string model = "llama3";
    string definition = "Any chemical compound containing the element chlorine.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chloride";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Chromate(string text)
{
    string model = "llama3";
    string definition = "They are oxyanions of chromium in the +6 oxidation state and are moderately strong oxidizing agents. In an aqueous solution, chromate and dichromate ions can be interconvertible.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chromate";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CircularMotion(string text)
{
    string model = "llama3";
    string definition = "In physics, circular motion is a movement of an object along the circumference of a circle or rotation along a circular path. It can be uniform, with constant angular rate of rotation and constant speed, or non-uniform with a changing rate of rotation. The rotation around a fixed axis of a three-dimensional body involves circular motion of its parts. The equations of motion describe the movement of the center of mass of a body.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Circular Motion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CivilEngineering(string text)
{
    string model = "llama3";
    string definition = "The profession that deals with the design and construction of structures, or other fixed works.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Civil Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ClausiusClapeyronRelation(string text)
{
    string model = "llama3";
    string definition = " a way of characterizing a discontinuous phase transition between two phases of matter of a single constituent. On a pressure–temperature (P–T) diagram, the line separating the two phases is known as the coexistence curve. The Clausius–Clapeyron relation gives the slope of the tangents to this curve.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Clausius Clapeyron Relation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ClausiusInequality(string text)
{
    string model = "llama3";
    string definition = "for a thermodynamic system (e.g. heat engine or heat pump) exchanging heat with external thermal reservoirs and undergoing a thermodynamic cycle, the following inequality holds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Clausius Inequality";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ClausiusTheorem(string text)
{
    string model = "llama3";
    string definition = "The Clausius theorem (1855) states that a system exchanging heat with external reservoirs and undergoing a cyclic process, is one that ultimately returns a system to its original state,";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Clausius Theorem";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CoefficientOfPerformance(string text)
{
    string model = "llama3";
    string definition = "of a heat pump, refrigerator or air conditioning system is a ratio of useful heating or cooling provided to work required. Higher COPs equate to lower operating costs. The COP usually exceeds 1, especially in heat pumps, because, instead of just converting work to heat (which, if 100% efficient, would be a COP_hp of 1), it pumps additional heat from a heat source to where the heat is required. For complete systems, COP calculations should include energy consumption of all power consuming auxiliaries. COP is highly dependent on operating conditions, especially absolute temperature and relative temperature between sink and system, and is often graphed or averaged against expected conditions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coefficient Of Performance";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CoefficientOfVariation(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, the coefficient of variation (CV), also known as relative standard deviation (RSD), is a standardized measure of dispersion of a probability distribution or frequency distribution. It is often expressed as a percentage, and is defined as the ratio of the standard deviation";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coefficient Of Variation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Coherance(string text)
{
    string model = "llama3";
    string definition = "In physics, two wave sources are perfectly coherent if they have a constant phase difference and the same frequency, and the same waveform. Coherence is an ideal property of waves that enables stationary (i.e. temporally and spatially constant) interference. It contains several distinct concepts, which are limiting cases that never quite occur in reality but allow an understanding of the physics of waves, and has become a very important concept in quantum physics. More generally, coherence describes all properties of the correlation between physical quantities of a single wave, or between several waves or wave packets.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coherance";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Cohesion(string text)
{
    string model = "llama3";
    string definition = "the action or property of like molecules sticking together, being mutually attractive. It is an intrinsic property of a substance that is caused by the shape and structure of its molecules, which makes the distribution of orbiting electrons irregular when molecules get close to one another, creating electrical attraction that can maintain a microscopic structure such as a water drop. In other words, cohesion allows for surface tension, creating a solid - like state upon which light-weight or low-density materials can be placed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cohesion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ColdForming(string text)
{
    string model = "llama3";
    string definition = "any metal-working procedure (such as hammering, rolling, shearing, bending, milling, etc.) carried out below the metal's recrystallization temperature.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cold Forming";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Combustion(string text)
{
    string model = "llama3";
    string definition = "a high-temperature exothermic redox chemical reaction between a fuel (the reductant) and an oxidant, usually atmospheric oxygen, that produces oxidized, often gaseous products, in a mixture termed as smoke.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Combustion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Compensation(string text)
{
    string model = "llama3";
    string definition = "Is planning for side effects or other unintended issues in a design. In a more simpler term, it is a counter - procedure plan on expected side effect performed to produce more efficient and useful results. The design of an invention can itself also be to compensate for some other existing issue or exception.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Compensation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Compiler(string text)
{
    string model = "llama3";
    string definition = "a computer program that translates computer code written in one programming language (the source language) into another language (the target language). The name \"compiler\" is primarily used for programs that translate source code from a high-level programming language to a low-level programming language (e.g. assembly language, object code, or machine code) to create an executable program.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Compiler";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CompressiveStrength(string text)
{
    string model = "llama3";
    string definition = "the capacity of a material or structure to withstand loads tending to reduce size, as opposed to tensile strength, which withstands loads tending to elongate. In other words, compressive strength resists compression (being pushed together), whereas tensile strength resists tension (being pulled apart). In the study of strength of materials, tensile strength, compressive strength, and shear strength can be analyzed independently.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Compressive Strength";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ComputationalFluidDynamics(string text)
{
    string model = "llama3";
    string definition = "The numerical solution of flow equations in practical problems such as aircraft design or hydraulic structures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computational Fluid Dynamics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Computer(string text)
{
    string model = "llama3";
    string definition = "a device that can be instructed to carry out sequences of arithmetic or logical operations automatically via computer programming. Modern computers have the ability to follow generalized sets of operations, called programs. These programs enable computers to perform an extremely wide range of tasks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computer";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ComputerAidedDesign(string text)
{
    string model = "llama3";
    string definition = "is the use of computer systems (or workstations) to aid in the creation, modification, analysis, or optimization of a design. CAD software is used to increase the productivity of the designer, improve the quality of design, improve communications through documentation, and to create a database for manufacturing. CAD output is often in the form of electronic files for print, machining, or other manufacturing operations. The term CADD (for computer aided design and drafting) is also used.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computer Aided Design";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ComputerAidedEngineering(string text)
{
    string model = "llama3";
    string definition = "the broad usage of computer software to aid in engineering analysis tasks. It includes finite element analysis (FEA), computational fluid dynamics (CFD), multibody dynamics (MBD), durability and optimization.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computer Aided Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ComputerAidedManufacturing(string text)
{
    string model = "llama3";
    string definition = "the use of software to control machine tools and related ones in the manufacturing of workpieces. This is not the only definition for CAM, but it is the most common; CAM may also refer to the use of a computer to assist in all operations of a manufacturing plant, including planning, management, transportation and storage.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computer Aided Manufacturing";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ComputerEngineering(string text)
{
    string model = "llama3";
    string definition = " a discipline that integrates several fields of computer science and electronics engineering required to develop computer hardware and software.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computer Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ComputerScience(string text)
{
    string model = "llama3";
    string definition = "the theory, experimentation, and engineering that form the basis for the design and use of computers. It involves the study of algorithms that process, store, and communicate digital information. A computer scientist specializes in the theory of computation and the design of computational systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computer Science";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ConcaveLens(string text)
{
    string model = "llama3";
    string definition = "Lenses are classified by the curvature of the two optical surfaces. A lens is biconvex (or double convex, or just convex) if both surfaces are convex. If both surfaces have the same radius of curvature, the lens is equiconvex. A lens with two concave surfaces is biconcave (or just concave). If one of the surfaces is flat, the lens is plano-convex or plano-concave depending on the curvature of the other surface. A lens with one convex and one concave side is convex-concave or meniscus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Concave Lens";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CondensedMatterPhysics(string text)
{
    string model = "llama3";
    string definition = "the field of physics that deals with the macroscopic and microscopic physical properties of matter. In particular it is concerned with the condensed phases that appear whenever the number of constituents in a system is extremely large and the interactions between the constituents are strong.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Condensed Matter Physics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ConfidenceInterval(string text)
{
    string model = "llama3";
    string definition = "a type of interval estimate, computed from the statistics of the observed data, that might contain the true value of an unknown population parameter. The interval has an associated confidence level that, loosely speaking, quantifies the level of confidence that the parameter lies in the interval. More strictly speaking, the confidence level represents the frequency (i.e. the proportion) of possible confidence intervals that contain the true value of the unknown population parameter. In other words, if confidence intervals are constructed using a given confidence level from an infinite number of independent sample statistics, the proportion of those intervals that contain the true value of the parameter will be equal to the confidence level.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Confidence Interval";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ConjugateAcid(string text)
{
    string model = "llama3";
    string definition = "a species formed by the reception of a proton (H+) by a base—in other words, it is a base with a hydrogen ion added to it. On the other hand, a conjugate base is what is left over after an acid has donated a proton during a chemical reaction. Hence, a conjugate base is a species formed by the removal of a proton from an acid. Because some acids are capable of releasing multiple protons, the conjugate base of an acid may itself be acidic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conjugate Acid";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ConjugateBase(string text)
{
    string model = "llama3";
    string definition = " a species formed by the reception of a proton (H+) by a base—in other words, it is a base with a hydrogen ion added to it. On the other hand, a conjugate base is what is left over after an acid has donated a proton during a chemical reaction. Hence, a conjugate base is a species formed by the removal of a proton from an acid. Because some acids are capable of releasing multiple protons, the conjugate base of an acid may itself be acidic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conjugate Base";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ConservationOfEnergy(string text)
{
    string model = "llama3";
    string definition = "the law of conservation of energy states that the total energy of an isolated system remains constant; it is said to be conserved over time. This law means that energy can neither be created nor destroyed; rather, it can only be transformed or transferred from one form to another.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conservation Of Energy";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ConservationOfMass(string text)
{
    string model = "llama3";
    string definition = "for any system closed to all transfers of matter and energy, the mass of the system must remain constant over time, as system's mass cannot change, so quantity cannot be added nor removed. Hence, the quantity of mass is conserved over time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conservation Of Mass";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ContinuityEquation(string text)
{
    string model = "llama3";
    string definition = "an equation that describes the transport of some quantity. It is particularly simple and powerful when applied to a conserved quantity, but it can be generalized to apply to any extensive quantity. Since mass, energy, momentum, electric charge and other natural quantities are conserved under their respective appropriate conditions, a variety of physical phenomena may be described using continuity equations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Continuity Equation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ContinuumMechanics(string text)
{
    string model = "llama3";
    string definition = "a branch of mechanics that deals with the mechanical behavior of materials modeled as a continuous mass rather than as discrete particles";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Continuum Mechanics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ControlEngineering(string text)
{
    string model = "llama3";
    string definition = "an engineering discipline that applies automatic control theory to design systems with desired behaviors in control environments. The discipline of controls overlaps and is usually taught along with electrical engineering at many institutions around the world.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Control Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ConvexLens(string text)
{
    string model = "llama3";
    string definition = "Lenses are classified by the curvature of the two optical surfaces. A lens is biconvex (or double convex, or just convex) if both surfaces are convex.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Convex Lens";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Corrosion(string text)
{
    string model = "llama3";
    string definition = "a natural process, which converts a refined metal to a more chemically-stable form, such as its oxide, hydroxide, or sulfide. It is the gradual destruction of materials (usually metals) by chemical and/or electrochemical reaction with their environment. Corrosion engineering is the field dedicated to controlling and stopping corrosion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Corrosion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CosmicRays(string text)
{
    string model = "llama3";
    string definition = "high-energy radiation, mainly originating outside the Solar System.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cosmic Rays";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Coulomb(string text)
{
    string model = "llama3";
    string definition = "The coulomb (symbol: C) is the International System of Units (SI) unit of electric charge. It is the charge (symbol: Q or q) transported by a constant current of one ampere in one second";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coulomb";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CoulombsLaw(string text)
{
    string model = "llama3";
    string definition = "a law of physics for quantifying Coulomb's force, or electrostatic force. Electrostatic force is the amount of force with which stationary, electrically charged particles either repel, or attract each other. This force and the law for quantifying it, represent one of the most basic forms of force used in the physical sciences, and were an essential basis to the study and development of the theory and field of classical electromagnetism. The law was first published in 1785 by French physicist Charles-Augustin de Coulomb.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coulombs Law";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CovalentBond(string text)
{
    string model = "llama3";
    string definition = "also called a molecular bond, is a chemical bond that involves the sharing of electron pairs between atoms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Covalent Bond";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CrookesTube(string text)
{
    string model = "llama3";
    string definition = "consists of a partially evacuated glass bulb of various shapes, with two metal electrodes, the cathode and the anode, one at either end. When a high voltage is applied between the electrodes, cathode rays (electrons) are projected in straight lines from the cathode. It was used by Crookes, Johann Hittorf, Julius Plücker, Eugen Goldstein, Heinrich Hertz, Philipp Lenard, Kristian Birkeland and others to discover the properties of cathode rays, culminating in J. J. Thomson's 1897 identification of cathode rays as negatively charged particles, which were later named electrons. Crookes tubes are now used only for demonstrating cathode rays.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Crookes Tube";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Cryogenics(string text)
{
    string model = "llama3";
    string definition = "the production and behaviour of materials at very low temperatures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cryogenics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Crystallization(string text)
{
    string model = "llama3";
    string definition = "the (natural or artificial) process by which a solid forms, where the atoms or molecules are highly organized into a structure known as a crystal. Some of the ways by which crystals form are precipitating from a solution, freezing, or more rarely deposition directly from a gas. Attributes of the resulting crystal depend largely on factors such as temperature, air pressure, and in the case of liquid crystals, time of fluid evaporation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Crystallization";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Crystallography(string text)
{
    string model = "llama3";
    string definition = "the branch of science devoted to the study of molecular and crystalline structure and properties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Crystallography";
        }
    }

    return nullptr;
}

string _Engineering::Terms::CurvilinearMotion(string text)
{
    string model = "llama3";
    string definition = "describes the motion of a moving particle that conforms to a known or fixed curve. The study of such motion involves the use of two co-ordinate systems, the first being planar motion and the latter being cylindrical motion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Curvilinear Motion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Cyclotron(string text)
{
    string model = "llama3";
    string definition = "a type of particle accelerator invented by Ernest O. Lawrence in 1929–1930 at the University of California, Berkeley, and patented in 1932. A cyclotron accelerates charged particles outwards from the center along a spiral path.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cyclotron";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DaltonsLaw(string text)
{
    string model = "llama3";
    string definition = "states that in a mixture of non-reacting gases, the total pressure exerted is equal to the sum of the partial pressures of the individual gases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Daltons Law";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DampedVibration(string text)
{
    string model = "llama3";
    string definition = "Any vibration with a force acting against it to lessen the vibration over time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Damped Vibration";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DarcyWeisbachEquation(string text)
{
    string model = "llama3";
    string definition = "An equation used in fluid mechanics to find the pressure change cause by friction within a pipe or conduit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Darcy Weisbach Equation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DCMotor(string text)
{
    string model = "llama3";
    string definition = "An electrical motor driven by direct current.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DC Motor";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Decibel(string text)
{
    string model = "llama3";
    string definition = "a relative unit of measurement equal to one tenth of a bel (B). It expresses the ratio of two values of a power or root-power quantity on a logarithmic scale.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Decibel";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DefiniteIntegral(string text)
{
    string model = "llama3";
    string definition = "computes the signed area of the region in the plane that is bounded by the graph of a given function between two points in the real line. Conventionally, areas above the horizontal axis of the plane are positive while areas below are negative. Integrals also refer to the concept of an antiderivative, a function whose derivative is the given function; in this case, they are also called indefinite integrals. The fundamental theorem of calculus relates definite integration to differentiation and provides a method to compute the definite integral of a function when its antiderivative is known; differentiation and integration are inverse operations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Definite Integral";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Deflection(string text)
{
    string model = "llama3";
    string definition = "the degree to which a structural element is displaced under a load. It may refer to an angle or a distance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deflection";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DeformationEngineering(string text)
{
    string model = "llama3";
    string definition = "any changes in the shape or size of an object due to an applied force(the deformation energy in this case is transferred through work) or a change in temperature(the deformation energy in this case is transferred through heat). The first case can be a result of tensile (pulling) forces, compressive (pushing) forces, shear, bending, or torsion (twisting). In the second case, the most significant factor, which is determined by the temperature, is the mobility of the structural defects such as grain boundaries, point vacancies, line and screw dislocations, stacking faults and twins in both crystalline and non-crystalline solids. The movement or displacement of such mobile defects is thermally activated, and thus limited by the rate of atomic diffusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deformation Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DeformationMechanics(string text)
{
    string model = "llama3";
    string definition = "the transformation of a body from a reference configuration to a current configuration. A configuration is a set containing the positions of all particles of the body. A deformation may be caused by external loads, body forces (such as gravity or electromagnetic forces), or changes in temperature, moisture content, or chemical reactions, etc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deformation Mechanics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DegreesOfFreedom(string text)
{
    string model = "llama3";
    string definition = "The number of parameters required to define the motion of a dynamical system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Degrees Of Freedom";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DeltaRobot(string text)
{
    string model = "llama3";
    string definition = "A tripod linkage, used to construct fast-acting manipulators with a wide range of movement.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Delta Robot";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DeltaWyeTransformer(string text)
{
    string model = "llama3";
    string definition = "A type of transformer used in three-phase power systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Delta Wye Transformer";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DeMoivreLaplaceTheorem(string text)
{
    string model = "llama3";
    string definition = "a special case of the central limit theorem, states that the normal distribution may be used as an approximation to the binomial distribution under certain conditions. In particular, the theorem shows that the probability mass function of the random number of successes observed in a series of n independent Bernoulli trials, each having probability p of success (a binomial distribution with n trials), converges to the probability density function of the normal distribution with mean np and standard deviation sqrt(np(1 - p)), as n grows large, assuming p is not 0 or 1.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DeMoivre Laplace Theorem";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Density(string text)
{
    string model = "llama3";
    string definition = "the volumetric mass density, of a substance is its mass per unit volume. The symbol most often used for density is ρ (the lower case Greek letter rho), although the Latin letter D can also be used. Mathematically, density is defined as mass divided by volume: p = m/v where ρ is the density, m is the mass, and V is the volume. In some cases (for instance, in the United States oil and gas industry), density is loosely defined as its weight per unit volume, although this is scientifically inaccurate – this quantity is more specifically called specific weight.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Density";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Derivative(string text)
{
    string model = "llama3";
    string definition = "a function of a real variable measures the sensitivity to change of the function value (output value) with respect to a change in its argument (input value). Derivatives are a fundamental tool of calculus. For example, the derivative of the position of a moving object with respect to time is the object's velocity: this measures how quickly the position of the object changes when time advances.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Derivative";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DesignEngineering(string text)
{
    string model = "llama3";
    string definition = "an engineer focused on the engineering design process in any of the various engineering disciplines (including civil, mechanical, electrical, chemical, textiles, aerospace, nuclear, manufacturing, systems, and structural /building/architectural) and design disciplines like Human-Computer Interaction. Design engineers tend to work on products and systems that involve adapting and using complex scientific and mathematical techniques. The emphasis tends to be on utilizing engineering physics and other applied sciences to develop solutions for society.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Design Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DewPoint(string text)
{
    string model = "llama3";
    string definition = "The pressure and temperature at which air is holding the maximum possible humidity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dew Point";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Diamagnetism(string text)
{
    string model = "llama3";
    string definition = "Diamagnetic materials are repelled by a magnetic field; an applied magnetic field creates an induced magnetic field in them in the opposite direction, causing a repulsive force. In contrast, paramagnetic and ferromagnetic materials are attracted by a magnetic field. Diamagnetism is a quantum mechanical effect that occurs in all materials; when it is the only contribution to the magnetism, the material is called diamagnetic. In paramagnetic and ferromagnetic substances the weak diamagnetic force is overcome by the attractive force of magnetic dipoles in the material. The magnetic permeability of diamagnetic materials is less than μ0, the permeability of vacuum. In most materials diamagnetism is a weak effect which can only be detected by sensitive laboratory instruments, but a superconductor acts as a strong diamagnet because it repels a magnetic field entirely from its interior.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diamagnetism";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Dieletric(string text)
{
    string model = "llama3";
    string definition = "An insulator, a material that does not permit free flow of electricity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dieletric";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DifferentialPressure(string text)
{
    string model = "llama3";
    string definition = "the difference in pressure between two points. Differential pressure sensors are used to measure many properties, such as pressure drops across oil filters or air filters, fluid levels (by comparing the pressure above and below the liquid) or flow rates (by measuring the change in pressure across a restriction). Technically speaking, most pressure sensors are really differential pressure sensors; for example a gauge pressure sensor is merely a differential pressure sensor in which one side is open to the ambient atmosphere. A DP cell is a device that measures the differential pressure between two inputs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Differential Pressure";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DifferentialPulley(string text)
{
    string model = "llama3";
    string definition = "used to manually lift very heavy objects like car engines. It is operated by pulling upon the slack section of a continuous chain that wraps around pulleys. The relative size of two connected pulleys determines the maximum weight that can be lifted by hand. The load will remain in place (and not lower under the force of gravity) until the chain is pulled.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Differential Pulley";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DifferentialSignaling(string text)
{
    string model = "llama3";
    string definition = "a method for electrically transmitting information using two complementary signals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Differential Signaling";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Diffusion(string text)
{
    string model = "llama3";
    string definition = "the net movement of molecules or atoms from a region of higher concentration (or high chemical potential) to a region of lower concentration (or low chemical potential).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diffusion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DimensionalAnalysis(string text)
{
    string model = "llama3";
    string definition = "the analysis of the relationships between different physical quantities by identifying their base quantities (such as length, mass, time, and electric charge) and units of measure (such as miles vs. kilometers, or pounds vs. kilograms) and tracking these dimensions as calculations or comparisons are performed. The conversion of units from one dimensional unit to another is often somewhat complex. Dimensional analysis, or more specifically the factor-label method, also known as the unit-factor method, is a widely used technique for such conversions using the rules of algebra.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dimensional Analysis";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DirectIntegrationOfABeam(string text)
{
    string model = "llama3";
    string definition = "a structural analysis method for measuring internal shear, internal moment, rotation, and deflection of a beam. For a beam with an applied weight w(x), taking downward to be positive, the internal shear force is given by taking the negative integral of the weight:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Direct Integration Of A Beam";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Dispersion(string text)
{
    string model = "llama3";
    string definition = "the phenomenon in which the phase velocity of a wave depends on its frequency.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dispersion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DisplacementFluid(string text)
{
    string model = "llama3";
    string definition = "In fluid mechanics, displacement occurs when an object is immersed in a fluid, pushing it out of the way and taking its place. The volume of the fluid displaced can then be measured, and from this, the volume of the immersed object can be deduced (the volume of the immersed object will be exactly equal to the volume of the displaced fluid).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Displacement Fluid";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DisplacementVector(string text)
{
    string model = "llama3";
    string definition = " vector whose length is the shortest distance from the initial to the final position of a point P. It quantifies both the distance and direction of an imaginary motion along a straight line from the initial position to the final position of the point. A displacement may be identified with the translation that maps the initial position to the final position.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Displacement Vector";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Distance(string text)
{
    string model = "llama3";
    string definition = "is a numerical measurement of how far apart objects are.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Distance";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DopplerEffect(string text)
{
    string model = "llama3";
    string definition = "the change in frequency or wavelength of a wave in relation to an observer who is moving relative to the wave source.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Doppler Effect";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DoseResponseRelationship(string text)
{
    string model = "llama3";
    string definition = "describes the magnitude of the response of an organism, as a function of exposure (or doses) to a stimulus or stressor (usually a chemical) after a certain exposure time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dose Response Relationship";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Drag(string text)
{
    string model = "llama3";
    string definition = " type of friction, or fluid resistance, another type of friction or fluid friction) is a force acting opposite to the relative motion of any object moving with respect to a surrounding fluid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Drag";
        }
    }

    return nullptr;
}

string _Engineering::Terms::DriftCurrent(string text)
{
    string model = "llama3";
    string definition = "the electric current, or movement of charge carriers, which is due to the applied electric field, often stated as the electromotive force over a given distance. When an electric field is applied across a semiconductor material, a current is produced due to the flow of charge carriers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Drift Current";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Ductility(string text)
{
    string model = "llama3";
    string definition = "a measure of a material's ability to undergo significant plastic deformation before rupture, which may be expressed as percent elongation or percent area reduction from a tensile test.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ductility";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Dynamics(string text)
{
    string model = "llama3";
    string definition = "the branch of classical mechanics concerned with the study of forces and their effects on motion. Isaac Newton defined the fundamental physical laws which govern dynamics in physics, especially his second law of motion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dynamics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Dyne(string text)
{
    string model = "llama3";
    string definition = "a derived unit of force specified in the centimetre–gram–second (CGS) system of units, a predecessor of the modern SI.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dyne";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Economics(string text)
{
    string model = "llama3";
    string definition = "The scientific study of the production, distribution and consumption of goods.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Economics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Effusion(string text)
{
    string model = "llama3";
    string definition = "the process in which a gas escapes from a container through a hole of diameter considerably smaller than the mean free path of the molecules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Effusion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElasticModulus(string text)
{
    string model = "llama3";
    string definition = "The amount a material will deform per unit force.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Elastic Modulus";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Elasticity(string text)
{
    string model = "llama3";
    string definition = "the ability of a body to resist a distorting influence and to return to its original size and shape when that influence or force is removed. Solid objects will deform when adequate forces are applied to them. If the material is elastic, the object will return to its initial shape and size when these forces are removed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Elasticity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricCharge(string text)
{
    string model = "llama3";
    string definition = "is the physical property of matter that causes it to experience a force when placed in an electromagnetic field. There are two types of electric charges; positive and negative (commonly carried by protons and electrons respectively). Like charges repel and unlike attract. An object with an absence of net charge is referred to as neutral. Early knowledge of how charged substances interact is now called classical electrodynamics, and is still accurate for problems that do not require consideration of quantum effects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electric Charge";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricCircuit(string text)
{
    string model = "llama3";
    string definition = "is an electrical network consisting of a closed loop, giving a return path for the current.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electric Circuit";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricCurrent(string text)
{
    string model = "llama3";
    string definition = "is a flow of electric charge. In electric circuits this charge is often carried by moving electrons in a wire. It can also be carried by ions in an electrolyte, or by both ions and electrons such as in an ionised gas (plasma). The SI unit for measuring an electric current is the ampere, which is the flow of electric charge across a surface at the rate of one coulomb per second. Electric current is measured using a device called an ammeter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electric Current";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricDisplacementField(string text)
{
    string model = "llama3";
    string definition = "denoted by D, is a vector field that appears in Maxwell's equations. It accounts for the effects of free and bound charge within materials. D stands for displacement, as in the related concept of displacement current in dielectrics. In free space, the electric displacement field is equivalent to flux density, a concept that lends understanding to Gauss\'s law. In the International System of Units (SI), it is expressed in units of coulomb per meter squared (C*m−2).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electric Displacement Field";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricGenerator(string text)
{
    string model = "llama3";
    string definition = "a device that converts motive power (mechanical energy) into electrical power for use in an external circuit. Sources of mechanical energy include steam turbines, gas turbines, water turbines, internal combustion engines and even hand cranks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electric Generator";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricField(string text)
{
    string model = "llama3";
    string definition = "surrounds an electric charge, and exerts force on other charges in the field, attracting or repelling them.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electric Field";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricFieldGradient(string text)
{
    string model = "llama3";
    string definition = "measures the rate of change of the electric field at an atomic nucleus generated by the electronic charge distribution and the other nuclei.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electric Field Gradient";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricMotor(string text)
{
    string model = "llama3";
    string definition = "an electrical machine that converts electrical energy into mechanical energy. Most electric motors operate through the interaction between the motor's magnetic field and winding currents to generate force in the form of rotation. Electric motors can be powered by direct current (DC) sources, such as from batteries, motor vehicles or rectifiers, or by alternating current (AC) sources, such as a power grid, inverters or electrical generators. An electric generator is mechanically identical to an electric motor, but operates in the reverse direction, accepting mechanical energy (such as from flowing water) and converting this mechanical energy into electrical energy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electric Motor";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricPotential(string text)
{
    string model = "llama3";
    string definition = "potential drop or the electrostatic potential) is the amount of work needed to move a unit of positive charge from a reference point to a specific point inside the field without producing an acceleration. Typically, the reference point is the Earth or a point at infinity, although any point beyond the influence of the electric field charge can be used.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electric Potential";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricPotentialEnergy(string text)
{
    string model = "llama3";
    string definition = "a potential energy (measured in joules) that results from conservative Coulomb forces and is associated with the configuration of a particular set of point charges within a defined system. An object may have electric potential energy by virtue of two key elements: its own electric charge and its relative position to other electrically charged objects. The term electric potential energy is used to describe the potential energy in systems with time-variant electric fields, while the term electrostatic potential energy is used to describe the potential energy in systems with time-invariant electric fields.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electric Potential Energy";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricPower(string text)
{
    string model = "llama3";
    string definition = "the rate, per unit time, at which electrical energy is transferred by an electric circuit. The SI unit of power is the watt, one joule per second.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electric Power";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricalEngineering(string text)
{
    string model = "llama3";
    string definition = "a technical discipline concerned with the study, design and application of equipment, devices and systems which use electricity, electronics, and electromagnetism. It emerged as an identified activity in the latter half of the 19th century after commercialization of the electric telegraph, the telephone, and electrical power generation, distribution and use.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrical Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricalConductance(string text)
{
    string model = "llama3";
    string definition = " measure of its opposition to the flow of electric current. The inverse quantity is electrical conductance, and is the ease with which an electric current passes. Electrical resistance shares some conceptual parallels with the notion of mechanical friction. The SI unit of electrical resistance is the ohm, while electrical conductance is measured in siemens (S).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrical Conductance";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricConductor(string text)
{
    string model = "llama3";
    string definition = "an object or type of material that allows the flow of charge (electrical current) in one or more directions. Materials made of metal are common electrical conductors. Electrical current is generated by the flow of negatively charged electrons, positively charged holes, and positive or negative ions in some cases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electric Conductor";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricalImpedance(string text)
{
    string model = "llama3";
    string definition = "the measure of the opposition that a circuit presents to a current when a voltage is applied. The term complex impedance may be used interchangeably.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrical Impedance";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricalInsulator(string text)
{
    string model = "llama3";
    string definition = "a material whose internal electric charges do not flow freely; very little electric current will flow through it under the influence of an electric field. This contrasts with other materials, semiconductors and conductors, which conduct electric current more easily. The property that distinguishes an insulator is its resistivity; insulators have higher resistivity than semiconductors or conductors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrical Insulator";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricalNetwork(string text)
{
    string model = "llama3";
    string definition = " an interconnection of electrical components (e.g., batteries, resistors, inductors, capacitors, switches, transistors) or a model of such an interconnection, consisting of electrical elements (e.g., voltage sources, current sources, resistances, inductances, capacitances). An electrical circuit is a network consisting of a closed loop, giving a return path for the current. Linear electrical networks, a special type consisting only of sources (voltage or current), linear lumped elements (resistors, capacitors, inductors), and linear distributed elements (transmission lines), have the property that signals are linearly superimposable. They are thus more easily analyzed, using powerful frequency domain methods such as Laplace transforms, to determine DC response, AC response, and transient response.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrical Network";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectricalResistance(string text)
{
    string model = "llama3";
    string definition = "a measure of its opposition to the flow of electric current. The inverse quantity is electrical conductance, and is the ease with which an electric current passes. Electrical resistance shares some conceptual parallels with the notion of mechanical friction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrical Resistance";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Electricity(string text)
{
    string model = "llama3";
    string definition = "the set of physical phenomena associated with the presence and motion of matter that has a property of electric charge. Electricity is related to magnetism, both being part of the phenomenon of electromagnetism, as described by Maxwell's equations. Various common phenomena are related to electricity, including lightning, static electricity, electric heating, and electric discharges.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electricity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Electrodynamics(string text)
{
    string model = "llama3";
    string definition = "the phenomena associated with moving electric charges, and their interaction with electric and magnetic fields; the study of these phenomena.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrodynamics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Electromagnet(string text)
{
    string model = "llama3";
    string definition = "a type of magnet in which the magnetic field is produced by an electric current. Electromagnets usually consist of wire wound into a coil. A current through the wire creates a magnetic field which is concentrated in the hole, denoting the centre of the coil. The magnetic field disappears when the current is turned off. The wire turns are often wound around a magnetic core made from a ferromagnetic or ferrimagnetic material such as iron; the magnetic core concentrates the magnetic flux and makes a more powerful magnet.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electromagnet";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectromagneticField(string text)
{
    string model = "llama3";
    string definition = "a classical (i.e. non-quantum) field produced by accelerating electric charges. It is the field described by classical electrodynamics and is the classical counterpart to the quantized electromagnetic field tensor in quantum electrodynamics. The electromagnetic field propagates at the speed of light (in fact, this field can be identified as light) and interacts with charges and currents. Its quantum counterpart is one of the four fundamental forces of nature (the others are gravitation, weak interaction and strong interaction.)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electromagnetic Field";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectromagneticRadiation(string text)
{
    string model = "llama3";
    string definition = "the waves (or their quanta, photons) of the electromagnetic field, propagating (radiating) through space, carrying electromagnetic radiant energy. It includes radio waves, microwaves, infrared, (visible) light, ultraviolet, X-rays, and gamma rays.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electromagnetic Radiation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Electromechanics(string text)
{
    string model = "llama3";
    string definition = "combines processes and procedures drawn from electrical engineering and mechanical engineering. Electromechanics focuses on the interaction of electrical and mechanical systems as a whole and how the two systems interact with each other. This process is especially prominent in systems such as those of DC or AC rotating electrical machines which can be designed and operated to generate power from a mechanical process (generator) or used to power a mechanical effect (motor). Electrical engineering in this context also encompasses electronics engineering.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electromechanics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Electron(string text)
{
    string model = "llama3";
    string definition = "a subatomic particle, whose electric charge is negative one elementary charge. Electrons belong to the first generation of the lepton particle family, and are generally thought to be elementary particles because they have no known components or substructure. The electron has a mass that is approximately 1/1836 that of the proton.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Electronvolt(string text)
{
    string model = "llama3";
    string definition = "the amount of kinetic energy gained by a single electron accelerating from rest through an electric potential difference of one volt in vacuum. When used as a unit of energy, the numerical value of 1 eV in joules (symbol J) is equivalent to the numerical value of the charge of an electron in coulombs (symbol C).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electronvolt";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElectronPair(string text)
{
    string model = "llama3";
    string definition = "consists of two electrons that occupy the same molecular orbital but have opposite spins. Gilbert N. Lewis introduced the concepts of both the electron pair and the covalent bond in a landmark paper he published in 1916.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron Pair";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Electronegativity(string text)
{
    string model = "llama3";
    string definition = "the measurement of the tendency of an atom to attract a shared pair of electrons (or electron density). An atom's electronegativity is affected by both its atomic number and the distance at which its valence electrons reside from the charged nucleus. The higher the associated electronegativity, the more an atom or a substituent group attracts electrons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electronegativity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Electronics(string text)
{
    string model = "llama3";
    string definition = "Comprises the physics, engineering, technology and applications that deal with the emission, flow and control of electrons in vacuum and matter. It uses active devices to control electron flow by amplification and rectification, which distinguishes it from classical electrical engineering which uses passive effects such as resistance, capacitance, and inductance to control current flow.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electronics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ElementalAnalysis(string text)
{
    string model = "llama3";
    string definition = "a process where a sample of some material (e.g., soil, waste or drinking water, bodily fluids, minerals, chemical compounds) is analyzed for its elemental and sometimes isotopic composition";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Elemental Analysis";
        }
    }

    return nullptr;
}

string _Engineering::Terms::EndothermicProcess(string text)
{
    string model = "llama3";
    string definition = "any process with an increase in the enthalpy H (or internal energy U) of the system. In such a process, a closed system usually absorbs thermal energy from its surroundings, which is heat transfer into the system. It may be a chemical process, such as dissolving ammonium nitrate in water, or a physical process, such as the melting of ice cubes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Endothermic Process";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Energy(string text)
{
    string model = "llama3";
    string definition = "the quantitative property that must be transferred to an object in order to perform work on, or to heat, the object. Energy is a conserved quantity; the law of conservation of energy states that energy can be converted in form, but not created or destroyed. The SI unit of energy is the joule, which is the energy transferred to an object by the work of moving it a distance of 1 metre against a force of 1 newton. Engine";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Energy";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Engine(string text)
{
    string model = "llama3";
    string definition = "a machine designed to convert one form of energy into mechanical energy.  Heat engines convert heat into work via various thermodynamic processes. The internal combustion engine is perhaps the most common example of a heat engine, in which heat from the combustion of a fuel causes rapid pressurisation of the gaseous combustion products in the combustion chamber, causing them to expand and drive a piston, which turns a crankshaft. Electric motors convert electrical energy into mechanical motion, pneumatic motors use compressed air, and clockwork motors in wind-up toys use elastic energy. In biological systems, molecular motors, like myosins in muscles, use chemical energy to create forces and ultimately motion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Engine";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Engineering(string text)
{
    string model = "llama3";
    string definition = "the use of scientific principles to design and build machines, structures, and other items, including bridges, tunnels, roads, vehicles, and buildings. The discipline of engineering encompasses a broad range of more specialized fields of engineering, each with a more specific emphasis on particular areas of applied mathematics, applied science, and types of application. The term engineering is derived from the Latin ingenium, meaning cleverness and ingeniare, meaning to contrive, devise.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::EngineeringEconomics(string text)
{
    string model = "llama3";
    string definition = "a subset of economics concerned with the use and \"...application of economic principles\" in the analysis of engineering decisions. As a discipline, it is focused on the branch of economics known as microeconomics in that it studies the behavior of individuals and firms in making decisions regarding the allocation of limited resources. Thus, it focuses on the decision making process, its context and environment. It is pragmatic by nature, integrating economic theory with engineering practice. But, it is also a simplified application of microeconomic theory in that it assumes elements such as price determination, competition and demand/supply to be fixed inputs from other sources. As a discipline though, it is closely related to others such as statistics, mathematics and cost accounting. It draws upon the logical framework of economics but adds to that the analytical power of mathematics and statistics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Engineering Economics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::EngineeringEthics(string text)
{
    string model = "llama3";
    string definition = "the field of system of moral principles that apply to the practice of engineering. The field examines and sets the obligations by engineers to society, to their clients, and to the profession. As a scholarly discipline, it is closely related to subjects such as the philosophy of science, the philosophy of engineering, and the ethics of technology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Engineering Ethics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::EnvironmentalEngineering(string text)
{
    string model = "llama3";
    string definition = "a job type that is a professional engineering discipline and takes from broad scientific topics like chemistry, biology, ecology, geology, hydraulics, hydrology, microbiology, and mathematics to create solutions that will protect and also improve the health of living organisms and improve the quality of the environment. Environmental engineering is a sub-discipline of civil engineering and chemical engineering.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Environmental Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::EngineeringPhysics(string text)
{
    string model = "llama3";
    string definition = "the study of the combined disciplines of physics, mathematics, chemistry, biology, and engineering, particularly computer, nuclear, electrical, electronic, aerospace, materials or mechanical engineering. By focusing on the scientific method as a rigorous basis, it seeks ways to apply, design, and develop new solutions in engineering.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Engineering Physics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Enzyme(string text)
{
    string model = "llama3";
    string definition = "proteins that act as biological catalysts (biocatalysts). Catalysts accelerate chemical reactions. The molecules upon which enzymes may act are called substrates, and the enzyme converts the substrates into different molecules known as products. Almost all metabolic processes in the cell need enzyme catalysis in order to occur at rates fast enough to sustain life.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Enzyme";
        }
    }

    return nullptr;
}

string _Engineering::Terms::EscapeVelocity(string text)
{
    string model = "llama3";
    string definition = "The minimum velocity at which an object can escape a gravitation field.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Escape Velocity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Estimator(string text)
{
    string model = "llama3";
    string definition = "a rule for calculating an estimate of a given quantity based on observed data: thus the rule (the estimator), the quantity of interest (the estimand) and its result (the estimate) are distinguished. For example, the sample mean is a commonly used estimator of the population mean. There are point and interval estimators. The point estimators yield single-valued results, although this includes the possibility of single vector-valued results and results that can be expressed as a single function. This is in contrast to an interval estimator, where the result would be a range of plausible values (or vectors or functions).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Estimator";
        }
    }

    return nullptr;
}

string _Engineering::Terms::EulerBernoulliBeamTheory(string text)
{
    string model = "llama3";
    string definition = "a simplification of the linear theory of elasticity which provides a means of calculating the load-carrying and deflection characteristics of beams. It covers the case for small deflections of a beam that are subjected to lateral loads only. It is thus a special case of Timoshenko beam theory. It was first enunciated circa 1750, but was not applied on a large scale until the development of the Eiffel Tower and the Ferris wheel in the late 19th century. Following these successful demonstrations, it quickly became a cornerstone of engineering and an enabler of the Second Industrial Revolution. Additional mathematical models have been developed such as plate theory, but the simplicity of beam theory makes it an important tool in the sciences, especially structural and mechanical engineering.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Euler Bernoulli Beam Theory";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ExothermicProcess(string text)
{
    string model = "llama3";
    string definition = "the term exothermic process (exo- : \"outside\") describes a process or reaction that releases energy from the system to its surroundings, usually in the form of heat, but also in a form of light (e.g. a spark, flame, or flash), electricity (e.g. a battery), or sound (e.g. explosion heard when burning hydrogen).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exothermic Process";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FactorOfSafty(string text)
{
    string model = "llama3";
    string definition = "expresses how much stronger a system is than it needs to be for an intended load.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Factor Of Safty";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FallingBodies(string text)
{
    string model = "llama3";
    string definition = "describing the trajectories of objects subject to a constant gravitational force under normal Earth-bound conditions. Assuming constant acceleration g due to Earth's gravity, Newton's law of universal gravitation simplifies to F = mg, where F is the force exerted on a mass m by the Earth's gravitational field of strength g. Assuming constant g is reasonable for objects falling to Earth over the relatively short vertical distances of our everyday experience, but is not valid for greater distances involved in calculating more distant effects, such as spacecraft trajectories.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Falling Bodies";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Farad(string text)
{
    string model = "llama3";
    string definition = "The farad (symbol: F) is the SI derived unit of electrical capacitance, the ability of a body to store an electrical charge. It is named after the English physicist Michael Faraday.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Farad";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FaradayConstant(string text)
{
    string model = "llama3";
    string definition = "amed after Michael Faraday. In physics and chemistry, this constant represents the magnitude of electric charge per mole of electrons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Faraday Constant";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FermatsPrinciple(string text)
{
    string model = "llama3";
    string definition = "the principle that the path taken between two points by a ray of light is the path that can be traversed in the least time. This principle is sometimes taken as the definition of a ray of light. However, this version of the principle is not general; a more modern statement of the principle is that rays of light traverse the path of stationary optical length with respect to variations of the path. In other words, a ray of light prefers the path such that there are other paths, arbitrarily nearby on either side, along which the ray would take almost exactly the same time to traverse.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fermats Principle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FicksLawOfDiffusion(string text)
{
    string model = "llama3";
    string definition = "Describe diffusion and were derived by Adolf Fick in 1855. They can be used to solve for the diffusion coefficient, D. Fick's first law can be used to derive his second law which in turn is identical to the diffusion equation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ficks Law Of Diffusion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FiniteElementMethod(string text)
{
    string model = "llama3";
    string definition = "(FEM), is the most widely used method for solving problems of engineering and mathematical models. Typical problem areas of interest include the traditional fields of structural analysis, heat transfer, fluid flow, mass transport, and electromagnetic potential. The FEM is a particular numerical method for solving partial differential equations in two or three space variables (i.e., some boundary value problems). To solve a problem, the FEM subdivides a large system into smaller, simpler parts that are called finite elements. This is achieved by a particular space discretization in the space dimensions, which is implemented by the construction of a mesh of the object: the numerical domain for the solution, which has a finite number of points. The finite element method formulation of a boundary value problem finally results in a system of algebraic equations. The method approximates the unknown function over the domain. The simple equations that model these finite elements are then assembled into a larger system of equations that models the entire problem. The FEM then uses variational methods from the calculus of variations to approximate a solution by minimizing an associated error function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Finite Element Method";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FIRST(string text)
{
    string model = "llama3";
    string definition = "For Inspiration and Recognition of Science and Technology – is an organization founded by inventor Dean Kamen in 1989 to develop ways to inspire students in engineering and technology fields.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "FIRST";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Fission(string text)
{
    string model = "llama3";
    string definition = "a nuclear reaction or a radioactive decay process in which the nucleus of an atom splits into two or more smaller, lighter nuclei. The fission process often produces gamma photons, and releases a very large amount of energy even by the energetic standards of radioactive decay.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fission";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FlowVelocity(string text)
{
    string model = "llama3";
    string definition = "the flow velocity in fluid dynamics, also macroscopic velocity in statistical mechanics, or drift velocity in electromagnetism, is a vector field used to mathematically describe the motion of a continuum. The length of the flow velocity vector is the flow speed and is a scalar. It is also called velocity field; when evaluated along a line, it is called a velocity profile (as in, e.g., law of the wall).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Flow Velocity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Fluid(string text)
{
    string model = "llama3";
    string definition = "a fluid is a substance that continually deforms (flows) under an applied shear stress, or external force. Fluids are a phase of matter and include liquids, gases, and plasmas. They are substances with zero shear modulus, or, in simpler terms, substances which cannot resist any shear force applied to them.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fluid";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FluidDynamics(string text)
{
    string model = "llama3";
    string definition = "a subdiscipline of fluid mechanics that describes the flow of fluids—liquids and gases. It has several subdisciplines, including aerodynamics (the study of air and other gases in motion) and hydrodynamics (the study of liquids in motion).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fluid Dynamics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FluidMechanics(string text)
{
    string model = "llama3";
    string definition = "the branch of physics concerned with the mechanics of fluids (liquids, gases, and plasmas) and the forces on them. It has applications in a wide range of disciplines, including mechanical, civil, chemical and biomedical engineering, geophysics, oceanography, meteorology, astrophysics, and biology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fluid Mechanics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FluidStatics(string text)
{
    string model = "llama3";
    string definition = "the branch of fluid mechanics that studies \"fluids at rest and the pressure in a fluid or exerted by a fluid on an immersed body\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fluid Statics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Flywheel(string text)
{
    string model = "llama3";
    string definition = "a mechanical device specifically designed to use the conservation of angular momentum so as to efficiently store rotational energy; a form of kinetic energy proportional to the product of its moment of inertia and the square of its rotational speed. In particular, if we assume the flywheel's moment of inertia to be constant (i.e., a flywheel with fixed mass and second moment of area revolving about some fixed axis) then the stored (rotational) energy is directly associated with the square of its rotational speed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Flywheel";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Focus(string text)
{
    string model = "llama3";
    string definition = "the point where light rays originating from a point on the object converge. Although the focus is conceptually a point, physically the focus has a spatial extent, called the blur circle. This non-ideal focusing may be caused by aberrations of the imaging optics. In the absence of significant aberrations, the smallest possible blur circle is the Airy disc, which is caused by diffraction from the optical system's aperture. Aberrations tend worsen as the aperture diameter increases, while the Airy circle is smallest for large apertures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Focus";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FootPound(string text)
{
    string model = "llama3";
    string definition = "a unit of work or energy in the engineering and gravitational systems in United States customary and imperial units of measure. It is the energy transferred upon applying a force of one pound-force (lbf) through a linear displacement of one foot. The corresponding SI unit is the joule.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Foot Pound";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FractureToughness(string text)
{
    string model = "llama3";
    string definition = "the critical stress intensity factor of a sharp crack where propagation of the crack suddenly becomes rapid and unlimited. A component's thickness affects the constraint conditions at the tip of a crack with thin components having plane stress conditions and thick components having plane strain conditions. Plane strain conditions give the lowest fracture toughness value which is a material property.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fracture Toughness";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FraunhoferLines(string text)
{
    string model = "llama3";
    string definition = "a set of spectral absorption lines named after the German physicist Joseph von Fraunhofer (1787–1826). The lines were originally observed as dark features (absorption lines) in the optical spectrum of the Sun.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fraunhofer Lines";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FreeFall(string text)
{
    string model = "llama3";
    string definition = "any motion of a body where gravity is the only force acting upon it. In the context of general relativity, where gravitation is reduced to a space-time curvature, a body in free fall has no force acting on it.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Free Fall";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FrequencyModulation(string text)
{
    string model = "llama3";
    string definition = "the encoding of information in a carrier wave by varying the instantaneous frequency of the wave. The technology is used in telecommunications, radio broadcasting, signal processing, and computing.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Frequency Modulation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FreezingPoint(string text)
{
    string model = "llama3";
    string definition = "a substance is the temperature at which it changes state from solid to liquid. At the melting point the solid and liquid phase exist in equilibrium. The melting point of a substance depends on pressure and is usually specified at a standard pressure such as 1 atmosphere or 100 kPa. When considered as the temperature of the reverse change from liquid to solid, it is referred to as the freezing point or crystallization point. Because of the ability of substances to supercool, the freezing point can easily appear to be below its actual value. When the \"characteristic freezing point\" of a substance is determined, in fact the actual methodology is almost always \"the principle of observing the disappearance rather than the formation of ice, that is, the melting point.\"";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Freezing Point";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Friction(string text)
{
    string model = "llama3";
    string definition = "the force resisting the relative motion of solid surfaces, fluid layers, and material elements sliding against each other. There are several types of friction: Dry friction is a force that opposes the relative lateral motion of two solid surfaces in contact. Dry friction is subdivided into static friction (\"stiction\") between non-moving surfaces, and kinetic friction between moving surfaces. With the exception of atomic or molecular friction, dry friction generally arises from the interaction of surface features, known as asperities (see Figure 1). Fluid friction describes the friction between layers of a viscous fluid that are moving relative to each other. Lubricated friction is a case of fluid friction where a lubricant fluid separates two solid surfaces. Skin friction is a component of drag, the force resisting the motion of a fluid across the surface of a body. Internal friction is the force resisting motion between the elements making up a solid material while it undergoes deformation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Friction";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Function(string text)
{
    string model = "llama3";
    string definition = "a binary relation between two sets that associates every element of the first set to exactly one element of the second set. Typical examples are functions from integers to integers, or from the real numbers to real numbers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Function";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FundamenmtalFrequency(string text)
{
    string model = "llama3";
    string definition = "defined as the lowest frequency of a periodic waveform. In music, the fundamental is the musical pitch of a note that is perceived as the lowest partial present. In terms of a superposition of sinusoids, the fundamental frequency is the lowest frequency sinusoidal in the sum of harmonically related frequencies, or the frequency of the difference between adjacent frequencies. In some contexts, the fundamental is usually abbreviated as f0, indicating the lowest frequency counting from zero.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fundamenmtal Frequency";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FundamentalInteraction(string text)
{
    string model = "llama3";
    string definition = "are the interactions that do not appear to be reducible to more basic interactions. There are four fundamental interactions known to exist: the gravitational and electromagnetic interactions, which produce significant long-range forces whose effects can be seen directly in everyday life, and the strong and weak interactions, which produce forces at minuscule, subatomic distances and govern nuclear interactions. Some scientists hypothesize that a fifth force might exist, but these hypotheses remain speculative.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fundamental Interaction";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FundamentalTheoremOfCalculus(string text)
{
    string model = "llama3";
    string definition = "a theorem that links the concept of differentiating a function with the concept of integrating a function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fundamental Theorem Of Calculus";
        }
    }

    return nullptr;
}

string _Engineering::Terms::FundamentalsOfEngineeringExamination(string text)
{
    string model = "llama3";
    string definition = "the first of two examinations that engineers must pass in order to be licensed as a Professional Engineer in the United States. The second examination is Principles and Practice of Engineering Examination. The FE exam is open to anyone with a degree in engineering or a related field, or currently enrolled in the last year of an ABET-accredited engineering degree program. Some state licensure boards permit students to take it prior to their final year, and numerous states allow those who have never attended an approved program to take the exam if they have a state-determined number of years of work experience in engineering.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fundamentals Of Engineering Examination";
        }
    }

    return nullptr;
}

string _Engineering::Terms::GalvanicCell(string text)
{
    string model = "llama3";
    string definition = "an electrochemical cell that derives electrical energy from spontaneous redox reactions taking place within the cell. It generally consists of two different metals immersed in electrolytes, or of individual half-cells with different metals and their ions in solution connected by a salt bridge or separated by a porous membrane. Volta was the inventor of the voltaic pile, the first electrical battery. In common usage, the word \"battery\" has come to include a single galvanic cell, but a battery properly consists of multiple cells.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Galvanic Cell";
        }
    }

    return nullptr;
}

string _Engineering::Terms::GammaRays(string text)
{
    string model = "llama3";
    string definition = "a penetrating form of electromagnetic radiation arising from the radioactive decay of atomic nuclei. It consists of the shortest wavelength electromagnetic waves and so imparts the highest photon energy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gamma Rays";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Gas(string text)
{
    string model = "llama3";
    string definition = "A pure gas may be made up of individual atoms (e.g. a noble gas like neon), elemental molecules made from one type of atom (e.g. oxygen), or compound molecules made from a variety of atoms (e.g. carbon dioxide). A gas mixture, such as air, contains a variety of pure gases. What distinguishes a gas from liquids and solids is the vast separation of the individual gas particles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gas";
        }
    }

    return nullptr;
}

string _Engineering::Terms::GaugePressure(string text)
{
    string model = "llama3";
    string definition = "Is zero-referenced against ambient air pressure, so it is equal to absolute pressure minus atmospheric pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gauge Pressure";
        }
    }

    return nullptr;
}

string _Engineering::Terms::GeigerCounter(string text)
{
    string model = "llama3";
    string definition = "an instrument used for detecting and measuring ionizing radiation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geiger Counter";
        }
    }

    return nullptr;
}

string _Engineering::Terms::GeneralRelativity(string text)
{
    string model = "llama3";
    string definition = "the geometric theory of gravitation published by Albert Einstein in 1915 and is the current description of gravitation in modern physics. General relativity generalizes special relativity and refines Newton's law of universal gravitation, providing a unified description of gravity as a geometric property of space and time or four-dimensional spacetime. In particular, the curvature of spacetime is directly related to the energy and momentum of whatever matter and radiation are present. The relation is specified by the Einstein field equations, a system of partial differential equations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "General Relativity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::GeometricMean(string text)
{
    string model = "llama3";
    string definition = "a mean or average, which indicates the central tendency or typical value of a set of numbers by using the product of their values (as opposed to the arithmetic mean which uses their sum)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geometric Mean";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Geometry(string text)
{
    string model = "llama3";
    string definition = "one of the oldest branches of mathematics. It is concerned with properties of space that are related with distance, shape, size, and relative position of figures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geometry";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Geophysics(string text)
{
    string model = "llama3";
    string definition = "a subject of natural science concerned with the physical processes and physical properties of the Earth and its surrounding space environment, and the use of quantitative methods for their analysis. The term geophysics sometimes refers only to geological applications: Earth's shape; its gravitational and magnetic fields; its internal structure and composition; its dynamics and their surface expression in plate tectonics, the generation of magmas, volcanism and rock formation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geophysics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::GeotechnicalEngineering(string text)
{
    string model = "llama3";
    string definition = "the branch of civil engineering concerned with the engineering behavior of earth materials. It uses the principles and methods of soil mechanics and rock mechanics for the solution of engineering problems and the design of engineering works. It also relies on knowledge of geology, hydrology, geophysics, and other related sciences.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geotechnical Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Gluon(string text)
{
    string model = "llama3";
    string definition = "an elementary particle that acts as the exchange particle (or gauge boson) for the strong force between quarks. It is analogous to the exchange of photons in the electromagnetic force between two charged particles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gluon";
        }
    }

    return nullptr;
}

string _Engineering::Terms::GrahamsLaw(string text)
{
    string model = "llama3";
    string definition = "the rate of effusion of a gas is inversely proportional to the square root of the mass of its particles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Grahams Law";
        }
    }

    return nullptr;
}

string _Engineering::Terms::GraviationalConstant(string text)
{
    string model = "llama3";
    string definition = "denoted by the letter G, is an empirical physical constant involved in the calculation of gravitational effects in Sir Isaac Newton's law of universal gravitation and in Albert Einstein's general theory of relativity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Graviational Constant";
        }
    }

    return nullptr;
}

string _Engineering::Terms::GravitationalEnergy(string text)
{
    string model = "llama3";
    string definition = "the potential energy a massive object has in relation to another massive object due to gravity. It is the potential energy associated with the gravitational field, which is released (converted into kinetic energy) when the objects fall towards each other. Gravitational potential energy increases when two objects are brought further apart.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gravitational Energy";
        }
    }

    return nullptr;
}

string _Engineering::Terms::GravitationalField(string text)
{
    string model = "llama3";
    string definition = "a model used to explain the influences that a massive body extends into the space around itself, producing a force on another massive body. Thus, a gravitational field is used to explain gravitational phenomena, and is measured in newtons per kilogram (N/kg). In its original concept, gravity was a force between point masses. Following Isaac Newton, Pierre-Simon Laplace attempted to model gravity as some kind of radiation field or fluid, and since the 19th century, explanations for gravity have usually been taught in terms of a field model, rather than a point attraction. In a field model, rather than two particles attracting each other, the particles distort spacetime via their mass, and this distortion is what is perceived and measured as a \"force\". In such a model one states that matter moves in certain ways in response to the curvature of spacetime,and that there is either no gravitational force, or that gravity is a fictitious force. Gravity is distinguished from other forces by its obedience to the equivalence principle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gravitational Field";
        }
    }

    return nullptr;
}

string _Engineering::Terms::GravitationalPotential(string text)
{
    string model = "llama3";
    string definition = "the gravitational potential at a location is equal to the work (energy transferred) per unit mass that would be needed to move an object to that location from a fixed reference location. It is analogous to the electric potential with mass playing the role of charge. The reference location, where the potential is zero, is by convention infinitely far away from any mass, resulting in a negative potential at any finite distance. In mathematics, the gravitational potential is also known as the Newtonian potential and is fundamental in the study of potential theory. It may also be used for solving the electrostatic and magnetostatic fields generated by uniformly charged or polarized ellipsoidal bodies.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gravitational Potential";
        }
    }

    return nullptr;
}

string _Engineering::Terms::GravitationalWave(string text)
{
    string model = "llama3";
    string definition = "disturbances in the curvature of spacetime, generated by accelerated masses, that propagate as waves outward from their source at the speed of light.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gravitational Wave";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Gravity(string text)
{
    string model = "llama3";
    string definition = "a natural phenomenon by which all things with mass or energy—including planets, stars, galaxies, and even light are brought toward (or gravitate toward) one another. On Earth, gravity gives weight to physical objects, and the Moon's gravity causes the ocean tides. The gravitational attraction of the original gaseous matter present in the Universe caused it to begin coalescing and forming stars and caused the stars to group together into galaxies, so gravity is responsible for many of the large-scale structures in the Universe. Gravity has an infinite range, although its effects become increasingly weaker as objects get further away.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gravity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::GroundState(string text)
{
    string model = "llama3";
    string definition = "The ground state of a quantum-mechanical system is its lowest-energy state; the energy of the ground state is known as the zero-point energy of the system. An excited state is any state with energy greater than the ground state. In quantum field theory, the ground state is usually called the vacuum state or the vacuum.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ground State";
        }
    }

    return nullptr;
}

string _Engineering::Terms::HalfLife(string text)
{
    string model = "llama3";
    string definition = "The period at which one-half of a quantity of an unstable isotope has decayed into other elements; the time at which half of a substance has diffused out of or otherwise reacted in a system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Half Life";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Hapic(string text)
{
    string model = "llama3";
    string definition = "Tactile feedback technology using the operator's sense of touch. Also sometimes applied to robot manipulators with their own touch sensitivity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hapic";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Hardness(string text)
{
    string model = "llama3";
    string definition = "a measure of the resistance to localized plastic deformation induced by either mechanical indentation or abrasion. Some materials (e.g. metals) are harder than others (e.g. plastics, wood). Macroscopic hardness is generally characterized by strong intermolecular bonds, but the behavior of solid materials under force is complex; therefore, there are different measurements of hardness: scratch hardness, indentation hardness, and rebound hardness. Hardness is dependent on ductility, elastic stiffness, plasticity, strain, strength, toughness, viscoelasticity, and viscosity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hardness";
        }
    }

    return nullptr;
}

string _Engineering::Terms::HarmonicMean(string text)
{
    string model = "llama3";
    string definition = "one of several kinds of average, and in particular, one of the Pythagorean means. Typically, it is appropriate for situations when the average of rates is desired. The harmonic mean can be expressed as the reciprocal of the arithmetic mean of the reciprocals of the given set of observations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Harmonic Mean";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Heat(string text)
{
    string model = "llama3";
    string definition = "heat is energy in transfer to or from a thermodynamic system, by mechanisms other than thermodynamic work or transfer of matter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Heat";
        }
    }

    return nullptr;
}

string _Engineering::Terms::HeatTransfer(string text)
{
    string model = "llama3";
    string definition = "a discipline of thermal engineering that concerns the generation, use, conversion, and exchange of thermal energy (heat) between physical systems. Heat transfer is classified into various mechanisms, such as thermal conduction, thermal convection, thermal radiation, and transfer of energy by phase changes. Engineers also consider the transfer of mass of differing chemical species, either cold or hot, to achieve heat transfer. While these mechanisms have distinct characteristics, they often occur simultaneously in the same system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Heat Transfer";
        }
    }

    return nullptr;
}

string _Engineering::Terms::HelmholtzFreeEnergy(string text)
{
    string model = "llama3";
    string definition = "a thermodynamic potential that measures the useful work obtainable from a closed thermodynamic system at a constant temperature and volume (isothermal, isochoric). The negative of the change in the Helmholtz energy during a process is equal to the maximum amount of work that the system can perform in a thermodynamic process in which volume is held constant. If the volume were not held constant, part of this work would be performed as boundary work. This makes the Helmholtz energy useful for systems held at constant volume. Furthermore, at constant temperature, the Helmholtz free energy is minimized at equilibrium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Helmholtz Free Energy";
        }
    }

    return nullptr;
}

string _Engineering::Terms::HendersonHasselbalchEquation(string text)
{
    string model = "llama3";
    string definition = "can be used to estimate the pH of a buffer solution. The numerical value of the acid dissociation constant, Ka, of the acid is known or assumed. The pH is calculated for given values of the concentrations of the acid, HA and of a salt, MA, of its conjugate base, A−; for example, the solution may contain acetic acid and sodium acetate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Henderson Hasselbalch Equation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::HenrysLaw(string text)
{
    string model = "llama3";
    string definition = "a gas law that states that the amount of dissolved gas in a liquid is proportional to its partial pressure above the liquid. The proportionality factor is called Henry's law constant. It was formulated by the English chemist William Henry, who studied the topic in the early 19th century.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Henrys Law";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Hertz(string text)
{
    string model = "llama3";
    string definition = "The SI unit of frequency, one cycle per second.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hertz";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Hexapod(string text)
{
    string model = "llama3";
    string definition = "a movable platform using six linear actuators. Often used in flight simulators they also have applications as a robotic manipulator.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hexapod";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Hoist(string text)
{
    string model = "llama3";
    string definition = "a device used for lifting or lowering a load by means of a drum or lift-wheel around which rope or chain wraps. It may be manually operated, electrically or pneumatically driven and may use chain, fiber or wire rope as its lifting medium. The most familiar form is an elevator, the car of which is raised and lowered by a hoist mechanism. Most hoists couple to their loads using a lifting hook.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hoist";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Horsepower(string text)
{
    string model = "llama3";
    string definition = "a unit of measurement of power, or the rate at which work is done, usually in reference to the output of engines or motors. There are many different standards and types of horsepower. Two common definitions used today are the imperial horsepower as in \"hp\" or \"bhp\" which is about 745.7 watts, and the metric horsepower as in \"cv\" or \"PS\" which is approximately 735.5 watts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Horsepower";
        }
    }

    return nullptr;
}

string _Engineering::Terms::HotWorking(string text)
{
    string model = "llama3";
    string definition = "any metal-working procedure (such as forging, rolling, extruding, etc.) carried out above the metal's recrystallization temperature.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hot Working";
        }
    }

    return nullptr;
}

string _Engineering::Terms::HuygensFresnelPrinciple(string text)
{
    string model = "llama3";
    string definition = "a method of analysis applied to problems of wave propagation both in the far-field limit and in near-field diffraction and also reflection. It states that every point on a wavefront is itself the source of spherical wavelets, and the secondary wavelets emanating from different points mutually interfere.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Huygens Fresnel Principle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Hydraulics(string text)
{
    string model = "llama3";
    string definition = "The study of fluid flow, or the generation of mechanical force and movement by liquid under pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydraulics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Hydrocarbon(string text)
{
    string model = "llama3";
    string definition = "a compound containing hydrogen and carbon atoms only; petroleum is made of hydrocarbons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydrocarbon";
        }
    }

    return nullptr;
}

string _Engineering::Terms::IcePoint(string text)
{
    string model = "llama3";
    string definition = "The freezing point of pure water at one atmosphere; 0C (32F).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ice Point";
        }
    }

    return nullptr;
}

string _Engineering::Terms::IdealGas(string text)
{
    string model = "llama3";
    string definition = "A model for gases that ignores intermolecular forces. Most gases are approximately ideal at some high temperature and low pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ideal Gas";
        }
    }

    return nullptr;
}

string _Engineering::Terms::IdealGasConstant(string text)
{
    string model = "llama3";
    string definition = "denoted by the symbol R or R. It is the molar equivalent to the Boltzmann constant, expressed in units of energy per temperature increment per amount of substance, rather than energy per temperature increment per particle. The constant is also a combination of the constants from Boyle's law, Charles's law, Avogadro's law, and Gay-Lussac's law. It is a physical constant that is featured in many fundamental equations in the physical sciences, such as the ideal gas law, the Arrhenius equation, and the Nernst equation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ideal Gas Constant";
        }
    }

    return nullptr;
}

string _Engineering::Terms::IdealGasLaw(string text)
{
    string model = "llama3";
    string definition = "the general gas equation, is the equation of state of a hypothetical ideal gas. It is a good approximation of the behavior of many gases under many conditions, although it has several limitations. It was first stated by Benoît Paul Émile Clapeyron in 1834 as a combination of the empirical Boyle's law, Charles's law, Avogadro's law, and Gay-Lussac's law.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ideal Gas Law";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Identity(string text)
{
    string model = "llama3";
    string definition = "an identity is an equality relating one mathematical expression A to another mathematical expression B, such that A and B (which might contain some variables) produce the same value for all values of the variables within a certain range of validity. In other words, A = B is an identity if A and B define the same functions, and an identity is an equality between functions that are differently defined.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Identity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ImpedanceElectrical(string text)
{
    string model = "llama3";
    string definition = "electrical impedance is the measure of the opposition that a circuit presents to a current when a voltage is applied.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Impedance Electrical";
        }
    }

    return nullptr;
}

string _Engineering::Terms::InclinedPlane(string text)
{
    string model = "llama3";
    string definition = "a ramp, is a flat supporting surface tilted at an angle, with one end higher than the other, used as an aid for raising or lowering a load. The inclined plane is one of the six classical simple machines defined by Renaissance scientists. Inclined planes are widely used to move heavy loads over vertical obstacles; examples vary from a ramp used to load goods into a truck, to a person walking up a pedestrian ramp, to an automobile or railroad train climbing a grade.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inclined Plane";
        }
    }

    return nullptr;
}

string _Engineering::Terms::IndefiniteIntegral(string text)
{
    string model = "llama3";
    string definition = "A function whose derivative is a given function; an antiderivative.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Indefinite Integral";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Inductance(string text)
{
    string model = "llama3";
    string definition = "the tendency of an electrical conductor to oppose a change in the electric current flowing through it. The flow of electric current creates a magnetic field around the conductor. The field strength depends on the magnitude of the current, and follows any changes in current.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inductance";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Inductor(string text)
{
    string model = "llama3";
    string definition = "a passive two-terminal electrical component that stores energy in a magnetic field when electric current flows through it.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inductor";
        }
    }

    return nullptr;
}

string _Engineering::Terms::IndustrialEngineering(string text)
{
    string model = "llama3";
    string definition = "an engineering profession that is concerned with the optimization of complex processes, systems, or organizations by developing, improving and implementing integrated systems of people, money, knowledge, information and equipment. Industrial engineers use specialized knowledge and skills in the mathematical, physical and social sciences, together with the principles and methods of engineering analysis and design, to specify, predict, and evaluate the results obtained from systems and processes. From these results, they are able to create new systems, processes or situations for the useful coordination of labour, materials and machines and also improve the quality and productivity of systems, physical or social.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Industrial Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Inertia(string text)
{
    string model = "llama3";
    string definition = "the resistance of any physical object to any change in its velocity. This includes changes to the object's speed, or direction of motion. An aspect of this property is the tendency of objects to keep moving in a straight line at a constant speed, when no forces act upon them.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inertia";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Infrasound(string text)
{
    string model = "llama3";
    string definition = "escribes sound waves with a frequency below the lower limit of audibility (generally 20 Hz). Hearing becomes gradually less sensitive as frequency decreases, so for humans to perceive infrasound, the sound pressure must be sufficiently high. The ear is the primary organ for sensing low sound, but at higher intensities it is possible to feel infrasound vibrations in various parts of the body.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Infrasound";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Integral(string text)
{
    string model = "llama3";
    string definition = "assigns numbers to functions in a way that describes displacement, area, volume, and other concepts that arise by combining infinitesimal data. The process of finding integrals is called integration. Along with differentiation, integration is a fundamental operation of calculus, and serves as a tool to solve problems in mathematics and physics involving the area of an arbitrary shape, the length of a curve, and the volume of a solid, among others.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Integral";
        }
    }

    return nullptr;
}

string _Engineering::Terms::IntegralTransform(string text)
{
    string model = "llama3";
    string definition = "maps a function from its original function space into another function space via integration, where some of the properties of the original function might be more easily characterized and manipulated than in the original function space. The transformed function can generally be mapped back to the original function space using the inverse transform.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Integral Transform";
        }
    }

    return nullptr;
}

string _Engineering::Terms::InternationalSystemsOfUnits(string text)
{
    string model = "llama3";
    string definition = "the modern form of the metric system. It is the only system of measurement with an official status in nearly every country in the world. It comprises a coherent system of units of measurement starting with seven base units, which are the second (the unit of time with the symbol s), metre (length, m), kilogram (mass, kg), ampere (electric current, A), kelvin (thermodynamic temperature, K), mole (amount of substance, mol), and candela (luminous intensity, cd). The system allows for an unlimited number of additional units, called derived units, which can always be represented as products of powers of the base units.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "International Systems Of Units";
        }
    }

    return nullptr;
}

string _Engineering::Terms::IntervalEstimation(string text)
{
    string model = "llama3";
    string definition = "the use of sample data to calculate an interval of possible values of an unknown population parameter; this is in contrast to point estimation, which gives a single value.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Interval Estimation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::InorganicChemistry(string text)
{
    string model = "llama3";
    string definition = " synthesis and behavior of inorganic and organometallic compounds. This field covers chemical compounds that are not carbon-based, which are the subjects of organic chemistry. The distinction between the two disciplines is far from absolute, as there is much overlap in the subdiscipline of organometallic chemistry. It has applications in every aspect of the chemical industry, including catalysis, materials science, pigments, surfactants, coatings, medications, fuels, and agriculture.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inorganic Chemistry";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Ion(string text)
{
    string model = "llama3";
    string definition = "a particle, atom or molecule with a net electrical charge. The charge of the electron is considered negative by convention. The negative charge of an ion is equal and opposite to charged proton(s) considered positive by convention. The net charge of an ion is non-zero due to its total number of electrons being unequal to its total number of protons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::IonicBonding(string text)
{
    string model = "llama3";
    string definition = "a type of chemical bonding that involves the electrostatic attraction between oppositely charged ions, or between two atoms with sharply different electronegativities, and is the primary interaction occurring in ionic compounds. It is one of the main types of bonding along with covalent bonding and metallic bonding. Ions are atoms (or groups of atoms) with an electrostatic charge. Atoms that gain electrons make negatively charged ions (called anions). Atoms that lose electrons make positively charged ions (called cations). This transfer of electrons is known as electrovalence in contrast to covalence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ionic Bonding";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Ionization(string text)
{
    string model = "llama3";
    string definition = "the process by which an atom or a molecule acquires a negative or positive charge by gaining or losing electrons, often in conjunction with other chemical changes. The resulting electrically charged atom or molecule is called an ion. Ionization can result from the loss of an electron after collisions with subatomic particles, collisions with other atoms, molecules and ions, or through the interaction with electromagnetic radiation. Heterolytic bond cleavage and heterolytic substitution reactions can result in the formation of ion pairs. Ionization can occur through radioactive decay by the internal conversion process, in which an excited nucleus transfers its energy to one of the inner-shell electrons causing it to be ejected.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ionization";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Isotape(string text)
{
    string model = "llama3";
    string definition = "variants of a particular chemical element which differ in neutron number, and consequently in nucleon number. All isotopes of a given element have the same number of protons but different numbers of neutrons in each atom.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Isotape";
        }
    }

    return nullptr;
}

string _Engineering::Terms::JPSIMeson(string text)
{
    string model = "llama3";
    string definition = "a subatomic particle, a flavor-neutral meson consisting of a charm quark and a charm antiquark. Mesons formed by a bound state of a charm quark and a charm anti-quark are generally known as \"charmonium\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "JPSI Meson";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Joule(string text)
{
    string model = "llama3";
    string definition = "a derived unit of energy in the International System of Units. It is equal to the energy transferred to (or work done on) an object when a force of one newton acts on that object in the direction of the object's motion through a distance of one metre (1 newton-metre or N⋅m). It is also the energy dissipated as heat when an electric current of one ampere passes through a resistance of one ohm for one second.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Joule";
        }
    }

    return nullptr;
}

string _Engineering::Terms::JouleHeating(string text)
{
    string model = "llama3";
    string definition = "Also known as resistive, resistance, or Ohmic heating, is the process by which the passage of an electric current through a conductor produces heat.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Joule Heating";
        }
    }

    return nullptr;
}

string _Engineering::Terms::KalmanFilter(string text)
{
    string model = "llama3";
    string definition = "In statistics and control theory, Kalman filtering, also known as linear quadratic estimation (LQE), is an algorithm that uses a series of measurements observed over time, containing statistical noise and other inaccuracies, and produces estimates of unknown variables that tend to be more accurate than those based on a single measurement alone, by estimating a joint probability distribution over the variables for each timeframe. The Kalman filter has numerous applications in technology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kalman Filter";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Kelvin(string text)
{
    string model = "llama3";
    string definition = "an absolute thermodynamic temperature scale using as its null point absolute zero, the temperature at which all thermal motion ceases in the classical description of thermodynamics. The kelvin (symbol: K) is the base unit of temperature in the International System of Units (SI).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kelvin";
        }
    }

    return nullptr;
}

string _Engineering::Terms::KelvinPlanckStatement(string text)
{
    string model = "llama3";
    string definition = "the second law of thermodynamics states that it is impossible to devise a cyclically operating heat engine, the effect of which is to absorb energy in the form of heat from a single thermal reservoir and to deliver an equivalent amount of work. This implies that it is impossible to build a heat engine that has 100% thermal efficiency.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kelvin Planck Statement";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Kinematics(string text)
{
    string model = "llama3";
    string definition = "a branch of classical mechanics that describes the motion of points, bodies (objects), and systems of bodies (groups of objects) without considering the forces that caused the motion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kinematics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::LaminarFlow(string text)
{
    string model = "llama3";
    string definition = "haracterized by fluid particles following smooth paths in layers, with each layer moving smoothly past the adjacent layers with little or no mixing. t low velocities, the fluid tends to flow without lateral mixing, and adjacent layers slide past one another like playing cards. There are no cross-currents perpendicular to the direction of flow, nor eddies or swirls of fluids. The motion of the particles of the fluid is very orderly with particles close to a solid surface moving in straight lines parallel to that surface. Laminar flow is a flow regime characterized by high momentum diffusion and low momentum convection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Laminar Flow";
        }
    }

    return nullptr;
}

string _Engineering::Terms::LaplaceTransform(string text)
{
    string model = "llama3";
    string definition = "an integral transform that converts a function of a real variable t (often time) to a function of a complex variable s (complex frequency). The transform has many applications in science and engineering because it is a tool for solving differential equations. In particular, it transforms differential equations into algebraic equations and convolution into multiplication.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Laplace Transform";
        }
    }

    return nullptr;
}

string _Engineering::Terms::LCCircuit(string text)
{
    string model = "llama3";
    string definition = "A circuit consisting entirely of inductors (L) and capacitors (C).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LC Circuit";
        }
    }

    return nullptr;
}

string _Engineering::Terms::LeChateliersPrinciple(string text)
{
    string model = "llama3";
    string definition = "a principle of chemistry used to predict the effect of a change in conditions on chemical equilibria.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LeChateliers Principle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::LenzsLaw(string text)
{
    string model = "llama3";
    string definition = "states that the direction of the electric current which is induced in a conductor by a changing magnetic field is such that the magnetic field created by the induced current opposes the initial changing magnetic field. It is a qualitative law that specifies the direction of induced current, but states nothing about its magnitude. Lenz's law explains the direction of many effects in electromagnetism, such as the direction of voltage induced in an inductor or wire loop by a changing current, or the drag force of eddy currents exerted on moving objects in a magnetic field. Lenz's law may be seen as analogous to Newton's third law in classical mechanics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lenzs Law";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Lepton(string text)
{
    string model = "llama3";
    string definition = "an elementary particle of half-integer spin (spin 1/2) that does not undergo strong interactions. Two main classes of leptons exist: charged leptons (also known as the electron-like leptons), and neutral leptons (better known as neutrinos). Charged leptons can combine with other particles to form various composite particles such as atoms and positronium, while neutrinos rarely interact with anything, and are consequently rarely observed. The best known of all leptons is the electron.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lepton";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Lever(string text)
{
    string model = "llama3";
    string definition = "a simple machine consisting of a beam or rigid rod pivoted at a fixed hinge, or fulcrum. A lever is a rigid body capable of rotating on a point on itself. On the basis of the locations of fulcrum, load and effort, the lever is divided into three types. Also, leverage is mechanical advantage gained in a system. It is one of the six simple machines identified by Renaissance scientists. A lever amplifies an input force to provide a greater output force, which is said to provide leverage. The ratio of the output force to the input force is the mechanical advantage of the lever. As such, the lever is a mechanical advantage device, trading off force against movement.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lever";
        }
    }

    return nullptr;
}

string _Engineering::Terms::LHopitalsRule(string text)
{
    string model = "llama3";
    string definition = "provides a technique to evaluate limits of indeterminate forms. Application (or repeated application) of the rule often converts an indeterminate form to an expression that can be easily evaluated by substitution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LHopitals Rule";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Light(string text)
{
    string model = "llama3";
    string definition = "electromagnetic radiation within the portion of the electromagnetic spectrum that can be perceived by the human eye. Visible light is usually defined as having wavelengths in the range of 400–700 nm, between the infrared (with longer wavelengths) and the ultraviolet (with shorter wavelengths). This wavelength means a frequency range of roughly 430–750 terahertz (THz).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Light";
        }
    }

    return nullptr;
}

string _Engineering::Terms::LinearActuator(string text)
{
    string model = "llama3";
    string definition = "an actuator that creates motion in a straight line, in contrast to the circular motion of a conventional electric motor. Linear actuators are used in machine tools and industrial machinery, in computer peripherals such as disk drives and printers, in valves and dampers, and in many other places where linear motion is required. Hydraulic or pneumatic cylinders inherently produce linear motion. Many other mechanisms are used to generate linear motion from a rotating motor.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Linear Actuator";
        }
    }

    return nullptr;
}

string _Engineering::Terms::LinearAlgebra(string text)
{
    string model = "llama3";
    string definition = "The mathematics of equations where the unknowns are only in the first power.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Linear Algebra";
        }
    }

    return nullptr;
}

string _Engineering::Terms::LinearElasticity(string text)
{
    string model = "llama3";
    string definition = "a mathematical model of how solid objects deform and become internally stressed due to prescribed loading conditions. It is a simplification of the more general nonlinear theory of elasticity and a branch of continuum mechanics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Linear Elasticity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Liquid(string text)
{
    string model = "llama3";
    string definition = "nearly incompressible fluid that conforms to the shape of its container but retains a (nearly) constant volume independent of pressure. As such, it is one of the four fundamental states of matter (the others being solid, gas, and plasma), and is the only state with a definite volume but no fixed shape. A liquid is made up of tiny vibrating particles of matter, such as atoms, held together by intermolecular bonds. Like a gas, a liquid is able to flow and take the shape of a container. Most liquids resist compression, although others can be compressed. Unlike a gas, a liquid does not disperse to fill every space of a container, and maintains a fairly constant density. A distinctive property of the liquid state is surface tension, leading to wetting phenomena. Water is, by far, the most common liquid on Earth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Liquid";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Logarithm(string text)
{
    string model = "llama3";
    string definition = "the inverse function to exponentiation. That means the logarithm of a given number x is the exponent to which another fixed number, the base b, must be raised, to produce that number x. In the simplest case, the logarithm counts the number of occurrences of the same factor in repeated multiplication.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logarithm";
        }
    }

    return nullptr;
}

string _Engineering::Terms::LogarithmicIdentities(string text)
{
    string model = "llama3";
    string definition = "Several important formulas, sometimes called logarithmic identities or log laws, relate logarithms to one another.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logarithmic Identities";
        }
    }

    return nullptr;
}

string _Engineering::Terms::LogarithmicMeanTemperatureDifference(string text)
{
    string model = "llama3";
    string definition = "reduces a thermal system to a number of discrete \"lumps\" and assumes that the temperature difference inside each lump is negligible. This approximation is useful to simplify otherwise complex differential heat equations. It was developed as a mathematical analog of electrical capacitance, although it also includes thermal analogs of electrical resistance as well.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logarithmic Mean Temperature Difference";
        }
    }

    return nullptr;
}

string _Engineering::Terms::LumpedCapacitanceModel(string text)
{
    string model = "llama3";
    string definition = "reduces a thermal system to a number of discrete \"lumps\" and assumes that the temperature difference inside each lump is negligible. This approximation is useful to simplify otherwise complex differential heat equations. It was developed as a mathematical analog of electrical capacitance, although it also includes thermal analogs of electrical resistance as well.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lumped Capacitance Model";
        }
    }

    return nullptr;
}

string _Engineering::Terms::LumpedElementModel(string text)
{
    string model = "llama3";
    string definition = "simplifies the description of the behaviour of spatially distributed physical systems into a topology consisting of discrete entities that approximate the behaviour of the distributed system under certain assumptions. It is useful in electrical systems (including electronics), mechanical multibody systems, heat transfer, acoustics, etc. Mathematically speaking, the simplification reduces the state space of the system to a finite dimension, and the partial differential equations (PDEs) of the continuous (infinite-dimensional) time and space model of the physical system into ordinary differential equations (ODEs) with a finite number of parameters.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lumped Element Model";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MacaulaysMethod(string text)
{
    string model = "llama3";
    string definition = "a technique used in structural analysis to determine the deflection of Euler-Bernoulli beams. Use of Macaulay's technique is very convenient for cases of discontinuous and/or discrete loading. Typically partial uniformly distributed loads (u.d.l.) and uniformly varying loads (u.v.l.) over the span and a number of concentrated loads are conveniently handled using this technique.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Macaulays Method";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MachNumber(string text)
{
    string model = "llama3";
    string definition = "The ratio of the speed of an object to the speed of sound.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mach Number";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Machine(string text)
{
    string model = "llama3";
    string definition = "a mechanical structure that uses power to apply forces and control movement to perform an intended action. Machines can be driven by animals and people, by natural forces such as wind and water, and by chemical, thermal, or electrical power, and include a system of mechanisms that shape the actuator input to achieve a specific application of output forces and movement. They can also include computers and sensors that monitor performance and plan movement, often called mechanical systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Machine";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MachineCode(string text)
{
    string model = "llama3";
    string definition = "consisting of machine language instructions, is a low-level programming language used to directly control a computer's central processing unit (CPU). Each instruction causes the CPU to perform a very specific task, such as a load, a store, a jump, or an arithmetic logic unit (ALU) operation on one or more units of data in the CPU's registers or memory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Machine Code";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MachineElement(string text)
{
    string model = "llama3";
    string definition = "refers to an elementary component of a machine. These elements consist of three basic types: structural components such as frame members, bearings, axles, splines, fasteners, seals, and lubricants, mechanisms that control movement in various ways such as gear trains, belt or chain drives, linkages, cam and follower systems, including brakes and clutches, and control components such as buttons, switches, indicators, sensors, actuators and computer controllers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Machine Element";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MachineLearning(string text)
{
    string model = "llama3";
    string definition = "the study of computer algorithms that improve automatically through experience and by the use of data. It is seen as a part of artificial intelligence. Machine learning algorithms build a model based on sample data, known as \"training data\", in order to make predictions or decisions without being explicitly programmed to do so. Machine learning algorithms are used in a wide variety of applications, such as in medicine, email filtering, speech recognition, and computer vision, where it is difficult or unfeasible to develop conventional algorithms to perform the needed tasks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Machine Learning";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MaclaurinSeries(string text)
{
    string model = "llama3";
    string definition = "an infinite sum of terms that are expressed in terms of the function's derivatives at a single point. For most common functions, the function and the sum of its Taylor series are equal near this point.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Maclaurin Series";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MagneticField(string text)
{
    string model = "llama3";
    string definition = "a vector field that describes the magnetic influence on moving electric charges, electric currents, and magnetic materials. A moving charge in a magnetic field experiences a force perpendicular to its own velocity and to the magnetic field. A permanent magnet's magnetic field pulls on ferromagnetic materials such as iron, and attracts or repels other magnets. In addition, a magnetic field that varies with location will exert a force on a range of non-magnetic materials by affecting the motion of their outer atomic electrons. Magnetic fields surround magnetized materials, and are created by electric currents such as those used in electromagnets, and by electric fields varying in time. Since both strength and direction of a magnetic field may vary with location, they are described as a map assigning a vector to each point of space or, more precisely—because of the way the magnetic field transforms under mirror reflection—as a field of pseudovectors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Magnetic Field";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Magnetism(string text)
{
    string model = "llama3";
    string definition = "a class of physical attributes that are mediated by magnetic fields. Electric currents and the magnetic moments of elementary particles give rise to a magnetic field, which acts on other currents and magnetic moments. Magnetism is one aspect of the combined phenomenon of electromagnetism. The most familiar effects occur in ferromagnetic materials, which are strongly attracted by magnetic fields and can be magnetized to become permanent magnets, producing magnetic fields themselves. Demagnetizing a magnet is also possible. Only a few substances are ferromagnetic; the most common ones are iron, cobalt and nickel and their alloys. The rare-earth metals neodymium and samarium are less common examples. The prefix ferro- refers to iron, because permanent magnetism was first observed in lodestone, a form of natural iron ore called magnetite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Magnetism";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ManufacturingEngineering(string text)
{
    string model = "llama3";
    string definition = "a branch of professional engineering that shares many common concepts and ideas with other fields of engineering such as mechanical, chemical, electrical, and industrial engineering. Manufacturing engineering requires the ability to plan the practices of manufacturing; to research and to develop tools, processes, machines and equipment; and to integrate the facilities and systems for producing quality products with the optimum expenditure of capital. The manufacturing or production engineer's primary focus is to turn raw material into an updated or new product in the most effective, efficient & economic way possible.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Manufacturing Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MassBalance(string text)
{
    string model = "llama3";
    string definition = "an application of conservation of mass to the analysis of physical systems. By accounting for material entering and leaving a system, mass flows can be identified which might have been unknown, or difficult to measure without this technique. The exact conservation law used in the analysis of the system depends on the context of the problem, but all revolve around mass conservation, i.e., that matter cannot disappear or be created spontaneously.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mass Balance";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MassDensity(string text)
{
    string model = "llama3";
    string definition = "its mass per unit volume. The symbol most often used for density is ρ (the lower case Greek letter rho), although the Latin letter D can also be used. Mathematically, density is defined as mass divided by volume: p = m/v";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mass Density";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MassMomentOfInertia(string text)
{
    string model = "llama3";
    string definition = "a quantity that determines the torque needed for a desired angular acceleration about a rotational axis, akin to how mass determines the force needed for a desired acceleration. It depends on the body's mass distribution and the axis chosen, with larger moments requiring more torque to change the body's rate of rotation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mass Moment Of Inertia";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MassNumber(string text)
{
    string model = "llama3";
    string definition = "the total number of protons and neutrons (together known as nucleons) in an atomic nucleus. It is approximately equal to the atomic (also known as isotopic) mass of the atom expressed in atomic mass units. Since protons and neutrons are both baryons, the mass number A is identical with the baryon number B of the nucleus (and also of the whole atom or ion).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mass Number";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MassSpectrometry(string text)
{
    string model = "llama3";
    string definition = "an analytical technique that is used to measure the mass-to-charge ratio of ions. The results are typically presented as a mass spectrum, a plot of intensity as a function of the mass-to-charge ratio. Mass spectrometry is used in many different fields and is applied to pure samples as well as complex mixtures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mass Spectrometry";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MaterialFailureTheory(string text)
{
    string model = "llama3";
    string definition = "an interdisciplinary field of materials science and solid mechanics which attempts to predict the conditions under which solid materials fail under the action of external loads. The failure of a material is usually classified into brittle failure (fracture) or ductile failure (yield). Depending on the conditions (such as temperature, state of stress, loading rate) most materials can fail in a brittle or ductile manner or both. However, for most practical situations, a material may be classified as either brittle or ductile. In mathematical terms, failure theory is expressed in the form of various failure criteria which are valid for specific materials.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Material Failure Theory";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MaterialProperties(string text)
{
    string model = "llama3";
    string definition = "an intensive property of some material, i.e., a physical property that does not depend on the amount of the material. These quantitative properties may be used as a metric by which the benefits of one material versus another can be compared, thereby aiding in materials selection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Material Properties";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MaterialsScience(string text)
{
    string model = "llama3";
    string definition = "the design and discovery of new materials, particularly solids. The intellectual origins of materials science stem from the Enlightenment, when researchers began to use analytical thinking from chemistry, physics, and engineering to understand ancient, phenomenological observations in metallurgy and mineralogy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Materials Science";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MathematicalOptimization(string text)
{
    string model = "llama3";
    string definition = " the selection of a best element, with regard to some criterion, from some set of available alternatives.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mathematical Optimization";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MathematicalPhysics(string text)
{
    string model = "llama3";
    string definition = "the development of mathematical methods for application to problems in physics. The Journal of Mathematical Physics defines the field as \"the application of mathematics to problems in physics and the development of mathematical methods suitable for such applications and for the formulation of physical theories\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mathematical Physics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Mathematics(string text)
{
    string model = "llama3";
    string definition = "includes the study of such topics as quantity (number theory), structure (algebra), space (geometry), and change (analysis). It has no generally accepted definition. Mathematicians seek and use patterns to formulate new conjectures; they resolve the truth or falsity of such by mathematical proof. When mathematical structures are good models of real phenomena, mathematical reasoning can be used to provide insight or predictions about nature. Through the use of abstraction and logic, mathematics developed from counting, calculation, measurement, and the systematic study of the shapes and motions of physical objects. Practical mathematics has been a human activity from as far back as written records exist. The research required to solve mathematical problems can take years or even centuries of sustained inquiry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mathematics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Matrix(string text)
{
    string model = "llama3";
    string definition = "a rectangular array or table of numbers, symbols, or expressions, arranged in rows and columns, which is used to represent a mathematical object or a property of such an object.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Matrix";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Matter(string text)
{
    string model = "llama3";
    string definition = "any substance that has mass and takes up space by having volume.[34] All everyday objects that can be touched are ultimately composed of atoms, which are made up of interacting subatomic particles, and in everyday as well as scientific usage, \"matter\" generally includes atoms and anything made up of them, and any particles (or combination of particles) that act as if they have both rest mass and volume. However it does not include massless particles such as photons, or other energy phenomena or waves such as light.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Matter";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MaximumDistortionEnergyTheory(string text)
{
    string model = "llama3";
    string definition = "";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Maximum Distortion Energy Theory";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MaximumNormalStressTheory(string text)
{
    string model = "llama3";
    string definition = "";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Maximum Normal Strees Theory";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MaximumShearStress(string text)
{
    string model = "llama3";
    string definition = "";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Maximum Shear Stress";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MaxwellsEquations(string text)
{
    string model = "llama3";
    string definition = "a set of coupled partial differential equations that, together with the Lorentz force law, form the foundation of classical electromagnetism, classical optics, and electric circuits. The equations provide a mathematical model for electric, optical, and radio technologies, such as power generation, electric motors, wireless communication, lenses, radar etc. They describe how electric and magnetic fields are generated by charges, currents, and changes of the fields.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Maxwells Equations";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Mean(string text)
{
    string model = "llama3";
    string definition = "There are several kinds of mean in mathematics, especially in statistics: For a data set, the arithmetic mean, also known as average or arithmetic average, is a central value of a finite set of numbers: specifically, the sum of the values divided by the number of values.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mean";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MeasureOfCentralTendency(string text)
{
    string model = "llama3";
    string definition = "a central or typical value for a probability distribution. It may also be called a center or location of the distribution. Colloquially, measures of central tendency are often called averages.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Measure Of Central Tendency";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MechanicalAdvantage(string text)
{
    string model = "llama3";
    string definition = "a measure of the force amplification achieved by using a tool, mechanical device or machine system. The device trades off input forces against movement to obtain a desired amplification in the output force. The model for this is the law of the lever. Machine components designed to manage forces and movement in this way are called mechanisms. An ideal mechanism transmits power without adding to or subtracting from it. This means the ideal mechanism does not include a power source, is frictionless, and is constructed from rigid bodies that do not deflect or wear. The performance of a real system relative to this ideal is expressed in terms of efficiency factors that take into account departures from the ideal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mechanical Advantage";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MechanicalEngineering(string text)
{
    string model = "llama3";
    string definition = "an engineering branch that combines engineering physics and mathematics principles with materials science to design, analyze, manufacture, and maintain mechanical systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mechanical Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MechanicalFilter(string text)
{
    string model = "llama3";
    string definition = "a signal processing filter usually used in place of an electronic filter at radio frequencies. Its purpose is the same as that of a normal electronic filter: to pass a range of signal frequencies, but to block others. The filter acts on mechanical vibrations which are the analogue of the electrical signal. At the input and output of the filter, transducers convert the electrical signal into, and then back from, these mechanical vibrations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mechanical Filter";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MechanicalWave(string text)
{
    string model = "llama3";
    string definition = "a wave that is an oscillation of matter, and therefore transfers energy through a medium. While waves can move over long distances, the movement of the medium of transmission—the material—is limited. Therefore, the oscillating material does not move far from its initial equilibrium position. Mechanical waves transport energy. This energy propagates in the same direction as the wave. Any kind of wave (mechanical or electromagnetic) has a certain energy. Mechanical waves can be produced only in media which possess elasticity and inertia.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mechanical Wave";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Mechanics(string text)
{
    string model = "llama3";
    string definition = "the area of physics concerned with the motions of physical objects, more specifically the relationships among force, matter, and motion. Forces applied to objects result in displacements, or changes of an object's position relative to its environment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mechanics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Mechanism(string text)
{
    string model = "llama3";
    string definition = "a device that transforms input forces and movement into a desired set of output forces and movement. Mechanisms generally consist of moving components which may include: Gears and gear trains, Belts and chain drives, Cams and followers, Linkages, Friction devices, such as brakes or clutches, Structural components such as a frame, fasteners, bearings, springs, or lubricants, and Various machine elements, such as splines, pins, or keys";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mechanism";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Median(string text)
{
    string model = "llama3";
    string definition = "the value separating the higher half from the lower half of a data sample, a population, or a probability distribution. For a data set, it may be thought of as \"the middle\" value. The basic feature of the median in describing data compared to the mean (often simply described as the \"average\") is that it is not skewed by a small proportion of extremely large or small values, and therefore provides a better representation of a \"typical\" value. Median income, for example, may be a better way to suggest what a \"typical\" income is, because income distribution can be very skewed. The median is of central importance in robust statistics, as it is the most resistant statistic, having a breakdown point of 50%: so long as no more than half the data are contaminated, the median is not an arbitrarily large or small result.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Median";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Melting(string text)
{
    string model = "llama3";
    string definition = "a physical process that results in the phase transition of a substance from a solid to a liquid. This occurs when the internal energy of the solid increases, typically by the application of heat or pressure, which increases the substance's temperature to the melting point. At the melting point, the ordering of ions or molecules in the solid breaks down to a less ordered state, and the solid melts to become a liquid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Melting";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MeltingPoint(string text)
{
    string model = "llama3";
    string definition = "the temperature at which it changes state from solid to liquid. At the melting point the solid and liquid phase exist in equilibrium. The melting point of a substance depends on pressure and is usually specified at a standard pressure such as 1 atmosphere or 100 kPa. When considered as the temperature of the reverse change from liquid to solid, it is referred to as the freezing point or crystallization point. Because of the ability of substances to supercool, the freezing point can easily appear to be below its actual value. When the \"characteristic freezing point\" of a substance is determined, in fact the actual methodology is almost always \"the principle of observing the disappearance rather than the formation of ice, that is, the melting point.\"";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Melting Point";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Meson(string text)
{
    string model = "llama3";
    string definition = "hadronic subatomic particles composed of an equal number of quarks and antiquarks, usually one of each, bound together by strong interactions. Because mesons are composed of quark subparticles, they have a meaningful physical size, a diameter of roughly one femtometer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Meson";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MetallicBonding(string text)
{
    string model = "llama3";
    string definition = "a type of chemical bonding that arises from the electrostatic attractive force between conduction electrons (in the form of an electron cloud of delocalized electrons) and positively charged metal ions. It may be described as the sharing of free electrons among a structure of positively charged ions (cations). Metallic bonding accounts for many physical properties of metals, such as strength, ductility, thermal and electrical resistivity and conductivity, opacity, and luster";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metallic Bonding";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MiddleOut(string text)
{
    string model = "llama3";
    string definition = "A combination of top-down and bottom-up design";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Middle Out";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MidRange(string text)
{
    string model = "llama3";
    string definition = "closely related to the range, a measure of statistical dispersion defined as the difference between maximum and minimum values. The two measures are complementary in sense that if one knows the mid-range and the range, one can find the sample maximum and minimum values. The mid-range is rarely used in practical statistical analysis, as it lacks efficiency as an estimator for most distributions of interest, because it ignores all intermediate points, and lacks robustness, as outliers change it significantly. Indeed, it is one of the least efficient and least robust statistics. However, it finds some use in special cases: it is the maximally efficient estimator for the center of a uniform distribution, trimmed mid-ranges address robustness, and as an L-estimator, it is simple to understand and compute.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mid Range";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Midhinge(string text)
{
    string model = "llama3";
    string definition = "the midhinge is the average of the first and third quartiles and is thus a measure of location.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Midhinge";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MiningEngineering(string text)
{
    string model = "llama3";
    string definition = "the engineering discipline is the extraction of minerals from underneath, above or on the ground. Mining engineering is associated with many other disciplines, such as mineral processing, exploration, excavation, geology, and metallurgy, geotechnical engineering and surveying. A mining engineer may manage any phase of mining operations, from exploration and discovery of the mineral resources, through feasibility study, mine design, development of plans, production and operations to mine closure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mining Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MillerIndices(string text)
{
    string model = "llama3";
    string definition = "In particular, a family of lattice planes is determined by three integers h, k, and ℓ, the Miller indices. They are written (hkℓ), and denote the family of planes orthogonal to hb1 + kb2 + lb3, wherre bi are the basis of the reciprocal lattice vectors (note that the plane is not always orthogonal to the linear combination of direct lattice vectors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Miller Indices";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MobileRobot(string text)
{
    string model = "llama3";
    string definition = "a robot that is capable of moving in the surrounding (locomotion).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mobile Robot";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Mode(string text)
{
    string model = "llama3";
    string definition = "the value that appears most often in a set of data values.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mode";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ModusOfElasticity(string text)
{
    string model = "llama3";
    string definition = "a quantity that measures an object or substance's resistance to being deformed elastically (i.e., non-permanently) when a stress is applied to it. The elastic modulus of an object is defined as the slope of its stress–strain curve in the elastic deformation region:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Modus Of Elasticity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MohrsCircle(string text)
{
    string model = "llama3";
    string definition = "A graphical method of analyzing the three-dimensional stresses in a system that has a loading force applied to it.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mohrs Circle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Molality(string text)
{
    string model = "llama3";
    string definition = "a measure of the number of moles of solute in a solution corresponding to 1 kg or 1000 g of solvent. This contrasts with the definition of molarity which is based on a specified volume of solution. A commonly used unit for molality in chemistry is mol/kg. A solution of concentration 1 mol/kg is also sometimes denoted as 1 molal. The unit mol/kg requires that molar mass be expressed in kg/mol, instead of the usual g/mol or kg/kmol.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Molality";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MolarAttenuationCoefficient(string text)
{
    string model = "llama3";
    string definition = "a measurement of how strongly a chemical species attenuates light at a given wavelength.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Molar Attenuation Coefficient";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MolarConcentration(string text)
{
    string model = "llama3";
    string definition = "a measure of the concentration of a chemical species, in particular of a solute in a solution, in terms of amount of substance per unit volume of solution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Molar Concentration";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MolarMass(string text)
{
    string model = "llama3";
    string definition = "defined as the mass of a sample of that compound divided by the amount of substance in that sample, measured in moles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Molar Mass";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Molding(string text)
{
    string model = "llama3";
    string definition = "the process of manufacturing by shaping liquid or pliable raw material using a rigid frame called a mold or matrix. This itself may have been made using a pattern or model of the final object.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Molding";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Molecule(string text)
{
    string model = "llama3";
    string definition = "an electrically neutral group of two or more atoms held together by chemical bonds. Molecules are distinguished from ions by their lack of electrical charge. In quantum physics, organic chemistry, and biochemistry, the distinction from ions is dropped and molecule is often used when referring to polyatomic ions. In the kinetic theory of gases, the term molecule is often used for any gaseous particle regardless of its composition. This violates the definition that a molecule contain two or more atoms, since the noble gases are individual atoms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Molecule";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MolecularPhysics(string text)
{
    string model = "llama3";
    string definition = "the study of the physical properties of molecules, the chemical bonds between atoms as well as the molecular dynamics. Its most important experimental techniques are the various types of spectroscopy; scattering is also used. The field is closely related to atomic physics and overlaps greatly with theoretical chemistry, physical chemistry and chemical physics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Molecular Physics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MomentOfInertia(string text)
{
    string model = "llama3";
    string definition = "a rigid body is a quantity that determines the torque needed for a desired angular acceleration about a rotational axis, akin to how mass determines the force needed for a desired acceleration. It depends on the body's mass distribution and the axis chosen, with larger moments requiring more torque to change the body's rate of rotation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Moment Of Inertia";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MultibodySystem(string text)
{
    string model = "llama3";
    string definition = "the study of the dynamic behavior of interconnected rigid or flexible bodies, each of which may undergo large translational and rotational displacements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Multibody System";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MultidisciplinaryDesignOptimization(string text)
{
    string model = "llama3";
    string definition = "a field of engineering that uses optimization methods to solve design problems incorporating a number of disciplines. It is also known as multidisciplinary system design optimization (MSDO). MDO allows designers to incorporate all relevant disciplines simultaneously. The optimum of the simultaneous problem is superior to the design found by optimizing each discipline sequentially, since it can exploit the interactions between the disciplines. However, including all disciplines simultaneously significantly increases the complexity of the problem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Multidisciplinary Design Optimization";
        }
    }

    return nullptr;
}

string _Engineering::Terms::MutualInductance(string text)
{
    string model = "llama3";
    string definition = "the ratio between the electromotive force induced in one loop or coil by the rate of change of current in another loop or coil. Mutual inductance is given the symbol M.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mutual Inductance";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Muon(string text)
{
    string model = "llama3";
    string definition = "an elementary particle similar to the electron.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Muon";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Nanoengineering(string text)
{
    string model = "llama3";
    string definition = "the practice of engineering on the nanoscale. It derives its name from the nanometre, a unit of measurement equalling one billionth of a meter. Nanoengineering is largely a synonym for nanotechnology, but emphasizes the engineering rather than the pure science aspects of the field.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nanoengineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Nanotechnology(string text)
{
    string model = "llama3";
    string definition = "The technology of systems built with moving parts on the order of a nanometre in size.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nanotechnology";
        }
    }

    return nullptr;
}

string _Engineering::Terms::NavierStokesEquations(string text)
{
    string model = "llama3";
    string definition = "equations are a set of partial differential equations which describe the motion of viscous fluid substances.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NavierStokesEquations";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Neutrino(string text)
{
    string model = "llama3";
    string definition = "a fermion (an elementary particle with spin of ⁠that interacts only via the weak subatomic force and gravity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neutrino";
        }
    }

    return nullptr;
}

string _Engineering::Terms::NewtonianFluid(string text)
{
    string model = "llama3";
    string definition = "a fluid in which the viscous stresses arising from its flow, at every point, are linearly correlated to the local strain rate—the rate of change of its deformation over time. That is equivalent to saying those forces are proportional to the rates of change of the fluid's velocity vector as one moves away from the point in question in various directions. More precisely, a fluid is Newtonian only if the tensors that describe the viscous stress and the strain rate are related by a constant viscosity tensor that does not depend on the stress state and velocity of the flow. If the fluid is also isotropic (that is, its mechanical properties are the same along any direction), the viscosity tensor reduces to two real coefficients, describing the fluid's resistance to continuous shear deformation and continuous compression or expansion, respectively.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Newtonian Fluid";
        }
    }

    return nullptr;
}

string _Engineering::Terms::NortansTheorem(string text)
{
    string model = "llama3";
    string definition = "a simplification that can be applied to networks made of linear time-invariant resistances, voltage sources, and current sources. At a pair of terminals of the network, it can be replaced by a current source and a single resistor in parallel. For alternating current (AC) systems the theorem can be applied to reactive impedances as well as resistances.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nortans Theorem";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Nozzle(string text)
{
    string model = "llama3";
    string definition = "a device designed to control the direction or characteristics of a fluid flow (especially to increase velocity) as it exits (or enters) an enclosed chamber or pipe. A nozzle is often a pipe or tube of varying cross sectional area, and it can be used to direct or modify the flow of a fluid (liquid or gas). Nozzles are frequently used to control the rate of flow, speed, direction, mass, shape, and/or the pressure of the stream that emerges from them. In a nozzle, the velocity of fluid increases at the expense of its pressure energy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nozzle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::NthRoot(string text)
{
    string model = "llama3";
    string definition = "To put a number of function to the exponential power of 1/n.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nth Root";
        }
    }

    return nullptr;
}

string _Engineering::Terms::NuclearBindingEnergy(string text)
{
    string model = "llama3";
    string definition = "The difference between the total mass energy of a nucleus and the mass energy of the isolated nucleons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nuclear Binding Energy";
        }
    }

    return nullptr;
}

string _Engineering::Terms::NuclearEngineering(string text)
{
    string model = "llama3";
    string definition = "The profession that deals with nuclear power.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nuclear Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::NuclearFusion(string text)
{
    string model = "llama3";
    string definition = "a reaction in which two or more atomic nuclei are combined to form one or more different atomic nuclei and subatomic particles (neutrons or protons). The difference in mass between the reactants and products is manifested as either the release or the absorption of energy. This difference in mass arises due to the difference in atomic binding energy between the nuclei before and after the reaction. Fusion is the process that powers active or main sequence stars and other high-magnitude stars, where large amounts of energy are released.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nuclear Fusion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::NuclearPhysics(string text)
{
    string model = "llama3";
    string definition = "The science that describes the components of atoms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nuclear Physics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::NuclearPotentialEnergy(string text)
{
    string model = "llama3";
    string definition = "The energy that is given up in decay of an unstable nucleus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nuclear Potential Energy";
        }
    }

    return nullptr;
}

string _Engineering::Terms::NuclearPower(string text)
{
    string model = "llama3";
    string definition = "The use of energy derived from nuclear chain reactions for electricity production or ship propulsion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nuclear Power";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Ohm(string text)
{
    string model = "llama3";
    string definition = "The SI unit of electrical resistance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ohm";
        }
    }

    return nullptr;
}

string _Engineering::Terms::OhmsLaw(string text)
{
    string model = "llama3";
    string definition = "A law describing the relationship between resistance, current, and voltage.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ohms Law";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Optics(string text)
{
    string model = "llama3";
    string definition = "The study of light.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Optics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::OrganicChemistry(string text)
{
    string model = "llama3";
    string definition = "The study of carbon compounds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Organic Chemistry";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Osmosis(string text)
{
    string model = "llama3";
    string definition = "The spontaneous movement of molecules or ions through a semi-permable membrane, tending to equalize concentration on both sides.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Osmosis";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ParallelCircuit(string text)
{
    string model = "llama3";
    string definition = "A circuit that begins and ends at the same node as another circuit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Parallel Circuit";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ParityMathematics(string text)
{
    string model = "llama3";
    string definition = "the property of an integer of whether it is even or odd. An integer's parity is even if it is divisible by two with no remainders left and its parity is odd if its remainder is 1";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Parity Mathematics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ParityPhysics(string text)
{
    string model = "llama3";
    string definition = "the flip in the sign of one spatial coordinate. In three dimensions, it can also refer to the simultaneous flip in the sign of all three spatial coordinates (a point reflection):";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Parity Physics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Paramagnetism(string text)
{
    string model = "llama3";
    string definition = "a form of magnetism whereby some materials are weakly attracted by an externally applied magnetic field, and form internal, induced magnetic fields in the direction of the applied magnetic field. In contrast with this behavior, diamagnetic materials are repelled by magnetic fields and form induced magnetic fields in the direction opposite to that of the applied magnetic field.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Paramagnetism";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ParticalAccelerator(string text)
{
    string model = "llama3";
    string definition = "is a machine that uses electromagnetic fields to propel charged particles to very high speeds and energies, and to contain them in well-defined beams.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Partical Accelerator";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ParticleDisplacement(string text)
{
    string model = "llama3";
    string definition = "a measurement of distance of the movement of a sound particle from its equilibrium position in a medium as it transmits a sound wave.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Particle Displacement";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ParticlePhysics(string text)
{
    string model = "llama3";
    string definition = "a branch of physics that studies the nature of the particles that constitute matter and radiation. Although the word particle can refer to various types of very small objects (e.g. protons, gas particles, or even household dust), particle physics usually investigates the irreducibly smallest detectable particles and the fundamental interactions necessary to explain their behaviour. In current understanding, these elementary particles are excitations of the quantum fields that also govern their interactions. The currently dominant theory explaining these fundamental particles and fields, along with their dynamics, is called the Standard Model.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Particle Physics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::PascalsLaw(string text)
{
    string model = "llama3";
    string definition = "the principle of transmission of fluid-pressure) is a principle in fluid mechanics that states that a pressure change occurring anywhere in a confined incompressible fluid is transmitted throughout the fluid such that the same change occurs everywhere.[";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pascals Law";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Pendulum(string text)
{
    string model = "llama3";
    string definition = "a weight suspended from a pivot so that it can swing freely. When a pendulum is displaced sideways from its resting, equilibrium position, it is subject to a restoring force due to gravity that will accelerate it back toward the equilibrium position. When released, the restoring force acting on the pendulum's mass causes it to oscillate about the equilibrium position, swinging back and forth. The time for one complete cycle, a left swing and a right swing, is called the period. The period depends on the length of the pendulum and also to a slight degree on the amplitude, the width of the pendulum's swing.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pendulum";
        }
    }

    return nullptr;
}

string _Engineering::Terms::PetroleumEngineering(string text)
{
    string model = "llama3";
    string definition = "a field of engineering concerned with the activities related to the production of hydrocarbons, which can be either crude oil or natural gas. Exploration and production are deemed to fall within the upstream sector of the oil and gas industry. Exploration, by earth scientists, and petroleum engineering are the oil and gas industry's two main subsurface disciplines, which focus on maximizing economic recovery of hydrocarbons from subsurface reservoirs. Petroleum geology and geophysics focus on provision of a static description of the hydrocarbon reservoir rock, while petroleum engineering focuses on estimation of the recoverable volume of this resource using a detailed understanding of the physical behavior of oil, water and gas within porous rock at very high pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Petroleum Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::PH(string text)
{
    string model = "llama3";
    string definition = "A logarithmic measure of the concentration of hydrogen ions in an acid or base solution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PH";
        }
    }

    return nullptr;
}

string _Engineering::Terms::PhaseMatter(string text)
{
    string model = "llama3";
    string definition = "a phase is a region of space (a thermodynamic system), throughout which all physical properties of a material are essentially uniform.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phase Matter";
        }
    }

    return nullptr;
}

string _Engineering::Terms::PhaseWaves(string text)
{
    string model = "llama3";
    string definition = "a phase is a region of space (a thermodynamic system), throughout which all physical properties of a material are essentially uniform.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phase Waves";
        }
    }

    return nullptr;
}

string _Engineering::Terms::PhaseDiagram(string text)
{
    string model = "llama3";
    string definition = "a type of chart used to show conditions (pressure, temperature, volume, etc.) at which thermodynamically distinct phases (such as solid, liquid or gaseous states) occur and coexist at equilibrium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phase Diagram";
        }
    }

    return nullptr;
}

string _Engineering::Terms::PhaseRule(string text)
{
    string model = "llama3";
    string definition = "the phase rule is a general principle governing \"pVT\" systems (that is, systems whose states are completely described by the variables pressure (p), volume (V) and temperature (T)) in thermodynamic equilibrium. If F is the number of degrees of freedom, C is the number of components and P is the number of phases, then F=C-P+2.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phase Rule";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Photon(string text)
{
    string model = "llama3";
    string definition = "a type of elementary particle. It is the quantum of the electromagnetic field including electromagnetic radiation such as light and radio waves, and the force carrier for the electromagnetic force. Photons are massless, so they always move at the speed of light in vacuum.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Photon";
        }
    }

    return nullptr;
}

string _Engineering::Terms::PhysicalChemistry(string text)
{
    string model = "llama3";
    string definition = "the study of macroscopic, and particulate phenomena in chemical systems in terms of the principles, practices, and concepts of physics such as motion, energy, force, time, thermodynamics, quantum chemistry, statistical mechanics, analytical dynamics and chemical equilibrium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Physical Chemistry";
        }
    }

    return nullptr;
}

string _Engineering::Terms::PhysicalQuantity(string text)
{
    string model = "llama3";
    string definition = "a property of a material or system that can be quantified by measurement. A physical quantity can be expressed as a value, which is the algebraic multiplication of a numerical value and a unit. For example, the physical quantity mass can be quantified as n kg, where n is the numerical value and kg is the unit. A physical quantity possesses at least two characteristics in common. One is numerical magnitude and the other is the unit in which it is measured.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Physical Quantity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Physics(string text)
{
    string model = "llama3";
    string definition = "the natural science that studies matter, its motion and behavior through space and time, and the related entities of energy and force.  Physics is one of the most fundamental scientific disciplines, and its main goal is to understand how the universe behaves.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Physics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::PlanckConstant(string text)
{
    string model = "llama3";
    string definition = "a fundamental physical constant denoted h, and is of fundamental importance in quantum mechanics. A photon's energy is equal to its frequency multiplied by the Planck constant. Due to mass–energy equivalence, the Planck constant also relates mass to frequency. In metrology it is used, together with other constants, to define the kilogram, an SI unit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Planck Constant";
        }
    }

    return nullptr;
}

string _Engineering::Terms::PlasmaPhysics(string text)
{
    string model = "llama3";
    string definition = "Is one of the four fundamental states of matter, first systematically studied by Irving Langmuir in the 1920s. It consists of a gas of ions – atoms or molecules which have one or more orbital electrons stripped (or, rarely, an extra electron attached), and free electrons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Plasma Physics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Plasticity(string text)
{
    string model = "llama3";
    string definition = "the ability of a solid material to undergo permanent deformation, a non-reversible change of shape in response to applied forces. For example, a solid piece of metal being bent or pounded into a new shape displays plasticity as permanent changes occur within the material itself. In engineering, the transition from elastic behavior to plastic behavior is known as yielding.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Plasticity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Pneumatics(string text)
{
    string model = "llama3";
    string definition = "The control of mechanical force and movement, generated by the application of compressed gas.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pneumatics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::PointEstimation(string text)
{
    string model = "llama3";
    string definition = "point estimation involves the use of sample data to calculate a single value (known as a point estimate since it identifies a point in some parameter space) which is to serve as a \"best guess\" or \"best estimate\" of an unknown population parameter (for example, the population mean). More formally, it is the application of a point estimator to the data to obtain a point estimate. Point estimation can be contrasted with interval estimation: such interval estimates are typically either confidence intervals, in the case of frequentist inference, or credible intervals, in the case of Bayesian inference. More generally, a point estimator can be contrasted with a set estimator. Examples are given by confidence sets or credible sets. A point estimator can also be contrasted with a distribution estimator. Examples are given by confidence distributions, randomized estimators, and Bayesian posteriors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Point Estimation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::PolyphaseSystem(string text)
{
    string model = "llama3";
    string definition = "An electrical system that uses a set of alternating currents at different phases";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Polyphase System";
        }
    }

    return nullptr;
}

string _Engineering::Terms::PowerElectric(string text)
{
    string model = "llama3";
    string definition = "Electric power is the rate, per unit time, at which electrical energy is transferred by an electric circuit. The SI unit of power is the watt, one joule per second. Electric power is usually produced by electric generators, but can also be supplied by sources such as electric batteries. It is usually supplied to businesses and homes (as domestic mains electricity) by the electric power industry through an electric power grid. Electric power can be delivered over long distances by transmission lines and used for applications such as motion, light or heat with high efficiency.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Power Electric";
        }
    }

    return nullptr;
}

//string _Engineering::Terms::PowerElectric(string text)
//{
//    string model = "llama3";
//    string definition = "the amount of energy transferred or converted per unit time. In the International System of Units, the unit of power is the watt, equal to one joule per second. In older works, power is sometimes called activity.";
//    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
//    string response = _LLM::OllamaAPI(model, prompt, "NULL");
//    response = _Parsers::LLM::LLama3Parse(response);
//    string* words = _Utilities::String2Words(response);
//    words = _Utilities::RemovePunctuationArr(words);
//    words = _Utilities::ArrayOfStringsToLowercase(words);
//
//    for (int x = 0; x < sizeof(words); x++)
//    {
//        if (words[x] == "yes")
//        {
//            return "Power Electric";
//        }
//    }
//
//    return nullptr;
//}

string _Engineering::Terms::PowerFactor(string text)
{
    string model = "llama3";
    string definition = "In electrical engineering, the power factor of an AC power system is defined as the ratio of the real power absorbed by the load to the apparent power flowing in the circuit, and is a dimensionless number in the closed interval of −1 to 1. A power factor of less than one indicates the voltage and current are not in phase, reducing the average product of the two. Real power is the instantaneous product of voltage and current and represents the capacity of the electricity for performing work. Apparent power is the product of RMS current and voltage. Due to energy stored in the load and returned to the source, or due to a non-linear load that distorts the wave shape of the current drawn from the source, the apparent power may be greater than the real power. A negative power factor occurs when the device (which is normally the load) generates power, which then flows back towards the source.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Power Factor";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Pressure(string text)
{
    string model = "llama3";
    string definition = "the force applied perpendicular to the surface of an object per unit area over which that force is distributed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pressure";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Probability(string text)
{
    string model = "llama3";
    string definition = "the branch of mathematics concerning numerical descriptions of how likely an event is to occur, or how likely it is that a proposition is true. The probability of an event is a number between 0 and 1, where, roughly speaking, 0 indicates impossibility of the event and 1 indicates certainty.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Probability";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ProbabilityDistribution(string text)
{
    string model = "llama3";
    string definition = "a probability distribution is the mathematical function that gives the probabilities of occurrence of different possible outcomes for an experiment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Probability Distribution";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ProbabilityTheory(string text)
{
    string model = "llama3";
    string definition = "is the branch of mathematics concerned with probability. Although there are several different probability interpretations, probability theory treats the concept in a rigorous mathematical manner by expressing it through a set of axioms. Typically these axioms formalise probability in terms of a probability space, which assigns a measure taking values between 0 and 1, termed the probability measure, to a set of outcomes called the sample space. Any specified subset of these outcomes is called an event. Central subjects in probability theory include discrete and continuous random variables, probability distributions, and stochastic processes, which provide mathematical abstractions of non-deterministic or uncertain processes or measured quantities that may either be single occurrences or evolve over time in a random fashion. Although it is not possible to perfectly predict random events, much can be said about their behavior. Two major results in probability theory describing such behaviour are the law of large numbers and the central limit theorem. As a mathematical foundation for statistics, probability theory is essential to many human activities that involve quantitative analysis of data. Methods of probability theory also apply to descriptions of complex systems given only partial knowledge of their state, as in statistical mechanics or sequential estimation. A great discovery of twentieth-century physics was the probabilistic nature of physical phenomena at atomic scales, described in quantum mechanics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Probability Theory";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Process(string text)
{
    string model = "llama3";
    string definition = "a process is a series of interrelated tasks that, together, transform inputs into a given output.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Process";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Pulley(string text)
{
    string model = "llama3";
    string definition = "a wheel on an axle or shaft that is designed to support movement and change of direction of a taut cable or belt, or transfer of power between the shaft and cable or belt. In the case of a pulley supported by a frame or shell that does not transfer power to a shaft, but is used to guide the cable or exert a force, the supporting shell is called a block, and the pulley may be called a sheave. A pulley may have a groove or grooves between flanges around its circumference to locate the cable or belt. The drive element of a pulley system can be a rope, cable, belt, or chain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pulley";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Pump(string text)
{
    string model = "llama3";
    string definition = "a device that moves fluids (liquids or gases), or sometimes slurries, by mechanical action, typically converted from electrical energy into hydraulic energy. Pumps can be classified into three major groups according to the method they use to move the fluid: direct lift, displacement, and gravity pumps. Pumps operate by some mechanism (typically reciprocating or rotary), and consume energy to perform mechanical work moving the fluid. Pumps operate via many energy sources, including manual operation, electricity, engines, or wind power, and come in many sizes, from microscopic for use in medical applications, to large industrial pumps.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pump";
        }
    }

    return nullptr;
}

string _Engineering::Terms::QuantumElectrodynamics(string text)
{
    string model = "llama3";
    string definition = "the relativistic quantum field theory of electrodynamics. In essence, it describes how light and matter interact and is the first theory where full agreement between quantum mechanics and special relativity is achieved. QED mathematically describes all phenomena involving electrically charged particles interacting by means of exchange of photons and represents the quantum counterpart of classical electromagnetism giving a complete account of matter and light interaction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quantum Electrodynamics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::QuantumFieldTheory(string text)
{
    string model = "llama3";
    string definition = "a theoretical framework that combines classical field theory, special relativity and quantum mechanics, but not general relativity's description of gravity. QFT is used in particle physics to construct physical models of subatomic particles and in condensed matter physics to construct models of quasiparticles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quantum Field Theory";
        }
    }

    return nullptr;
}

string _Engineering::Terms::QuantumMechanics(string text)
{
    string model = "llama3";
    string definition = "a fundamental theory in physics that provides a description of the physical properties of nature at the scale of atoms and subatomic particles. It is the foundation of all quantum physics including quantum chemistry, quantum field theory, quantum technology, and quantum information science.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quantum Mechanics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Regulation(string text)
{
    string model = "llama3";
    string definition = "The phenomena of melting under pressure, then freezing when the pressure is reduced.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Regulation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::RelativeDensity(string text)
{
    string model = "llama3";
    string definition = "the ratio of the density (mass of a unit volume) of a substance to the density of a given reference material. Specific gravity for liquids is nearly always measured with respect to water at its densest (at 4C or 39.2F); for gases, the reference is air at room temperature (20C or 68F). The term \"relative density\" is often preferred in scientific usage.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Relative Density";
        }
    }

    return nullptr;
}

string _Engineering::Terms::RelativeVelocity(string text)
{
    string model = "llama3";
    string definition = "the velocity of an object or observer B in the rest frame of another object or observer A.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Relative Velocity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ReliabilityEngineering(string text)
{
    string model = "llama3";
    string definition = "emphasizes the ability of equipment to function without failure. Reliability describes the ability of a system or component to function under stated conditions for a specified period of time. Reliability is closely related to availability, which is typically described as the ability of a component or system to function at a specified moment or interval of time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reliability Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Resistivity(string text)
{
    string model = "llama3";
    string definition = "a fundamental property of a material that quantifies how strongly it resists or conducts electric current. A low resistivity indicates a material that readily allows electric current.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Resistivity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Resistor(string text)
{
    string model = "llama3";
    string definition = "a passive two-terminal electrical component that implements electrical resistance as a circuit element. In electronic circuits, resistors are used to reduce current flow, adjust signal levels, to divide voltages, bias active elements, and terminate transmission lines, among other uses. High-power resistors that can dissipate many watts of electrical power as heat, may be used as part of motor controls, in power distribution systems, or as test loads for generators. Fixed resistors have resistances that only change slightly with temperature, time or operating voltage. Variable resistors can be used to adjust circuit elements (such as a volume control or a lamp dimmer), or as sensing devices for heat, light, humidity, force, or chemical activity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Resistor";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ReynoldsNumber(string text)
{
    string model = "llama3";
    string definition = "helps predict flow patterns in different fluid flow situations. At low Reynolds numbers, flows tend to be dominated by laminar (sheet-like) flow, while at high Reynolds numbers flows tend to be turbulent. The turbulence results from differences in the fluid's speed and direction, which may sometimes intersect or even move counter to the overall direction of the flow (eddy currents). These eddy currents begin to churn the flow, using up energy in the process, which for liquids increases the chances of cavitation. Reynolds numbers are an important dimensionless quantity in fluid mechanics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reynolds Number";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Rheology(string text)
{
    string model = "llama3";
    string definition = "the study of the flow of matter, primarily in a liquid or gas state, but also as \"soft solids\" or solids under conditions in which they respond with plastic flow rather than deforming elastically in response to an applied force. Rheology is a branch of physics, and it is the science that deals with the deformation and flow of materials, both solids and liquids.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rheology";
        }
    }

    return nullptr;
}

string _Engineering::Terms::RigidBody(string text)
{
    string model = "llama3";
    string definition = "a solid body in which deformation is zero or so small it can be neglected. The distance between any two given points on a rigid body remains constant in time regardless of external forces or moments exerted on it. A rigid body is usually considered as a continuous distribution of mass. In the study of special relativity, a perfectly rigid body does not exist; and objects can only be assumed to be rigid if they are not moving near the speed of light. In quantum mechanics, a rigid body is usually thought of as a collection of point masses. For instance, molecules (consisting of the point masses: electrons and nuclei) are often seen as rigid bodies";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rigid Body";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Robonaut(string text)
{
    string model = "llama3";
    string definition = "A development project conducted by NASA to create humanoid robots capable of using space tools and working in similar environments to suited astronauts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Robonaut";
        }
    }

    return nullptr;
}

string _Engineering::Terms::RobotAssistedSurgery(string text)
{
    string model = "llama3";
    string definition = "types of surgical procedures that are done using robotic systems. Robotically-assisted surgery was developed to try to overcome the limitations of pre-existing minimally-invasive surgical procedures and to enhance the capabilities of surgeons performing open surgery. In the case of robotically-assisted minimally-invasive surgery, instead of directly moving the instruments, the surgeon uses one of two methods to administer the instruments. These include using a direct telemanipulator or through computer control. A telemanipulator is a remote manipulator that allows the surgeon to perform the normal movements associated with the surgery. The robotic arms carry out those movements using end-effectors and manipulators to perform the actual surgery. In computer-controlled systems, the surgeon uses a computer to control the robotic arms and its end-effectors, though these systems can also still use telemanipulators for their input. One advantage of using the computerized method is that the surgeon does not have to be present, leading to the possibility for remote surgery.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Robot Assisted Surgery";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Robotics(string text)
{
    string model = "llama3";
    string definition = "an interdisciplinary field that integrates computer science and engineering. Robotics involves design, construction, operation, and use of robots. The goal of robotics is to design machines that can help and assist humans. Robotics integrates fields of mechanical engineering, electrical engineering, information engineering, mechatronics, electronics, bioengineering, computer engineering, control engineering, software engineering, among others.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Robotics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::RootMeanSquare(string text)
{
    string model = "llama3";
    string definition = "the root mean square (RMS or rms) is defined as the square root of the mean square (the arithmetic mean of the squares of a set of numbers).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Root Mean Square";
        }
    }

    return nullptr;
}

string _Engineering::Terms::RootMeanSquareSpeed(string text)
{
    string model = "llama3";
    string definition = "defined as the square root of the average squared-speed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Root Mean Square Speed";
        }
    }

    return nullptr;
}

string _Engineering::Terms::RotationalEnergy(string text)
{
    string model = "llama3";
    string definition = "kinetic energy due to the rotation of an object and is part of its total kinetic energy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rotational Energy";
        }
    }

    return nullptr;
}

string _Engineering::Terms::RotationalSpeed(string text)
{
    string model = "llama3";
    string definition = "the number of turns of the object divided by time, specified as revolutions per minute (rpm), cycles per second (cps), radians per second (rad/s), etc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rotational Speed";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SafeFailureFraction(string text)
{
    string model = "llama3";
    string definition = "the proportion of failures that are either non-hazardous or detected automatically. The opposite of SFF is the proportion of undetected, hazardous failures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Safe Failure Fraction";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SaftyDataSheet(string text)
{
    string model = "llama3";
    string definition = "documents that list information relating to occupational safety and health for the use of various substances and products. SDSs are a widely used system for cataloguing information on chemicals, chemical compounds, and chemical mixtures. SDS information may include instructions for the safe use and potential hazards associated with a particular material or product, along with spill-handling procedures. The older MSDS formats could vary from source to source within a country depending on national requirements; however, the newer SDS format is internationally standardized.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Safty Data Sheet";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SanitaryEngineering(string text)
{
    string model = "llama3";
    string definition = "the application of engineering methods to improve sanitation of human communities, primarily by providing the removal and disposal of human waste, and in addition to the supply of safe potable water.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sanitary Engineering";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SaturatedCompound(string text)
{
    string model = "llama3";
    string definition = "a chemical compound (or ion) that resists the addition reactions, such as hydrogenation, oxidative addition, and binding of a Lewis base. The term is used in many contexts and for many classes of chemical compounds. Overall, saturated compounds are less reactive than unsaturated compounds. Saturation is derived from the Latin word saturare, meaning \'to fill\')";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Saturated Compound";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ScalarMathematics(string text)
{
    string model = "llama3";
    string definition = "an element of a field which is used to define a vector space. In linear algebra, real numbers or generally elements of a field are called scalars and relate to vectors in an associated vector space through the operation of scalar multiplication (defined in the vector space), in which a vector can be multiplied by a scalar in the defined way to produce another vector.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Scalar Mathematics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ScalarPhysics(string text)
{
    string model = "llama3";
    string definition = "scalars are physical quantities that can be described by a single pure number (a scalar, typically a real number), accompanied by a unit of measurement, as in \"10 cm\" (ten centimeters).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Scalar Physics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ScalarMultiplication(string text)
{
    string model = "llama3";
    string definition = "one of the basic operations defining a vector space in linear algebra (or more generally, a module in abstract algebra. In common geometrical contexts, scalar multiplication of a real Euclidean vector by a positive real number multiplies the magnitude of the vector—without changing its direction. The term \"scalar\" itself derives from this usage: a scalar is that which scales vectors. Scalar multiplication is the multiplication of a vector by a scalar (where the product is a vector), and is to be distinguished from inner product of two vectors (where the product is a scalar).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Scalar Multiplication";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Screw(string text)
{
    string model = "llama3";
    string definition = " mechanism that converts rotational motion to linear motion, and a torque (rotational force) to a linear force. It is one of the six classical simple machines. The most common form consists of a cylindrical shaft with helical grooves or ridges called threads around the outside. The screw passes through a hole in another object or medium, with threads on the inside of the hole that mesh with the screw's threads. When the shaft of the screw is rotated relative to the stationary threads, the screw moves along its axis relative to the medium surrounding it; for example rotating a wood screw forces it into wood. In screw mechanisms, either the screw shaft can rotate through a threaded hole in a stationary object, or a threaded collar such as a nut can rotate around a stationary screw shaft";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Screw";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SeriesCircuit(string text)
{
    string model = "llama3";
    string definition = "An electrical circuit in which the same current passes through each component, with only one path.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Series Circuit";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Servo(string text)
{
    string model = "llama3";
    string definition = "A motor that moves to and maintains a set position under command, rather than continuously moving.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Servo";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Servomechanism(string text)
{
    string model = "llama3";
    string definition = "An automatic device that uses error-sensing negative feedback to correct the performance of a mechanism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Servomechanism";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ShadowMatter(string text)
{
    string model = "llama3";
    string definition = "In physics, mirror matter, also called shadow matter or Alice matter, is a hypothetical counterpart to ordinary matter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Shadow Matter";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ShearFlow(string text)
{
    string model = "llama3";
    string definition = "used in solid mechanics as well as in fluid dynamics. The expression shear flow is used to indicate: a shear stress over a distance in a thin-walled structure (in solid mechanics); the flow induced by a force (in a fluid).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Shear Flow";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ShearStrength(string text)
{
    string model = "llama3";
    string definition = "the strength of a material or component against the type of yield or structural failure when the material or component fails in shear. A shear load is a force that tends to produce a sliding failure on a material along a plane that is parallel to the direction of the force. When a paper is cut with scissors, the paper fails in shear. In structural and mechanical engineering, the shear strength of a component is important for designing the dimensions and materials to be used for the manufacture or construction of the component (e.g. beams, plates, or bolts). In a reinforced concrete beam, the main purpose of reinforcing bar (rebar) stirrups is to increase the shear strength.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Shear Strength";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ShearStress(string text)
{
    string model = "llama3";
    string definition = "the component of stress coplanar with a material cross section. It arises from the shear force, the component of force vector parallel to the material cross section. Normal stress, on the other hand, arises from the force vector component perpendicular to the material cross section on which it acts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Shear Stress";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ShortwaveRadiation(string text)
{
    string model = "llama3";
    string definition = "radiant energy with wavelengths in the visible (VIS), near-ultraviolet (UV), and near-infrared (NIR) spectra.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Shortwave Radiation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SIUnits(string text)
{
    string model = "llama3";
    string definition = "radiant energy with wavelengths in the visible (VIS), near-ultraviolet (UV), and near-infrared (NIR) spectra.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SI Units";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SignalProcessing(string text)
{
    string model = "llama3";
    string definition = "electrical engineering subfield that focuses on analysing, modifying, and synthesizing signals such as sound, images, and scientific measurements Signal processing techniques can be used to improve transmission, storage efficiency and subjective quality and to also emphasize or detect components of interest in a measured signal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Signal Processing";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SimpleMachine(string text)
{
    string model = "llama3";
    string definition = "a mechanical device that changes the direction or magnitude of a force. In general, they can be defined as the simplest mechanisms that use mechanical advantage (also called leverage) to multiply force. Usually the term refers to the six classical simple machines that were defined by Renaissance scientists: Lever, Wheel and axle, Pulley, Inclined plane, Wedge, and Screw.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Simple Machine";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Siphon(string text)
{
    string model = "llama3";
    string definition = "the branch of continuum mechanics that studies the behavior of solid materials, especially their motion and deformation under the action of forces, temperature changes, phase changes, and other external or internal agents.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Siphon";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SolidMechanics(string text)
{
    string model = "llama3";
    string definition = "the study of rigid matter, or solids, through methods such as quantum mechanics, crystallography, electromagnetism, and metallurgy. It is the largest branch of condensed matter physics. Solid-state physics studies how the large-scale properties of solid materials result from their atomic-scale properties. Thus, solid-state physics forms a theoretical basis of materials science. It also has direct applications, for example in the technology of transistors and semiconductors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Solid Mechanics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SolidStatePhysics(string text)
{
    string model = "llama3";
    string definition = "a type of alloying that can be used to improve the strength of a pure metal. The technique works by adding atoms of one element (the alloying element) to the crystalline lattice of another element (the base metal), forming a solid solution. The local nonuniformity in the lattice due to the alloying element makes plastic deformation more difficult by impeding dislocation motion through stress fields. In contrast, alloying beyond the solubility limit can form a second phase, leading to strengthening via other mechanisms (e.g. the precipitation of intermetallic compounds).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Solid State Physics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SolidSolutionStrengthening(string text)
{
    string model = "llama3";
    string definition = "is a type of alloying that can be used to improve the strength of a pure metal. The technique works by adding atoms of one element (the alloying element) to the crystalline lattice of another element (the base metal), forming a solid solution. The local nonuniformity in the lattice due to the alloying element makes plastic deformation more difficult by impeding dislocation motion through stress fields. In contrast, alloying beyond the solubility limit can form a second phase, leading to strengthening via other mechanisms (e.g. the precipitation of intermetallic compounds).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Solid Solution Strengthening";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Solubility(string text)
{
    string model = "llama3";
    string definition = "the property of a solid, liquid or gaseous chemical substance called solute to dissolve in a solid, liquid or gaseous solvent. The solubility of a substance fundamentally depends on the physical and chemical properties of the solute and solvent as well as on temperature, pressure and presence of other chemicals (including changes to the pH) of the solution. The extent of the solubility of a substance in a specific solvent is measured as the saturation concentration, where adding more solute does not increase the concentration of the solution and begins to precipitate the excess amount of solute.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Solubility";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SolubilityEquilibrium(string text)
{
    string model = "llama3";
    string definition = "a type of dynamic equilibrium that exists when a chemical compound in the solid state is in chemical equilibrium with a solution of that compound. The solid may dissolve unchanged, with dissociation or with chemical reaction with another constituent of the solution, such as acid or alkali. Each solubility equilibrium is characterized by a temperature-dependent solubility product which functions like an equilibrium constant. Solubility equilibria are important in pharmaceutical, environmental and many other scenarios.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Solubility Equilibrium";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Sound(string text)
{
    string model = "llama3";
    string definition = "a vibration that propagates as an acoustic wave, through a transmission medium such as a gas, liquid or solid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sound";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SpecialRelativity(string text)
{
    string model = "llama3";
    string definition = "a scientific theory regarding the relationship between space and time. In Albert Einstein's original treatment, the theory is based on two postulates: The laws of physics are invariant (that is, identical) in all inertial frames of reference (that is, frames of reference with no acceleration). The speed of light in vacuum is the same for all observers, regardless of the motion of the light source or observer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Special Relativity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SpecificHeat(string text)
{
    string model = "llama3";
    string definition = "The amount of energy required to change the temperature of a unit mass of substance by one degree.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Specific Heat";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SpecificGravity(string text)
{
    string model = "llama3";
    string definition = "The ratio between the mass density of a substance to that of water.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Specific Gravity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SpecificVolume(string text)
{
    string model = "llama3";
    string definition = "The volume of a unit mass of a substance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Specific Volume";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SpecificWeight(string text)
{
    string model = "llama3";
    string definition = "The weight of a substance per unit volume.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Specific Weight";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SpontaneousCombustion(string text)
{
    string model = "llama3";
    string definition = "Spontaneous combustion or spontaneous ignition is a type of combustion which occurs by self-heating (increase in temperature due to exothermic internal reactions), followed by thermal runaway (self heating which rapidly accelerates to high temperatures) and finally, autoignition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Spontaneous Combustion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::StagnationPressure(string text)
{
    string model = "llama3";
    string definition = "In fluid dynamics, stagnation pressure (or pitot pressure) is the static pressure at a stagnation point in a fluid flow. At a stagnation point the fluid velocity is zero. In an incompressible flow, stagnation pressure is equal to the sum of the free-stream static pressure and the free-stream dynamic pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stagnation Pressure";
        }
    }

    return nullptr;
}

string _Engineering::Terms::StandardElectrodePotential(string text)
{
    string model = "llama3";
    string definition = "a measure of the reducing power of any element or compound";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Standard Electrode Potential";
        }
    }

    return nullptr;
}

string _Engineering::Terms::StateOfMatter(string text)
{
    string model = "llama3";
    string definition = "a state of matter is one of the distinct forms in which matter can exist. Four states of matter are observable in everyday life: solid, liquid, gas, and plasma. Many intermediate states are known to exist, such as liquid crystal, and some states only exist under extreme conditions, such as Bose–Einstein condensates, neutron-degenerate matter, and quark–gluon plasma, which only occur, respectively, in situations of extreme cold, extreme density, and extremely high energy. For a complete list of all exotic states of matter, see the list of states of matter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "State Of Matter";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Statics(string text)
{
    string model = "llama3";
    string definition = "The study of forces in a non-moving, rigid body.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Statics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Statistics(string text)
{
    string model = "llama3";
    string definition = "the discipline that concerns the collection, organization, analysis, interpretation, and presentation of data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Statistics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SteamTable(string text)
{
    string model = "llama3";
    string definition = "Thermodynamic data table containing steam or water properties";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Steam Table";
        }
    }

    return nullptr;
}

string _Engineering::Terms::StefanBoltzmannLaw(string text)
{
    string model = "llama3";
    string definition = "describes the power radiated from a black body in terms of its temperature. Specifically, the Stefan–Boltzmann law states that the total energy radiated per unit surface area of a black body across all wavelengths per unit time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stefan Boltzmann Law";
        }
    }

    return nullptr;
}

string _Engineering::Terms::StewartPlatform(string text)
{
    string model = "llama3";
    string definition = "a type of parallel manipulator that has six prismatic actuators, commonly hydraulic jacks or electric linear actuators, attached in pairs to three positions on the platform's baseplate, crossing over to three mounting points on a top plate. All 12 connections are made via universal joints. Devices placed on the top plate can be moved in the six degrees of freedom in which it is possible for a freely-suspended body to move: three linear movements x, y, z (lateral, longitudinal, and vertical), and the three rotations (pitch, roll, and yaw).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stewart Platform";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Stiffness(string text)
{
    string model = "llama3";
    string definition = "the extent to which an object resists deformation in response to an applied force.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stiffness";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Stoichiometry(string text)
{
    string model = "llama3";
    string definition = "refers to the relationship between the quantities of reactants and products before, during, and following chemical reactions. Stoichiometry is founded on the law of conservation of mass where the total mass of the reactants equals the total mass of the products, leading to the insight that the relations among quantities of reactants and products typically form a ratio of positive integers. This means that if the amounts of the separate reactants are known, then the amount of the product can be calculated. Conversely, if one reactant has a known quantity and the quantity of the products can be empirically determined, then the amount of the other reactants can also be calculated.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stoichiometry";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Strain(string text)
{
    string model = "llama3";
    string definition = "the change in the shape or size of an object. It has dimension of length with SI unit of metre (m). It is quantified as the residual displacement of particles in a non-rigid body, from an initial configuration to a final configuration, excluding the body's average translation and rotation (its rigid transformation).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Strain";
        }
    }

    return nullptr;
}

string _Engineering::Terms::StrainHardening(string text)
{
    string model = "llama3";
    string definition = "the strengthening of a metal or polymer by plastic deformation. Work hardening may be desirable, undesirable, or inconsequential, depending on the context. This strengthening occurs because of dislocation movements and dislocation generation within the crystal structure of the material.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Strain Hardening";
        }
    }

    return nullptr;
}

string _Engineering::Terms::StrengthOfMaterials(string text)
{
    string model = "llama3";
    string definition = "refers to various methods of calculating the stresses and strains in structural members, such as beams, columns, and shafts. The methods employed to predict the response of a structure under loading and its susceptibility to various failure modes takes into account the properties of the materials such as its yield strength, ultimate strength, Young's modulus, and Poisson's ratio. In addition, the mechanical element's macroscopic properties (geometric properties) such as its length, width, thickness, boundary constraints and abrupt changes in geometry such as holes are considered.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Strength Of Materials";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Stress(string text)
{
    string model = "llama3";
    string definition = "stress is a physical quantity that expresses the internal forces that neighbouring particles of a continuous material exert on each other, while strain is the measure of the deformation of the material. For example, when a solid vertical bar is supporting an overhead weight, each particle in the bar pushes on the particles immediately below it. When a liquid is in a closed container under pressure, each particle gets pushed against by all the surrounding particles. The container walls and the pressure-inducing surface (such as a piston) push against them in (Newtonian) reaction. These macroscopic forces are actually the net result of a very large number of intermolecular forces and collisions between the particles in those molecules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stress";
        }
    }

    return nullptr;
}

string _Engineering::Terms::StressStrainAnalysis(string text)
{
    string model = "llama3";
    string definition = "an engineering discipline that uses many methods to determine the stresses and strains in materials and structures subjected to forces. In continuum mechanics, stress is a physical quantity that expresses the internal forces that neighboring particles of a continuous material exert on each other, while strain is the measure of the deformation of the material. In simple terms we can define stress as the force of resistance per unit per unit area, offered by a body against deformation. Stress is the ratio of force over area (S =R/A, where S is the stress, R is the internal resisting force and A is the cross-sectional area). Strain is the ratio of change in length to the original length, when a given body is subjected to some external force (Strain= change in length÷the original length).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stress Strain Analysis";
        }
    }

    return nullptr;
}

string _Engineering::Terms::StressStrainCurve(string text)
{
    string model = "llama3";
    string definition = "a material gives the relationship between stress and strain. It is obtained by gradually applying load to a test coupon and measuring the deformation, from which the stress and strain can be determined (see tensile testing). These curves reveal many of the properties of a material, such as the Young's modulus, the yield strength and the ultimate tensile strength.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stress Strain Curve";
        }
    }

    return nullptr;
}

string _Engineering::Terms::StructuralAnalysis(string text)
{
    string model = "llama3";
    string definition = "the determination of the effects of loads on physical structures and their components. Structures subject to this type of analysis include all that must withstand loads, such as buildings, bridges, aircraft and ships. Structural analysis employs the fields of applied mechanics, materials science and applied mathematics to compute a structure's deformations, internal forces, stresses, support reactions, accelerations, and stability. The results of the analysis are used to verify a structure's fitness for use, often precluding physical tests. Structural analysis is thus a key part of the engineering design of structures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Structural Analysis";
        }
    }

    return nullptr;
}

string _Engineering::Terms::StructuralLoad(string text)
{
    string model = "llama3";
    string definition = "a force, deformation, or acceleration applied to structural elements. A load causes stress, deformation, and displacement in a structure. Structural analysis, a discipline in engineering, analyzes the effects loads on structures and structural elements. Excess load may cause structural failure, so this should be considered and controlled during the design of a structure. Particular mechanical structures—such as aircraft, satellites, rockets, space stations, ships, and submarines—are subject to their own particular structural loads and actions. Engineers often evaluate structural loads based upon published regulations, contracts, or specifications. Accepted technical standards are used for acceptance testing and inspection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Structural Load";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Sublimation(string text)
{
    string model = "llama3";
    string definition = "the transition of a substance directly from the solid to the gas state, without passing through the liquid state. Sublimation is an endothermic process that occurs at temperatures and pressures below a substance's triple point in its phase diagram, which corresponds to the lowest pressure at which the substance can exist as a liquid. The reverse process of sublimation is deposition or desublimation, in which a substance passes directly from a gas to a solid phase.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sublimation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SubsumptionArchitecture(string text)
{
    string model = "llama3";
    string definition = "a reactive robotic architecture heavily associated with behavior-based robotics which was very popular in the 1980s and 90s.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Subsumption Architecture";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SurfaceTension(string text)
{
    string model = "llama3";
    string definition = "the tendency of liquid surfaces at rest to shrink into the minimum surface area possible. Surface tension is what allows objects with a higher density than water such as razor blades and insects (e.g. water striders) to float on a water surface without becoming even partly submerged.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Surface Tension";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Superconductivity(string text)
{
    string model = "llama3";
    string definition = "a set of physical properties observed in certain materials where electrical resistance vanishes and magnetic flux fields are expelled from the material. Any material exhibiting these properties is a superconductor. Unlike an ordinary metallic conductor, whose resistance decreases gradually as its temperature is lowered even down to near absolute zero, a superconductor has a characteristic critical temperature below which the resistance drops abruptly to zero. An electric current through a loop of superconducting wire can persist indefinitely with no power source.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Superconductivity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::SuperhardMeterial(string text)
{
    string model = "llama3";
    string definition = "a material with a hardness value exceeding 40 gigapascals (GPa) when measured by the Vickers hardness test. They are virtually incompressible solids with high electron density and high bond covalency. As a result of their unique properties, these materials are of great interest in many industrial areas including, but not limited to, abrasives, polishing and cutting tools, disc brakes, and wear-resistant and protective coatings.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Superhard Meterial";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Supersaturation(string text)
{
    string model = "llama3";
    string definition = "a chemical solution when the concentration of a solute exceeds the concentration specified by the value equilibrium solubility. Most commonly the term is applied to a solution of a solid in a liquid. A supersaturated solution is in a metastable state; it may be brought to equilibrium by forcing the excess of solute to separate from the solution. The term can also be applied to a mixture of gases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Supersaturation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::TangentialAcceleration(string text)
{
    string model = "llama3";
    string definition = "";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tangential Acceleration";
        }
    }

    return nullptr;
}

string _Engineering::Terms::TechnicalStandard(string text)
{
    string model = "llama3";
    string definition = "an established norm or requirement for a repeatable technical task. It is usually a formal document that establishes uniform engineering or technical criteria, methods, processes, and practices. In contrast, a custom, convention, company product, corporate standard, and so forth that becomes generally accepted and dominant is often called a de facto standard.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Technical Standard";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Temerature(string text)
{
    string model = "llama3";
    string definition = "a physical quantity that expresses hot and cold. It is the manifestation of thermal energy, present in all matter, which is the source of the occurrence of heat, a flow of energy, when a body is in contact with another that is colder. Temperature is measured with a thermometer. Thermometers are calibrated in various temperature scales that historically have used various reference points and thermometric substances for definition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Temerature";
        }
    }

    return nullptr;
}

string _Engineering::Terms::TemperingMetallurgy(string text)
{
    string model = "llama3";
    string definition = "Heat treatment to alter the crystal structure of a metal such as steel.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tempering Metallurgy";
        }
    }

    return nullptr;
}

string _Engineering::Terms::TensileForce(string text)
{
    string model = "llama3";
    string definition = "Pulling force, tending to lengthen an object.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tensile Force";
        }
    }

    return nullptr;
}

string _Engineering::Terms::TensileModulus(string text)
{
    string model = "llama3";
    string definition = "the modulus of elasticity in tension, is a mechanical property that measures the tensile stiffness of a solid material. It quantifies the relationship between tensile stress (force per unit area) and axial strain (proportional deformation) in the linear elastic region of a material.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tensile Modulus";
        }
    }

    return nullptr;
}

string _Engineering::Terms::TensileStrength(string text)
{
    string model = "llama3";
    string definition = "is the maximum stress that a material can withstand while being stretched or pulled before breaking. In brittle materials the ultimate tensile strength is close to the yield point, whereas in ductile materials the ultimate tensile strength can be higher.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tensile Strength";
        }
    }

    return nullptr;
}

string _Engineering::Terms::TensileTesting(string text)
{
    string model = "llama3";
    string definition = "a fundamental materials science and engineering test in which a sample is subjected to a controlled tension until failure. Properties that are directly measured via a tensile test are ultimate tensile strength, breaking strength, maximum elongation and reduction in area.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tensile Testing";
        }
    }

    return nullptr;
}

string _Engineering::Terms::TensionMember(string text)
{
    string model = "llama3";
    string definition = "structural elements that are subjected to axial tensile forces. Examples of tension members are bracing for buildings and bridges, truss members, and cables in suspended roof systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tension Member";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ThermalConduction(string text)
{
    string model = "llama3";
    string definition = "the transfer of internal energy by microscopic collisions of particles and movement of electrons within a body. The colliding particles, which include molecules, atoms and electrons, transfer disorganized microscopic kinetic and potential energy, jointly known as internal energy. Conduction takes place in all phases: solid, liquid, and gas.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Thermal Conduction";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ThermalEquilibrium(string text)
{
    string model = "llama3";
    string definition = "Two physical systems are in thermal equilibrium if there is no net flow of thermal energy between them when they are connected by a path permeable to heat. Thermal equilibrium obeys the zeroth law of thermodynamics. A system is said to be in thermal equilibrium with itself if the temperature within the system is spatially uniform and temporally constant. Systems in thermodynamic equilibrium are always in thermal equilibrium, but the converse is not always true. If the connection between the systems allows transfer of energy as 'change in internal energy' but does not allow transfer of matter or transfer of energy as work, the two systems may reach thermal equilibrium without reaching thermodynamic equilibrium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Thermal Equilibrium";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ThermalRadiation(string text)
{
    string model = "llama3";
    string definition = "is electromagnetic radiation generated by the thermal motion of particles in matter. All matter with a temperature greater than absolute zero emits thermal radiation. Particle motion results in charge-acceleration or dipole oscillation which produces electromagnetic radiation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Thermal Radiation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Thermodynamics(string text)
{
    string model = "llama3";
    string definition = "a branch of physics that deals with heat, work, and temperature, and their relation to energy, radiation, and physical properties of matter. The behavior of these quantities is governed by the four laws of thermodynamics which convey a quantitative description using measurable macroscopic physical quantities, but may be explained in terms of microscopic constituents by statistical mechanics. Thermodynamics applies to a wide variety of topics in science and engineering, especially physical chemistry, biochemistry, chemical engineering and mechanical engineering, but also in other complex fields such as meteorology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Thermodynamics";
        }
    }

    return nullptr;
}

string _Engineering::Terms::TheoryOfRelativity(string text)
{
    string model = "llama3";
    string definition = "usually encompasses two interrelated theories by Albert Einstein: special relativity and general relativity, proposed and published in 1905 and 1915, respectively. Special relativity applies to all physical phenomena in the absence of gravity. General relativity explains the law of gravitation and its relation to other forces of nature. It applies to the cosmological and astrophysical realm, including astronomy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Theory Of Relativity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::TheveninsTheorm(string text)
{
    string model = "llama3";
    string definition = "As originally stated in terms of direct-current resistive circuits only, Thévenin's theorem states that \"For any linear electrical network containing only voltage sources, current sources and resistances can be replaced at terminals A–B by an equivalent combination of a voltage source Vth in a series connection with a resistance Rth.\"";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Thevenins Theorm";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ThreePhaseElectricPower(string text)
{
    string model = "llama3";
    string definition = "a common method of alternating current electric power generation, transmission, and distribution. It is a type of polyphase system and is the most common method used by electrical grids worldwide to transfer power. It is also used to power large motors and other heavy loads.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Three Phase Electric Power";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Torque(string text)
{
    string model = "llama3";
    string definition = "the rotational equivalent of linear force. It is also referred to as the moment, moment of force, rotational force or turning effect, depending on the field of study. The concept originated with the studies by Archimedes of the usage of levers. Just as a linear force is a push or a pull, a torque can be thought of as a twist to an object around a specific axis. Another definition of torque is the product of the magnitude of the force and the perpendicular distance of the line of action of a force from the axis of rotation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Torque";
        }
    }

    return nullptr;
}

string _Engineering::Terms::TorinsonalVibration(string text)
{
    string model = "llama3";
    string definition = "angular vibration of an object—commonly a shaft along its axis of rotation. Torsional vibration is often a concern in power transmission systems using rotating shafts or couplings where it can cause failures if not controlled. A second effect of torsional vibrations applies to passenger cars. Torsional vibrations can lead to seat vibrations or noise at certain speeds. Both reduce the comfor";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Torinsonal Vibration";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Toughness(string text)
{
    string model = "llama3";
    string definition = "the ability of a material to absorb energy and plastically deform without fracturing. One definition of material toughness is the amount of energy per unit volume that a material can absorb before rupturing. This measure of toughness is different from that used for fracture toughness, which describes load bearing capabilities of materials with flaws. It is also defined as a material's resistance to fracture when stressed. Toughness requires a balance of strength and ductility.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Toughness";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Trajectory(string text)
{
    string model = "llama3";
    string definition = "the path that an object with mass in motion follows through space as a function of time. In classical mechanics, a trajectory is defined by Hamiltonian mechanics via canonical coordinates; hence, a complete trajectory is defined by position and momentum, simultaneously. The mass might be a projectile or a satellite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Trajectory";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Transducer(string text)
{
    string model = "llama3";
    string definition = "a device that converts energy from one form to another. Usually a transducer converts a signal in one form of energy to a signal in another. Transducers are often employed at the boundaries of automation, measurement, and control systems, where electrical signals are converted to and from other physical quantities (energy, force, torque, light, motion, position, etc.). The process of converting one form of energy to another is known as transduction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transducer";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Transformer(string text)
{
    string model = "llama3";
    string definition = "a passive component that transfers electrical energy from one electrical circuit to another circuit, or multiple circuits. A varying current in any one coil of the transformer produces a varying magnetic flux in the transformer's core, which induces a varying electromotive force across any other coils wound around the same core. Electrical energy can be transferred between separate coils without a metallic (conductive) connection between the two circuits.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transformer";
        }
    }

    return nullptr;
}

string _Engineering::Terms::TrigonometricFunctions(string text)
{
    string model = "llama3";
    string definition = "are real functions which relate an angle of a right-angled triangle to ratios of two side lengths. They are widely used in all sciences that are related to geometry, such as navigation, solid mechanics, celestial mechanics, geodesy, and many others. They are among the simplest periodic functions, and as such are also widely used for studying periodic phenomena through Fourier analysis. The trigonometric functions most widely used in modern mathematics are the sine, the cosine, and the tangent. Their reciprocals are respectively the cosecant, the secant, and the cotangent, which are less used. Each of these six trigonometric functions has a corresponding inverse function, and an analog among the hyperbolic functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Trigonometric Functions";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Trigonometry(string text)
{
    string model = "llama3";
    string definition = "a branch of mathematics that studies relationships between side lengths and angles of triangles. The field emerged in the Hellenistic world during the 3rd century BC from applications of geometry to astronomical studies.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Trigonometry";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Trimean(string text)
{
    string model = "llama3";
    string definition = "a measure of a probability distribution's location defined as a weighted average of the distribution's median and its two quartiles";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Trimean";
        }
    }

    return nullptr;
}

string _Engineering::Terms::TriplePoint(string text)
{
    string model = "llama3";
    string definition = "the temperature and pressure at which the three phases (gas, liquid, and solid) of that substance coexist in thermodynamic equilibrium. It is that temperature and pressure at which the sublimation curve, fusion curve and the vaporisation curve meet.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Triple Point";
        }
    }

    return nullptr;
}

string _Engineering::Terms::TroutonsRule(string text)
{
    string model = "llama3";
    string definition = "the entropy of vaporization is almost the same value, about 85–88 J/(K*mol), for various kinds of liquids at their boiling points.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Troutons Rule";
        }
    }

    return nullptr;
}

string _Engineering::Terms::TruncatedMean(string text)
{
    string model = "llama3";
    string definition = "a statistical measure of central tendency, much like the mean and median. It involves the calculation of the mean after discarding given parts of a probability distribution or sample at the high and low end, and typically discarding an equal amount of both. This number of points to be discarded is usually given as a percentage of the total number of points, but may also be given as a fixed number of points.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Truncated Mean";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Truss(string text)
{
    string model = "llama3";
    string definition = "an assembly of members such as beams, connected by nodes, that creates a rigid structure. In engineering, a truss is a structure that \"consists of two - force members only, where the members are organized so that the assemblage as a whole behaves as a single object\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Truss";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Turbine(string text)
{
    string model = "llama3";
    string definition = " rotary mechanical device that extracts energy from a fluid flow and converts it into useful work. The work produced by a turbine can be used for generating electrical power when combined with a generator. A turbine is a turbomachine with at least one moving part called a rotor assembly, which is a shaft or drum with blades attached. Moving fluid acts on the blades so that they move and impart rotational energy to the rotor. Early turbine examples are windmills and waterwheels. Gas, steam, and water turbines have a casing around the blades that contains and controls the working fluid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Turbine";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Turbomachinery(string text)
{
    string model = "llama3";
    string definition = "in mechanical engineering, describes machines that transfer energy between a rotor and a fluid, including both turbines and compressors. While a turbine transfers energy from a fluid to a rotor, a compressor transfers energy from a rotor to a fluid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Turbomachinery";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Turbulence(string text)
{
    string model = "llama3";
    string definition = "fluid motion characterized by chaotic changes in pressure and flow velocity. It is in contrast to a laminar flow, which occurs when a fluid flows in parallel layers, with no disruption between those layers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Turbulence";
        }
    }

    return nullptr;
}

string _Engineering::Terms::UltimateTensileStrength(string text)
{
    string model = "llama3";
    string definition = "the capacity of a material or structure to withstand loads tending to elongate, as opposed to compressive strength, which withstands loads tending to reduce size. In other words, tensile strength resists tension (being pulled apart), whereas compressive strength resists compression (being pushed together). Ultimate tensile strength is measured by the maximum stress that a material can withstand while being stretched or pulled before breaking. In the study of strength of materials, tensile strength, compressive strength, and shear strength can be analyzed independently.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ultimate Tensile Strength";
        }
    }

    return nullptr;
}

string _Engineering::Terms::UncertaintyPrinciple(string text)
{
    string model = "llama3";
    string definition = "any of a variety of mathematical inequalities asserting a fundamental limit to the precision with which certain pairs of physical properties of a particle, known as complementary variables, such as position x and momentum p, can be known.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Uncertainty Principle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Unicode(string text)
{
    string model = "llama3";
    string definition = "A standard for the consistent encoding of textual characters.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Unicode";
        }
    }

    return nullptr;
}

string _Engineering::Terms::UnitVector(string text)
{
    string model = "llama3";
    string definition = "normed vector space is a vector (often a spatial vector) of length";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Unit Vector";
        }
    }

    return nullptr;
}

string _Engineering::Terms::UnsaturatedCompound(string text)
{
    string model = "llama3";
    string definition = "The concept of saturation can be described using various naming systems, formulas, and analytical tests. For instance, IUPAC nomenclature is a system of naming conventions used to describe the type and location of unsaturation within organic compounds. The \"degree of unsaturation\" is a formula used to summarize and diagram the amount of hydrogen that a compound can bind. Unsaturation can be determined by NMR, mass spectrometry, and IR spectroscopy, or by determining a compound's bromine number or iodine number.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Unsaturated Compound";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Upthrust(string text)
{
    string model = "llama3";
    string definition = "Buoyancy, or upthrust, is an upward force exerted by a fluid that opposes the weight of a partially or fully immersed object. In a column of fluid, pressure increases with depth as a result of the weight of the overlying fluid. Thus the pressure at the bottom of a column of fluid is greater than at the top of the column. Similarly, the pressure at the bottom of an object submerged in a fluid is greater than at the top of the object. The pressure difference results in a net upward force on the object. The magnitude of the force is proportional to the pressure difference, and (as explained by Archimedes' principle) is equivalent to the weight of the fluid that would otherwise occupy the submerged volume of the object, i.e. the displaced fluid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Upthrust";
        }
    }

    return nullptr;
}

string _Engineering::Terms::UtilityFrequency(string text)
{
    string model = "llama3";
    string definition = "(power) line frequency (American English) or mains frequency (British English) is the nominal frequency of the oscillations of alternating current (AC) in a wide area synchronous grid transmitted from a power station to the end-user. In large parts of the world this is 50 Hz, although in the Americas and parts of Asia it is typically 60 Hz. Current usage by country or region is given in the list of mains electricity by country.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Utility Frequency";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Vacuole(string text)
{
    string model = "llama3";
    string definition = "a membrane-bound organelle which is present in plant and fungal cells and some protist, animal and bacterial cells. Vacuoles are essentially enclosed compartments which are filled with water containing inorganic and organic molecules including enzymes in solution, though in certain cases they may contain solids which have been engulfed. Vacuoles are formed by the fusion of multiple membrane vesicles and are effectively just larger forms of these. The organelle has no basic shape or size; its structure varies according to the requirements of the cell.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vacuole";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Vacuum(string text)
{
    string model = "llama3";
    string definition = "An absence of mass in a volume.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vacuum";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Valence(string text)
{
    string model = "llama3";
    string definition = "the valence or valency of an element is a measure of its combining power with other atoms when it forms chemical compounds or molecules. The concept of valence developed in the second half of the 19th century and helped successfully explain the molecular structure of inorganic and organic compounds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Valence";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ValenceBand(string text)
{
    string model = "llama3";
    string definition = "the bands closest to the Fermi level and thus determine the electrical conductivity of the solid. In non-metals, the valence band is the highest range of electron energies in which electrons are normally present at absolute zero temperature, while the conduction band is the lowest range of vacant electronic states. On a graph of the electronic band structure of a material, the valence band is located below the Fermi level, while the conduction band is located above it. The distinction between the valence and conduction bands is meaningless in metals, because conduction occurs in one or more partially filled bands that take on the properties of both the valence and conduction bands.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Valence Band";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ValenceBondTheory(string text)
{
    string model = "llama3";
    string definition = "valence bond (VB) theory is one of the two basic theories, along with molecular orbital (MO) theory, that were developed to use the methods of quantum mechanics to explain chemical bonding. It focuses on how the atomic orbitals of the dissociated atoms combine to give individual chemical bonds when a molecule is formed. In contrast, molecular orbital theory has orbitals that cover the whole molecule.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Valence Bond Theory";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ValenceElectron(string text)
{
    string model = "llama3";
    string definition = "an outer shell electron that is associated with an atom, and that can participate in the formation of a chemical bond if the outer shell is not closed; in a single covalent bond, both atoms in the bond contribute one valence electron in order to form a shared pair.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Valence Electron";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ValenceShell(string text)
{
    string model = "llama3";
    string definition = "the set of orbitals which are energetically accessible for accepting electrons to form chemical bonds. For main group elements, the valence shell consists of the ns and np orbitals in the outermost electron shell. In the case of transition metals (the (n-1)d orbitals), and lanthanides and actinides (the (n-2)f and (n-1)d orbitals), the orbitals involved can also be in an inner electron shell. Thus, the shell terminology is a misnomer as there is no correspondence between the valence shell and any particular electron shell in a given element. A scientifically correct term would be valence orbital to refer to the energetically accessible orbitals of an element.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Valence Shell";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Value(string text)
{
    string model = "llama3";
    string definition = "a device or natural object that regulates, directs or controls the flow of a fluid (gases, liquids, fluidized solids, or slurries) by opening, closing, or partially obstructing various passageways. Valves are technically fittings, but are usually discussed as a separate category. In an open valve, fluid flows in a direction from higher pressure to lower pressure. The word is derived from the Latin valva, the moving part of a door, in turn from volvere, to turn, roll.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Value";
        }
    }

    return nullptr;
}

string _Engineering::Terms::VanDerWaalsEquation(string text)
{
    string model = "llama3";
    string definition = "Van der Waals equation (or Van der Waals equation of state; named after Dutch physicist Johannes Diderik van der Waals) is an equation of state that generalizes the ideal gas law based on plausible reasons that real gases do not act ideally. The ideal gas law treats gas molecules as point particles that interact with their containers but not each other, meaning they neither take up space nor change kinetic energy during collisions (i.e. all collisions are perfectly elastic).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Van Der Waals Equation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::VanDerWaalsForce(string text)
{
    string model = "llama3";
    string definition = "a distance-dependent interaction between atoms or molecules. Unlike ionic or covalent bonds, these attractions do not result from a chemical electronic bond; they are comparatively weak and therefore more susceptible to disturbance. The Van der Waals force quickly vanishes at longer distances between interacting molecules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Van Der Waals Force";
        }
    }

    return nullptr;
}

string _Engineering::Terms::VantHoffEquation(string text)
{
    string model = "llama3";
    string definition = "a chemical reaction to the change in temperature, T, given the standard enthalpy change. It was proposed by Dutch chemist Jacobus Henricus van 't Hoff in 1884 in his book Études de dynamique chimique (Studies in Dynamic Chemistry). The Van 't Hoff equation has been widely utilized to explore the changes in state functions in a thermodynamic system. The Van 't Hoff plot, which is derived from this equation, is especially effective in estimating the change in enthalpy and entropy of a chemical reaction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vant Hoff Equation";
        }
    }

    return nullptr;
}

string _Engineering::Terms::VantHoffFactor(string text)
{
    string model = "llama3";
    string definition = "a measure of the effect of a solute on colligative properties such as osmotic pressure, relative lowering in vapor pressure, boiling-point elevation and freezing-point depression. The Van 't Hoff factor is the ratio between the actual concentration of particles produced when the substance is dissolved and the concentration of a substance as calculated from its mass. For most non-electrolytes dissolved in water, the Van 't Hoff factor is essentially 1. For most ionic compounds dissolved in water, the Van 't Hoff factor is equal to the number of discrete ions in a formula unit of the substance. This is true for ideal solutions only, as occasionally ion pairing occurs in solution. At a given instant a small percentage of the ions are paired and count as a single particle. Ion pairing occurs to some extent in all electrolyte solutions. This causes the measured Van 't Hoff factor to be less than that predicted in an ideal solution. The deviation for the Van 't Hoff factor tends to be greatest where the ions have multiple charges.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vant Hoff Factor";
        }
    }

    return nullptr;
}

string _Engineering::Terms::VariableCapacitor(string text)
{
    string model = "llama3";
    string definition = "a capacitor whose capacitance may be intentionally and repeatedly changed mechanically or electronically. Variable capacitors are often used in L/C circuits to set the resonance frequency, e.g. to tune a radio (therefore it is sometimes called a tuning capacitor or tuning condenser), or as a variable reactance, e.g. for impedance matching in antenna tuners.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Variable Capacitor";
        }
    }

    return nullptr;
}

string _Engineering::Terms::VariableReistor(string text)
{
    string model = "llama3";
    string definition = "a three-terminal resistor with a sliding or rotating contact that forms an adjustable voltage divider. If only two terminals are used, one end and the wiper, it acts as a variable resistor or rheostat.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Variable Reistor";
        }
    }

    return nullptr;
}

string _Engineering::Terms::VectorSpace(string text)
{
    string model = "llama3";
    string definition = "a set of objects called vectors, which may be added together and multiplied (\"scaled\") by numbers, called scalars. Scalars are often taken to be real numbers, but there are also vector spaces with scalar multiplication by complex numbers, rational numbers, or generally any field. The operations of vector addition and scalar multiplication must satisfy certain requirements, called vector axioms . To specify that the scalars are real or complex numbers, the terms real vector space and complex vector space are often used.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vector Space";
        }
    }

    return nullptr;
}

string _Engineering::Terms::VenturiEffect(string text)
{
    string model = "llama3";
    string definition = "is the reduction in fluid pressure that results when a fluid flows through a constricted section (or choke) of a pipe. The Venturi effect is named after its discoverer, the 18th century Italian physicist, Giovanni Battista Venturi.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Venturi Effect";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Vibration(string text)
{
    string model = "llama3";
    string definition = "a mechanical phenomenon whereby oscillations occur about an equilibrium point.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vibration";
        }
    }

    return nullptr;
}

string _Engineering::Terms::VirtualLeak(string text)
{
    string model = "llama3";
    string definition = "Traces of gas trapped in cavities within a vacuum chamber, slowly dissipating out in the main chamber, thus appearing like a leak from the outside.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "VirtualLeak";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Viscoelasticity(string text)
{
    string model = "llama3";
    string definition = "s the property of materials that exhibit both viscous and elastic characteristics when undergoing deformation. Viscous materials, like water, resist shear flow and strain linearly with time when a stress is applied. Elastic materials strain when stretched and immediately return to their original state once the stress is removed. Viscoelastic materials have elements of both of these properties and, as such, exhibit time-dependent strain. Whereas elasticity is usually the result of bond stretching along crystallographic planes in an ordered solid, viscosity is the result of the diffusion of atoms or molecules inside an amorphous material.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Viscoelasticity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Viscosity(string text)
{
    string model = "llama3";
    string definition = "the measure of its resistance to gradual deformation by shear stress or tensile stress. For liquids, it corresponds to the informal concept of \"thickness\": for example, honey has a higher viscosity than water.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Viscosity";
        }
    }

    return nullptr;
}

string _Engineering::Terms::VoltAmpere(string text)
{
    string model = "llama3";
    string definition = "the unit used for the apparent power in an electrical circuit. The apparent power equals the product of root-mean-square (RMS) voltage and RMS current. In direct current (DC) circuits, this product is equal to the real power (active power) in watts. Volt-amperes are useful only in the context of alternating current (AC) circuits. The volt-ampere is dimensionally equivalent to the watt";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Volt Ampere";
        }
    }

    return nullptr;
}

string _Engineering::Terms::VoltAmpereReactive(string text)
{
    string model = "llama3";
    string definition = "s a unit of measurement of reactive power. Reactive power exists in an AC circuit when the current and voltage are not in phase.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Volt Ampere Reactive";
        }
    }

    return nullptr;
}

string _Engineering::Terms::VoltaPotential(string text)
{
    string model = "llama3";
    string definition = "the electrostatic potential difference between two metals (or one metal and one electrolyte) that are in contact and are in thermodynamic equilibrium. Specifically, it is the potential difference between a point close to the surface of the first metal, and a point close to the surface of the second metal (or electrolyte).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Volta Potential";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Voltage(string text)
{
    string model = "llama3";
    string definition = "Voltage, electric potential difference, electric pressure or electric tension is the difference in electric potential between two points. The difference in electric potential between two points (i.e., voltage) is defined as the work needed per unit of charge against a static electric field to move a test charge between the two points. In the International System of Units, the derived unit for voltage is named volt. In SI units, work per unit charge is expressed as joules per coulomb, where 1 volt = 1 joule (of work) per 1 coulomb (of charge). The official SI definition for volt uses power and current, where 1 volt = 1 watt (of power) per 1 ampere (of current).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Voltage";
        }
    }

    return nullptr;
}

string _Engineering::Terms::VolumetricFlowRate(string text)
{
    string model = "llama3";
    string definition = "the volume of fluid which passes per unit time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Volumetric Flow Rate";
        }
    }

    return nullptr;
}

string _Engineering::Terms::VonMisesYieldCriterion(string text)
{
    string model = "llama3";
    string definition = "It is part of plasticity theory that applies best to ductile materials, such as some metals. Prior to yield, material response can be assumed to be of a nonlinear elastic, viscoelastic, or linear elastic behavior. In materials science and engineering the von Mises yield criterion can also be formulated in terms of the von Mises stress or equivalent tensile stress.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Von Mises Yield Criterion";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Watt(string text)
{
    string model = "llama3";
    string definition = "The SI unit of power, rate of doing work.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Watt";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Wave(string text)
{
    string model = "llama3";
    string definition = "a disturbance that transfers energy through matter or space, with little or no associated mass transport. Waves consist of oscillations or vibrations of a physical medium or a field, around relatively fixed locations. From the perspective of mathematics, waves, as functions of time and space, are a class of signals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wave";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Wavelength(string text)
{
    string model = "llama3";
    string definition = "the spatial period of a periodic wave—the distance over which the wave's shape repeats. It is thus the inverse of the spatial frequency. Wavelength is usually determined by considering the distance between consecutive corresponding points of the same phase, such as crests, troughs, or zero crossings and is a characteristic of both traveling waves and standing waves, as well as other spatial wave patterns.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wave length";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Wedge(string text)
{
    string model = "llama3";
    string definition = "a triangular shaped tool, and is a portable inclined plane, and one of the six classical simple machines. It can be used to separate two objects or portions of an object, lift up an object, or hold an object in place. It functions by converting a force applied to its blunt end into forces perpendicular (normal) to its inclined surfaces. The mechanical advantage of a wedge is given by the ratio of the length of its slope to its width.Although a short wedge with a wide angle may do a job faster, it requires more force than a long wedge with a narrow angle. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wedge";
        }
    }

    return nullptr;
}

string _Engineering::Terms::WeightedArithmeticMean(string text)
{
    string model = "llama3";
    string definition = "similar to an ordinary arithmetic mean (the most common type of average), except that instead of each of the data points contributing equally to the final average, some data points contribute more than others. The notion of weighted mean plays a role in descriptive statistics and also occurs in a more general form in several other areas of mathematics. If all the weights are equal, then the weighted mean is the same as the arithmetic mean. While weighted means generally behave in a similar fashion to arithmetic means, they do have a few counterintuitive properties, as captured for instance in Simpson's paradox.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Weighted Arithmetic Mean";
        }
    }

    return nullptr;
}

string _Engineering::Terms::WetBulbTemerature(string text)
{
    string model = "llama3";
    string definition = "The temperature of a wetted thermometer with an air current across it. Used in psychrometry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wet Bulb Temerature";
        }
    }

    return nullptr;
}

string _Engineering::Terms::WheelAndAxle(string text)
{
    string model = "llama3";
    string definition = "one of six simple machines identified by Renaissance scientists drawing from Greek texts on technology. The wheel and axle consists of a wheel attached to a smaller axle so that these two parts rotate together in which a force is transferred from one to the other. A hinge or bearing supports the axle, allowing rotation. It can amplify force; a small force applied to the periphery of the large wheel can move a larger load attached to the axle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wheel And Axle";
        }
    }

    return nullptr;
}

string _Engineering::Terms::WinsorizedMean(string text)
{
    string model = "llama3";
    string definition = "a winsorized statistical measure of central tendency, much like the mean and median, and even more similar to the truncated mean. It involves the calculation of the mean after replacing given parts of a probability distribution or sample at the high and low end with the most extreme remaining values, typically doing so for an equal amount of both extremes; often 10 to 25 percent of the ends are replaced. The winsorized mean can equivalently be expressed as a weighted average of the truncated mean and the quantiles at which it is limited, which corresponds to replacing parts with the corresponding quantiles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Winsorized Mean";
        }
    }

    return nullptr;
}

string _Engineering::Terms::WorkHardening(string text)
{
    string model = "llama3";
    string definition = "the strengthening of a metal or polymer by plastic deformation. This strengthening occurs because of dislocation movements and dislocation generation within the crystal structure of the material.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Work Hardening";
        }
    }

    return nullptr;
}

string _Engineering::Terms::XAxis(string text)
{
    string model = "llama3";
    string definition = "in algebraic geometry, the axis on a graph that is usually drawn left to right and usually shows the range of values of an independent variable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "X Axis";
        }
    }

    return nullptr;
}

string _Engineering::Terms::YAxis(string text)
{
    string model = "llama3";
    string definition = "in algebraic geometry, the axis on a graph that is usually drawn from bottom to top and usually shows the range of values of variable dependent on one other variable, or the second of two independent variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Y Axis";
        }
    }

    return nullptr;
}

string _Engineering::Terms::Yield_(string text)
{
    string model = "llama3";
    string definition = "The point of maximum elastic deformation of a material; above yield the material is permanently deformed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Yield";
        }
    }

    return nullptr;
}

string _Engineering::Terms::YoungsModulus(string text)
{
    string model = "llama3";
    string definition = "A measure of the stiffness of a material; the amount of force per unit area require to produce a unit strain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Youngs Modulus";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ZAxis(string text)
{
    string model = "llama3";
    string definition = "In algebraic geometry, the axis on a graph of at least three dimensions that is usually drawn vertically and usually shows the range of values of a variable dependent on two other variables or the third independent variable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Z Axis";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ZeroDefects(string text)
{
    string model = "llama3";
    string definition = "A quality assurance philosophy that aims to reduce the need for inspection of components by improving their quality.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zero Defects";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ZeroForceMember(string text)
{
    string model = "llama3";
    string definition = "a member (a single truss segment) in a truss which, given a specific load, is at rest: neither in tension, nor in compression. In a truss a zero force member is often found at pins (any connections within the truss) where no external load is applied and three or fewer truss members meet. Recognizing basic zero force members can be accomplished by analyzing the forces acting on an individual pin in a physical system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zero Force Member";
        }
    }

    return nullptr;
}

string _Engineering::Terms::ZerothLawOfThermodynamics(string text)
{
    string model = "llama3";
    string definition = "The equivalence principle applied to temperature; two systems in thermal equilibrium with a third are also in thermal equilibrium with each other.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zeroth Law of Thermodynamics";
        }
    }

    return nullptr;
}
