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

#include "AugmentedIntelligence.hpp"
#include "Physics.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _Physics::Terms::AbInitio(string text)
{
    string model = "llama3";
    string definition = "A mathematical model which seeks to describe atomic nuclei by solving the non-relativistic Schrödinger equation for all constituent nucleons and the forces that exist between them. Such methods yield precise results for very light nuclei but become more approximate for heavier nuclei.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ab Initio";
        }
    }

    return nullptr;
}

string _Physics::Terms::AbbeNumber(string text)
{
    string model = "llama3";
    string definition = "In optics and lens design, a measure of a transparent material's dispersion (a variation of refractive index versus wavelength). High values of V indicate low dispersion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Abbe Number";
        }
    }

    return nullptr;
}

string _Physics::Terms::AbsoluteElectrodePotential(string text)
{
    string model = "llama3";
    string definition = "In electrochemistry, the electrode potential of a metal measured with respect to a universal reference system (without any additional metal-solution interface).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "absolute Electrode Potential";
        }
    }

    return nullptr;
}

string _Physics::Terms::AbsoluteHumidity(string text)
{
    string model = "llama3";
    string definition = "The ratio of the water vapor in a sample of air to the volume of the sample.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absolute Humidity";
        }
    }

    return nullptr;
}

string _Physics::Terms::AbsoluteMotion(string text)
{
    string model = "llama3";
    string definition = "a concept in physics and philosophy about the properties of the universe. In physics, absolute space and time may be a preferred frame.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absolute Motion";
        }
    }

    return nullptr;
}

string _Physics::Terms::AbsolutePressure(string text)
{
    string model = "llama3";
    string definition = "Is zero-referenced against a perfect vacuum, using an absolute scale, so it is equal to gauge pressure plus atmospheric pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::AbsoluteScale(string text)
{
    string model = "llama3";
    string definition = "Any system of measurement that begins at a minimum, or zero point, and progresses in only one direction. The zero point of an absolute scale is a natural minimum, leaving only one direction in which to progress, whereas an arbitrary or \"relative\" scale begins at some point selected by a person and can progress in both directions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absolute Scale";
        }
    }

    return nullptr;
}

string _Physics::Terms::AbsoluteZero(string text)
{
    string model = "llama3";
    string definition = "The theoretical lowest possible temperature, understood by international agreement as equivalent to 0 Kelvin or -273.15C (-459.67F). More formally, it is the theoretical lower limit of the thermodynamic temperature scale, at which enthalpy and entropy of a cooled ideal gas reach their minimum values and the fundamental particles of nature have minimal vibrational motion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::AbsorbtionSpectroscopy(string text)
{
    string model = "llama3";
    string definition = "Any of various spectroscopic techniques that measure the absorption of electromagnetic radiation due to its interaction with a sample. The sample absorbs energy, i.e. photons, from the radiating field. The intensity of the absorption varies as a function of frequency or wavelength, and this variation is the absorption spectrum. Absorption spectroscopy is performed across the electromagnetic spectrum.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absorbtion Spectroscopy";
        }
    }

    return nullptr;
}

string _Physics::Terms::Absorptivity(string text)
{
    string model = "llama3";
    string definition = "defined as \"the logarithm of the ratio of incident to transmitted radiant power through a sample (excluding the effects on cell walls)\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absorptivity";
        }
    }

    return nullptr;
}

string _Physics::Terms::AccelleratingExpansionOfTheUniverse(string text)
{
    string model = "llama3";
    string definition = "The observation that the expansion of the universe is such that the velocity at which a distant galaxy is receding from the observer is continuously increasing with time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Accellerating Expansion Of The Universe";
        }
    }

    return nullptr;
}

string _Physics::Terms::Acceleration(string text)
{
    string model = "llama3";
    string definition = "The rate at which the velocity of a body changes with time, also the rate of change of the rate at which the position of a body changes with time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::AccelerationDueToGravity(string text)
{
    string model = "llama3";
    string definition = "The acceleration on an object caused by the force of gravitation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acceleration Due To Gravity";
        }
    }

    return nullptr;
}

string _Physics::Terms::Accelerometer(string text)
{
    string model = "llama3";
    string definition = "An instrument used to measure the proper acceleration of a body irrespective of other forces.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Accelerometer";
        }
    }

    return nullptr;
}

string _Physics::Terms::Acoustics(string text)
{
    string model = "llama3";
    string definition = "The branch of physics dealing with the production, transmission, and effects of sound.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Adhesion(string text)
{
    string model = "llama3";
    string definition = "adhesion is what makes things stick together. It's the force that allows tape to stick to a surface or glue to hold two objects together. Contrast cohesion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::AdiabaticCooling(string text)
{
    string model = "llama3";
    string definition = "a type of thermodynamic process that occurs without transferring heat or mass between the thermodynamic system and its environment. Unlike an isothermal process, an adiabatic process transfers energy to the surroundings only as work. As a key concept in thermodynamics, the adiabatic process supports the theory that explains the first law of thermodynamics. The opposite term to \"adiabatic\" is diabatic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Adiabatic Cooling";
        }
    }

    return nullptr;
}

string _Physics::Terms::AdiabaticProcess(string text)
{
    string model = "llama3";
    string definition = "a type of thermodynamic process that occurs without transferring heat or mass between the thermodynamic system and its environment. Unlike an isothermal process, an adiabatic process transfers energy to the surroundings only as work. As a key concept in thermodynamics, the adiabatic process supports the theory that explains the first law of thermodynamics. The opposite term to \"adiabatic\" is diabatic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Aerodynamics(string text)
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

string _Physics::Terms::AfocalSystem(string text)
{
    string model = "llama3";
    string definition = "An optical system that produces no net convergence or divergence of the beam, i.e. has an infinite effective focal length. This type of system can be created with a pair of optical elements where the distance between the elements is equal to the sum of each element's focal length.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::AirMass(string text)
{
    string model = "llama3";
    string definition = "1. In meteorology, a volume of air that is defined by its temperature and water vapor content. Air masses may cover many hundreds or thousands of square miles and generally adapt to the characteristics of the surface below them. They are often classified according to their latitude and their source regions. 2.  In astronomy, the \"amount of air that one is looking through\" when observing a star or other celestial source from a vantage point that is within Earth\'s atmosphere. It is formulated as the integral of air density along the light ray.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Air Mass";
        }
    }

    return nullptr;
}

string _Physics::Terms::AirMassCoefficient(string text)
{
    string model = "llama3";
    string definition = "Defines the direct optical path length through the Earth's atmosphere, expressed as a ratio relative to the path length vertically upwards, i.e. at the zenith. The air mass coefficient can be used to help characterize the solar spectrum after solar radiation has traveled through the atmosphere.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Air Mass Coefficient";
        }
    }

    return nullptr;
}

string _Physics::Terms::Albedo(string text)
{
    string model = "llama3";
    string definition = "The fraction of the total light incident on a reflecting surface, especially a celestial body, which is reflected back in all directions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Alloy(string text)
{
    string model = "llama3";
    string definition = "A chemical mixture of a metal with one or more other metals or other elements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::AlphaDecay(string text)
{
    string model = "llama3";
    string definition = "A type of radioactive decay in which an atomic nucleus emits an alpha particle and thereby transforms or \"decays\" into a different atomic nucleus, with a mass number that is reduced by four and an atomic number that is reduced by two.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alpha Decay";
        }
    }

    return nullptr;
}

string _Physics::Terms::AlphaParticle(string text)
{
    string model = "llama3";
    string definition = "A type of subatomic particle consisting of two protons and two neutrons bound together into a particle identical to the nucleus of a helium-4 ion. It has a charge of +2 e and a mass of 4 u. Alpha particles are classically produced in the process of radioactive alpha decay, but may also be produced in other ways and given the same name.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::AlternatingCurrent(string text)
{
    string model = "llama3";
    string definition = "A form of electric current in which the movement of electric charge periodically reverses direction. Contrast direct current.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Ammeter(string text)
{
    string model = "llama3";
    string definition = "An instrument that is used to measure electric current.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::AmorphousSolid(string text)
{
    string model = "llama3";
    string definition = "A type of solid which does not have a definite geometric shape.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Amplifier(string text)
{
    string model = "llama3";
    string definition = "An electronic device that can increase the power of a signal (a time-varying voltage or current). It is a two-port electronic circuit that uses electric power from a power supply to increase the amplitude of a signal applied to its input terminals, producing a proportionally greater amplitude signal at its output. The amount of amplification provided by an amplifier is measured by its gain: the ratio of output voltage, current, or power to input. An amplifier is a circuit that has a power gain greater than one.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Amplitude(string text)
{
    string model = "llama3";
    string definition = "The height of a wave as measured from its center (normal) position.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::AngleOfIncidence(string text)
{
    string model = "llama3";
    string definition = "In geometric optics, the angle between a ray incident on a surface and the line perpendicular to the surface at the point of incidence, called the normal. The ray can be formed by any wave: optical, acoustic, microwave, X-ray, etc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Angle Of Incidence";
        }
    }

    return nullptr;
}

string _Physics::Terms::AngleOfReflection(string text)
{
    string model = "llama3";
    string definition = "The change in direction of a wavefront at an interface between two different media so that the wavefront returns into the medium from which it originated. Common examples include the reflection of light, sound, and water waves. The law of reflection says that for specular reflection the angle at which the wave is incident on the surface equals the angle at which it is reflected. Mirrors exhibit specular reflection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Angle Of Reflection";
        }
    }

    return nullptr;
}

string _Physics::Terms::Angstrom(string text)
{
    string model = "llama3";
    string definition = "A unit of length primarily used to measure subatomic particles that is equal to 10-10 metres (one ten-billionth of a metre) or 0.1 nanometres.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Angstrom";
        }
    }

    return nullptr;
}

string _Physics::Terms::AngularAcceleration(string text)
{
    string model = "llama3";
    string definition = "The time rate of change of angular velocity. In three dimensions, it is a pseudovector. In SI units, it is measured in radians per second squared (rad/s2), and is usually denoted by the Greek letter alpha. Just like angular velocity, there are two types of angular acceleration: spin angular acceleration and orbital angular acceleration, representing the time rate of change of spin angular velocity and orbital angular velocity, respectively. Unlike linear acceleration, angular acceleration need not be caused by a net external torque. For example, a figure skater can speed up her rotation (thereby obtaining an angular acceleration) simply by contracting her arms inwards, which involves no external torque.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::AngularDisplacement(string text)
{
    string model = "llama3";
    string definition = "The angle (in radians, degrees, or revolutions) through which a point revolving around a centre or line has been rotated in a specified sense about a specified axis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Angular Displacement";
        }
    }

    return nullptr;
}

string _Physics::Terms::AngularFrequency(string text)
{
    string model = "llama3";
    string definition = "A scalar measure of rotation rate. It refers to the angular displacement per unit time (e.g. in rotation) or the rate of change of the phase of a sinusoidal waveform (e.g. in oscillations and waves), or as the rate of change of the argument of the sine function. Angular frequency (or angular speed) is the magnitude of the vector quantity that is angular velocity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Angular Frequency";
        }
    }

    return nullptr;
}

string _Physics::Terms::AngularMomentum(string text)
{
    string model = "llama3";
    string definition = "The rotational equivalent of linear momentum. It is an important quantity in physics because it is a conserved quantity-that is, the total angular momentum of a closed system remains constant.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::AngularVelocity(string text)
{
    string model = "llama3";
    string definition = "How fast an object rotates or revolves relative to another point, i.e. how fast the angular position or orientation of an object changes with time. There are two types of angular velocity: orbital angular velocity and spin angular velocity. Spin angular velocity refers to how fast a rigid body rotates with respect to its centre of rotation. Orbital angular velocity refers to how fast a rigid body's centre of rotation revolves about a fixed origin, i.e. the time rate of change of its angular position relative to the origin. In general, angular velocity is measured in angle per unit time, e.g. radians per second. The SI unit of angular velocity is expressed as radians/sec with the radian having a dimensionless value of unity, thus the SI units of angular velocity are listed as 1/sec. Angular velocity is usually represented by the Greek letter omega. By convention, positive angular velocity indicates counter-clockwise rotation, while negative is clockwise.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Anion(string text)
{
    string model = "llama3";
    string definition = "A negatively charged ion. Contrast cation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Annihilation(string text)
{
    string model = "llama3";
    string definition = "In particle physics, the process that occurs when a subatomic particle collides with its respective antiparticle to produce other particles, such as an electron colliding with a positron to produce two photons. The total energy and momentum of the initial pair are conserved in the process and distributed among a set of other particles in the final state. Antiparticles have exactly opposite additive quantum numbers from particles, so the sums of all quantum numbers of such an original pair are zero. Hence, any set of particles may be produced whose total quantum numbers are also zero as long as conservation of energy and conservation of momentum are obeyed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Anode(string text)
{
    string model = "llama3";
    string definition = "The electrode through which a conventional electric current flows into a polarized electrical device; the direction of current flow is, by convention, opposite to the direction of electron flow, and so electrons flow out of the anode. In a galvanic cell, the anode is the negative terminal or pole which emits electrons toward the external part of an electrical circuit. However, in an electrolytic cell, the anode is the wire or plate having excess positive charge, so named because negatively charged anions tend to move towards it. Contrast cathode.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anode";
        }
    }

    return nullptr;
}

string _Physics::Terms::AntiGravity(string text)
{
    string model = "llama3";
    string definition = "A theory of creating a place or object that is free from the force of gravity. It does not refer to the lack of weight under gravity experienced in free fall or orbit, or to balancing the force of gravity with some other force, such as electromagnetism or aerodynamic lift.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Antimatter(string text)
{
    string model = "llama3";
    string definition = "defined as matter composed of the antiparticles (or \"partners\") of the corresponding particles in \"ordinary\" matter, and can be thought of as matter with reversed charge, parity, and time, known as CPT reversal. Antimatter occurs in natural processes like cosmic ray collisions and some types of radioactive decay, but only a tiny fraction of these have successfully been bound together in experiments to form antiatoms. Minuscule numbers of antiparticles can be generated at particle accelerators; however, total artificial production has been only a few nanograms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antimatter";
        }
    }

    return nullptr;
}

string _Physics::Terms::AntiNeutron(string text)
{
    string model = "llama3";
    string definition = "The antiparticle of the neutron, with symbol n-. It differs from the neutron only in that some of its properties have equal magnitude but opposite sign. It has the same mass as the neutron, and no net electric charge, but has opposite baryon number (+1 for neutron, -1 for the antineutron). This is because the antineutron is composed of antiquarks, while neutrons are composed of quarks. The antineutron consists of one up antiquark and two down antiquarks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anti Neutron";
        }
    }

    return nullptr;
}

string _Physics::Terms::Antiparticle(string text)
{
    string model = "llama3";
    string definition = "In particle physics, every type of particle has an associated antiparticle with the same mass but with opposite physical charges such as electric charge. For example, the antiparticle of the electron is the antielectron (which is often referred to as the positron). While the electron has a negative electric charge, the positron has a positive electric charge, and is produced naturally in certain types of radioactive decay. Some particles, such as the photon, are their own antiparticle. Otherwise, for each pair of antiparticle partners, one is designated as \"normal\" matter (the kind comprising all matter with which humans usually interact), and the other (usually given the prefix \"anti - \") as antimatter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antiparticle";
        }
    }

    return nullptr;
}

string _Physics::Terms::Antiproton(string text)
{
    string model = "llama3";
    string definition = "It is a subatomic particle of the same mass as a proton but having a negative electric charge and oppositely directed magnetic moment. It is the proton's antiparticle. Antiprotons were first produced and identified in 1955 by Emilio Segrè, Owen Chamberlain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antiproton";
        }
    }

    return nullptr;
}

string _Physics::Terms::Antiquark(string text)
{
    string model = "llama3";
    string definition = "For every quark flavor there is a corresponding type of antiparticle known as an antiquark that differs from the quark only in that some of its properties (such as the electric charge) have equal magnitude but opposite sign.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antiquark";
        }
    }

    return nullptr;
}

string _Physics::Terms::ArcLength(string text)
{
    string model = "llama3";
    string definition = "the distance between two points along a section of a curve. Determining the length of an irregular arc segment by approximating the arc segment as connected (straight) line segments is also called curve rectification. For a rectifiable curve these approximations don\'t get arbitrarily large (so the curve has a finite length).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ArchimedesPrinciple(string text)
{
    string model = "llama3";
    string definition = "A physical principle which states that the upward buoyant force that is exerted on a body immersed in a fluid, whether fully or partially submerged, is equal to the weight of the fluid that the body displaces and acts in the upward direction at the center of mass of the displaced fluid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::AreaMomentOfInertia(string text)
{
    string model = "llama3";
    string definition = "a geometrical property of an area which reflects how its points are distributed with regard to an arbitrary axis. The second moment of area is typically denoted with either an I (for an axis that lies in the plane of the area) or with a J (for an axis perpendicular to the plane). In both cases, it is calculated with a multiple integral over the object in question. Its dimension is L (length) to the fourth power. Its unit of dimension, when working with the International System of Units, is meters to the fourth power, m4, or inches to the fourth power, in4, when working in the Imperial System of Units or the US customary system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Area Moment Of Inertia";
        }
    }

    return nullptr;
}

string _Physics::Terms::Astrophysics(string text)
{
    string model = "llama3";
    string definition = "The branch of astronomy that deals with the physics of the Universe, especially with the compositional nature of celestial bodies rather than their positions or motions in space.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Astrophysics";
        }
    }

    return nullptr;
}

string _Physics::Terms::AttenuationCoefficient(string text)
{
    string model = "llama3";
    string definition = "The measure of how much the incident energy beam (e.g. ultrasound or x-rays) is weakened by the material it is passing through.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Attenuation Coefficient";
        }
    }

    return nullptr;
}

string _Physics::Terms::Atom(string text)
{
    string model = "llama3";
    string definition = "A basic unit of matter that consists of a dense central nucleus surrounded by a cloud of negatively charged electrons. The atomic nucleus contains a mix of positively charged protons and electrically neutral neutrons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atom";
        }
    }

    return nullptr;
}

string _Physics::Terms::AtomicLineFilter(string text)
{
    string model = "llama3";
    string definition = "a more effective optical band-pass filter used in the physical sciences for filtering electromagnetic radiation with precision, accuracy, and minimal signal strength loss. Atomic line filters work via the absorption or resonance lines of atomic vapors and so may also be designated an atomic resonance filter (ARF).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomic Line Filter";
        }
    }

    return nullptr;
}

string _Physics::Terms::AtomicMass(string text)
{
    string model = "llama3";
    string definition = "the mass of a single atom. The atomic mass mostly comes from the combined mass of the protons and neutrons in the nucleus, with minor contributions from the electrons and nuclear binding energy.[1] The atomic mass of atoms, ions, or atomic nuclei is slightly less than the sum of the masses of their constituent protons, neutrons, and electrons, due to (per E = mc2).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomic Mass";
        }
    }

    return nullptr;
}

string _Physics::Terms::AtomicMassUnit(string text)
{
    string model = "llama3";
    string definition = "A deprecated term, usually referring to the unified atomic mass unit, a carbon-based standard, but historically referring to an oxygen-based standard.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomic Mass Unit";
        }
    }

    return nullptr;
}

string _Physics::Terms::AtomicNumber(string text)
{
    string model = "llama3";
    string definition = "The number of protons found in the nucleus of an atom. It is most often used to classify elements within the periodic table.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomic Number";
        }
    }

    return nullptr;
}

string _Physics::Terms::AtomicOrbital(string text)
{
    string model = "llama3";
    string definition = "a function describing the location and wave-like behavior of an electron in an atom. This function describes an electron's charge distribution around the atom's nucleus, and can be used to calculate the probability of finding an electron in a specific region around the nucleus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::AtomicPacknigFactor(string text)
{
    string model = "llama3";
    string definition = "In crystallography, atomic packing factor (APF), packing efficiency, or packing fraction is the fraction of volume in a crystal structure that is occupied by constituent particles. It is a dimensionless quantity and always less than unity. In atomic systems, by convention, the APF is determined by assuming that atoms are rigid spheres. The radius of the spheres is taken to be the maximum value such that the atoms do not overlap. For one-component crystals (those that contain only one type of particle), the packing fraction is represented mathematically by APF = Nparticle Vparticle/Vunit cell.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomic Packnig Factor";
        }
    }

    return nullptr;
}

string _Physics::Terms::AtomicPhysics(string text)
{
    string model = "llama3";
    string definition = "the field of physics that studies atoms as an isolated system of electrons and an atomic nucleus. Atomic physics typically refers to the study of atomic structure and the interaction between atoms. It is primarily concerned with the way in which electrons are arranged around the nucleus and the processes by which these arrangements change. This comprises ions, neutral atoms and, unless otherwise stated, it can be assumed that the term atom includes ions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomic Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::AtomicStructure(string text)
{
    string model = "llama3";
    string definition = "Though the word atom originally denoted a particle that cannot be cut into smaller particles, in modern scientific usage the atom is composed of various subatomic particles. The constituent particles of an atom are the electron, the proton and the neutron.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomic Structure";
        }
    }

    return nullptr;
}

string _Physics::Terms::AtomicWeight(string text)
{
    string model = "llama3";
    string definition = "The sum total of protons (or electrons) and neutrons within an atom.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomic Weight";
        }
    }

    return nullptr;
}

string _Physics::Terms::AudioFrequency(string text)
{
    string model = "llama3";
    string definition = "A periodic vibration whose frequency is in the band audible to the average human, the human hearing range. It is the property of sound that most determines pitch, with a generally accepted standard hearing range for humans is 20 to 20,000 Hz. Also known as audible frequency (AF)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::AvogadroConstant(string text)
{
    string model = "llama3";
    string definition = "The ratio of the number of constituent particles in a substance, usually atoms or molecules, to the amount of substance, of which the SI unit is the mole.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Avogadro Constant";
        }
    }

    return nullptr;
}

string _Physics::Terms::AvogadrosLaw(string text)
{
    string model = "llama3";
    string definition = "A physical law which states that volumes of gases which are equal to each other at the same temperature and pressure will contain equal numbers of molecules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Avogadros Law";
        }
    }

    return nullptr;
}

string _Physics::Terms::Axion(string text)
{
    string model = "llama3";
    string definition = "A hypothetical subatomic particle postulated to account for the rarity of processes that break charge-parity symmetry. It is very light, electrically neutral, and pseudoscalar.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Axion";
        }
    }

    return nullptr;
}

string _Physics::Terms::AzimuthalQuantumNumber(string text)
{
    string model = "llama3";
    string definition = "A quantum number for an atomic orbital that determines its orbital angular momentum and describes the shape of the orbital.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::BabinetsPrinciple(string text)
{
    string model = "llama3";
    string definition = "A theorem concerning diffraction which states that the diffraction pattern from an opaque body is identical to that from a hole of the same size and shape except for the overall forward beam intensity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Babinets Principle";
        }
    }

    return nullptr;
}

string _Physics::Terms::BackgroundRadiation(string text)
{
    string model = "llama3";
    string definition = "The ubiquitous ionizing radiation to which the general human population is exposed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Background Radiation";
        }
    }

    return nullptr;
}

string _Physics::Terms::BalancedForces(string text)
{
    string model = "llama3";
    string definition = "When all the forces acting upon an object balance each other, the object will be at equilibrium; it will not accelerate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Balanced Forces";
        }
    }

    return nullptr;
}

string _Physics::Terms::Ballistics(string text)
{
    string model = "llama3";
    string definition = "the field of mechanics concerned with the launching, flight behaviour and impact effects of projectiles, especially ranged weapon munitions such as bullets, unguided bombs, rockets or the like; the science or art of designing and accelerating projectiles so as to achieve a desired performance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ballistics";
        }
    }

    return nullptr;
}

string _Physics::Terms::BalmerSeries(string text)
{
    string model = "llama3";
    string definition = "In atomic physics, one of a set of six named series describing the spectral line emissions of the hydrogen atom. The Balmer series is calculated using the Balmer formula, an empirical equation discovered by Johann Balmer in 1885.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Balmer Series";
        }
    }

    return nullptr;
}

string _Physics::Terms::Barometer(string text)
{
    string model = "llama3";
    string definition = "A scientific instrument used in meteorology to measure atmospheric pressure. Pressure tendency can forecast short-term changes in the weather.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Baryon(string text)
{
    string model = "llama3";
    string definition = "A subatomic particle such as a proton or a neutron, each of which is made of (usually) three quarks. Nearly all matter humans are likely to encounter is baryonic matter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Baryon";
        }
    }

    return nullptr;
}

string _Physics::Terms::Battery(string text)
{
    string model = "llama3";
    string definition = "A combination of two or more electrical cells which produces electricity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Beam(string text)
{
    string model = "llama3";
    string definition = "A structural element that is capable of withstanding load primarily by resisting bending. Beams are traditionally descriptions of building or civil engineering structural elements, but smaller structures such as truck or automobile frames, machine frames, and other mechanical or structural systems contain beam structures that are designed and analyzed in a similar fashion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Bending(string text)
{
    string model = "llama3";
    string definition = "The behavior of a slender structural element subjected to an external load applied perpendicularly to a longitudinal axis of the element.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::BendingMoment(string text)
{
    string model = "llama3";
    string definition = "The reaction induced in a structural element when an external force or moment is applied to the element, causing the element to bend. The simplest structural element subjected to bending moments is the beam.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::BernoulliEquation(string text)
{
    string model = "llama3";
    string definition = "a key concept in fluid dynamics that relates pressure, density, speed and height. Bernoulli's principle states that an increase in the speed of a parcel of fluid occurs simultaneously with a decrease in either the pressure or the height above a datum. he principle is named after the Swiss mathematician and physicist Daniel Bernoulli, who published it in his book Hydrodynamica in 1738.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bernoulli Equation";
        }
    }

    return nullptr;
}

string _Physics::Terms::BesselFunction(string text)
{
    string model = "llama3";
    string definition = "A canonical solution y(x) of Friedrich Bessel's differential equation x^2*d^2y/dx^2+x*dy/dx+(x^2 - a^2)*y = 0 for an arbitrary complex number α, the order of the Bessel function. Although α and −α produce the same differential equation, it is conventional to define different Bessel functions for these two values in such a way that the Bessel functions are mostly smooth functions of α. The most important cases are when α is an integer or half-integer. Bessel functions for integer α are also known as cylinder functions or the cylindrical harmonics because they appear in the solution to Laplace's equation in cylindrical coordinates. Spherical Bessel functions with half-integer α are obtained when the Helmholtz equation is solved in spherical coordinates.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bessel Function";
        }
    }

    return nullptr;
}

string _Physics::Terms::BetaDecay(string text)
{
    string model = "llama3";
    string definition = "In nuclear physics, a type of radioactive decay in which a beta particle is emitted from an atomic nucleus, transforming the original nuclide to its isobar.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Beta Decay";
        }
    }

    return nullptr;
}

string _Physics::Terms::BetaParticle(string text)
{
    string model = "llama3";
    string definition = "A high-energy, high-speed electron or positron emitted by certain types of radioactive atomic nuclei.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::BigBang(string text)
{
    string model = "llama3";
    string definition = "The prevailing cosmological model that describes the early development of the Universe.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Big Bang";
        }
    }

    return nullptr;
}

string _Physics::Terms::BindingEnergy(string text)
{
    string model = "llama3";
    string definition = "The mechanical energy required to disassemble a whole into separate parts. A bound system typically has a lower potential energy than the sum of its constituent parts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Binding Energy";
        }
    }

    return nullptr;
}

string _Physics::Terms::BinomialRandomVariable(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, the binomial distribution with parameters n and p is the discrete probability distribution of the number of successes in a sequence of n independent experiments, each asking a yes-no question, and each with its own Boolean-valued outcome: success (with probability p) or failure (with probability q = 1 - p). A single success/failure experiment is also called a Bernoulli trial or Bernoulli experiment, and a sequence of outcomes is called a Bernoulli process; for a single trial, i.e., n = 1, the binomial distribution is a Bernoulli distribution. The binomial distribution is the basis for the binomial test of statistical significance";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Binomial Random Variable";
        }
    }

    return nullptr;
}

string _Physics::Terms::Biocatalysis(string text)
{
    string model = "llama3";
    string definition = "refers to the use of living (biological) systems or their parts to speed up (catalyze) chemical reactions. In biocatalytic processes, natural catalysts, such as enzymes, perform chemical transformations on organic compounds. Both enzymes that have been more or less isolated and enzymes still residing inside living cells are employed for this task.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Biophysics(string text)
{
    string model = "llama3";
    string definition = "an interdisciplinary science that applies approaches and methods traditionally used in physics to study biological phenomena.[1][2][3] Biophysics covers all scales of biological organization, from molecular to organismic and populations. Biophysical research shares significant overlap with biochemistry, molecular biology, physical chemistry, physiology, nanotechnology, bioengineering, computational biology, biomechanics, developmental biology and systems biology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::BlackBody(string text)
{
    string model = "llama3";
    string definition = "A hypothetical idealized physical body that completely absorbs all incident electromagnetic radiation, regardless of frequency or angle of incidence. Perfect black bodies are imagined as substitutes for actual physical bodies in many theoretical discussions of thermodynamics, and the construction of nearly perfect black bodies in the real world remains a topic of interest for materials engineers. Contrast white body.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Black Body";
        }
    }

    return nullptr;
}

string _Physics::Terms::BlackBodyRadiation(string text)
{
    string model = "llama3";
    string definition = "The type of electromagnetic radiation within or surrounding a body in thermodynamic equilibrium with its environment, or emitted by a black body (an opaque and non-reflective body) held at constant, uniform temperature. The radiation has a specific spectrum and intensity that depends only on the temperature of the body.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Black Body Radiation";
        }
    }

    return nullptr;
}

string _Physics::Terms::BlockAndTackle(string text)
{
    string model = "llama3";
    string definition = "A system of two or more pulleys with a rope or cable threaded between them, usually used to lift or pull heavy loads.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::BohrModel(string text)
{
    string model = "llama3";
    string definition = "the first successful model of the atom. Developed from 1911 to 1918 by Niels Bohr and building on Ernest Rutherford's nuclear model, it supplanted the plum pudding model of J J Thomson only to be replaced by the quantum atomic model in the 1920s. It consists of a small, dense nucleus surrounded by orbiting electrons. It is analogous to the structure of the Solar System, but with attraction provided by electrostatic force rather than gravity, and with the electron energies quantized (assuming only discrete values).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bohr Model";
        }
    }

    return nullptr;
}

string _Physics::Terms::BoilingPoint(string text)
{
    string model = "llama3";
    string definition = "The temperature at which a liquid undergoes a phase change into a gas; the vapour pressure of liquid and gas are equal at this temperature.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::BoilingPointElevation(string text)
{
    string model = "llama3";
    string definition = "The phenomenon by which the boiling point of a liquid (a solvent) increases when another compound is added, meaning that the resulting solution has a higher boiling point than the pure solvent. This happens whenever a non-volatile solute, such as a salt, is added to a pure solvent, such as water. The boiling point can be measured accurately using an ebullioscope.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::BoltzmannConstant(string text)
{
    string model = "llama3";
    string definition = "A physical constant relating the average kinetic energy of the particles in a gas with the temperature of the gas. It is the gas constant R divided by the Avogadro constant NA.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::BoseEinsteinCondensate(string text)
{
    string model = "llama3";
    string definition = "a state of matter that is typically formed when a gas of bosons at very low densities is cooled to temperatures very close to absolute zero, i.e., 0 K (-273.15C; -459.67F). Under such conditions, a large fraction of bosons occupy the lowest quantum state, at which microscopic quantum-mechanical phenomena, particularly wavefunction interference, become apparent macroscopically. More generally, condensation refers to the appearance of macroscopic occupation of one or several states: for example, in BCS theory, a superconductor is a condensate of Cooper pairs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bose Einstein Condensate";
        }
    }

    return nullptr;
}

string _Physics::Terms::Boson(string text)
{
    string model = "llama3";
    string definition = "A type of subatomic particle that behaves according to Bose-Einstein statistics and possesses integer spin. Bosons include elementary particles such as photons, gluons, W and Z bosons, Higgs bosons, and the hypothetical graviton, as well as certain composite particles such as mesons and stable nuclides of even mass number. Bosons constitute one of two main classes of particles, the other being fermions. Unlike fermions, there is no limit to the number of bosons that can occupy the same quantum state.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::BoylesLaw(string text)
{
    string model = "llama3";
    string definition = "A chemical law which states that the volume of a given mass of a gas at constant temperature is inversely proportional to its pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::BraketNotation(string text)
{
    string model = "llama3";
    string definition = "a notation for linear algebra and linear operators on complex vector spaces together with their dual space both in the finite-dimensional and infinite-dimensional case. It is specifically designed to ease the types of calculations that frequently come up in quantum mechanics. Its use in quantum mechanics is quite widespread.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bra-ket Notation";
        }
    }

    return nullptr;
}

string _Physics::Terms::BraggsLaw(string text)
{
    string model = "llama3";
    string definition = "a special case of Laue diffraction, giving the angles for coherent scattering of waves from a large crystal lattice. It describes how the superposition of wave fronts scattered by lattice planes leads to a strict relation between the wavelength and scattering angle. This law was initially formulated for X-rays, but it also applies to all types of matter waves including neutron and electron waves if there are a large number of atoms, as well as visible light with artificial periodic microscale lattices.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Braggs Law";
        }
    }

    return nullptr;
}

