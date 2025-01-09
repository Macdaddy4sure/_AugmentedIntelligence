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
#include "Geology.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _Geology::Terms::Abiotic(string text)
{
    string model = "llama3";
    string definition = "In biology and ecology, abiotic components or abiotic factors are non-living chemical and physical parts of the environment that affect living organisms and the functioning of ecosystems. Abiotic factors and the phenomena associated with them underpin biology as a whole. They affect a plethora of species, in all forms of environmental conditions, such as marine or terrestrial animals. Humans can make or change abiotic factors in a species' environment. For instance, fertilizers can affect a snail's habitat, or the greenhouse gases which humans utilize can change marine pH levels.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Abiotic";
        }
    }

    return nullptr;
}

string _Geology::Terms::AbyssalPlain(string text)
{
    string model = "llama3";
    string definition = "an underwater plain on the deep ocean floor, usually found at depths between 3,000 and 6,000 metres (9,800 and 19,700 ft). Lying generally between the foot of a continental rise and a mid-ocean ridge, abyssal plains cover more than 50% of the Earth's surface. They are among the flattest, smoothest, and least explored regions on Earth. Abyssal plains are key geologic elements of oceanic basins (the other elements being an elevated mid-ocean ridge and flanking abyssal hills).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Abyssal Plain";
        }
    }

    return nullptr;
}

string _Geology::Terms::AbsoluteDating(string text)
{
    string model = "llama3";
    string definition = "the process of determining an age on a specified chronology in archaeology and geology. Some scientists prefer the terms chronometric or calendar dating, as use of the word \"absolute\" implies an unwarranted certainty of accuracy. Absolute dating provides a numerical age or range, in contrast with relative dating, which places events in order without any measure of the age between events.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absolute Dating";
        }
    }

    return nullptr;
}

string _Geology::Terms::Accident(string text)
{
    string model = "llama3";
    string definition = "A sudden discontinuity of ground, such as a fault of great thickness, bed or lentil of unstable ground.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Accident";
        }
    }

    return nullptr;
}

string _Geology::Terms::AccretionGeology(string text)
{
    string model = "llama3";
    string definition = "In geology, accretion is a process by which material is added to a tectonic plate at a subduction zone, frequently on the edge of existing continental landmasses. The added material may be sediment, volcanic arcs, seamounts, oceanic crust or other igneous features.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Accretion Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::Achnelith(string text)
{
    string model = "llama3";
    string definition = "A small, glassy volcanic bomb, sphere, dumbbell, or droplet-shaped stone resulting from very liquid magma.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Achnelith";
        }
    }

    return nullptr;
}

string _Geology::Terms::AcidRock(string text)
{
    string model = "llama3";
    string definition = "In geology, felsic is a modifier describing igneous rocks that are relatively rich in elements that form feldspar and quartz. It is contrasted with mafic rocks, which are richer in magnesium and iron. Felsic refers to silicate minerals, magma, and rocks which are enriched in the lighter elements such as silicon, oxygen, aluminium, sodium, and potassium. Molten felsic magma and lava is more viscous than molten mafic magma and lava. Felsic magmas and lavas have lower temperatures of melting and solidification than mafic magmas and lavas. Felsic rocks are usually light in color and have specific gravities less than 3. The most common felsic rock is granite. Common felsic minerals include quartz, muscovite, orthoclase, and the sodium-rich plagioclase feldspars (albite-rich).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acid Rock";
        }
    }

    return nullptr;
}

string _Geology::Terms::Aftershock(string text)
{
    string model = "llama3";
    string definition = "In seismology, an aftershock is a smaller earthquake that follows a larger earthquake, in the same area of the main shock, caused as the displaced crust adjusts to the effects of the main shock. Large earthquakes can have hundreds to thousands of instrumentally detectable aftershocks, which steadily decrease in magnitude and frequency according to a consistent pattern. In some earthquakes the main rupture happens in two or more steps, resulting in multiple main shocks. These are known as doublet earthquakes, and in general can be distinguished from aftershocks in having similar magnitudes and nearly identical seismic waveforms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aftershock";
        }
    }

    return nullptr;
}

string _Geology::Terms::Agglomerate(string text)
{
    string model = "llama3";
    string definition = "An indurated rock built of large angular rock fragments embedded in an ashy matrix and resulting from explosive volcanic activity. Occurs typically in volcanic vents.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Agglomerate";
        }
    }

    return nullptr;
}

string _Geology::Terms::Aggregate(string text)
{
    string model = "llama3";
    string definition = "A mass consisting of rock or mineral fragments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aggregate";
        }
    }

    return nullptr;
}

string _Geology::Terms::Albite(string text)
{
    string model = "llama3";
    string definition = "Albite is a plagioclase feldspar mineral. It is the sodium endmember of the plagioclase solid solution series. It represents a plagioclase with less than 10% anorthite content. The pure albite endmember has the formula NaAlSi3O8. It is a tectosilicate.Its color is usually pure white, hence its name from Latin, albus. It is a common constituent in felsic rocks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Albite";
        }
    }

    return nullptr;
}

//string _Geology::Terms::Agglomerate(string text)
//{
//    string model = "llama3";
//    string definition = "is a coarse accumulation of large blocks of volcanic material that contains at least 75% bombs. Volcanic bombs differ from volcanic blocks in that their shape records fluidal surfaces: they may, for example, have ropy, cauliform, scoriaceous, folded, spindle, spatter, ribbon, ragged, or amoeboid shapes. Globular masses of lava may have been shot from the crater at a time when partly molten lava was exposed, and was frequently shattered by sudden outbursts of steam. These bombs were viscous at the moment of ejection and by rotation in the air acquired their shape. They are commonly 1 to 2 feet (30 to 60 cm) in diameter, but specimens as large as 12 feet (3.7 m) have been observed.";
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
//            return "Agglomerate";
//        }
//    }
//
//    return nullptr;
//}

////string _Geology::Terms::Aggregate(string text)
////{
////    string model = "llama3";
////    string definition = "In mineralogy and petrology, an aggregate is a mass of mineral crystals, mineraloid particles or rock particles. Examples are dolomite, which is an aggregate of crystals of the mineral dolomite, and rock gypsum, an aggregate of crystals of the mineral gypsum.  Lapis lazuli is a type of rock composed of an aggregate of crystals of many minerals including lazurite, pyrite, phlogopite, calcite, potassium feldspar, wollastonite and some sodalite group minerals.";
////    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
////    string response = _LLM::OllamaAPI(model, prompt, "NULL");
////    response = _Parsers::LLM::LLama3Parse(response);
////    string* words = _Utilities::String2Words(response);
////    words = _Utilities::RemovePunctuationArr(words);
////    words = _Utilities::ArrayOfStringsToLowercase(words);
////
////    for (int x = 0; x < sizeof(words); x++)
////    {
////        if (words[x] == "yes")
////        {
////            return "Aggregate";
////        }
////    }
////
////    return nullptr;
////}

string _Geology::Terms::Alkali(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an alkali is a basic, ionic salt of an alkali metal or an alkaline earth metal. An alkali can also be defined as a base that dissolves in water. A solution of a soluble base has a pH greater than 7.0. The adjective alkaline, and less often, alkalescent, is commonly used in English as a synonym for basic, especially for bases soluble in water. This broad use of the term is likely to have come about because alkalis were the first bases known to obey the Arrhenius definition of a base, and they are still among the most common bases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alkali";
        }
    }

    return nullptr;
}

string _Geology::Terms::AlkalineRock(string text)
{
    string model = "llama3";
    string definition = "A type of rock characterized by a high content of Na2O and K2O relative to the other oxides. They occur throughout the range from ultrabasic to acid, but have their strongest expression in the acid-intermediate part of the range.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alkaline Rock";
        }
    }

    return nullptr;
}

string _Geology::Terms::Allochthon(string text)
{
    string model = "llama3";
    string definition = "an allochthonous block, is a large block of rock which has been moved from its original site of formation, usually by low angle thrust faulting. The term is derived from Greek: allo, meaning other, and chthon, meaning earth. For other possible mechanisms see obduction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Allochthon";
        }
    }

    return nullptr;
}

string _Geology::Terms::AluvialFan(string text)
{
    string model = "llama3";
    string definition = "an accumulation of sediments that fans outwards from a concentrated source of sediments, such as a narrow canyon emerging from an escarpment. They are characteristic of mountainous terrain in arid to semiarid climates, but are also found in more humid environments subject to intense rainfall and in areas of modern glaciation. They range in area from less than 1 square kilometer (0.4 sq mi) to almost 20,000 square kilometers (7,700 sq mi).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aluvial Fan";
        }
    }

    return nullptr;
}

string _Geology::Terms::Amber(string text)
{
    string model = "llama3";
    string definition = "fossilized tree resin. Examples of it have been appreciated for its color and natural beauty since the Neolithic times, and worked as a gemstone since antiquity.[2] Amber is used in jewelry and as a healing agent in folk medicine.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amber";
        }
    }

    return nullptr;
}

string _Geology::Terms::Amphibole(string text)
{
    string model = "llama3";
    string definition = "a group of inosilicate minerals, forming prism or needlelike crystals, composed of double chain SiO4 tetrahedra, linked at the vertices and generally containing ions of iron and/or magnesium in their structures. Its IMA symbol is Amp. Amphiboles can be green, black, colorless, white, yellow, blue, or brown. The International Mineralogical Association currently classifies amphiboles as a mineral supergroup, within which are two groups and several subgroups.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amphibole";
        }
    }

    return nullptr;
}

string _Geology::Terms::Amphibolite(string text)
{
    string model = "llama3";
    string definition = "a metamorphic rock that contains amphibole, especially hornblende and actinolite, as well as plagioclase feldspar, but with little or no quartz. It is typically dark-colored and dense, with a weakly foliated or schistose (flaky) structure. The small flakes of black and white in the rock often give it a salt-and-pepper appearance. Amphibolite frequently forms by metamorphism of mafic igneous rocks, such as basalt. However, because metamorphism creates minerals entirely based upon the chemistry of the protolith, certain 'dirty marls' and volcanic sediments may also metamorphose to an amphibolite assemblage. Deposits containing dolomite and siderite also readily yield amphibolite (tremolite-schist, grunerite-schist, and others) especially where there has been a certain amount of contact metamorphism by adjacent granitic masses. Metamorphosed basalt (metabasalt) creates ortho-amphibolite and other chemically appropriate lithologies create para-amphibolite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amphibolite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Amygdaloidal(string text)
{
    string model = "llama3";
    string definition = "form when the vesicles (pores from gas bubbles in lava) of a volcanic rock or other extrusive igneous rock are infilled with a secondary mineral, such as calcite, quartz, chlorite, or one of the zeolites. Amygdules usually form after the rock has been emplaced, and are often associated with low-temperature alteration. Amygdules may often be concentrically zoned. Rocks containing amygdules can be described as amygdaloidal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amygdaloidal";
        }
    }

    return nullptr;
}

string _Geology::Terms::Anatexis(string text)
{
    string model = "llama3";
    string definition = "the partial melting of rocks. Traditionally, anatexis is used specifically to discuss the partial melting of crustal rocks, while the generic term \"partial melting\" refers to the partial melting of all rocks, in both the crust and mantle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anatexis";
        }
    }

    return nullptr;
}

string _Geology::Terms::Andaludite(string text)
{
    string model = "llama3";
    string definition = "is an aluminium nesosilicate mineral with the chemical formula Al2SiO5. This mineral was called andalousite by Delametherie,  who thought it came from Andalusia, Spain. It soon became clear that it was a locality error, and that the specimens studied were actually from El Cardoso de la Sierra, in the Spanish province of Guadalajara, not Andalusia.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Andaludite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Andesite(string text)
{
    string model = "llama3";
    string definition = "a volcanic rock of intermediate composition. In a general sense, it is the intermediate type between silica-poor basalt and silica-rich rhyolite. It is fine-grained (aphanitic) to porphyritic in texture, and is composed predominantly of sodium-rich plagioclase plus pyroxene or hornblende.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Andesite";
        }
    }

    return nullptr;
}

string _Geology::Terms::AngularUnconformity(string text)
{
    string model = "llama3";
    string definition = "An angular unconformity is an unconformity where horizontally parallel strata of sedimentary rock are deposited on tilted and eroded layers, producing an angular discordance with the overlying horizontal layers. The whole sequence may later be deformed and tilted by further orogenic activity. A typical case history is presented by the Brianconnais realm (Swiss and French Prealps) during the Jurassic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Angular Unconformity";
        }
    }

    return nullptr;
}

string _Geology::Terms::Anorthite(string text)
{
    string model = "llama3";
    string definition = "the calcium endmember of the plagioclase feldspar mineral series. The chemical formula of pure anorthite is CaAl2Si2O8. Anorthite is found in mafic igneous rocks. Anorthite is rare on the Earth but abundant on the Moon.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anorthite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Anticline(string text)
{
    string model = "llama3";
    string definition = "In structural geology, an anticline is a type of fold that is an arch-like shape and has its oldest beds at its core, whereas a syncline is the inverse of an anticline. A typical anticline is convex up in which the hinge or crest is the location where the curvature is greatest, and the limbs are the sides of the fold that dip away from the hinge. Anticlines can be recognized and differentiated from antiforms by a sequence of rock layers that become progressively older toward the center of the fold. Therefore, if age relationships between various rock strata are unknown, the term antiform should be used.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anticline";
        }
    }

    return nullptr;
}

string _Geology::Terms::Aphanic(string text)
{
    string model = "llama3";
    string definition = "Having the texture of carbonate sedimentary rocks characterized by individual crystals or clastic grains less than 0.01 mm in diameter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aphanic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Aphanite(string text)
{
    string model = "llama3";
    string definition = "igneous rocks that are so fine-grained that their component mineral crystals are not visible to the naked eye (in contrast to phanerites, in which the crystals are visible to the unaided eye). This geological texture results from rapid cooling in volcanic or hypabyssal (shallow subsurface) environments. As a rule, the texture of these rocks is not the same as that of volcanic glass (e.g., obsidian), with volcanic glass being non-crystalline (amorphous), and having a glass-like appearance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aphanite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Aplogranite(string text)
{
    string model = "llama3";
    string definition = "A light-coloured rock of granitic texture consisting mainly of alkali feldspar and quartz, with subordinate biotite; muscovite may be present.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aplogranite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Aquifer(string text)
{
    string model = "llama3";
    string definition = "an underground layer of water-bearing material, consisting of permeable or fractured rock, or of unconsolidated materials (gravel, sand, or silt). Aquifers vary greatly in their characteristics. The study of water flow in aquifers and the characterization of aquifers is called hydrogeology. Related terms include aquitard, which is a bed of low permeability along an aquifer, and aquiclude (or aquifuge), which is a solid, impermeable area underlying or overlying an aquifer, the pressure of which could lead to the formation of a confined aquifer. The classification of aquifers is as follows: Saturated versus unsaturated; aquifers versus aquitards; confined versus unconfined; isotropic versus anisotropic; porous, karst, or fractured; transboundary aquifer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aquifer";
        }
    }

    return nullptr;
}

string _Geology::Terms::AragoniteSea(string text)
{
    string model = "llama3";
    string definition = "contains aragonite and high-magnesium calcite as the primary inorganic calcium carbonate precipitates. The reason lies in the highly hydrated Mg2+ divalent ion, the second most abundant cation in seawater after Na+, known to be a strong inhibitor of CaCO3 crystallization at the nucleation stage.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aragonite Sea";
        }
    }

    return nullptr;
}

string _Geology::Terms::ArcheanEon(string text)
{
    string model = "llama3";
    string definition = "the second of the four geologic eons of Earth's history, preceded by the Hadean Eon and followed by the Proterozoic. The Archean represents the time period from 4,031 to 2,500 Mya (million years ago). The Late Heavy Bombardment is hypothesized to overlap with the beginning of the Archean. The Huronian glaciation occurred at the end of the eon.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Archean Eon";
        }
    }

    return nullptr;
}

string _Geology::Terms::Archipelago(string text)
{
    string model = "llama3";
    string definition = "sometimes called an island group or island chain, is a chain, cluster, or collection of islands, or sometimes a sea containing a small number of scattered islands. Archipelagos are sometimes defined by political boundaries. For example, while they are geopolitically divided, the San Juan Islands and Gulf Islands geologically form part of a larger Gulf Archipelago.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Archipelago";
        }
    }

    return nullptr;
}

string _Geology::Terms::Arenitic(string text)
{
    string model = "llama3";
    string definition = "sedimentary clastic rock with sand grain size between 0.0625 mm (0.00245 in) and 2 mm (0.08 in) and containing less than 15% matrix. The related adjective is arenaceous. The equivalent Greek-derived term is psammite, though this is more commonly used for metamorphosed sediments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arenitic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Arkose(string text)
{
    string model = "llama3";
    string definition = "a detrital sedimentary rock, specifically a type of sandstone containing at least 25% feldspar. Arkosic sand is sand that is similarly rich in feldspar, and thus the potential precursor of arkose.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arkose";
        }
    }

    return nullptr;
}

string _Geology::Terms::ArgillaceousRocks(string text)
{
    string model = "llama3";
    string definition = "in which clay minerals are a significant component. For example, argillaceous limestones are limestones consisting predominantly of calcium carbonate, but including 10-40% of clay minerals: such limestones, when soft, are often called marls. Similarly, argillaceous sandstones such as greywacke, are sandstones consisting primarily of quartz grains, with the interstitial spaces filled with clay minerals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Argillaceous Rocks";
        }
    }

    return nullptr;
}

string _Geology::Terms::Ash(string text)
{
    string model = "llama3";
    string definition = "Fragments less than 2 mm (0.079 in) in diameter of pulverized rock, minerals and volcanic glass, created during volcanic eruptions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ash";
        }
    }

    return nullptr;
}

string _Geology::Terms::Asphalt(string text)
{
    string model = "llama3";
    string definition = "an immensely viscous constituent of petroleum. Depending on its exact composition it can be a sticky, black liquid or an apparently solid mass that behaves as a liquid over very large time scales. In American English, the material is commonly referred to as asphalt. Whether found in natural deposits or refined from petroleum, the substance is classed as a pitch. Prior to the 20th century, the term asphaltum was in general use.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Asphalt";
        }
    }

    return nullptr;
}

string _Geology::Terms::AssembledGem(string text)
{
    string model = "llama3";
    string definition = "a gemstone made up of other smaller gems. An assembled gem can often be a fake gem with a desirable piece of gemstone attached to pieces of inexpensive imitation gemstones. For example, a combination of a thin layer of green glass and a colorless piece of quartz would be a composite gem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Assembled Gem";
        }
    }

    return nullptr;
}

string _Geology::Terms::Asthenosphere(string text)
{
    string model = "llama3";
    string definition = "the mechanically weak and ductile region of the upper mantle of Earth. It lies below the lithosphere, at a depth between c. 80 and 200 km (50 and 120 mi) below the surface, and extends as deep as 700 km (430 mi). However, the lower boundary of the asthenosphere is not well defined.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Asthenosphere";
        }
    }

    return nullptr;
}

string _Geology::Terms::Augite(string text)
{
    string model = "llama3";
    string definition = "A complex aluminous silicate of calcium, iron and magnesium, crystallising in the monoclinic system, and occurring in many igneous rocks, particularly those of basic composition. It is an essential component of basalt, dolerite and gabbro.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Augite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Aureole(string text)
{
    string model = "llama3";
    string definition = "A zone surrounding an igneous intrusion in which country rock shows effects of contact metamorphism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aureole";
        }
    }

    return nullptr;
}

string _Geology::Terms::Autochthon(string text)
{
    string model = "llama3";
    string definition = "A fossil, sediment, or rock that was formed or produced in the location where it is now found. The term is widely applied to a coal or peat that originated at the place where the plants comprising it grew and decayed and to rocks that have not been displaced by overthrust faulting. An object of this type is referred to as autochthonous. Contrast allochthon.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Autochthon";
        }
    }

    return nullptr;
}

string _Geology::Terms::Bajada(string text)
{
    string model = "llama3";
    string definition = "consists of a series of coalescing alluvial fans along a mountain front. These fan-shaped deposits form by the deposition of sediment within a stream onto flat land at the base of a mountain. The usage of the term in landscape description or geomorphology derives from the Spanish word bajada, generally having the sense of \"descent\" or \"inclination\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bajada";
        }
    }

    return nullptr;
}

string _Geology::Terms::BandedIronFormation(string text)
{
    string model = "llama3";
    string definition = "are distinctive units of sedimentary rock consisting of alternating layers of iron oxides and iron-poor chert. They can be up to several hundred meters in thickness and extend laterally for several hundred kilometers. Almost all of these formations are of Precambrian age and are thought to record the oxygenation of the Earth's oceans. Some of the Earth's oldest rock formations, which formed about 3,700 million years ago (Ma), are associated with banded iron formations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Banded Iron Formation";
        }
    }

    return nullptr;
}

string _Geology::Terms::Basalt(string text)
{
    string model = "llama3";
    string definition = "an aphanitic (fine-grained) extrusive igneous rock formed from the rapid cooling of low-viscosity lava rich in magnesium and iron (mafic lava) exposed at or very near the surface of a rocky planet or moon. More than 90% of all volcanic rock on Earth is basalt. Rapid-cooling, fine-grained basalt is chemically equivalent to slow-cooling, coarse-grained gabbro. The eruption of basalt lava is observed by geologists at about 20 volcanoes per year. Basalt is also an important rock type on other planetary bodies in the Solar System. For example, the bulk of the plains of Venus, which cover ~80% of the surface, are basaltic; the lunar maria are plains of flood-basaltic lava flows; and basalt is a common rock on the surface of Mars.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Basalt";
        }
    }

    return nullptr;
}

string _Geology::Terms::BasementGeology(string text)
{
    string model = "llama3";
    string definition = "In geology, basement and crystalline basement are crystalline rocks lying above the mantle and beneath all other rocks and sediments. They are sometimes exposed at the surface, but often they are buried under miles of rock and sediment. The basement rocks lie below a sedimentary platform or cover, or more generally any rock below sedimentary rocks or sedimentary basins that are metamorphic or igneous in origin. In the same way, the sediments or sedimentary rocks on top of the basement can be called a \"cover\" or \"sedimentary cover\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Basement Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::BasicRock(string text)
{
    string model = "llama3";
    string definition = "Igneous rock with low silica content (<54%). The groups ultrabasic, basic, intermediate, and acid constitute a series with progressively increasing SiO2 content.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Basic Rock";
        }
    }

    return nullptr;
}

string _Geology::Terms::Basin(string text)
{
    string model = "llama3";
    string definition = "an area of land in which all flowing surface water converges to a single point, such as a river mouth, or flows into another body of water, such as a lake or ocean. A basin is separated from adjacent basins by a perimeter, the drainage divide, made up of a succession of elevated features, such as ridges and hills. A basin may consist of smaller basins that merge at river confluences, forming a hierarchical pattern.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Basin";
        }
    }

    return nullptr;
}

string _Geology::Terms::BasinAndRangeProvince(string text)
{
    string model = "llama3";
    string definition = "a vast physiographic region covering much of the inland Western United States and northwestern Mexico. It is defined by unique basin and range topography, characterized by abrupt changes in elevation, alternating between narrow faulted mountain chains and flat arid valleys or basins. The physiography of the province is the result of tectonic extension that began around 17 million years ago in the early Miocene epoch.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Basin And Range Province";
        }
    }

    return nullptr;
}

string _Geology::Terms::Batholith(string text)
{
    string model = "llama3";
    string definition = "a large mass of intrusive igneous rock (also called plutonic rock), larger than 100 km2 (40 sq mi) in area, that forms from cooled magma deep in the Earth's crust. Batholiths are almost always made mostly of felsic or intermediate rock types, such as granite, quartz monzonite, or diorite (see also granite dome).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Batholith";
        }
    }

    return nullptr;
}

string _Geology::Terms::Bedrock(string text)
{
    string model = "llama3";
    string definition = "In geology, bedrock is solid rock that lies under loose material (regolith) within the crust of Earth or another terrestrial planet.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bedrock";
        }
    }

    return nullptr;
}

string _Geology::Terms::BeforePresent(string text)
{
    string model = "llama3";
    string definition = "Before Present (BP) or \"years before present (YBP)\" is a time scale used mainly in archaeology, geology, and other scientific disciplines to specify when events occurred relative to the origin of practical radiocarbon dating in the 1950s. Because the \"present\" time changes, standard practice is to use 1 January 1950 as the commencement date (epoch) of the age scale, with 1950 being labelled as the \"standard year\". The abbreviation \"BP\" has been interpreted retrospectively as \"Before Physics\", ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Before Present";
        }
    }

    return nullptr;
}

string _Geology::Terms::Bentonite(string text)
{
    string model = "llama3";
    string definition = "an absorbent swelling clay consisting mostly of montmorillonite (a type of smectite) which can either be Na-montmorillonite or Ca-montmorillonite. Na-montmorillonite has a considerably greater swelling capacity than Ca-montmorillonite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bentonite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Bioerosion(string text)
{
    string model = "llama3";
    string definition = "describes the breakdown of hard ocean substrates - and less often terrestrial substrates - by living organisms. Marine bioerosion can be caused by mollusks, polychaete worms, phoronids, sponges, crustaceans, echinoids, and fish; it can occur on coastlines, on coral reefs, and on ships; its mechanisms include biotic boring, drilling, rasping, and scraping. On dry land, bioerosion is typically performed by pioneer plants or plant-like organisms such as lichen, and mostly chemical (e.g. by acidic secretions on limestone) or mechanical (e.g. by roots growing into cracks) in nature.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bioerosion";
        }
    }

    return nullptr;
}

string _Geology::Terms::Biogenic(string text)
{
    string model = "llama3";
    string definition = "A biogenic substance is a product made by or of life forms. While the term originally was specific to metabolite compounds that had toxic effects on other organisms, it has developed to encompass any constituents, secretions, and metabolites of plants or animals. In context of molecular biology, biogenic substances are referred to as biomolecules. They are generally isolated and measured through the use of chromatography and mass spectrometry techniques. Additionally, the transformation and exchange of biogenic substances can by modelled in the environment, particularly their transport in waterways.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biogenic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Bioherm(string text)
{
    string model = "llama3";
    string definition = "Landform of organic sedimentary rock enclosed or surrounded by rock of different origin.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bioherm";
        }
    }

    return nullptr;
}

string _Geology::Terms::Biostratigraphy(string text)
{
    string model = "llama3";
    string definition = "the branch of stratigraphy which focuses on correlating and assigning relative ages of rock strata by using the fossil assemblages contained within them. he primary objective of biostratigraphy is correlation, demonstrating that a particular horizon in one geological section represents the same period of time as another horizon at a different section. Fossils within these strata are useful because sediments of the same age can look completely different, due to local variations in the sedimentary environment. For example, one section might have been made up of clays and marls, while another has more chalky limestones. However, if the fossil species recorded are similar, the two sediments are likely to have been laid down around the same time. Ideally these fossils are used to help identify biozones, as they make up the basic biostratigraphy units, and define geological time periods based upon the fossil species found within each section.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biostratigraphy";
        }
    }

    return nullptr;
}

string _Geology::Terms::Biostratinomy(string text)
{
    string model = "llama3";
    string definition = "the study of the processes that take place after an organism dies but before its final burial. It is considered to be a subsection of the science of taphonomy, along with necrology (the study of the death of an organism) and diagenesis (the changes that take place after final burial). These processes are largely destructive, and include physical, chemical and biological effects:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biostratinomy";
        }
    }

    return nullptr;
}

string _Geology::Terms::Biostrome(string text)
{
    string model = "llama3";
    string definition = "A distinctly bedded or broadly lenticular sedimentary rock landform.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biostrome";
        }
    }

    return nullptr;
}

string _Geology::Terms::Biotic(string text)
{
    string model = "llama3";
    string definition = "Biotic material or biological derived material is any material that originates from living organisms. Most such materials contain carbon and are capable of decay.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biotic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Biotite(string text)
{
    string model = "llama3";
    string definition = "a common group of phyllosilicate minerals within the mica group, with the approximate chemical formula K(Mg,Fe)3AlSi3O10(F,OH)2. It is primarily a solid-solution series between the iron-endmember annite, and the magnesium-endmember phlogopite; more aluminous end-members include siderophyllite and eastonite. Biotite was regarded as a mineral species by the International Mineralogical Association until 1998, when its status was changed to a mineral group.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biotite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Bioturbation(string text)
{
    string model = "llama3";
    string definition = "defined as the reworking of soils and sediments by animals or plants. It includes burrowing, ingestion, and defecation of sediment grains. Bioturbating activities have a profound effect on the environment and are thought to be a primary driver of biodiversity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bioturbation";
        }
    }

    return nullptr;
}

string _Geology::Terms::Bluechist(string text)
{
    string model = "llama3";
    string definition = "also called glaucophane schist, is a metavolcanic rock that forms by the metamorphism of basalt and rocks with similar composition at high pressures and low temperatures (200-500 °C (392-932 °F)), approximately corresponding to a depth of 15-30 km (9.3-18.6 mi). The blue color of the rock comes from the presence of the predominant minerals glaucophane and lawsonite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bluechist";
        }
    }

    return nullptr;
}

string _Geology::Terms::Boudinage(string text)
{
    string model = "llama3";
    string definition = "a geological term for structures formed by extension, where a rigid tabular body such as hornfels, is stretched and deformed amidst less competent surroundings. he competent bed begins to break up, forming sausage-shaped boudins. Boudinage is common and can occur at any scale, from microscopic to lithospheric, and can be found in all terranes. In lithospheric-scale tectonics, boudinage of strong layers can signify large-scale creep transfer of rock matter. The study of boudinage can also help provide insight into the forces involved in tectonic deformation of rocks and their strength.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boudinage";
        }
    }

    return nullptr;
}

string _Geology::Terms::Boulder(string text)
{
    string model = "llama3";
    string definition = "In geology, a boulder (or rarely bowlder) is a rock fragment with size greater than 25.6 cm (10.1 in) in diameter. Smaller pieces are called cobbles and pebbles. While a boulder may be small enough to move or roll manually, others are extremely massive. In common usage, a boulder is too large for a person to move. Smaller boulders are usually just called rocks or stones.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boulder";
        }
    }

    return nullptr;
}

string _Geology::Terms::BowensReactionSeries(string text)
{
    string model = "llama3";
    string definition = "the work of the Canadian petrologist Norman L. Bowen, who summarized, based on experiments and observations of natural rocks, the sequence of crystallization of common silicate minerals from typical basaltic magma undergoing fractional crystallization (i.e. crystallization wherein early-formed crystals are removed from the magma by crystal settling, leaving behind a liquid of slightly different composition). Bowen's reaction series is able to explain why certain types of minerals tend to be found together while others are almost never associated with one another. He experimented in the early 1900s with powdered rock material that was heated until it melted and then allowed to cool to a target temperature whereupon he observed the types of minerals that formed in the rocks produced. He repeated this process with progressively cooler temperatures and the results he obtained led him to formulate his reaction series which is still accepted today as the idealized progression of minerals produced by cooling basaltic magma that undergoes fractional crystallization. Based upon Bowen's work, one can infer from the minerals present in a rock the relative conditions under which the material had formed";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bowens Reaction Series";
        }
    }

    return nullptr;
}

string _Geology::Terms::BrackishWater(string text)
{
    string model = "llama3";
    string definition = "water occurring in a natural environment that has more salinity than freshwater, but not as much as seawater. It may result from mixing seawater (salt water) and fresh water together, as in estuaries, or it may occur in brackish fossil aquifers. The word comes from the Middle Dutch root brak. Certain human activities can produce brackish water, in particular civil engineering projects such as dikes and the flooding of coastal marshland to produce brackish water pools for freshwater prawn farming. Brackish water is also the primary waste product of the salinity gradient power process. Because brackish water is hostile to the growth of most terrestrial plant species, without appropriate management it can be damaging to the environment (see article on shrimp farms).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Brackish Water";
        }
    }

    return nullptr;
}