string _Physics::Terms::Bremsstrahlung(string text)
{
    string model = "llama3";
    string definition = "is electromagnetic radiation produced by the deceleration of a charged particle when deflected by another charged particle, typically an electron by an atomic nucleus. The moving particle loses kinetic energy, which is converted into radiation (i.e., photons), thus satisfying the law of conservation of energy. The term is also used to refer to the process of producing the radiation. Bremsstrahlung has a continuous spectrum, which becomes more intense and whose peak intensity shifts toward higher frequencies as the change of the energy of the decelerated particles increases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bremsstrahlung";
        }
    }

    return nullptr;
}

string _Physics::Terms::BrewstersAngle(string text)
{
    string model = "llama3";
    string definition = "an angle of incidence at which light with a particular polarization is perfectly transmitted through a transparent dielectric surface, with no reflection. When unpolarized light is incident at this angle, the light that is reflected from the surface is therefore perfectly polarized. The angle is named after the Scottish physicist Sir David Brewster (1781-1868)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::BritishThermalUnit(string text)
{
    string model = "llama3";
    string definition = "An Imperial unit of energy defined as the amount of energy needed to heat one pound of water by one degree Fahrenheit; 1 btu is equal to about 1,055 joules. In scientific contexts the btu has largely been replaced by the SI unit of energy, the joule.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "British Thermal Unit";
        }
    }

    return nullptr;
}

string _Physics::Terms::Brittleness(string text)
{
    string model = "llama3";
    string definition = "The tendency of a material to break without significant plastic deformation when subjected to stress. Brittle materials absorb relatively little energy prior to fracture, even those of high strength. Breaking is often accompanied by a snapping sound.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::BrownianMotion(string text)
{
    string model = "llama3";
    string definition = "The presumably random movement of particles suspended in a fluid (liquid or gas) resulting from their bombardment by fast-moving atoms or molecules in the gas or liquid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Bubble(string text)
{
    string model = "llama3";
    string definition = "a globule of a gas substance in a liquid. In the opposite case, a globule of a liquid in a gas, is called a drop. Due to the Marangoni effect, bubbles may remain intact when they reach the surface of the immersive substance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bubble";
        }
    }

    return nullptr;
}

string _Physics::Terms::BulkModulus(string text)
{
    string model = "llama3";
    string definition = "A measure of a substance's resistance to uniform compression defined as the ratio of the infinitesimal pressure increase to the resulting relative decrease of the volume. Its base unit is the pascal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Buoyancy(string text)
{
    string model = "llama3";
    string definition = "An upward force exerted by a fluid that opposes the weight of an immersed object.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Calculus(string text)
{
    string model = "llama3";
    string definition = "A branch of mathematics that studies change and has two major sub-fields: differential calculus (concerning rates of change and slopes of curves), and integral calculus (concerning accumulation of quantities and the areas under and between curves). These two branches are related to each other by the fundamental theorem of calculus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Capacitance(string text)
{
    string model = "llama3";
    string definition = "The ratio of the change in the electric charge of a system to the corresponding change in its electric potential. There are two closely related notions of capacitance: self capacitance and mutual capacitance. Any object that can be electrically charged exhibits self capacitance. A material with a large self capacitance holds more electric charge at a given voltage than one with low capacitance. The notion of mutual capacitance is particularly important for understanding the operations of the capacitor, one of the three elementary linear electronic components (along with resistors and inductors).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::CapacitiveReactance(string text)
{
    string model = "llama3";
    string definition = "An opposition to the change of voltage across an electrical circuit element. Capacitive reactance Xc is inversely proportional to the signal frequency f (or angular frequency, w) and the capacitance c.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Capacitor(string text)
{
    string model = "llama3";
    string definition = "An electrical circuit element consisting of two conductors separated by an insulator (also known as a dielectric).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::CarnotCycle(string text)
{
    string model = "llama3";
    string definition = "A theoretical ideal thermodynamic cycle proposed by French physicist Nicolas Léonard Sadi Carnot in 1824 and expanded upon by others in the 1830s and 1840s. It provides an upper limit on the efficiency that any classical thermodynamic engine can achieve during the conversion of heat into work, or conversely, the efficiency of a refrigeration system in creating a temperature difference by the application of work to the system. It is not an actual thermodynamic cycle but is a theoretical construct.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::CartesiamCoordinateSystem(string text)
{
    string model = "llama3";
    string definition = "A coordinate system that specifies each point uniquely in a plane by a set of numerical coordinates, which are the signed distances to the point from two fixed perpendicular oriented lines, measured in the same unit of length. Each reference line is called a coordinate axis or just axis (plural axes) of the system, and the point where they meet is called the origin, at ordered pair (0, 0). The coordinates can also be defined as the positions of the perpendicular projections of the point onto the two axes, expressed as signed distances from the origin.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cartesiam Coordinate System";
        }
    }

    return nullptr;
}

string _Physics::Terms::Cathode(string text)
{
    string model = "llama3";
    string definition = "The electrode through which a conventional electric current flows out of a polarized electrical device; the direction of current flow is, by convention, opposite to the direction of electron flow, and so electrons flow into the cathode. In a galvanic cell, the cathode is the positive terminal or pole which accepts electrons flowing from the external part of an electrical circuit. However, in an electrolytic cell, the cathode is the wire or plate having excess negative charge, so named because positively charged cations tend to move towards it. Contrast anode.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::CathodeRay(string text)
{
    string model = "llama3";
    string definition = "streams of electrons observed in discharge tubes. If an evacuated glass tube is equipped with two electrodes and a voltage is applied, glass behind the positive electrode is observed to glow, due to electrons emitted from the cathode (the electrode connected to the negative terminal of the voltage supply).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Cation(string text)
{
    string model = "llama3";
    string definition = "A positively charged ion. Contrast anion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cation";
        }
    }

    return nullptr;
}

string _Physics::Terms::CelestialMechanics(string text)
{
    string model = "llama3";
    string definition = "the branch of astronomy that deals with the motions of objects in outer space. Historically, celestial mechanics applies principles of physics (classical mechanics) to astronomical objects, such as stars and planets, to produce ephemeris data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Celestial Mechanics";
        }
    }

    return nullptr;
}

string _Physics::Terms::CelsiusScale(string text)
{
    string model = "llama3";
    string definition = "the unit of temperature on the Celsius temperature scale (originally known as the centigrade scale outside Sweden), one of two temperature scales used in the International System of Units (SI), the other being the closely related Kelvin scale. The degree Celsius (symbol: °C) can refer to a specific point on the Celsius temperature scale or to a difference or range between two temperatures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Celsius Scale";
        }
    }

    return nullptr;
}

string _Physics::Terms::CenterOfCurvature(string text)
{
    string model = "llama3";
    string definition = "In geometry, the center of curvature of a curve is a point located at a distance from the curve";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Center Of Curvature";
        }
    }

    return nullptr;
}

string _Physics::Terms::CenterOfGravity(string text)
{
    string model = "llama3";
    string definition = "A body's center of gravity is the point around which the resultant torque due to gravity forces vanishes. Where a gravity field can be considered to be uniform, the mass-center and the center-of-gravity will be the same. However, for satellites in orbit around a planet, in the absence of other torques being applied to a satellite, the slight variation (gradient) in gravitational field between closer-to and further-from the planet (stronger and weaker gravity respectively) can lead to a torque that will tend to align the satellite such that its long axis is vertical. In such a case, it is important to make the distinction between the center-of-gravity and the mass-center. Any horizontal offset between the two will result in an applied torque.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Center Of Gravity";
        }
    }

    return nullptr;
}

string _Physics::Terms::CenterOfPressure(string text)
{
    string model = "llama3";
    string definition = "A classic problem in potential theory involving the determination of the motion of a particle in a single central potential field. The solutions to such problems are important in classical mechanics, since many naturally occurring forces, such as gravity and electromagnetism, are central forces.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::CentrifugalForce(string text)
{
    string model = "llama3";
    string definition = "The apparent outward force that draws a rotating body away from the centre of rotation. It is caused by the inertia of the body as the body's path is continually redirected.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Centrifugal Force";
        }
    }

    return nullptr;
}

string _Physics::Terms::CentripetalForce(string text)
{
    string model = "llama3";
    string definition = "A force which keeps a body moving with a uniform speed along a circular path and is directed along the radius towards the centre.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::CGhPhysics(string text)
{
    string model = "llama3";
    string definition = "Any attempt in mainstream physics to unify existing theories of relativity, gravitation, and quantum mechanics, particularly by envisioning the three universal constants fundamental to each field - the speed of light (c), the gravitational constant (G), and the Planck constant (h) as the edges of a three-dimensional cube, at each corner of which is positioned a major sub-field within theoretical physics according to which of the three constants are accounted for by that sub-field and which are ignored. One corner of this so-called \"cube of theoretical physics\", where all three constants are accounted for simultaneously, has not yet been satisfactorily described: quantum gravity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "C Gh Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::ChainReaction(string text)
{
    string model = "llama3";
    string definition = "A sequence of reactions in which a reactive product or byproduct causes additional similar reactions to take place.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ChangeOfBase(string text)
{
    string model = "llama3";
    string definition = "The logarithm logb(x) can be computed from the logarithms of x and b with respect to an arbitrary base k using the following formula: logb(x) = logk(x)/logk(b)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Change Of Base";
        }
    }

    return nullptr;
}

string _Physics::Terms::ChargeCharacter(string text)
{
    string model = "llama3";
    string definition = "a particle or quasiparticle that is free to move, carrying an electric charge, especially the particles that carry electric charges in electrical conductors. Examples are electrons, ions and holes. In a conducting medium, an electric field can exert force on these free particles, causing a net motion of the particles through the medium; this is what constitutes an electric current. The electron and the proton are the elementary charge carriers, each carrying one elementary charge (e), of the same magnitude and opposite sign.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Charge Character";
        }
    }

    return nullptr;
}

string _Physics::Terms::ChemicalPhysics(string text)
{
    string model = "llama3";
    string definition = "a branch of physics that studies chemical processes from a physical point of view. It focuses on understanding the physical properties and behavior of chemical systems, using principles from both physics and chemistry. This field investigates physicochemical phenomena using techniques from atomic and molecular physics and condensed matter physics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemical Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::ChromaticAberration(string text)
{
    string model = "llama3";
    string definition = "a failure of a lens to focus all colors to the same point. It is caused by dispersion: the refractive index of the lens elements varies with the wavelength of light. The refractive index of most transparent materials decreases with increasing wavelength. Since the focal length of a lens depends on the refractive index, this variation in refractive index affects focusing. Since the focal length of the lens varies with the color of the light different colors of light are brought to focus at different distances from the lens or with different levels of magnification. Chromatic aberration manifests itself as \"fringes\" of color along boundaries that separate dark and bright parts of the image.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chromatic Aberration";
        }
    }

    return nullptr;
}

string _Physics::Terms::CircularMotion(string text)
{
    string model = "llama3";
    string definition = "In physics, circular motion is movement of an object along the circumference of a circle or rotation along a circular arc. It can be uniform, with a constant rate of rotation and constant tangential speed, or non-uniform with a changing rate of rotation. The rotation around a fixed axis of a three-dimensional body involves the circular motion of its parts. The equations of motion describe the movement of the center of mass of a body, which remains at a constant distance from the axis of rotation. In circular motion, the distance between the body and a fixed point on its surface remains the same, i.e., the body is assumed rigid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ClassicalMechanics(string text)
{
    string model = "llama3";
    string definition = "a physical theory describing the motion of objects such as projectiles, parts of machinery, spacecraft, planets, stars, and galaxies. The development of classical mechanics involved substantial change in the methods and philosophy of physics. The qualifier classical distinguishes this type of mechanics from physics developed after the revolutions in physics of the early 20th century, all of which revealed limitations in classical mechanics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Classical Mechanics";
        }
    }

    return nullptr;
}

string _Physics::Terms::CoefficientOfFriction(string text)
{
    string model = "llama3";
    string definition = "a dimensionless scalar value which equals the ratio of the force of friction between two bodies and the force pressing them together, either during or at the onset of slipping. The coefficient of friction depends on the materials used; for example, ice on steel has a low coefficient of friction, while rubber on pavement has a high coefficient of friction. Coefficients of friction range from near zero to greater than one. The coefficient of friction between two surfaces of similar metals is greater than that between two surfaces of different metals; for example, brass has a higher coefficient of friction when moved against brass, but less if moved against steel or aluminum.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coefficient Of Friction";
        }
    }

    return nullptr;
}

string _Physics::Terms::CoherencePhysics(string text)
{
    string model = "llama3";
    string definition = "the potential for two waves to interfere. Two monochromatic beams from a single source always interfere.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coherence Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::CohesionChemistry(string text)
{
    string model = "llama3";
    string definition = "action or property of like molecules sticking together, being mutually attractive. It is an intrinsic property of a substance that is caused by the shape and structure of its molecules, which makes the distribution of surrounding electrons irregular when molecules get close to one another, creating electrical attraction that can maintain a macroscopic structure such as a water drop. Cohesion allows for surface tension, creating a \"solid-like\" state upon which light-weight or low-density materials can be placed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cohesion Chemistry";
        }
    }

    return nullptr;
}

string _Physics::Terms::ColdFusion(string text)
{
    string model = "llama3";
    string definition = "a hypothesized type of nuclear reaction that would occur at, or near, room temperature. It would contrast starkly with the \"hot\" fusion that is known to take place naturally within stars and artificially in hydrogen bombs and prototype fusion reactors under immense pressure and at temperatures of millions of degrees, and be distinguished from muon-catalyzed fusion. There is currently no accepted theoretical model that would allow cold fusion to occur.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cold Fusion";
        }
    }

    return nullptr;
}

string _Physics::Terms::ComplexHarmonicMotion(string text)
{
    string model = "llama3";
    string definition = "In physics, complex harmonic motion is a complicated realm based on the simple harmonic motion. The word \"complex\" refers to different situations. Unlike simple harmonic motion, which is regardless of air resistance, friction, etc., complex harmonic motion often has additional forces to dissipate the initial energy and lessen the speed and amplitude of an oscillation until the energy of the system is totally drained and the system comes to rest at its equilibrium point.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Complex Harmonic Motion";
        }
    }

    return nullptr;
}

string _Physics::Terms::CompositeParticles(string text)
{
    string model = "llama3";
    string definition = "Composite particles are bound states of elementary particles. Hadrons are defined as strongly interacting composite particles. Hadrons are either: Composite fermions (especially 3 quarks), in which case they are called baryons. Composite bosons (especially 2 quarks), in which case they are called mesons. Ordinary baryons (composite fermions) contain three valence quarks or three valence antiquarks each. Ordinary mesons are made up of a valence quark and a valence antiquark. Because mesons have integer spin (0 or 1) and are not themselves elementary particles, they are classified as \"composite\" bosons, although being made of elementary fermions. Examples of mesons include the pion, kaon, and the J/W.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Composite Particles";
        }
    }

    return nullptr;
}

string _Physics::Terms::ComptonScattering(string text)
{
    string model = "llama3";
    string definition = "is the quantum theory of high frequency photons scattering following an interaction with a charged particle, usually an electron. Specifically, when the photon hits electrons, it releases loosely bound electrons from the outer valence shells of atoms or molecules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Compton Scattering";
        }
    }

    return nullptr;
}

string _Physics::Terms::ConcaveLens(string text)
{
    string model = "llama3";
    string definition = "A lens with two concave surfaces is biconcave (or just concave). If one of the surfaces is flat, the lens is plano-convex or plano-concave depending on the curvature of the other surface.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::CondensationPoint(string text)
{
    string model = "llama3";
    string definition = "In mathematics, a condensation point p of a subset S of a topological space is any point p such that every neighborhood of p contains uncountably many points of S. Thus \"condensation point\" is synonymous with N1 accumulation point\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Condensation Point";
        }
    }

    return nullptr;
}

string _Physics::Terms::CondensedMatterPhysics(string text)
{
    string model = "llama3";
    string definition = "the field of physics that deals with the macroscopic and microscopic physical properties of matter, especially the solid and liquid phases, that arise from electromagnetic forces between atoms and electrons. More generally, the subject deals with condensed phases of matter: systems of many constituents with strong interactions among them. More exotic condensed phases include the superconducting phase exhibited by certain materials at extremely low cryogenic temperatures, the ferromagnetic and antiferromagnetic phases of spins on crystal lattices of atoms, the Bose-Einstein condensates found in ultracold atomic systems, and liquid crystals. Condensed matter physicists seek to understand the behavior of these phases by experiments to measure various material properties, and by applying the physical laws of quantum mechanics, electromagnetism, statistical mechanics, and other physics theories to develop mathematical models and predict the properties of extremely large groups of atoms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ConservationOfMomentum(string text)
{
    string model = "llama3";
    string definition = "In a closed system (one that does not exchange any matter with its surroundings and is not acted on by external forces) the total momentum remains constant. This fact, known as the law of conservation of momentum, is implied by Newton's laws of motion. Suppose, for example, that two particles interact. As explained by the third law, the forces between them are equal in magnitude but opposite in direction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conservation Of Momentum";
        }
    }

    return nullptr;
}

string _Physics::Terms::ConservationLaw(string text)
{
    string model = "llama3";
    string definition = "In physics, a conservation law states that a particular measurable property of an isolated physical system does not change as the system evolves over time. Exact conservation laws include conservation of mass-energy, conservation of linear momentum, conservation of angular momentum, and conservation of electric charge. There are also many approximate conservation laws, which apply to such quantities as mass, parity, lepton number, baryon number, strangeness, hypercharge, etc. These quantities are conserved in certain classes of physics processes, but not in all.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conservation Law";
        }
    }

    return nullptr;
}

string _Physics::Terms::ConstructiveInterference(string text)
{
    string model = "llama3";
    string definition = "In physics, interference is a phenomenon in which two coherent waves are combined by adding their intensities or displacements with due consideration for their phase difference. The resultant wave may have greater intensity (constructive interference) or lower amplitude (destructive interference) if the two waves are in phase or out of phase, respectively. Interference effects can be observed with all types of waves, for example, light, radio, acoustic, surface water waves, gravity waves, or matter waves as well as in loudspeakers as electrical waves.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Constructive Interference";
        }
    }

    return nullptr;
}

string _Physics::Terms::ContinuousSpectrum(string text)
{
    string model = "llama3";
    string definition = "In the physical sciences, the spectrum of a physical quantity (such as energy) may be called continuous if it is non-zero over the whole spectrum domain (such as frequency or wavelength) or discrete if it attains non-zero values only in a discrete set over the independent variable, with band gaps between pairs of spectral bands or spectral lines.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Continuous Spectrum";
        }
    }

    return nullptr;
}

string _Physics::Terms::ContinuumMechanics(string text)
{
    string model = "llama3";
    string definition = "a branch of mechanics that deals with the deformation of and transmission of forces through materials modeled as a continuous medium (also called a continuum) rather than as discrete particles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Convection(string text)
{
    string model = "llama3";
    string definition = " single or multiphase fluid flow that occurs spontaneously through the combined effects of material property heterogeneity and body forces on a fluid, most commonly density and gravity (see buoyancy). When the cause of the convection is unspecified, convection due to the effects of thermal expansion and buoyancy can be assumed. Convection may also take place in soft solids or mixtures where particles can flow.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Convection";
        }
    }

    return nullptr;
}

string _Physics::Terms::Coulomb(string text)
{
    string model = "llama3";
    string definition = "the unit of electric charge in the International System of Units (SI).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::CoulombsLaw(string text)
{
    string model = "llama3";
    string definition = "or simply Coulomb's law, is an experimental law of physics that calculates the amount of force between two electrically charged particles at rest. This electric force is conventionally called the electrostatic force or Coulomb force. Although the law was known earlier, it was first published in 1785 by French physicist Charles-Augustin de Coulomb. Coulomb's law was essential to the development of the theory of electromagnetism and maybe even its starting point, as it allowed meaningful discussions of the amount of electric charge in a particle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ConvergingLens(string text)
{
    string model = "llama3";
    string definition = "For a biconvex or plano-convex lens in a lower-index medium, a collimated beam of light passing through the lens converges to a spot (a focus) behind the lens. In this case, the lens is called a positive or converging lens.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Converging Lens";
        }
    }

    return nullptr;
}

string _Physics::Terms::CosmicBackgroundRadiation(string text)
{
    string model = "llama3";
    string definition = "electromagnetic radiation that fills all space. The origin of this radiation depends on the region of the spectrum that is observed. One component is the cosmic microwave background. This component is redshifted photons that have freely streamed from an epoch when the Universe became transparent for the first time to radiation. Its discovery and detailed observations of its properties are considered one of the major confirmations of the Big Bang. The discovery (by chance in 1965) of the cosmic background radiation suggests that the early universe was dominated by a radiation field, a field of extremely high temperature and pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cosmic Background Radiation";
        }
    }

    return nullptr;
}

string _Physics::Terms::Creep(string text)
{
    string model = "llama3";
    string definition = "the tendency of a solid material to undergo slow deformation while subject to persistent mechanical stresses. It can occur as a result of long-term exposure to high levels of stress that are still below the yield strength of the material. Creep is more severe in materials that are subjected to heat for long periods and generally increases as they near their melting point.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Creep";
        }
    }

    return nullptr;
}

string _Physics::Terms::Crest(string text)
{
    string model = "llama3";
    string definition = "A Crest point on a wave is the highest point of the wave. A crest is a point on a surface wave where the displacement of the medium is at a maximum. A trough is the opposite of a crest, so the minimum or lowest point of the wave.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Crest";
        }
    }

    return nullptr;
}

string _Physics::Terms::CrestFactor(string text)
{
    string model = "llama3";
    string definition = "a parameter of a waveform, such as alternating current or sound, showing the ratio of peak values to the effective value. In other words, crest factor indicates how extreme the peaks are in a waveform. Crest factor 1 indicates no peaks, such as direct current or a square wave. Higher crest factors indicate peaks, for example sound waves tend to have high crest factors. Crest factor is the peak amplitude of the waveform divided by the RMS value of the waveform.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Crest Factor";
        }
    }

    return nullptr;
}

string _Physics::Terms::CriticalAngle(string text)
{
    string model = "llama3";
    string definition = "The critical angle is the smallest angle of incidence that yields total reflection, or equivalently the largest angle for which a refracted ray exists.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Critical Angle";
        }
    }

    return nullptr;
}

string _Physics::Terms::CriticalMass(string text)
{
    string model = "llama3";
    string definition = "In nuclear engineering, a critical mass is the smallest amount of fissile material needed for a sustained nuclear chain reaction. The critical mass of a fissionable material depends upon its nuclear properties (specifically, its nuclear fission cross-section), density, shape, enrichment, purity, temperature, and surroundings. The concept is important in nuclear weapon design.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Critical Mass";
        }
    }

    return nullptr;
}

string _Physics::Terms::CurieTempurature(string text)
{
    string model = "llama3";
    string definition = "In physics and materials science, the Curie temperature (TC), or Curie point, is the temperature above which certain materials lose their permanent magnetic properties, which can (in most cases) be replaced by induced magnetism. The Curie temperature is named after Pierre Curie, who showed that magnetism is lost at a critical temperature.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Curie Tempurature";
        }
    }

    return nullptr;
}

string _Physics::Terms::CurrentDensity(string text)
{
    string model = "llama3";
    string definition = "In electromagnetism, current density is the amount of charge per unit time that flows through a unit area of a chosen cross section. The current density vector is defined as a vector whose magnitude is the electric current per cross-sectional area at a given point in space, its direction being that of the motion of the positive charges at this point. In SI base units, the electric current density is measured in amperes per square metre.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Current Density";
        }
    }

    return nullptr;
}

string _Physics::Terms::CurvilinearMotion(string text)
{
    string model = "llama3";
    string definition = "The motion of an object moving in a curved path is called curvilinear motion. Example: A stone thrown into the air at an angle. Curvilinear motion describes the motion of a moving particles that conforms to a known or fixed curve. The study of such motion involves the use of two co-ordinate systems, the first being planar motion and the latter being cylindrical motion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Cyclotron(string text)
{
    string model = "llama3";
    string definition = "a type of particle accelerator invented by Ernest Lawrence in 1929-1930 at the University of California, Berkeley, and patented in 1932. A cyclotron accelerates charged particles outwards from the center of a flat cylindrical vacuum chamber along a spiral path. The particles are held to a spiral trajectory by a static magnetic field and accelerated by a rapidly varying electric field. Lawrence was awarded the 1939 Nobel Prize in Physics for this invention.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::DaltonsLaw(string text)
{
    string model = "llama3";
    string definition = "states that in a mixture of non-reacting gases, the total pressure exerted is equal to the sum of the partial pressures of the individual gases. This empirical law was observed by John Dalton in 1801 and published in 1802.[2] Dalton's law is related to the ideal gas laws.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::DampedVibration(string text)
{
    string model = "llama3";
    string definition = "The solution to this equation depends on the amount of damping. If the damping is small enough, the system still vibrates-but eventually, over time, stops vibrating. This case is called underdamping, which is important in vibration analysis. If damping is increased just to the point where the system no longer oscillates, the system has reached the point of critical damping. If the damping is increased past critical damping, the system is overdamped.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::DampingRatio(string text)
{
    string model = "llama3";
    string definition = "Any influence upon or within an oscillatory system that has the effect of reducing, restricting, or preventing its oscillations. Damping is a result of processes that dissipate the energy stored in the oscillation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Damping Ratio";
        }
    }

    return nullptr;
}

string _Physics::Terms::DarcyWeisbachEquation(string text)
{
    string model = "llama3";
    string definition = "In fluid dynamics, the Darcy-Weisbach equation is an empirical equation that relates the head loss, or pressure loss, due to friction along a given length of pipe to the average velocity of the fluid flow for an incompressible fluid. The equation is named after Henry Darcy and Julius Weisbach. Currently, there is no formula more accurate or universally applicable than the Darcy-Weisbach supplemented by the Moody diagram or Colebrook equation. The Darcy-Weisbach equation contains a dimensionless friction factor, known as the Darcy friction factor. This is also variously called the Darcy-Weisbach friction factor, friction factor, resistance coefficient, or flow coefficient.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::DarkEnergy(string text)
{
    string model = "llama3";
    string definition = "In physical cosmology and astronomy, dark energy is a proposed form of energy that affects the universe on the largest scales. Its primary effect is to drive the accelerating expansion of the universe. Assuming that the lambda-CDM model of cosmology is correct, dark energy dominates the universe, contributing 68% of the total energy in the present-day observable universe while dark matter and ordinary (baryonic) matter contribute 26% and 5%, respectively, and other components such as neutrinos and photons are nearly negligible.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dark Energy";
        }
    }

    return nullptr;
}

string _Physics::Terms::DarkMatter(string text)
{
    string model = "llama3";
    string definition = "In astronomy, dark matter is a hypothetical form of matter that does not interact with light or other electromagnetic radiation. Dark matter is implied by gravitational effects which cannot be explained by general relativity unless more matter is present than can be observed. Such effects occur in the context of formation and evolution of galaxies,";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dark Matter";
        }
    }

    return nullptr;
}

string _Physics::Terms::DeflectionEngineering(string text)
{
    string model = "llama3";
    string definition = "In structural engineering, deflection is the degree to which a part of a long structural element (such as beam) is deformed laterally (in the direction transverse to its longitudinal axis) under a load. It may be quantified in terms of an angle (angular displacement) or a distance (linear displacement). A longitudinal deformation (in the direction of the axis) is called elongation. The deflection distance of a member under a load can be calculated by integrating the function that mathematically describes the slope of the deflected shape of the member under that load. Standard formulas exist for the deflection of common beam configurations and load cases at discrete locations. Otherwise methods such as virtual work, direct integration, Castigliano's method, Macaulay's method or the direct stiffness method are used. The deflection of beam elements is usually calculated on the basis of the Euler-Bernoulli beam equation while that of a plate or shell element is calculated using plate or shell theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deflection Engineering";
        }
    }

    return nullptr;
}

string _Physics::Terms::DeformationPhysics(string text)
{
    string model = "llama3";
    string definition = "In physics and continuum mechanics, deformation is the change in the shape or size of an object. It has dimension of length with SI unit of metre (m). It is quantified as the residual displacement of particles in a non-rigid body, from an initial configuration to a final configuration, excluding the body's average translation and rotation (its rigid transformation). A configuration is a set containing the positions of all particles of the body.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deformation Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::Density(string text)
{
    string model = "llama3";
    string definition = "is a substance's mass per unit of volume. The symbol most often used for density is p (the lower case Greek letter rho), although the Latin letter D can also be used. Mathematically, density is defined as mass divided by volume: p = m/v.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Derivative(string text)
{
    string model = "llama3";
    string definition = "For a mathematical function of a real variable, a measurement of the sensitivity to change of the function value (output) with respect to a change in its argument (input); e.g. the derivative of the position of a moving object with respect to time is the object's velocity and measures how quickly the position of the object changes as time changes. Derivatives are a fundamental tool of calculus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::DestructiveInterference(string text)
{
    string model = "llama3";
    string definition = "In physics, interference is a phenomenon in which two coherent waves are combined by adding their intensities or displacements with due consideration for their phase difference. The resultant wave may have greater intensity (constructive interference) or lower amplitude (destructive interference) if the two waves are in phase or out of phase, respectively. Interference effects can be observed with all types of waves, for example, light, radio, acoustic, surface water waves, gravity waves, or matter waves as well as in loudspeakers as electrical waves.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Destructive Interference";
        }
    }

    return nullptr;
}

string _Physics::Terms::Diamagnetism(string text)
{
    string model = "llama3";
    string definition = "Diamagnetism is the property of materials that are repelled by a magnetic field; an applied magnetic field creates an induced magnetic field in them in the opposite direction, causing a repulsive force. In contrast, paramagnetic and ferromagnetic materials are attracted by a magnetic field. Diamagnetism is a quantum mechanical effect that occurs in all materials; when it is the only contribution to the magnetism, the material is called diamagnetic. In paramagnetic and ferromagnetic substances, the weak diamagnetic force is overcome by the attractive force of magnetic dipoles in the material. The magnetic permeability of diamagnetic materials is less than the permeability of vacuum, µ0. In most materials, diamagnetism is a weak effect which can be detected only by sensitive laboratory instruments, but a superconductor acts as a strong diamagnet because it entirely expels any magnetic field from its interior (the Meissner effect).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Dielectric(string text)
{
    string model = "llama3";
    string definition = "An electrical insulator that can be polarized by an applied electric field. When a dielectric material is placed in an electric field, electric charges do not flow through the material as they would in a conductor but only shift slightly from their equilibrium positions, with positive charges displaced in the direction of the field's flow and negative charges displaced in the opposite direction; this creates an internal electric field that reduces the larger field within the dielectric material.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dielectric";
        }
    }

    return nullptr;
}

string _Physics::Terms::Differaction(string text)
{
    string model = "llama3";
    string definition = "the interference or bending of waves around the corners of an obstacle or through an aperture into the region of geometrical shadow of the obstacle/aperture. The diffracting object or aperture effectively becomes a secondary source of the propagating wave. Italian scientist Francesco Maria Grimaldi coined the word diffraction and was the first to record accurate observations of the phenomenon in 1660.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Differaction";
        }
    }

    return nullptr;
}

string _Physics::Terms::DirectCurrent(string text)
{
    string model = "llama3";
    string definition = "is one-directional flow of electric charge. An electrochemical cell is a prime example of DC power. Direct current may flow through a conductor such as a wire, but can also flow through semiconductors, insulators, or even through a vacuum as in electron or ion beams. The electric current flows in a constant direction, distinguishing it from alternating current (AC). A term formerly used for this type of current was galvanic current.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Direct Current";
        }
    }

    return nullptr;
}

string _Physics::Terms::DispersionOptics(string text)
{
    string model = "llama3";
    string definition = "is the phenomenon in which the phase velocity of a wave depends on its frequency. Sometimes the term chromatic dispersion is used to refer to optics specifically, as opposed to wave propagation in general. A medium having this common property may be termed a dispersive medium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dispersion Optics";
        }
    }

    return nullptr;
}

string _Physics::Terms::Displacement(string text)
{
    string model = "llama3";
    string definition = "In fluid mechanics, displacement occurs when an object is largely immersed in a fluid, pushing it out of the way and taking its place. The volume of the fluid displaced can then be measured, and from this, the volume of the immersed object can be deduced: the volume of the immersed object will be exactly equal to the volume of the displaced fluid. (vector) The shortest distance from the initial to the final position of a point. Thus, it is the length of an imaginary straight path, typically distinct from the path actually travelled by.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Displacement";
        }
    }

    return nullptr;
}

string _Physics::Terms::Distance(string text)
{
    string model = "llama3";
    string definition = "s a numerical or occasionally qualitative measurement of how far apart objects, points, people, or ideas are. In physics or everyday usage, distance may refer to a physical length or an estimation based on other criteria (e.g. \"two counties over\"). The term is also frequently used metaphorically to mean a measurement of the amount of difference between two similar objects (such as statistical distance between probability distributions or edit distance between strings of text) or a degree of separation (as exemplified by distance between people in a social network). Most such notions of distance, both physical and metaphorical, are formalized in mathematics using the notion of a metric space.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::DriftVelocity(string text)
{
    string model = "llama3";
    string definition = "In physics, drift velocity is the average velocity attained by charged particles, such as electrons, in a material due to an electric field. In general, an electron in a conductor will propagate randomly at the Fermi velocity, resulting in an average velocity of zero. Applying an electric field adds to this random motion a small net flow in one direction; this is the drift.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Drift Velocity";
        }
    }

    return nullptr;
}

string _Physics::Terms::DopplerEffect(string text)
{
    string model = "llama3";
    string definition = "the change in the frequency of a wave in relation to an observer who is moving relative to the source of the wave.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Drag(string text)
{
    string model = "llama3";
    string definition = "Forces which act on a solid object in the direction of the relative fluid flow velocity. Unlike other resistive forces, such as dry friction, which is nearly independent of velocity, drag forces depend on velocity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Ductility(string text)
{
    string model = "llama3";
    string definition = "refers to the ability of a material to sustain significant plastic deformation before fracture. Plastic deformation is the permanent distortion of a material under applied stress, as opposed to elastic deformation, which is reversible upon removing the stress. Ductility is a critical mechanical performance indicator, particularly in applications that require materials to bend, stretch, or deform in other ways without breaking. The extent of ductility can be quantitatively assessed using the percent elongation at break, given by the equation: %EL = (lf-l0/l0)*100 ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Dynamics(string text)
{
    string model = "llama3";
    string definition = "Dynamics goes beyond merely describing objects' behavior and also considers the forces which explain it.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Dyne(string text)
{
    string model = "llama3";
    string definition = "a derived unit of force specified in the centimetre-gram-second (CGS) system of units, a predecessor of the modern SI.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Econophysics(string text)
{
    string model = "llama3";
    string definition = "a non-orthodox (in economics) interdisciplinary research field, applying theories and methods originally developed by physicists in order to solve problems in economics, usually those including uncertainty or stochastic processes and nonlinear dynamics. Some of its application to the study of financial markets has also been termed statistical finance referring to its roots in statistical physics. Econophysics is closely related to social physics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Econophysics";
        }
    }

    return nullptr;
}

string _Physics::Terms::ElasticCollision(string text)
{
    string model = "llama3";
    string definition = "an encounter (collision) between two bodies in which the total kinetic energy of the two bodies remains the same. In an ideal, perfectly elastic collision, there is no net conversion of kinetic energy into other forms such as heat, noise, or potential energy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Elastic Collision";
        }
    }

    return nullptr;
}

string _Physics::Terms::ElasticEnergy(string text)
{
    string model = "llama3";
    string definition = "the mechanical potential energy stored in the configuration of a material or physical system as it is subjected to elastic deformation by work performed upon it. Elastic energy occurs when objects are impermanently compressed, stretched or generally deformed in any manner. Elasticity theory primarily develops formalisms for the mechanics of solid bodies and materials.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Elastic Energy";
        }
    }

    return nullptr;
}

string _Physics::Terms::ElastocInstability(string text)
{
    string model = "llama3";
    string definition = "is a form of instability occurring in elastic systems, such as buckling of beams and plates subject to large compressive loads. There are a lot of ways to study this kind of instability. One of them is to use the method of incremental deformations based on superposing a small perturbation on an equilibrium solution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Elastoc Instability";
        }
    }

    return nullptr;
}

string _Physics::Terms::ElasticModulus(string text)
{
    string model = "llama3";
    string definition = "the unit of measurement of an object's or substance's resistance to being deformed elastically (i.e., non-permanently) when a stress is applied to it.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Elasticity(string text)
{
    string model = "llama3";
    string definition = "the ability of a body to resist a distorting influence and to return to its original size and shape when that influence or force is removed. Solid objects will deform when adequate loads are applied to them; if the material is elastic, the object will return to its initial shape and size after removal. This is in contrast to plasticity, in which the object fails to do so and instead remains in its deformed state.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectricCharge(string text)
{
    string model = "llama3";
    string definition = "the physical property of matter that causes it to experience a force when placed in an electromagnetic field. Electric charge can be positive or negative. Like charges repel each other and unlike charges attract each other. An object with no net charge is referred to as electrically neutral. Early knowledge of how charged substances interact is now called classical electrodynamics, and is still accurate for problems that do not require consideration of quantum effects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectricCircuit(string text)
{
    string model = "llama3";
    string definition = "an interconnection of electrical components (e.g., batteries, resistors, inductors, capacitors, switches, transistors) or a model of such an interconnection, consisting of electrical elements (e.g., voltage sources, current sources, resistances, inductances, capacitances). An electrical circuit is a network consisting of a closed loop, giving a return path for the current. Thus all circuits are networks, but not all networks are circuits (although networks without a closed loop are often imprecisely referred to as \"circuits\"). Linear electrical networks, a special type consisting only of sources (voltage or current), linear lumped elements (resistors, capacitors, inductors), and linear distributed elements (transmission lines), have the property that signals are linearly superimposable. They are thus more easily analyzed, using powerful frequency domain methods such as Laplace transforms, to determine DC response, AC response, and transient response.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectricCurrent(string text)
{
    string model = "llama3";
    string definition = "a flow of charged particles, such as electrons or ions, moving through an electrical conductor or space. It is defined as the net rate of flow of electric charge through a surface. The moving particles are called charge carriers, which may be one of several types of particles, depending on the conductor. In electric circuits the charge carriers are often electrons moving through a wire. In semiconductors they can be electrons or holes. In an electrolyte the charge carriers are ions, while in plasma, an ionized gas, they are ions and electrons. In the International System of Units (SI), electric current is expressed in units of ampere (sometimes called an \"amp\", symbol A), which is equivalent to one coulomb per second. The ampere is an SI base unit and electric current is a base quantity in the International System of Quantities (ISQ). Electric current is also known as amperage and is measured using a device called an ammeter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectricDisplacementField(string text)
{
    string model = "llama3";
    string definition = "In physics, the electric displacement field (denoted by D) or electric induction is a vector field that appears in Maxwell's equations. It accounts for the electromagnetic effects of polarization and that of an electric field, combining the two in an auxiliary field. It plays a major role in topics such as the capacitance of a material, as well as the response of dielectrics to an electric field, and how shapes can change due to electric fields in piezoelectricity or flexoelectricity as well as the creation of voltages and charge transfer due to elastic strains.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectricField(string text)
{
    string model = "llama3";
    string definition = "the physical field that surrounds electrically charged particles. Charged particles exert attractive forces on each other when their charges are opposite, and repulse each other when their charges are the same. Because these forces are exerted mutually, two charges must be present for the forces to take place. The electric field of a single charge (or group of charges) describes their capacity to exert such forces on another charged object. These forces are described by Coulomb's law, which says that the greater the magnitude of the charges, the greater the force, and the greater the distance between them, the weaker the force. Thus, we may informally say that the greater the charge of an object, the stronger its electric field. Similarly, an electric field is stronger nearer charged objects and weaker further away. Electric fields originate from electric charges and time-varying electric currents. Electric fields and magnetic fields are both manifestations of the electromagnetic field, Electromagnetism is one of the four fundamental interactions of nature.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectricFieldGradient(string text)
{
    string model = "llama3";
    string definition = "In atomic, molecular, and solid-state physics, the electric field gradient (EFG) measures the rate of change of the electric field at an atomic nucleus generated by the electronic charge distribution and the other nuclei. The EFG couples with the nuclear electric quadrupole moment of quadrupolar nuclei (those with spin quantum number greater than one-half) to generate an effect which can be measured using several spectroscopic methods, such as nuclear magnetic resonance (NMR), microwave spectroscopy, electron paramagnetic resonance (EPR, ESR), nuclear quadrupole resonance (NQR), Mössbauer spectroscopy or perturbed angular correlation (PAC). The EFG is non-zero only if the charges surrounding the nucleus violate cubic symmetry and therefore generate an inhomogeneous electric field at the position of the nucleus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectricFieldIntensity(string text)
{
    string model = "llama3";
    string definition = "the physical field that surrounds electrically charged particles. Charged particles exert attractive forces on each other when their charges are opposite, and repulse each other when their charges are the same. Because these forces are exerted mutually, two charges must be present for the forces to take place. The electric field of a single charge (or group of charges) describes their capacity to exert such forces on another charged object. These forces are described by Coulomb's law, which says that the greater the magnitude of the charges, the greater the force, and the greater the distance between them, the weaker the force.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electric Field Intensity";
        }
    }

    return nullptr;
}

string _Physics::Terms::ElectricGenerator(string text)
{
    string model = "llama3";
    string definition = "a device that converts motion-based power (potential and kinetic energy) or fuel-based power (chemical energy) into electric power for use in an external circuit. Sources of mechanical energy include steam turbines, gas turbines, water turbines, internal combustion engines, wind turbines and even hand cranks. The first electromagnetic generator, the Faraday disk, was invented in 1831 by British scientist Michael Faraday. Generators provide nearly all the power for electrical grids.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectricMotor(string text)
{
    string model = "llama3";
    string definition = "a machine that converts electrical energy into mechanical energy. Most electric motors operate through the interaction between the motor's magnetic field and electric current in a wire winding to generate force in the form of torque applied on the motor's shaft. An electric generator is mechanically identical to an electric motor, but operates in reverse, converting mechanical energy into electrical energy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectricPotential(string text)
{
    string model = "llama3";
    string definition = "defined as the amount of work/energy needed per unit of electric charge to move the charge from a reference point to a specific point in an electric field. More precisely, the electric potential is the energy per unit charge for a test charge that is so small that the disturbance of the field under consideration is negligible. The motion across the field is supposed to proceed with negligible acceleration, so as to avoid the test charge acquiring kinetic energy or producing radiation. By definition, the electric potential at the reference point is zero units. Typically, the reference point is earth or a point at infinity, although any point can be used.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectricPower(string text)
{
    string model = "llama3";
    string definition = "the rate of transfer of electrical energy within a circuit. Its SI unit is the watt, the general unit of power, defined as one joule per second. Standard prefixes apply to watts as with other SI units: thousands, millions and billions of watts are called kilowatts, megawatts and gigawatts respectively.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectricalConductor(string text)
{
    string model = "llama3";
    string definition = "In physics and electrical engineering, a conductor is an object or type of material that allows the flow of charge (electric current) in one or more directions. Materials made of metal are common electrical conductors. The flow of negatively charged electrons generates electric current, positively charged holes, and positive or negative ions in some cases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrical Conductor";
        }
    }

    return nullptr;
}

string _Physics::Terms::ElectricalInsulator(string text)
{
    string model = "llama3";
    string definition = "a material in which electric current does not flow freely. The atoms of the insulator have tightly bound electrons which cannot readily move. Other materials-semiconductors and conductors-conduct electric current more easily. The property that distinguishes an insulator is its resistivity; insulators have higher resistivity than semiconductors or conductors. The most common examples are non-metals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectricalPotentialEnergy(string text)
{
    string model = "llama3";
    string definition = "a potential energy (measured in joules) that results from conservative Coulomb forces and is associated with the configuration of a particular set of point charges within a defined system. An object may be said to have electric potential energy by virtue of either its own electric charge or its relative position to other electrically charged objects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrical Potential Energy";
        }
    }

    return nullptr;
}

string _Physics::Terms::ElectricalEngineering(string text)
{
    string model = "llama3";
    string definition = "an engineering discipline concerned with the study, design, and application of equipment, devices, and systems that use electricity, electronics, and electromagnetism. It emerged as an identifiable occupation in the latter half of the 19th century after the commercialization of the electric telegraph, the telephone, and electrical power generation, distribution, and use.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectricalNetwork(string text)
{
    string model = "llama3";
    string definition = "an interconnection of electrical components (e.g., batteries, resistors, inductors, capacitors, switches, transistors) or a model of such an interconnection, consisting of electrical elements (e.g., voltage sources, current sources, resistances, inductances, capacitances). An electrical circuit is a network consisting of a closed loop, giving a return path for the current. Thus all circuits are networks, but not all networks are circuits (although networks without a closed loop are often imprecisely referred to as \"circuits\"). Linear electrical networks, a special type consisting only of sources (voltage or current), linear lumped elements (resistors, capacitors, inductors), and linear distributed elements (transmission lines), have the property that signals are linearly superimposable. They are thus more easily analyzed, using powerful frequency domain methods such as Laplace transforms, to determine DC response, AC response, and transient response.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectricalResistance(string text)
{
    string model = "llama3";
    string definition = "a measure of its opposition to the flow of electric current. Its reciprocal quantity is electrical conductance, measuring the ease with which an electric current passes. Electrical resistance shares some conceptual parallels with mechanical friction. The SI unit of electrical resistance is the ohm, while electrical conductance is measured in siemens (S) (formerly called the \'mho\'.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Electricity(string text)
{
    string model = "llama3";
    string definition = "the set of physical phenomena associated with the presence and motion of matter possessing an electric charge. Electricity is related to magnetism, both being part of the phenomenon of electromagnetism, as described by Maxwell's equations. Common phenomena are related to electricity, including lightning, static electricity, electric heating, electric discharges and many others.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectroOpticEffect(string text)
{
    string model = "llama3";
    string definition = "a change in the optical properties of a material in response to an electric field that varies slowly compared with the frequency of light. The term encompasses a number of distinct phenomena, which can be subdivided into";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electro Optic Effect";
        }
    }

    return nullptr;
}

string _Physics::Terms::ElectrochemicalCell(string text)
{
    string model = "llama3";
    string definition = "a device that generates electrical energy from chemical reactions. Electrical energy can also be applied to these cells to cause chemical reactions to occur. Electrochemical cells that generate an electric current are called voltaic or galvanic cells and those that generate chemical reactions, via electrolysis for example, are called electrolytic cells.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrochemical Cell";
        }
    }

    return nullptr;
}

string _Physics::Terms::Electrodynamics(string text)
{
    string model = "llama3";
    string definition = "In physics, electromagnetism is an interaction that occurs between particles with electric charge via electromagnetic fields. The electromagnetic force is one of the four fundamental forces of nature. It is the dominant force in the interactions of atoms and molecules. Electromagnetism can be thought of as a combination of electrostatics and magnetism, which are distinct but closely intertwined phenomena. Electromagnetic forces occur between any two charged particles. Electric forces cause an attraction between particles with opposite charges and repulsion between particles with the same charge, while magnetism is an interaction that occurs between charged particles in relative motion. These two forces are described in terms of electromagnetic fields. Macroscopic charged objects are described in terms of Coulomb's law for electricity and Ampère's force law for magnetism; the Lorentz force describes microscopic charged particles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectrolyticCell(string text)
{
    string model = "llama3";
    string definition = "an electrochemical cell that utilizes an external source of electrical energy to force a chemical reaction that would otherwise not occur. The external energy source is a voltage applied between the cell's two electrodes; an anode (positively charged electrode) and a cathode (negatively charged electrode), which are immersed in an electrolyte solution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrolytic Cell";
        }
    }

    return nullptr;
}

string _Physics::Terms::Electromagnet(string text)
{
    string model = "llama3";
    string definition = "a type of magnet in which the magnetic field is produced by an electric current. Electromagnets usually consist of wire wound into a coil. A current through the wire creates a magnetic field which is concentrated in the hole in the center of the coil. The magnetic field disappears when the current is turned off. The wire turns are often wound around a magnetic core made from a ferromagnetic or ferrimagnetic material such as iron; the magnetic core concentrates the magnetic flux and makes a more powerful magnet.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectromagneticField(string text)
{
    string model = "llama3";
    string definition = "a physical field, mathematical functions of position and time, representing the influences on and due to electric charges. The field at any point in space and time can be regarded as a combination of an electric field and a magnetic field. Because of the interrelationship between the fields, a disturbance in the electric field can create a disturbance in the magnetic field which in turn affects the electric field, leading to an oscillation that propagates through space, known as an electromagnetic wave.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectromagneticInduction(string text)
{
    string model = "llama3";
    string definition = "is the production of an electromotive force (emf) across an electrical conductor in a changing magnetic field.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electromagnetic Induction";
        }
    }

    return nullptr;
}

string _Physics::Terms::ElectromagneticRadiation(string text)
{
    string model = "llama3";
    string definition = "In physics, electromagnetic radiation (EMR) consists of waves of the electromagnetic (EM) field, which propagate through space and carry momentum and electromagnetic radiant energy. Classically, electromagnetic radiation consists of electromagnetic waves, which are synchronized oscillations of electric and magnetic fields. In a vacuum, electromagnetic waves travel at the speed of light, commonly denoted c. There, depending on the frequency of oscillation, different wavelengths of electromagnetic spectrum are produced. In homogeneous, isotropic media, the oscillations of the two fields are on average perpendicular to each other and perpendicular to the direction of energy and wave propagation, forming a transverse wave.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectromagneticSpectrum(string text)
{
    string model = "llama3";
    string definition = "electromagnetic spectrum is the full range of electromagnetic radiation, organized by frequency or wavelength. The spectrum is divided into separate bands, with different names for the electromagnetic waves within each band. From low to high frequency these are: radio waves, microwaves, infrared, visible light, ultraviolet, X-rays, and gamma rays. The electromagnetic waves in each of these bands have different characteristics, such as how they are produced, how they interact with matter, and their practical applications.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electromagnetic Spectrum";
        }
    }

    return nullptr;
}

string _Physics::Terms::ElectromagneticWaveEquation(string text)
{
    string model = "llama3";
    string definition = "electromagnetic wave equation is a second-order partial differential equation that describes the propagation of electromagnetic waves through a medium or in a vacuum. It is a three-dimensional form of the wave equation. The homogeneous form of the equation, written in terms of either the electric field E or the magnetic field B, takes the form:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electromagnetic Wave Equation";
        }
    }

    return nullptr;
}

string _Physics::Terms::Electromechanics(string text)
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

string _Physics::Terms::ElectromotiveForce(string text)
{
    string model = "llama3";
    string definition = "In electromagnetism and electronics, electromotive force (also electromotance, abbreviated emf, denoted E) is an energy transfer to an electric circuit per unit of electric charge, measured in volts. Devices called electrical transducers provide an emf by converting other forms of energy into electrical energy. Other types of electrical equipment also produce an emf, such as batteries, which convert chemical energy, and generators, which convert mechanical energy. This energy conversion is achieved by physical forces applying physical work on electric charges. However, electromotive force itself is not a physical force,[5] and ISO/IEC standards have deprecated the term in favor of source voltage or source tension instead (denoted Us).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electromotive Force";
        }
    }

    return nullptr;
}

string _Physics::Terms::Electron(string text)
{
    string model = "llama3";
    string definition = "a subatomic particle with a negative one elementary electric charge. Electrons belong to the first generation of the lepton particle family, and are generally thought to be elementary particles because they have no known components or substructure. The electron's mass is approximately 1/1836 that of the proton. Quantum mechanical properties of the electron include an intrinsic angular momentum (spin) of a half-integer value, expressed in units of the reduced Planck constant, h. Being fermions, no two electrons can occupy the same quantum state, per the Pauli exclusion principle. Like all elementary particles, electrons exhibit properties of both particles and waves: They can collide with other particles and can be diffracted like light. The wave properties of electrons are easier to observe with experiments than those of other particles like neutrons and protons because electrons have a lower mass and hence a longer de Broglie wavelength for a given energy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectronCapture(string text)
{
    string model = "llama3";
    string definition = "a process in which the proton-rich nucleus of an electrically neutral atom absorbs an inner atomic electron, usually from the K or L electron shells. This process thereby changes a nuclear proton to a neutron and simultaneously causes the emission of an electron neutrino.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron Capture";
        }
    }

    return nullptr;
}

string _Physics::Terms::ElectronCloud(string text)
{
    string model = "llama3";
    string definition = "Atomic orbitals are basic building blocks of the atomic orbital model (or electron cloud or wave mechanics model), a modern framework for visualizing submicroscopic behavior of electrons in matter. In this model, the electron cloud of an atom may be seen as being built up (in approximation) in an electron configuration that is a product of simpler hydrogen-like atomic orbitals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron Cloud";
        }
    }

    return nullptr;
}

string _Physics::Terms::ElectronPair(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an electron pair or Lewis pair consists of two electrons that occupy the same molecular orbital but have opposite spins. Gilbert N. Lewis introduced the concepts of both the electron pair and the covalent bond in a landmark paper he published in 1916.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ElectronParamagneticResonance(string text)
{
    string model = "llama3";
    string definition = "Electron paramagnetic resonance (EPR) or electron spin resonance (ESR) spectroscopy is a method for studying materials that have unpaired electrons. The basic concepts of EPR are analogous to those of nuclear magnetic resonance (NMR), but the spins excited are those of the electrons instead of the atomic nuclei.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron Paramagnetic Resonance";
        }
    }

    return nullptr;
}

string _Physics::Terms::ElectronVolt(string text)
{
    string model = "llama3";
    string definition = "In physics, an electronvolt (symbol eV), also written electron-volt and electron volt, is the measure of an amount of kinetic energy gained by a single electron accelerating through an electric potential difference of one volt in vacuum. When used as a unit of energy, the numerical value of 1 eV in joules (symbol J) is equal to the numerical value of the charge of an electron in coulombs (symbol C).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron Volt";
        }
    }

    return nullptr;
}

string _Physics::Terms::Electronegativity(string text)
{
    string model = "llama3";
    string definition = "the tendency for an atom of a given chemical element to attract shared electrons (or electron density) when forming a chemical bond. An atom's electronegativity is affected by both its atomic number and the distance at which its valence electrons reside from the charged nucleus. The higher the associated electronegativity, the more an atom or a substituent group attracts electrons. Electronegativity serves as a simple way to quantitatively estimate the bond energy, and the sign and magnitude of a bond's chemical polarity, which characterizes a bond along the continuous scale from covalent to ionic bonding. The loosely defined term electropositivity is the opposite of electronegativity: it characterizes an element's tendency to donate valence electrons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Electronics(string text)
{
    string model = "llama3";
    string definition = "a scientific and engineering discipline that studies and applies the principles of physics to design, create, and operate devices that manipulate electrons and other electrically charged particles. It is a subfield of physics and electrical engineering which uses active devices such as transistors, diodes, and integrated circuits to control and amplify the flow of electric current and to convert it from one form to another, such as from alternating current (AC) to direct current (DC) or from analog signals to digital signals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Electrostatics(string text)
{
    string model = "llama3";
    string definition = "a branch of physics that studies slow-moving or stationary electric charges.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrostatics";
        }
    }

    return nullptr;
}

string _Physics::Terms::Electrostriction(string text)
{
    string model = "llama3";
    string definition = "In electromagnetism, electrostriction is a property of all electrical non-conductor or dielectrics. Electrostriction causes these materials to change their shape under the application of an electric field. It is the dual property to magnetostriction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrostriction";
        }
    }

    return nullptr;
}

string _Physics::Terms::ElementaryCharge(string text)
{
    string model = "llama3";
    string definition = "usually denoted by e, is a fundamental physical constant, defined as the electric charge carried by a single proton (+ 1e) or, equivalently, the magnitude of the negative electric charge carried by a single electron, which has charge -1 e.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Elementary Charge";
        }
    }

    return nullptr;
}

string _Physics::Terms::ElementaryParticle(string text)
{
    string model = "llama3";
    string definition = "In particle physics, an elementary particle or fundamental particle is a subatomic particle that is not composed of other particles. The Standard Model presently recognizes seventeen distinct particles-twelve fermions and five bosons. As a consequence of flavor and color combinations and antimatter, the fermions and bosons are known to have 48 and 13 variations, respectively. Among the 61 elementary particles embraced by the Standard Model number: electrons and other leptons, quarks, and the fundamental bosons. Subatomic particles such as protons or neutrons, which contain two or more elementary particles, are known as composite particles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Elementary Particle";
        }
    }

    return nullptr;
}

string _Physics::Terms::EmissionSpectrum(string text)
{
    string model = "llama3";
    string definition = "a chemical element or chemical compound is the spectrum of frequencies of electromagnetic radiation emitted due to electrons making a transition from a high energy state to a lower energy state. The photon energy of the emitted photons is equal to the energy difference between the two states. There are many possible electron transitions for each atom, and each transition has a specific energy difference. This collection of different transitions, leading to different radiated wavelengths, make up an emission spectrum. Each element's emission spectrum is unique. Therefore, spectroscopy can be used to identify elements in matter of unknown composition. Similarly, the emission spectra of molecules can be used in chemical analysis of substances.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Emission Spectrum";
        }
    }

    return nullptr;
}

string _Physics::Terms::Emissivity(string text)
{
    string model = "llama3";
    string definition = "the surface of a material is its effectiveness in emitting energy as thermal radiation. Thermal radiation is electromagnetic radiation that most commonly includes both visible radiation (light) and infrared radiation, which is not visible to human eyes. A portion of the thermal radiation from very hot objects (see photograph) is easily visible to the eye.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Emissivity";
        }
    }

    return nullptr;
}

string _Physics::Terms::Energy(string text)
{
    string model = "llama3";
    string definition = "the quantitative property that is transferred to a body or to a physical system, recognizable in the performance of work and in the form of heat and light. Energy is a conserved quantity-the law of conservation of energy states that energy can be converted in form, but not created or destroyed; matter and energy may also be converted to one another. The unit of measurement for energy in the International System of Units (SI) is the joule (J).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::EnergyLevel(string text)
{
    string model = "llama3";
    string definition = "A quantum mechanical system or particle that is bound-that is, confined spatially-can only take on certain discrete values of energy, called energy levels. This contrasts with classical particles, which can have any amount of energy. The term is commonly used for the energy levels of the electrons in atoms, ions, or molecules, which are bound by the electric field of the nucleus, but can also refer to energy levels of nuclei or vibrational or rotational energy levels in molecules. The energy spectrum of a system with such discrete energy levels is said to be quantized.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Energy Level";
        }
    }

    return nullptr;
}

string _Physics::Terms::EndothermicProcess(string text)
{
    string model = "llama3";
    string definition = "a chemical or physical process that absorbs heat from its surroundings. In terms of thermodynamics, it is a thermodynamic process with an increase in the enthalpy H (or internal energy U) of the system. In an endothermic process, the heat that a system absorbs is thermal energy transfer into the system. Thus, an endothermic reaction generally leads to an increase in the temperature of the system and a decrease in that of the surroundings.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::EngineeringPhysics(string text)
{
    string model = "llama3";
    string definition = "sometimes engineering science, is the field of study combining pure science disciplines (such as physics, mathematics, chemistry or biology) and engineering disciplines (computer, nuclear, electrical, aerospace, medical, materials, mechanical, etc.)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Enthalpy(string text)
{
    string model = "llama3";
    string definition = "the sum of a thermodynamic system's internal energy and the product of its pressure and volume. It is a state function in thermodynamics used in many measurements in chemical, biological, and physical systems at a constant external pressure, which is conveniently provided by the large ambient atmosphere.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Enthalpy";
        }
    }

    return nullptr;
}

string _Physics::Terms::Entropy(string text)
{
    string model = "llama3";
    string definition = "a scientific concept that is most commonly associated with a state of disorder, randomness, or uncertainty. The term and the concept are used in diverse fields, from classical thermodynamics, where it was first recognized, to the microscopic description of nature in statistical physics, and to the principles of information theory. It has found far-ranging applications in chemistry and physics, in biological systems and their relation to life, in cosmology, economics, sociology, weather science, climate change and information systems including the transmission of information in telecommunication.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Entropy";
        }
    }

    return nullptr;
}

string _Physics::Terms::Equipartition(string text)
{
    string model = "llama3";
    string definition = "In classical statistical mechanics, the equipartition theorem relates the temperature of a system to its average energies. The equipartition theorem is also known as the law of equipartition, equipartition of energy, or simply equipartition. The original idea of equipartition was that, in thermal equilibrium, energy is shared equally among all of its various forms; for example, the average kinetic energy per degree of freedom in translational motion of a molecule should equal that in rotational motion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Equipartition";
        }
    }

    return nullptr;
}

string _Physics::Terms::EscapeVelocity(string text)
{
    string model = "llama3";
    string definition = "In celestial mechanics, escape velocity or escape speed is the minimum speed needed for an object to escape from contact with or orbit of a primary body, assuming: Ballistic trajectory - no other forces are acting on the object, including propulsion and friction. No other gravity-producing objects exist.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ExcitedState(string text)
{
    string model = "llama3";
    string definition = "In quantum mechanics, an excited state of a system (such as an atom, molecule or nucleus) is any quantum state of the system that has a higher energy than the ground state (that is, more energy than the absolute minimum). Excitation refers to an increase in energy level above a chosen starting point, usually the ground state, but sometimes an already excited state. The temperature of a group of particles is indicative of the level of excitation (with the notable exception of systems that exhibit negative temperature).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Excited State";
        }
    }

    return nullptr;
}

string _Physics::Terms::ExothermicProcess(string text)
{
    string model = "llama3";
    string definition = "In thermodynamics, an exothermic process 'outward' is a thermodynamic process or reaction that releases energy from the system to its surroundings, usually in the form of heat, but also in a form of light (e.g. a spark, flame, or flash), electricity (e.g. a battery), or sound (e.g. explosion heard when burning hydrogen).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ExperimentalPhysics(string text)
{
    string model = "llama3";
    string definition = "the category of disciplines and sub-disciplines in the field of physics that are concerned with the observation of physical phenomena and experiments. Methods vary from discipline to discipline, from simple experiments and observations, such as Galileo's experiments, to more complicated ones, such as the Large Hadron Collider.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Experimental Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::farad(string text)
{
    string model = "llama3";
    string definition = "the unit of electrical capacitance, the ability of a body to store an electrical charge, in the International System of Units (SI), equivalent to 1 coulomb per volt (C/V).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "farad";
        }
    }

    return nullptr;
}