string _Geology::Terms::BreadcrustBomb(string text)
{
    string model = "llama3";
    string definition = "A rounded, smooth-surfaced volcanic bomb with a cracked surface resembling a cracked crust of bread, hence the name.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Breadcrust Bomb";
        }
    }

    return nullptr;
}

string _Geology::Terms::Breccia(string text)
{
    string model = "llama3";
    string definition = "a rock composed of large angular broken fragments of minerals or rocks cemented together by a fine-grained matrix.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Breccia";
        }
    }

    return nullptr;
}

string _Geology::Terms::Buckling(string text)
{
    string model = "llama3";
    string definition = "Typically, folding is thought to occur by simple buckling of a planar surface and its confining volume. The volume change is accommodated by layer parallel shortening the volume, which grows in thickness. Folding under this mechanism is typical of a similar fold style, as thinned limbs are shortened horizontally and thickened hinges do so vertically.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Buckling";
        }
    }

    return nullptr;
}

string _Geology::Terms::Calcareous(string text)
{
    string model = "llama3";
    string definition = "an adjective meaning \"mostly or partly composed of calcium carbonate\", in other words, containing lime or being chalky. The term is used in a wide variety of scientific disciplines.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Calcareous";
        }
    }

    return nullptr;
}

string _Geology::Terms::Calcite(string text)
{
    string model = "llama3";
    string definition = "a carbonate mineral and the most stable polymorph of calcium carbonate (CaCO3). It is a very common mineral, particularly as a component of limestone. Calcite defines hardness 3 on the Mohs scale of mineral hardness, based on scratch hardness comparison. Large calcite crystals are used in optical equipment, and limestone composed mostly of calcite has numerous uses.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Calcite";
        }
    }

    return nullptr;
}

string _Geology::Terms::CalciteSea(string text)
{
    string model = "llama3";
    string definition = "a sea in which low-magnesium calcite is the primary inorganic marine calcium carbonate precipitate. An aragonite sea is the alternate seawater chemistry in which aragonite and high-magnesium calcite are the primary inorganic carbonate precipitates. The Early Paleozoic and the Middle to Late Mesozoic oceans were predominantly calcite seas, whereas the Middle Paleozoic through the Early Mesozoic and the Cenozoic (including today) are characterized by aragonite seas.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Calcite Sea";
        }
    }

    return nullptr;
}

string _Geology::Terms::Calcrete(string text)
{
    string model = "llama3";
    string definition = "1. A conglomerate of surficial sand and gravel cemented by calcium carbonate precipitated from solution. 2. A calcareous duricrust.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Calcrete";
        }
    }

    return nullptr;
}

string _Geology::Terms::Caldera(string text)
{
    string model = "llama3";
    string definition = "a large cauldron-like hollow that forms shortly after the emptying of a magma chamber in a volcanic eruption. An eruption that ejects large volumes of magma over a short period of time can cause significant detriment to the structural integrity of such a chamber, greatly diminishing its capacity to support its own roof, and any substrate or rock resting above. The ground surface then collapses into the emptied or partially emptied magma chamber, leaving a large depression at the surface (from one to dozens of kilometers in diameter).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Caldera";
        }
    }

    return nullptr;
}

string _Geology::Terms::Cambrian(string text)
{
    string model = "llama3";
    string definition = "the first geological period of the Paleozoic Era, and the Phanerozoic Eon. The Cambrian lasted 53.4 million years from the end of the preceding Ediacaran period 538.8 Ma (million years ago) to the beginning of the Ordovician Period 485.4 Ma.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cambrian";
        }
    }

    return nullptr;
}

string _Geology::Terms::CarbonFilm(string text)
{
    string model = "llama3";
    string definition = "A type of fossil or preservation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Carbon Film";
        }
    }

    return nullptr;
}

string _Geology::Terms::Carbonate(string text)
{
    string model = "llama3";
    string definition = "a salt of carbonic acid, (H2CO3), The word \"carbonate\" may also refer to a carbonate ester, an organic compound containing the carbonate group O=C(-O-)2";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Geology::Terms::CarbonateHardgrounds(string text)
{
    string model = "llama3";
    string definition = "surfaces of synsedimentarily cemented carbonate layers that have been exposed on the seafloor (Wilson and Palmer, 1992). A hardground is essentially, then, a lithified seafloor. Ancient hardgrounds are found in limestone sequences and distinguished from later-lithified sediments by evidence of exposure to normal marine waters. This evidence can consist of encrusting marine organisms (especially bryozoans, oysters, barnacles, cornulitids, hederelloids, microconchids and crinoids), borings of organisms produced through bioerosion, early marine calcite cements, or extensive surfaces mineralized by iron oxides or calcium phosphates (Palmer, 1982; Bodenbender et al., 1989; Vinn and Wilson, 2010; Vinn and Toom, 2015). Modern hardgrounds are usually detected by sounding in shallow water or through remote sensing techniques like side-scan sonar.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Carbonate Hardgrounds";
        }
    }

    return nullptr;
}

string _Geology::Terms::Casting(string text)
{
    string model = "llama3";
    string definition = "The process which occurs when a liquid fills a cavity and then solidifies. If the cavity originated from the decomposition of dead organisms, casting may result in the formation of fossils.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Geology::Terms::CenozoicEra(string text)
{
    string model = "llama3";
    string definition = "The most recent of the geological eras, which followed the Mesozoic Era.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cenozoic Era";
        }
    }

    return nullptr;
}

string _Geology::Terms::Chalk(string text)
{
    string model = "llama3";
    string definition = "a soft, white, porous, sedimentary carbonate rock. It is a form of limestone composed of the mineral calcite and originally formed deep under the sea by the compression of microscopic plankton that had settled to the sea floor. Chalk is common throughout Western Europe, where deposits underlie parts of France, and steep cliffs are often seen where they meet the sea in places such as the Dover cliffs on the Kent coast of the English Channel.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chalk";
        }
    }

    return nullptr;
}

string _Geology::Terms::Chert(string text)
{
    string model = "llama3";
    string definition = "A fine-grained, silica-rich, microcrystalline, cryptocrystalline or microfibrous sedimentary rock that sometimes contains small fossils.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chert";
        }
    }

    return nullptr;
}

string _Geology::Terms::Chlorite(string text)
{
    string model = "llama3";
    string definition = "Any of a set of allied non-swelling 2:1 (TOT) clay minerals which may be regarded as hydrated silicates of aluminium, iron, and magnesium. Their non-accessible interlayer is filled by a brucite bridge (Mg(OH)2, or sometime Fe(OH)2). They crystallise in the monoclinic system and are green in colour. They occur as alteration products of such minerals as biotite and hornblende, and also in schistose rocks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chlorite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Clast(string text)
{
    string model = "llama3";
    string definition = "Any individual constituent grain or fragment of a sediment or rock produced by mechanical weathering of a rock mass.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Clast";
        }
    }

    return nullptr;
}

string _Geology::Terms::ClasticRock(string text)
{
    string model = "llama3";
    string definition = "composed of fragments, or clasts, of pre-existing minerals and rock. A clast is a fragment of geological detritus, chunks, and smaller grains of rock broken off other rocks by physical weathering. Geologists use the term clastic to refer to sedimentary rocks and particles in sediment transport, whether in suspension or as bed load, and in sediment deposits.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Clastic Rock";
        }
    }

    return nullptr;
}

string _Geology::Terms::Clay(string text)
{
    string model = "llama3";
    string definition = "a type of fine-grained natural soil material containing clay minerals (hydrous aluminium phyllosilicates, e.g. kaolinite, Al2Si2O5(OH)4). Most pure clay minerals are white or light-coloured, but natural clays show a variety of colours from impurities, such as a reddish or brownish colour from small amounts of iron oxide.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Clay";
        }
    }

    return nullptr;
}

string _Geology::Terms::CleavageGeology(string text)
{
    string model = "llama3";
    string definition = "in structural geology and petrology, describes a type of planar rock feature that develops as a result of deformation and metamorphism. The degree of deformation and metamorphism along with rock type determines the kind of cleavage feature that develops. Generally, these structures are formed in fine grained rocks composed of minerals affected by pressure solution. Cleavage is a type of rock foliation, a fabric element that describes the way planar features develop in a rock. Foliation is separated into two groups: primary and secondary. Primary deals with igneous and sedimentary rocks, while secondary deals with rocks that undergo metamorphism as a result of deformation. Cleavage is a type of secondary foliation associated with fine grained rocks. For coarser grained rocks, schistosity is used to describe secondary foliation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cleavage Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::Cobble(string text)
{
    string model = "llama3";
    string definition = "a clast of rock defined on the Udden-Wentworth scale as having a particle size of 64-256 millimeters (2.5-10.1 in), larger than a pebble and smaller than a boulder. Other scales define a cobble's size differently. A rock made predominantly of cobbles is termed a conglomerate. Cobblestone is a building material based on cobbles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cobble";
        }
    }

    return nullptr;
}

string _Geology::Terms::Coccolithophore(string text)
{
    string model = "llama3";
    string definition = "are single-celled organisms which are part of the phytoplankton, the autotrophic (self-feeding) component of the plankton community. They form a group of about 200 species, and belong either to the kingdom Protista, according to Robert Whittaker's five-kingdom system, or clade Hacrobia, according to a newer biological classification system. Within the Hacrobia, the coccolithophores are in the phylum or division Haptophyta, class Prymnesiophyceae (or Coccolithophyceae). Coccolithophores are almost exclusively marine, are photosynthetic and mixotrophic, and exist in large numbers throughout the sunlight zone of the ocean.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coccolithophore";
        }
    }

    return nullptr;
}

string _Geology::Terms::CompactionGeology(string text)
{
    string model = "llama3";
    string definition = "In sedimentology, compaction is the process by which a sediment progressively loses its porosity due to the effects of pressure from loading. This forms part of the process of lithification. When a layer of sediment is originally deposited, it contains an open framework of particles with the pore space being usually filled with water. As more sediment is deposited above the layer, the effect of the increased loading is to increase the particle-to-particle stresses resulting in porosity reduction primarily through a more efficient packing of the particles and to a lesser extent through elastic compression and pressure solution. The initial porosity of a sediment depends on its lithology. Mudstones start with porosities of >60%, sandstones typically ~40% and carbonates sometimes as high as 70%. Results from hydrocarbon exploration wells show clear porosity reduction trends with depth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Compaction Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::CompressionGeology(string text)
{
    string model = "llama3";
    string definition = "In geology, the term compression refers to a set of stresses directed toward the center of a rock mass. Compressive strength refers to the maximum amount of compressive stress that can be applied to a material before failure occurs. When the maximum compressive stress is in a horizontal orientation, thrust faulting can occur, resulting in the shortening and thickening of that portion of the crust. When the maximum compressive stress is vertical, a section of rock will often fail in normal faults, horizontally extending and vertically thinning a given layer of rock. Compressive stresses can also result in folding of rocks. Because of the large magnitudes of lithostatic stress in tectonic plates, tectonic-scale deformation is always subjected to net compressive stress.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Compression Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::ConchoidalFracture(string text)
{
    string model = "llama3";
    string definition = "a break or fracture of a brittle material that does not follow any natural planes of separation. Mindat.org defines conchoidal fracture as follows: \"a fracture with smooth, curved surfaces, typically slightly concave, showing concentric undulations resembling the lines of growth of a shell\".Materials that break in this way include quartz, chert, flint, quartzite, jasper, and other fine-grained or amorphous materials with a composition of pure silica, such as obsidian and window glass, as well as a few metals, such as solid gallium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conchoidal Fracture";
        }
    }

    return nullptr;
}

string _Geology::Terms::Concretion(string text)
{
    string model = "llama3";
    string definition = "a hard, compact mass formed by the precipitation of mineral cement within the spaces between particles, and is found in sedimentary rock or soil. Concretions are often ovoid or spherical in shape, although irregular shapes also occur. The word concretion is borrowed from Latin concretio \'(act of) compacting, condensing, congealing, uniting\', itself derived from concrescere \'to thicken, condense, congeal\', from con- \'together\' and crescere \'to grow\'.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Concretion";
        }
    }

    return nullptr;
}

string _Geology::Terms::ConglomerateGeology(string text)
{
    string model = "llama3";
    string definition = "a sedimentary rock made up of rounded gravel-sized pieces of rock surrounded by finer-grained sediments (such as sand, silt, or clay). The larger fragments within conglomerate are called clasts, while the finer sediment surrounding the clasts is called the matrix. The clasts and matrix are typically cemented by calcium carbonate, iron oxide, silica, or hardened clay.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conglomerate Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::ContactMetamophism(string text)
{
    string model = "llama3";
    string definition = "Metamorphism due to the local heating of rocks by the intrusion of magma nearby.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Contact Metamophism";
        }
    }

    return nullptr;
}

string _Geology::Terms::ContinentalCrust(string text)
{
    string model = "llama3";
    string definition = "the layer of igneous, metamorphic, and sedimentary rocks that forms the geological continents and the areas of shallow seabed close to their shores, known as continental shelves. This layer is sometimes called sial because its bulk composition is richer in aluminium silicates (Al-Si) and has a lower density compared to the oceanic crust,";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Continental Crust";
        }
    }

    return nullptr;
}

string _Geology::Terms::ContinentalMargin(string text)
{
    string model = "llama3";
    string definition = "the outer edge of continental crust abutting oceanic crust under coastal waters. It is one of the three major zones of the ocean floor, the other two being deep-ocean basins and mid-ocean ridges. The continental margin consists of three different features: the continental rise, the continental slope, and the continental shelf.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Continental Margin";
        }
    }

    return nullptr;
}

string _Geology::Terms::ContinentalShelf(string text)
{
    string model = "llama3";
    string definition = "a portion of a continent that is submerged under an area of relatively shallow water, known as a shelf sea. Much of these shelves were exposed by drops in sea level during glacial periods. The shelf surrounding an island is known as an insular shelf.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Continental Shelf";
        }
    }

    return nullptr;
}

string _Geology::Terms::ConvergentBoundry(string text)
{
    string model = "llama3";
    string definition = "an area on Earth where two or more lithospheric plates collide. One plate eventually slides beneath the other, a process known as subduction. The subduction zone can be defined by a plane where many earthquakes occur, called the Wadati-Benioff zone. These collisions happen on scales of millions to tens of millions of years and can lead to volcanism, earthquakes, orogenesis, destruction of lithosphere, and deformation. Convergent boundaries occur between oceanic-oceanic lithosphere, oceanic-continental lithosphere, and continental-continental lithosphere. The geologic features related to convergent boundaries vary depending on crust types.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Convergent Boundry";
        }
    }

    return nullptr;
}

string _Geology::Terms::Copal(string text)
{
    string model = "llama3";
    string definition = "a tree resin, particularly the aromatic resins from the copal tree Protium copal (Burseraceae) used by the cultures of pre-Columbian Mesoamerica as ceremonially burned incense and for other purposes. More generally, copal includes resinous substances in an intermediate stage of polymerization and hardening between \"gummier\" resins and amber. Copal that is partly mineralized is known as copaline.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Copal";
        }
    }

    return nullptr;
}

string _Geology::Terms::Coprolite(string text)
{
    string model = "llama3";
    string definition = " fossilized feces. Coprolites are classified as trace fossils as opposed to body fossils, as they give evidence for the animal's behaviour (in this case, diet) rather than morphology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coprolite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Cordierite(string text)
{
    string model = "llama3";
    string definition = "a magnesium iron aluminium cyclosilicate. Iron is almost always present, and a solid solution exists between Mg-rich cordierite and Fe-rich sekaninaite with a series formula: (Mg,Fe)2Al3(Si5AlO18) to (Fe,Mg)2Al3(Si5AlO18). A high-temperature polymorph exists, indialite, which is isostructural with beryl and has a random distribution of Al in the (Si,Al)6O18 rings. Cordierite is also synthesized and used in high temperature applications such as catalytic converters and pizza stones.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cordierite";
        }
    }

    return nullptr;
}

string _Geology::Terms::PlanetaryCore(string text)
{
    string model = "llama3";
    string definition = "onsists of the innermost layers of a planet. Cores may be entirely liquid, or a mixture of solid and liquid layers as is the case in the Earth. In the Solar System, core sizes range from about 20% (the Moon) to 85% of a planet's radius (Mercury).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Planetary Core";
        }
    }

    return nullptr;
}

string _Geology::Terms::Corestone(string text)
{
    string model = "llama3";
    string definition = "An ellipsoidal or broadly rectangular joint block of granite formed by subsurface weathering in the same manner as a tor but entirely separated from bedrock.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Corestone";
        }
    }

    return nullptr;
}

string _Geology::Terms::CountryRockGeology(string text)
{
    string model = "llama3";
    string definition = "In geology, country rock is the rock native to an area, in contrast to any intrusion of viscous geologic material, commonly magma, or perhaps rock salt (in salt domes) or unconsolidated sediments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Country Rock Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::Craton(string text)
{
    string model = "llama3";
    string definition = "An old and stable part of the continental crust that has survived the merging and splitting of continents and supercontinents for at least 500 million years.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Craton";
        }
    }

    return nullptr;
}

string _Geology::Terms::CrossBedding(string text)
{
    string model = "llama3";
    string definition = "also known as cross-stratification, is layering within a stratum and at an angle to the main bedding plane. The sedimentary structures which result are roughly horizontal units composed of inclined layers. The original depositional layering is tilted, such tilting not being the result of post-depositional deformation. Cross-beds or \"sets\" are the groups of inclined layers, which are known as cross-strata.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cross Bedding";
        }
    }

    return nullptr;
}

string _Geology::Terms::CrudeOil(string text)
{
    string model = "llama3";
    string definition = "a naturally occurring yellowish-black liquid mixture. It consists mainly of hydrocarbons, and is found in geological formations. The term petroleum refers both to naturally occurring unprocessed crude oil, as well as to petroleum products that consist of refined crude oil.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Crude Oil";
        }
    }

    return nullptr;
}

string _Geology::Terms::CrustGeology(string text)
{
    string model = "llama3";
    string definition = "In geology, the crust is the outermost solid shell of a planet, dwarf planet, or natural satellite. It is usually distinguished from the underlying mantle by its chemical makeup; however, in the case of icy satellites, it may be distinguished based on its phase (solid crust vs. liquid mantle).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Crust Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::Cryptocrystalline(string text)
{
    string model = "llama3";
    string definition = "Cryptocrystalline is a rock texture made up of such minute crystals that its crystalline nature is only vaguely revealed even microscopically in thin section by transmitted polarized light. Among the sedimentary rocks, chert and flint are cryptocrystalline. Carbonado, a form of diamond, is also cryptocrystalline. Volcanic rocks, especially of the felsic type such as felsites and rhyolites, may have a cryptocrystalline groundmass as distinguished from pure obsidian (felsic) or tachylyte (mafic), which are natural rock glasses. Agate and onyx are examples of cryptocrystalline silica (chalcedony). The quartz crystals in chalcedony are so tiny that they cannot be distinguished with the naked eye.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cryptocrystalline";
        }
    }

    return nullptr;
}

string _Geology::Terms::Crystal(string text)
{
    string model = "llama3";
    string definition = "a solid material whose constituents (such as atoms, molecules, or ions) are arranged in a highly ordered microscopic structure, forming a crystal lattice that extends in all directions. In addition, macroscopic single crystals are usually identifiable by their geometrical shape, consisting of flat faces with specific, characteristic orientations. The scientific study of crystals and crystal formation is known as crystallography. The process of crystal formation via mechanisms of crystal growth is called crystallization or solidification.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Crystal";
        }
    }

    return nullptr;
}

string _Geology::Terms::CrystalHabit(string text)
{
    string model = "llama3";
    string definition = "In mineralogy, crystal habit is the characteristic external shape of an individual crystal or aggregate of crystals. The habit of a crystal is dependent on its crystallographic form and growth conditions, which generally creates irregularities due to limited space in the crystallizing medium (commonly in rocks).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Crystal Habit";
        }
    }

    return nullptr;
}

string _Geology::Terms::Crystallinity(string text)
{
    string model = "llama3";
    string definition = "refers to the degree of structural order in a solid. In a crystal, the atoms or molecules are arranged in a regular, periodic manner. The degree of crystallinity has a large influence on hardness, density, transparency and diffusion. In an ideal gas, the relative positions of the atoms or molecules are completely random. Amorphous materials, such as liquids and glasses, represent an intermediate case, having order over short distances (a few atomic or molecular spacings) but not over longer distances.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Crystallinity";
        }
    }

    return nullptr;
}

string _Geology::Terms::Dacite(string text)
{
    string model = "llama3";
    string definition = "a volcanic rock formed by rapid solidification of lava that is high in silica and low in alkali metal oxides. It has a fine-grained (aphanitic) to porphyritic texture and is intermediate in composition between andesite and rhyolite. It is composed predominantly of plagioclase feldspar and quartz.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dacite";
        }
    }

    return nullptr;
}

string _Geology::Terms::DaughterProduct(string text)
{
    string model = "llama3";
    string definition = "In nuclear physics, a decay product (also known as a daughter product, daughter isotope, radio-daughter, or daughter nuclide) is the remaining nuclide left over from radioactive decay. Radioactive decay often proceeds via a sequence of steps (decay chain). For example, 238U decays to 234Th which decays to 234mPa which decays, and so on, to 206Pb (which is stable):";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Daughter Product";
        }
    }

    return nullptr;
}

string _Geology::Terms::RiverDelta(string text)
{
    string model = "llama3";
    string definition = "a triangular landform created by the deposition of the sediments that are carried by the waters of a river, where the river merges with a body of slow-moving water or with a body of stagnant water. he creation of a river delta occurs at the river mouth, where the river merges into an ocean, a sea, or an estuary, into a lake, a reservoir, or (more rarely) into another river that cannot carry away the sediment supplied by the feeding river. Etymologically, the term river delta derives from the triangular shape of the uppercase Greek letter delta. In hydrology, the dimensions of a river delta are determined by the balance between the watershed processes that supply sediment and the watershed processes that redistribute, sequester, and export the supplied sediment into the receiving basin.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "River Delta";
        }
    }

    return nullptr;
}

string _Geology::Terms::DegradationGeology(string text)
{
    string model = "llama3";
    string definition = "In geology, degradation refers to the lowering of a fluvial surface, such as a stream bed or floodplain, through erosional processes. Degradation is the opposite of aggradation. Degradation is characteristic of channel networks in which either bedrock erosion is taking place, or in systems that are sediment-starved and are therefore entraining more material than they are depositing. When a stream degrades, it leaves behind a fluvial terrace. This can be further classified as a strath terrace-a bedrock terrace that may have a thin mantle of alluvium-if the river is incising through bedrock. These terraces may be dated with methods such as cosmogenic radionuclide dating, OSL dating, and paleomagnetic dating (using reversals in the Earth's magnetic field to constrain the timing of events) to find when a river was at a particular level and how quickly it is downcutting.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Degradation Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::Denudation(string text)
{
    string model = "llama3";
    string definition = "Denudation is the geological process in which moving water, ice, wind, and waves erode the Earth's surface, leading to a reduction in elevation and in relief of landforms and landscapes. Although the terms erosion and denudation are used interchangeably, erosion is the transport of soil and rocks from one location to another, and denudation is the sum of processes, including erosion, that result in the lowering of Earth's surface. Endogenous processes such as volcanoes, earthquakes, and tectonic uplift can expose continental crust to the exogenous processes of weathering, erosion, and mass wasting. The effects of denudation have been recorded for millennia but the mechanics behind it have been debated for the past 200 years and have only begun to be understood in the past few decades.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Denudation";
        }
    }

    return nullptr;
}

string _Geology::Terms::DepositionGeology(string text)
{
    string model = "llama3";
    string definition = "the geological process in which sediments, soil and rocks are added to a landform or landmass. Wind, ice, water, and gravity transport previously weathered surface material, which, at the loss of enough kinetic energy in the fluid, is deposited, building up layers of sediment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deposition Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::DetachmentFault(string text)
{
    string model = "llama3";
    string definition = "a gently dipping normal fault associated with large-scale extensional tectonics. Detachment faults often have very large displacements (tens of km) and juxtapose unmetamorphosed hanging walls against medium to high-grade metamorphic footwalls that are called metamorphic core complexes. They are thought to have formed as either initially low-angle structures or by the rotation of initially high-angle normal faults modified also by the isostatic effects of tectonic denudation. They may also be called denudation faults.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Detachment Fault";
        }
    }

    return nullptr;
}

string _Geology::Terms::Diagenesis(string text)
{
    string model = "llama3";
    string definition = "the process that describes physical and chemical changes in sediments first caused by water-rock interactions, microbial activity, and compaction after their deposition. Increased pressure and temperature only start to play a role as sediments become buried much deeper in the Earth's crust. In the early stages, the transformation of poorly consolidated sediments into sedimentary rock (lithification) is simply accompanied by a reduction in porosity and water expulsion (clay sediments), while their main mineralogical assemblages remain unaltered. As the rock is carried deeper by further deposition above, its organic content is progressively transformed into kerogens and bitumens.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diagenesis";
        }
    }

    return nullptr;
}

string _Geology::Terms::Diamictite(string text)
{
    string model = "llama3";
    string definition = "a type of lithified sedimentary rock that consists of nonsorted to poorly sorted terrigenous sediment containing particles that range in size from clay to boulders, suspended in a matrix of mudstone or sandstone. The term was coined by Richard Foster Flint and others as a purely descriptive term, devoid of any reference to a particular origin. Some geologists restrict the usage to nonsorted or poorly sorted conglomerate or breccia that consists of sparse, terrigenous gravel suspended in either a mud or sand matrix.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diamictite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Diapir(string text)
{
    string model = "llama3";
    string definition = "a type of intrusion in which a more mobile and ductilely deformable material is forced into brittle overlying rocks. Depending on the tectonic environment, diapirs can range from idealized mushroom-shaped Rayleigh-Taylor instability structures in regions with low tectonic stress such as in the Gulf of Mexico to narrow dikes of material that move along tectonically induced fractures in surrounding rock.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diapir";
        }
    }

    return nullptr;
}

string _Geology::Terms::DiatomaceousEarth(string text)
{
    string model = "llama3";
    string definition = "Diatomaceous earth, celite, or kieselguhr, is a naturally occurring, soft, siliceous sedimentary rock that can be crumbled into a fine white to off-white powder. It has a particle size ranging from more than 3 mm to less than 1 um, but typically 10 to 200 um. Depending on the granularity, this powder can have an abrasive feel, similar to pumice powder, and has a low density as a result of its high porosity. The typical chemical composition of oven-dried diatomaceous earth is 80-90% silica, with 2-4% alumina (attributed mostly to clay minerals), and 0.5-2% iron oxide.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diatomaceous Earth";
        }
    }

    return nullptr;
}

string _Geology::Terms::Diopside(string text)
{
    string model = "llama3";
    string definition = "a monoclinic pyroxene mineral with composition MgCaSi2O6. It forms complete solid solution series with hedenbergite (FeCaSi2O6) and augite, and partial solid solutions with orthopyroxene and pigeonite. It forms variably colored, but typically dull green crystals in the monoclinic prismatic class. It has two distinct prismatic cleavages at 87 and 93° typical of the pyroxene series. It has a Mohs hardness of six, a Vickers hardness of 7.7 GPa at a load of 0.98 N,[5] and a specific gravity of 3.25 to 3.55.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diopside";
        }
    }

    return nullptr;
}

string _Geology::Terms::Diorite(string text)
{
    string model = "llama3";
    string definition = "an intrusive igneous rock formed by the slow cooling underground of magma (molten rock) that has a moderate content of silica and a relatively low content of alkali metals. It is intermediate in composition between low-silica (mafic) gabbro and high-silica (felsic) granite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diorite";
        }
    }

    return nullptr;
}

string _Geology::Terms::DikeGeology(string text)
{
    string model = "llama3";
    string definition = "In geology, a dike or dyke is a sheet of rock that is formed in a fracture of a pre-existing rock body. Dikes can be either magmatic or sedimentary in origin. Magmatic dikes form when magma flows into a crack then solidifies as a sheet intrusion, either cutting across layers of rock or through a contiguous mass of rock. Clastic dikes are formed when sediment fills a pre-existing crack.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dike Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::DipSlope(string text)
{
    string model = "llama3";
    string definition = "a topographic (geomorphic) surface which slopes in the same direction, and often by the same amount, as the true dip or apparent dip of the underlying strata. A dip slope consists of the upper surface of a resistant layer of rock, often called caprock, that is commonly only slightly lowered and reduced in steepness by erosion. Dip slopes form the backslopes of cuestas, homoclinal ridges, hogbacks, and flatirons. The frontslopes of such ridges consist of either an escarpment, a steep slope, or perhaps even a line of cliffs. Generally, cuestas and homoclinal ridges are asymmetrical in that their dip slopes are less steep than their escarpments. In the case of hogbacks and flatirons, the dip of the rocks is so steep that their dip slope approaches the escarpment in their steepness.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dip Slope";
        }
    }

    return nullptr;
}

string _Geology::Terms::Disconformity(string text)
{
    string model = "llama3";
    string definition = "A disconformity is an unconformity between parallel layers of sedimentary rocks which represents a period of erosion or non-deposition. Disconformities are marked by features of subaerial erosion. This type of erosion can leave channels and paleosols in the rock record.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Disconformity";
        }
    }

    return nullptr;
}

string _Geology::Terms::DivergentBoundary(string text)
{
    string model = "llama3";
    string definition = "In plate tectonics, a divergent boundary or divergent plate boundary (also known as a constructive boundary or an extensional boundary) is a linear feature that exists between two tectonic plates that are moving away from each other. Divergent boundaries within continents initially produce rifts, which eventually become rift valleys. Most active divergent plate boundaries occur between oceanic plates and exist as mid-oceanic ridges.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Divergent Boundary";
        }
    }

    return nullptr;
}

string _Geology::Terms::Dolomite(string text)
{
    string model = "llama3";
    string definition = "Dolomite (also known as dolomite rock, dolostone or dolomitic rock) is a sedimentary carbonate rock that contains a high percentage of the mineral dolomite, CaMg(CO3)2. It occurs widely, often in association with limestone and evaporites, though it is less abundant than limestone and rare in Cenozoic rock beds (beds less than about 66 million years in age). One of the first geologists to distinguish dolomite from limestone was Déodat Gratet de Dolomieu; a French mineralogist and geologist whom it is named after. He recognized and described the distinct characteristics of dolomite in the late 18th century, differentiating it from limestone.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dolomite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Diabase(string text)
{
    string model = "llama3";
    string definition = "also called dolerite, or microgabbro, is a mafic, holocrystalline, subvolcanic rock equivalent to volcanic basalt or plutonic gabbro. Diabase dikes and sills are typically shallow intrusive bodies and often exhibit fine-grained to aphanitic chilled margins which may contain tachylite (dark mafic glass). ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diabase";
        }
    }

    return nullptr;
}

string _Geology::Terms::DomeGeology(string text)
{
    string model = "llama3";
    string definition = "A dome is a feature in structural geology where a circular part of the Earth\'s surface has been pushed upward, tilting the pre-existing layers of earth away from the center. In technical terms, it consists of symmetrical anticlines that intersect each other at their respective apices. Intact, domes are distinct, rounded, spherical-to-ellipsoidal-shaped protrusions on the Earth\'s surface. A slice parallel to Earth\'s surface of a dome features concentric rings of strata. If the top of a dome has been eroded flat, the resulting structure in plan view appears as a bullseye, with the youngest rock layers at the outside, and each ring growing progressively older moving inwards. These strata would have been horizontal at the time of deposition, then later deformed by the uplift associated with dome formation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dome Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::CoreDrill(string text)
{
    string model = "llama3";
    string definition = "A modern core drill is a drill specifically designed to remove a cylinder of material, much like a hole saw. The material left inside the drill bit is referred to as the core.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Core Drill";
        }
    }

    return nullptr;
}