string _Physics::Terms::Faraday(string text)
{
    string model = "llama3";
    string definition = "a unit of electrical charge. Its use is much less common than of the coulomb, but is sometimes used in electrochemistry.. One faraday of charge is the charge of one mole of elementary charges (or of negative one mole of electrons), that is, 1 faraday = F x 1 mol = 9.64853321233100184x10^4 C";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Faraday";
        }
    }

    return nullptr;
}

string _Physics::Terms::FermatsPrinciple(string text)
{
    string model = "llama3";
    string definition = "the principle of least time, is the link between ray optics and wave optics. Fermat's principle states that the path taken by a ray between two given points is the path that can be traveled in the least time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::FermiSurface(string text)
{
    string model = "llama3";
    string definition = "In condensed matter physics, the Fermi surface is the surface in reciprocal space which separates occupied electron states from unoccupied electron states at zero temperature. The shape of the Fermi surface is derived from the periodicity and symmetry of the crystalline lattice and from the occupation of electronic energy bands. The existence of a Fermi surface is a direct consequence of the Pauli exclusion principle, which allows a maximum of one electron per quantum state. The study of the Fermi surfaces of materials is called fermiology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fermi Surface";
        }
    }

    return nullptr;
}

string _Physics::Terms::Fermion(string text)
{
    string model = "llama3";
    string definition = "In particle physics, a fermion is a subatomic particle that follows Fermi-Dirac statistics. Fermions have a half-odd-integer spin (spin 1/2, spin 3/2, etc.) and obey the Pauli exclusion principle. These particles include all quarks and leptons and all composite particles made of an odd number of these, such as all baryons and many atoms and nuclei. Fermions differ from bosons, which obey Bose-Einstein statistics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fermion";
        }
    }

    return nullptr;
}

string _Physics::Terms::Ferrimagnetism(string text)
{
    string model = "llama3";
    string definition = "material is a material that has populations of atoms with opposing magnetic moments, as in antiferromagnetism, but these moments are unequal in magnitude, so a spontaneous magnetization remains.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ferrimagnetism";
        }
    }

    return nullptr;
}

string _Physics::Terms::Ferromagnetism(string text)
{
    string model = "llama3";
    string definition = "a property of certain materials (such as iron) that results in a significant, observable magnetic permeability, and in many cases, a significant magnetic coercivity, allowing the material to form a permanent magnet. Ferromagnetic materials are noticeably attracted to a magnet, which is a consequence of their substantial magnetic permeability.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ferromagnetism";
        }
    }

    return nullptr;
}

string _Physics::Terms::FieldLine(string text)
{
    string model = "llama3";
    string definition = "a graphical visual aid for visualizing vector fields. It consists of an imaginary integral curve which is tangent to the field vector at each point along its length. A diagram showing a representative set of neighboring field lines is a common way of depicting a vector field in scientific and mathematical literature; this is called a field line diagram. They are used to show electric fields, magnetic fields, and gravitational fields among many other types. In fluid mechanics, field lines showing the velocity field of a fluid flow are called streamlines.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Field Line";
        }
    }

    return nullptr;
}

string _Physics::Terms::FirstLawOfThermodynamics(string text)
{
    string model = "llama3";
    string definition = "a formulation of the law of conservation of energy in the context of thermodynamic processes. The law distinguishes two principal forms of energy transfer, heat and thermodynamic work, that modify a thermodynamic system containing a constant amount of matter. The law also defines the internal energy of a system, an extensive property for taking account of the balance of heat and work in the system. Energy cannot be created or destroyed, but it can be transformed from one form to another. In an isolated system the sum of all forms of energy is constant.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "First Law Of Thermodynamics";
        }
    }

    return nullptr;
}

string _Physics::Terms::Fission(string text)
{
    string model = "llama3";
    string definition = "a reaction in which the nucleus of an atom splits into two or more smaller nuclei. The fission process often produces gamma photons, and releases a very large amount of energy even by the energetic standards of radioactive decay.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::FlavorParticlePhysics(string text)
{
    string model = "llama3";
    string definition = "In particle physics, flavour or flavor refers to the species of an elementary particle. The Standard Model counts six flavours of quarks and six flavours of leptons. They are conventionally parameterized with flavour quantum numbers that are assigned to all subatomic particles. They can also be described by some of the family symmetries proposed for the quark-lepton generations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Flavor Particle Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::Fluid(string text)
{
    string model = "llama3";
    string definition = "In physics, a fluid is a liquid, gas, or other material that may continuously move and deform (flow) under an applied shear stress, or external force. They have zero shear modulus, or, in simpler terms, are substances which cannot resist any shear force applied to them.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::FluidMechanics(string text)
{
    string model = "llama3";
    string definition = "the branch of physics concerned with the mechanics of fluids (liquids, gases, and plasmas) and the forces on them. It has applications in a wide range of disciplines, including mechanical, aerospace, civil, chemical, and biomedical engineering, as well as geophysics, oceanography, meteorology, astrophysics, and biology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::FluidPhysics(string text)
{
    string model = "llama3";
    string definition = "the branch of physics concerned with the mechanics of fluids (liquids, gases, and plasmas) and the forces on them. It has applications in a wide range of disciplines, including mechanical, aerospace, civil, chemical, and biomedical engineering, as well as geophysics, oceanography, meteorology, astrophysics, and biology. It can be divided into fluid statics, the study of fluids at rest; and fluid dynamics, the study of the effect of forces on fluid motion. It is a branch of continuum mechanics, a subject which models matter without using the information that it is made out of atoms; that is, it models matter from a macroscopic viewpoint rather than from microscopic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fluid Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::Hydrostatics(string text)
{
    string model = "llama3";
    string definition = "the branch of fluid mechanics that studies fluids at hydrostatic equilibrium and \"the pressure in a fluid or exerted by a fluid on an immersed body\". It encompasses the study of the conditions under which fluids are at rest in stable equilibrium as opposed to fluid dynamics, the study of fluids in motion. Hydrostatics is a subcategory of fluid statics, which is the study of all fluids, both compressible or incompressible, at rest.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydrostatics";
        }
    }

    return nullptr;
}

string _Physics::Terms::Fluorescence(string text)
{
    string model = "llama3";
    string definition = "one of two kinds of emission of light by a substance that has absorbed light or other electromagnetic radiation. When exposed to ultraviolet radiation, many substances will glow (fluoresce) with colored visible light. The color of the light emitted depends on the chemical composition of the substance. Fluorescent materials generally cease to glow nearly immediately when the radiation source stops. This distinguishes them from the other type of light emission, phosphorescence. Phosphorescent materials continue to emit light for some time after the radiation stops.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fluorescence";
        }
    }

    return nullptr;
}

string _Physics::Terms::Flux(string text)
{
    string model = "llama3";
    string definition = "describes any effect that appears to pass or travel (whether it actually moves or not) through a surface or substance. Flux is a concept in applied mathematics and vector calculus which has many applications to physics. For transport phenomena, flux is a vector quantity, describing the magnitude and direction of the flow of a substance or property. In vector calculus flux is a scalar quantity, defined as the surface integral of the perpendicular component of a vector field over a surface.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Flux";
        }
    }

    return nullptr;
}

string _Physics::Terms::FluxDensity(string text)
{
    string model = "llama3";
    string definition = "if that term is used, refers to its derivative along the surface that was integrated. By the Fundamental theorem of calculus, the corresponding flux density is a flux according to the transport definition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Flux Density";
        }
    }

    return nullptr;
}

string _Physics::Terms::FocalLength(string text)
{
    string model = "llama3";
    string definition = "an optical system is a measure of how strongly the system converges or diverges light; it is the inverse of the system's optical power. A positive focal length indicates that a system converges light, while a negative focal length indicates that the system diverges light. A system with a shorter focal length bends the rays more sharply, bringing them to a focus in a shorter distance or diverging them more quickly. For the special case of a thin lens in air, a positive focal length is the distance over which initially collimated (parallel) rays are brought to a focus, or alternatively a negative focal length indicates how far in front of the lens a point source must be located to form a collimated beam. For more general optical systems, the focal length has no intuitive meaning; it is simply the inverse of the system's optical power.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Focal Length";
        }
    }

    return nullptr;
}

string _Physics::Terms::Focus(string text)
{
    string model = "llama3";
    string definition = "a point where light rays originating from a point on the object converge. lthough the focus is conceptually a point, physically the focus has a spatial extent, called the blur circle. This non-ideal focusing may be caused by aberrations of the imaging optics. Even in the absence of aberrations, the smallest possible blur circle is the Airy disc caused by diffraction from the optical system's aperture; diffraction is the ultimate limit to the light focusing ability of any optical system. Aberrations tend to worsen as the aperture diameter increases, while the Airy circle is smallest for large apertures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Force(string text)
{
    string model = "llama3";
    string definition = "an influence that can cause an object to change its velocity unless counterbalanced by other forces. The concept of force makes the everyday notion of pushing or pulling mathematically precise. Because the magnitude and direction of a force are both important, force is a vector quantity. The SI unit of force is the newton (N), and force is often represented by the symbol F.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Force";
        }
    }

    return nullptr;
}

string _Physics::Terms::ForceCarrier(string text)
{
    string model = "llama3";
    string definition = "In quantum field theory, a force carrier is a type of particle that gives rise to forces between other particles. They serve as the quanta of a particular kind of physical field. Force carriers are also known as messenger particles, intermediate particles, or exchange particles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Force Carrier";
        }
    }

    return nullptr;
}

string _Physics::Terms::ForceFieldPhysics(string text)
{
    string model = "llama3";
    string definition = "In physics, a force field is a vector field corresponding with a non-contact force acting on a particle at various positions in space. Specifically, a force field is a vector field F, Where F(r) is the force that a particle would feel if it were at the position r.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Force Field Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::FrameOfReference(string text)
{
    string model = "llama3";
    string definition = "In physics and astronomy, a frame of reference (or reference frame) is an abstract coordinate system, whose origin, orientation, and scale have been specified in physical space. It is based on a set of reference points, defined as geometric points whose position is identified both mathematically (with numerical coordinate values) and physically (signaled by conventional markers). An important special case is that of inertial reference frames, a stationary or uniformly moving frame.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Frame Of Reference";
        }
    }

    return nullptr;
}

string _Physics::Terms::FraunhoferLines(string text)
{
    string model = "llama3";
    string definition = "a set of spectral absorption lines. They are dark absorption lines, seen in the optical spectrum of the Sun, and are formed when atoms in the solar atmosphere absorb light being emitted by the solar photosphere. The lines are named after German physicist Joseph von Fraunhofer, who observed them in 1814.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::FreeBodyDiagram(string text)
{
    string model = "llama3";
    string definition = "In physics and engineering, a free body diagram (FBD; also called a force diagram) is a graphical illustration used to visualize the applied forces, moments, and resulting reactions on a free body in a given condition. It depicts a body or connected bodies with all the applied forces and moments, and reactions, which act on the body(ies). The body may consist of multiple internal members (such as a truss), or be a compact body (such as a beam). A series of free bodies and other diagrams may be necessary to solve complex problems. Sometimes in order to calculate the resultant force graphically the applied forces are arranged as the edges of a polygon of forcesor force polygon.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Free Body Diagram";
        }
    }

    return nullptr;
}

string _Physics::Terms::Frequency(string text)
{
    string model = "llama3";
    string definition = "Frequency (symbol f), most often measured in hertz (symbol: Hz), is the number of occurrences of a repeating event per unit of time. It is also occasionally referred to as temporal frequency for clarity and to distinguish it from spatial frequency.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Frequency";
        }
    }

    return nullptr;
}

string _Physics::Terms::FrequencyModulation(string text)
{
    string model = "llama3";
    string definition = "the encoding of information in a carrier wave by varying the instantaneous frequency of the wave. The technology is used in telecommunications, radio broadcasting, signal processing, and computing. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::FreeFall(string text)
{
    string model = "llama3";
    string definition = "In classical mechanics, free fall is any motion of a body where gravity is the only force acting upon it. A freely falling object may not necessarily be falling down in the vertical direction. An object moving upwards might not normally be considered to be falling, but if it is subject to only the force of gravity, it is said to be in free fall. The Moon is thus in free fall around the Earth, though its orbital speed keeps it in very far orbit from the Earth's surface.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::FreezingPoint(string text)
{
    string model = "llama3";
    string definition = "the temperature at which it changes state from solid to liquid. At the melting point the solid and liquid phase exist in equilibrium. The melting point of a substance depends on pressure and is usually specified at a standard pressure such as 1 atmosphere or 100 kPa.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Friction(string text)
{
    string model = "llama3";
    string definition = "the force resisting the relative motion of solid surfaces, fluid layers, and material elements sliding against each other. Types of friction include dry, fluid, lubricated, skin, and internal -- an incomplete list. The study of the processes involved is called tribology, and has a history of more than 2000 years. Friction can have dramatic consequences, as illustrated by the use of friction created by rubbing pieces of wood together to start a fire. Another important consequence of many types of friction can be wear, which may lead to performance degradation or damage to components. It is known that frictional energy losses account for about 20% of the total energy expenditure of the world.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::FundamentalInteraction(string text)
{
    string model = "llama3";
    string definition = "In physics, the fundamental interactions or fundamental forces are interactions in nature that appear not to be reducible to more basic interactions. There are four fundamental interactions known to exist: gravity, electromagnetism, weak interaction strong interaction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::FundamentalFrequency(string text)
{
    string model = "llama3";
    string definition = "often referred to simply as the fundamental (abbreviated as f0 or f1 ), is defined as the lowest frequency of a periodic waveform. In music, the fundamental is the musical pitch of a note that is perceived as the lowest partial present. In terms of a superposition of sinusoids, the fundamental frequency is the lowest frequency sinusoidal in the sum of harmonically related frequencies, or the frequency of the difference between adjacent frequencies. In some contexts, the fundamental is usually abbreviated as f0, indicating the lowest frequency counting from zero.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fundamental Frequency";
        }
    }

    return nullptr;
}

string _Physics::Terms::FundamentalTheoremOfCalculus(string text)
{
    string model = "llama3";
    string definition = "a theorem that links the concept of differentiating a function (calculating its slopes, or rate of change at each point in time) with the concept of integrating a function (calculating the area under its graph, or the cumulative effect of small contributions). Roughly speaking, the two operations can be thought of as inverses of each other.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::NuclearFusion(string text)
{
    string model = "llama3";
    string definition = "a reaction in which two or more atomic nuclei, usually deuterium and tritium (hydrogen isotopes), combine to form one or more different atomic nuclei and subatomic particles (neutrons or protons). The difference in mass between the reactants and products is manifested as either the release or absorption of energy. This difference in mass arises due to the difference in nuclear binding energy between the atomic nuclei before and after the reaction. Nuclear fusion is the process that powers active or main-sequence stars and other high-magnitude stars, where large amounts of energy are released.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::GammaRay(string text)
{
    string model = "llama3";
    string definition = "a penetrating form of electromagnetic radiation arising from the radioactive decay of atomic nuclei. It consists of the shortest wavelength electromagnetic waves, typically shorter than those of X-rays. With frequencies above 30 exahertz (3x10^19 Hz) and wavelengths less than 10 picometers (1x10^-11 m), gamma ray photons have the highest photon energy of any form of electromagnetic radiation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gamma Ray";
        }
    }

    return nullptr;
}

string _Physics::Terms::Gas(string text)
{
    string model = "llama3";
    string definition = "one of the four fundamental states of matter. The others are solid, liquid, and plasma. A pure gas may be made up of individual atoms (e.g. a noble gas like neon), elemental molecules made from one type of atom (e.g. oxygen), or compound molecules made from a variety of atoms (e.g. carbon dioxide). A gas mixture, such as air, contains a variety of pure gases. What distinguishes gases from liquids and solids is the vast separation of the individual gas particles. This separation usually makes a colorless gas invisible to the human observer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::GeneralRelativity(string text)
{
    string model = "llama3";
    string definition = "the general theory of relativity, and as Einstein's theory of gravity, is the geometric theory of gravitation published by Albert Einstein in 1915 and is the current description of gravitation in modern physics. General relativity generalizes special relativity and refines Newton's law of universal gravitation, providing a unified description of gravity as a geometric property of space and time, or four-dimensional spacetime. In particular, the curvature of spacetime is directly related to the energy and momentum of whatever present matter and radiation. The relation is specified by the Einstein field equations, a system of second-order partial differential equations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Geophysics(string text)
{
    string model = "llama3";
    string definition = "is a subject of natural science concerned with the physical processes and physical properties of the Earth and its surrounding space environment, and the use of quantitative methods for their analysis. Geophysicists, who usually study geophysics, physics, or one of the Earth sciences at the graduate level, complete investigations across a wide range of scientific disciplines. The term geophysics classically refers to solid earth applications: Earth's shape; its gravitational, magnetic fields, and electromagnetic fields ; its internal structure and composition; its dynamics and their surface expression in plate tectonics, the generation of magmas, volcanism and rock formation. However, modern geophysics organizations and pure scientists use a broader definition that includes the water cycle including snow and ice; fluid dynamics of the oceans and the atmosphere; electricity and magnetism in the ionosphere and magnetosphere and solar-terrestrial physics; and analogous problems associated with the Moon and other planets.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Gluon(string text)
{
    string model = "llama3";
    string definition = "a type of massless elementary particle that mediates the strong interaction between quarks, acting as the exchange particle for the interaction. Gluons are massless vector bosons, thereby having a spin of 1. Through the strong interaction, gluons bind quarks into groups according to quantum chromodynamics (QCD), forming hadrons such as protons and neutrons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::GrahamsLaw(string text)
{
    string model = "llama3";
    string definition = "was formulated by Scottish physical chemist Thomas Graham in 1848. Graham found experimentally that the rate of effusion of a gas is inversely proportional to the square root of the molar mass of its particles. This formula is stated as: Rate1/Rate2 = sqrt(M2/M1) where: Rate1 is the rate of effusion for the first gas. (volume or number of moles per unit time). Rate2 is the rate of effusion for the second gas. M1 is the molar mass of gas 1 M2 is the molar mass of gas 2.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Gravitation(string text)
{
    string model = "llama3";
    string definition = "In physics, gravity (from Latin gravitas 'weight') a fundamental interaction primarily observed as mutual attraction between all things that have mass. Gravity is, by far, the weakest of the four fundamental interactions, approximately 1038 times weaker than the strong interaction, 1036 times weaker than the electromagnetic force and 1029 times weaker than the weak interaction. As a result, it has no significant influence at the level of subatomic particles. However, gravity is the most significant interaction between objects at the macroscopic scale, and it determines the motion of planets, stars, galaxies, and even light.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gravitation";
        }
    }

    return nullptr;
}

string _Physics::Terms::GravitationalConstant(string text)
{
    string model = "llama3";
    string definition = "The gravitational constant is an empirical physical constant involved in the calculation of gravitational effects in Sir Isaac Newton's law of universal gravitation and in Albert Einstein's theory of general relativity. It is also known as the universal gravitational constant, the Newtonian constant of gravitation, or the Cavendish gravitational constant, denoted by the capital letter G. The measured value of the constant is known with some certainty to four significant digits. In SI units, its value is approximately 6.6743×10−11 N*m^2/kg^2.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gravitational Constant";
        }
    }

    return nullptr;
}

string _Physics::Terms::GravitationalField(string text)
{
    string model = "llama3";
    string definition = "A model used to explain the influence that a massive body extends into the space around itself, producing a force (gravity) on another massive body. Thus, a gravitational field is used to explain and represent gravitational phenomena. It is measured in newtons per kilogram (N/kg).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::GravitationalPotential(string text)
{
    string model = "llama3";
    string definition = "The gravitational potential at a location is equal to the work (energy transferred) per unit mass that is done by the force of gravity to move an object to a fixed reference location.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::GravitationalWave(string text)
{
    string model = "llama3";
    string definition = "are transient displacements in a gravitational field - generated by the relative motion of gravitating masses - that radiate outward from their source at the speed of light. They were first proposed by Oliver Heaviside in 1893 and then later by Henri Poincaré in 1905 as the gravitational equivalent of electromagnetic waves. In 1916, Albert Einstein demonstrated that gravitational waves result from his general theory of relativity as ripples in spacetime.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

//string _Physics::Terms::GravitationalField(string text)
//{
//    string model = "llama3";
//    string definition = "A model used to explain the influence that a massive body extends into the space around itself, producing a force (gravity) on another massive body. Thus, a gravitational field is used to explain and represent gravitational phenomena. It is measured in newtons per kilogram (N/kg).";
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
//            return "Gravitational Field";
//        }
//    }
//
//    return nullptr;
//}

string _Physics::Terms::Graviton(string text)
{
    string model = "llama3";
    string definition = "In theories of quantum gravity, the graviton is the hypothetical elementary particle that mediates the force of gravitational interaction. There is no complete quantum field theory of gravitons due to an outstanding mathematical problem with renormalization in general relativity. In string theory, believed by some to be a consistent theory of quantum gravity, the graviton is a massless state of a fundamental string.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Graviton";
        }
    }

    return nullptr;
}

string _Physics::Terms::Gravity(string text)
{
    string model = "llama3";
    string definition = "a fundamental interaction primarily observed as mutual attraction between all things that have mass. Gravity is, by far, the weakest of the four fundamental interactions, approximately 1038 times weaker than the strong interaction, 1036 times weaker than the electromagnetic force and 1029 times weaker than the weak interaction. As a result, it has no significant influence at the level of subatomic particles. However, gravity is the most significant interaction between objects at the macroscopic scale, and it determines the motion of planets, stars, galaxies, and even light.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::GroundElectricity(string text)
{
    string model = "llama3";
    string definition = "In electrical engineering, ground or earth may be a reference point in an electrical circuit from which voltages are measured, a common return path for electric current, or a direct physical connection to the Earth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ground Electricity";
        }
    }

    return nullptr;
}

string _Physics::Terms::GroundReactionForce(string text)
{
    string model = "llama3";
    string definition = "In physics, and in particular in biomechanics, the ground reaction force (GRF) is the force exerted by the ground on a body in contact with it. For example, a person standing motionless on the ground exerts a contact force on it (equal to the person's weight) and at the same time an equal and opposite ground reaction force is exerted by the ground on the person.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ground Reaction Force";
        }
    }

    return nullptr;
}

string _Physics::Terms::GroundState(string text)
{
    string model = "llama3";
    string definition = "a quantum-mechanical system is its stationary state of lowest energy; the energy of the ground state is known as the zero-point energy of the system. An excited state is any state with energy greater than the ground state. In quantum field theory, the ground state is usually called the vacuum state or the vacuum.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::GroupVelocity(string text)
{
    string model = "llama3";
    string definition = "The group velocity of a wave is the velocity with which the overall envelope shape of the wave's amplitudes-known as the modulation or envelope of the wave-propagates through space.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Group Velocity";
        }
    }

    return nullptr;
}

string _Physics::Terms::Hadron(string text)
{
    string model = "llama3";
    string definition = "In particle physics, a hadron is a composite subatomic particle made of two or more quarks held together by the strong interaction. They are analogous to molecules, which are held together by the electric force. Most of the mass of ordinary matter comes from two hadrons: the proton and the neutron, while most of the mass of the protons and neutrons is in turn due to the binding energy of their constituent quarks, due to the strong force.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hadron";
        }
    }

    return nullptr;
}

string _Physics::Terms::HalfLife(string text)
{
    string model = "llama3";
    string definition = "the time required for a quantity (of substance) to reduce to half of its initial value. The term is commonly used in nuclear physics to describe how quickly unstable atoms undergo radioactive decay or how long stable atoms survive. The term is also used more generally to characterize any type of exponential (or, rarely, non-exponential) decay. For example, the medical sciences refer to the biological half-life of drugs and other chemicals in the human body. The converse of half-life (in exponential growth) is doubling time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::HamiltonsPrinciple(string text)
{
    string model = "llama3";
    string definition = "In physics, Hamilton's principle is William Rowan Hamilton's formulation of the principle of stationary action. It states that the dynamics of a physical system are determined by a variational problem for a functional based on a single function, the Lagrangian, which may contain all physical information concerning the system and the forces acting on it. The variational problem is equivalent to and allows for the derivation of the differential equations of motion of the physical system. Although formulated originally for classical mechanics, Hamilton's principle also applies to classical fields such as the electromagnetic and gravitational fields, and plays an important role in quantum mechanics, quantum field theory and criticality theories.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hamiltons Principle";
        }
    }

    return nullptr;
}

string _Physics::Terms::HamiltonMechanics(string text)
{
    string model = "llama3";
    string definition = "In physics, Hamiltonian mechanics is a reformulation of Lagrangian mechanics that emerged in 1833. Introduced by Sir William Rowan Hamilton, amiltonian mechanics replaces (generalized) velocities q^i used in Lagrangian mechanics with (generalized) momenta. Both theories provide interpretations of classical mechanics and describe the same physical phenomena.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hamilton Mechanics";
        }
    }

    return nullptr;
}

string _Physics::Terms::HarmonicMean(string text)
{
    string model = "llama3";
    string definition = "In mathematics, the harmonic mean is a kind of average, one of the Pythagorean means.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Heat(string text)
{
    string model = "llama3";
    string definition = "In thermodynamics, heat is energy in transfer between a thermodynamic system and its surroundings by modes other than thermodynamic work and transfer of matter. Such modes are microscopic, mainly thermal conduction, radiation, and friction, as distinct from the macroscopic modes, thermodynamic work and transfer of matter. For a closed system (transfer of matter excluded), the heat involved in a process is the difference in internal energy between the final and initial states of a system, and subtracting the work done in the process. For a closed system, this is the formulation of the first law of thermodynamics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::HeatTransfer(string text)
{
    string model = "llama3";
    string definition = "Heat transfer is a discipline of thermal engineering that concerns the generation, use, conversion, and exchange of thermal energy (heat) between physical systems. Heat transfer is classified into various mechanisms, such as thermal conduction, thermal convection, thermal radiation, and transfer of energy by phase changes. Engineers also consider the transfer of mass of differing chemical species (mass transfer in the form of advection), either cold or hot, to achieve heat transfer. While these mechanisms have distinct characteristics, they often occur simultaneously in the same system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::HelmholzFreeEnergy(string text)
{
    string model = "llama3";
    string definition = "In thermodynamics, the Helmholtz free energy (or Helmholtz energy) is a thermodynamic potential that measures the useful work obtainable from a closed thermodynamic system at a constant temperature (isothermal). The change in the Helmholtz energy during a process is equal to the maximum amount of work that the system can perform in a thermodynamic process in which temperature is held constant. At constant temperature, the Helmholtz free energy is minimized at equilibrium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Helmholz Free Energy";
        }
    }

    return nullptr;
}

string _Physics::Terms::Hertz(string text)
{
    string model = "llama3";
    string definition = "The hertz (symbol: Hz) is the unit of frequency in the International System of Units (SI), often described as being equivalent to one event (or cycle) per second. The hertz is an SI derived unit whose formal expression in terms of SI base units is s^-1, meaning that one hertz is one per second or the reciprocal of one second. It is used only in the case of periodic events. It is named after Heinrich Rudolf Hertz (1857-1894), the first person to provide conclusive proof of the existence of electromagnetic waves. For high frequencies, the unit is commonly expressed in multiples: kilohertz (kHz), megahertz (MHz), gigahertz (GHz), terahertz (THz).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::HiggsBoson(string text)
{
    string model = "llama3";
    string definition = "an elementary particle in the Standard Model of particle physics produced by the quantum excitation of the Higgs field, one of the fields in particle physics theory. In the Standard Model, the Higgs particle is a massive scalar boson with zero spin, even (positive) parity, no electric charge, and no colour charge that couples to (interacts with) mass. It is also very unstable, decaying into other particles almost immediately upon generation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Higgs Boson";
        }
    }

    return nullptr;
}

string _Physics::Terms::Homeokinetics(string text)
{
    string model = "llama3";
    string definition = "the study of self-organizing, complex systems. Standard physics studies systems at separate levels, such as atomic physics, nuclear physics, biophysics, social physics, and galactic physics. Homeokinetic physics studies the up-down processes that bind these levels. Tools such as mechanics, quantum field theory, and the laws of thermodynamics provide the key relationships. The subject, described as the physics and thermodynamics associated with the up down movement between levels of systems, originated in the late 1970s work of American physicists Harry Soodak and Arthur Iberall. Complex systems are universes, galaxies, social systems, people, or even those that seem as simple as gases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Homeokinetics";
        }
    }

    return nullptr;
}

string _Physics::Terms::HuygensFresnelPrinciple(string text)
{
    string model = "llama3";
    string definition = "states that every point on a wavefront is itself the source of spherical wavelets, and the secondary wavelets emanating from different points mutually interfere. The sum of these spherical wavelets forms a new wavefront. As such, the Huygens-Fresnel principle is a method of analysis applied to problems of luminous wave propagation both in the far-field limit and in near-field diffraction as well as reflection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::IcePoint(string text)
{
    string model = "llama3";
    string definition = "A physical process that results in the phase transition of a substance from a liquid to a solid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Impedance(string text)
{
    string model = "llama3";
    string definition = "The measure of the opposition that a circuit presents to a current when a voltage is applied.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Impedance";
        }
    }

    return nullptr;
}

string _Physics::Terms::Implosion(string text)
{
    string model = "llama3";
    string definition = "is the opposition to alternating current presented by the combined effect of resistance and reactance in a circuit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Implosion";
        }
    }

    return nullptr;
}

string _Physics::Terms::Impulse(string text)
{
    string model = "llama3";
    string definition = "In classical mechanics, impulse (symbolized by J or Imp) is the change in momentum of an object. If the initial momentum of an object is p1, and a subsequent momentum is p2, the object has received an impulse J: J = p2 - p1";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Impulse";
        }
    }

    return nullptr;
}


string _Physics::Terms::Inductance(string text)
{
    string model = "llama3";
    string definition = "the tendency of an electrical conductor to oppose a change in the electric current flowing through it. The electric current produces a magnetic field around the conductor. The magnetic field strength depends on the magnitude of the electric current, and follows any changes in the magnitude of the current. From Faraday's law of induction, any change in magnetic field through a circuit induces an electromotive force (EMF) (voltage) in the conductors, a process known as electromagnetic induction. This induced voltage created by the changing current has the effect of opposing the change in current. This is stated by Lenz's law, and the voltage is called back EMF.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Infrasound(string text)
{
    string model = "llama3";
    string definition = "sometimes referred to as low frequency sound or subsonic, describes sound waves with a frequency below the lower limit of human audibility (generally 20 Hz, as defined by the ANSI/ASA S1.1-2013 standard). Hearing becomes gradually less sensitive as frequency decreases, so for humans to perceive infrasound, the sound pressure must be sufficiently high. Although the ear is the primary organ for sensing low sound, at higher intensities it is possible to feel infrasound vibrations in various parts of the body.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Inertia(string text)
{
    string model = "llama3";
    string definition = "is the natural tendency of objects in motion to stay in motion and objects at rest to stay at rest, unless a force causes the velocity to change. It is one of the fundamental principles in classical physics, and described by Isaac Newton in his first law of motion (also known as The Principle of Inertia).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::InductiveReactance(string text)
{
    string model = "llama3";
    string definition = "Inductive reactance is a property exhibited by an inductor, and inductive reactance exists based on the fact that an electric current produces a magnetic field around it. In the context of an AC circuit (although this concept applies any time current is changing), this magnetic field is constantly changing as a result of current that oscillates back and forth. It is this change in magnetic field that induces another electric current to flow in the same wire (counter-EMF), in a direction such as to oppose the flow of the current originally responsible for producing the magnetic field (known as Lenz's Law). Hence, inductive reactance is an opposition to the change of current through an element.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inductive Reactance";
        }
    }

    return nullptr;
}

string _Physics::Terms::Integral(string text)
{
    string model = "llama3";
    string definition = "In mathematics, an integral is the continuous analog of a sum, which is used to calculate areas, volumes, and their generalizations. Integration, the process of computing an integral, is one of the two fundamental operations of calculus, the other being differentiation. Integration was initially used to solve problems in mathematics and physics, such as finding the area under a curve, or determining displacement from velocity. Usage of integration expanded to a wide variety of scientific fields thereafter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::IntegralTransform(string text)
{
    string model = "llama3";
    string definition = "In mathematics, an integral transform is a type of transform that maps a function from its original function space into another function space via integration, where some of the properties of the original function might be more easily characterized and manipulated than in the original function space. The transformed function can generally be mapped back to the original function space using the inverse transform.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::InternationalSystemOfUnits(string text)
{
    string model = "llama3";
    string definition = "The modern form of the metric system, comprising a system of units of measurement devised around seven base units and the convenience of the number ten.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "International System Of Units";
        }
    }

    return nullptr;
}

string _Physics::Terms::InvariantMass(string text)
{
    string model = "llama3";
    string definition = "in the case of bound systems simply mass, is the portion of the total mass of an object or system of objects that is independent of the overall motion of the system. More precisely, it is a characteristic of the system's total energy and momentum that is the same in all frames of reference related by Lorentz transformations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Invariant Mass";
        }
    }

    return nullptr;
}