string _Geology::Terms::Drumlin(string text)
{
    string model = "llama3";
    string definition = "first recorded in 1833, in the classical sense is an elongated hill in the shape of an inverted spoon or half-buried egg formed by glacial ice acting on underlying unconsolidated till or ground moraine. Assemblages of drumlins are referred to as fields or swarms; they can create a landscape which is often described as having a \\'basket of eggs topography\\'.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Drumlin";
        }
    }

    return nullptr;
}

string _Geology::Terms::Dunite(string text)
{
    string model = "llama3";
    string definition = "an intrusive igneous rock of ultramafic composition and with phaneritic (coarse-grained) texture. The mineral assemblage is greater than 90% olivine, with minor amounts of other minerals such as pyroxene, chromite, magnetite, and pyrope. Dunite is the olivine-rich endmember of the peridotite group of mantle-derived rocks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dunite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Duricrust(string text)
{
    string model = "llama3";
    string definition = "Duricrust is a hard layer on or near the surface of soil. Duricrusts can range in thickness from a few millimeters or centimeters to several meters. It is a general term (not to be confused with duripan) for a zone of chemical precipitation and hardening formed at or near the surface of sedimentary bodies through pedogenic or non-pedogenic processes. It is typically formed by the accumulation of soluble minerals deposited by mineral-bearing waters that move upward, downward, or laterally by capillary action, commonly assisted in arid settings by evaporation. There are different types of duricrusts, each distinguished by a dominant mineralogy. For example, ferricrete (laterite) is dominated by sesquioxides of iron; alcrete (bauxite) is dominated by sesquioxides of aluminum; silcrete by silica; calcrete (caliche) by calcium carbonate, and gypcrete (gypcrust) by gypsum.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Duricrust";
        }
    }

    return nullptr;
}

string _Geology::Terms::Earthquake(string text)
{
    string model = "llama3";
    string definition = "An earthquake - also called a quake, tremor, or temblor - is the shaking of the Earth\'s surface resulting from a sudden release of energy in the lithosphere that creates seismic waves. Earthquakes can range in intensity, from those so weak they cannot be felt, to those violent enough to propel objects and people into the air, damage critical infrastructure, and wreak destruction across entire cities. The seismic activity of an area is the frequency, type, and size of earthquakes experienced over a particular time. The seismicity at a particular location in the Earth is the average rate of seismic energy release per unit volume.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Earthquake";
        }
    }

    return nullptr;
}

string _Geology::Terms::Eclogite(string text)
{
    string model = "llama3";
    string definition = "a metamorphic rock containing garnet (almandine-pyrope) hosted in a matrix of sodium-rich pyroxene (omphacite). Accessory minerals include kyanite, rutile, quartz, lawsonite, coesite, amphibole, phengite, paragonite, zoisite, dolomite, corundum and, rarely, diamond. The chemistry of primary and accessory minerals is used to classify three types of eclogite (A, B, and C). The broad range of eclogitic compositions has led to a longstanding debate on the origin of eclogite xenoliths as subducted, altered oceanic crust.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Eclogite";
        }
    }

    return nullptr;
}

string _Geology::Terms::EemianTransgression(string text)
{
    string model = "llama3";
    string definition = "The portion of the Late Pleistocene spanning the period between 120 Ka and 8m before present.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Eemian Transgression";
        }
    }

    return nullptr;
}

string _Geology::Terms::Eon(string text)
{
    string model = "llama3";
    string definition = "The geologic time scale is divided into chronostratigraphic units and their corresponding geochronologic units. An eon is the largest geochronologic time unit and is equivalent to a chronostratigraphic eonothem. There are four formally defined eons: the Hadean, Archean, Proterozoic and Phanerozoic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Eon";
        }
    }

    return nullptr;
}

string _Geology::Terms::Epicenter(string text)
{
    string model = "llama3";
    string definition = "in seismology is the point on the Earth\'s surface directly above a hypocenter or focus, the point where an earthquake or an underground explosion originates.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Epicenter";
        }
    }

    return nullptr;
}

string _Geology::Terms::Epirogenetic(string text)
{
    string model = "llama3";
    string definition = "In geology, epeirogenic movement (from Greek epeiros, land, and genesis, birth) is upheavals or depressions of land exhibiting long wavelengths and little folding apart from broad undulations. The broad central parts of continents are called cratons, and are subject to epeirogeny. The movement may be one of subsidence toward, or of uplift from, the center of Earth. The movement is caused by a set of forces acting along an Earth radius, such as those contributing to isostasy and faulting in the lithosphere.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Epirogenetic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Epoch(string text)
{
    string model = "llama3";
    string definition = "In chronology and periodization, an epoch or reference epoch is an instant in time chosen as the origin of a particular calendar era. The \"epoch\" serves as a reference point from which time is measured.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Epoch";
        }
    }

    return nullptr;
}

string _Geology::Terms::Erosion(string text)
{
    string model = "llama3";
    string definition = "Erosion is the action of surface processes (such as water flow or wind) that removes soil, rock, or dissolved material from one location on the Earth\'s crust and then transports it to another location where it is deposited. Erosion is distinct from weathering which involves no movement. Removal of rock or soil as clastic sediment is referred to as physical or mechanical erosion; this contrasts with chemical erosion, where soil or rock material is removed from an area by dissolution. Eroded sediment or solutes may be transported just a few millimetres, or for thousands of kilometres.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Erosion";
        }
    }

    return nullptr;
}

string _Geology::Terms::Erratic(string text)
{
    string model = "llama3";
    string definition = "A glacial erratic is a glacially deposited rock differing from the type of rock native to the area in which it rests. Erratics, which take their name from the Latin word errare (\"to wander\"), are carried by glacial ice, often over distances of hundreds of kilometres. Erratics can range in size from pebbles to large boulders such as Big Rock (16,500 metric tons) in Alberta.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Erratic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Escarpment(string text)
{
    string model = "llama3";
    string definition = "An escarpment is a steep slope or long cliff that forms as a result of faulting or erosion and separates two relatively level areas having different elevations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Escarpment";
        }
    }

    return nullptr;
}

string _Geology::Terms::Esker(string text)
{
    string model = "llama3";
    string definition = "An esker, eskar, eschar, or os, sometimes called an asar, osar, or serpent kame, is a long, winding ridge of stratified sand and gravel, examples of which occur in glaciated and formerly glaciated regions of Europe and North America. Eskers are frequently several kilometres long and, because of their uniform shape, look like railway embankments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Esker";
        }
    }

    return nullptr;
}

string _Geology::Terms::Estuary(string text)
{
    string model = "llama3";
    string definition = "An estuary is a partially enclosed coastal body of brackish water with one or more rivers or streams flowing into it, and with a free connection to the open sea. Estuaries form a transition zone between river environments and maritime environments and are an example of an ecotone. Estuaries are subject both to marine influences such as tides, waves, and the influx of saline water, and to fluvial influences such as flows of freshwater and sediment. The mixing of seawater and freshwater provides high levels of nutrients both in the water column and in sediment, making estuaries among the most productive natural habitats in the world.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Estuary";
        }
    }

    return nullptr;
}

string _Geology::Terms::Eugeosyncline(string text)
{
    string model = "llama3";
    string definition = "A geosyncline (originally called a geosynclinal) is an obsolete geological concept to explain orogens, which was developed in the late 19th and early 20th centuries, before the theory of plate tectonics was envisaged. A geosyncline was described as a giant downward fold in the Earth\'s crust, with associated upward folds called geanticlines (or geanticlinals), that preceded the climax phase of orogenic deformation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Eugeosyncline";
        }
    }

    return nullptr;
}

string _Geology::Terms::Euhedral(string text)
{
    string model = "llama3";
    string definition = "Euhedral and anhedral are terms used to describe opposite properties in the formation of crystals. Euhedral (also known as idiomorphic or automorphic) crystals are those that are well-formed, with sharp, easily recognised faces. The opposite is anhedral (also known as xenomorphic or allotriomorphic), which describes rock with a microstructure composed of mineral grains that have no well-formed crystal faces or cross-section shape in thin section.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Euhedral";
        }
    }

    return nullptr;
}

string _Geology::Terms::Evaporite(string text)
{
    string model = "llama3";
    string definition = " a water-soluble sedimentary mineral deposit that results from concentration and crystallization by evaporation from an aqueous solution. There are two types of evaporite deposits: marine, which can also be described as ocean deposits, and non-marine, which are found in standing bodies of water such as lakes. Evaporites are considered sedimentary rocks and are formed by chemical sediments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Evaporite";
        }
    }

    return nullptr;
}

string _Geology::Terms::ExfoliationJoint(string text)
{
    string model = "llama3";
    string definition = "Exfoliation joints or sheet joints are surface-parallel fracture systems in rock, often leading to the erosion of concentric slabs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exfoliation Joint";
        }
    }

    return nullptr;
}

string _Geology::Terms::Extrusive(string text)
{
    string model = "llama3";
    string definition = "Extrusive rock refers to the mode of igneous volcanic rock formation in which hot magma from inside the Earth flows out (extrudes) onto the surface as lava or explodes violently into the atmosphere to fall back as pyroclastics or tuff. In contrast, intrusive rock refers to rocks formed by magma which cools below the surface.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Extrusive";
        }
    }

    return nullptr;
}

string _Geology::Terms::Facies(string text)
{
    string model = "llama3";
    string definition = "In geology, a facies same pronunciation and spelling in the plural) is a body of rock with distinctive characteristics. The characteristics can be any observable attribute of rocks (such as their overall appearance, composition, or condition of formation) and the changes that may occur in those attributes over a geographic area. A facies encompasses all the characteristics of a rock including its chemical, physical, and biological features that distinguish it from adjacent rock.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Facies";
        }
    }

    return nullptr;
}

string _Geology::Terms::Fanning(string text)
{
    string model = "llama3";
    string definition = "Rock deformation related to shear stress.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fanning";
        }
    }

    return nullptr;
}

string _Geology::Terms::Fault(string text)
{
    string model = "llama3";
    string definition = "In geology, a fault is a planar fracture or discontinuity in a volume of rock across which there has been significant displacement as a result of rock-mass movements. Large faults within Earth\'s crust result from the action of plate tectonic forces, with the largest forming the boundaries between the plates, such as the megathrust faults of subduction zones or transform faults. Energy release associated with rapid movement on active faults is the cause of most earthquakes. Faults may also displace slowly, by aseismic creep.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fault";
        }
    }

    return nullptr;
}

string _Geology::Terms::FaultZone(string text)
{
    string model = "llama3";
    string definition = "A fault zone is a cluster of parallel faults. However, the term is also used for the zone of crushed rock along a single fault. Prolonged motion along closely spaced faults can blur the distinction, as the rock between the faults is converted to fault-bound lenses of rock and then progressively crushed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fault Zone";
        }
    }

    return nullptr;
}

string _Geology::Terms::Feldspar(string text)
{
    string model = "llama3";
    string definition = "sometimes spelled felspar) is a group of rock-forming aluminium tectosilicate minerals, also containing other cations such as sodium, calcium, potassium, or barium. The most common members of the feldspar group are the plagioclase (sodium-calcium) feldspars and the alkali (potassium-sodium) feldspars. Feldspars make up about 60% of the Earth\'s crust and 41% of the Earth\'s continental crust by weight.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Feldspar";
        }
    }

    return nullptr;
}

string _Geology::Terms::Fels(string text)
{
    string model = "llama3";
    string definition = "A massive metamorphic rock lacking schistosity or foliation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fels";
        }
    }

    return nullptr;
}

string _Geology::Terms::Felsic(string text)
{
    string model = "llama3";
    string definition = "In geology, felsic is a modifier describing igneous rocks that are relatively rich in elements that form feldspar and quartz. It is contrasted with mafic rocks, which are richer in magnesium and iron. Felsic refers to silicate minerals, magma, and rocks which are enriched in the lighter elements such as silicon, oxygen, aluminium, sodium, and potassium. Molten felsic magma and lava is more viscous than molten mafic magma and lava. Felsic magmas and lavas have lower temperatures of melting and solidification than mafic magmas and lavas.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Felsic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Ferricrete(string text)
{
    string model = "llama3";
    string definition = "Ferricrete is a hard, erosion-resistant layer of sedimentary rock, usually conglomerate or breccia, that has been cemented into a duricrust by iron oxides. The iron oxide cements are derived from the oxidation of percolating solutions of iron salts. Ferricretes form at or near the land surface and may contain non-local sediments that have been transported from outside the immediate area of the deposit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ferricrete";
        }
    }

    return nullptr;
}

string _Geology::Terms::FerromagnesianMineral(string text)
{
    string model = "llama3";
    string definition = "A mafic mineral or rock is a silicate mineral or igneous rock rich in magnesium and iron. Most mafic minerals are dark in color, and common rock-forming mafic minerals include olivine, pyroxene, amphibole, and biotite. Common mafic rocks include basalt, diabase and gabbro. Mafic rocks often also contain calcium-rich varieties of plagioclase feldspar. Mafic materials can also be described as ferromagnesian.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ferromagnesian Mineral";
        }
    }

    return nullptr;
}

string _Geology::Terms::FissionTrackDating(string text)
{
    string model = "llama3";
    string definition = "Fission track dating is a radiometric dating technique based on analyses of the damage trails, or tracks, left by fission fragments in certain uranium-bearing minerals and glasses. Fission-track dating is a relatively simple method of radiometric dating that has made a significant impact on understanding the thermal history of continental crust, the timing of volcanic events, and the source and age of different archeological artifacts. The method involves using the number of fission events produced from the spontaneous decay of uranium-238 in common accessory minerals to date the time of rock cooling below closure temperature. Fission tracks are sensitive to heat, and therefore the technique is useful at unraveling the thermal evolution of rocks and minerals. Most current research using fission tracks is aimed at: a) understanding the evolution of mountain belts; b) determining the source or provenance of sediments; c) studying the thermal evolution of basins; d) determining the age of poorly dated strata; and e) dating and provenance determination of archeological artifacts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fission Track Dating";
        }
    }

    return nullptr;
}

string _Geology::Terms::FlandrianInterglacial(string text)
{
    string model = "llama3";
    string definition = "The Flandrian interglacial or stage is the regional name given by geologists and archaeologists in the British Isles to the period from around 12,000 years ago, at the end of the last glacial period, to the present day. As such, it is in practice identical in span to the Holocene (the present geological epoch).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Flandrian Interglacial";
        }
    }

    return nullptr;
}

string _Geology::Terms::FoldGeology(string text)
{
    string model = "llama3";
    string definition = "In structural geology, a fold is a stack of originally planar surfaces, such as sedimentary strata, that are bent or curved (\"folded\") during permanent deformation. Folds in rocks vary in size from microscopic crinkles to mountain-sized folds. They occur as single isolated folds or in periodic sets (known as fold trains). Synsedimentary folds are those formed during sedimentary deposition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fold Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::FoliationGeology(string text)
{
    string model = "llama3";
    string definition = "Foliation in geology refers to repetitive layering in metamorphic rocks. Each layer can be as thin as a sheet of paper, or over a meter in thickness. The word comes from the Latin folium, meaning \"leaf\", and refers to the sheet-like planar structure. It is caused by shearing forces (pressures pushing different sections of the rock in different directions), or differential pressure (higher pressure from one direction than in others). The layers form parallel to the direction of the shear, or perpendicular to the direction of higher pressure. Nonfoliated metamorphic rocks are typically formed in the absence of significant differential pressure or shear. Foliation is common in rocks affected by the regional metamorphic compression typical of areas of mountain belt formation (orogenic belts).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Foliation Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::Fossil(string text)
{
    string model = "llama3";
    string definition = " is any preserved remains, impression, or trace of any once-living thing from a past geological age. Examples include bones, shells, exoskeletons, stone imprints of animals or microbes, objects preserved in amber, hair, petrified wood and DNA remnants. The totality of fossils is known as the fossil record. Though the fossil record is incomplete, numerous studies have demonstrated that there is enough information available to give a good understanding of the pattern of diversification of life on Earth. In addition, the record can predict and fill gaps such as the discovery of Tiktaalik in the arctic of Canada.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fossil";
        }
    }

    return nullptr;
}

string _Geology::Terms::Fossiliferous(string text)
{
    string model = "llama3";
    string definition = "Bearing or being composed of fossils in rocks or strata.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fossiliferous";
        }
    }

    return nullptr;
}

string _Geology::Terms::Fossilization(string text)
{
    string model = "llama3";
    string definition = "Recrystallization, Replacement, Permineralization, Phosphatization, Pyritization, Silicification.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fossilization";
        }
    }

    return nullptr;
}

string _Geology::Terms::Fracture(string text)
{
    string model = "llama3";
    string definition = "he appearance of a crack or complete separation of an object or material into two or more pieces under the action of stress. The fracture of a solid usually occurs due to the development of certain displacement discontinuity surfaces within the solid. If a displacement develops perpendicular to the surface, it is called a normal tensile crack or simply a crack; if a displacement develops tangentially, it is called a shear crack, slip band, or dislocation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fracture";
        }
    }

    return nullptr;
}

string _Geology::Terms::Fumarole(string text)
{
    string model = "llama3";
    string definition = "A fumarole (or fumerole) is a vent in the surface of the Earth or another rocky planet from which hot volcanic gases and vapors are emitted, without any accompanying liquids or solids. Fumaroles are characteristic of the late stages of volcanic activity, but fumarole activity can also precede a volcanic eruption and has been used for eruption prediction. Most fumaroles die down within a few days or weeks of the end of an eruption, but a few are persistent, lasting for decades or longer. An area containing fumaroles is known as a fumarole field.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fumarole";
        }
    }

    return nullptr;
}

string _Geology::Terms::Ga(string text)
{
    string model = "llama3";
    string definition = "A non-standard but widely used abbreviation for one billion (1,000,000,000) years, using the metric prefix G (for \"Giga\") to indicate a quantity of one billion. When not otherwise qualified, it usually indicates 1,000,000,000 years Before Present (or 1,000,000,000 years ago).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ga";
        }
    }

    return nullptr;
}

string _Geology::Terms::Gabbro(string text)
{
    string model = "llama3";
    string definition = "a phaneritic (coarse-grained and magnesium- and iron-rich), mafic intrusive igneous rock formed from the slow cooling magma into a holocrystalline mass deep beneath the Earth\'s surface. Slow-cooling, coarse-grained gabbro is chemically equivalent to rapid-cooling, fine-grained basalt. Much of the Earth\'s oceanic crust is made of gabbro, formed at mid-ocean ridges. Gabbro is also found as plutons associated with continental volcanism. Due to its variant nature, the term gabbro may be applied loosely to a wide range of intrusive rocks, many of which are merely \"gabbroic\". By rough analogy, gabbro is to basalt as granite is to rhyolite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gabbro";
        }
    }

    return nullptr;
}

string _Geology::Terms::Garnets(string text)
{
    string model = "llama3";
    string definition = "are a group of silicate minerals that have been used since the Bronze Age as gemstones and abrasives. All species of garnets possess similar physical properties and crystal forms, but differ in chemical composition. The different species are pyrope, almandine, spessartine, grossular (varieties of which are hessonite or cinnamon-stone and tsavorite), uvarovite and andradite. The garnets make up two solid solution series: pyrope-almandine-spessartine (pyralspite).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Garnets";
        }
    }

    return nullptr;
}

string _Geology::Terms::Gastrolith(string text)
{
    string model = "llama3";
    string definition = "A gastrolith, also called a stomach stone or gizzard stone, is a rock held inside a gastrointestinal tract. Gastroliths in some species are retained in the muscular gizzard and used to grind food in animals lacking suitable grinding teeth. In other species the rocks are ingested and pass through the digestive system and are frequently replaced. The grain size depends upon the size of the animal and the gastrolith\'s role in digestion. Other species use gastroliths as ballast. Particles ranging in size from sand to cobble have been documented.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gastrolith";
        }
    }

    return nullptr;
}

string _Geology::Terms::Gemology(string text)
{
    string model = "llama3";
    string definition = "Gemology or gemmology is the science dealing with natural and artificial gemstone materials. It is a specific interdisciplinary branch of mineralogy. Some jewelers (and many non-jewelers) are academically trained gemologists and are qualified to identify and evaluate gems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gemology";
        }
    }

    return nullptr;
}

string _Geology::Terms::Gemstone(string text)
{
    string model = "llama3";
    string definition = "A gemstone (also called a fine gem, jewel, precious stone, semiprecious stone, or simply gem) is a piece of mineral crystal which, when cut or polished, is used to make jewelry or other adornments. Certain rocks (such as lapis lazuli, opal, and obsidian) and occasionally organic materials that are not minerals (such as amber, jet, and pearl) may also be used for jewelry and are therefore often considered to be gemstones as well. Most gemstones are hard, but some softer minerals such as brazilianite may be used in jewelry because of their color or luster or other physical properties that have aesthetic value. However, generally speaking, soft minerals are not typically used as gemstones by virtue of their brittleness and lack of durability.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gemstone";
        }
    }

    return nullptr;
}

string _Geology::Terms::Geogenic(string text)
{
    string model = "llama3";
    string definition = "Of geologic origin - Resulting from naturally occurring geological processes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geogenic";
        }
    }

    return nullptr;
}

string _Geology::Terms::GeologicMap(string text)
{
    string model = "llama3";
    string definition = "A geologic map or geological map is a special-purpose map made to show various geological features. Rock units or geologic strata are shown by color or symbols. Bedding planes and structural features such as faults, folds, are shown with strike and dip or trend and plunge symbols which give three-dimensional orientations features.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geologic Map";
        }
    }

    return nullptr;
}

string _Geology::Terms::GeologicTimeScale(string text)
{
    string model = "llama3";
    string definition = "The geologic time scale or geological time scale (GTS) is a representation of time based on the rock record of Earth. It is a system of chronological dating that uses chronostratigraphy (the process of relating strata to time) and geochronology (a scientific branch of geology that aims to determine the age of rocks). It is used primarily by Earth scientists (including geologists, paleontologists, geophysicists, geochemists, and paleoclimatologists) to describe the timing and relationships of events in geologic history. The time scale has been developed through the study of rock layers and the observation of their relationships and identifying features such as lithologies, paleomagnetic properties, and fossils. The definition of standardised international units of geologic time is the responsibility of the International Commission on Stratigraphy (ICS), a constituent body of the International Union of Geological Sciences (IUGS), whose primary objective is to precisely define global chronostratigraphic units of the International Chronostratigraphic Chart (ICC) that are used to define divisions of geologic time. The chronostratigraphic divisions are in turn used to define geochronologic units.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geologic Time Scale";
        }
    }

    return nullptr;
}

string _Geology::Terms::Geology(string text)
{
    string model = "llama3";
    string definition = "a branch of natural science concerned with the Earth and other astronomical objects, the rocks of which they are composed, and the processes by which they change over time. Modern geology significantly overlaps all other Earth sciences, including hydrology. It is integrated with Earth system science and planetary science.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::Geosyncline(string text)
{
    string model = "llama3";
    string definition = "A geosyncline (originally called a geosynclinal) is an obsolete geological concept to explain orogens, which was developed in the late 19th and early 20th centuries, before the theory of plate tectonics was envisaged. A geosyncline was described as a giant downward fold in the Earth\'s crust, with associated upward folds called geanticlines (or geanticlinals), that preceded the climax phase of orogenic deformation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geosyncline";
        }
    }

    return nullptr;
}

string _Geology::Terms::Glass(string text)
{
    string model = "llama3";
    string definition = "Glass is an amorphous (non-crystalline) solid. Because it is often transparent and chemically inert, glass has found widespread practical, technological, and decorative use in window panes, tableware, and optics. Some common objects made of glass are named after the material, e.g. \"glass\", \"glasses\", \"magnifying glass\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Glass";
        }
    }

    return nullptr;
}

string _Geology::Terms::Glauconite(string text)
{
    string model = "llama3";
    string definition = "Glauconite is an iron potassium phyllosilicate (mica group) mineral of characteristic green color which is very friable and has very low weathering resistance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Glauconite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Gneiss(string text)
{
    string model = "llama3";
    string definition = "a common and widely distributed type of metamorphic rock. It is formed by high-temperature and high-pressure metamorphic processes acting on formations composed of igneous or sedimentary rocks. This rock is formed under pressures anywhere from 2 to 15 kbar, sometimes even more, and temperatures over 300C (572F). Gneiss nearly always shows a banded texture characterized by alternating darker and lighter colored bands and without a distinct cleavage.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gneiss";
        }
    }

    return nullptr;
}

string _Geology::Terms::Gondwanaland(string text)
{
    string model = "llama3";
    string definition = "a large landmass, sometimes referred to as a supercontinent. The remnants of Gondwana make up around two-thirds of today\'s continental area, including South America, Africa, Antarctica, Australia, Zealandia, Arabia, and the Indian Subcontinent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gondwanaland";
        }
    }

    return nullptr;
}

string _Geology::Terms::Graben(string text)
{
    string model = "llama3";
    string definition = "a depressed block of the crust of a planet or moon, bordered by parallel normal faults.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Graben";
        }
    }

    return nullptr;
}

string _Geology::Terms::Granite(string text)
{
    string model = "llama3";
    string definition = "a coarse-grained (phaneritic) intrusive igneous rock composed mostly of quartz, alkali feldspar, and plagioclase. It forms from magma with a high content of silica and alkali metal oxides that slowly cools and solidifies underground. It is common in the continental crust of Earth, where it is found in igneous intrusions. These range in size from dikes only a few centimeters across to batholiths exposed over hundreds of square kilometers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Granite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Granitoid(string text)
{
    string model = "llama3";
    string definition = "A granitoid is a generic term for a diverse category of coarse-grained igneous rocks that consist predominantly of quartz, plagioclase, and alkali feldspar. Granitoids range from plagioclase-rich tonalites to alkali-rich syenites and from quartz-poor monzonites to quartz-rich quartzolites. As only two of the three defining mineral groups (quartz, plagioclase, and alkali feldspar) need to be present for the rock to be called a granitoid, foid-bearing rocks, which predominantly contain feldspars but no quartz, are also granitoids. The terms granite and granitic rock are often used interchangeably for granitoids; however, granite is just one particular type of granitoid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Granitoid";
        }
    }

    return nullptr;
}

static string Granoblastic(string text);

string _Geology::Terms::Granoblastic(string text)
{
    string model = "llama3";
    string definition = "Granoblastic is an adjective describing an anhedral phaneritic equi-granular metamorphic rock texture. Granoblastic texture is typical of quartzite, marble, charnockites and other non-foliated metamorphic rocks without porphyroblasts. Characteristics defining granoblastic texture include: grains visible to the unaided eye, sutured boundaries, and approximately equidimensional grains. The grain boundaries intersect at 120 degrees triple junctions under ideal conditions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Granoblastic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Granodiorite(string text)
{
    string model = "llama3";
    string definition = "a coarse-grained (phaneritic) intrusive igneous rock similar to granite, but containing more plagioclase feldspar than orthoclase feldspar. The term banatite is sometimes used informally for various rocks ranging from granite to diorite, including granodiorite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Granodiorite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Granulometry(string text)
{
    string model = "llama3";
    string definition = "Grain size (or particle size) is the diameter of individual grains of sediment, or the lithified particles in clastic rocks. The term may also be applied to other granular materials. This is different from the crystallite size, which refers to the size of a single crystal inside a particle or grain. A single grain can be composed of several crystals. Granular material can range from very small colloidal particles, through clay, silt, sand, gravel, and cobbles, to boulders.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Granulometry";
        }
    }

    return nullptr;
}

string _Geology::Terms::Gravel(string text)
{
    string model = "llama3";
    string definition = "a loose aggregation of rock fragments. Gravel occurs naturally on Earth as a result of sedimentary and erosive geological processes; it is also produced in large quantities commercially as crushed stone.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gravel";
        }
    }

    return nullptr;
}

string _Geology::Terms::Graywacke(string text)
{
    string model = "llama3";
    string definition = "signifying a grey, earthy rock) is a variety of sandstone generally characterized by its hardness (6-7 on Mohs scale), dark color, and poorly sorted angular grains of quartz, feldspar, and small rock fragments or sand-size lithic fragments set in a compact, clay-fine matrix. It is a texturally immature sedimentary rock generally found in Paleozoic strata. The larger grains can be sand- to gravel-sized, and matrix materials generally constitute more than 15% of the rock by volume.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Graywacke";
        }
    }

    return nullptr;
}

string _Geology::Terms::Greenstone(string text)
{
    string model = "llama3";
    string definition = "zones of variably metamorphosed mafic to ultramafic volcanic sequences with associated sedimentary rocks that occur within Archaean and Proterozoic cratons between granite and gneiss bodies. The name comes from the green hue imparted by the colour of the metamorphic minerals within the mafic rocks: The typical green minerals are chlorite, actinolite, and other green amphiboles. Greenstone belts also often contain ore deposits of gold, silver, copper, zinc, and lead.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Greenstone";
        }
    }

    return nullptr;
}

string _Geology::Terms::Grus(string text)
{
    string model = "llama3";
    string definition = "an accumulation of angular, coarse-grained fragments (particles of sand and gravel) resulting from the granular disintegration by the processes of chemical and mechanical weathering of crystalline rocks (most notably granitoids) generally in an arid or semiarid region. Grus sand, when cemented into a sandstone, will form an arkose.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Grus";
        }
    }

    return nullptr;
}

string _Geology::Terms::Habit(string text)
{
    string model = "llama3";
    string definition = "See crystal habit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Habit";
        }
    }

    return nullptr;
}

string _Geology::Terms::HalfLife(string text)
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

string _Geology::Terms::Hardpan(string text)
{
    string model = "llama3";
    string definition = "In soil science, agriculture and gardening, hardpan or soil pan is a dense layer of soil, usually found below the uppermost topsoil layer. There are different types of hardpan, all sharing the general characteristic of being a distinct soil layer that is largely impervious to water. Some hardpans are formed by deposits in the soil that fuse and bind the soil particles. These deposits can range from dissolved silica to matrices formed from iron oxides and calcium carbonate. Others are man-made, such as hardpan formed by compaction from repeated plowing, particularly with moldboard plows, or by heavy traffic or pollution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hardpan";
        }
    }

    return nullptr;
}

string _Geology::Terms::Hemicrystalline(string text)
{
    string model = "llama3";
    string definition = "Having the properties of certain rocks of igneous origin which contain some interstitial glass in addition to crystalline minerals. Contrast holocrystalline.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hemicrystalline";
        }
    }

    return nullptr;
}

string _Geology::Terms::Hinge(string text)
{
    string model = "llama3";
    string definition = "A hinge is a mechanical bearing that connects two solid objects, typically allowing only a limited angle of rotation between them. Two objects connected by an ideal hinge rotate relative to each other about a fixed axis of rotation, with all other translations or rotations prevented; thus a hinge has one degree of freedom. Hinges may be made of flexible material or moving components. In biology, many joints function as hinges, such as the elbow joint.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hinge";
        }
    }

    return nullptr;
}

string _Geology::Terms::HingeLine(string text)
{
    string model = "llama3";
    string definition = "an imaginary longitudinal line along the dorsal edge of the shell of a bivalve mollusk where the two valves hinge or articulate. The hinge line can easily be perceived in these images of a mussel shell and an ark shell.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hinge Line";
        }
    }

    return nullptr;
}

string _Geology::Terms::Holocrystalline(string text)
{
    string model = "llama3";
    string definition = "Having the properties of those igneous rocks in which all of the components are crystalline; glass is absent. Contrast hemicrystalline.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Holocrystalline";
        }
    }

    return nullptr;
}

string _Geology::Terms::Hornblende(string text)
{
    string model = "llama3";
    string definition = "Hornblende is a complex inosilicate series of minerals. It is not a recognized mineral in its own right, but the name is used as a general or field term, to refer to a dark amphibole. Hornblende minerals are common in igneous and metamorphic rocks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hornblende";
        }
    }

    return nullptr;
}

string _Geology::Terms::Hornfels(string text)
{
    string model = "llama3";
    string definition = "Hornfels is the group name for a set of contact metamorphic rocks that have been baked and hardened by the heat of intrusive igneous masses and have been rendered massive, hard, splintery, and in some cases exceedingly tough and durable. These properties are caused by fine grained non-aligned crystals with platy or prismatic habits, characteristic of metamorphism at high temperature but without accompanying deformation. The term is derived from the German word Hornfels, meaning \"hornstone\", because of its exceptional toughness and texture both reminiscent of animal horns. These rocks were referred to by miners in northern England as whetstones.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hornfels";
        }
    }

    return nullptr;
}

string _Geology::Terms::Horst(string text)
{
    string model = "llama3";
    string definition = "In physical geography and geology, a horst is a raised fault block bounded by normal faults. Horsts are typically found together with grabens. While a horst is lifted or remains stationary, the grabens on either side subside. This is often caused by extensional forces pulling apart the crust. Horsts may represent features such as plateaus, mountains, or ridges on either side of a valley. Horsts can range in size from small fault blocks up to large regions of stable continent that have not been folded or warped by tectonic forces.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Horst";
        }
    }

    return nullptr;
}

string _Geology::Terms::HotSpring(string text)
{
    string model = "llama3";
    string definition = "A hot spring, hydrothermal spring, or geothermal spring is a spring produced by the emergence of geothermally heated groundwater onto the surface of the Earth. The groundwater is heated either by shallow bodies of magma (molten rock) or by circulation through faults to hot rock deep in the Earth\'s crust.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hot Spring";
        }
    }

    return nullptr;
}

string _Geology::Terms::Hydrothermal(string text)
{
    string model = "llama3";
    string definition = "its most general sense is the circulation of hot water. Hydrothermal circulation occurs most often in the vicinity of sources of heat within the Earth\'s crust. In general, this occurs near volcanic activity, but can occur in the shallow to mid crust along deeply penetrating fault irregularities or in the deep crust related to the intrusion of granite, or as the result of orogeny or metamorphism. Hydrothermal circulation often results in hydrothermal mineral deposits.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydrothermal";
        }
    }

    return nullptr;
}

string _Geology::Terms::HydrothermalVent(string text)
{
    string model = "llama3";
    string definition = "Hydrothermal vents are fissures on the seabed from which geothermally heated water discharges. They are commonly found near volcanically active places, areas where tectonic plates are moving apart at mid-ocean ridges, ocean basins, and hotspots. The dispersal of hydrothermal fluids throughout the global ocean at active vent sites creates hydrothermal plumes. Hydrothermal deposits are rocks and mineral ore deposits formed by the action of hydrothermal vents.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydrothermal Vent";
        }
    }

    return nullptr;
}

string _Geology::Terms::Ichnology(string text)
{
    string model = "llama3";
    string definition = "The study of such trace fossils is ichnology";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ichnology";
        }
    }

    return nullptr;
}

string _Geology::Terms::Idiomorphic(string text)
{
    string model = "llama3";
    string definition = "Bounded by the crystal faces peculiar to the species, used of minerals. Synonymous with euhedral.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Idiomorphic";
        }
    }

    return nullptr;
}

string _Geology::Terms::IgneousRock(string text)
{
    string model = "llama3";
    string definition = "Igneous rock (igneous from Latin igneus \'fiery\'), or magmatic rock, is one of the three main rock types, the others being sedimentary and metamorphic. Igneous rocks are formed through the cooling and solidification of magma or lava.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Igneous Rock";
        }
    }

    return nullptr;
}

string _Geology::Terms::Ignimbrite(string text)
{
    string model = "llama3";
    string definition = "Ignimbrite is a type of volcanic rock, consisting of hardened tuff. Ignimbrites form from the deposits of pyroclastic flows, which are a hot suspension of particles and gases flowing rapidly from a volcano, driven by being denser than the surrounding atmosphere.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ignimbrite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Ilmenite(string text)
{
    string model = "llama3";
    string definition = "An oxide of iron and titanium, crystallising in the trigonal system; a widespread accessory mineral in igneous rocks, especially those of basic composition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ilmenite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Illite(string text)
{
    string model = "llama3";
    string definition = "Illite, also called hydromica or hydromuscovite, is a group of closely related non-expanding clay minerals. Illite is a secondary mineral precipitate, and an example of a phyllosilicate, or layered alumino-silicate. Its structure is a 2:1 sandwich of silica tetrahedron (T) - alumina octahedron (O) - silica tetrahedron (T) layers. The space between this T-O-T sequence of layers is occupied by poorly hydrated potassium cations which are responsible for the absence of swelling. Structurally, illite is quite similar to muscovite with slightly more silicon, magnesium, iron, and water and slightly less tetrahedral aluminium and interlayer potassium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Illite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Indurate(string text)
{
    string model = "llama3";
    string definition = "In materials science, friability, the condition of being friable, describes the tendency of a solid substance to break into smaller pieces under stress or contact, especially by rubbing. The opposite of friable is indurate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Indurate";
        }
    }

    return nullptr;
}

string _Geology::Terms::Interbedded(string text)
{
    string model = "llama3";
    string definition = "In geology, interbedding occurs when beds (layers of rock) of a particular lithology lie between or alternate with beds of a different lithology. For example, sedimentary rocks may be interbedded if there were sea level variations in their sedimentary depositional environment. Intercalation is a special case of interbedding where a layer is variably inserted into an already existing sequence; or where two separate depositional environments in close spatial proximity migrate alternately across the contact.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Interbedded";
        }
    }

    return nullptr;
}

string _Geology::Terms::Intrusion(string text)
{
    string model = "llama3";
    string definition = "In geology, an igneous intrusion (or intrusive body or simply intrusion) is a body of intrusive igneous rock that forms by crystallization of magma slowly cooling below the surface of the Earth. Intrusions have a wide variety of forms and compositions, illustrated by examples like the Palisades Sill of New York and New Jersey; the Henry Mountains of Utah; the Bushveld Igneous Complex of South Africa; Shiprock in New Mexico; the Ardnamurchan intrusion in Scotland; and the Sierra Nevada Batholith of California.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intrusion";
        }
    }

    return nullptr;
}

string _Geology::Terms::IslandArc(string text)
{
    string model = "llama3";
    string definition = "Island arcs are long chains of active volcanoes with intense seismic activity found along convergent tectonic plate boundaries. Most island arcs originate on oceanic crust and have resulted from the descent of the lithosphere into the mantle along the subduction zone. They are the principal way by which continental growth is achieved.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Island Arc";
        }
    }

    return nullptr;
}

string _Geology::Terms::Isomorphic(string text)
{
    string model = "llama3";
    string definition = "In chemistry, isomorphism has meanings both at the level of crystallography and at a molecular level. In crystallography, crystals are isomorphous if they have identical symmetry and if the atomic positions can be described with a set of parameters (unit cell dimensions and fractional coordinates) whose numerical values differ only slightly.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Isomorphic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Isotope(string text)
{
    string model = "llama3";
    string definition = "Isotopes are distinct nuclear species (or nuclides) of the same chemical element. They have the same atomic number (number of protons in their nuclei) and position in the periodic table (and hence belong to the same chemical element), but different nucleon numbers (mass numbers) due to different numbers of neutrons in their nuclei. While all isotopes of a given element have similar chemical properties, they have different atomic masses and physical properties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Geology::Terms::JointGeology(string text)
{
    string model = "llama3";
    string definition = "A joint is a break (fracture) of natural origin in a layer or body of rock that lacks visible or measurable movement parallel to the surface (plane) of the fracture (\"Mode 1\" Fracture). Although joints can occur singly, they most frequently appear as joint sets and systems. A joint set is a family of parallel, evenly spaced joints that can be identified through mapping and analysis of their orientations, spacing, and physical properties. A joint system consists of two or more intersecting joint sets. The distinction between joints and faults hinges on the terms visible or measurable, a difference that depends on the scale of observation. Faults differ from joints in that they exhibit visible or measurable lateral movement between the opposite surfaces of the fracture (\"Mode 2\" and \"Mode 3\" Fractures). Thus a joint may be created by either strict movement of a rock layer or body perpendicular to the fracture or by varying degrees of lateral displacement parallel to the surface (plane) of the fracture that remains \"invisible\" at the scale of observation. Joints are among the most universal geologic structures, found in almost every exposure of rock. They vary greatly in appearance, dimensions, and arrangement, and occur in quite different tectonic environments. Often, the specific origin of the stresses that created certain joints and associated joint sets can be quite ambiguous, unclear, and sometimes controversial. The most prominent joints occur in the most well-consolidated, lithified, and highly competent rocks, such as sandstone, limestone, quartzite, and granite. Joints may be open fractures or filled by various materials. Joints infilled by precipitated minerals are called veins and joints filled by solidified magma are called dikes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Joint Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::Jurassic(string text)
{
    string model = "llama3";
    string definition = "a geologic period and stratigraphic system that spanned from the end of the Triassic Period 201.4 million years ago (Mya) to the beginning of the Cretaceous Period, approximately 145 Mya. The Jurassic constitutes the middle period of the Mesozoic Era as well as the eighth period of the Phanerozoic Eon and is named after the Jura Mountains, where limestone strata from the period were first identified.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Jurassic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Ka(string text)
{
    string model = "llama3";
    string definition = "A non-standard but widely used abbreviation for one thousand (1,000) years, using the metric prefix K (for \"Kilo\") to indicate a quantity of one thousand. When not otherwise qualified, it usually indicates 1,000 years Before Present (or 1,000 years ago).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ka";
        }
    }

    return nullptr;
}

string _Geology::Terms::Kame(string text)
{
    string model = "llama3";
    string definition = "A kame, or knob, is a glacial landform, an irregularly shaped hill or mound composed of sand, gravel and till that accumulates in a depression on a retreating glacier, and is then deposited on the land surface with further melting of the glacier. Kames are often associated with kettles, and this is referred to as kame and kettle or knob and kettle topography. The word kame is a variant of comb (kame, or kaim is the Old Scottish word meaning \'comb\'), which has the meaning \"crest\" among others. The geological term was introduced by Thomas Jamieson in 1874.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kame";
        }
    }

    return nullptr;
}

string _Geology::Terms::Kaolinite(string text)
{
    string model = "llama3";
    string definition = "also called kaolin) is a clay mineral, with the chemical composition Al2Si2O5(OH)4. It is a layered silicate mineral, with one tetrahedral sheet of silica (SiO4) linked through oxygen atoms to one octahedral sheet of alumina (AlO6). Kaolinite is a soft, earthy, usually white, mineral (dioctahedral phyllosilicate clay), produced by the chemical weathering of aluminium silicate minerals like feldspar. It has a low shrink-swell capacity and a low cation-exchange capacity (1-15 meq/100 g). Rocks that are rich in kaolinite, and halloysite, are known as kaolin (/\'ke?.?l?n/) or china clay. In many parts of the world kaolin is colored pink-orange-red by iron oxide, giving it a distinct rust hue. Lower concentrations of iron oxide yield the white, yellow, or light orange colors of kaolin. Alternating lighter and darker layers are sometimes found, as at Providence Canyon State Park in Georgia, United States. Kaolin is an important raw material in many industries and applications. Commercial grades of kaolin are supplied and transported as powder, lumps, semi-dried noodle or slurry. Global production of kaolin in 2021 was estimated to be 45 million tonnes, with a total market value of US $4.24 billion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kaolinite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Karst(string text)
{
    string model = "llama3";
    string definition = "Karst is a topography formed from the dissolution of soluble carbonate rocks such as limestone and dolomite. It is characterized by features like poljes above and drainage systems with sinkholes and caves underground. There is some evidence that karst may occur in more weathering-resistant rocks such as quartzite given the right conditions. Subterranean drainage may limit surface water, with few to no rivers or lakes. In regions where the dissolved bedrock is covered (perhaps by debris) or confined by one or more superimposed non-soluble rock strata, distinctive karst features may occur only at subsurface levels and can be totally missing above ground. The study of paleokarst (buried karst in the stratigraphic column) is important in petroleum geology because as much as 50% of the world\'s hydrocarbon reserves are hosted in carbonate rock, and much of this is found in porous karst systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Karst";
        }
    }

    return nullptr;
}

string _Geology::Terms::Kettle(string text)
{
    string model = "llama3";
    string definition = "A kettle (also known as a kettle hole, kettlehole, or pothole) is a depression or hole in an outwash plain formed by retreating glaciers or draining floodwaters. The kettles are formed as a result of blocks of dead ice left behind by retreating glaciers, which become surrounded by sediment deposited by meltwater streams as there is increased friction. The ice becomes buried in the sediment and when the ice melts, a depression is left called a kettle hole, creating a dimpled appearance on the outwash plain. Lakes often fill these kettles; these are called kettle hole lakes. Another source is the sudden drainage of an ice-dammed lake and when the block melts, the hole it leaves behind is a kettle. As the ice melts, ramparts can form around the edge of the kettle hole. The lakes that fill these holes are seldom more than 10 m (33 ft) deep and eventually fill with sediment. In acidic conditions, a kettle bog may form but in alkaline conditions, it will be kettle peatland.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kettle";
        }
    }

    return nullptr;
}

string _Geology::Terms::Kink(string text)
{
    string model = "llama3";
    string definition = "A tight curl, twist, or bend in a rock band. See also folding and buckling.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kink";
        }
    }

    return nullptr;
}

string _Geology::Terms::KinkBand(string text)
{
    string model = "llama3";
    string definition = "An asymmetric, linear zone of deformation characterised by a tight curled, twisted, or bended rock band. Kink bands may also occur as conjugated sets.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kink Band";
        }
    }

    return nullptr;
}

string _Geology::Terms::Kyanite(string text)
{
    string model = "llama3";
    string definition = "Kyanite is a typically blue aluminosilicate mineral, found in aluminium-rich metamorphic pegmatites and sedimentary rock. It is the high pressure polymorph of andalusite and sillimanite, and the presence of kyanite in metamorphic rocks generally indicates metamorphism deep in the Earth\'s crust. Kyanite is also known as disthene or cyanite. Kyanite is strongly anisotropic, in that its hardness varies depending on its crystallographic direction. In kyanite, this anisotropism can be considered an identifying characteristic, along with its characteristic blue color. Its name comes from the same origin as that of the color cyan, being derived from the Ancient Greek word. This is typically rendered into English as kyanos or kuanos and means \"dark blue.\" Kyanite is used as a raw material in the manufacture of ceramics and abrasives, and it is an important index mineral used by geologists to trace metamorphic zones.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kyanite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Lacuna(string text)
{
    string model = "llama3";
    string definition = "A time-stratigraphic unit representing the gap in the stratigraphic record. Specifically the missing interval at an unconformity, representing the interpreted space-time value of both hiatus (period of non-deposition), and degradation vacuity (period of erosion).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lacuna";
        }
    }

    return nullptr;
}

string _Geology::Terms::Lamprophyre(string text)
{
    string model = "llama3";
    string definition = "Lamprophyres are uncommon, small-volume ultrapotassic igneous rocks primarily occurring as dikes, lopoliths, laccoliths, stocks, and small intrusions. They are alkaline silica-undersaturated mafic or ultramafic rocks with high magnesium oxide, >3% potassium oxide, high sodium oxide, and high nickel and chromium. Lamprophyres occur throughout all geologic eras. Archaean examples are commonly associated with lode gold deposits. Cenozoic examples include magnesian rocks in Mexico and South America, and young ultramafic lamprophyres from Gympie in Australia with 18.5% MgO at ~250 Ma.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lamprophyre";
        }
    }

    return nullptr;
}

string _Geology::Terms::Landslide(string text)
{
    string model = "llama3";
    string definition = "Landslides, also known as landslips, or rockslides, are several forms of mass wasting that may include a wide range of ground movements, such as rockfalls, mudflows, shallow or deep-seated slope failures and debris flows. Landslides occur in a variety of environments, characterized by either steep or gentle slope gradients, from mountain ranges to coastal cliffs or even underwater, in which case they are called submarine landslides. Gravity is the primary driving force for a landslide to occur, but there are other factors affecting slope stability that produce specific conditions that make a slope prone to failure. In many cases, the landslide is triggered by a specific event (such as a heavy rainfall, an earthquake, a slope cut to build a road, and many others), although this is not always identifiable. Landslides are frequently made worse by human development (such as urban sprawl) and resource exploitation (such as mining and deforestation). Land degradation frequently leads to less stabilization of soil by vegetation. Additionally, global warming caused by climate change and other human impact on the environment, can increase the frequency of natural events (such as extreme weather) which trigger landslides. Landslide mitigation describes the policy and practices for reducing the risk of human impacts of landslides, reducing the risk of natural disaster.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Landslide";
        }
    }

    return nullptr;
}

string _Geology::Terms::LargeIgneousProvince(string text)
{
    string model = "llama3";
    string definition = "A large igneous province (LIP) is an extremely large accumulation of igneous rocks, including intrusive (sills, dikes) and extrusive (lava flows, tephra deposits), arising when magma travels through the crust towards the surface. The formation of LIPs is variously attributed to mantle plumes or to processes associated with divergent plate tectonics. The formation of some of the LIPs in the past 500 million years coincide in time with mass extinctions and rapid climatic changes, which has led to numerous hypotheses about causal relationships. LIPs are fundamentally different from any other currently active volcanoes or volcanic systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Large Igneous Province";
        }
    }

    return nullptr;
}

string _Geology::Terms::Lava(string text)
{
    string model = "llama3";
    string definition = "Lava is molten or partially molten rock (magma) that has been expelled from the interior of a terrestrial planet (such as Earth) or a moon onto its surface. Lava may be erupted at a volcano or through a fracture in the crust, on land or underwater, usually at temperatures from 800 to 1,200C (1,470 to 2,190F). The volcanic rock resulting from subsequent cooling is also often called lava.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lava";
        }
    }

    return nullptr;
}

string _Geology::Terms::Leucocratic(string text)
{
    string model = "llama3";
    string definition = "A term used to denote a light colour in igneous rocks, due to a high content of felsic minerals and a correspondingly small amount of dark, heavy silicates.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Leucocratic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Limestone(string text)
{
    string model = "llama3";
    string definition = "Limestone (calcium carbonate CaCO3) is a type of carbonate sedimentary rock which is the main source of the material lime. It is composed mostly of the minerals calcite and aragonite, which are different crystal forms of CaCO3. Limestone forms when these minerals precipitate out of water containing dissolved calcium. This can take place through both biological and nonbiological processes, though biological processes, such as the accumulation of corals and shells in the sea, have likely been more important for the last 540 million years. Limestone often contains fossils which provide scientists with information on ancient environments and on the evolution of life.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Limestone";
        }
    }

    return nullptr;
}

string _Geology::Terms::Liquefaction(string text)
{
    string model = "llama3";
    string definition = "n materials science, liquefaction is a process that generates a liquid from a solid or a gas or that generates a non-liquid phase which behaves in accordance with fluid dynamics. It occurs both naturally and artificially. As an example of the latter, a \"major commercial application of liquefaction is the liquefaction of air to allow separation of the constituents, such as oxygen, nitrogen, and the noble gases.\" Another is the conversion of solid coal into a liquid form usable as a substitute for liquid fuels.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Liquefaction";
        }
    }

    return nullptr;
}

string _Geology::Terms::LithicFragments(string text)
{
    string model = "llama3";
    string definition = "Lithic fragments, or lithics, are pieces of other rocks that have been eroded down to sand size and now are sand grains in a sedimentary rock. They were first described and named (in their modern definitions) by Bill Dickinson in 1970. Lithic fragments can be derived from sedimentary, igneous or metamorphic rocks. A lithic fragment is defined using the Gazzi-Dickinson point-counting method and being in the sand-size fraction. Sand grains in sedimentary rocks that are fragments of larger rocks that are not identified using the Gazzi-Dickinson method are usually called rock fragments instead of lithic fragments. Sandstones rich in lithic fragments are called lithic sandstones.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lithic Fragments";
        }
    }

    return nullptr;
}

string _Geology::Terms::Lithification(string text)
{
    string model = "llama3";
    string definition = "Lithification (from the Ancient Greek word lithos meaning \'rock\' and the Latin-derived suffix -ific) is the process in which sediments compact under pressure, expel connate fluids, and gradually become solid rock. Essentially, lithification is a process of porosity destruction through compaction and cementation. Lithification includes all the processes which convert unconsolidated sediments into sedimentary rocks. Petrifaction, though often used as a synonym, is more specifically used to describe the replacement of organic material by silica in the formation of fossils.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lithification";
        }
    }

    return nullptr;
}

string _Geology::Terms::Lithology(string text)
{
    string model = "llama3";
    string definition = "The lithology of a rock unit is a description of its physical characteristics visible at outcrop, in hand or core samples, or with low magnification microscopy. Physical characteristics include colour, texture, grain size, and composition. Lithology may refer to either a detailed description of these characteristics, or a summary of the gross physical character of a rock. Examples of lithologies in the second sense include sandstone, slate, basalt, or limestone. Lithology is the basis of subdividing rock sequences into individual lithostratigraphic units for the purposes of mapping and correlation between areas. In certain applications, such as site investigations, lithology is described using a standard terminology such as in the European geotechnical standard Eurocode 7.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lithology";
        }
    }

    return nullptr;
}

string _Geology::Terms::Lithotype(string text)
{
    string model = "llama3";
    string definition = "Specific types of rock classified according to the standards of lithology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lithotype";
        }
    }

    return nullptr;
}

string _Geology::Terms::Loess(string text)
{
    string model = "llama3";
    string definition = "A loess is a clastic, predominantly silt-sized sediment that is formed by the accumulation of wind-blown dust. Ten percent of Earth\'s land area is covered by loesses or similar deposits. A loess is a periglacial or aeolian (windborne) sediment, defined as an accumulation of 20% or less of clay with a balance of roughly equal parts sand and silt (with a typical grain size from 20 to 50 micrometers), often loosely cemented by calcium carbonate. Usually, they are homogeneous and highly porous and have vertical capillaries that permit the sediment to fracture and form vertical bluffs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Loess";
        }
    }

    return nullptr;
}

string _Geology::Terms::Lustre(string text)
{
    string model = "llama3";
    string definition = "Lustre (British English) or luster (American English; see spelling differences) is the way light interacts with the surface of a crystal, rock, or mineral. The word traces its origins back to the Latin lux, meaning \"light\", and generally implies radiance, gloss, or brilliance. A range of terms are used to describe lustre, such as earthy, metallic, greasy, and silky. Similarly, the term vitreous (derived from the Latin for glass, vitrum) refers to a glassy lustre. A list of these terms is given below. Lustre varies over a wide continuum, and so there are no rigid boundaries between the different types of lustre. (For this reason, different sources can often describe the same mineral differently. This ambiguity is further complicated by lustre\'s ability to vary widely within a particular mineral species). The terms are frequently combined to describe intermediate types of lustre (for example, a \"vitreous greasy\" lustre). Some minerals exhibit unusual optical phenomena, such as asterism (the display of a star-shaped luminous area) or chatoyancy (the display of luminous bands, which appear to move as the specimen is rotated). A list of such phenomena is given below.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lustre";
        }
    }

    return nullptr;
}

string _Geology::Terms::Ma(string text)
{
    string model = "llama3";
    string definition = "A non-standard but widely used abbreviation for one million (1,000,000) years, using the metric prefix M (for \"Mega\") to indicate a quantity of one million. When not otherwise qualified, it usually indicates 1,000,000 years Before Present (or 1,000,000 years ago).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ma";
        }
    }

    return nullptr;
}

string _Geology::Terms::Mafic(string text)
{
    string model = "llama3";
    string definition = "A mafic mineral or rock is a silicate mineral or igneous rock rich in magnesium and iron. Most mafic minerals are dark in color, and common rock-forming mafic minerals include olivine, pyroxene, amphibole, and biotite. Common mafic rocks include basalt, diabase and gabbro. Mafic rocks often also contain calcium-rich varieties of plagioclase feldspar. Mafic materials can also be described as ferromagnesian.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mafic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Magma(string text)
{
    string model = "llama3";
    string definition = "Magma is the molten or semi-molten natural material from which all igneous rocks are formed. Magma (sometimes colloquially but incorrectly referred to as lava) is found beneath the surface of the Earth, and evidence of magmatism has also been discovered on other terrestrial planets and some natural satellites. Besides molten rock, magma may also contain suspended crystals and gas bubbles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Magma";
        }
    }

    return nullptr;
}

string _Geology::Terms::Magnetite(string text)
{
    string model = "llama3";
    string definition = "Magnetite is a mineral and one of the main iron ores, with the chemical formula. It is one of the oxides of iron, and is ferrimagnetic; it is attracted to a magnet and can be magnetized to become a permanent magnet itself. With the exception of extremely rare native iron deposits, it is the most magnetic of all the naturally occurring minerals on Earth. Naturally magnetized pieces of magnetite, called lodestone, will attract small pieces of iron, which is how ancient peoples first discovered the property of magnetism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Magnetite";
        }
    }

    return nullptr;
}

string _Geology::Terms::MalmesburyGroup(string text)
{
    string model = "llama3";
    string definition = "The late-Precambrian age Malmesbury Group is the oldest rock formation in the area, consisting of alternating layers of dark grey fine-grained greywacke, sandstone and slate, seen along the rocky Sea Point and Bloubergstrand shorelines, and from the Strand to Gordon\'s Bay. These sediments were originally deposited on an ancient continental slope by submarine slumping and turbidity currents. The sequence was subsequently metamorphosed by heat and pressure and folded tightly in a NW direction during the Saldanian orogeny so that the rock layers are now almost vertical. These rocks were, in most places, scoured by wave action during past periods of higher sea level.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Malmesbury Group";
        }
    }

    return nullptr;
}

string _Geology::Terms::Mantle(string text)
{
    string model = "llama3";
    string definition = "A mantle is a layer inside a planetary body bounded below by a core and above by a crust. Mantles are made of rock or ices, and are generally the largest and most massive layer of the planetary body. Mantles are characteristic of planetary bodies that have undergone differentiation by density. All terrestrial planets (including Earth), half of the giant planets, specifically ice giants, a number of asteroids, and some planetary moons have mantles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mantle";
        }
    }

    return nullptr;
}

string _Geology::Terms::Marble(string text)
{
    string model = "llama3";
    string definition = "Marble is a metamorphic rock consisting of carbonate minerals (most commonly calcite (CaCO3) or dolomite (CaMg(CO3)2) that have recrystallized under the influence of heat and pressure. It has a crystalline texture, and is typically not foliated (layered), although there are exceptions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Marble";
        }
    }

    return nullptr;
}

string _Geology::Terms::MarineTerrace(string text)
{
    string model = "llama3";
    string definition = "A raised beach, coastal terrace, or perched coastline is a relatively flat, horizontal or gently inclined surface of marine origin, mostly an old abrasion platform which has been lifted out of the sphere of wave activity (sometimes called \"tread\"). Thus, it lies above or under the current sea level, depending on the time of its formation. It is bounded by a steeper ascending slope on the landward side and a steeper descending slope on the seaward side (sometimes called \"riser\"). Due to its generally flat shape, it is often used for anthropogenic structures such as settlements and infrastructure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Marine Terrace";
        }
    }

    return nullptr;
}

string _Geology::Terms::Marl(string text)
{
    string model = "llama3";
    string definition = "Marl is an earthy material rich in carbonate minerals, clays, and silt. When hardened into rock, this becomes marlstone. It is formed in marine or freshwater environments, often through the activities of algae. Marl makes up the lower part of the cliffs of Dover, and the Channel Tunnel follows these marl layers between France and the United Kingdom. Marl is also a common sediment in post-glacial lakes, such as the marl ponds of the northeastern United States.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Marl";
        }
    }

    return nullptr;
}

string _Geology::Terms::Massive(string text)
{
    string model = "llama3";
    string definition = "A description applied to a homogeneous rock which lacks internal structure or layers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Massive";
        }
    }

    return nullptr;
}

string _Geology::Terms::Melange(string text)
{
    string model = "llama3";
    string definition = "In geology, a mélange is a large-scale breccia, a mappable body of rock characterized by a lack of continuous bedding and the inclusion of fragments of rock of all sizes, contained in a fine-grained deformed matrix. The mélange typically consists of a jumble of large blocks of varied lithologies. Both tectonic and sedimentary processes can form melange.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mélange";
        }
    }

    return nullptr;
}

string _Geology::Terms::Melanocratic(string text)
{
    string model = "llama3";
    string definition = "Based on their color index, rocks can be classified as melanocratic (higher color index), leucocratic (lower color index), or mesocratic (middle color index), as well as hololeucocratic and holomelanocratic (extremes to either side). For example, leucocratic granite would be brighter and have a lower color index than regular granite. The exact percentages separating the classes vary between petrologists.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Melanocratic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Mesocratic(string text)
{
    string model = "llama3";
    string definition = "A term applied to igneous rocks which in respect of their content of dark silicates are intermediate between those of leucocratic and melanocratic type, and contain 30-60% of dark heavy minerals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mesocratic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Mesozoic(string text)
{
    string model = "llama3";
    string definition = "The Mesozoic Era is the era of Earth\'s geological history, lasting from about 252 to 66 million years ago, comprising the Triassic, Jurassic and Cretaceous Periods. It is characterized by the dominance of gymnosperms such as cycads, ginkgoaceae and araucarian conifers, and of archosaurian reptiles such as the dinosaurs; a hot greenhouse climate; and the tectonic break-up of Pangaea. The Mesozoic is the middle of the three eras since complex life evolved: the Paleozoic, the Mesozoic, and the Cenozoic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mesozoic";
        }
    }

    return nullptr;
}

string _Geology::Terms::MetamorphicRock(string text)
{
    string model = "llama3";
    string definition = "Metamorphic rocks arise from the transformation of existing rock to new types of rock in a process called metamorphism. The original rock (protolith) is subjected to temperatures greater than 150 to 200C (300 to 400F) and, often, elevated pressure of 100 megapascals (1,000 bar) or more, causing profound physical or chemical changes. During this process, the rock remains mostly in the solid state, but gradually recrystallizes to a new texture or mineral composition. The protolith may be an igneous, sedimentary, or existing metamorphic rock.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metamorphic Rock";
        }
    }

    return nullptr;
}

string _Geology::Terms::Metamorphism(string text)
{
    string model = "llama3";
    string definition = "Metamorphism is the transformation of existing rock (the protolith) to rock with a different mineral composition or texture. Metamorphism takes place at temperatures in excess of 150 °C (300 °F), and often also at elevated pressure or in the presence of chemically active fluids, but the rock remains mostly solid during the transformation. Metamorphism is distinct from weathering or diagenesis, which are changes that take place at or just beneath Earth\'s surface.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metamorphism";
        }
    }

    return nullptr;
}

string _Geology::Terms::Metapelite(string text)
{
    string model = "llama3";
    string definition = "A pelite or metapelite is a metamorphosed fine-grained sedimentary rock, i.e. mudstone or siltstone. The term was earlier used by geologists to describe a clay-rich, fine-grained clastic sediment or sedimentary rock, i.e. mud or a mudstone, the metamorphosed version of which would technically have been a metapelite. It was equivalent to the now little-used Latin-derived term lutite. A semipelite is defined in part as having similar chemical composition but being of a crystalloblastic nature.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metapelite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Metasilicate(string text)
{
    string model = "llama3";
    string definition = "A salt of the non-existing metasilicic acid H2SiO3 based on an analogy with the carbonate system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metasilicate";
        }
    }

    return nullptr;
}

string _Geology::Terms::MetaTexis(string text)
{
    string model = "llama3";
    string definition = "Low-grade anatexis: partial or differential melting of rock components with a low melting point.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Meta Texis";
        }
    }

    return nullptr;
}

string _Geology::Terms::Mica(string text)
{
    string model = "llama3";
    string definition = "Any of a set of minerals which crystallise in the monoclinic system. They have similar chemical compositions and highly perfect basal cleavage.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mica";
        }
    }

    return nullptr;
}

string _Geology::Terms::Micropaleontology(string text)
{
    string model = "llama3";
    string definition = "Micropaleontology (American spelling; spelled micropalaeontology in European usage) is the branch of paleontology (palaeontology) that studies microfossils, or fossils that require the use of a microscope to see the organism, its morphology and its characteristic details.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Micropaleontology";
        }
    }

    return nullptr;
}