string _Physics::Terms::Ion(string text)
{
    string model = "llama3";
    string definition = "an atom or molecule with a net electrical charge. The charge of an electron is considered to be negative by convention and this charge is equal and opposite to the charge of a proton, which is considered to be positive by convention. The net charge of an ion is not zero because its total number of electrons is unequal to its total number of protons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::IonicBond(string text)
{
    string model = "llama3";
    string definition = "a type of chemical bonding that involves the electrostatic attraction between oppositely charged ions, or between two atoms with sharply different electronegativities, and is the primary interaction occurring in ionic compounds. It is one of the main types of bonding, along with covalent bonding and metallic bonding. Ions are atoms (or groups of atoms) with an electrostatic charge. Atoms that gain electrons make negatively charged ions (called anions). Atoms that lose electrons make positively charged ions (called cations). This transfer of electrons is known as electrovalence in contrast to covalence. In the simplest case, the cation is a metal atom and the anion is a nonmetal atom, but these ions can be more complex. In simpler words, an ionic bond results from the transfer of electrons from a metal to a non-metal to obtain a full valence shell for both atoms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ionic Bond";
        }
    }

    return nullptr;
}

string _Physics::Terms::Ionization(string text)
{
    string model = "llama3";
    string definition = "the process by which an atom or a molecule acquires a negative or positive charge by gaining or losing electrons, often in conjunction with other chemical changes. The resulting electrically charged atom or molecule is called an ion. Ionization can result from the loss of an electron after collisions with subatomic particles, collisions with other atoms, molecules, electrons, positrons, protons, antiprotons and ions, or through the interaction with electromagnetic radiation. Heterolytic bond cleavage and heterolytic substitution reactions can result in the formation of ion pairs. Ionization can occur through radioactive decay by the internal conversion process, in which an excited nucleus transfers its energy to one of the inner-shell electrons causing it to be ejected.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::IonizationChamber(string text)
{
    string model = "llama3";
    string definition = "the simplest type of gaseous ionisation detector, and is widely used for the detection and measurement of many types of ionizing radiation, including X-rays, gamma rays, alpha particles and beta particles. Conventionally, the term \"ionization chamber\" refers exclusively to those detectors which collect all the charges created by direct ionization within the gas through the application of an electric field. It uses the discrete charges created by each interaction between the incident radiation and the gas to produce an output in the form of a small direct current. This means individual ionising events cannot be measured, so the energy of different types of radiation cannot be differentiated, but it gives a very good measurement of overall ionising effect.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ionization Chamber";
        }
    }

    return nullptr;
}

string _Physics::Terms::IonizingRadiation(string text)
{
    string model = "llama3";
    string definition = "including nuclear radiation, consists of subatomic particles or electromagnetic waves that have sufficient energy to ionize atoms or molecules by detaching electrons from them. Some particles can travel up to 99% of the speed of light, and the electromagnetic waves are on the high-energy portion of the electromagnetic spectrum.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ionizing Radiation";
        }
    }

    return nullptr;
}

string _Physics::Terms::Isotope(string text)
{
    string model = "llama3";
    string definition = "are distinct nuclides of the same chemical element. They have the same atomic number (number of protons in their nuclei) and position in the periodic table (and hence belong to the same chemical element), but different nucleon numbers (mass numbers) due to different numbers of neutrons in their nuclei. While all isotopes of a given element have similar chemical properties, they have different atomic masses and physical properties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Isotope";
        }
    }

    return nullptr;
}

string _Physics::Terms::JosephsonEffect(string text)
{
    string model = "llama3";
    string definition = "In physics, the Josephson effect is a phenomenon that occurs when two superconductors are placed in proximity, with some barrier or restriction between them.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Josephson Effect";
        }
    }

    return nullptr;
}

string _Physics::Terms::Joule(string text)
{
    string model = "llama3";
    string definition = "A derived unit of energy, work, or amount of heat in the International System of Units.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Kelvin(string text)
{
    string model = "llama3";
    string definition = "A scale and unit of measurement of temperature. The Kelvin scale is an absolute thermodynamic temperature scale which uses absolute zero as its null point.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Kinematics(string text)
{
    string model = "llama3";
    string definition = "The branch of classical mechanics that describes the motion of points, bodies (objects), and systems of bodies (groups of objects) without consideration of the causes of motion. The study of kinematics is often referred to as the \"geometry of motion\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::KineticEnergy(string text)
{
    string model = "llama3";
    string definition = "The energy that a physical body possesses due to its motion, defined as the work needed to accelerate a body of a given mass from rest to its stated velocity. The body continues to maintain this kinetic energy unless its velocity changes. Contrast potential energy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kinetic Energy";
        }
    }

    return nullptr;
}

string _Physics::Terms::KirchhoffsCircuitLaws(string text)
{
    string model = "llama3";
    string definition = "Two approximate equalities that deal with the current and voltage in electrical circuits. See Kirchhoff's laws for other meanings of the term.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kirchhoffs Circuit Laws";
        }
    }

    return nullptr;
}

string _Physics::Terms::KirchhoffsEquations(string text)
{
    string model = "llama3";
    string definition = "In fluid dynamics, a set of equations which describe the motion of a rigid body in an ideal fluid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kirchhoffs Equations";
        }
    }

    return nullptr;
}

string _Physics::Terms::LagrangianMechanics(string text)
{
    string model = "llama3";
    string definition = "In fluid dynamics, a set of equations which describe the motion of a rigid body in an ideal fluid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lagrangian Mechanics";
        }
    }

    return nullptr;
}

string _Physics::Terms::LaminarFlow(string text)
{
    string model = "llama3";
    string definition = "Occurs when a fluid flows in parallel layers with no disruption between the layers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::LaplaceTransform(string text)
{
    string model = "llama3";
    string definition = "In mathematics, the Laplace transform, named after Pierre-Simon Laplace, is an integral transform that converts a function of a real variable (usually t, in the time domain) to a function of a complex variable s (in the complex-valued frequency domain, also known as s-domain, or s-plane). The transform is useful for converting differentiation and integration in the time domain into much easier multiplication and division in the Laplace domain (analogous to how logarithms are useful for simplifying multiplication and division into addition and subtraction). This gives the transform many applications in science and engineering, mostly as a tool for solving linear differential equations and dynamical systems by simplifying ordinary differential equations and integral equations into algebraic polynomial equations, and by simplifying convolution into multiplication. Once solved, the inverse Laplace transform reverts to the original domain. where s is a complex number. It is related to many other transforms, most notably the Fourier transform and the Mellin transform. Formally, the Laplace transform is converted into a Fourier transform by the substitution s = iw where w is real. However, unlike the Fourier transform, which gives the decomposition of a function into its components in each frequency, the Laplace transform of a function with suitable decay is an analytic function, and so has a convergent power series, the coefficients of which give the decomposition of a function into its moments. Also unlike the Fourier transform, when regarded in this way as an analytic function, the techniques of complex analysis, and especially contour integrals, can be used for calculations. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::LaplaceRungeLenzVector(string text)
{
    string model = "llama3";
    string definition = "A vector used chiefly to describe the shape and orientation of the orbit of one astronomical body around another, such as a planet revolving around a star. For two bodies interacting by Newtonian gravity, the LRL vector is a constant of motion, meaning that it is the same no matter where it is calculated on the orbit; equivalently, the LRL vector is said to be conserved.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Laplace Runge Lenz Vector";
        }
    }

    return nullptr;
}

string _Physics::Terms::Laser(string text)
{
    string model = "llama3";
    string definition = "A device that emits light through a process of optical amplification based on the stimulated emission of electromagnetic radiation. The word \"laser\" is an acronym for \"light amplification by stimulated emission of radiation\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Laser";
        }
    }

    return nullptr;
}

string _Physics::Terms::LawOfUniversalGravitation(string text)
{
    string model = "llama3";
    string definition = "states that every particle attracts every other particle in the universe with a force that is proportional to the product of their masses and inversely proportional to the square of the distance between their centers. Separated objects attract and are attracted as if all their mass were concentrated at their centers. The publication of the law has become known as the \"first great unification\", as it marked the unification of the previously described phenomena of gravity on Earth with known astronomical behaviors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Law Of Universal Gravitation";
        }
    }

    return nullptr;
}

string _Physics::Terms::LCCircuit(string text)
{
    string model = "llama3";
    string definition = "A circuit consisting of an inductor (with inductance L) and a capacitor (with capacitance C).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::LenzsLaw(string text)
{
    string model = "llama3";
    string definition = "the direction of the electric current induced in a conductor by a changing magnetic field is such that the magnetic field created by the induced current opposes changes in the initial magnetic field. It is named after physicist Heinrich Lenz, who formulated it in 1834.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Lepton(string text)
{
    string model = "llama3";
    string definition = "An elementary particle which does not undergo strong interactions but is subject to the Pauli exclusion principle. Two main classes of leptons exist: charged leptons (also known as the electron-like leptons) and neutral leptons (better known as neutrinos).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Lever(string text)
{
    string model = "llama3";
    string definition = "A type of machine consisting of a beam or rigid rod pivoted at a fixed hinge or fulcrum; one of six classical simple machines.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::LevitationPhysics(string text)
{
    string model = "llama3";
    string definition = "is the process by which an object is held aloft in a stable position, without mechanical support via any physical contact. Levitation is accomplished by providing an upward force that counteracts the pull of gravity (in relation to gravity on earth), plus a smaller stabilizing force that pushes the object toward a home position whenever it is a small distance away from that home position. The force can be a fundamental force such as magnetic or electrostatic, or it can be a reactive force such as optical, buoyant, aerodynamic, or hydrodynamic. Levitation excludes floating at the surface of a liquid because the liquid provides direct mechanical support. Levitation excludes hovering flight by insects, hummingbirds, helicopters, rockets, and balloons because the object provides its own counter-gravity force.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Levitation Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::Light(string text)
{
    string model = "llama3";
    string definition = "electromagnetic radiation that can be perceived by the human eye. Visible light spans the visible spectrum and is usually defined as having wavelengths in the range of 400-700 nanometres (nm), corresponding to frequencies of 750-420 terahertz. The visible band sits adjacent to the infrared (with longer wavelengths and lower frequencies) and the ultraviolet (with shorter wavelengths and higher frequencies), called collectively optical radiation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::LinearActuator(string text)
{
    string model = "llama3";
    string definition = "an actuator that creates linear motion (i.e., in a straight line), in contrast to the circular motion of a conventional electric motor. Linear actuators are used in machine tools and industrial machinery, in computer peripherals such as disk drives and printers, in valves and dampers, and in many other places where linear motion is required. Hydraulic or pneumatic cylinders inherently produce linear motion. Many other mechanisms are used to generate linear motion from a rotating motor.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::LinearAlgebra(string text)
{
    string model = "llama3";
    string definition = "The branch of mathematics concerning vector spaces, often finite or countably infinite dimensional, as well as linear mappings between such spaces.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::LineOfForce(string text)
{
    string model = "llama3";
    string definition = "extended sense is synonymous with James Clerk Maxwell's line of induction. According to J.J. Thomson, Faraday usually discusses lines of force as chains of polarized particles in a dielectric, yet sometimes Faraday discusses them as having an existence all their own as in stretching across a vacuum. In addition to lines of force, J.J. Thomson-similar to Maxwell-also calls them tubes of electrostatic inductance, or simply Faraday tubes. From the 20th century perspective, lines of force are energy linkages embedded in a 19th-century field theory that led to more mathematically and experimentally sophisticated concepts and theories, including Maxwell's equations and Albert Einstein's theory of relativity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Line Of Force";
        }
    }

    return nullptr;
}

string _Physics::Terms::LinearElasticity(string text)
{
    string model = "llama3";
    string definition = "The mathematical study of how solid objects deform and become internally stressed due to prescribed loading conditions. Linear elasticity is a simplification of the more general nonlinear theory of elasticity and is a branch of continuum mechanics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::LiouvillesTheorem(string text)
{
    string model = "llama3";
    string definition = "a rigidity theorem about conformal mappings in Euclidean space. It states that every smooth conformal mapping on a domain of R^n, where n > 2, can be expressed as a composition of translations, similarities, orthogonal transformations and inversions: they are Mobius transformations (in n dimensions). This theorem severely limits the variety of possible conformal mappings in R3 and higher-dimensional spaces. By contrast, conformal mappings in R2 can be much more complicated - for example, all simply connected planar domains are conformally equivalent, by the Riemann mapping theorem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Liouvilles Theorem";
        }
    }

    return nullptr;
}

string _Physics::Terms::Liquid(string text)
{
    string model = "llama3";
    string definition = "a nearly incompressible fluid that conforms to the shape of its container but retains a nearly constant volume independent of pressure. It is one of the four fundamental states of matter (the others being solid, gas, and plasma), and is the only state with a definite volume but no fixed shape.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::LiquidCrystal(string text)
{
    string model = "llama3";
    string definition = "A state of matter which has properties between those of a conventional liquid and those of a solid crystal. For instance, an LC may flow like a liquid, but its molecules may be oriented in a crystal-like way.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Liquid Crystal";
        }
    }

    return nullptr;
}

string _Physics::Terms::LongitudinalWaves(string text)
{
    string model = "llama3";
    string definition = "are waves in which the vibration of the medium is parallel to the direction the wave travels and displacement of the medium is in the same (or opposite) direction of the wave propagation. Mechanical longitudinal waves are also called compressional or compression waves, because they produce compression and rarefaction when travelling through a medium, and pressure waves, because they produce increases and decreases in pressure. A wave along the length of a stretched Slinky toy, where the distance between coils increases and decreases, is a good visualization. Real-world examples include sound waves (vibrations in pressure, a particle of displacement, and particle velocity propagated in an elastic medium) and seismic P-waves (created by earthquakes and explosions).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Longitudinal Waves";
        }
    }

    return nullptr;
}

string _Physics::Terms::MTheory(string text)
{
    string model = "llama3";
    string definition = "An extension of string theory that attempts to unify seemingly contradictory mathematical formulations and which identifies 11 dimensions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "M Theory";
        }
    }

    return nullptr;
}

string _Physics::Terms::MachNumber(string text)
{
    string model = "llama3";
    string definition = "A dimensionless quantity representing the ratio of the speed of an object moving through a fluid to the local speed of sound.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::MachsPrinciple(string text)
{
    string model = "llama3";
    string definition = "The proposition that the existence of absolute rotation (the distinction of local inertial frames vs. rotating reference frames) is determined by the large-scale distribution of matter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Machs Principle";
        }
    }

    return nullptr;
}

string _Physics::Terms::Machine(string text)
{
    string model = "llama3";
    string definition = "Any powered tool consisting of one or more parts that is constructed to achieve a particular goal. Machines are usually powered by mechanical, chemical, thermal or electrical means, and are frequently motorised.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::MachineElement(string text)
{
    string model = "llama3";
    string definition = "An elementary component of a machine. There are three basic types: structural components, mechanisms, and control components.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::MaclaurinSeries(string text)
{
    string model = "llama3";
    string definition = "A representation of a function as an infinite sum of terms that are calculated from the values of the function's derivatives at a single point.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::MagneticField(string text)
{
    string model = "llama3";
    string definition = "A mathematical description of the magnetic influence of electric currents and magnetic materials. The magnetic field at any given point is specified by both a direction and a magnitude (or strength); as such it is a vector field.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Magnetism(string text)
{
    string model = "llama3";
    string definition = "A property of materials that respond to an applied magnetic field.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Magnetostatics(string text)
{
    string model = "llama3";
    string definition = "the study of magnetic fields in systems where the currents are steady (not changing with time). It is the magnetic analogue of electrostatics, where the charges are stationary. The magnetization need not be static; the equations of magnetostatics can be used to predict fast magnetic switching events that occur on time scales of nanoseconds or less. Magnetostatics is even a good approximation when the currents are not static - as long as the currents do not alternate rapidly. Magnetostatics is widely used in applications of micromagnetics such as models of magnetic storage devices as in computer memory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Magnetostatics";
        }
    }

    return nullptr;
}

string _Physics::Terms::Mass(string text)
{
    string model = "llama3";
    string definition = "an intrinsic property of a body. It was traditionally believed to be related to the quantity of matter in a body, until the discovery of the atom and particle physics. It was found that different atoms and different elementary particles, theoretically with the same amount of matter, have nonetheless different masses. Mass in modern physics has multiple definitions which are conceptually distinct, but physically equivalent. Mass can be experimentally defined as a measure of the body's inertia, meaning the resistance to acceleration (change of velocity) when a net force is applied. The object's mass also determines the strength of its gravitational attraction to other bodies.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mass";
        }
    }

    return nullptr;
}

string _Physics::Terms::MassBalance(string text)
{
    string model = "llama3";
    string definition = "An application of the law of conservation of mass to the analysis of physical systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::MassDensity(string text)
{
    string model = "llama3";
    string definition = "is a substance's mass per unit of volume. The symbol most often used for density is ? (the lower case Greek letter rho), although the Latin letter D can also be used. Mathematically, density is defined as mass divided by volume:[";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::MassFlux(string text)
{
    string model = "llama3";
    string definition = "the rate of mass flow per unit of area. Its SI units are kg*s^-1 ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mass Flux";
        }
    }

    return nullptr;
}

string _Physics::Terms::MassNumber(string text)
{
    string model = "llama3";
    string definition = "The total number of protons and neutrons (together known as nucleons) in an atomic nucleus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::MassSpectometry(string text)
{
    string model = "llama3";
    string definition = "an analytical technique that is used to measure the mass-to-charge ratio of ions. The results are presented as a mass spectrum, a plot of intensity as a function of the mass-to-charge ratio. Mass spectrometry is used in many different fields and is applied to pure samples as well as complex mixtures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mass Spectometry";
        }
    }

    return nullptr;
}

string _Physics::Terms::MaterialProperties(string text)
{
    string model = "llama3";
    string definition = "an intensive property of a material, i.e., a physical property or chemical property that does not depend on the amount of the material. These quantitative properties may be used as a metric by which the benefits of one material versus another can be compared, thereby aiding in materials selection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::MaterialsScience(string text)
{
    string model = "llama3";
    string definition = "an interdisciplinary field of researching and discovering materials. Materials engineering is an engineering field of finding uses for materials in other fields and industries.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::MathematicalPhysics(string text)
{
    string model = "llama3";
    string definition = "The application of mathematics to problems in physics and the development of mathematical methods suitable for such applications and for the formulation of physical theories.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Mathematics(string text)
{
    string model = "llama3";
    string definition = "a field of study that discovers and organizes methods, theories and theorems that are developed and proved for the needs of empirical sciences and mathematics itself. There are many areas of mathematics, which include number theory (the study of numbers), algebra (the study of formulas and related structures), geometry (the study of shapes and spaces that contain them), analysis (the study of continuous changes), and set theory (presently used as a foundation for all mathematics).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Matrix(string text)
{
    string model = "llama3";
    string definition = "A rectangular array of numbers, symbols, or expressions arranged in rows and columns. The individual items in a matrix are called its elements or entries.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Matter(string text)
{
    string model = "llama3";
    string definition = "Any substance (often a particle) that has rest mass and (usually) also volume.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::MaxwellsEquations(string text)
{
    string model = "llama3";
    string definition = "A set of partial differential equations that, together with the Lorentz force law, form the foundation of classical electrodynamics, classical optics, and electric circuits. Maxwell's equations describe how electric and magnetic fields are generated and altered by each other and by charges and currents.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::MeasureOfCentralTendancy(string text)
{
    string model = "llama3";
    string definition = "A term which relates to the way in which quantitative data tend to cluster around some value. A measure of central tendency is any of a number of ways of specifying this \"central value\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Measure Of Central Tendancy";
        }
    }

    return nullptr;
}

string _Physics::Terms::MechanicalEnergy(string text)
{
    string model = "llama3";
    string definition = "In physical sciences, mechanical energy is the sum of potential energy and kinetic energy. The principle of conservation of mechanical energy states that if an isolated system is subject only to conservative forces, then the mechanical energy is constant. If an object moves in the opposite direction of a conservative net force, the potential energy will increase; and if the speed (not the velocity) of the object changes, the kinetic energy of the object also changes. In all real systems, however, nonconservative forces, such as frictional forces, will be present, but if they are of negligible magnitude, the mechanical energy changes little and its conservation is a useful approximation. In elastic collisions, the kinetic energy is conserved, but in inelastic collisions some mechanical energy may be converted into thermal energy. The equivalence between lost mechanical energy and an increase in temperature was discovered by James Prescott Joule.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mechanical Energy";
        }
    }

    return nullptr;
}

string _Physics::Terms::MechanicalFilter(string text)
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

string _Physics::Terms::MechanicalEquilibrium(string text)
{
    string model = "llama3";
    string definition = "In classical mechanics, a particle is in mechanical equilibrium if the net force on that particle is zero.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mechanical Equilibrium";
        }
    }

    return nullptr;
}

string _Physics::Terms::MechanicalWave(string text)
{
    string model = "llama3";
    string definition = "In physics, a mechanical wave is a wave that is an oscillation of matter, and therefore transfers energy through a material medium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Mechanics(string text)
{
    string model = "llama3";
    string definition = "is the area of physics concerned with the relationships between force, matter, and motion among physical objects. Forces applied to objects may result in displacements, which are changes of an object's position relative to its environment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Meson(string text)
{
    string model = "llama3";
    string definition = "A type of hadronic subatomic particle composed of one quark and one antiquark bound together by the strong interaction. All mesons are unstable, with the longest-lived lasting for only a few hundredths of a microsecond.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ModusOfElasticity(string text)
{
    string model = "llama3";
    string definition = "The mathematical description of an object's or substance's tendency to be deformed elastically (i.e. non-permanently) when a force is applied to it. The elastic modulus of an object is defined as the slope of its stress-strain curve in the elastic deformation region. As such, a stiffer material will have a higher elastic modulus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::MolarConcentration(string text)
{
    string model = "llama3";
    string definition = "Molar concentration (also called molarity, amount concentration or substance concentration) is a measure of the concentration of a chemical species, in particular, of a solute in a solution, in terms of amount of substance per unit volume of solution. In chemistry, the most commonly used unit for molarity is the number of moles per liter, having the unit symbol mol/L or mol/dm^3 in SI units. A solution with a concentration of 1 mol/L is said to be 1 molar, commonly designated as 1 M or 1 M. Molarity is often depicted with square brackets around the substance of interest; for example, the molarity of the hydrogen ion is depicted as [H+]";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::MolarMass(string text)
{
    string model = "llama3";
    string definition = "A physical property of matter defined as the mass of a given substance divided by the amount of substance and expressed in grams per mole.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Molecule(string text)
{
    string model = "llama3";
    string definition = "An electrically neutral group of two or more atoms held together by covalent chemical bonds. Molecules are distinguished from ions by having a net electric charge equal to zero.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::MolecularPhysics(string text)
{
    string model = "llama3";
    string definition = "A branch of physics that studies the physical properties of molecules and the chemical bonds between atoms as well as their molecular dynamics. It is closely related to atomic physics and overlaps greatly with theoretical chemistry, physical chemistry and chemical physics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::MomentPhysics(string text)
{
    string model = "llama3";
    string definition = "a mathematical expression involving the product of a distance and a physical quantity such as a force or electric charge. Moments are usually defined with respect to a fixed reference point and refer to physical quantities located some distance from the reference point. For example, the moment of force, often called torque, is the product of a force on an object and the distance from the reference point to the object. In principle, any physical quantity can be multiplied by a distance to produce a moment. Commonly used quantities include forces, masses, and electric charge distributions; a list of examples is provided later.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Moment Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::MomentOfInertia(string text)
{
    string model = "llama3";
    string definition = "A property of a distribution of mass in space that measures its resistance to rotational acceleration about an axis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Momentum(string text)
{
    string model = "llama3";
    string definition = "A vector quantity consisting of the product of the mass and velocity of an object.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Momentum";
        }
    }

    return nullptr;
}

string _Physics::Terms::MonochromaticLight(string text)
{
    string model = "llama3";
    string definition = "a color that is evoked by monochromatic light, i.e. either a spectral line with a single wavelength or frequency of light in the visible spectrum, or a relatively narrow spectral band (e.g. lasers). Every wave of visible light is perceived as a spectral color; when viewed as a continuous spectrum, these colors are seen as the familiar rainbow. Non-spectral colors (or extra-spectral colors) are evoked by a combination of spectral colors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Monochromatic Light";
        }
    }

    return nullptr;
}

string _Physics::Terms::Motion(string text)
{
    string model = "llama3";
    string definition = "Any change in the position of an object over time. Motion can be mathematically described in terms of displacement, distance, velocity, speed, acceleration, and momentum, and is observed by attaching a frame of reference to an observer and measuring the change in an object's position relative to that frame. An object's motion cannot change unless it is acted upon by a force.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Motion";
        }
    }

    return nullptr;
}

string _Physics::Terms::Muon(string text)
{
    string model = "llama3";
    string definition = "An elementary particle, technically classified as a lepton, that is similar to the electron, with unitary negative electric charge (-1) and a spin of 1/2. Muons are not believed to have any sub-structure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Nanoengineering(string text)
{
    string model = "llama3";
    string definition = "The practice of engineering on the nanoscale. Nanoengineering is largely a synonym for nanotechnology, but emphasizes the applied rather the field.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Nanotechnology(string text)
{
    string model = "llama3";
    string definition = "The manipulation of matter on an atomic and molecular scale; a more generalized description by the National Nanotechnology Initiative is \"the manipulation of matter with at least one dimension sized from 1 to 100 nanometres\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::NavierStokesEquation(string text)
{
    string model = "llama3";
    string definition = "are partial differential equations which describe the motion of viscous fluid substances.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Navier Stokes Equation";
        }
    }

    return nullptr;
}

string _Physics::Terms::Neurophysics(string text)
{
    string model = "llama3";
    string definition = "the branch of biophysics dealing with the development and use of physical methods to gain information about the nervous system. Neurophysics is an interdisciplinary science using physics and combining it with other neurosciences to better understand neural processes. The methods used include the techniques of experimental biophysics and other physical measurements such as EEG mostly to study electrical, mechanical or fluidic properties, as well as theoretical and computational approaches. The term \"neurophysics\" is a portmanteau of \"neuron\" and \"physics\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neurophysics";
        }
    }

    return nullptr;
}

string _Physics::Terms::Neutrino(string text)
{
    string model = "llama3";
    string definition = "A type of electrically neutral subatomic particle denoted by the Greek letter ? (nu). All evidence suggests that neutrinos have mass but that their mass is tiny even by the standards of subatomic particles. Their mass has never been measured accurately.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Neutron(string text)
{
    string model = "llama3";
    string definition = "Subatomic particle with no charge";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neutron";
        }
    }

    return nullptr;
}

string _Physics::Terms::PromptNeutron(string text)
{
    string model = "llama3";
    string definition = "In nuclear engineering, a prompt neutron is a neutron immediately emitted (neutron emission) by a nuclear fission event, as opposed to a delayed neutron decay which can occur within the same context, emitted after beta decay of one of the fission products anytime from a few milliseconds to a few minutes later.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Prompt Neutron";
        }
    }

    return nullptr;
}

string _Physics::Terms::DelayedNeutron(string text)
{
    string model = "llama3";
    string definition = "In nuclear engineering, a delayed neutron is a neutron emitted after a nuclear fission event, by one of the fission products (or actually, a fission product daughter after beta decay), any time from a few milliseconds to a few minutes after the fission event. Neutrons born within 10^-14 seconds of the fission are termed \"prompt neutrons\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Delayed Neutron";
        }
    }

    return nullptr;
}

string _Physics::Terms::NeutronCrossSection(string text)
{
    string model = "llama3";
    string definition = "In nuclear physics, the concept of a neutron cross section is used to express the likelihood of interaction between an incident neutron and a target nucleus. The neutron cross section σ can be defined as the area in cm^2 for which the number of neutron-nuclei reactions taking place is equal to the product of the number of incident neutrons that would pass through the area and the number of target nuclei.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neutron Cross Section";
        }
    }

    return nullptr;
}

string _Physics::Terms::Newton(string text)
{
    string model = "llama3";
    string definition = "The newton (symbol: N) is the unit of force in the International System of Units (SI). Expressed in terms of SI base units, it is 1 kg*m/s^2, the force that accelerates a mass of one kilogram at one metre per second squared. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Newton";
        }
    }

    return nullptr;
}

string _Physics::Terms::NewtonsLawsOfMotion(string text)
{
    string model = "llama3";
    string definition = "three physical laws that describe the relationship between the motion of an object and the forces acting on it. These laws, which provide the basis for Newtonian mechanics, can be paraphrased as follows: 1. A body remains at rest, or in motion at a constant speed in a straight line, except insofar as it is acted upon by a force. 2. At any instant of time, the net force on a body is equal to the body's acceleration multiplied by its mass or, equivalently, the rate at which the body's momentum is changing with time. 3. If two bodies exert forces on each other, these forces have the same magnitude but opposite directions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Newtons Laws Of Motion";
        }
    }

    return nullptr;
}

string _Physics::Terms::NewtonsLawsOfUniversalGravitation(string text)
{
    string model = "llama3";
    string definition = "every particle attracts every other particle in the universe with a force that is proportional to the product of their masses and inversely proportional to the square of the distance between their centers. Separated objects attract and are attracted as if all their mass were concentrated at their centers. The publication of the law has become known as the \"first great unification\", as it marked the unification of the previously described phenomena of gravity on Earth with known astronomical behaviors. F = G*m1*m2/r^2";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Newtons Laws Of Universal Gravitation";
        }
    }

    return nullptr;
}

string _Physics::Terms::NormalForce(string text)
{
    string model = "llama3";
    string definition = "the component of a contact force that is perpendicular to the surface that an object contacts. In this instance normal is used in the geometric sense and means perpendicular, as opposed to the common language use of normal meaning \"ordinary\" or \"expected\". A person standing still on a platform is acted upon by gravity, which would pull them down towards the Earth's core unless there were a countervailing force from the resistance of the platform's molecules, a force which is named the \"normal force\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Normal Force";
        }
    }

    return nullptr;
}

string _Physics::Terms::NuclearForce(string text)
{
    string model = "llama3";
    string definition = "The nuclear force (or nucleon-nucleon interaction, residual strong force, or, historically, strong nuclear force) is a force that acts between hadrons, most commonly observed between protons and neutrons of atoms. Neutrons and protons, both nucleons, are affected by the nuclear force almost identically. Since protons have charge +1 e, they experience an electric force that tends to push them apart, but at short range the attractive nuclear force is strong enough to overcome the electrostatic force. The nuclear force binds nucleons into atomic nuclei.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nuclear Force";
        }
    }

    return nullptr;
}

string _Physics::Terms::NuclearPhysics(string text)
{
    string model = "llama3";
    string definition = "is the field of physics that studies atomic nuclei and their constituents and interactions, in addition to the study of other forms of nuclear matter. Nuclear physics should not be confused with atomic physics, which studies the atom as a whole, including its electrons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::NuclearReaction(string text)
{
    string model = "llama3";
    string definition = "In nuclear physics and nuclear chemistry, a nuclear reaction is a process in which two nuclei, or a nucleus and an external subatomic particle, collide to produce one or more new nuclides. Thus, a nuclear reaction must cause a transformation of at least one nuclide to another. If a nucleus interacts with another nucleus or particle, they then separate without changing the nature of any nuclide, the process is simply referred to as a type of nuclear scattering, rather than a nuclear reaction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nuclear Reaction";
        }
    }

    return nullptr;
}