string _Geology::Terms::MidOceanicRidge(string text)
{
    string model = "llama3";
    string definition = "A mid-ocean ridge (MOR) is a seafloor mountain system formed by plate tectonics. It typically has a depth of about 2,600 meters (8,500 ft) and rises about 2,000 meters (6,600 ft) above the deepest portion of an ocean basin. This feature is where seafloor spreading takes place along a divergent plate boundary. The rate of seafloor spreading determines the morphology of the crest of the mid-ocean ridge and its width in an ocean basin.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mid Oceanic Ridge";
        }
    }

    return nullptr;
}

string _Geology::Terms::Migmatite(string text)
{
    string model = "llama3";
    string definition = "Migmatite is a composite rock found in medium and high-grade metamorphic environments, commonly within Precambrian cratonic blocks. It consists of two or more constituents often layered repetitively: one layer is an older metamorphic rock that was reconstituted subsequently by partial melting (\"neosome\"), while the alternate layer has a pegmatitic, aplitic, granitic or generally plutonic appearance (\"paleosome\"). Commonly, migmatites occur below deformed metamorphic rocks that represent the base of eroded mountain chains.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Migmatite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Mineralization(string text)
{
    string model = "llama3";
    string definition = "In geology, mineralization is the deposition of economically important metals in the formation of ore bodies or \"lodes\" by various process. The term can also refer to the process by which waterborne minerals, such as calcium carbonate (calcite), iron oxide (hematite or limonite) or silica (quartz), replace organic material within the body of an organism that has died and was buried by sediments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mineralization";
        }
    }

    return nullptr;
}

//string _Geology::Terms::Geosyncline(string text)
//{
//    string model = "llama3";
//    string definition = "A geosyncline (originally called a geosynclinal) is an obsolete geological concept to explain orogens, which was developed in the late 19th and early 20th centuries, before the theory of plate tectonics was envisaged. A geosyncline was described as a giant downward fold in the Earth\'s crust, with associated upward folds called geanticlines (or geanticlinals), that preceded the climax phase of orogenic deformation.";
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
//            return "Geosyncline";
//        }
//    }
//
//    return nullptr;
//}

string _Geology::Terms::MohsScaleOfMineralHardness(string text)
{
    string model = "llama3";
    string definition = "The Mohs scale of mineral hardness is a qualitative ordinal scale, from 1 to 10, characterizing scratch resistance of minerals through the ability of harder material to scratch softer material. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mohs Scale Of Mineral Hardness";
        }
    }

    return nullptr;
}

string _Geology::Terms::Molasse(string text)
{
    string model = "llama3";
    string definition = "In geology, \"molasse\" are sandstones, shales and conglomerates that form as terrestrial or shallow marine deposits in front of rising mountain chains. The molasse deposits accumulate in a foreland basin, especially on top of flysch-like deposits, for example, those that left from the rising Alps, or erosion in the Himalaya. These deposits are typically the non-marine alluvial and fluvial sediments of lowlands, as compared to deep-water flysch sediments. Sedimentation stops when the orogeny stops, or when the mountains have eroded flat.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Molasse";
        }
    }

    return nullptr;
}

string _Geology::Terms::Molding(string text)
{
    string model = "llama3";
    string definition = "Molding (American English) or moulding (British and Commonwealth English; see spelling differences) is the process of manufacturing by shaping liquid or pliable raw material using a rigid frame called a mold or matrix. This itself may have been made using a pattern or model of the final object. A mold or mould is a hollowed-out block that is filled with a liquid or pliable material such as plastic, glass, metal, or ceramic raw material. The liquid hardens or sets inside the mold, adopting its shape. A mold is a counterpart to a cast. The very common bi-valve molding process uses two molds, one for each half of the object. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Geology::Terms::Montmorillonite(string text)
{
    string model = "llama3";
    string definition = "Montmorillonite is a very soft phyllosilicate group of minerals that form when they precipitate from water solution as microscopic crystals, known as clay. It is named after Montmorillon in France. Montmorillonite, a member of the smectite group, is a 2:1 clay, meaning that it has two tetrahedral sheets of silica sandwiching a central octahedral sheet of alumina. The particles are plate-shaped with an average diameter around 1 µm and a thickness of 0.96 nm; magnification of about 25,000 times, using an electron microscope, is required to resolve individual clay particles. Members of this group include saponite, nontronite, beidellite, and hectorite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Montmorillonite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Monocline(string text)
{
    string model = "llama3";
    string definition = "A monocline (or, rarely, a monoform) is a step-like fold in rock strata consisting of a zone of steeper dip within an otherwise horizontal or gently dipping sequence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Monocline";
        }
    }

    return nullptr;
}

string _Geology::Terms::Moraine(string text)
{
    string model = "llama3";
    string definition = "A moraine is any accumulation of unconsolidated debris (regolith and rock), sometimes referred to as glacial till, that occurs in both currently and formerly glaciated regions, and that has been previously carried along by a glacier or ice sheet. It may consist of partly rounded particles ranging in size from boulders (in which case it is often referred to as boulder clay) down to gravel and sand, in a groundmass of finely-divided clayey material sometimes called glacial flour. Lateral moraines are those formed at the side of the ice flow, and terminal moraines are those formed at the foot, marking the maximum advance of the glacier. Other types of moraine include ground moraines (till-covered areas forming sheets on flat or irregular topography) and medial moraines (moraines formed where two glaciers meet).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Moraine";
        }
    }

    return nullptr;
}

string _Geology::Terms::Mullion(string text)
{
    string model = "llama3";
    string definition = "Boudinage is a geological term for structures formed by extension, where a rigid tabular body such as hornfels, is stretched and deformed amidst less competent surroundings. The competent bed begins to break up, forming sausage-shaped boudins. Boudinage is common and can occur at any scale, from microscopic to lithospheric, and can be found in all terranes. In lithospheric-scale tectonics, boudinage of strong layers can signify large-scale creep transfer of rock matter. The study of boudinage can also help provide insight into the forces involved in tectonic deformation of rocks and their strength.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mullion";
        }
    }

    return nullptr;
}

string _Geology::Terms::Muscovite(string text)
{
    string model = "llama3";
    string definition = "Muscovite (also known as common mica, isinglass, or potash mica) is a hydrated phyllosilicate mineral of aluminium and potassium with formula KAl2(AlSi3O10)(F,OH)2, or (KF)2(Al2O3)3(SiO2)6(H2O). It has a highly perfect basal cleavage yielding remarkably thin laminae (sheets) which are often highly elastic. Sheets of muscovite 5 meters * 3 meters (16.5 feet*10 feet) have been found in Nellore, India.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Muscovite";
        }
    }

    return nullptr;
}

string _Geology::Terms::NamibianAge(string text)
{
    string model = "llama3";
    string definition = "900 to 542 Ma (Neoproterozoic).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Namibian Age";
        }
    }

    return nullptr;
}

string _Geology::Terms::Neogene(string text)
{
    string model = "llama3";
    string definition = "The Neogene is a geologic period and system that spans 20.45 million years from the end of the Paleogene Period 23.03 million years ago (Mya) to the beginning of the present Quaternary Period 2.58 million years ago. It is the second period of the Cenozoic and the eleventh period of the Phanerozoic. The Neogene is sub-divided into two epochs, the earlier Miocene and the later Pliocene. Some geologists assert that the Neogene cannot be clearly delineated from the modern geological period, the Quaternary. The term \"Neogene\" was coined in 1853 by the Austrian palaeontologist Moritz Hörnes (1815-1868). The earlier term Tertiary Period was used to define the span of time now covered by Paleogene and Neogene and, despite no longer being recognized as a formal stratigraphic term, \"Tertiary\" still sometimes remains in informal use.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neogene";
        }
    }

    return nullptr;
}

string _Geology::Terms::Nodule(string text)
{
    string model = "llama3";
    string definition = "In geology and particularly in sedimentology, a nodule is a small, irregularly rounded knot, mass, or lump of a mineral or mineral aggregate that typically has a contrasting composition from the enclosing sediment or sedimentary rock. Examples include pyrite nodules in coal, a chert nodule in limestone, or a phosphorite nodule in marine shale. Normally, a nodule has a warty or knobby surface and exists as a discrete mass within the host strata. In general, they lack any internal structure except for the preserved remnants of original bedding or fossils. Nodules are closely related to concretions and sometimes these terms are used interchangeably. Minerals that typically form nodules include calcite, chert, apatite (phosphorite), anhydrite, and pyrite. Nodular is used to describe a sediment or sedimentary rock composed of scattered to loosely packed nodules in matrix of like or unlike character. It is also used to describe mineral aggregates that occur in the form of nodules, e.g. colloform mineral aggregate with a bulbed surface. Nodule is also used for widely scattered concretionary lumps of manganese, cobalt, iron, and nickel found on the floors of the world\'s oceans. This is especially true of manganese nodules. Manganese and phosphorite nodules form on the seafloor and are syndepositional in origin. Thus, technically speaking, they are concretions instead of nodules. Chert and flint nodules are often found in beds of limestone and chalk. They form from the redeposition of amorphous silica arising from the dissolution of siliceous spicules of sponges, or debris from radiolaria and the postdepositional replacement of either the enclosing limestone or chalk by this silica.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nodule";
        }
    }

    return nullptr;
}

string _Geology::Terms::NonClastic(string text)
{
    string model = "llama3";
    string definition = "Having the properties of any chemically and/or organically deposited rock, such as limestones, chalks, and evaporite deposits.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Non Clastic";
        }
    }

    return nullptr;
}

string _Geology::Terms::NormalFault(string text)
{
    string model = "llama3";
    string definition = "In a normal fault, the hanging wall moves downward, relative to the footwall. The dip of most normal faults is at least 60 degrees but some normal faults dip at less than 45 degrees.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Normal Fault";
        }
    }

    return nullptr;
}

string _Geology::Terms::Obsidian(string text)
{
    string model = "llama3";
    string definition = "Obsidian is a naturally occurring volcanic glass formed when lava extruded from a volcano cools rapidly with minimal crystal growth. It is an igneous rock. Produced from felsic lava, obsidian is rich in the lighter elements such as silicon, oxygen, aluminium, sodium, and potassium. It is commonly found within the margins of rhyolitic lava flows known as obsidian flows. These flows have a high content of silica, giving them a high viscosity. The high viscosity inhibits diffusion of atoms through the lava, which inhibits the first step (nucleation) in the formation of mineral crystals. Together with rapid cooling, this results in a natural glass forming from the lava. Obsidian is hard, brittle, and amorphous; it therefore fractures with sharp edges. In the past, it was used to manufacture cutting and piercing tools, and it has been used experimentally as surgical scalpel blades.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Obsidian";
        }
    }

    return nullptr;
}

string _Geology::Terms::Oligoclase(string text)
{
    string model = "llama3";
    string definition = "Oligoclase is a rock-forming mineral belonging to the plagioclase feldspars. In chemical composition and in its crystallographic and physical characters it is intermediate between albite (NaAlSi3O8) and anorthite (CaAl2Si2O8). The albite:anorthite molar ratio of oligoclase ranges from 90:10 to 70:30.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Oligoclase";
        }
    }

    return nullptr;
}

string _Geology::Terms::Olivine(string text)
{
    string model = "llama3";
    string definition = "The mineral olivine is a magnesium iron silicate with the chemical formula (Mg,Fe)2SiO4. It is a type of nesosilicate or orthosilicate. The primary component of the Earth\'s upper mantle, it is a common mineral in Earth\'s subsurface, but weathers quickly on the surface. Olivine has many uses, such as the gemstone peridot (or chrysolite), as well as industrial applications like metalworking processes. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Olivine";
        }
    }

    return nullptr;
}

string _Geology::Terms::Ordovician(string text)
{
    string model = "llama3";
    string definition = "The Ordovician is a geologic period and system, the second of six periods of the Paleozoic Era, and the second of twelve periods of the Phanerozoic Eon. The Ordovician spans 41.6 million years from the end of the Cambrian Period 485.4 Ma (million years ago) to the start of the Silurian Period 443.8 Ma. The Ordovician, named after the Welsh tribe of the Ordovices, was defined by Charles Lapworth in 1879 to resolve a dispute between followers of Adam Sedgwick and Roderick Murchison, who were placing the same rock beds in North Wales in the Cambrian and Silurian systems, respectively. Lapworth recognized that the fossil fauna in the disputed strata were different from those of either the Cambrian or the Silurian systems, and placed them in a system of their own. The Ordovician received international approval in 1960 (forty years after Lapworth\'s death), when it was adopted as an official period of the Paleozoic Era by the International Geological Congress.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ordovician";
        }
    }

    return nullptr;
}

string _Geology::Terms::Orogenesis(string text)
{
    string model = "llama3";
    string definition = "The formation and growth of mountains related to tectonic activity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Orogenesis";
        }
    }

    return nullptr;
}

string _Geology::Terms::Orogeny(string text)
{
    string model = "llama3";
    string definition = "Orogeny is a mountain-building process that takes place at a convergent plate margin when plate motion compresses the margin. An orogenic belt or orogen develops as the compressed plate crumples and is uplifted to form one or more mountain ranges. This involves a series of geological processes collectively called orogenesis. These include both structural deformation of existing continental crust and the creation of new continental crust through volcanism. Magma rising in the orogen carries less dense material upwards while leaving more dense material behind, resulting in compositional differentiation of Earth\'s lithosphere (crust and uppermost mantle). A synorogenic (or synkinematic) process or event is one that occurs during an orogeny.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Orogeny";
        }
    }

    return nullptr;
}

string _Geology::Terms::Orthoclase(string text)
{
    string model = "llama3";
    string definition = "Orthoclase, or orthoclase feldspar (endmember formula KAlSi3O8), is an important tectosilicate mineral which forms igneous rock. The name is from the Ancient Greek for \"straight fracture\", because its two cleavage planes are at right angles to each other. It is a type of potassium feldspar, also known as K-feldspar. The gem known as moonstone (see below) is largely composed of orthoclase.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Orthoclase";
        }
    }

    return nullptr;
}

string _Geology::Terms::Orthogeosyncline(string text)
{
    string model = "llama3";
    string definition = "A geosyncline (originally called a geosynclinal) is an obsolete geological concept to explain orogens, which was developed in the late 19th and early 20th centuries, before the theory of plate tectonics was envisaged. A geosyncline was described as a giant downward fold in the Earth\'s crust, with associated upward folds called geanticlines (or geanticlinals), that preceded the climax phase of orogenic deformation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Orthogeosyncline";
        }
    }

    return nullptr;
}

string _Geology::Terms::Orthorhombic(string text)
{
    string model = "llama3";
    string definition = "In crystallography, the orthorhombic crystal system is one of the 7 crystal systems. Orthorhombic lattices result from stretching a cubic lattice along two of its orthogonal pairs by two different factors, resulting in a rectangular prism with a rectangular base (a by b) and height (c), such that a, b, and c are distinct. All three bases intersect at 90° angles, so the three lattice vectors remain mutually orthogonal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Orthorhombic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Orthosilicate(string text)
{
    string model = "llama3";
    string definition = "In chemistry, orthosilicate is the anion SiO4^4- or any of its salts and esters. It is one of the silicate anions. It is occasionally called the silicon tetroxide anion or group. Orthosilicate salts, like sodium orthosilicate, are stable, and occur widely in nature as silicate minerals, being the defining feature of the nesosilicates. Olivine, a magnesium or iron(II) orthosilicate, is the most abundant mineral in the upper mantle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Orthosilicate";
        }
    }

    return nullptr;
}

string _Geology::Terms::OxbowLake(string text)
{
    string model = "llama3";
    string definition = "An oxbow lake is a U-shaped lake or pool that forms when a wide meander of a river is cut off, creating a free-standing body of water. The word \"oxbow\" can also refer to a U-shaped bend in a river or stream, whether or not it is cut off from the main stream.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Oxbow Lake";
        }
    }

    return nullptr;
}

string _Geology::Terms::Pahoehoe(string text)
{
    string model = "llama3";
    string definition = "Pahoehoe (also spelled pahoehoe, from Hawaiian  meaning \"smooth, unbroken lava\") is basaltic lava that has a smooth, billowy, undulating, or ropy surface. These surface features are due to the movement of very fluid lava under a congealing surface crust. The Hawaiian word was introduced as a technical term in geology by Clarence Dutton.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pahoehoe";
        }
    }

    return nullptr;
}

string _Geology::Terms::Palaeozoic(string text)
{
    string model = "llama3";
    string definition = "The Paleozoic or Palaeozoic) Era is the first of three geological eras of the Phanerozoic Eon. Beginning 538.8 million years ago (Ma), it succeeds the Neoproterozoic (the last era of the Proterozoic Eon) and ends 251.9 Ma at the start of the Mesozoic Era. The Paleozoic is subdivided into six geologic periods (from oldest to youngest), Cambrian, Ordovician, Silurian, Devonian, Carboniferous and Permian. Some geological timescales divide the Paleozoic informally into early and late sub-eras: the Early Paleozoic consisting of the Cambrian, Ordovician and Silurian; the Late Paleozoic consisting of the Devonian, Carboniferous and Permian.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Palaeozoic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Paleocurrent(string text)
{
    string model = "llama3";
    string definition = "A paleocurrent or paleocurrent indicator is a geological feature (typically a sedimentary structure) that helps one determine the direction of flowing water in the geologic past. This is an invaluable tool in the reconstruction of ancient depositional environments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Paleocurrent";
        }
    }

    return nullptr;
}

string _Geology::Terms::Paleontology(string text)
{
    string model = "llama3";
    string definition = "Paleontology also spelled palaeontology or palæontology, is the scientific study of life that existed prior to the start of the Holocene epoch (roughly 11,700 years before present). It includes the study of fossils to classify organisms and study their interactions with each other and their environments (their paleoecology). Paleontological observations have been documented as far back as the 5th century BC. The science became established in the 18th century as a result of Georges Cuvier\'s work on comparative anatomy, and developed rapidly in the 19th century. Paleontology lies on the border between biology and geology, but it differs from archaeology in that it excludes the study of anatomically modern humans. It now uses techniques drawn from a wide range of sciences, including biochemistry, mathematics, and engineering. Use of all these techniques has enabled paleontologists to discover much of the evolutionary history of life, almost back to when Earth became capable of supporting life, nearly 4 billion years ago. As knowledge has increased, paleontology has developed specialised sub-divisions, some of which focus on different types of fossil organisms while others study ecology and environmental history, such as ancient climates.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Paleontology";
        }
    }

    return nullptr;
}

//string _Geology::Terms::Paleontology(string text)
//{
//    string model = "llama3";
//    string definition = "Paleontology also spelled palaeontology or palæontology, is the scientific study of life that existed prior to the start of the Holocene epoch (roughly 11,700 years before present). It includes the study of fossils to classify organisms and study their interactions with each other and their environments (their paleoecology). Paleontological observations have been documented as far back as the 5th century BC. The science became established in the 18th century as a result of Georges Cuvier\'s work on comparative anatomy, and developed rapidly in the 19th century. Paleontology lies on the border between biology and geology, but it differs from archaeology in that it excludes the study of anatomically modern humans. It now uses techniques drawn from a wide range of sciences, including biochemistry, mathematics, and engineering. Use of all these techniques has enabled paleontologists to discover much of the evolutionary history of life, almost back to when Earth became capable of supporting life, nearly 4 billion years ago. As knowledge has increased, paleontology has developed specialised sub-divisions, some of which focus on different types of fossil organisms while others study ecology and environmental history, such as ancient climates. Body fossils and trace fossils are the principal types of evidence about ancient life, and geochemical evidence has helped to decipher the evolution of life before there were organisms large enough to leave body fossils. Estimating the dates of these remains is essential but difficult: sometimes adjacent rock layers allow radiometric dating, which provides absolute dates that are accurate to within 0.5%, but more often paleontologists have to rely on relative dating by solving the \"jigsaw puzzles\" of biostratigraphy (arrangement of rock layers from youngest to oldest). Classifying ancient organisms is also difficult, as many do not fit well into the Linnaean taxonomy classifying living organisms, and paleontologists more often use cladistics to draw up evolutionary \"family trees\". The final quarter of the 20th century saw the development of molecular phylogenetics, which investigates how closely organisms are related by measuring the similarity of the DNA in their genomes. Molecular phylogenetics has also been used to estimate the dates when species diverged, but there is controversy about the reliability of the molecular clock on which such estimates depend.";
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
//            return "Paleontology";
//        }
//    }
//
//    return nullptr;
//}

string _Geology::Terms::Palagonite(string text)
{
    string model = "llama3";
    string definition = "Palagonite is an alteration product from the interaction of water with volcanic glass of chemical composition similar to basalt. Palagonite can also result from the interaction between water and basalt melt. The water flashes to steam on contact with the hot lava and the small fragments of lava react with the steam to form the light-colored palagonite tuff cones common in areas of basaltic eruptions in contact with water. An example is found in the pyroclastic cones of the Galapagos Islands. Charles Darwin recognized the origin of these cones during his visit to the islands. Palagonite can also be formed by a slower weathering of lava into palagonite, resulting in a thin, yellow-orange rind on the surface of the rock. The process of conversion of lava to palagonite is called palagonitization. Palagonite soil is a light yellow-orange dust, comprising a mixture of particles ranging down to sub-micrometer sizes, usually found mixed with larger fragments of lava. The color is indicative of the presence of iron in the +3 oxidation state, embedded in an amorphous matrix. Palagonite tuff is a tuff composed of sideromelane fragments and coarser pieces of basaltic rock, embedded in a palagonite matrix. A composite of sideromelane aggregate in palagonite matrix is called hyaloclastite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Palagonite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Paralithic(string text)
{
    string model = "llama3";
    string definition = "A paralithic horizon is a weathered layer of bedrock. The term comes from the Greek words para, meaning \"akin to\", and lithic, meaning \"stony\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Paralithic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Pegmatite(string text)
{
    string model = "llama3";
    string definition = "A pegmatite is an igneous rock showing a very coarse texture, with large interlocking crystals usually greater in size than 1 cm (0.4 in) and sometimes greater than 1 meter (3 ft). Most pegmatites are composed of quartz, feldspar, and mica, having a similar silicic composition to granite. However, rarer intermediate composition and mafic pegmatites are known. Many of the world\'s largest crystals are found within pegmatites. These include crystals of microcline, quartz, mica, spodumene, beryl, and tourmaline. Some individual crystals are over 10 m (33 ft) long. Most pegmatites are thought to form from the last fluid fraction of a large crystallizing magma body. This residual fluid is highly enriched in volatiles and trace elements, and its very low viscosity allows components to migrate rapidly to join an existing crystal rather than coming together to form new crystals. This allows a few very large crystals to form. While most pegmatites have a simple composition of minerals common in ordinary igneous rock, a few pegmatites have a complex composition, with numerous unusual minerals of rare elements. These complex pegmatites are mined for lithium, beryllium, boron, fluorine, tin, tantalum, niobium, rare earth elements, uranium, and other valuable commodities.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pegmatite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Pelite(string text)
{
    string model = "llama3";
    string definition = "A pelite or metapelite is a metamorphosed fine-grained sedimentary rock, i.e. mudstone or siltstone. The term was earlier used by geologists to describe a clay-rich, fine-grained clastic sediment or sedimentary rock, i.e. mud or a mudstone, the metamorphosed version of which would technically have been a metapelite. It was equivalent to the now little-used Latin-derived term lutite. A semipelite is defined in part as having similar chemical composition but being of a crystalloblastic nature.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pelite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Peridotite(string text)
{
    string model = "llama3";
    string definition = "Peridotite is a dense, coarse-grained igneous rock consisting mostly of the silicate minerals olivine and pyroxene. Peridotite is ultramafic, as the rock contains less than 45% silica. It is high in magnesium (Mg2+), reflecting the high proportions of magnesium-rich olivine, with appreciable iron. Peridotite is derived from Earth\'s mantle, either as solid blocks and fragments, or as crystals accumulated from magmas that formed in the mantle. The compositions of peridotites from these layered igneous complexes vary widely, reflecting the relative proportions of pyroxenes, chromite, plagioclase, and amphibole.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Peridotite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Petrology(string text)
{
    string model = "llama3";
    string definition = "Petrology is the branch of geology that studies rocks, their mineralogy, composition, texture, structure and the conditions under which they form. Petrology has three subdivisions: igneous, metamorphic, and sedimentary petrology. Igneous and metamorphic petrology are commonly taught together because both make heavy use of chemistry, chemical methods, and phase diagrams. Sedimentary petrology is commonly taught together with stratigraphy because it deals with the processes that form sedimentary rock. Modern sedimentary petrology is making increasing use of chemistry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Petrology";
        }
    }

    return nullptr;
}

string _Geology::Terms::Phenoclast(string text)
{
    string model = "llama3";
    string definition = "A large, conspicuous fragment in sediment or sedimentary rock composed of various sizes of material.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phenoclast";
        }
    }

    return nullptr;
}

string _Geology::Terms::Phenocryst(string text)
{
    string model = "llama3";
    string definition = "A phenocryst is an early forming, relatively large and usually conspicuous crystal distinctly larger than the grains of the rock groundmass of an igneous rock. Such rocks that have a distinct difference in the size of the crystals are called porphyries, and the adjective porphyritic is used to describe them. Phenocrysts often have euhedral forms, either due to early growth within a magma, or by post-emplacement recrystallization. Normally the term phenocryst is not used unless the crystals are directly observable, which is sometimes stated as greater than 0.5 mm (0.020 in) in diameter. Phenocrysts below this level, but still larger than the groundmass crystals, are termed microphenocrysts. Very large phenocrysts are termed megaphenocrysts. Some rocks contain both microphenocrysts and megaphenocrysts. In metamorphic rocks, crystals similar to phenocrysts are called porphyroblasts. Phenocrysts are more often found in the lighter (higher silica) igneous rocks such as felsites and andesites, although they occur throughout the igneous spectrum including in the ultramafics. The largest crystals found in some pegmatites are often phenocrysts being significantly larger than the other minerals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phenocryst";
        }
    }

    return nullptr;
}

string _Geology::Terms::Phyllite(string text)
{
    string model = "llama3";
    string definition = "Phyllite is a type of foliated metamorphic rock formed from slate that is further metamorphosed so that very fine grained white mica achieves a preferred orientation. It is primarily composed of quartz, sericite mica, and chlorite. Phyllite has fine-grained mica flakes, whereas slate has extremely fine mica flakes, and schist has large mica flakes, all mica flakes of which have achieved a preferred orientation. Among foliated metamorphic rocks, it represents a gradation in the degree of metamorphism between slate and schist. The minute crystals of graphite, sericite, or chlorite, or the translucent fine-grained white mica, impart a silky, sometimes golden sheen to the surfaces of cleavage, called \"phyllitic luster\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phyllite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Phyllonite(string text)
{
    string model = "llama3";
    string definition = "A rock that macroscopically resembles phyllite but that is formed by mechanical degradation (mylonization) of initially coarser rocks (e.g., graywacke, granite, or gneiss).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phyllonite";
        }
    }

    return nullptr;
}

string _Geology::Terms::PiercingPoint(string text)
{
    string model = "llama3";
    string definition = "In geology, a piercing point is defined as a feature (usually a geologic feature, preferably a linear feature) that is cut by a fault, then moved apart. Reconfiguring the piercing point back in its original position is the primary way geologists can find out the minimum slip, or displacement, along a fault. This can be done on a large scale (over many kilometers), a small scale (inside a single outcrop or fault trench) or even a single hand sample/rock (see image). Items that are usually used in a piercing point study include large geologic formations or other rock units that can be matched either stratigraphically, geochemically, or by age dating. Features that are linear or planar, like a stratigraphic unit, are much better for use in a piercing point study than rounds or irregular-shaped objects, such as a pluton, because the reconstruction is always more precise with a more predictable shape (because of the Principle of lateral continuity). Of course, it is important to keep in mind that piercing points only give a minimum amount of offset that fault could have taken. In certain situations, rock units can be created as fault movement occurs, making the piercing point measurement even less than a minimum value.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Piercing Point";
        }
    }

    return nullptr;
}

string _Geology::Terms::Pillar(string text)
{
    string model = "llama3";
    string definition = "A pillar is a landform, either of rock or earth, defined by the USGS as: \"Vertical, standing, often spire-shaped, natural rock formation (chimney, monument, pinnacle, pohaku, rock tower).\" Some examples of rock pillars are Chambers Pillar, Katskhi pillar, Pompeys Pillar, and Pillar Rock.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pillar";
        }
    }

    return nullptr;
}

string _Geology::Terms::Pitchstone(string text)
{
    string model = "llama3";
    string definition = "Pitchstone is a dark coloured, glassy volcanic rock formed when felsic lava or magma cools quickly. Since it is a volcanic glass, pitchstone may have a conchoidal fracture. Pitchstones may also contain phenocrysts, in which case it is a form of vitrophyre. Pitchstone has a resinous lustre, or silky in some cases, and a variable composition. Its colour may be mottled, streaked, or uniform brown, red, green, gray, or black. It is an extrusive rock that is very resistant to erosion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pitchstone";
        }
    }

    return nullptr;
}

string _Geology::Terms::PlateTectonics(string text)
{
    string model = "llama3";
    string definition = "Plate tectonics (from Latin tectonicus) is the scientific theory that Earth\'s lithosphere comprises a number of large tectonic plates, which have been slowly moving since 3-4 billion years ago. The model builds on the concept of continental drift, an idea developed during the first decades of the 20th century. Plate tectonics came to be accepted by geoscientists after seafloor spreading was validated in the mid-to-late 1960s. The processes that result in plates and shape Earth\'s crust are called tectonics. Tectonic plates also occur in other planets and moons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Plate Tectonics";
        }
    }

    return nullptr;
}

//string _Geology::Terms::PlateTectonics(string text)
//{
//    string model = "llama3";
//    string definition = "Plate tectonics (from Latin tectonicus) is the scientific theory that Earth\'s lithosphere comprises a number of large tectonic plates, which have been slowly moving since 3-4 billion years ago. The model builds on the concept of continental drift, an idea developed during the first decades of the 20th century. Plate tectonics came to be accepted by geoscientists after seafloor spreading was validated in the mid-to-late 1960s. The processes that result in plates and shape Earth\'s crust are called tectonics. Tectonic plates also occur in other planets and moons. Earth\'s lithosphere, the rigid outer shell of the planet including the crust and upper mantle, is fractured into seven or eight major plates (depending on how they are defined) and many minor plates or \"platelets\". Where the plates meet, their relative motion determines the type of plate boundary (or fault): convergent, divergent, or transform. The relative movement of the plates typically ranges from zero to 10 cm annually. Faults tend to be geologically active, experiencing earthquakes, volcanic activity, mountain-building, and oceanic trench formation. Tectonic plates are composed of the oceanic lithosphere and the thicker continental lithosphere, each topped by its own kind of crust. Along convergent plate boundaries, the process of subduction carries the edge of one plate down under the other plate and into the mantle. This process reduces the total surface area (crust) of the Earth. The lost surface is balanced by the formation of new oceanic crust along divergent margins by seafloor spreading, keeping the total surface area constant in a tectonic \"conveyor belt\". Tectonic plates are relatively rigid and float across the ductile asthenosphere beneath. Lateral density variations in the mantle result in convection currents, the slow creeping motion of Earth\'s solid mantle. At a seafloor spreading ridge, plates move away from the ridge, which is a topographic high, and the newly formed crust cools as it moves away, increasing its density and contributing to the motion. At a subduction zone the relatively cold, dense oceanic crust sinks down into the mantle, forming the downward convecting limb of a mantle cell, which is the strongest driver of plate motion. The relative importance and interaction of other proposed factors such as active convection, upwelling inside the mantle, and tidal drag of the Moon is still the subject of debate.";
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
//            return "Plate Tectonics";
//        }
//    }
//
//    return nullptr;
//}

string _Geology::Terms::Pleistocene(string text)
{
    string model = "llama3";
    string definition = "The Pleistocene referred to colloquially as the Ice Age) is the geological epoch that lasted from c. 2.58 million to 11,700 years ago, spanning the Earth\'s most recent period of repeated glaciations. Before a change was finally confirmed in 2009 by the International Union of Geological Sciences, the cutoff of the Pleistocene and the preceding Pliocene was regarded as being 1.806 million years Before Present (BP). Publications from earlier years may use either definition of the period. The end of the Pleistocene corresponds with the end of the last glacial period and also with the end of the Paleolithic age used in archaeology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pleistocene";
        }
    }

    return nullptr;
}

string _Geology::Terms::Pliocene(string text)
{
    string model = "llama3";
    string definition = "The Pliocene is the epoch in the geologic time scale that extends from 5.33 to 2.58 million years ago (Ma). It is the second and most recent epoch of the Neogene Period in the Cenozoic Era. The Pliocene follows the Miocene Epoch and is followed by the Pleistocene Epoch. Prior to the 2009 revision of the geologic time scale, which placed the four most recent major glaciations entirely within the Pleistocene, the Pliocene also included the Gelasian Stage, which lasted from 2.59 to 1.81 Ma, and is now included in the Pleistocene. As with other older geologic periods, the geological strata that define the start and end are well-identified but the exact dates of the start and end of the epoch are slightly uncertain. The boundaries defining the Pliocene are not set at an easily identified worldwide event but rather at regional boundaries between the warmer Miocene and the relatively cooler Pleistocene. The upper boundary was set at the start of the Pleistocene glaciations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pliocene";
        }
    }

    return nullptr;
}

string _Geology::Terms::Pluton(string text)
{
    string model = "llama3";
    string definition = "In geology, an igneous intrusion (or intrusive body or simply intrusion) is a body of intrusive igneous rock that forms by crystallization of magma slowly cooling below the surface of the Earth. Intrusions have a wide variety of forms and compositions, illustrated by examples like the Palisades Sill of New York and New Jersey; the Henry Mountains of Utah; the Bushveld Igneous Complex of South Africa; Shiprock in New Mexico; the Ardnamurchan intrusion in Scotland; and the Sierra Nevada Batholith of California. Because the solid country rock into which magma intrudes is an excellent insulator, cooling of the magma is extremely slow, and intrusive igneous rock is coarse-grained (phaneritic). Intrusive igneous rocks are classified separately from extrusive igneous rocks, generally on the basis of their mineral content. The relative amounts of quartz, alkali feldspar, plagioclase, and feldspathoid is particularly important in classifying intrusive igneous rocks. Intrusions must displace existing country rock to make room for themselves. The question of how this takes place is called the room problem, and it remains a subject of active investigation for many kinds of intrusions. The term pluton is poorly defined, but has been used to describe an intrusion emplaced at great depth; as a synonym for all igneous intrusions; as a dustbin category for intrusions whose size or character are not well determined; or as a name for a very large intrusion or for a crystallized magma chamber. A pluton that has intruded and obscured the contact between a terrane and adjacent rock is called a stitching pluton.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pluton";
        }
    }

    return nullptr;
}

string _Geology::Terms::Plutonic(string text)
{
    string model = "llama3";
    string definition = "Intrusive rock is formed when magma penetrates existing rock, crystallizes, and solidifies underground to form intrusions, such as batholiths, dikes, sills, laccoliths, and volcanic necks. Intrusion is one of the two ways igneous rock can form. The other is extrusion, such as a volcanic eruption or similar event. An intrusion is any body of intrusive igneous rock, formed from magma that cools and solidifies within the crust of the planet. In contrast, an extrusion consists of extrusive rock, formed above the surface of the crust. Some geologists use the term plutonic rock synonymously with intrusive rock, but other geologists subdivide intrusive rock, by crystal size, into coarse-grained plutonic rock (typically formed deeper in the Earth\'s crust in batholiths or stocks) and medium-grained subvolcanic or hypabyssal rock (typically formed higher in the crust in dikes and sills).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Plutonic";
        }
    }

    return nullptr;
}

string _Geology::Terms::PlumoseStructure(string text)
{
    string model = "llama3";
    string definition = "A ladder or grid pattern that occurs during jointing that resembles plumes, oriented perpendicular to the stress, hence which usually form parallel to the upper and lower surfaces of the constituent rock unit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Plumose Structure";
        }
    }

    return nullptr;
}

string _Geology::Terms::Pneumatolysis(string text)
{
    string model = "llama3";
    string definition = "Pneumatolysis is an obsolete geologic term for magma emitting gasses that alter surrounding rock or crystallize minerals. Pneumatolysis is now considered a type of hydrothermal interaction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pneumatolysis";
        }
    }

    return nullptr;
}

string _Geology::Terms::PoreWater(string text)
{
    string model = "llama3";
    string definition = "Groundwater is the water present beneath Earth\'s surface in rock and soil pore spaces and in the fractures of rock formations. About 30 percent of all readily available fresh water in the world is groundwater. A unit of rock or an unconsolidated deposit is called an aquifer when it can yield a usable quantity of water. The depth at which soil pore spaces or fractures and voids in rock become completely saturated with water is called the water table. Groundwater is recharged from the surface; it may discharge from the surface naturally at springs and seeps, and can form oases or wetlands. Groundwater is also often withdrawn for agricultural, municipal, and industrial use by constructing and operating extraction wells. The study of the distribution and movement of groundwater is hydrogeology, also called groundwater hydrology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pore Water";
        }
    }

    return nullptr;
}

string _Geology::Terms::Porphyroblast(string text)
{
    string model = "llama3";
    string definition = "A porphyroblast is a large mineral crystal in a metamorphic rock which has grown within the finer grained matrix. Porphyroblasts are commonly euhedral crystals, but can also be partly to completely irregular in shape. The most common porphyroblasts in metapelites (metamorphosed mudstones and siltstones) are garnets and staurolites, which stand out in well-foliated metapelites (such as schists) against the platy mica matrix. A similar type of crystal is a phenocryst, a large crystal in an igneous rock. Porphyroblasts are often confused with porphyroclasts, which can also be large outstanding crystals, but which are older than the matrix of the rock.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Porphyroblast";
        }
    }

    return nullptr;
}

string _Geology::Terms::Porphyry(string text)
{
    string model = "llama3";
    string definition = "Porphyry is any of various granites or igneous rocks with coarse-grained crystals such as feldspar or quartz dispersed in a fine-grained silicate-rich, generally aphanitic matrix or groundmass. In its non-geologic, traditional use, the term porphyry usually refers to the purple-red form of this stone, valued for its appearance, but other colours of decorative porphyry are also used such as \"green\", \"black\" and \"grey\". The term porphyry is from the Ancient Greek π??φ??α (porphyra), meaning \"purple\". Purple was the colour of royalty, and the Roman \"imperial porphyry\" was a deep purple igneous rock with large crystals of plagioclase. Some authors claimed the rock was the hardest known in antiquity. Thus porphyry was prized for monuments and building projects in Imperial Rome and thereafter. Subsequently, the name was given to any igneous rocks with large crystals. The adjective porphyritic now refers to a certain texture of igneous rock regardless of its chemical and mineralogical composition or its color. Its chief characteristic is a large difference in size between the tiny matrix crystals and the much larger phenocrysts. Porphyries may be aphanites or phanerites, that is, the groundmass may have microscopic crystals as in basalt, or crystals easily distinguishable with the eye, as in granite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Porphyry";
        }
    }

    return nullptr;
}

string _Geology::Terms::Precambrian(string text)
{
    string model = "llama3";
    string definition = "The Precambrian or Pre-Cambrian, sometimes abbreviated pC, or Cryptozoic) is the earliest part of Earth\'s history, set before the current Phanerozoic Eon. The Precambrian is so named because it preceded the Cambrian, the first period of the Phanerozoic Eon, which is named after Cambria, the Latinized name for Wales, where rocks from this age were first studied. The Precambrian accounts for 88% of the Earth\'s geologic time. The Precambrian is an informal unit of geologic time, subdivided into three eons (Hadean, Archean, Proterozoic) of the geologic time scale. It spans from the formation of Earth about 4.6 billion years ago (Ga) to the beginning of the Cambrian Period, about 538.8 million years ago (Ma), when hard-shelled creatures first appeared in abundance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Precambrian";
        }
    }

    return nullptr;
}

string _Geology::Terms::Precipitate(string text)
{
    string model = "llama3";
    string definition = "In an aqueous solution, precipitation is the \"sedimentation of a solid material (a precipitate) from a liquid solution\". The solid formed is called the precipitate. In case of an inorganic chemical reaction leading to precipitation, the chemical reagent causing the solid to form is called the precipitant. The clear liquid remaining above the precipitated or the centrifuged solid phase is also called the supernate or supernatant. The notion of precipitation can also be extended to other domains of chemistry (organic chemistry and biochemistry) and even be applied to the solid phases (e.g. metallurgy and alloys) when solid impurities segregate from a solid phase.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Precipitate";
        }
    }

    return nullptr;
}

string _Geology::Terms::PressureSolution(string text)
{
    string model = "llama3";
    string definition = "In structural geology and diagenesis, pressure solution or pressure dissolution is a deformation mechanism that involves the dissolution of minerals at grain-to-grain contacts into an aqueous pore fluid in areas of relatively high stress and either deposition in regions of relatively low stress within the same rock or their complete removal from the rock within the fluid. It is an example of diffusive mass transfer. The detailed kinetics of the process was reviewed by Rutter (1976), and since then such kinetics has been used in many applications in earth sciences.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pressure Solution";
        }
    }

    return nullptr;
}

string _Geology::Terms::ProgradeMetamorphism(string text)
{
    string model = "llama3";
    string definition = "Metamorphism is further divided into prograde and retrograde metamorphism. Prograde metamorphism involves the change of mineral assemblages (paragenesis) with increasing temperature and (usually) pressure conditions. These are solid state dehydration reactions, and involve the loss of volatiles such as water or carbon dioxide. Prograde metamorphism results in rock characteristic of the maximum pressure and temperature experienced. Metamorphic rocks usually do not undergo further change when they are brought back to the surface. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Prograde Metamorphism";
        }
    }

    return nullptr;
}

string _Geology::Terms::Protolith(string text)
{
    string model = "llama3";
    string definition = "A protolith is the original, unmetamorphosed rock from which a given metamorphic rock is formed. For example, the protolith of a slate is a shale or mudstone. Metamorphic rocks can be derived from any other kind of non-metamorphic rock and thus there is a wide variety of protoliths. Identifying a protolith is a major aim of metamorphic geology. Protoliths are non-metamorphic rocks and have no protoliths themselves. The non-metamorphic rocks fall into two classes: sedimentary rocks, formed from sediment, and igneous rocks, formed from magma. The source of the sediment of a sedimentary rock is termed its provenance. Magmatic protoliths can be further divided into three categories: ultramafic rock, mafic rock, and quartzo-feldspathic rock. Similarly, sedimentary protoliths can be classified as quartzo-feldspathic, pelitic, carbonate rocks, or some mixture of the three. On a geological time scale, the first protoliths were first formed shortly after the formation of the Earth during the Hadean eon.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Protolith";
        }
    }

    return nullptr;
}

string _Geology::Terms::Psammite(string text)
{
    string model = "llama3";
    string definition = "Psammite is a general term for sandstone. It is equivalent to the Latin-derived term arenite and is commonly used in various publications to describe a metamorphosed sedimentary rock with a dominantly sandstone protolith. In Europe, this term was formerly used for a fine-grained, fissile, clayey sandstone. Pettijohn gives the following descriptive terms based on grain size, avoiding the use of terms such as \"clay\" or \"argillaceous\", which carry an implication of chemical composition:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Psammite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Pseudomatrix(string text)
{
    string model = "llama3";
    string definition = "Pseudomatrix, as defined by Bill Dickinson in 1970, is the term for lithic fragments that have been deformed to become (part of or exclusively) a traditional sandstone matrix. This is formed when a lithic-rich sandstone is compacted. The compaction is usually more effective on the (typically) weaker lithic fragments in comparison to the stronger, coarser-grained framework grains.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pseudomatrix";
        }
    }

    return nullptr;
}

string _Geology::Terms::Pumice(string text)
{
    string model = "llama3";
    string definition = "Pumice, called pumicite in its powdered or dust form, is a volcanic rock that consists of extremely vesicular rough-textured volcanic glass, which may or may not contain crystals. It is typically light-colored. Scoria is another vesicular volcanic rock that differs from pumice in having larger vesicles, thicker vesicle walls, and being dark colored and denser. Pumice is created when super-heated, highly pressurized rock is rapidly ejected from a volcano. The unusual foamy configuration of pumice happens because of simultaneous rapid cooling and rapid depressurization. The depressurization creates bubbles by lowering the solubility of gases (including water and CO2) that are dissolved in the lava, causing the gases to rapidly exsolve (like the bubbles of CO2 that appear when a carbonated drink is opened). The simultaneous cooling and depressurization freeze the bubbles in a matrix. Eruptions under water are rapidly cooled and the large volume of pumice created can be a shipping hazard for cargo ships.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pumice";
        }
    }

    return nullptr;
}

string _Geology::Terms::PyroclasticFlow(string text)
{
    string model = "llama3";
    string definition = "A pyroclastic flow (also known as a pyroclastic density current or a pyroclastic cloud) is a fast-moving current of hot gas and volcanic matter (collectively known as tephra) that flows along the ground away from a volcano at average speeds of 100 km/h (30 m/s; 60 mph) but is capable of reaching speeds up to 700 km/h (190 m/s; 430 mph). The gases and tephra can reach temperatures of about 1,000C (1,800F).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pyroclastic Flow";
        }
    }

    return nullptr;
}

string _Geology::Terms::Pyroclastic(string text)
{
    string model = "llama3";
    string definition = "Pyroclastic rocks are clastic rocks composed of rock fragments produced and ejected by explosive volcanic eruptions. The individual rock fragments are known as pyroclasts. Pyroclastic rocks are a type of volcaniclastic deposit, which are deposits made predominantly of volcanic particles. \'Phreatic\' pyroclastic deposits are a variety of pyroclastic rock that forms from volcanic steam explosions and they are entirely made of accidental clasts. \'Phreatomagmatic\' pyroclastic deposits are formed from explosive interaction of magma with groundwater. The word pyroclastic is derived from the Greek π??, meaning fire; and ??αστ??, meaning broken. Unconsolidated accumulations of pyroclasts are described as tephra. Tephra may become lithified to a pyroclastic rock by cementation or chemical reactions as the result of the passage of hot gases (fumarolic alteration) or groundwater (e.g. hydrothermal alteration and diagenesis) and burial, or, if it is emplaced at temperatures so hot that the soft glassy pyroclasts stick together at point contacts, and deform: this is known as welding. One of the most spectacular types of pyroclastic deposit is an ignimbrite, which is the deposit of a ground-hugging pumiceous pyroclastic density current (a rapidly flowing hot suspension of pyroclasts in gas). Ignimbrites may be loose deposits or solid rock, and they can bury entire landscapes. An individual ignimbrite can exceed 1000 km3 in volume, can cover 20,000 km^2 of land, and may exceed 1 km in thickness, for example where it is ponded within a volcanic caldera.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pyroclastic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Pyroxene(string text)
{
    string model = "llama3";
    string definition = "The pyroxenes (commonly abbreviated Px) are a group of important rock-forming inosilicate minerals found in many igneous and metamorphic rocks. Pyroxenes have the general formula XY(Si,Al)2O6, where X represents calcium (Ca), sodium (Na), iron (Fe(II)) or magnesium (Mg) and more rarely zinc, manganese or lithium, and Y represents ions of smaller size, such as chromium (Cr), aluminium (Al), magnesium (Mg), cobalt (Co), manganese (Mn), scandium (Sc), titanium (Ti), vanadium (V) or even iron (Fe(II) or Fe(III)). Although aluminium substitutes extensively for silicon in silicates such as feldspars and amphiboles, the substitution occurs only to a limited extent in most pyroxenes. They share a common structure consisting of single chains of silica tetrahedra. Pyroxenes that crystallize in the monoclinic system are known as clinopyroxenes and those that crystallize in the orthorhombic system are known as orthopyroxenes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pyroxene";
        }
    }

    return nullptr;
}

string _Geology::Terms::Pyroxenite(string text)
{
    string model = "llama3";
    string definition = "Pyroxenite is an ultramafic igneous rock consisting essentially of minerals of the pyroxene group, such as augite, diopside, hypersthene, bronzite or enstatite. Pyroxenites are classified into clinopyroxenites, orthopyroxenites, and the websterites which contain both types of pyroxenes (see diagram below). Closely allied to this group are the hornblendites, consisting essentially of hornblende and other amphiboles. They are essentially of igneous origin, though some pyroxenites are included in the metamorphic Lewisian complex of Scotland where the pyroxene-rich rocks result from the type of contact metamorphism known as pyroxene-hornfels facies, have siliceous sediment or basaltic protoliths, and are respectively metapelites and metabasites.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pyroxenite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Quartz(string text)
{
    string model = "llama3";
    string definition = "Quartz is a hard, crystalline mineral composed of silica (silicon dioxide). The atoms are linked in a continuous framework of SiO4 silicon-oxygen tetrahedra, with each oxygen being shared between two tetrahedra, giving an overall chemical formula of SiO2. Quartz is, therefore, classified structurally as a framework silicate mineral and compositionally as an oxide mineral. Quartz is the second most abundant mineral in Earth\'s continental crust, behind feldspar. Quartz exists in two forms, the normal a-quartz and the high-temperature b-quartz, both of which are chiral. The transformation from a-quartz to b-quartz takes place abruptly at 573C (846 K; 1,063F). Since the transformation is accompanied by a significant change in volume, it can easily induce microfracturing of ceramics or rocks passing through this temperature threshold.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quartz";
        }
    }

    return nullptr;
}

string _Geology::Terms::Quartzite(string text)
{
    string model = "llama3";
    string definition = "Quartzite is a hard, non-foliated metamorphic rock which was originally pure quartz sandstone. Sandstone is converted into quartzite through heating and pressure usually related to tectonic compression within orogenic belts. Pure quartzite is usually white to grey, though quartzites often occur in various shades of pink and red due to varying amounts of hematite. Other colors, such as yellow, green, blue and orange, are due to other minerals. The term quartzite is also sometimes used for very hard but unmetamorphosed sandstones that are composed of quartz grains thoroughly cemented with additional quartz. Such sedimentary rock has come to be described as orthoquartzite to distinguish it from metamorphic quartzite, which is sometimes called metaquartzite to emphasize its metamorphic origins. Quartzite is very resistant to chemical weathering and often forms ridges and resistant hilltops. The nearly pure silica content of the rock provides little material for soil; therefore, the quartzite ridges are often bare or covered only with a very thin layer of soil and little (if any) vegetation. Some quartzites contain just enough weather-susceptible nutrient-bearing minerals such as carbonates and chlorite to form a loamy, fairly fertile though shallow and stony soil. Quartzite has been used since prehistoric times for stone tools. It is presently used for decorative dimension stone, as crushed stone in highway construction, and as a source of silica for production of silicon and silicon compounds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quartzite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Quaternary(string text)
{
    string model = "llama3";
    string definition = "The Quaternary is the current and most recent of the three periods of the Cenozoic Era in the geologic time scale of the International Commission on Stratigraphy (ICS), as well as the current and most recent of the twelve periods of the Phanerozoic eon. It follows the Neogene Period and spans from 2.58 million years ago to the present. The Quaternary Period is divided into two epochs: the Pleistocene (2.58 million years ago to 11.7 thousand years ago) and the Holocene (11.7 thousand years ago to today); a proposed third epoch, the Anthropocene, was rejected in 2024 by IUGS, the governing body of the ICS. The Quaternary is typically defined by the Quaternary glaciation, the cyclic growth and decay of continental ice sheets related to the Milankovitch cycles and the associated climate and environmental changes that they caused.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quaternary";
        }
    }

    return nullptr;
}

string _Geology::Terms::ReefKnoll(string text)
{
    string model = "llama3";
    string definition = "A reef knoll is a landform that comprises an immense pile of calcareous material that had previously accumulated on an ancient sea floor. Reef knolls are geological remnants of reefs and other organic concentrations of calcareous organisms. Reef knolls are often fossil-rich, with prehistoric corals, sponges, calcareous algae, and other reef-builders contributing to a large portion of the structure\'s volume. This density of skeletal material allows the structure to withstand sea currents and stand freely. Reef knolls can be divided into bioherms and biostromes. A bioherm is a landform of organic sedimentary rock enclosed or surrounded by rock of different origin. A biostrome is a distinctly bedded or broadly lenticular sedimentary rock landform. Krumbein additionally used these terms to distinguish different shapes of stromatolites: \"Distinctly bedded, widely extensive, blanketlike build-ups are biostromes. Nodular, biscuit-like, dome-shaped or columnar stromatolites are also referred to as bioherms\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reef Knoll";
        }
    }

    return nullptr;
}

string _Geology::Terms::RegionalMetamorphism(string text)
{
    string model = "llama3";
    string definition = "Regional metamorphism is a general term for metamorphism that affects entire regions of the Earth\'s crust. It most often refers to dynamothermal metamorphism, which takes place in orogenic belts (regions where mountain building is taking place), but also includes burial metamorphism, which results simply from rock being buried to great depths below the Earth\'s surface in a subsiding basin.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Regional Metamorphism";
        }
    }

    return nullptr;
}

string _Geology::Terms::Reticulite(string text)
{
    string model = "llama3";
    string definition = "Reticulite is a type of basaltic pumice formed in very high lava fountains. It has an extremely low density and is composed of a network of volcanic glass formed when the vesicles have almost completely coalesced.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reticulite";
        }
    }

    return nullptr;
}

string _Geology::Terms::RetrogradeMetamorphism(string text)
{
    string model = "llama3";
    string definition = "Retrograde metamorphism involves the reconstitution of a rock via revolatisation under decreasing temperatures (and usually pressures), allowing the mineral assemblages formed in prograde metamorphism to revert to those more stable at less extreme conditions. This is a relatively uncommon process, because volatiles produced during prograde metamorphism usually migrate out of the rock and are not available to recombine with the rock during cooling. Localized retrograde metamorphism can take place when fractures in the rock provide a pathway for groundwater to enter the cooling rock.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Retrograde Metamorphism";
        }
    }

    return nullptr;
}

string _Geology::Terms::ReverseFault(string text)
{
    string model = "llama3";
    string definition = "Dip-slip faults can be either normal (\"extensional\") or reverse. The terminology of \"normal\" and \"reverse\" comes from coal mining in England, where normal faults are the most common. With the passage of time, a regional reversal between tensional and compressional stresses (or vice-versa) might occur, and faults may be reactivated with their relative block movement inverted in opposite directions to the original movement (fault inversion). In such a way, a normal fault may therefore become a reverse fault and vice versa.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reverse Fault";
        }
    }

    return nullptr;
}

string _Geology::Terms::Rhyolite(string text)
{
    string model = "llama3";
    string definition = "Rhyolite  is the most silica-rich of volcanic rocks. It is generally glassy or fine-grained (aphanitic) in texture, but may be porphyritic, containing larger mineral crystals (phenocrysts) in an otherwise fine-grained groundmass. The mineral assemblage is predominantly quartz, sanidine, and plagioclase. It is the extrusive equivalent of granite. Its high silica content makes rhyolitic magma extremely viscous. This favors explosive eruptions over effusive eruptions, so this type of magma is more often erupted as pyroclastic rock than as lava flows. Rhyolitic ash-flow tuffs are among the most voluminous of continental igneous rock formations. Rhyolitic tuff has been used extensively for construction. Obsidian, which is rhyolitic volcanic glass, has been used for tools from prehistoric times to the present day because it can be shaped to an extremely sharp edge. Rhyolitic pumice finds use as an abrasive, in concrete, and as a soil amendment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rhyolite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Rift(string text)
{
    string model = "llama3";
    string definition = "In geology, a rift is a linear zone where the lithosphere is being pulled apart and is an example of extensional tectonics. Typical rift features are a central linear downfaulted depression, called a graben, or more commonly a half-graben with normal faulting and rift-flank uplifts mainly on one side. Where rifts remain above sea level they form a rift valley, which may be filled by water forming a rift lake. The axis of the rift area may contain volcanic rocks, and active volcanism is a part of many, but not all, active rift systems. Major rifts occur along the central axis of most mid-ocean ridges, where new oceanic crust and lithosphere is created along a divergent boundary between two tectonic plates. Failed rifts are the result of continental rifting that failed to continue to the point of break-up. Typically the transition from rifting to spreading develops at a triple junction where three converging rifts meet over a hotspot. Two of these evolve to the point of seafloor spreading, while the third ultimately fails, becoming an aulacogen.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rift";
        }
    }

    return nullptr;
}

string _Geology::Terms::RocheMoutonnee(string text)
{
    string model = "llama3";
    string definition = "In glaciology, a roche moutonnée (or sheepback) is a rock formation created by the passing of a glacier. The passage of glacial ice over underlying bedrock often results in asymmetric erosional forms as a result of abrasion on the \"stoss\" (upstream) side of the rock, and plucking (i.e. pieces cracked off) on the \"lee\" (downstream) side. Some geologists limit the term to features on scales of a metre to several hundred metres";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Roche Moutonnee";
        }
    }

    return nullptr;
}

string _Geology::Terms::RockGeology(string text)
{
    string model = "llama3";
    string definition = "In geology, rock (or stone) is any naturally occurring solid mass or aggregate of minerals or mineraloid matter. It is categorized by the minerals included, its chemical composition, and the way in which it is formed. Rocks form the Earth\'s outer solid layer, the crust, and most of its interior, except for the liquid outer core and pockets of magma in the asthenosphere. The study of rocks involves multiple subdisciplines of geology, including petrology and mineralogy. It may be limited to rocks found on Earth, or it may include planetary geology that studies the rocks of other celestial objects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rock Geology";
        }
    }

    return nullptr;
}

string _Geology::Terms::RollingHills(string text)
{
    string model = "llama3";
    string definition = "undulating low hill terrain";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rolling Hills";
        }
    }

    return nullptr;
}

string _Geology::Terms::Rudaceous(string text)
{
    string model = "llama3";
    string definition = "Rudite is a general name used for a sedimentary rock composed of rounded or angular detrital grains, i.e. granules, pebbles, cobbles, and boulders, which are coarser than sand in size. Rudites include sedimentary rocks composed of both siliciclastic, i.e. conglomerate and breccia, and carbonate grains, i.e. calcirudite and rudstone. This term is equivalent to the Greek-derived term, psephite. Rudite was initially proposed by Grabau as \"rudyte\". It is derived from the Latin word rudus for \"crushed stone\", \"rubbish\", \"debris\", and \"rubble\". Rudites can be deposited in a variety of nonmarine and marine environments. In nonmarine settings, gravels, which later were lithified to become rudites, accumulated within fluvial channels, within alluvial fans, and as glacial deposits. In marine environments, rudites were deposited along shorelines as part of beaches, as basal conglomerates during marine transgressions, and in the deep sea by slumps and turbidites. Rudites composed largely of rounded siliciclastic gravel are conglomerates and others composed of angular siliciclastic gravel are breccias.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rudaceous";
        }
    }

    return nullptr;
}

string _Geology::Terms::Saccharoidal(string text)
{
    string model = "llama3";
    string definition = "Having a texture similar to that of granulated sugar.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Saccharoidal";
        }
    }

    return nullptr;
}

string _Geology::Terms::Sand(string text)
{
    string model = "llama3";
    string definition = "Sand is a granular material composed of finely divided mineral particles. Sand has various compositions but is defined by its grain size. Sand grains are smaller than gravel and coarser than silt. Sand can also refer to a textural class of soil or soil type; i.e., a soil containing more than 85 percent sand-sized particles by mass. The composition of sand varies, depending on the local rock sources and conditions, but the most common constituent of sand in inland continental settings and non-tropical coastal settings is silica (silicon dioxide, or SiO2), usually in the form of quartz. Calcium carbonate is the second most common type of sand. One such example of this is aragonite, which has been created over the past 500 million years by various forms of life, such as coral and shellfish. It is the primary form of sand apparent in areas where reefs have dominated the ecosystem for millions of years, as in the Caribbean. Somewhat more rarely, sand may be composed of calcium sulfate, such as gypsum and selenite, as is found in places such as White Sands National Park and Salt Plains National Wildlife Refuge in the U.S. Sand is a non-renewable resource over human timescales, and sand suitable for making concrete is in high demand. Desert sand, although plentiful, is not suitable for concrete. Fifty billion tons of beach sand and fossil sand are used each year for construction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sand";
        }
    }

    return nullptr;
}

string _Geology::Terms::Sandstone(string text)
{
    string model = "llama3";
    string definition = "Sandstone is a clastic sedimentary rock composed mainly of sand-sized (0.0625 to 2 mm) silicate grains, cemented together by another mineral. Sandstones comprise about 20-25% of all sedimentary rocks. Most sandstone is composed of quartz or feldspar, because they are the most resistant minerals to the weathering processes at the Earth\'s surface. Like uncemented sand, sandstone may be imparted any color by impurities within the minerals, but the most common colors are tan, brown, yellow, red, grey, pink, white, and black. Because sandstone beds can form highly visible cliffs and other topographic features, certain colors of sandstone have become strongly identified with certain regions, such as the red rock deserts of Arches National Park and other areas of the American Southwest. Rock formations composed of sandstone usually allow the percolation of water and other fluids and are porous enough to store large quantities, making them valuable aquifers and petroleum reservoirs. Quartz-bearing sandstone can be changed into quartzite through metamorphism, usually related to tectonic compression within orogenic belts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sandstone";
        }
    }

    return nullptr;
}

string _Geology::Terms::Sanidine(string text)
{
    string model = "llama3";
    string definition = "A form of potash feldspar identical in composition with orthoclase but physically different, formed under different conditions and occurring in different rock types. It is the high temperature form of orthoclase, into which it inverts at 900C (1,650F). Occurs in lavas and dyke rocks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sanidine";
        }
    }

    return nullptr;
}

string _Geology::Terms::Schist(string text)
{
    string model = "llama3";
    string definition = "Schist  is a medium-grained metamorphic rock showing pronounced schistosity (named for the rock). This means that the rock is composed of mineral grains easily seen with a low-power hand lens, oriented in such a way that the rock is easily split into thin flakes or plates. This texture reflects a high content of platy minerals, such as mica, talc, chlorite, or graphite. These are often interleaved with more granular minerals, such as feldspar or quartz. Schist typically forms during regional metamorphism accompanying the process of mountain building (orogeny) and usually reflects a medium grade of metamorphism. Schist can form from many different kinds of rocks, including sedimentary rocks such as mudstones and igneous rocks such as tuffs. Schist metamorphosed from mudstone is particularly common and is often very rich in mica (a mica schist). Where the type of the original rock (the protolith) is discernible, the schist is usually given a name reflecting its protolith, such as schistose metasandstone. Otherwise, the names of the constituent minerals will be included in the rock name, such as quartz-felspar-biotite schist.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Schist";
        }
    }

    return nullptr;
}

string _Geology::Terms::Scree(string text)
{
    string model = "llama3";
    string definition = "Scree is a collection of broken rock fragments at the base of a cliff or other steep rocky mass that has accumulated through periodic rockfall. Landforms associated with these materials are often called talus deposits. The term scree is applied both to an unstable steep mountain slope composed of rock fragments and other debris, and to the mixture of rock fragments and debris itself. It is loosely synonymous with talus, material that accumulates at the base of a projecting mass of rock, or talus slope, a landform composed of talus. The term scree is sometimes used more broadly for any sheet of loose rock fragments mantling a slope, while talus is used more narrowly for material that accumulates at the base of a cliff or other rocky slope from which it has obviously eroded. Scree is formed by rockfall, which distinguishes it from colluvium. Colluvium is rock fragments or soil deposited by rainwash, sheetwash, or slow downhill creep, usually at the base of gentle slopes or hillsides. However, the terms scree, talus, and sometimes colluvium tend to be used interchangeably. The term talus deposit is sometimes used to distinguish the landform from the material of which it is made. The exact definition of scree in the primary literature is somewhat relaxed, and it often overlaps with both talus and colluvium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Scree";
        }
    }

    return nullptr;
}