string _Physics::Terms::NuclearTransmutation(string text)
{
    string model = "llama3";
    string definition = "the conversion of one chemical element or an isotope into another chemical element. Nuclear transmutation occurs in any process where the number of protons or neutrons in the nucleus of an atom is changed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nuclear Transmutation";
        }
    }

    return nullptr;
}

string _Physics::Terms::Nucleon(string text)
{
    string model = "llama3";
    string definition = "In physics and chemistry, a nucleon is either a proton or a neutron, considered in its role as a component of an atomic nucleus. The number of nucleons in a nucleus defines the atom's mass number (nucleon number).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nucleon";
        }
    }

    return nullptr;
}

string _Physics::Terms::AtomicNucleus(string text)
{
    string model = "llama3";
    string definition = "The atomic nucleus is the small, dense region consisting of protons and neutrons at the center of an atom, discovered in 1911 by Ernest Rutherford based on the 1909 Geiger-Marsden gold foil experiment. After the discovery of the neutron in 1932, models for a nucleus composed of protons and neutrons were quickly developed by Dmitri Ivanenko and Werner Heisenberg.  An atom is composed of a positively charged nucleus, with a cloud of negatively charged electrons surrounding it, bound together by electrostatic force. Almost all of the mass of an atom is located in the nucleus, with a very small contribution from the electron cloud. Protons and neutrons are bound together to form a nucleus by the nuclear force.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomic Nucleus";
        }
    }

    return nullptr;
}

string _Physics::Terms::Nuclide(string text)
{
    string model = "llama3";
    string definition = "a class of atoms characterized by their number of protons, Z, their number of neutrons, N, and their nuclear energy state. The word nuclide was coined by the American nuclear physicist Truman P. Kohman in 1947. Kohman defined nuclide as a \"species of atom characterized by the constitution of its nucleus\" containing a certain number of neutrons and protons. The term thus originally focused on the nucleus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nuclide";
        }
    }

    return nullptr;
}

string _Physics::Terms::Ohm(string text)
{
    string model = "llama3";
    string definition = "The SI derived unit of electrical resistance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::OhmsLaw(string text)
{
    string model = "llama3";
    string definition = "The electric current through a conductor between two points is directly proportional to the potential difference across the two points.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ohm's Law";
        }
    }

    return nullptr;
}

string _Physics::Terms::OpticalTweezers(string text)
{
    string model = "llama3";
    string definition = "An optomechanical device used for the capture, analysis, and manipulation of dielectric objects or particles, which operates via the application of force by the electric field of light.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Optical Tweezers";
        }
    }

    return nullptr;
}

string _Physics::Terms::OpticallyDetectedMagneticResonance(string text)
{
    string model = "llama3";
    string definition = "An optical technique for the initialisation and readout of quantum spin in some crystal defects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Optically Detected Magnetic Resonance";
        }
    }

    return nullptr;
}

string _Physics::Terms::Paraffin(string text)
{
    string model = "llama3";
    string definition = "Paraffin wax (or petroleum wax) is a soft colorless solid derived from petroleum, coal, or oil shale that consists of a mixture of hydrocarbon molecules containing between 20 and 40 carbon atoms. It is solid at room temperature and begins to melt above approximately 37C (99F) and its boiling point is above 370C (698F). Common applications for paraffin wax include lubrication, electrical insulation, and candles; dyed paraffin wax can be made into crayons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Paraffin";
        }
    }

    return nullptr;
}

string _Physics::Terms::ParallelCircuit(string text)
{
    string model = "llama3";
    string definition = "Two-terminal components and electrical networks can be connected in series or parallel. The resulting electrical network will have two terminals, and itself can participate in a series or parallel topology. Whether a two-terminal \"object\" is an electrical component (e.g. a resistor) or an electrical network (e.g. resistors in series) is a matter of perspective. This article will use \"component\" to refer to a two-terminal \"object\" that participates in the series/parallel networks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Parity(string text)
{
    string model = "llama3";
    string definition = "In physics, a parity transformation (also called parity inversion) is the flip in the sign of one spatial coordinate. In three dimensions, it can also refer to the simultaneous flip in the sign of all three spatial coordinates (a point reflection):";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Parity";
        }
    }

    return nullptr;
}

string _Physics::Terms::Particle(string text)
{
    string model = "llama3";
    string definition = "In the physical sciences, a particle (or corpuscule in older texts) is a small localized object which can be described by several physical or chemical properties, such as volume, density, or mass. They vary greatly in size or quantity, from subatomic particles like the electron, to microscopic particles like atoms and molecules, to macroscopic particles like powders and other granular materials. Particles can also be used to create scientific models of even larger objects depending on their density, such as humans moving in a crowd or celestial bodies in motion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Particle";
        }
    }

    return nullptr;
}

string _Physics::Terms::ParticleAccelerator(string text)
{
    string model = "llama3";
    string definition = "A particle accelerator is a machine that uses electromagnetic fields to propel charged particles to very high speeds and energies to contain them in well-defined beams. Small accelerators are used for fundamental research in particle physics. Accelerators are also used as synchrotron light sources for the study of condensed matter physics. Smaller particle accelerators are used in a wide variety of applications, including particle therapy for oncological purposes, radioisotope production for medical diagnostics, ion implanters for the manufacture of semiconductors, and accelerator mass spectrometers for measurements of rare isotopes such as radiocarbon.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Particle Accelerator";
        }
    }

    return nullptr;
}

string _Physics::Terms::ParticleDisplacement(string text)
{
    string model = "llama3";
    string definition = "a measurement of distance of the movement of a sound particle from its equilibrium position in a medium as it transmits a sound wave. The SI unit of particle displacement is the metre (m). In most cases this is a longitudinal wave of pressure (such as sound), but it can also be a transverse wave, such as the vibration of a taut string. In the case of a sound wave travelling through air, the particle displacement is evident in the oscillations of air molecules with, and against, the direction in which the sound wave is travelling.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ParticlePhysics(string text)
{
    string model = "llama3";
    string definition = "the study of fundamental particles and forces that constitute matter and radiation. The field also studies combinations of elementary particles up to the scale of protons and neutrons, while the study of combination of protons and neutrons is called nuclear physics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::PascalsLaw(string text)
{
    string model = "llama3";
    string definition = "or the principle of transmission of fluid-pressure) is a principle in fluid mechanics given by Blaise Pascal that states that a pressure change at any point in a confined incompressible fluid is transmitted throughout the fluid such that the same change occurs everywhere.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Pendulum(string text)
{
    string model = "llama3";
    string definition = "a device made of a weight suspended from a pivot so that it can swing freely. When a pendulum is displaced sideways from its resting, equilibrium position, it is subject to a restoring force due to gravity that will accelerate it back toward the equilibrium position. When released, the restoring force acting on the pendulum's mass causes it to oscillate about the equilibrium position, swinging back and forth. The time for one complete cycle, a left swing and a right swing, is called the period. The period depends on the length of the pendulum and also to a slight degree on the amplitude, the width of the pendulum's swing.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::PeriodicTable(string text)
{
    string model = "llama3";
    string definition = "an ordered arrangement of the chemical elements into rows (\"periods\") and columns (\"groups\"). It is an icon of chemistry and is widely used in physics and other sciences. It is a depiction of the periodic law, which states that when the elements are arranged in order of their atomic numbers an approximate recurrence of their properties is evident. The table is divided into four roughly rectangular areas called blocks. Elements in the same group tend to show similar chemical characteristics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Periodic Table";
        }
    }

    return nullptr;
}

string _Physics::Terms::PhaseMatter(string text)
{
    string model = "llama3";
    string definition = "In the physical sciences, a phase is a region of material that is chemically uniform, physically distinct, and (often) mechanically separable. In a system consisting of ice and water in a glass jar, the ice cubes are one phase, the water is a second phase, and the humid air is a third phase over the ice and water. The glass of the jar is a different material, in its own separate phase.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::PhaseWaves(string text)
{
    string model = "llama3";
    string definition = "In physics and mathematics, the phase of a wave or other periodic function F of some real variable t (such as time) is an angle-like quantity representing the fraction of the cycle covered up to t. It is expressed in such a scale that it varies by one full turn as the variable t goes through each period (and F(t) goes through each complete cycle). It may be measured in any angular unit such as degrees or radians, thus increasing by 360 degrees or 2pi t as the variablecompletes a full period.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::PhaseEquilibrium(string text)
{
    string model = "llama3";
    string definition = "In thermodynamics, the phase rule is a general principle governing \"pVT\" systems, whose thermodynamic states are completely described by the variables pressure (p), volume (V) and temperature (T), in thermodynamic equilibrium. If F is the number of degrees of freedom, C is the number of components and P is the number of phases, then F = C - P + 2";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phase Equilibrium";
        }
    }

    return nullptr;
}

string _Physics::Terms::Phenomenology(string text)
{
    string model = "llama3";
    string definition = "In physics, phenomenology is the application of theoretical physics to experimental data by making quantitative predictions based upon known theories. It is related to the philosophical notion of the same name in that these predictions describe anticipated behaviors for the phenomena in reality. Phenomenology stands in contrast with experimentation in the scientific method, in which the goal of the experiment is to test a scientific hypothesis instead of making predictions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phenomenology";
        }
    }

    return nullptr;
}

string _Physics::Terms::PhotoelectricEffect(string text)
{
    string model = "llama3";
    string definition = "the emission of electrons from a material caused by electromagnetic radiation such as ultraviolet light. Electrons emitted in this manner are called photoelectrons. The phenomenon is studied in condensed matter physics, solid state, and quantum chemistry to draw inferences about the properties of atoms, molecules and solids. The effect has found use in electronic devices specialized for light detection and precisely timed electron emission.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Photoelectric Effect";
        }
    }

    return nullptr;
}

string _Physics::Terms::Photon(string text)
{
    string model = "llama3";
    string definition = "an elementary particle that is a quantum of the electromagnetic field, including electromagnetic radiation such as light and radio waves, and the force carrier for the electromagnetic force. Photons are massless particles that always move at the speed of light measured in vacuum. The photon belongs to the class of boson particles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Photonics(string text)
{
    string model = "llama3";
    string definition = "a branch of optics that involves the application of generation, detection, and manipulation of light in the form of photons through emission, transmission, modulation, signal processing, switching, amplification, and sensing. Photonics is closely related to quantum electronics, where quantum electronics deals with the theoretical part of it while photonics deal with its engineering applications. Though covering all light's technical applications over the whole spectrum, most photonic applications are in the range of visible and near-infrared light. The term photonics developed as an outgrowth of the first practical semiconductor light emitters invented in the early 1960s and optical fibers developed in the 1970s.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Photonics";
        }
    }

    return nullptr;
}

string _Physics::Terms::PhysicalChemistry(string text)
{
    string model = "llama3";
    string definition = "the study of macroscopic and microscopic phenomena in chemical systems in terms of the principles, practices, and concepts of physics such as motion, energy, force, time, thermodynamics, quantum chemistry, statistical mechanics, analytical dynamics and chemical equilibria.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::PhysicalConstant(string text)
{
    string model = "llama3";
    string definition = "A physical constant, sometimes fundamental physical constant or universal constant, is a physical quantity that cannot be explained by a theory and therefore must be measured experimentally. It is distinct from a mathematical constant, which has a fixed numerical value, but does not directly involve any physical measurement.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Physical Constant";
        }
    }

    return nullptr;
}

string _Physics::Terms::PhysicalQuantity(string text)
{
    string model = "llama3";
    string definition = "a property of a material or system that can be quantified by measurement. A physical quantity can be expressed as a value, which is the algebraic multiplication of a numerical value and a unit of measurement. For example, the physical quantity mass, symbol m, can be quantified as m=n kg, where n is the numerical value and kg is the unit symbol (for kilogram). Quantities that are vectors have, besides numerical value and unit, direction or orientation in space.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Physics(string text)
{
    string model = "llama3";
    string definition = "the scientific study of matter, its fundamental constituents, its motion and behavior through space and time, and the related entities of energy and force. Physics is one of the most fundamental scientific disciplines. A scientist who specializes in the field of physics is called a physicist.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Piezoelectricity(string text)
{
    string model = "llama3";
    string definition = "the electric charge that accumulates in certain solid materials-such as crystals, certain ceramics, and biological matter such as bone, DNA, and various proteins-in response to applied mechanical stress. The word piezoelectricity means electricity resulting from pressure and latent heat.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Piezoelectricity";
        }
    }

    return nullptr;
}

string _Physics::Terms::Pion(string text)
{
    string model = "llama3";
    string definition = "is any of three subatomic particles: pi0, pi+, and pi-. Each pion consists of a quark and an antiquark and is therefore a meson. Pions are the lightest mesons and, more generally, the lightest hadrons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pion";
        }
    }

    return nullptr;
}

string _Physics::Terms::PlanckConstant(string text)
{
    string model = "llama3";
    string definition = "a fundamental physical constant of foundational importance in quantum mechanics: a photon's energy is equal to its frequency multiplied by the Planck constant, and the wavelength of a matter wave equals the Planck constant divided by the associated particle momentum.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::PlanckUnits(string text)
{
    string model = "llama3";
    string definition = "a system of units of measurement defined exclusively in terms of four universal physical constants: c, G, h, and kB (described further below). Expressing one of these physical constants in terms of Planck units yields a numerical value of 1. They are a system of natural units, defined using fundamental properties of nature (specifically, properties of free space) rather than properties of a chosen prototype object. Originally proposed in 1899 by German physicist Max Planck, they are relevant in research on unified theories such as quantum gravity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Planck Units";
        }
    }

    return nullptr;
}

string _Physics::Terms::PlancksLaw(string text)
{
    string model = "llama3";
    string definition = "describes the spectral density of electromagnetic radiation emitted by a black body in thermal equilibrium at a given temperature T, when there is no net flow of matter or energy between the body and its environment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Plancks Law";
        }
    }

    return nullptr;
}

string _Physics::Terms::PlasticityPhysics(string text)
{
    string model = "llama3";
    string definition = "In physics and materials science, plasticity (also known as plastic deformation) is the ability of a solid material to undergo permanent deformation, a non-reversible change of shape in response to applied forces.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Plasticity Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::Plasma(string text)
{
    string model = "llama3";
    string definition = "one of four fundamental states of matter (the other three being solid, liquid, and gas) characterized by the presence of a significant portion of charged particles in any combination of ions or electrons. It is the most abundant form of ordinary matter in the universe, mostly in stars (including the Sun), but also dominating the rarefied intracluster medium and intergalactic medium. Plasma can be artificially generated, for example, by heating a neutral gas or subjecting it to a strong electromagnetic field.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Plasma";
        }
    }

    return nullptr;
}

string _Physics::Terms::PlasmaPhysics(string text)
{
    string model = "llama3";
    string definition = "Plasmas are studied by the vast academic field of plasma science or plasma physics, including several sub-disciplines such as space plasma physics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Pneumatics(string text)
{
    string model = "llama3";
    string definition = "is the use of gas or pressurized air in mechanical systems. Pneumatic systems used in industry are commonly powered by compressed air or compressed inert gases. A centrally located and electrically-powered compressor powers cylinders, air motors, pneumatic actuators, and other pneumatic devices. A pneumatic system controlled through manual or automatic solenoid valves is selected when it provides a lower cost, more flexible, or safer alternative to electric motors, and hydraulic actuators.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Positron(string text)
{
    string model = "llama3";
    string definition = "The positron or antielectron is the particle with an electric charge of +1e, a spin of 1/2 (the same as the electron), and the same mass as an electron. It is the antiparticle (antimatter counterpart) of the electron. When a positron collides with an electron, annihilation occurs. If this collision occurs at low energies, it results in the production of two or more photons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Positron";
        }
    }

    return nullptr;
}

string _Physics::Terms::PotentialEnergy(string text)
{
    string model = "llama3";
    string definition = "In physics, potential energy is the energy held by an object because of its position relative to other objects, stresses within itself, its electric charge, or other factors. The term potential energy was introduced by the 19th-century Scottish engineer and physicist William Rankine, although it has links to the ancient Greek philosopher Aristotle's concept of potentiality.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Potential Energy";
        }
    }

    return nullptr;
}

string _Physics::Terms::PowerPhysics(string text)
{
    string model = "llama3";
    string definition = "the amount of energy transferred or converted per unit time. In the International System of Units, the unit of power is the watt, equal to one joule per second. Power is a scalar quantity. Specifying power in particular systems may require attention to other quantities; for example, the power involved in moving a ground vehicle is the product of the aerodynamic drag plus traction force on the wheels, and the velocity of the vehicle. The output power of a motor is the product of the torque that the motor generates and the angular velocity of its output shaft. Likewise, the power dissipated in an electrical element of a circuit is the product of the current flowing through the element and of the voltage across the element.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Power Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::Pressure(string text)
{
    string model = "llama3";
    string definition = "the force applied perpendicular to the surface of an object per unit area over which that force is distributed. Gauge pressure (also spelled gage pressure) is the pressure relative to the ambient pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::PrincipleOfRelativity(string text)
{
    string model = "llama3";
    string definition = "In physics, the principle of relativity is the requirement that the equations describing the laws of physics have the same form in all admissible frames of reference. For example, in the framework of special relativity, the Maxwell equations have the same form in all inertial frames of reference. In the framework of general relativity, the Maxwell equations or the Einstein field equations have the same form in arbitrary frames of reference.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Principle Of Relativity";
        }
    }

    return nullptr;
}

string _Physics::Terms::Probability(string text)
{
    string model = "llama3";
    string definition = "the branch of mathematics concerning events and numerical descriptions of how likely they are to occur. The probability of an event is a number between 0 and 1; the larger the probability, the more likely an event is to occur. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ProbabilityDistribution(string text)
{
    string model = "llama3";
    string definition = "In probability theory and statistics, a probability distribution is the mathematical function that gives the probabilities of occurrence of possible outcomes for an experiment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ProbabilityTheory(string text)
{
    string model = "llama3";
    string definition = "Probability theory or probability calculus is the branch of mathematics concerned with probability. Although there are several different probability interpretations, probability theory treats the concept in a rigorous mathematical manner by expressing it through a set of axioms. Typically these axioms formalise probability in terms of a probability space, which assigns a measure taking values between 0 and 1, termed the probability measure, to a set of outcomes called the sample space. Any specified subset of the sample space is called an event.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Proton(string text)
{
    string model = "llama3";
    string definition = "A proton is a stable subatomic particle, symbol p H+, or with a positive electric charge of +1 e (elementary charge). Its mass is slightly less than the mass of a neutron and approximately 1836 times the mass of an electron (the proton-to-electron mass ratio). Protons and neutrons, each with a mass of approximately one atomic mass unit, are jointly referred to as nucleons (particles present in atomic nuclei).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Proton";
        }
    }

    return nullptr;
}

string _Physics::Terms::PSIParticle(string text)
{
    string model = "llama3";
    string definition = "a subatomic particle, a flavor-neutral meson consisting of a charm quark and a charm antiquark. Mesons formed by a bound state of a charm quark and a charm anti-quark are generally known as \"charmonium\" or psions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PSI Particle";
        }
    }

    return nullptr;
}

string _Physics::Terms::Pulley(string text)
{
    string model = "llama3";
    string definition = "a wheel on an axle or shaft enabling a taut cable or belt passing over the wheel to move and change direction, or transfer power between itself and a shaft. A sheave or pulley wheel is a pulley using an axle supported by a frame or shell (block) to guide a cable or exert force.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::PulsePhysics(string text)
{
    string model = "llama3";
    string definition = "In physics, a pulse is a generic term describing a single disturbance that moves through a transmission medium. This medium may be vacuum (in the case of electromagnetic radiation) or matter, and may be indefinitely large or finite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pulse Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::PulseWave(string text)
{
    string model = "llama3";
    string definition = "A pulse wave or pulse train or rectangular wave is a non-sinusoidal waveform that is the periodic version of the rectangular function. It is held high a percent each cycle (period) called the duty cycle and for the remainder of each cycle is low. A duty cycle of 50% produces a square wave, a specific case of a rectangular wave. The average level of a rectangular wave is also given by the duty cycle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pulse Wave";
        }
    }

    return nullptr;
}

string _Physics::Terms::QuantizationPhysics(string text)
{
    string model = "llama3";
    string definition = "the systematic transition procedure from a classical understanding of physical phenomena to a newer understanding known as quantum mechanics. It is a procedure for constructing quantum mechanics from classical mechanics. A generalization involving infinite degrees of freedom is field quantization, as in the \"quantization of the electromagnetic field\", referring to photons as field \"quanta\" (for instance as light quanta). This procedure is basic to theories of atomic physics, chemistry, particle physics, nuclear physics, condensed matter physics, and quantum optics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quantization Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::Quantum(string text)
{
    string model = "llama3";
    string definition = "In physics, a quantum (pl.: quanta) is the minimum amount of any physical entity (physical property) involved in an interaction. Quantum is a discrete quantity of energy proportional in magnitude to the frequency of the radiation it represents. The fundamental notion that a property can be \"quantized\" is referred to as \"the hypothesis of quantization\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quantum";
        }
    }

    return nullptr;
}

string _Physics::Terms::QuantumChromodynamics(string text)
{
    string model = "llama3";
    string definition = "In theoretical physics, quantum chromodynamics (QCD) is the study of the strong interaction between quarks mediated by gluons. Quarks are fundamental particles that make up composite hadrons such as the proton, neutron and pion. QCD is a type of quantum field theory called a non-abelian gauge theory, with symmetry group SU(3). The QCD analog of electric charge is a property called color. Gluons are the force carriers of the theory, just as photons are for the electromagnetic force in quantum electrodynamics. The theory is an important part of the Standard Model of particle physics. A large body of experimental evidence for QCD has been gathered over the years.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quantum Chromodynamics";
        }
    }

    return nullptr;
}

string _Physics::Terms::QuantumElectrodynamics(string text)
{
    string model = "llama3";
    string definition = "In particle physics, quantum electrodynamics (QED) is the relativistic quantum field theory of electrodynamics. In essence, it describes how light and matter interact and is the first theory where full agreement between quantum mechanics and special relativity is achieved. QED mathematically describes all phenomena involving electrically charged particles interacting by means of exchange of photons and represents the quantum counterpart of classical electromagnetism giving a complete account of matter and light interaction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::QuantumFieldTheory(string text)
{
    string model = "llama3";
    string definition = "In theoretical physics, quantum field theory (QFT) is a theoretical framework that combines classical field theory, special relativity, and quantum mechanics. QFT is used in particle physics to construct physical models of subatomic particles and in condensed matter physics to construct models of quasiparticles. The current standard model of particle physics is based on quantum field theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::QuantumGravity(string text)
{
    string model = "llama3";
    string definition = "Quantum gravity (QG) is a field of theoretical physics that seeks to describe gravity according to the principles of quantum mechanics. It deals with environments in which neither gravitational nor quantum effects can be ignored, such as in the vicinity of black holes or similar compact astrophysical objects, as well as in the early stages of the universe moments after the Big Bang.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quantum Gravity";
        }
    }

    return nullptr;
}

string _Physics::Terms::QuantumMechanics(string text)
{
    string model = "llama3";
    string definition = "Quantum mechanics is a fundamental theory that describes the behavior of nature at and below the scale of atoms. It is the foundation of all quantum physics, which includes quantum chemistry, quantum field theory, quantum technology, and quantum information science. Quantum mechanics can describe many systems that classical physics cannot. Classical physics can describe many aspects of nature at an ordinary (macroscopic and (optical) microscopic) scale, but is not sufficient for describing them at very small submicroscopic (atomic and subatomic) scales. Most theories in classical physics can be derived from quantum mechanics as an approximation, valid at large (macroscopic/microscopic) scale.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::QuantumNumber(string text)
{
    string model = "llama3";
    string definition = "In quantum physics and chemistry, quantum numbers are quantities that characterize the possible states of the system. To fully specify the state of the electron in a hydrogen atom, four quantum numbers are needed. The traditional set of quantum numbers includes the principal, azimuthal, magnetic, and spin quantum numbers. To describe other systems, different quantum numbers are required. For subatomic particles, one needs to introduce new quantum numbers, such as the flavour of quarks, which have no classical correspondence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quantum Number";
        }
    }

    return nullptr;
}

string _Physics::Terms::QuantumPhysics(string text)
{
    string model = "llama3";
    string definition = "a fundamental theory that describes the behavior of nature at and below the scale of atoms.  It is the foundation of all quantum physics, which includes quantum chemistry, quantum field theory, quantum technology, and quantum information science.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quantum Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::QuantumState(string text)
{
    string model = "llama3";
    string definition = "In quantum physics, a quantum state is a mathematical entity that embodies the knowledge of a quantum system. Quantum mechanics specifies the construction, evolution, and measurement of a quantum state. The result is a prediction for the system represented by the state. Knowledge of the quantum state, and the rules for the system's evolution in time, exhausts all that can be known about a quantum system. Quantum states may be defined differently for different kinds of systems or problems. Two broad categories are wave functions describing quantum systems using position or momentum variables and the more abstract vector quantum states.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quantum State";
        }
    }

    return nullptr;
}

string _Physics::Terms::Quark(string text)
{
    string model = "llama3";
    string definition = "a type of elementary particle and a fundamental constituent of matter. Quarks combine to form composite particles called hadrons, the most stable of which are protons and neutrons, the components of atomic nuclei.[1] All commonly observable matter is composed of up quarks, down quarks and electrons. Owing to a phenomenon known as color confinement, quarks are never found in isolation; they can be found only within hadrons, which include baryons (such as protons and neutrons) and mesons, or in quark-gluon plasmas. For this reason, much of what is known about quarks has been drawn from observations of hadrons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quark";
        }
    }

    return nullptr;
}

string _Physics::Terms::Quasiparticle(string text)
{
    string model = "llama3";
    string definition = "In condensed matter physics, a quasiparticle is a concept used to describe a collective behavior of a group of particles that can be treated as if they were a single particle. Formally, quasiparticles and collective excitations are closely related phenomena that arise when a microscopically complicated system such as a solid behaves as if it contained different weakly interacting particles in vacuum.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quasiparticle";
        }
    }

    return nullptr;
}

string _Physics::Terms::RadiantEnergy(string text)
{
    string model = "llama3";
    string definition = "In physics, and in particular as measured by radiometry, radiant energy is the energy of electromagnetic and gravitational radiation. As energy, its SI unit is the joule (J). The quantity of radiant energy may be calculated by integrating radiant flux (or power) with respect to time. The symbol Qe is often used throughout literature to denote radiant energy (\"e\" for \"energetic\", to avoid confusion with photometric quantities). In branches of physics other than radiometry, electromagnetic energy is referred to using E or W. The term is used particularly when electromagnetic radiation is emitted by a source into the surrounding environment. This radiation may be visible or invisible to the human eye.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radiant Energy";
        }
    }

    return nullptr;
}

string _Physics::Terms::Radiation(string text)
{
    string model = "llama3";
    string definition = "In physics, radiation is the emission or transmission of energy in the form of waves or particles through space or a material medium. This includes: electromagnetic radiation consisting of photons, such as radio waves, microwaves, infrared, visible light, ultraviolet, x-rays, and gamma radiation (y) particle radiation consisting of particles of non-zero rest energy, such as alpha radiation (a), beta radiation (b), proton radiation and neutron radiation acoustic radiation, such as ultrasound, sound, and seismic waves, all dependent on a physical transmission medium gravitational radiation, in the form of gravitational waves, ripples in spacetime";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radiation";
        }
    }

    return nullptr;
}

string _Physics::Terms::RadioactiveDecay(string text)
{
    string model = "llama3";
    string definition = "Radioactive decay (also known as nuclear decay, radioactivity, radioactive disintegration, or nuclear disintegration) is the process by which an unstable atomic nucleus loses energy by radiation. A material containing unstable nuclei is considered radioactive. Three of the most common types of decay are alpha, beta, and gamma decay. The weak force is the mechanism that is responsible for beta decay, while the other two are governed by the electromagnetic and nuclear forces.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radioactive Decay";
        }
    }

    return nullptr;
}

string _Physics::Terms::Radionuclide(string text)
{
    string model = "llama3";
    string definition = "A radionuclide (radioactive nuclide, radioisotope or radioactive isotope) is a nuclide that has excess numbers of either neutrons or protons, giving it excess nuclear energy, and making it unstable. This excess energy can be used in one of three ways: emitted from the nucleus as gamma radiation; transferred to one of its electrons to release it as a conversion electron; or used to create and emit a new particle (alpha particle or beta particle) from the nucleus. During those processes, the radionuclide is said to undergo radioactive decay. hese emissions are considered ionizing radiation because they are energetic enough to liberate an electron from another atom. The radioactive decay can produce a stable nuclide or will sometimes produce a new unstable radionuclide which may undergo further decay. Radioactive decay is a random process at the level of single atoms: it is impossible to predict when one particular atom will decay. However, for a collection of atoms of a single nuclide the decay rate, and thus the half-life (t1/2) for that collection, can be calculated from their measured decay constants. The range of the half-lives of radioactive atoms has no known limits and spans a time range of over 55 orders of magnitude.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radionuclide";
        }
    }

    return nullptr;
}

string _Physics::Terms::RadiusOfCurvature(string text)
{
    string model = "llama3";
    string definition = "has specific meaning and sign convention in optical design. A spherical lens or mirror surface has a center of curvature located either along or decentered from the system local optical axis. The vertex of the lens surface is located on the local optical axis. The distance from the vertex to the center of curvature is the radius of curvature of the surface.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radius Of Curvature";
        }
    }

    return nullptr;
}

string _Physics::Terms::RedShift(string text)
{
    string model = "llama3";
    string definition = "A phenomenon which occurs when light seen coming from an object that is moving away from the observer is proportionally increased in wavelength or \"shifted\" to the red end of the visible light spectrum.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Red Shift";
        }
    }

    return nullptr;
}

string _Physics::Terms::Refraction(string text)
{
    string model = "llama3";
    string definition = "In physics, refraction is the redirection of a wave as it passes from one medium to another. The redirection can be caused by the wave's change in speed or by a change in the medium. Refraction of light is the most commonly observed phenomenon, but other waves such as sound waves and water waves also experience refraction. How much a wave is refracted is determined by the change in wave speed and the initial direction of wave propagation relative to the direction of change in speed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Refraction";
        }
    }

    return nullptr;
}

string _Physics::Terms::RefractiveIndex(string text)
{
    string model = "llama3";
    string definition = "In optics, the refractive index (or refraction index) of an optical medium is the ratio of the apparent speed of light in the air or vacuum to the speed in the medium. The refractive index determines how much the path of light is bent, or refracted, when entering a material. This is described by Snell's law of refraction, n1 sin ?1 = n2 sin ?2, where ?1 and ?2 are the angle of incidence and angle of refraction, respectively, of a ray crossing the interface between two media with refractive indices n1 and n2. The refractive indices also determine the amount of light that is reflected when reaching the interface, as well as the critical angle for total internal reflection, their intensity (Fresnel equations) and Brewster's angle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Refractive Index";
        }
    }

    return nullptr;
}

string _Physics::Terms::RelativisticMechanics(string text)
{
    string model = "llama3";
    string definition = "In physics, relativistic mechanics refers to mechanics compatible with special relativity (SR) and general relativity (GR). It provides a non-quantum mechanical description of a system of particles, or of a fluid, in cases where the velocities of moving objects are comparable to the speed of light c. As a result, classical mechanics is extended correctly to particles traveling at high velocities and energies, and provides a consistent inclusion of electromagnetism with the mechanics of particles. This was not possible in Galilean relativity, where it would be permitted for particles and light to travel at any speed, including faster than light. The foundations of relativistic mechanics are the postulates of special relativity and general relativity. The unification of SR with quantum mechanics is relativistic quantum mechanics, while attempts for that of GR is quantum gravity, an unsolved problem in physics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Relativistic Mechanics";
        }
    }

    return nullptr;
}