string _Geology::Terms::SedimentTrap(string text)
{
    string model = "llama3";
    string definition = "In geology, a sediment trap is any topographic depression where sediments substantially accumulate over time. The size of a sediment trap can vary from a small lagoon to a large basin such as the Persian Gulf.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sediment Trap";
        }
    }

    return nullptr;
}

string _Geology::Terms::SedimentaryRock(string text)
{
    string model = "llama3";
    string definition = "Sedimentary rocks are types of rock that are formed by the accumulation or deposition of mineral or organic particles at Earth\'s surface, followed by cementation. Sedimentation is the collective name for processes that cause these particles to settle in place. The particles that form a sedimentary rock are called sediment, and may be composed of geological detritus (minerals) or biological detritus (organic matter). The geological detritus originated from weathering and erosion of existing rocks, or from the solidification of molten lava blobs erupted by volcanoes. The geological detritus is transported to the place of deposition by water, wind, ice or mass movement, which are called agents of denudation. Biological detritus was formed by bodies and parts (mainly shells) of dead aquatic organisms, as well as their fecal mass, suspended in water and slowly piling up on the floor of water bodies (marine snow). Sedimentation may also occur as dissolved minerals precipitate from water solution. The sedimentary rock cover of the continents of the Earth\'s crust is extensive (73% of the Earth\'s current land surface), but sedimentary rock is estimated to be only 8% of the volume of the crust. Sedimentary rocks are only a thin veneer over a crust consisting mainly of igneous and metamorphic rocks. Sedimentary rocks are deposited in layers as strata, forming a structure called bedding. Sedimentary rocks are often deposited in large structures called sedimentary basins. Sedimentary rocks have also been found on Mars. The study of sedimentary rocks and rock strata provides information about the subsurface that is useful for civil engineering, for example in the construction of roads, houses, tunnels, canals or other structures. Sedimentary rocks are also important sources of natural resources including coal, fossil fuels, drinking water and ores. The study of the sequence of sedimentary rock strata is the main source for an understanding of the Earth\'s history, including palaeogeography, paleoclimatology and the history of life. The scientific discipline that studies the properties and origin of sedimentary rocks is called sedimentology. Sedimentology is part of both geology and physical geography and overlaps partly with other disciplines in the Earth sciences, such as pedology, geomorphology, geochemistry and structural geology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sedimentary Rock";
        }
    }

    return nullptr;
}

string _Geology::Terms::Sequence(string text)
{
    string model = "llama3";
    string definition = "In geology, a sequence is a stratigraphic unit which is bounded by an unconformity at the top and at the bottom.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sequence";
        }
    }

    return nullptr;
}

string _Geology::Terms::Sericite(string text)
{
    string model = "llama3";
    string definition = "Sericite is the name given to very fine, ragged grains and aggregates of white (colourless) micas, typically made of muscovite, illite, or paragonite. Sericite is produced by the alteration of orthoclase or plagioclase feldspars in areas that have been subjected to hydrothermal alteration (also see Sericitic alteration) typically associated with copper, tin, or other hydrothermal ore deposits. Sericite also occurs as the fine mica that gives the sheen to phyllite and schistose metamorphic rocks. The name comes from Latin sericus, meaning \"silken\" in reference to the location from which silk was first utilized, which in turn refers to the silky sheen of rocks with abundant sericite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sericite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Shale(string text)
{
    string model = "llama3";
    string definition = "Shale is a fine-grained, clastic sedimentary rock formed from mud that is a mix of flakes of clay minerals (hydrous aluminium phyllosilicates, e.g., kaolin,)and tiny fragments (silt-sized particles) of other minerals, especially quartz and calcite. Shale is characterized by its tendency to split into thin layers (laminae) less than one centimeter in thickness. This property is called fissility. Shale is the most common sedimentary rock. The term shale is sometimes applied more broadly, as essentially a synonym for mudrock, rather than in the narrower sense of clay-rich fissile mudrock.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Shale";
        }
    }

    return nullptr;
}

string _Geology::Terms::ShearZone(string text)
{
    string model = "llama3";
    string definition = "In geology, a shear zone is a thin zone within the Earth\'s crust or upper mantle that has been strongly deformed, due to the walls of rock on either side of the zone slipping past each other. In the upper crust, where rock is brittle, the shear zone takes the form of a fracture called a fault. In the lower crust and mantle, the extreme conditions of pressure and temperature make the rock ductile. That is, the rock is capable of slowly deforming without fracture, like hot metal being worked by a blacksmith. Here the shear zone is a wider zone, in which the ductile rock has slowly flowed to accommodate the relative motion of the rock walls on either side. Because shear zones are found across a wide depth-range, a great variety of different rock types with their characteristic structures are associated with shear zones.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Shear Zone";
        }
    }

    return nullptr;
}

string _Geology::Terms::Shield(string text)
{
    string model = "llama3";
    string definition = "A shield is a large area of exposed Precambrian crystalline igneous and high-grade metamorphic rocks that form tectonically stable areas. These rocks are older than 570 million years and sometimes date back to around 2 to 3.5 billion years. They have been little affected by tectonic events following the end of the Precambrian, and are relatively flat regions where mountain building, faulting, and other tectonic processes are minor, compared with the activity at their margins and between tectonic plates. Shields occur on all continents.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Shield";
        }
    }

    return nullptr;
}

string _Geology::Terms::ShingleBeach(string text)
{
    string model = "llama3";
    string definition = "A shingle beach, also known as either a cobble beach or gravel beach, is a commonly narrow beach that is composed of coarse, loose, well-rounded, and waterworn gravel, called shingle. The gravel (shingle) typically consists of smooth, spheroidal to flattened, pebbles, cobbles, and sometimes small boulders, generally in the 20 to 200 millimetres (0.8 to 7.9 in) size range. Shingle beaches typically have a steep slope on both their landward and seaward sides. Shingle beaches form in wave-dominated locations where resistant bedrock cliffs provide gravel-sized rock debris. They are also found in high latitudes and temperate shores where the erosion of Quaternary glacial deposits provide gravel-size rock fragments. This term is most widely used in Great Britain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Shingle Beach";
        }
    }

    return nullptr;
}

string _Geology::Terms::Silcrete(string text)
{
    string model = "llama3";
    string definition = "Silcrete is an indurated (resists crumbling or powdering) soil duricrust formed when surface soil, sand, and gravel are cemented by dissolved silica. The formation of silcrete is similar to that of calcrete, formed by calcium carbonate, and ferricrete, formed by iron oxide. It is a hard and resistant material, and though different in origin and nature, appears similar to quartzite. As a duricrust, there is potential for preservation of root structures as trace fossils. Silcrete is common in the arid regions of Australia and Africa often forming the resistant cap rock on features such as the breakaways of the Stuart Range of South Australia. Silcrete can be found at a lesser extent throughout the world especially England (e.g. Hertfordshire puddingstone and sarsen stone), and France. In the Great Plains of the United States, polished silcrete cobbles are locally common on the surface and in river gravels east of the outcrops of the Ogallala Formation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Silcrete";
        }
    }

    return nullptr;
}

string _Geology::Terms::Silt(string text)
{
    string model = "llama3";
    string definition = "Silt is granular material of a size between sand and clay and composed mostly of broken grains of quartz. Silt may occur as a soil (often mixed with sand or clay) or as sediment mixed in suspension with water. Silt usually has a floury feel when dry, and lacks plasticity when wet. Silt can also be felt by the tongue as granular when placed on the front teeth (even when mixed with clay particles). Silt is a common material, making up 45% of average modern mud. It is found in many river deltas and as wind-deposited accumulations, particularly in central Asia, north China, and North America. It is produced in both very hot climates (through such processes as collisions of quartz grains in dust storms) and very cold climates (through such processes as glacial grinding of quartz grains.) Loess is soil rich in silt which makes up some of the most fertile agricultural land on Earth. However, silt is very vulnerable to erosion, and it has poor mechanical properties, making construction on silty soil problematic. The failure of the Teton Dam in 1976 has been attributed to the use of unsuitable loess in the dam core, and liquefication of silty soil is a significant earthquake hazard. Windblown and waterborne silt are significant forms of environmental pollution, often exacerbated by poor farming practices.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Silt";
        }
    }

    return nullptr;
}

string _Geology::Terms::Siltstone(string text)
{
    string model = "llama3";
    string definition = "Siltstone, also known as aleurolite, is a clastic sedimentary rock that is composed mostly of silt. It is a form of mudrock with a low clay mineral content, which can be distinguished from shale by its lack of fissility. Although its permeability and porosity is relatively low, siltstone is sometimes a tight gas reservoir rock, an unconventional reservoir for natural gas that requires hydraulic fracturing for economic gas production. Siltstone was prized in ancient Egypt for manufacturing statuary and cosmetic palettes. The siltstone quarried at Wadi Hammamat was a hard, fine-grained siltstone that resisted flaking and was almost ideal for such uses.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Siltstone";
        }
    }

    return nullptr;
}

string _Geology::Terms::Slate(string text)
{
    string model = "llama3";
    string definition = "Slate is a fine-grained, foliated, homogeneous, metamorphic rock derived from an original shale-type sedimentary rock composed of clay or volcanic ash through low-grade, regional metamorphism. It is the finest-grained foliated metamorphic rock. Foliation may not correspond to the original sedimentary layering, but instead is in planes perpendicular to the direction of metamorphic compression. The foliation in slate, called \"slaty cleavage\", is caused by strong compression in which fine-grained clay forms flakes to regrow in planes perpendicular to the compression. When expertly \"cut\" by striking parallel to the foliation with a specialized tool in the quarry, many slates display a property called fissility, forming smooth, flat sheets of stone which have long been used for roofing, floor tiles, and other purposes. Slate is frequently grey in color, especially when seen en masse covering roofs. However, slate occurs in a variety of colors even from a single locality; for example, slate from North Wales can be found in many shades of grey, from pale to dark, and may also be purple, green, or cyan. Slate is not to be confused with shale, from which it may be formed, or schist. The word \"slate\" is also used for certain types of object made from slate rock. It may mean a single roofing tile made of slate, or a writing slate, which was traditionally a small, smooth piece of the rock, often framed in wood, used with chalk as a notepad or notice board, and especially for recording charges in pubs and inns. The phrases \"clean slate\" and \"blank slate\" come from this usage.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Slate";
        }
    }

    return nullptr;
}

string _Geology::Terms::SlatyCleavage(string text)
{
    string model = "llama3";
    string definition = "Since the nature of cleavage is dependent on scale, slaty cleavage is defined as having 0.01 mm or less of space occurring between layers. Slaty cleavage often occurs after diagenesis and is the first cleavage feature to form after deformation begins. The tectonic strain must be enough to allow a new strong foliation to form, i.e. slaty cleavage.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Slaty Cleavage";
        }
    }

    return nullptr;
}

string _Geology::Terms::Slickenside(string text)
{
    string model = "llama3";
    string definition = "In geology, a slickenside is a smoothly polished surface caused by frictional movement between rocks along a fault. This surface is typically striated with linear features, called slickenlines, in the direction of movement.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Slickenside";
        }
    }

    return nullptr;
}

string _Geology::Terms::Slump(string text)
{
    string model = "llama3";
    string definition = "A slump is a form of mass wasting that occurs when a coherent mass of loosely consolidated materials or a rock layer moves a short distance down a slope. Movement is characterized by sliding along a concave-upward or planar surface. Causes of slumping include earthquake shocks, thorough wetting, freezing and thawing, undercutting, and loading of a slope. Translational slumps occur when a detached landmass moves along a planar surface. Common planar surfaces of failure include joints or bedding planes, especially where a permeable layer overrides an impermeable surface. Block slumps are a type of translational slump in which one or more related block units move downslope as a relatively coherent mass. A rotational slump occurs when a slump block, composed of sediment or rock, slides along a concave-upward slip surface with rotation about an axis parallel to the slope. Rotational movement causes the original surface of the block to become less steep, and the top of the slump is rotated backward. This results in internal deformation of the moving mass consisting chiefly of overturned folds called sheath folds. Slumps have several characteristic features. The cut which forms as the landmass breaks away from the slope is called the scarp and is often cliff-like and concave. In rotational slumps, the main slump block often breaks into a series of secondary slumps and associated scarps to form stair-step pattern of displaced blocks. The upper surface of the blocks are rotated backwards, forming depressions which may accumulate water to create ponds or swampy areas. The surface of the detached mass often remains relatively undisturbed, especially at the top. However, hummocky ridges may form near the toe of the slump. Addition of water and loss of sediment cohesion at the toe may transform slumping material into an earthflow. Transverse cracks at the head scarp drain water, possibly killing vegetation. Transverse ridges, transverse cracks and radial cracks form in displaced material on the foot of the slump. Slumps frequently form due to removal of a slope base, either from natural or manmade processes. Stream or wave erosion, as well as road construction are common instigators for slumping. It is the removal of the slope\'s physical support which provokes this mass wasting event. Thorough wetting is a common cause, which explains why slumping is often associated with heavy rainfall, storm events and earthflows. Rain provides lubrication for the material to slide, and increases the self-mass of the material. Both factors increase the rate of slumping. Earthquakes also trigger massive slumps, such as the fatal slumps of Turnagain Heights Subdivision in Anchorage, Alaska. This particular slump was initiated by a magnitude 8.4 earthquake that resulted in liquefaction of the soil. Around 75 houses were destroyed by the Turnagain Slump. Power lines, fences, roads, houses, and other manmade structures may be damaged if in the path of a slump. The speed of slump varies widely, ranging from meters per second, to meters per year. Sudden slumps usually occur after earthquakes or heavy continuing rains, and can stabilize within a few hours. Most slumps develop over comparatively longer periods, taking months or years to reach stability. An example of a slow-moving slump is the Swift Creek Landslide, a deep-seated rotational slump located on Sumas Mountain, Washington. Slumps may also occur underwater along the margins of continents and islands, resulting from tidal action or a large seismic event. These submarine slumps can generate disastrous tsunamis. The underwater terrain which encompasses the Hawaiian Islands gains its unusual hummocky topography from the many slumps that have taken place for millions of years. One of the largest known slumps occurred on the south-eastern edge of the Agulhas Bank south of Africa in the Pliocene or more recently. This so-called Agulhas Slump is 750 km (470 mi) long, 106 km (66 mi) wide, and has a volume of 20,000 km3 (4,800 cu mi). It is a composite slump with proximal and distal allochthonous sediment masses separated by a large glide plane scar.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Slump";
        }
    }

    return nullptr;
}

string _Geology::Terms::SnowballEarth(string text)
{
    string model = "llama3";
    string definition = "The Snowball Earth is a geohistorical hypothesis that proposes during one or more of Earth\'s icehouse climates, the planet\'s surface became nearly entirely frozen with no liquid oceanic or surface water exposed to the atmosphere. The most academically mentioned period of such a global ice age is believed to have occurred some time before 650 mya during the Cryogenian period, which included at least two large glacial periods, the Sturtian and Marinoan glaciations. Proponents of the hypothesis argue that it best explains sedimentary deposits that are generally believed to be of glacial origin at tropical palaeolatitudes and other enigmatic features in the geological record. Opponents of the hypothesis contest the geological evidence for global glaciation and the geophysical feasibility of an ice- or slush-covered ocean, and they emphasize the difficulty of escaping an all-frozen condition. Several unanswered questions remain, including whether Earth was a full \"snowball\" or a \"slushball\" with a thin equatorial band of open (or seasonally open) water. The Snowball Earth episodes are proposed to have occurred before the sudden radiations of multicellular bioforms known as the Avalon and Cambrian explosions; the most recent Snowball episode may have triggered the evolution of multicellularity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Snowball Earth";
        }
    }

    return nullptr;
}

string _Geology::Terms::Smectite(string text)
{
    string model = "llama3";
    string definition = "A smectite is a mineral mixture of various swelling sheet silicates (phyllosilicates), which have a three-layer 2:1 (TOT) structure and belong to the clay minerals. Smectites mainly consist of montmorillonite, but can often contain secondary minerals such as quartz and calcite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Smectite";
        }
    }

    return nullptr;
}

string _Geology::Terms::SoilLiquefaction(string text)
{
    string model = "llama3";
    string definition = "Soil liquefaction occurs when a cohesionless saturated or partially saturated soil substantially loses strength and stiffness in response to an applied stress such as shaking during an earthquake or other sudden change in stress condition, in which material that is ordinarily a solid behaves like a liquid. In soil mechanics, the term \"liquefied\" was first used by Allen Hazen in reference to the 1918 failure of the Calaveras Dam in California. He described the mechanism of flow liquefaction of the embankment dam as: If the pressure of the water in the pores is great enough to carry all the load, it will have the effect of holding the particles apart and of producing a condition that is practically equivalent to that of quicksand... the initial movement of some part of the material might result in accumulating pressure, first on one point, and then on another, successively, as the early points of concentration were liquefied. The phenomenon is most often observed in saturated, loose (low density or uncompacted), sandy soils. This is because a loose sand has a tendency to compress when a load is applied. Dense sands, by contrast, tend to expand in volume or \'dilate\'. If the soil is saturated by water, a condition that often exists when the soil is below the water table or sea level, then water fills the gaps between soil grains (\'pore spaces\'). In response to soil compressing, the pore water pressure increases and the water attempts to flow out from the soil to zones of low pressure (usually upward towards the ground surface). However, if the loading is rapidly applied and large enough, or is repeated many times (e.g., earthquake shaking, storm wave loading) such that the water does not flow out before the next cycle of load is applied, the water pressures may build to the extent that it exceeds the force (contact stresses) between the grains of soil that keep them in contact. These contacts between grains are the means by which the weight from buildings and overlying soil layers is transferred from the ground surface to layers of soil or rock at greater depths. This loss of soil structure causes it to lose its strength (the ability to transfer shear stress), and it may be observed to flow like a liquid (hence \'liquefaction\'). Although the effects of soil liquefaction have been long understood, engineers took more notice after the 1964 Alaska earthquake and 1964 Niigata earthquake. It was a major cause of the destruction produced in San Francisco\'s Marina District during the 1989 Loma Prieta earthquake, and in the Port of Kobe during the 1995 Great Hanshin earthquake. More recently soil liquefaction was largely responsible for extensive damage to residential properties in the eastern suburbs and satellite townships of Christchurch during the 2010 Canterbury earthquake and more extensively again following the Christchurch earthquakes that followed in early and mid-2011. On 28 September 2018, an earthquake of 7.5 magnitude hit the Central Sulawesi province of Indonesia. Resulting soil liquefaction buried the suburb of Balaroa and Petobo village 3 metres (9.8 ft) deep in mud. The government of Indonesia is considering designating the two neighborhoods of Balaroa and Petobo, that have been totally buried under mud, as mass graves. The building codes in many countries require engineers to consider the effects of soil liquefaction in the design of new buildings and infrastructure such as bridges, embankment dams and retaining structures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Soil Liquefaction";
        }
    }

    return nullptr;
}

string _Geology::Terms::Sorting(string text)
{
    string model = "llama3";
    string definition = "Sorting describes the distribution of grain size of sediments, either in unconsolidated deposits or in sedimentary rocks. The degree of sorting is determined by the range of grain sizes in a sediment deposit and is the result of various transport processes (rivers, debris flow, wind, glaciers, etc.). This should not be confused with crystallite size, which refers to the individual size of a crystal in a solid. Crystallite is the building block of a grain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sorting";
        }
    }

    return nullptr;
}

string _Geology::Terms::Speleothem(string text)
{
    string model = "llama3";
    string definition = "A speleothem is a geological formation made by mineral deposits that accumulate over time in natural caves. Speleothems most commonly form in calcareous caves due to carbonate dissolution reactions. They can take a variety of forms, depending on their depositional history and environment. Their chemical composition, gradual growth, and preservation in caves make them useful paleoclimatic proxies.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Speleothem";
        }
    }

    return nullptr;
}

string _Geology::Terms::Sphene(string text)
{
    string model = "llama3";
    string definition = "Titanite, or sphene is a calcium titanium nesosilicate mineral, CaTiSiO5. Trace impurities of iron and aluminium are typically present. Also commonly present are rare earth metals including cerium and yttrium; calcium may be partly replaced by thorium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sphene";
        }
    }

    return nullptr;
}

string _Geology::Terms::Staurolite(string text)
{
    string model = "llama3";
    string definition = "Staurolite is a reddish brown to black, mostly opaque, nesosilicate mineral with a white streak. It crystallizes in the monoclinic crystal system, has a Mohs hardness of 7 to 7.5 and the chemical formula: Fe2+2Al9O6(SiO4)4(O,OH)2. Magnesium, zinc and manganese substitute in the iron site and trivalent iron can substitute for aluminium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Staurolite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Stone(string text)
{
    string model = "llama3";
    string definition = "In geology, rock (or stone) is any naturally occurring solid mass or aggregate of minerals or mineraloid matter. It is categorized by the minerals included, its chemical composition, and the way in which it is formed. Rocks form the Earth\'s outer solid layer, the crust, and most of its interior, except for the liquid outer core and pockets of magma in the asthenosphere. The study of rocks involves multiple subdisciplines of geology, including petrology and mineralogy. It may be limited to rocks found on Earth, or it may include planetary geology that studies the rocks of other celestial objects. Rocks are usually grouped into three main groups: igneous rocks, sedimentary rocks and metamorphic rocks. Igneous rocks are formed when magma cools in the Earth\'s crust, or lava cools on the ground surface or the seabed. Sedimentary rocks are formed by diagenesis and lithification of sediments, which in turn are formed by the weathering, transport, and deposition of existing rocks. Metamorphic rocks are formed when existing rocks are subjected to such high pressures and temperatures that they are transformed without significant melting. Humanity has made use of rocks since the earliest humans. This early period, called the Stone Age, saw the development of many stone tools. Stone was then used as a major component in the construction of buildings and early infrastructure. Mining developed to extract rocks from the Earth and obtain the minerals within them, including metals. Modern technology has allowed the development of new human-made rocks and rock-like substances, such as concrete.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stone";
        }
    }

    return nullptr;
}

string _Geology::Terms::StormRidge(string text)
{
    string model = "llama3";
    string definition = "A beach ridge usually located further or higher inland caused by wave action from storms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Storm Ridge";
        }
    }

    return nullptr;
}

string _Geology::Terms::Strain(string text)
{
    string model = "llama3";
    string definition = "A change in the volume or shape of a rock mass in response to stress.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Geology::Terms::Stratigraphy(string text)
{
    string model = "llama3";
    string definition = "Stratigraphy is a branch of geology concerned with the study of rock layers (strata) and layering (stratification). It is primarily used in the study of sedimentary and layered volcanic rocks. Stratigraphy has three related subfields: lithostratigraphy (lithologic stratigraphy), biostratigraphy (biologic stratigraphy), and chronostratigraphy (stratigraphy by age).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stratigraphy";
        }
    }

    return nullptr;
}

string _Geology::Terms::Stylolite(string text)
{
    string model = "llama3";
    string definition = "Stylolites (Greek: stylos, pillar; lithos, stone) are serrated surfaces within a rock mass at which mineral material has been removed by pressure dissolution, in a deformation process that decreases the total volume of rock. Minerals which are insoluble in water, such as clays, pyrite and oxides, as well as insoluble organic matter, remain within the stylolites and make them visible. Sometimes host rocks contain no insoluble minerals, in which case stylolites can be recognized by change in texture of the rock. They occur most commonly in homogeneous rocks, carbonates, cherts, sandstones, but they can be found in certain igneous rocks and ice. Their size vary from microscopic contacts between two grains (microstylolites) to large structures up to 20 m in length and up to 10 m in amplitude in ice. Stylolites usually form parallel to bedding, because of overburden pressure, but they can be oblique or even perpendicular to bedding, as a result of tectonic activity. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stylolite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Surficial(string text)
{
    string model = "llama3";
    string definition = "Of or pertaining to the surface.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Surficial";
        }
    }

    return nullptr;
}

string _Geology::Terms::Syenite(string text)
{
    string model = "llama3";
    string definition = "Syenite is a coarse-grained intrusive igneous rock with a general composition similar to that of granite, but deficient in quartz, which, if present at all, occurs in relatively small concentrations (< 5%). It is considered a granitoid. Some syenites contain larger proportions of mafic components and smaller amounts of felsic material than most granites; those are classed as being of intermediate composition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Syenite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Syncline(string text)
{
    string model = "llama3";
    string definition = "In structural geology, a syncline is a fold with younger layers closer to the center of the structure, whereas an anticline is the inverse of a syncline. A synclinorium (plural synclinoriums or synclinoria) is a large syncline with superimposed smaller folds. Synclines are typically a downward fold (synform), termed a synformal syncline (i.e. a trough), but synclines that point upwards can be found when strata have been overturned and folded (an antiformal syncline).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Syncline";
        }
    }

    return nullptr;
}

string _Geology::Terms::Syntaxis(string text)
{
    string model = "llama3";
    string definition = "A syntaxis is an abrupt major change in the dominant orientation of the main fold and thrust structures in an orogenic belt. For example, the Himalayan belt forms a continuous gentle curve in its main part, running almost perpendicular to the motion of the Indian Plate as it collides with the Eurasian Plate. This thrust-dominated plate boundary connects at both ends to the highly oblique, strike-slip dominated boundaries running through Pakistan and Myanmar, forming the Nanga Parbat syntaxis to the west and the Namche Barwa syntaxis in the east.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Syntaxis";
        }
    }

    return nullptr;
}

string _Geology::Terms::TableMountainGroup(string text)
{
    string model = "llama3";
    string definition = "Table Mountain Sandstone (TMS) is a group of rock formations within the Cape Supergroup sequence of rocks. Although the term \"Table Mountain Sandstone\" is still widely used in common parlance, the term TMS is no longer formally recognized; the correct name is the \"Peninsula Formation Sandstone\", which is part of the Table Mountain Group. The designation \"Table Mountain Sandstone\" will, however, in deference to the title, continue to be used in the rest of this article. The name is derived from the famous landmark in Cape Town, Table Mountain. Table Mountain Sandstone is made up predominantly of quartzitic sandstone laid down between 510 (Cambrian Period) and 400 (Silurian Period) million years ago. It is the hardest, and most erosion resistant layer of the Cape Supergroup. It therefore forms most of the highest and most conspicuous peaks in the Western Cape, as well as the steepest cliffs of the Cape Fold Mountains, despite being the oldest, and, therefore, lowermost of the Cape Supergroup sequence. The folding of the sequence into the parallel mountain ranges of the Western Cape started about 330 million years ago, affecting the Cape Supergroup from about Clanwilliam (approximately 200 km north of Cape Town), to about Port Elizabeth (approximately 650 km east of Cape Town). The Cape Supergroup sediments beyond these points are not folded into mountain ranges, but do, in places, form steep cliffs or gorges, where the surrounding sediments have been eroded away (see, for instance, Oribi Gorge in KwaZulu-Natal).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Table Mountain Group";
        }
    }

    return nullptr;
}

string _Geology::Terms::PlateTechtonics(string text)
{
    string model = "llama3";
    string definition = "Tectonic plates are composed of the oceanic lithosphere and the thicker continental lithosphere, each topped by its own kind of crust. Along convergent plate boundaries, the process of subduction carries the edge of one plate down under the other plate and into the mantle. This process reduces the total surface area (crust) of the Earth. The lost surface is balanced by the formation of new oceanic crust along divergent margins by seafloor spreading, keeping the total surface area constant in a tectonic \"conveyor belt\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Plate Techtonics";
        }
    }

    return nullptr;
}

string _Geology::Terms::TectonicPlate(string text)
{
    string model = "llama3";
    string definition = "Tectonic plates are composed of the oceanic lithosphere and the thicker continental lithosphere, each topped by its own kind of crust. Along convergent plate boundaries, the process of subduction carries the edge of one plate down under the other plate and into the mantle. This process reduces the total surface area (crust) of the Earth. The lost surface is balanced by the formation of new oceanic crust along divergent margins by seafloor spreading, keeping the total surface area constant in a tectonic \"conveyor belt\". Tectonic plates are relatively rigid and float across the ductile asthenosphere beneath. Lateral density variations in the mantle result in convection currents, the slow creeping motion of Earth\'s solid mantle. At a seafloor spreading ridge, plates move away from the ridge, which is a topographic high, and the newly formed crust cools as it moves away, increasing its density and contributing to the motion. At a subduction zone the relatively cold, dense oceanic crust sinks down into the mantle, forming the downward convecting limb of a mantle cell, which is the strongest driver of plate motion. The relative importance and interaction of other proposed factors such as active convection, upwelling inside the mantle, and tidal drag of the Moon is still the subject of debate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tectonic Plate";
        }
    }

    return nullptr;
}

string _Geology::Terms::Tekton(string text)
{
    string model = "llama3";
    string definition = "The Ancient Greek noun tekton is a common term for an artisan/craftsman, in particular a carpenter, woodworker, or builder. The term is frequently contrasted with an ironworker, or smith and stone-worker or mason.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tekton";
        }
    }

    return nullptr;
}

string _Geology::Terms::Tektites(string text)
{
    string model = "llama3";
    string definition = "are gravel-sized bodies composed of black, green, brown or grey natural glass formed from terrestrial debris ejected during meteorite impacts. The term was coined by Austrian geologist Franz Eduard Suess (1867-1941), son of Eduard Suess. They generally range in size from millimetres to centimetres. Millimetre-scale tektites are known as microtektites. Tektites are characterized by: a fairly homogeneous composition, an extremely low content of water and other volatiles, an abundance of lechatelierite, a general lack of microscopic crystals known as microlites, not having a chemical relationship to the local bedrock or local sediments, their distribution within geographically extensive strewn fields.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tektites";
        }
    }

    return nullptr;
}

string _Geology::Terms::Tempestite(string text)
{
    string model = "llama3";
    string definition = "Tempestites are storm deposits that can be recognized throughout the geologic record. They are studied in the scientific disciplines of sedimentary geology and paleotempestology. The deposits derive their meaning from the word tempest, a violent storm. Tempestites are preserved within a multitude of sedimentary environments including delta systems, estuarian systems, coastal environments, deep sea environments, and fresh water lacustrine environments. Tempesites most often form in wave-dominated delta systems and preserve, within the sedimentary record, evidence of events and processes below fair weather wave base and above storm weather wave base. They are commonly characterized by hummocky cross-stratified beds that have an erosive base, and can form under combined flow regimes. This erosive base is often seen in the form of gutter casts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tempestite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Tenacity(string text)
{
    string model = "llama3";
    string definition = "In mineralogy, tenacity is a mineral\'s behavior when deformed or broken.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tenacity";
        }
    }

    return nullptr;
}

string _Geology::Terms::Tephra(string text)
{
    string model = "llama3";
    string definition = "Tephra is fragmental material produced by a volcanic eruption regardless of composition, fragment size, or emplacement mechanism. Volcanologists also refer to airborne fragments as pyroclasts. Once clasts have fallen to the ground, they remain as tephra unless hot enough to fuse into pyroclastic rock or tuff. When a volcano explodes, it releases a variety of tephra including ash, cinders, and blocks. These layers settle on the land and, over time, sedimentation occurs incorporating these tephra layers into the geologic record. Tephrochronology is a geochronological technique that uses discrete layers of tephra-volcanic ash from a single eruption-to create a chronological framework in which paleoenvironmental or archaeological records can be placed. Often, when a volcano explodes, biological organisms are killed and their remains are buried within the tephra layer. These fossils are later dated by scientists to determine the age of the fossil and its place within the geologic record.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tephra";
        }
    }

    return nullptr;
}

string _Geology::Terms::TethysOcean(string text)
{
    string model = "llama3";
    string definition = "The Tethys Ocean also called the Tethys Sea or the Neo-Tethys, was a prehistoric ocean during much of the Mesozoic Era and early-mid Cenozoic Era. It was the predecessor to the modern Indian Ocean, the Mediterranean Sea, and the Eurasian inland marine basins (primarily represented today by the Black Sea and Caspian Sea). During the early Mesozoic, as Pangaea broke up, the Tethys Ocean was defined as the ocean located between the ancient continents of Gondwana and Laurasia. After the opening of the Indian and Atlantic oceans during the Cretaceous Period and the breakup of these continents over the same period, it came to be defined as the ocean bordered by the continents of Africa, Eurasia, India, and Australasia. During the early-mid Cenozoic, the Indian, African, Australian and Arabian plates moved north and collided with the Eurasian plate, which created new borders to the ocean, a land barrier to the flow of currents between the Indian and Mediterranean basins, and the orogenies of the Alpide belt (including the Alps, Himalayas, Zagros, and Caucasus Mountains). All of these geological events, in addition to a drop in sea level rise from Antarctic glaciation, brought an end to the Tethys as it previously existed, fragmenting it into the Indian Ocean, the Mediterranean Sea, and the Paratethys. It was preceded by the Paleo-Tethys Ocean, which lasted between the Cambrian and the Early Triassic, while the Neotethys formed during the Late Triassic and lasted in some form up to the Oligocene-Miocene boundary (about 24-21 million years ago) when it completely closed. A portion known as the Paratethys was isolated during the Oligocene (34 million years ago) and lasted up to the Pliocene (about 5 million years ago), when it largely dried out. The modern inland seas of Europe and Western Asia, namely the Black Sea and Caspian Sea, are remnants of the Paratethys Sea.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tethys Ocean";
        }
    }

    return nullptr;
}

string _Geology::Terms::Till(string text)
{
    string model = "llama3";
    string definition = "Till or glacial till is unsorted glacial sediment. Till is derived from the erosion and entrainment of material by the moving ice of a glacier. It is deposited some distance down-ice to form terminal, lateral, medial and ground moraines. Till is classified into primary deposits, laid down directly by glaciers, and secondary deposits, reworked by fluvial transport and other processes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Till";
        }
    }

    return nullptr;
}

string _Geology::Terms::Tillite(string text)
{
    string model = "llama3";
    string definition = "In cases where till has been indurated or lithified by subsequent burial into solid rock, it is known as the sedimentary rock tillite. Matching beds of ancient tillites on opposite sides of the south Atlantic Ocean provided early evidence for continental drift. The same tillites also provide some support to the Precambrian Snowball Earth glaciation event hypothesis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tillite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Titanite(string text)
{
    string model = "llama3";
    string definition = "Titanite, or sphene is a calcium titanium nesosilicate mineral, CaTiSiO5. Trace impurities of iron and aluminium are typically present. Also commonly present are rare earth metals including cerium and yttrium; calcium may be partly replaced by thorium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Titanite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Topography(string text)
{
    string model = "llama3";
    string definition = "Topography is the study of the forms and features of land surfaces. The topography of an area may refer to the land forms and features themselves, or a description or depiction in maps. Topography is a field of geoscience and planetary science and is concerned with local detail in general, including not only relief, but also natural, artificial, and cultural features such as roads, land boundaries, and buildings. In the United States, topography often means specifically relief, even though the USGS topographic maps record not just elevation contours, but also roads, populated places, structures, land boundaries, and so on. Topography in a narrow sense involves the recording of relief or terrain, the three-dimensional quality of the surface, and the identification of specific landforms; this is also known as geomorphometry. In modern usage, this involves generation of elevation data in digital form (DEM). It is often considered to include the graphic representation of the landform on a map by a variety of cartographic relief depiction techniques, including contour lines, hypsometric tints, and relief shading.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Topography";
        }
    }

    return nullptr;
}

string _Geology::Terms::Tor(string text)
{
    string model = "llama3";
    string definition = "A tor, which is also known by geomorphologists as either a castle koppie or kopje, is a large, free-standing rock outcrop that rises abruptly from the surrounding smooth and gentle slopes of a rounded hill summit or ridge crest. In the South West of England, the term is commonly also used for the hills themselves - particularly the high points of Dartmoor in Devon and Bodmin Moor in Cornwall.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tor";
        }
    }

    return nullptr;
}

string _Geology::Terms::TraceFossil(string text)
{
    string model = "llama3";
    string definition = "A trace fossil, also known as an ichnofossil  is a fossil record of biological activity by lifeforms but not the preserved remains of the organism itself. Trace fossils contrast with body fossils, which are the fossilized remains of parts of organisms\' bodies, usually altered by later chemical activity or by mineralization. The study of such trace fossils is ichnology - the work of ichnologists. Trace fossils may consist of physical impressions made on or in the substrate by an organism. For example, burrows, borings (bioerosion), urolites (erosion caused by evacuation of liquid wastes), footprints, feeding marks, and root cavities may all be trace fossils. The term in its broadest sense also includes the remains of other organic material produced by an organism; for example coprolites (fossilized droppings) or chemical markers (sedimentological structures produced by biological means; for example, the formation of stromatolites). However, most sedimentary structures (for example those produced by empty shells rolling along the sea floor) are not produced through the behaviour of an organism and thus are not considered trace fossils. The study of traces - ichnology - divides into paleoichnology, or the study of trace fossils, and neoichnology, the study of modern traces. Ichnological science offers many challenges, as most traces reflect the behaviour - not the biological affinity - of their makers. Accordingly, researchers classify trace fossils into form genera based on their appearance and on the implied behaviour, or ethology, of their makers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Trace Fossil";
        }
    }

    return nullptr;
}

string _Geology::Terms::Trachyte(string text)
{
    string model = "llama3";
    string definition = "Trachyte is an extrusive igneous rock composed mostly of alkali feldspar. It is usually light-colored and aphanitic (fine-grained), with minor amounts of mafic minerals, and is formed by the rapid cooling of lava (or shallow intrusions) enriched with silica and alkali metals. It is the volcanic equivalent of syenite. Trachyte is common wherever alkali magma is erupted, including in late stages of ocean island volcanism and in continental rift valleys, above mantle plumes, and in areas of back-arc extension. Trachyte has also been found in Gale crater on Mars. Trachyte has been used as decorative building stone and was extensively used as dimension stone in the Roman Empire and the Republic of Venice.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Trachyte";
        }
    }

    return nullptr;
}

string _Geology::Terms::Travertine(string text)
{
    string model = "llama3";
    string definition = "Travertine is a form of terrestrial limestone deposited around mineral springs, especially hot springs. It often has a fibrous or concentric appearance and exists in white, tan, cream-colored, and rusty varieties. It is formed by a process of rapid precipitation of calcium carbonate, often at the mouth of a hot spring or in a limestone cave. In the latter, it can form stalactites, stalagmites, and other speleothems. It is frequently used in Italy and elsewhere as a building material. Similar (but softer and extremely porous) deposits formed from ambient-temperature water are known as tufa.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Travertine";
        }
    }

    return nullptr;
}

string _Geology::Terms::Triclinic(string text)
{
    string model = "llama3";
    string definition = "In crystallography, the triclinic (or anorthic) crystal system is one of the seven crystal systems. A crystal system is described by three basis vectors. In the triclinic system, the crystal is described by vectors of unequal length, as in the orthorhombic system. In addition, the angles between these vectors must all be different and may not include 90 degrees. The triclinic lattice is the least symmetric of the 14 three-dimensional Bravais lattices. It has (itself) the minimum symmetry all lattices have: points of inversion at each lattice point and at 7 more points for each lattice point: at the midpoints of the edges and the faces, and at the center points. It is the only lattice type that itself has no mirror planes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Triclinic";
        }
    }

    return nullptr;
}

string _Geology::Terms::Tuff(string text)
{
    string model = "llama3";
    string definition = "Tuff is a type of rock made of volcanic ash ejected from a vent during a volcanic eruption. Following ejection and deposition, the ash is lithified into a solid rock. Rock that contains greater than 75% ash is considered tuff, while rock containing 25% to 75% ash is described as tuffaceous (for example, tuffaceous sandstone). Tuff composed of sandy volcanic material can be referred to as volcanic sandstone. Tuff is a relatively soft rock, so it has been used for construction since ancient times. Because it is common in Italy, the Romans used it often for construction. The Rapa Nui people used it to make most of the moai statues on Easter Island. Tuff can be classified as either igneous or sedimentary rock. It is usually studied in the context of igneous petrology, although it is sometimes described using sedimentological terms. Tuff is often erroneously called tufa in guidebooks and in television programs but tufa is a form of travertine.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tuff";
        }
    }

    return nullptr;
}

string _Geology::Terms::Tundra(string text)
{
    string model = "llama3";
    string definition = "In physical geography, tundra is a type of biome where tree growth is hindered by frigid temperatures and short growing seasons. There are three regions and associated types of tundra: Arctic tundra, alpine tundra, and Antarctic tundra. Tundra vegetation is composed of dwarf shrubs, sedges, grasses, mosses, and lichens. Scattered trees grow in some tundra regions. The ecotone (or ecological boundary region) between the tundra and the forest is known as the tree line or timberline. The tundra soil is rich in nitrogen and phosphorus. The soil also contains large amounts of biomass and decomposed biomass that has been stored as methane and carbon dioxide in the permafrost, making the tundra soil a carbon sink. As global warming heats the ecosystem and causes soil thawing, the permafrost carbon cycle accelerates and releases much of these soil-contained greenhouse gases into the atmosphere, creating a feedback cycle that changes climate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tundra";
        }
    }

    return nullptr;
}

string _Geology::Terms::Turbidite(string text)
{
    string model = "llama3";
    string definition = "A turbidite is the geologic deposit of a turbidity current, which is a type of amalgamation of fluidal and sediment gravity flow responsible for distributing vast amounts of clastic sediment into the deep ocean.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Turbidite";
        }
    }

    return nullptr;
}

string _Geology::Terms::TurbidityCurrent(string text)
{
    string model = "llama3";
    string definition = "A turbidity current is most typically an underwater current of usually rapidly moving, sediment-laden water moving down a slope; although current research (2018) indicates that water-saturated sediment may be the primary actor in the process. Turbidity currents can also occur in other fluids besides water. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Turbidity Current";
        }
    }

    return nullptr;
}

string _Geology::Terms::TygerbergFormation(string text)
{
    string model = "llama3";
    string definition = "A component of the PreCambrian Malmesbury group of South Africa.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tygerberg Formation";
        }
    }

    return nullptr;
}

string _Geology::Terms::Ultramafic(string text)
{
    string model = "llama3";
    string definition = "Ultramafic rocks (also referred to as ultrabasic rocks, although the terms are not wholly equivalent) are igneous and meta-igneous rocks with a very low silica content (less than 45%), generally >18% MgO, high FeO, low potassium, and are usually composed of greater than 90% mafic minerals (dark colored, high magnesium and iron content). The Earth\'s mantle is composed of ultramafic rocks. Ultrabasic is a more inclusive term that includes igneous rocks with low silica content that may not be extremely enriched in Fe and Mg, such as carbonatites and ultrapotassic igneous rocks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ultramafic";
        }
    }

    return nullptr;
}

string _Geology::Terms::UndulatingHills(string text)
{
    string model = "llama3";
    string definition = "see \"rolling hills\"";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Undulating Hills";
        }
    }

    return nullptr;
}

string _Geology::Terms::Urgonian(string text)
{
    string model = "llama3";
    string definition = "A shallow-water carbonate facies deposited along the northern margins of the Tethys Ocean during the Barremian and Aptian.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Urgonian";
        }
    }

    return nullptr;
}

string _Geology::Terms::Vacuole(string text)
{
    string model = "llama3";
    string definition = "A vacuole is a membrane-bound organelle which is present in plant and fungal cells and some protist, animal, and bacterial cells. Vacuoles are essentially enclosed compartments which are filled with water containing inorganic and organic molecules including enzymes in solution, though in certain cases they may contain solids which have been engulfed. Vacuoles are formed by the fusion of multiple membrane vesicles and are effectively just larger forms of these. The organelle has no basic shape or size; its structure varies according to the requirements of the cell.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Geology::Terms::VariscanOrogeny(string text)
{
    string model = "llama3";
    string definition = "The Variscan orogeny, or Hercynian orogeny, was a geologic mountain-building event caused by Late Paleozoic continental collision between Euramerica (Laurussia) and Gondwana to form the supercontinent of Pangaea.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Variscan Orogeny";
        }
    }

    return nullptr;
}

string _Geology::Terms::Varve(string text)
{
    string model = "llama3";
    string definition = "A varve is an annual layer of sediment or sedimentary rock. The word \'varve\' derives from the Swedish word varv whose meanings and connotations include \'revolution\', \'in layers\', and \'circle\'. The term first appeared as Hvarfig lera (varved clay) on the first map produced by the Geological Survey of Sweden in 1862. Initially, \"varve\" referred to each of the separate components comprising a single annual layer in glacial lake sediments, but at the 1910 Geological Congress, the Swedish geologist Gerard De Geer (1858-1943) proposed a new formal definition, where varve means the whole of any annual sedimentary layer. More recently introduced terms such as \'annually laminated\' are synonymous with varve. Of the many rhythmites in the geological record, varves are one of the most important and illuminating in studies of past climate change. Varves are amongst the smallest-scale events recognised in stratigraphy. An annual layer can be highly visible because the particles washed into the layer in the spring when there is greater flow strength are much coarser than those deposited later in the year. This forms a pair of layers-one coarse and one fine-for each annual cycle. Varves form only in fresh or brackish water, because the high levels of salt in normal sea water coagulate the clay into coarse grains. Since the saline waters leave coarse particles all year, it is nearly impossible to distinguish the individual layers in salt waters. Indeed, clay flocculation occurs at high ionic strength due to the collapse of the clay electrical double layer (EDL), which decreases the electrostatic repulsion between negatively charged clay particles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Varve";
        }
    }

    return nullptr;
}

string _Geology::Terms::Vein(string text)
{
    string model = "llama3";
    string definition = "In geology, a vein is a distinct sheetlike body of crystallized minerals within a rock. Veins form when mineral constituents carried by an aqueous solution within the rock mass are deposited through precipitation. The hydraulic flow involved is usually due to hydrothermal circulation. Veins are classically thought of as being planar fractures in rocks, with the crystal growth occurring normal to the walls of the cavity, and the crystal protruding into open space. This certainly is the method for the formation of some veins. However, it is rare in geology for significant open space to remain open in large volumes of rock, especially several kilometers below the surface. Thus, there are two main mechanisms considered likely for the formation of veins: open-space filling and crack-seal growth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vein";
        }
    }

    return nullptr;
}

string _Geology::Terms::Vermiculite(string text)
{
    string model = "llama3";
    string definition = "Vermiculite is a hydrous phyllosilicate mineral which undergoes significant expansion when heated. Exfoliation occurs when the mineral is heated sufficiently; commercial furnaces can routinely produce this effect. Vermiculite forms by the weathering or hydrothermal alteration of biotite or phlogopite. Large commercial vermiculite mines exist in the United States, Russia, South Africa, China, and Brazil.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vermiculite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Vergence(string text)
{
    string model = "llama3";
    string definition = "In structural geology, vergence refers to the direction of the overturned component of an asymmetric fold. In simpler terms, vergence can be described as the horizontal direction in which the upper component of rotation is directed. Vergence can be observed and recorded in folds to help a geologist determine characteristics of larger fold areas. Vergence is used to provide an overall characterization, in the symmetry (or asymmetry) of folds, and can be used to observe changes in small-scale structures in relation to the axis of a large fold. The vergence of a fold lies parallel to the surrounding surfaces of a fold, so if these surrounding surfaces are not horizontal, the vergence of the fold will be inclined. For a fold, the direction and the extent to which vergence occurs can be calculated from the strike and dip of the axial surfaces, along with that of the enveloping surfaces. These calculations can be handy for geologists in determining the overall elements of larger areas.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vergence";
        }
    }

    return nullptr;
}

string _Geology::Terms::Vesiculated(string text)
{
    string model = "llama3";
    string definition = "Vesicular texture is a volcanic rock texture characterized by a rock being pitted with many cavities (known as vesicles) at its surface and inside.  This texture is common in aphanitic, or glassy, igneous rocks that have come to the surface of the Earth, a process known as extrusion. As magma rises to the surface the pressure on it decreases. When this happens gasses dissolved in the magma are able to come out of solution, forming gas bubbles (the cavities) inside it. When the magma finally reaches the surface as lava and cools, the rock solidifies around the gas bubbles and traps them inside, preserving them as holes filled with gas called vesicles.  A related texture is amygdaloidal in which the volcanic rock, usually basalt or andesite, has cavities, or vesicles, that are filled with secondary minerals, such as zeolites, calcite, quartz, or chalcedony. Individual cavity fillings are termed amygdules (American usage) or amygdales (British usage). Sometimes these can be sources of semi-precious or precious stones such as diamonds. Rock types that display a vesicular texture include pumice and scoria.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vesiculated";
        }
    }

    return nullptr;
}

string _Geology::Terms::Vitrinite(string text)
{
    string model = "llama3";
    string definition = "Vitrinite is one of the primary components of coals and most sedimentary kerogens. Vitrinite is a type of maceral, where \"macerals\" are organic components of coal analogous to the \"minerals\" of rocks. Vitrinite has a shiny appearance resembling glass (vitreous). It is derived from the cell-wall material or woody tissue of the plants from which coal was formed. Chemically, it is composed of polymers, cellulose and lignin. The vitrinite group, which consists of various individual vitrinite macerals, is the most common component of coals. It is also abundant in kerogens that are derived from the same biogenic precursors as coals, namely land plants and humic peats. Vitrinite forms diagenetically by the thermal alteration of lignin and cellulose in plant cell walls. It is therefore common in sedimentary rocks that are rich in organic matter, such as shales and marls with a terrigenous origin, or some terrigenous content. Conversely, carbonates, evaporites and well-sorted sandstones have very low vitrinite contents. Vitrinite is absent in pre-Silurian rocks because land plants had not yet evolved.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vitrinite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Vitrophyre(string text)
{
    string model = "llama3";
    string definition = "A vitrophyre is a porphyritic volcanic rock in which phenocrysts are embedded in a glassy matrix. Vitrophyres are contrasted from typical porphyritic rocks in that the latter has both crystalline phenocrysts (larger grains) and a crystalline matrix (smaller grains), whereas the former has a distinctly glassy matrix. Vitrophyres can be alternatively described as rocks having vitrophyric texture. This texture results from the rapid quenching of a lava where phenocrysts had started to form prior to eruption.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vitrophyre";
        }
    }

    return nullptr;
}

string _Geology::Terms::Volcanic(string text)
{
    string model = "llama3";
    string definition = "A volcano is a rupture in the crust of a planetary-mass object, such as Earth, that allows hot lava, volcanic ash, and gases to escape from a magma chamber below the surface. The process that forms volcanoes is called volcanism. On Earth, volcanoes are most often found where tectonic plates are diverging or converging, and because most of Earth\'s plate boundaries are underwater, most volcanoes are found underwater. For example, a mid-ocean ridge, such as the Mid-Atlantic Ridge, has volcanoes caused by divergent tectonic plates whereas the Pacific Ring of Fire has volcanoes caused by convergent tectonic plates. Volcanoes can also form where there is stretching and thinning of the crust\'s plates, such as in the East African Rift, the Wells Gray-Clearwater volcanic field, and the Rio Grande rift in North America. Volcanism away from plate boundaries has been postulated to arise from upwelling diapirs from the core-mantle boundary, 3,000 kilometres (1,900 mi) deep within Earth. This results in hotspot volcanism, of which the Hawaiian hotspot is an example. Volcanoes are usually not created where two tectonic plates slide past one another. Large eruptions can affect atmospheric temperature as ash and droplets of sulfuric acid obscure the Sun and cool Earth\'s troposphere. Historically, large volcanic eruptions have been followed by volcanic winters which have caused catastrophic famines. Other planets besides Earth have volcanoes. For example, volcanoes are very numerous on Venus. Mars has significant volcanoes. In 2009, a paper was published suggesting a new definition for the word \'volcano\' that includes processes such as cryovolcanism. It suggested that a volcano be defined as \'an opening on a planet or moon\'s surface from which magma, as defined for that body, and/or magmatic gas is erupted.\' ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Volcanic";
        }
    }

    return nullptr;
}

string _Geology::Terms::VolcanicBomb(string text)
{
    string model = "llama3";
    string definition = "A volcanic bomb or lava bomb is a mass of partially molten rock (tephra) larger than 64 mm (2.5 inches) in diameter, formed when a volcano ejects viscous fragments of lava during an eruption. Because volcanic bombs cool after they leave the volcano, they are extrusive igneous rocks. Volcanic bombs can be thrown many kilometres from an erupting vent, and often acquire aerodynamic shapes during their flight. Bombs can be extremely large; the 1935 eruption of Mount Asama in Japan expelled bombs measuring 5-6 m (16-20 ft) in diameter up to 600 m (2,000 ft) from the vent. Volcanic bombs are a significant volcanic hazard, and can cause severe injuries and death to people in an eruption zone. One such incident occurred at Galeras volcano in Colombia in 1993; six people near the summit were killed and several seriously injured by lava bombs when the volcano erupted unexpectedly. On July 16, 2018, 23 people were injured on a tour boat near the Kilauea volcano as a result of a basketball-sized lava bomb from the 2018 lower Puna eruption. Volcanic bombs are known to occasionally explode from internal gas pressure as they cool, but in most cases, most of the damage they cause is from impact, or subsequent fire damage. Bomb explosions are most often observed in \"bread-crust\" type bombs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Volcanic Bomb";
        }
    }

    return nullptr;
}

string _Geology::Terms::Vug(string text)
{
    string model = "llama3";
    string definition = "A vug, vugh, or vugg is a small- to medium-sized cavity inside rock. It may be formed through a variety of processes. Most commonly, cracks and fissures opened by tectonic activity (folding and faulting) are partially filled by quartz, calcite, and other secondary minerals. Open spaces within breccias formed by an ancient collapse are another important source of vugs. Vugs may also form when mineral crystals or fossils inside a rock matrix are later removed through erosion or dissolution processes, leaving behind irregular voids. The inner surfaces of such vugs are often coated with a crystal druse. Fine crystals are often found in vugs where the open space allows the free development of external crystal form. The term vug is not applied to veins and fissures that have become completely filled, but may be applied to any small cavities within such veins. Geodes are a vug-formed rock, although that term is usually reserved for more rounded crystal-lined cavities in sedimentary rocks and ancient lavas. The word vug was introduced to the English language by Cornish miners, from the days when Cornwall was a major supplier of tin. The Cornish word was vooga, which meant \"cave\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vug";
        }
    }

    return nullptr;
}

string _Geology::Terms::WiggleTrace(string text)
{
    string model = "llama3";
    string definition = "A graph that plots wave amplitudes (recorded by seismic reflection and borehole logging) as a function of time, with the positive peaks shaded in a single dark colour.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wiggle Trace";
        }
    }

    return nullptr;
}

string _Geology::Terms::Wolframite(string text)
{
    string model = "llama3";
    string definition = "Wolframite is an iron, manganese, and tungstate mineral with a chemical formula of (Fe,Mn)WO4 that is the intermediate mineral between ferberite (Fe2+ rich) and hübnerite (Mn2+ rich). Along with scheelite, the wolframite series are the most important tungsten ore minerals. Wolframite is found in quartz veins and pegmatites associated with granitic intrusives. Associated minerals include cassiterite, scheelite, bismuth, quartz, pyrite, galena, sphalerite, and arsenopyrite. This mineral was historically found in Europe in Bohemia, Saxony, and in the UK in Devon and Cornwall. China reportedly has the world\'s largest supply of tungsten ore with about 60%. Other producers are Spain, Canada, Portugal, Russia, Australia, Thailand, South Korea, Rwanda, Bolivia, the United States, and the Democratic Republic of the Congo.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wolframite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Xenolith(string text)
{
    string model = "llama3";
    string definition = "A xenolith (\"foreign rock\") is a rock fragment (country rock) that becomes enveloped in a larger rock during the latter\'s development and solidification. In geology, the term xenolith is almost exclusively used to describe inclusions in igneous rock entrained during magma ascent, emplacement and eruption. Xenoliths may be engulfed along the margins of a magma chamber, torn loose from the walls of an erupting lava conduit or explosive diatreme or picked up along the base of a flowing body of lava on the Earth\'s surface. A xenocryst is an individual foreign crystal included within an igneous body. Examples of xenocrysts are quartz crystals in a silica-deficient lava and diamonds within kimberlite diatremes. Xenoliths can be non-uniform within individual locations, even in areas which are spatially limited, e.g. rhyolite-dominated lava of Niijima volcano (Japan) contains two types of gabbroic xenoliths which are of different origin - they were formed in different temperature and pressure conditions. Although the term xenolith is most commonly associated with inclusions in igneous rocks, a broad definition could also include rock fragments which have become encased in sedimentary rock. Xenoliths have been found in some meteorites. To be considered a true xenolith, the included rock must be identifiably different from the rock in which it is enveloped; an included rock of similar type is called an autolith or a cognate inclusion. Xenoliths and xenocrysts provide important information about the composition of the otherwise inaccessible mantle. Basalts, kimberlites, lamproites and lamprophyres, which have their source in the upper mantle, often contain fragments and crystals assumed to be a part of the originating mantle mineralogy. Xenoliths of dunite, peridotite and spinel lherzolite in basaltic lava flows are one example. Kimberlites contain, in addition to diamond xenocrysts, fragments of lherzolites of varying composition. The aluminium-bearing minerals of these fragments provide clues to the depth of origin. Calcic plagioclase is stable to a depth of 25 km (16 mi). Between 25 km (16 mi) and about 60 km (37 mi), spinel is the stable aluminium phase. At depths greater than about 60 km, dense garnet becomes the aluminium-bearing mineral. Some kimberlites contain xenoliths of eclogite, which is considered to be the high-pressure metamorphic product of basaltic oceanic crust, as it descends into the mantle along subduction zones.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Xenolith";
        }
    }

    return nullptr;
}

string _Geology::Terms::Xenotime(string text)
{
    string model = "llama3";
    string definition = "Xenotime is a rare-earth phosphate mineral, the major component of which is yttrium orthophosphate (YPO4). It forms a solid solution series with chernovite-(Y) (YAsO4) and therefore may contain trace impurities of arsenic, as well as silicon dioxide and calcium. The rare-earth elements dysprosium, erbium, terbium and ytterbium, as well as metal elements such as thorium and uranium (all replacing yttrium) are the expressive secondary components of xenotime. Due to uranium and thorium impurities, some xenotime specimens may be weakly to strongly radioactive. Lithiophyllite, monazite and purpurite are sometimes grouped with xenotime in the informal \"anhydrous phosphates\" group. Xenotime is used chiefly as a source of yttrium and heavy lanthanide metals (dysprosium, ytterbium, erbium and gadolinium). Occasionally, gemstones are also cut from the finest xenotime crystals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Xenotime";
        }
    }

    return nullptr;
}

string _Geology::Terms::XRayDiffraction(string text)
{
    string model = "llama3";
    string definition = "X-ray diffraction is a generic term for phenomena associated with changes in the direction of X-ray beams due to interactions with the electrons around atoms. It occurs due to elastic scattering, when there is no change in the energy of the waves. The resulting map of the directions of the X-rays far from the sample is called a diffraction pattern. It is different from X-ray crystallography which exploits X-ray diffraction to determine the arrangement of atoms in materials, and also has other components such as ways to map from experimental diffraction measurements to the positions of atoms. This article provides an overview of X-ray diffraction, starting with the early history of x-rays and the discovery that they have the right spacings to be diffracted by crystals. In many cases these diffraction patterns can be Interpreted using a single scattering or kinematical theory with conservation of energy (wave vector). Many different types of X-ray sources exist, ranging from ones used in laboratories to higher brightness synchrotron light sources. Similar diffraction patterns can be produced by related scattering techniques such as electron diffraction or neutron diffraction. If single crystals of sufficient size cannot be obtained, various other X-ray methods can be applied to obtain less detailed information; such methods include fiber diffraction, powder diffraction and (if the sample is not crystallized) small-angle X-ray scattering (SAXS).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "X Ray Diffraction";
        }
    }

    return nullptr;
}

string _Geology::Terms::XRayFluorescence(string text)
{
    string model = "llama3";
    string definition = "X-ray fluorescence (XRF) is the emission of characteristic \"secondary\" (or fluorescent) X-rays from a material that has been excited by being bombarded with high-energy X-rays or gamma rays. The phenomenon is widely used for elemental analysis and chemical analysis, particularly in the investigation of metals, glass, ceramics and building materials, and for research in geochemistry, forensic science, archaeology and art objects such as paintings.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "X Ray Fluorescence";
        }
    }

    return nullptr;
}

string _Geology::Terms::XyloidCoal(string text)
{
    string model = "llama3";
    string definition = "A soft brown fuel with characteristics that put it somewhere between coal and peat.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Xyloid Coal";
        }
    }

    return nullptr;
}

string _Geology::Terms::Yellowcake(string text)
{
    string model = "llama3";
    string definition = "A kind of uranium concentrate powder obtained from leach solutions in an intermediate step in the enrichment of uranium ores.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Yellowcake";
        }
    }

    return nullptr;
}

string _Geology::Terms::YoungsModulus(string text)
{
    string model = "llama3";
    string definition = "Young\'s modulus (or Young modulus) is a mechanical property of solid materials that measures the tensile or compressive stiffness when the force is applied lengthwise. It is the modulus of elasticity for tension or axial compression. Young\'s modulus is defined as the ratio of the stress (force per unit area) applied to the object and the resulting axial strain (displacement or deformation) in the linear elastic region of the material. Although Young\'s modulus is named after the 19th-century British scientist Thomas Young, the concept was developed in 1727 by Leonhard Euler. The first experiments that used the concept of Young\'s modulus in its modern form were performed by the Italian scientist Giordano Riccati in 1782, pre-dating Young\'s work by 25 years. The term modulus is derived from the Latin root term modus, which means measure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Geology::Terms::Ypresian(string text)
{
    string model = "llama3";
    string definition = "In the geologic timescale the Ypresian is the oldest age or lowest stratigraphic stage of the Eocene. It spans the time between 56 and 47.8 Ma, is preceded by the Thanetian Age (part of the Paleocene) and is followed by the Eocene Lutetian Age. The Ypresian is consistent with the Lower Eocene (Early Eocene).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ypresian";
        }
    }

    return nullptr;
}

string _Geology::Terms::Zeolite(string text)
{
    string model = "llama3";
    string definition = "Zeolite is a family of several microporous, crystalline aluminosilicate materials commonly used as commercial adsorbents and catalysts. They mainly consist of silicon, aluminium, oxygen, and have the general formula M1/n^n+(AIO2)^- (SiO2)x*yH2O where m^n+1/n is either a metal ion or H+.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zeolite";
        }
    }

    return nullptr;
}

string _Geology::Terms::Zircon(string text)
{
    string model = "llama3";
    string definition = "Zircon is a mineral belonging to the group of nesosilicates and is a source of the metal zirconium. Its chemical name is zirconium(IV) silicate, and its corresponding chemical formula is ZrSiO4. An empirical formula showing some of the range of substitution in zircon is (Zr1-y, REEy)(SiO4)1-x(OH)4x-y. Zircon precipitates from silicate melts and has relatively high concentrations of high field strength incompatible elements. For example, hafnium is almost always present in quantities ranging from 1 to 4%. The crystal structure of zircon is tetragonal crystal system. The natural color of zircon varies between colorless, yellow-golden, red, brown, blue, and green. The name derives from the Persian zargun, meaning \"gold-hued\". This word is changed into \"jargoon\", a term applied to light-colored zircons. The English word \"zircon\" is derived from Zirkon, which is the German adaptation of this word. Yellow, orange, and red zircon is also known as \"hyacinth\", from the flower hyacinthus, whose name is of Ancient Greek origin.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zircon";
        }
    }

    return nullptr;
}