string _Physics::Terms::TheoryOfRelativity(string text)
{
    string model = "llama3";
    string definition = "encompasses two interrelated physics theories by Albert Einstein: special relativity and general relativity, proposed and published in 1905 and 1915, respectively. Special relativity applies to all physical phenomena in the absence of gravity. General relativity explains the law of gravitation and its relation to the forces of nature. It applies to the cosmological and astrophysical realm, including astronomy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::RestFrame(string text)
{
    string model = "llama3";
    string definition = "In special relativity, the rest frame of a particle is the frame of reference (a coordinate system attached to physical markers) in which the particle is at rest. The rest frame of compound objects (such as a fluid, or a solid made of many vibrating atoms) is taken to be the frame of reference in which the average momentum of the particles which make up the substance is zero (the particles may individually have momentum, but collectively have no net momentum). The rest frame of a container of gas, for example, would be the rest frame of the container itself, in which the gas molecules are not at rest, but are no more likely to be traveling in one direction than another. The rest frame of a river would be the frame of an unpowered boat, in which the mean velocity of the water is zero. This frame is also called the center-of-mass frame, or center-of-momentum frame.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rest Frame";
        }
    }

    return nullptr;
}

string _Physics::Terms::RigidBody(string text)
{
    string model = "llama3";
    string definition = "In physics, a rigid body, also known as a rigid object, is a solid body in which deformation is zero or negligible. The distance between any two given points on a rigid body remains constant in time regardless of external forces or moments exerted on it. A rigid body is usually considered as a continuous distribution of mass.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::RotationalEnergy(string text)
{
    string model = "llama3";
    string definition = "is kinetic energy due to the rotation of an object and is part of its total kinetic energy. Looking at rotational energy separately around an object's axis of rotation, the following dependence on the object's moment of inertia is observed: Erotational = 1/2Iw^2. w is angular velocity. I is the moment of inertia around the axis of rotation. E is the kinetic energy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::RydbergFormula(string text)
{
    string model = "llama3";
    string definition = "In atomic physics, the Rydberg formula calculates the wavelengths of a spectral line in many chemical elements. The formula was primarily presented as a generalization of the Balmer series for all atomic electron transitions of hydrogen. It was first empirically stated in 1888 by the Swedish physicist Johannes Rydberg, then theoretically by Niels Bohr in 1913, who used a primitive form of quantum mechanics. The formula directly generalizes the equations used to calculate the wavelengths of the hydrogen spectral series.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rydberg Formula";
        }
    }

    return nullptr;
}

string _Physics::Terms::Scalar(string text)
{
    string model = "llama3";
    string definition = "are physical quantities that can be described by a single pure number (a scalar, typically a real number), accompanied by a unit of measurement, as in \"10 cm\" (ten centimeters). Examples of scalar quantities are length, mass, charge, volume, and time. Scalars may represent the magnitude of physical quantities, such as speed is to velocity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Scalar";
        }
    }

    return nullptr;
}

string _Physics::Terms::Scattering(string text)
{
    string model = "llama3";
    string definition = "In physics, scattering is a wide range of physical processes where moving particles or radiation of some form, such as light or sound, are forced to deviate from a straight trajectory by localized non-uniformities (including particles and radiation) in the medium through which they pass. In conventional use, this also includes deviation of reflected radiation from the angle predicted by the law of reflection. Reflections of radiation that undergo scattering are often called diffuse reflections and unscattered reflections are called specular (mirror-like) reflections. Originally, the term was confined to light scattering (going back at least as far as Isaac Newton in the 17th century). ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Scattering";
        }
    }

    return nullptr;
}

string _Physics::Terms::Science(string text)
{
    string model = "llama3";
    string definition = "Science is a systematic discipline that builds and organises knowledge in the form of testable hypotheses and predictions about the universe. Modern science is typically divided into two or three major branches: the natural sciences (e.g., physics, chemistry, and biology), which study the physical world; and the behavioural sciences (e.g., economics, psychology, and sociology), which study individuals and societies.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Science";
        }
    }

    return nullptr;
}

string _Physics::Terms::Screw(string text)
{
    string model = "llama3";
    string definition = "a mechanism that converts rotational motion to linear motion, and a torque (rotational force) to a linear force. It is one of the six classical simple machines. The most common form consists of a cylindrical shaft with helical grooves or ridges called threads around the outside. The screw passes through a hole in another object or medium, with threads on the inside of the hole that mesh with the screw's threads. When the shaft of the screw is rotated relative to the stationary threads, the screw moves along its axis relative to the medium surrounding it; for example rotating a wood screw forces it into wood. In screw mechanisms, either the screw shaft can rotate through a threaded hole in a stationary object, or a threaded collar such as a nut can rotate around a stationary screw shaft. Geometrically, a screw can be viewed as a narrow inclined plane wrapped around a cylinder.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::SecondLawOfThermodynamics(string text)
{
    string model = "llama3";
    string definition = "is a physical law based on universal empirical observation concerning heat and energy interconversions. A simple statement of the law is that heat always flows spontaneously from hotter to colder regions of matter (or 'downhill' in terms of the temperature gradient). Another statement is: \"Not all heat can be converted into work in a cyclic process.\"";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Second Law Of Thermodynamics";
        }
    }

    return nullptr;
}

string _Physics::Terms::SeebackEffect(string text)
{
    string model = "llama3";
    string definition = "the electromotive force (emf) that develops across two points of an electrically conducting material when there is a temperature difference between them. The emf is called the Seebeck emf (or thermo/thermal/thermoelectric emf). The ratio between the emf and temperature difference is the Seebeck coefficient. A thermocouple measures the difference in potential across a hot and cold end for two dissimilar materials. This potential difference is proportional to the temperature difference between the hot and cold ends. First discovered in 1794 by Italian scientist Alessandro Volta, it is named after the Russian born, Baltic German physicist Thomas Johann Seebeck who rediscovered it in 1821.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Seeback Effect";
        }
    }

    return nullptr;
}

string _Physics::Terms::SeriesCircuit(string text)
{
    string model = "llama3";
    string definition = "Two-terminal components and electrical networks can be connected in series or parallel. The resulting electrical network will have two terminals, and itself can participate in a series or parallel topology. Whether a two-terminal \"object\" is an electrical component (e.g. a resistor) or an electrical network (e.g. resistors in series) is a matter of perspective. This article will use \"component\" to refer to a two-terminal \"object\" that participates in the series/parallel networks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ShadowMatter(string text)
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

string _Physics::Terms::ShearModulus(string text)
{
    string model = "llama3";
    string definition = "In materials science, shear modulus or modulus of rigidity, denoted by G, or sometimes S or u, is a measure of the elastic shear stiffness of a material and is defined as the ratio of shear stress to the shear strain:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Shear Modulus";
        }
    }

    return nullptr;
}

string _Physics::Terms::ShearStrength(string text)
{
    string model = "llama3";
    string definition = "In engineering, shear strength is the strength of a material or component against the type of yield or structural failure when the material or component fails in shear. A shear load is a force that tends to produce a sliding failure on a material along a plane that is parallel to the direction of the force. When a paper is cut with scissors, the paper fails in shear. In structural and mechanical engineering, the shear strength of a component is important for designing the dimensions and materials to be used for the manufacture or construction of the component (e.g. beams, plates, or bolts). In a reinforced concrete beam, the main purpose of reinforcing bar (rebar) stirrups is to increase the shear strength.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ShearStress(string text)
{
    string model = "llama3";
    string definition = "is the component of stress coplanar with a material cross section. It arises from the shear force, the component of force vector parallel to the material cross section. Normal stress, on the other hand, arises from the force vector component perpendicular to the material cross section on which it acts. T = F / A, where F is the force applied and A is the cross-sectional area.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ShortWaveRadiation(string text)
{
    string model = "llama3";
    string definition = "thermal radiation in the optical spectrum, including visible (VIS), near-ultraviolet (UV), and near-infrared (NIR) spectra. There is no standard cut-off for the near-infrared range; therefore, the shortwave radiation range is also variously defined. It may be broadly defined to include all radiation with a wavelength of 0.1µm and 5.0µm or narrowly defined so as to include only radiation between 0.2um and 3.0um.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Short Wave Radiation";
        }
    }

    return nullptr;
}

string _Physics::Terms::SchrodingerEquation(string text)
{
    string model = "llama3";
    string definition = "a partial differential equation that governs the wave function of a non-relativistic quantum-mechanical system. Its discovery was a significant landmark in the development of quantum mechanics. It is named after Erwin Schrödinger, who postulated the equation in 1925 and published it in 1926, forming the basis for the work that resulted in his Nobel Prize in Physics in 1933. Conceptually, the Schrödinger equation is the quantum counterpart of Newton's second law in classical mechanics. Given a set of known initial conditions, Newton's second law makes a mathematical prediction as to what path a given physical system will take over time. The Schrödinger equation gives the evolution over time of the wave function, the quantum-mechanical characterization of an isolated physical system. The equation was postulated by Schrödinger based on a postulate of Louis de Broglie that all matter has an associated matter wave. The equation predicted bound states of the atom in agreement with experimental observations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Schrodinger Equation";
        }
    }

    return nullptr;
}

string _Physics::Terms::SimpleHarmonicMotion(string text)
{
    string model = "llama3";
    string definition = "In mechanics and physics, simple harmonic motion (sometimes abbreviated as SHM) is a special type of periodic motion an object experiences by means of a restoring force whose magnitude is directly proportional to the distance of the object from an equilibrium position and acts towards the equilibrium position. It results in an oscillation that is described by a sinusoid which continues indefinitely (if uninhibited by friction or any other dissipation of energy).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Simple Harmonic Motion";
        }
    }

    return nullptr;
}

string _Physics::Terms::SimpleMachine(string text)
{
    string model = "llama3";
    string definition = "a mechanical device that changes the direction or magnitude of a force. In general, they can be defined as the simplest mechanisms that use mechanical advantage (also called leverage) to multiply force. Usually the term refers to the six classical simple machines that were defined by Renaissance scientists: Lever, Wheel and axle, Pulley, Inclined plane, Wedge, Screw.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Siphon(string text)
{
    string model = "llama3";
    string definition = " is any of a wide variety of devices that involve the flow of liquids through tubes. In a narrower sense, the word refers particularly to a tube in an inverted \"U\" shape, which causes a liquid to flow upward, above the surface of a reservoir, with no pump, but powered by the fall of the liquid as it flows down the tube under the pull of gravity, then discharging at a level lower than the surface of the reservoir from which it came.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::SnellsLaw(string text)
{
    string model = "llama3";
    string definition = "and the law of refraction) is a formula used to describe the relationship between the angles of incidence and refraction, when referring to light or other waves passing through a boundary between two different isotropic media, such as water, glass, or air. In optics, the law is used in ray tracing to compute the angles of incidence or refraction, and in experimental optics to find the refractive index of a material. The law is also satisfied in meta-materials, which allow light to be bent \"backward\" at a negative angle of refraction with a negative refractive index.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Snells Law";
        }
    }

    return nullptr;
}

string _Physics::Terms::SolarCell(string text)
{
    string model = "llama3";
    string definition = "an electronic device that converts the energy of light directly into electricity by means of the photovoltaic effect. It is a form of photoelectric cell, a device whose electrical characteristics (such as current, voltage, or resistance) vary when it is exposed to light. Individual solar cell devices are often the electrical building blocks of photovoltaic modules, known colloquially as \"solar panels\". Almost all commercial PV cells consist of crystalline silicon, with a market share of 95%. Cadmium telluride thin-film solar cells account for the remainder. The common single-junction silicon solar cell can produce a maximum open-circuit voltage of approximately 0.5 to 0.6 volts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Solar Cell";
        }
    }

    return nullptr;
}

string _Physics::Terms::Solid(string text)
{
    string model = "llama3";
    string definition = "one of the four fundamental states of matter along with liquid, gas, and plasma. The molecules in a solid are closely packed together and contain the least amount of kinetic energy. A solid is characterized by structural rigidity (as in rigid bodies) and resistance to a force applied to the surface. Unlike a liquid, a solid object does not flow to take on the shape of its container, nor does it expand to fill the entire available volume like a gas. The atoms in a solid are bound to each other, either in a regular geometric lattice (crystalline solids, which include metals and ordinary ice), or irregularly (an amorphous solid such as common window glass). Solids cannot be compressed with little pressure whereas gases can be compressed with little pressure because the molecules in a gas are loosely packed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Solid";
        }
    }

    return nullptr;
}

string _Physics::Terms::SolidMechanics(string text)
{
    string model = "llama3";
    string definition = "is the branch of continuum mechanics that studies the behavior of solid materials, especially their motion and deformation under the action of forces, temperature changes, phase changes, and other external or internal agents.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::SolidStatePhysics(string text)
{
    string model = "llama3";
    string definition = "the study of rigid matter, or solids, through methods such as solid-state chemistry, quantum mechanics, crystallography, electromagnetism, and metallurgy. It is the largest branch of condensed matter physics. Solid-state physics studies how the large-scale properties of solid materials result from their atomic-scale properties. Thus, solid-state physics forms a theoretical basis of materials science. Along with solid-state chemistry, it also has direct applications in the technology of transistors and semiconductors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Solubility(string text)
{
    string model = "llama3";
    string definition = "The tendency of a solid, liquid, or gaseous chemical substance (called a solute) to dissolve in another solid, liquid, or gaseous substance (called a solvent) to form a homogeneous solution of the solute in the solvent. The solubility of a solute fundamentally depends on the specific solvent as well as on temperature and pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Sonoluminescence(string text)
{
    string model = "llama3";
    string definition = "the emission of light from imploding bubbles in a liquid when excited by sound. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sonoluminescence";
        }
    }

    return nullptr;
}

//string _Physics::Terms::Solubility(string text)
//{
//    string model = "llama3";
//    string definition = "In chemistry, solubility is the ability of a substance, the solute, to form a solution with another substance, the solvent. Insolubility is the opposite property, the inability of the solute to form such a solution.";
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
//            return "Solubility";
//        }
//    }
//
//    return nullptr;
//}

string _Physics::Terms::Sound(string text)
{
    string model = "llama3";
    string definition = "A mechanical wave that is an oscillation of pressure transmitted through a solid, liquid, or gas and composed of frequencies within the range of human hearing.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::SpecialRelativity(string text)
{
    string model = "llama3";
    string definition = "In physics, the special theory of relativity, or special relativity for short, is a scientific theory of the relationship between space and time. In Albert Einstein's 1905 paper, On the Electrodynamics of Moving Bodies, the theory is presented as being based on just two postulates: 1. The laws of physics are invariant (identical) in all inertial frames of reference (that is, frames of reference with no acceleration). This is known as the principle of relativity. 2. The speed of light in vacuum is the same for all observers, regardless of the motion of light source or observer. This is known as the principle of light constancy, or the principle of light speed invariance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::SpecificActivity(string text)
{
    string model = "llama3";
    string definition = "Specific activity (symbol a) is the activity per unit mass of a radionuclide and is a physical property of that radionuclide.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Specific Activity";
        }
    }

    return nullptr;
}

string _Physics::Terms::Speed(string text)
{
    string model = "llama3";
    string definition = "In kinematics, the speed (commonly referred to as v) of an object is the magnitude of the change of its position over time or the magnitude of the change of its position per unit of time; it is thus a non-negative scalar quantity. The average speed of an object in an interval of time is the distance travelled by the object divided by the duration of the interval; the instantaneous speed is the limit of the average speed as the duration of the time interval approaches zero. Speed is the magnitude of velocity (a vector), which indicates additionally the direction of motion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Speed";
        }
    }

    return nullptr;
}

string _Physics::Terms::SpeedOfLight(string text)
{
    string model = "llama3";
    string definition = "The speed of light in vacuum, commonly denoted c, is a universal physical constant that is exactly equal to 299,792,458 metres per second (approximately 300,000 kilometres per second; 186,000 miles per second; 671 million miles per hour). According to the special theory of relativity, c is the upper limit for the speed at which conventional matter or energy (and thus any signal carrying information) can travel through space.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Speed Of Light";
        }
    }

    return nullptr;
}

string _Physics::Terms::SpeedOfSound(string text)
{
    string model = "llama3";
    string definition = "The speed of sound is the distance travelled per unit of time by a sound wave as it propagates through an elastic medium. More simply, the speed of sound is how fast vibrations travel. At 20C (68F), the speed of sound in air is about 343 m/s (1,125 ft/s; 1,235 km/h; 767 mph; 667 kn), or 1 km in 2.91 s or one mile in 4.69 s. It depends strongly on temperature as well as the medium through which a sound wave is propagating.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Speed Of Sound";
        }
    }

    return nullptr;
}

string _Physics::Terms::SphericalAberration(string text)
{
    string model = "llama3";
    string definition = "In optics, spherical aberration (SA) is a type of aberration found in optical systems that have elements with spherical surfaces. This phenomenon commonly affects lenses and curved mirrors, as these components are often shaped in a spherical manner for ease of manufacturing. Light rays that strike a spherical surface off-centre are refracted or reflected more or less than those that strike close to the centre. This deviation reduces the quality of images produced by optical systems. The effect of spherical aberration was first identified in the 11th century by Ibn al-Haytham who discussed it in his work Kitab al-Manazir.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Spherical Aberration";
        }
    }

    return nullptr;
}

string _Physics::Terms::SpinQuantumNumber(string text)
{
    string model = "llama3";
    string definition = "In physics and chemistry, the spin quantum number is a quantum number (designated s) that describes the intrinsic angular momentum (or spin angular momentum, or simply spin) of an electron or other particle. It has the same value for all particles of the same type, such as s = 1/2 for all electrons. It is an integer for all bosons, such as photons, and a half-odd-integer for all fermions, such as electrons and protons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Spin Quantum Number";
        }
    }

    return nullptr;
}

string _Physics::Terms::StableIsotopeRatio(string text)
{
    string model = "llama3";
    string definition = "The term stable isotope has a meaning similar to stable nuclide, but is preferably used when speaking of nuclides of a specific element. Hence, the plural form stable isotopes usually refers to isotopes of the same element. The relative abundance of such stable isotopes can be measured experimentally (isotope analysis), yielding an isotope ratio that can be used as a research tool. Theoretically, such stable isotopes could include the radiogenic daughter products of radioactive decay, used in radiometric dating. However, the expression stable-isotope ratio is preferably used to refer to isotopes whose relative abundances are affected by isotope fractionation in nature. This field is termed stable isotope geochemistry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stable Isotope Ratio";
        }
    }

    return nullptr;
}

string _Physics::Terms::StableNuclide(string text)
{
    string model = "llama3";
    string definition = "isotopes of a chemical element whose nucleons are in a configuration that does not permit them the surplus energy required to produce a radioactive emission. The nuclei of such isotopes are not radioactive and unlike radionuclides do not spontaneously undergo radioactive decay. When these nuclides are referred to in relation to specific elements they are usually called that element's stable isotopes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stable Nuclide";
        }
    }

    return nullptr;
}

string _Physics::Terms::StandardAtomicWeight(string text)
{
    string model = "llama3";
    string definition = "a chemical element (symbol Ar°(E) for element \"E\") is the weighted arithmetic mean of the relative isotopic masses of all isotopes of that element weighted by each isotope's abundance on Earth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Standard Atomic Weight";
        }
    }

    return nullptr;
}

string _Physics::Terms::StandardModel(string text)
{
    string model = "llama3";
    string definition = "particle physics is the theory describing three of the four known fundamental forces (electromagnetic, weak and strong interactions - excluding gravity) in the universe and classifying all known elementary particles. It was developed in stages throughout the latter half of the 20th century, through the work of many scientists worldwide, with the current formulation being finalized in the mid-1970s upon experimental confirmation of the existence of quarks. Since then, proof of the top quark (1995), the tau neutrino (2000), and the Higgs boson (2012) have added further credence to the Standard Model. In addition, the Standard Model has predicted various properties of weak neutral currents and the W and Z bosons with great accuracy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Standard Model";
        }
    }

    return nullptr;
}

string _Physics::Terms::StandingWave(string text)
{
    string model = "llama3";
    string definition = "In physics, a standing wave, also known as a stationary wave, is a wave that oscillates in time but whose peak amplitude profile does not move in space. The peak amplitude of the wave oscillations at any point in space is constant with respect to time, and the oscillations at different points throughout the wave are in phase. The locations at which the absolute value of the amplitude is minimum are called nodes, and the locations where the absolute value of the amplitude is maximum are called antinodes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Standing Wave";
        }
    }

    return nullptr;
}

string _Physics::Terms::StateOfMatter(string text)
{
    string model = "llama3";
    string definition = "In physics, a state of matter is one of the distinct forms in which matter can exist. Four states of matter are observable in everyday life: solid, liquid, gas, and plasma. Many intermediate states are known to exist, such as liquid crystal, and some states only exist under extreme conditions, such as Bose-Einstein condensates and Fermionic condensates (in extreme cold), neutron-degenerate matter (in extreme density), and quark-gluon plasma (at extremely high energy).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Statics(string text)
{
    string model = "llama3";
    string definition = "Statics is the branch of classical mechanics that is concerned with the analysis of force and torque acting on a physical system that does not experience an acceleration, but rather is in equilibrium with its environment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::StatisticalMechanics(string text)
{
    string model = "llama3";
    string definition = "In physics, statistical mechanics is a mathematical framework that applies statistical methods and probability theory to large assemblies of microscopic entities. Sometimes called statistical physics or statistical thermodynamics, its applications include many problems in the fields of physics, biology, chemistry, neuroscience, computer science, information theory and sociology. Its main purpose is to clarify the properties of matter in aggregate, in terms of physical laws governing atomic motion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Statistical Mechanics";
        }
    }

    return nullptr;
}

string _Physics::Terms::WorkHardening(string text)
{
    string model = "llama3";
    string definition = "Work hardening, also known as strain hardening, is the process by which a material's load-bearing capacity (strength) increases during plastic (permanent) deformation. This characteristic is what sets ductile materials apart from brittle materials. Work hardening may be desirable, undesirable, or inconsequential, depending on the application. This strengthening occurs because of dislocation movements and dislocation generation within the crystal structure of the material.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::StrengthOfMaterials(string text)
{
    string model = "llama3";
    string definition = "The field of strength of materials (also called mechanics of materials) typically refers to various methods of calculating the stresses and strains in structural members, such as beams, columns, and shafts. The methods employed to predict the response of a structure under loading and its susceptibility to various failure modes takes into account the properties of the materials such as its yield strength, ultimate strength, Young's modulus, and Poisson's ratio. In addition, the mechanical element's macroscopic properties (geometric properties) such as its length, width, thickness, boundary constraints and abrupt changes in geometry such as holes are considered.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::StressMechanics(string text)
{
    string model = "llama3";
    string definition = "In continuum mechanics, stress is a physical quantity that describes forces present during deformation. For example, an object being pulled apart, such as a stretched elastic band, is subject to tensile stress and may undergo elongation. An object being pushed together, such as a crumpled sponge, is subject to compressive stress and may undergo shortening. The greater the force and the smaller the cross-sectional area of the body on which it acts, the greater the stress. Stress has dimension of force per area, with SI units of newtons per square meter (N/m2) or pascal (Pa).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stress Mechanics";
        }
    }

    return nullptr;
}

string _Physics::Terms::StressStrainCurve(string text)
{
    string model = "llama3";
    string definition = "In engineering and materials science, a stress-strain curve for a material gives the relationship between stress and strain. It is obtained by gradually applying load to a test coupon and measuring the deformation, from which the stress and strain can be determined (see tensile testing). These curves reveal many of the properties of a material, such as the Young's modulus, the yield strength and the ultimate tensile strength.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::StringDuality(string text)
{
    string model = "llama3";
    string definition = "String duality is a class of symmetries in physics that link different string theories, theories which assume that the fundamental building blocks of the universe are strings instead of point particles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "String Duality";
        }
    }

    return nullptr;
}

string _Physics::Terms::StringTheory(string text)
{
    string model = "llama3";
    string definition = "In physics, string theory is a theoretical framework in which the point-like particles of particle physics are replaced by one-dimensional objects called strings. String theory describes how these strings propagate through space and interact with each other. On distance scales larger than the string scale, a string looks just like an ordinary particle, with its mass, charge, and other properties determined by the vibrational state of the string. In string theory, one of the many vibrational states of the string corresponds to the graviton, a quantum mechanical particle that carries the gravitational force. Thus, string theory is a theory of quantum gravity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "String Theory";
        }
    }

    return nullptr;
}

string _Physics::Terms::StructuralLoad(string text)
{
    string model = "llama3";
    string definition = "A structural load or structural action is a mechanical load (more generally a force) applied to structural elements. A load causes stress, deformation, displacement or acceleration in a structure. Structural analysis, a discipline in engineering, analyzes the effects of loads on structures and structural elements. Excess load may cause structural failure, so this should be considered and controlled during the design of a structure. Particular mechanical structures-such as aircraft, satellites, rockets, space stations, ships, and submarines-are subject to their own particular structural loads and actions. Engineers often evaluate structural loads based upon published regulations, contracts, or specifications. Accepted technical standards are used for acceptance testing and inspection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::SubatomicParticle(string text)
{
    string model = "llama3";
    string definition = "In physics, a subatomic particle is a particle smaller than an atom. According to the Standard Model of particle physics, a subatomic particle can be either a composite particle, which is composed of other particles (for example, a baryon, like a proton or a neutron, composed of three quarks; or a meson, composed of two quarks), or an elementary particle, which is not composed of other particles (for example, quarks; or electrons, muons, and tau particles, which are called leptons). Particle physics and nuclear physics study these particles and how they interact. Most force-carrying particles like photons or gluons are called bosons and, although they have quanta of energy, do not have rest mass or discrete diameters (other than pure energy wavelength) and are unlike the former particles that have rest mass and cannot overlap or combine which are called fermions. The W and Z bosons, however, are an exception to this rule and have relatively large rest masses at approximately 80 GeV and 90 GeV respectively.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Subatomic Particle";
        }
    }

    return nullptr;
}

string _Physics::Terms::SublimationPhaseTransition(string text)
{
    string model = "llama3";
    string definition = "the transition of a substance directly from the solid to the gas state, without passing through the liquid state. The verb form of sublimation is sublime, or less preferably, sublimate. Sublimate also refers to the product obtained by sublimation. The point at which sublimation occurs rapidly (for further details, see below) is called critical sublimation point, or simply sublimation point. Notable examples include sublimation of dry ice at room temperature and atmospheric pressure, and that of solid iodine with heating.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sublimation Phase Transition";
        }
    }

    return nullptr;
}

string _Physics::Terms::Superconductivity(string text)
{
    string model = "llama3";
    string definition = "Superconductivity is a set of physical properties observed in superconductors: materials where electrical resistance vanishes and magnetic fields are expelled from the material. Unlike an ordinary metallic conductor, whose resistance decreases gradually as its temperature is lowered, even down to near absolute zero, a superconductor has a characteristic critical temperature below which the resistance drops abruptly to zero. An electric current through a loop of superconducting wire can persist indefinitely with no power source.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Superconductor(string text)
{
    string model = "llama3";
    string definition = "materials where electrical resistance vanishes and magnetic fields are expelled from the material. Unlike an ordinary metallic conductor, whose resistance decreases gradually as its temperature is lowered, even down to near absolute zero, a superconductor has a characteristic critical temperature below which the resistance drops abruptly to zero. An electric current through a loop of superconducting wire can persist indefinitely with no power source.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Superconductor";
        }
    }

    return nullptr;
}

string _Physics::Terms::SuperhardMaterial(string text)
{
    string model = "llama3";
    string definition = "A superhard material is a material with a hardness value exceeding 40 gigapascals (GPa) when measured by the Vickers hardness test. They are virtually incompressible solids with high electron density and high bond covalency. As a result of their unique properties, these materials are of great interest in many industrial areas including, but not limited to, abrasives, polishing and cutting tools, disc brakes, and wear-resistant and protective coatings. Diamond is the hardest known material to date, with a Vickers hardness in the range of 70-150 GPa. Diamond demonstrates both high thermal conductivity and electrically insulating properties, and much attention has been put into finding practical applications of this material. However, diamond has several limitations for mass industrial application, including its high cost and oxidation at temperatures above 800C.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Superhard Material";
        }
    }

    return nullptr;
}

string _Physics::Terms::SuperpositionPrinciple(string text)
{
    string model = "llama3";
    string definition = "also known as superposition property, states that, for all linear systems, the net response caused by two or more stimuli is the sum of the responses that would have been caused by each stimulus individually. So that if input A produces response X, and input B produces response Y, then input (A + B) produces response (X + Y).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Superposition Principle";
        }
    }

    return nullptr;
}

string _Physics::Terms::Supersymmetry(string text)
{
    string model = "llama3";
    string definition = "a theoretical framework in physics that suggests the existence of a symmetry between particles with integer spin (bosons) and particles with half-integer spin (fermions). It proposes that for every known particle, there exists a partner particle with different spin properties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Supersymmetry";
        }
    }

    return nullptr;
}

string _Physics::Terms::Temperature(string text)
{
    string model = "llama3";
    string definition = "a physical quantity that quantitatively expresses the attribute of hotness or coldness. Temperature is measured with a thermometer. It reflects the average kinetic energy of the vibrating and colliding atoms making up a substance. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Temperature";
        }
    }

    return nullptr;
}

string _Physics::Terms::TensileStrength(string text)
{
    string model = "llama3";
    string definition = "Ultimate tensile strength (also called UTS, tensile strength, TS, ultimate strength or Ftu in notation) is the maximum stress that a material can withstand while being stretched or pulled before breaking. In brittle materials, the ultimate tensile strength is close to the yield point, whereas in ductile materials, the ultimate tensile strength can be higher. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Tesla(string text)
{
    string model = "llama3";
    string definition = "The tesla (symbol: T) is the unit of magnetic flux density (also called magnetic B-field strength) in the International System of Units (SI). One tesla is equal to one weber per square metre. The unit was announced during the General Conference on Weights and Measures in 1960 and is named in honour of Serbian-American electrical and mechanical engineer Nikola Tesla, upon the proposal of the Slovenian electrical engineer France Avcin.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tesla";
        }
    }

    return nullptr;
}

string _Physics::Terms::TestParticle(string text)
{
    string model = "llama3";
    string definition = "In physical theories, a test particle, or test charge, is an idealized model of an object whose physical properties (usually mass, charge, or size) are assumed to be negligible except for the property being studied, which is considered to be insufficient to alter the behaviour of the rest of the system. The concept of a test particle often simplifies problems, and can provide a good approximation for physical phenomena. In addition to its uses in the simplification of the dynamics of a system in particular limits, it is also used as a diagnostic in computer simulations of physical processes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Test Particle";
        }
    }

    return nullptr;
}

string _Physics::Terms::TheoreticalPhysics(string text)
{
    string model = "llama3";
    string definition = "Theoretical physics is a branch of physics that employs mathematical models and abstractions of physical objects and systems to rationalize, explain, and predict natural phenomena. This is in contrast to experimental physics, which uses experimental tools to probe these phenomena. The advancement of science generally depends on the interplay between experimental studies and theory. In some cases, theoretical physics adheres to standards of mathematical rigour while giving little weight to experiments and observations.[a] For example, while developing special relativity, Albert Einstein was concerned with the Lorentz transformation which left Maxwell's equations invariant, but was apparently uninterested in the Michelson-Morley experiment on Earth's drift through a luminiferous aether. Conversely, Einstein was awarded the Nobel Prize for explaining the photoelectric effect, previously an experimental result lacking a theoretical formulation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Theoretical Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::TheoryOfEverything(string text)
{
    string model = "llama3";
    string definition = "A theory of everything (TOE), final theory, ultimate theory, unified field theory, or master theory is a hypothetical, singular, all-encompassing, coherent theoretical framework of physics that fully explains and links together all aspects of the universe. Finding a theory of everything is one of the major unsolved problems in physics. Over the past few centuries, two theoretical frameworks have been developed that, together, most closely resemble a theory of everything. These two theories upon which all modern physics rests are general relativity and quantum mechanics. General relativity is a theoretical framework that only focuses on gravity for understanding the universe in regions of both large scale and high mass: planets, stars, galaxies, clusters of galaxies, etc. On the other hand, quantum mechanics is a theoretical framework that focuses primarily on three non-gravitational forces for understanding the universe in regions of both very small scale and low mass: subatomic particles, atoms, and molecules. Quantum mechanics successfully implemented the Standard Model that describes the three non-gravitational forces: strong nuclear, weak nuclear, and electromagnetic force - as well as all observed elementary particles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Theory Of Everything";
        }
    }

    return nullptr;
}

string _Physics::Terms::ThermalConduction(string text)
{
    string model = "llama3";
    string definition = "the diffusion of thermal energy (heat) within one material or between materials in contact. The higher temperature object has molecules with more kinetic energy; collisions between molecules distributes this kinetic energy until an object has the same kinetic energy throughout. Thermal conductivity, frequently represented by k, is a property that relates the rate of heat loss per unit area of a material to its rate of change of temperature. Essentially, it is a value that accounts for any property of the material that could change the way it conducts heat. Heat spontaneously flows along a temperature gradient (i.e. from a hotter body to a colder body). For example, heat is conducted from the hotplate of an electric stove to the bottom of a saucepan in contact with it. In the absence of an opposing external driving energy source, within a body or between bodies, temperature differences decay over time, and thermal equilibrium is approached, temperature becoming more uniform. Every process involving heat transfer takes place by only three methods: 1. Conduction is heat transfer through stationary matter by physical contact. (The matter is stationary on a macroscopic scale—we know there is thermal motion of the atoms and molecules at any temperature above absolute zero.) Heat transferred between the electric burner of a stove and the bottom of a pan is transferred by conduction. 2. Convection is the heat transfer by the macroscopic movement of a fluid. This type of transfer takes place in a forced-air furnace and in weather systems, for example. 3. Heat transfer by radiation occurs when microwaves, infrared radiation, visible light, or another form of electromagnetic radiation is emitted or absorbed. An obvious example is the warming of the Earth by the Sun. A less obvious example is thermal radiation from the human body.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ThermalEquilibrium(string text)
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

string _Physics::Terms::ThermalRadiation(string text)
{
    string model = "llama3";
    string definition = "electromagnetic radiation emitted by the thermal motion of particles in matter. All matter with a temperature greater than absolute zero emits thermal radiation. The emission of energy arises from a combination of electronic, molecular, and lattice oscillations in a material.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ThermianicEmission(string text)
{
    string model = "llama3";
    string definition = "the liberation of charged particles from a hot electrode whose thermal energy gives some particles enough kinetic energy to escape the material's surface. The particles, sometimes called thermions in early literature, are now known to be ions or electrons. Thermal electron emission specifically refers to emission of electrons and occurs when thermal energy overcomes the material's work function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Thermianic Emission";
        }
    }

    return nullptr;
}

string _Physics::Terms::ThermodynamicEquilibrium(string text)
{
    string model = "llama3";
    string definition = "an axiomatic concept of thermodynamics. It is an internal state of a single thermodynamic system, or a relation between several thermodynamic systems connected by more or less permeable or impermeable walls. In thermodynamic equilibrium, there are no net macroscopic flows of matter nor of energy within a system or between systems. In a system that is in its own state of internal thermodynamic equilibrium, not only is there an absence of macroscopic change, but there is an absence of any tendency toward change on a macroscopic scale.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Thermodynamic Equilibrium";
        }
    }

    return nullptr;
}

string _Physics::Terms::ThermodynamicFreeEnergy(string text)
{
    string model = "llama3";
    string definition = "one of the state functions of a thermodynamic system (the others being internal energy, enthalpy, entropy, etc.). The change in the free energy is the maximum amount of work that the system can perform in a process at constant temperature, and its sign indicates whether the process is thermodynamically favorable or forbidden. Since free energy usually contains potential energy, it is not absolute but depends on the choice of a zero point. Therefore, only relative free energy values, or changes in free energy, are physically meaningful.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Thermodynamic Free Energy";
        }
    }

    return nullptr;
}

string _Physics::Terms::Thermodynamics(string text)
{
    string model = "llama3";
    string definition = "the branch of physics that studies heat, work, and temperature and their relation to energy, entropy, and the physical properties of matter and radiation. The behavior of these quantities is governed by the four laws of thermodynamics, which convey a quantitative description using measurable macroscopic physical quantities, but may be explained in terms of microscopic constituents by statistical mechanics. Thermodynamics plays a role in a wide variety of topics in science and engineering.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Thermometer(string text)
{
    string model = "llama3";
    string definition = "a device that measures temperature (the hotness or coldness of an object) or temperature gradient (the rates of change of temperature in space). A thermometer has two important elements: (1) a temperature sensor (e.g. the bulb of a mercury-in-glass thermometer or the pyrometric sensor in an infrared thermometer) in which some change occurs with a change in temperature; and (2) some means of converting this change into a numerical value (e.g. the visible scale that is marked on a mercury-in-glass thermometer or the digital readout on an infrared model). Thermometers are widely used in technology and industry to monitor processes, in meteorology, in medicine (medical thermometer), and in scientific research.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Thermometer";
        }
    }

    return nullptr;
}

string _Physics::Terms::ThirdLawOfThermodynamics(string text)
{
    string model = "llama3";
    string definition = "states that the entropy of a closed system at thermodynamic equilibrium approaches a constant value when its temperature approaches absolute zero. This constant value cannot depend on any other parameters characterizing the system, such as pressure or applied magnetic field. At absolute zero (zero kelvins) the system must be in a state with the minimum possible energy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Third Law Of Thermodynamics";
        }
    }

    return nullptr;
}

string _Physics::Terms::Torque(string text)
{
    string model = "llama3";
    string definition = "In physics and mechanics, torque is the rotational analogue of linear force. It is also referred to as the moment of force (also abbreviated to moment). The symbol for torque is typically the lowercase Greek letter tau. When being referred to as moment of force, it is commonly denoted by M. Just as a linear force is a push or a pull applied to a body, a torque can be thought of as a twist applied to an object with respect to a chosen point; for example, driving a screw uses torque, which is applied by the screwdriver rotating around its axis. A force of three newtons applied two metres from the fulcrum, for example, exerts the same torque as a force of one newton applied six metres from the fulcrum.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::TotalInternalReflection(string text)
{
    string model = "llama3";
    string definition = "In physics, total internal reflection (TIR) is the phenomenon in which waves arriving at the interface (boundary) from one medium to another (e.g., from water to air) are not refracted into the second (\"external\") medium, but completely reflected back into the first (\"internal\") medium. It occurs when the second medium has a higher wave speed (i.e., lower refractive index) than the first, and the waves are incident at a sufficiently oblique angle on the interface. For example, the water-to-air surface in a typical fish tank, when viewed obliquely from below, reflects the underwater scene like a mirror with no loss of brightness.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Total Internal Reflection";
        }
    }

    return nullptr;
}

string _Physics::Terms::Toughness(string text)
{
    string model = "llama3";
    string definition = "In materials science and metallurgy, toughness is the ability of a material to absorb energy and plastically deform without fracturing. Toughness is the strength with which the material opposes rupture. One definition of material toughness is the amount of energy per unit volume that a material can absorb before rupturing. This measure of toughness is different from that used for fracture toughness, which describes the capacity of materials to resist fracture. Toughness requires a balance of strength and ductility.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Trajectory(string text)
{
    string model = "llama3";
    string definition = "A trajectory or flight path is the path that an object with mass in motion follows through space as a function of time. In classical mechanics, a trajectory is defined by Hamiltonian mechanics via canonical coordinates; hence, a complete trajectory is defined by position and momentum, simultaneously. The mass might be a projectile or a satellite. For example, it can be an orbit - the path of a planet, asteroid, or comet as it travels around a central mass.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Transducer(string text)
{
    string model = "llama3";
    string definition = "A transducer is a device that converts energy from one form to another. Usually a transducer converts a signal in one form of energy to a signal in another. Transducers are often employed at the boundaries of automation, measurement, and control systems, where electrical signals are converted to and from other physical quantities (energy, force, torque, light, motion, position, etc.). The process of converting one form of energy to another is known as transduction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::TransmissionMedium(string text)
{
    string model = "llama3";
    string definition = "a system or substance that can mediate the propagation of signals for the purposes of telecommunication. Signals are typically imposed on a wave of some kind suitable for the chosen medium. For example, data can modulate sound, and a transmission medium for sounds may be air, but solids and liquids may also act as the transmission medium. Vacuum or air constitutes a good transmission medium for electromagnetic waves such as light and radio waves. While a material substance is not required for electromagnetic waves to propagate, such waves are usually affected by the transmission media they pass through, for instance, by absorption or reflection or refraction at the interfaces between media. Technical devices can therefore be employed to transmit or guide waves. Thus, an optical fiber or a copper cable is used as transmission media.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transmission Medium";
        }
    }

    return nullptr;
}

string _Physics::Terms::TransverseWave(string text)
{
    string model = "llama3";
    string definition = "In physics, a transverse wave is a wave that oscillates perpendicularly to the direction of the wave's advance. In contrast, a longitudinal wave travels in the direction of its oscillations. All waves move energy from place to place without transporting the matter in the transmission medium if there is one. Electromagnetic waves are transverse without requiring a medium. The designation \"transverse\" indicates the direction of the wave is perpendicular to the displacement of the particles of the medium through which it passes, or in the case of EM waves, the oscillation is perpendicular to the direction of the wave.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transverse Wave";
        }
    }

    return nullptr;
}

string _Physics::Terms::Trimean(string text)
{
    string model = "llama3";
    string definition = "In statistics the trimean (TM), or Tukey's trimean, is a measure of a probability distribution's location defined as a weighted average of the distribution's median and its two quartiles";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::TriplePoint(string text)
{
    string model = "llama3";
    string definition = "n thermodynamics, the triple point of a substance is the temperature and pressure at which the three phases (gas, liquid, and solid) of that substance coexist in thermodynamic equilibrium. It is that temperature and pressure at which the sublimation, fusion, and vaporisation curves meet. For example, the triple point of mercury occurs at a temperature of -38.8C (-37.8F) and a pressure of 0.165 mPa.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::TruncatedMean(string text)
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

string _Physics::Terms::Tension(string text)
{
    string model = "llama3";
    string definition = "the pulling or stretching force transmitted axially along an object such as a string, rope, chain, rod, truss member, or other object, so as to stretch or pull apart the object. In terms of force, it is the opposite of compression. Tension might also be described as the action-reaction pair of forces acting at each end of an object.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tension";
        }
    }

    return nullptr;
}

string _Physics::Terms::UnbalancedForces(string text)
{
    string model = "llama3";
    string definition = "When there is unbalanced force(s); and as such, the object changes its state of motion. The object is not at equilibrium and subsequently accelerates.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Unbalanced Forces";
        }
    }

    return nullptr;
}

string _Physics::Terms::UncertaintyPrinciple(string text)
{
    string model = "llama3";
    string definition = "also known as Heisenberg's indeterminacy principle, is a fundamental concept in quantum mechanics. It states that there is a limit to the precision with which certain pairs of physical properties, such as position and momentum, can be simultaneously known. In other words, the more accurately one property is measured, the less accurately the other property can be known.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::UnifiedAtomicMassUnit(string text)
{
    string model = "llama3";
    string definition = "dalton or unified atomic mass unit (symbols: Da or u, respectively) is a unit of mass defined as 1/12 of the mass of an unbound neutral atom of carbon-12 in its nuclear and electronic ground state and at rest. It is a non-SI unit accepted for use with SI.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Unified Atomic Mass Unit";
        }
    }

    return nullptr;
}

string _Physics::Terms::UniformMotion(string text)
{
    string model = "llama3";
    string definition = "Newton's first law expresses the principle of inertia: the natural behavior of a body is to move in a straight line at constant speed. A body's motion preserves the status quo, but external forces can perturb this.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Uniform Motion";
        }
    }

    return nullptr;
}

string _Physics::Terms::UniformCircularMotion(string text)
{
    string model = "llama3";
    string definition = "In physics, uniform circular motion describes the motion of a body traversing a circular path at a constant speed. Since the body describes circular motion, its distance from the axis of rotation remains constant at all times. Though the body's speed is constant, its velocity is not constant: velocity, a vector quantity, depends on both the body's speed and its direction of travel. This changing velocity indicates the presence of an acceleration; this centripetal acceleration is of constant magnitude and directed at all times toward the axis of rotation. This acceleration is, in turn, produced by a centripetal force which is also constant in magnitude and directed toward the axis of rotation. In the case of rotation around a fixed axis of a rigid body that is not negligibly small compared to the radius of the path, each particle of the body describes a uniform circular motion with the same angular velocity, but with velocity and acceleration varying with the position with respect to the axis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Uniform Circular Motion";
        }
    }

    return nullptr;
}

string _Physics::Terms::UtilityFrequency(string text)
{
    string model = "llama3";
    string definition = "The utility frequency, (power) line frequency (American English) or mains frequency (British English) is the nominal frequency of the oscillations of alternating current (AC) in a wide area synchronous grid transmitted from a power station to the end-user. In large parts of the world this is 50 Hz, although in the Americas and parts of Asia it is typically 60 Hz. Current usage by country or region is given in the list of mains electricity by country.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Vacuum(string text)
{
    string model = "llama3";
    string definition = "is space devoid of matter. The word is derived from the Latin adjective vacuus (neuter vacuum) meaning \"vacant\" or \"void\". An approximation to such vacuum is a region with a gaseous pressure much less than atmospheric pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ValenceElectron(string text)
{
    string model = "llama3";
    string definition = "In chemistry and physics, valence electrons are electrons in the outermost shell of an atom, and that can participate in the formation of a chemical bond if the outermost shell is not closed. In a single covalent bond, a shared pair forms with both atoms in the bond each contributing one valence electron.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ValenceShell(string text)
{
    string model = "llama3";
    string definition = "The valence shell is the set of orbitals which are energetically accessible for accepting electrons to form chemical bonds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ValleyOfStability(string text)
{
    string model = "llama3";
    string definition = "In nuclear physics, the valley of stability (also called the belt of stability, nuclear valley, energy valley, or beta stability valley) is a characterization of the stability of nuclides to radioactivity based on their binding energy. Nuclides are composed of protons and neutrons. The shape of the valley refers to the profile of binding energy as a function of the numbers of neutrons and protons, with the lowest part of the valley corresponding to the region of most stable nuclei. The line of stable nuclides down the center of the valley of stability is known as the line of beta stability. The sides of the valley correspond to increasing instability to beta decay (B- or B+). The decay of a nuclide becomes more energetically favorable the further it is from the line of beta stability. The boundaries of the valley correspond to the nuclear drip lines, where nuclides become so unstable they emit single protons or single neutrons. Regions of instability within the valley at high atomic number also include radioactive decay by alpha radiation or spontaneous fission. The shape of the valley is roughly an elongated paraboloid corresponding to the nuclide binding energies as a function of neutron and atomic numbers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Valley Of Stability";
        }
    }

    return nullptr;
}

string _Physics::Terms::VectorSpace(string text)
{
    string model = "llama3";
    string definition = "In mathematics and physics, a vector space (also called a linear space) is a set whose elements, often called vectors, can be added together and multiplied (\"scaled\") by numbers called scalars. The operations of vector addition and scalar multiplication must satisfy certain requirements, called vector axioms. Real vector spaces and complex vector spaces are kinds of vector spaces based on different kinds of scalars: real numbers and complex numbers. Scalars can also be, more generally, elements of any field.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::VanDeGraaffGenerator(string text)
{
    string model = "llama3";
    string definition = "an electrostatic generator which uses a moving belt to accumulate electric charge on a hollow metal globe on the top of an insulated column, creating very high electric potentials. It produces very high voltage direct current (DC) electricity at low current levels. It was invented by American physicist Robert J. Van de Graaff in 1929.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Van De Graaff Generator";
        }
    }

    return nullptr;
}

string _Physics::Terms::VariableCapacitor(string text)
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

string _Physics::Terms::Velocity(string text)
{
    string model = "llama3";
    string definition = "the speed in combination with the direction of motion of an object. Velocity is a fundamental concept in kinematics, the branch of classical mechanics that describes the motion of bodies. Velocity is a physical vector quantity: both magnitude and direction are needed to define it. The scalar absolute value (magnitude) of velocity is called speed, being a coherent derived unit whose quantity is measured in the SI (metric system) as metres per second (m/s or m*s^-1). or example, \"5 metres per second\" is a scalar, whereas \"5 metres per second east\" is a vector. If there is a change in speed, direction or both, then the object is said to be undergoing an acceleration.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Velocity";
        }
    }

    return nullptr;
}

string _Physics::Terms::VirtualImage(string text)
{
    string model = "llama3";
    string definition = "In optics, the image of an object is defined as the collection of focus points of light rays coming from the object. A real image is the collection of focus points made by converging rays, while a virtual image is the collection of focus points made by backward extensions of diverging rays. In other words, a virtual image is found by tracing real rays that emerge from an optical device (lens, mirror, or some combination) backward to perceived or apparent origins of ray divergences.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Virtual Image";
        }
    }

    return nullptr;
}

string _Physics::Terms::VirtualParticle(string text)
{
    string model = "llama3";
    string definition = "a theoretical transient particle that exhibits some of the characteristics of an ordinary particle, while having its existence limited by the uncertainty principle, which allows the virtual particles to spontaneously emerge from vacuum at short time and space ranges. The concept of virtual particles arises in the perturbation theory of quantum field theory (QFT) where interactions between ordinary particles are described in terms of exchanges of virtual particles. A process involving virtual particles can be described by a schematic representation known as a Feynman diagram, in which virtual particles are represented by internal lines.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Virtual Particle";
        }
    }

    return nullptr;
}

string _Physics::Terms::Viscoelasticity(string text)
{
    string model = "llama3";
    string definition = "In materials science and continuum mechanics, viscoelasticity is the property of materials that exhibit both viscous and elastic characteristics when undergoing deformation. Viscous materials, like water, resist both shear flow and strain linearly with time when a stress is applied. Elastic materials strain when stretched and immediately return to their original state once the stress is removed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Viscolasticity";
        }
    }

    return nullptr;
}

string _Physics::Terms::Viscosity(string text)
{
    string model = "llama3";
    string definition = "a measure of a fluid's dynamic resistance to a change in shape or to movement of its neighboring portions relative to one another. For liquids, it corresponds to the informal concept of thickness; for example, syrup has a higher viscosity than water. Viscosity is defined scientifically as a force multiplied by a time divided by an area. Thus its SI units are newton-seconds per square meter, or pascal-seconds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::VisibleLight(string text)
{
    string model = "llama3";
    string definition = "electromagnetic radiation that can be perceived by the human eye. Visible light spans the visible spectrum and is usually defined as having wavelengths in the range of 400-700 nanometres (nm), corresponding to frequencies of 750-420 terahertz. The visible band sits adjacent to the infrared (with longer wavelengths and lower frequencies) and the ultraviolet (with shorter wavelengths and higher frequencies), called collectively optical radiation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Visible Light";
        }
    }

    return nullptr;
}

string _Physics::Terms::Volt(string text)
{
    string model = "llama3";
    string definition = "The SI derived unit for electric potential, electric potential difference, and electromotive force, defined as the difference in electric potential between two points of a conducting wire when an electric current of one ampere dissipates one watt of power between those two points.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Volt";
        }
    }

    return nullptr;
}

string _Physics::Terms::VoltaPotential(string text)
{
    string model = "llama3";
    string definition = "The Volta potential (also called Volta potential difference, contact potential difference, outer potential difference, \"delta psi\") in electrochemistry, is the electrostatic potential difference between two metals (or one metal and one electrolyte) that are in contact and are in thermodynamic equilibrium. Specifically, it is the potential difference between a point close to the surface of the first metal and a point close to the surface of the second metal (or electrolyte).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Voltage(string text)
{
    string model = "llama3";
    string definition = "Voltage, also known as (electrical) potential difference, electric pressure, or electric tension is the difference in electric potential between two points. In a static electric field, it corresponds to the work needed per unit of charge to move a positive test charge from the first point to the second point. In the International System of Units (SI), the derived unit for voltage is the volt (V).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Voltmeter(string text)
{
    string model = "llama3";
    string definition = "A voltmeter is an instrument used for measuring electric potential difference between two points in an electric circuit. It is connected in parallel. It usually has a high resistance so that it takes negligible current from the circuit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Voltmeter";
        }
    }

    return nullptr;
}

string _Physics::Terms::Volume(string text)
{
    string model = "llama3";
    string definition = "a measure of regions in three-dimensional space. It is often quantified numerically using SI derived units (such as the cubic metre and litre) or by various imperial or US customary units (such as the gallon, quart, cubic inch). The definition of length and height (cubed) is interrelated with volume. The volume of a container is generally understood to be the capacity of the container; i.e., the amount of fluid (gas or liquid) that the container could hold, rather than the amount of space the container itself displaces.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Volume";
        }
    }

    return nullptr;
}

string _Physics::Terms::WAndZBosons(string text)
{
    string model = "llama3";
    string definition = "In particle physics, the W and Z bosons are vector bosons that are together known as the weak bosons or more generally as the intermediate vector bosons. These elementary particles mediate the weak interaction the respective symbols are W^+, W^-, and Z^0. The W+- bosons have either a positive or negative electric charge of 1 elementary charge and are each other's antiparticles. The Z^0 boson is electrically neutral and is its own antiparticle. The three particles each have a spin of 1. The W+- Bosons have a magnetic moment, but the Z^0 has none. All three of these particles are very short-lived, with a half-life of about 3*10^-25s. Their experimental discovery was pivotal in establishing what is now called the Standard Model of particle physics. The W bosons are named after the weak force. The physicist Steven Weinberg named the additional particle the \"Z particle\", and later gave the explanation that it was the last additional particle needed by the model. The W bosons had already been named, and the Z bosons were named for having zero electric charge.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "W And Z Bosons";
        }
    }

    return nullptr;
}

string _Physics::Terms::Watt(string text)
{
    string model = "llama3";
    string definition = "The watt (symbol: W) is the unit of power or radiant flux in the International System of Units (SI), equal to 1 joule per second or 1 kg*m^2*s^-3. It is used to quantify the rate of energy transfer. The watt is named in honor of James Watt (1736-1819), an 18th-century Scottish inventor, mechanical engineer, and chemist who improved the Newcomen engine with his own steam engine in 1776. Watt's invention was fundamental for the Industrial Revolution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Wave(string text)
{
    string model = "llama3";
    string definition = "In physics, mathematics, engineering, and related fields, a wave is a propagating dynamic disturbance (change from equilibrium) of one or more quantities. Periodic waves oscillate repeatedly about an equilibrium (resting) value at some frequency. When the entire waveform moves in one direction, it is said to be a travelling wave; by contrast, a pair of superimposed periodic waves traveling in opposite directions makes a standing wave. In a standing wave, the amplitude of vibration has nulls at some positions where the wave amplitude appears smaller or even zero.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::WaveEquation(string text)
{
    string model = "llama3";
    string definition = "The wave equation is a second-order linear partial differential equation for the description of waves or standing wave fields such as mechanical waves (e.g. water waves, sound waves and seismic waves) or electromagnetic waves (including light waves). It arises in fields like acoustics, electromagnetism, and fluid dynamics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wave Equation";
        }
    }

    return nullptr;
}

string _Physics::Terms::WaveFunction(string text)
{
    string model = "llama3";
    string definition = "In quantum physics, a wave function (or wavefunction) is a mathematical description of the quantum state of an isolated quantum system. The most common symbols for a wave function are the Greek Letters (lower-case and capital psi, respectively). Wave functions are complex-valued. For example, a wave function might assign a complex number to each point in a region of space. The Born rule provides the means to turn these complex probability amplitudes into actual probabilities. In one common form, it says that the squared modulus of a wave function that depends upon position is the probability density of measuring a particle as being at a given place. The integral of a wavefunction's squared modulus over all the system's degrees of freedom must be equal to 1, a condition called normalization. Since the wave function is complex-valued, only its relative phase and relative magnitude can be measured; its value does not, in isolation, tell anything about the magnitudes or directions of measurable observables. One has to apply quantum operators, whose eigenvalues correspond to sets of possible results of measurements, to the wave function ? and calculate the statistical distributions for measurable quantities.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wave Function";
        }
    }

    return nullptr;
}

string _Physics::Terms::WaveFunctionCollapse(string text)
{
    string model = "llama3";
    string definition = "In quantum mechanics, wave function collapse, also called reduction of the state vector, occurs when a wave function-initially in a superposition of several eigenstates-reduces to a single eigenstate due to interaction with the external world. This interaction is called an observation and is the essence of a measurement in quantum mechanics, which connects the wave function with classical observables such as position and momentum. Collapse is one of the two processes by which quantum systems evolve in time; the other is the continuous evolution governed by the Schrodinger equation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wave Function Collapse";
        }
    }

    return nullptr;
}

string _Physics::Terms::WaveParticleDuality(string text)
{
    string model = "llama3";
    string definition = "the concept in quantum mechanics that quantum entities exhibit particle or wave properties according to the experimental circumstances. It expresses the inability of the classical concepts such as particle or wave to fully describe the behavior of quantum objects. During the 19th and early 20th centuries, light was found to behave as a wave then later discovered to have a particulate behavior, whereas electrons behaved like particles in early experiments then later discovered to have wavelike behavior. The concept of duality arose to name these seeming contradictions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wave Particle Duality";
        }
    }

    return nullptr;
}

string _Physics::Terms::Wavelength(string text)
{
    string model = "llama3";
    string definition = "In physics and mathematics, wavelength or spatial period of a wave or periodic function is the distance over which the wave's shape repeats. In other words, it is the distance between consecutive corresponding points of the same phase on the wave, such as two adjacent crests, troughs, or zero crossings. Wavelength is a characteristic of both traveling waves and standing waves, as well as other spatial wave patterns. he inverse of the wavelength is called the spatial frequency. Wavelength is commonly designated by the Greek letter lambda. The term \"wavelength\" is also sometimes applied to modulated waves, and to the sinusoidal envelopes of modulated waves or waves formed by interference of several sinusoids.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wavelength";
        }
    }

    return nullptr;
}

string _Physics::Terms::WeakInteraction(string text)
{
    string model = "llama3";
    string definition = "In nuclear physics and particle physics, the weak interaction, also called the weak force, is one of the four known fundamental interactions, with the others being electromagnetism, the strong interaction, and gravitation. It is the mechanism of interaction between subatomic particles that is responsible for the radioactive decay of atoms: The weak interaction participates in nuclear fission and nuclear fusion. The theory describing its behaviour and effects is sometimes called quantum flavordynamics (QFD); however, the term QFD is rarely used, because the weak force is better understood by electroweak theory (EWT).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Weak Interaction";
        }
    }

    return nullptr;
}

string _Physics::Terms::Weber(string text)
{
    string model = "llama3";
    string definition = "In physics, (the weber symbol: Wb) is the unit of magnetic flux in the International System of Units (SI). The unit is derived (through Faraday's law of induction) from the relationship 1 Wb = 1 V*s (volt-second). A magnetic flux density of 1 Wb/m2 (one weber per square metre) is one tesla.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Weber";
        }
    }

    return nullptr;
}

string _Physics::Terms::Wedge(string text)
{
    string model = "llama3";
    string definition = "a triangular shaped tool, a portable inclined plane, and one of the six simple machines. It can be used to separate two objects or portions of an object, lift up an object, or hold an object in place. It functions by converting a force applied to its blunt end into forces perpendicular (normal) to its inclined surfaces. The mechanical advantage of a wedge is given by the ratio of the length of its slope to its width. Although a short wedge with a wide angle may do a job faster, it requires more force than a long wedge with a narrow angle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::Weight(string text)
{
    string model = "llama3";
    string definition = "In science and engineering, the weight of an object is a quantity associated with the gravitational force exerted on the object by other objects in its environment, although there is some variation and debate as to the exact definition. Some standard textbooks define weight as a vector quantity, the gravitational force acting on the object. Others define weight as a scalar quantity, the magnitude of the gravitational force. Yet others define it as the magnitude of the reaction force exerted on a body by mechanisms that counteract the effects of gravity: the weight is the quantity that is measured by, for example, a spring scale. Thus, in a state of free fall, the weight would be zero. In this sense of weight, terrestrial objects can be weightless: so if one ignores air resistance, one could say the legendary apple falling from the tree, on its way to meet the ground near Isaac Newton, was weightless.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Weight";
        }
    }

    return nullptr;
}

string _Physics::Terms::WheelAndAxle(string text)
{
    string model = "llama3";
    string definition = "a simple machine, consisting of a wheel attached to a smaller axle so that these two parts rotate together, in which a force is transferred from one to the other. The wheel and axle can be viewed as a version of the Lever, with a drive force applied tangentially to the perimeter of the wheel, and a load force applied to the axle supported in a bearing, which serves as a fulcrum.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::WhiteBody(string text)
{
    string model = "llama3";
    string definition = "A hypothetical idealized physical body that reflects all incident electromagnetic radiation completely and uniformly in all directions; the opposite of a black body.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "White Body";
        }
    }

    return nullptr;
}

string _Physics::Terms::Wind(string text)
{
    string model = "llama3";
    string definition = "The flow of gases on a large scale.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wind";
        }
    }

    return nullptr;
}

string _Physics::Terms::WorkPhysics(string text)
{
    string model = "llama3";
    string definition = "In science, work is the energy transferred to or from an object via the application of force along a displacement. In its simplest form, for a constant force aligned with the direction of motion, the work equals the product of the force strength and the distance traveled. A force is said to do positive work if it has a component in the direction of the displacement of the point of application. A force does negative work if it has a component opposite to the direction of the displacement at the point of application of the force.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Work Physics";
        }
    }

    return nullptr;
}

string _Physics::Terms::WorkFunction(string text)
{
    string model = "llama3";
    string definition = "In solid-state physics, the work function (sometimes spelled workfunction) is the minimum thermodynamic work (i.e., energy) needed to remove an electron from a solid to a point in the vacuum immediately outside the solid surface. Here \"immediately\" means that the final electron position is far from the surface on the atomic scale, but still too close to the solid to be influenced by ambient electric fields in the vacuum. The work function is not a characteristic of a bulk material, but rather a property of the surface of the material (depending on crystal face and contamination).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Work Function";
        }
    }

    return nullptr;
}

string _Physics::Terms::XRay(string text)
{
    string model = "llama3";
    string definition = "is a form of high-energy electromagnetic radiation with a wavelength shorter than those of ultraviolet rays and longer than those of gamma rays. Roughly, X-rays have a wavelength ranging from 10 nanometers to 10 picometers, corresponding to frequencies in the range of 30 petahertz to 30 exahertz (3*10^16 Hz to 3*10^19 Hz) and photon energies in the range of 100 eV to 100 keV, respectively.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "X Ray";
        }
    }

    return nullptr;
}

string _Physics::Terms::YoungsModulus(string text)
{
    string model = "llama3";
    string definition = "a mechanical property of solid materials that measures the tensile or compressive stiffness when the force is applied lengthwise. It is the modulus of elasticity for tension or axial compression. Young's modulus is defined as the ratio of the stress (force per unit area) applied to the object and the resulting axial strain (displacement or deformation) in the linear elastic region of the material. Although Young's modulus is named after the 19th-century British scientist Thomas Young, the concept was developed in 1727 by Leonhard Euler. The first experiments that used the concept of Young's modulus in its modern form were performed by the Italian scientist Giordano Riccati in 1782, pre-dating Young's work by 25 years. The term modulus is derived from the Latin root term modus, which means measure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Physics::Terms::ZeemanEffect(string text)
{
    string model = "llama3";
    string definition = "the splitting of a spectral line into several components in the presence of a static magnetic field. It is caused by interaction of the magnetic field with the magnetic moment of the atomic electron associated to its orbital motion and spin; this interaction shifts some orbital energies more than others, resulting in the split spectrum. The effect is named after the Dutch physicist Pieter Zeeman, who discovered it in 1896 and received a Nobel Prize in Physics for this discovery. It is analogous to the Stark effect, the splitting of a spectral line into several components in the presence of an electric field. Also similar to the Stark effect, transitions between different components have, in general, different intensities, with some being entirely forbidden (in the dipole approximation), as governed by the selection rules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zeeman Effect";
        }
    }

    return nullptr;
}
