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
#include "Chemistry.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _Chemistry::Terms::AbsoluteZero(string text)
{
    string model = "llama3";
    string definition = "A theoretical condition concerning a system at the lowest limit of the thermodynamic temperature scale, or zero kelvins, at which the system does not emit or absorb energy (i.e. all atoms are at rest). By extrapolating the ideal gas law, the internationally agreed-upon value for absolute zero has been determined as -273.15C (-459.67F; 0.00 K).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Absorbance(string text)
{
    string model = "llama3";
    string definition = "Absorbance is defined as \"the logarithm of the ratio of incident to transmitted radiant power through a sample (excluding the effects on cell walls)\". Alternatively, for samples which scatter light, absorbance may be defined as \"the negative logarithm of one minus absorptance, as measured on a uniform sample\". The term is used in many technical areas to quantify the results of an experimental measurement. While the term has its origin in quantifying the absorption of light, it is often entangled with quantification of light which is \"lost\" to a detector system through other mechanisms. What these uses of the term tend to have in common is that they refer to a logarithm of the ratio of a quantity of light incident on a sample or material to that which is detected after the light has interacted with the sample.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::AbsorbtionChemistry(string text)
{
    string model = "llama3";
    string definition = "Absorption is a physical or chemical phenomenon or a process in which atoms, molecules or ions enter the liquid or solid bulk phase of a material. This is a different process from adsorption, since molecules undergoing absorption are taken up by the volume, not by the surface (as in the case for adsorption). ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absorbtion Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AccuracyAndPrecision(string text)
{
    string model = "llama3";
    string definition = "Accuracy and precision are two measures of observational error. Accuracy is how close a given set of measurements (observations or readings) are to their true value. Precision is how close the measurements are to each other.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Accuracy And Precision";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Acetyl(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, an acetyl group is a functional group denoted by the chemical formula -COCH3 and the structure -C(=O)-CH3. It is sometimes represented by the symbol Ac (not to be confused with the element actinium). In IUPAC nomenclature, an acetyl group is called an ethanoyl group. An acetyl group contains a methyl group (-CH3) that is single-bonded to a carbonyl (C=O), making it an acyl group. The carbonyl center of an acyl radical has one non-bonded electron with which it forms a chemical bond to the remainder (denoted with the letter R) of the molecule. The acetyl moiety is a component of many organic compounds, including acetic acid, the neurotransmitter acetylcholine, acetyl-CoA, acetylcysteine, acetaminophen (also known as paracetamol), and acetylsalicylic acid (also known as aspirin).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acetyl";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Achirala(string text)
{
    string model = "llama3";
    string definition = "a property of asymmetry important in several branches of science. The word chirality is derived from the Greek ?ε?? (kheir), \"hand\", a familiar chiral object.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Achirala";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Achiral(string text)
{
    string model = "llama3";
    string definition = "(of a molecule) Having the geometric symmetry of being indistinguishable from its own mirror image; lacking chirality.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Achiral";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Acid(string text)
{
    string model = "llama3";
    string definition = "An acid is a molecule or ion capable of either donating a proton (i.e. hydrogen ion, H+), known as a Bronsted-Lowry acid, or forming a covalent bond with an electron pair, known as a Lewis acid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::AcidAnhydride(string text)
{
    string model = "llama3";
    string definition = "An acid anhydride is a type of chemical compound derived by the removal of water molecules from an acid. In organic chemistry, organic acid anhydrides contain the functional group -C(=O)-O-C(=O)-. Organic acid anhydrides often form when one equivalent of water is removed from two equivalents of an organic acid in a dehydration reaction. In inorganic chemistry, an acid anhydride refers to an acidic oxide, an oxide that reacts with water to form an oxyacid (an inorganic acid that contains oxygen or carbonic acid), or with a base to form a salt.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acid Anhydride";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AcidDissociationConstant(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an acid dissociation constant (also known as acidity constant, or acid-ionization constant; denoted Ka is a quantitative measure of the strength of an acid in solution. It is the equilibrium constant for a chemical reaction";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acid Dissociation Constant";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AcidBaseExtraction(string text)
{
    string model = "llama3";
    string definition = "Acid-base extraction is a subclass of liquid-liquid extractions and involves the separation of chemical species from other acidic or basic compounds. It is typically performed during the work-up step following a chemical synthesis to purify crude compounds and results in the product being largely free of acidic or basic impurities. A separatory funnel is commonly used to perform an acid-base extraction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acid Base Extraction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AcidBaseReaction(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an acid-base reaction is a chemical reaction that occurs between an acid and a base. It can be used to determine pH via titration. Several theoretical frameworks provide alternative conceptions of the reaction mechanisms and their application in solving related problems; these are called the acid-base theories, for example, Bronsted-Lowry acid-base theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acid Base Reaction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Actinides(string text)
{
    string model = "llama3";
    string definition = "The periodic series of metallic elements with atomic numbers 89 to 103, from actinium through lawrencium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Actinides";
        }
    }

    return nullptr;
}

//string _Chemistry::Terms::Actinides(string text)
//{
//    string model = "llama3";
//    string definition = "series encompasses at least the 14 metallic chemical elements in the 5f series, with atomic numbers from 89 to 102, actinium through nobelium. (Number 103, lawrencium, is sometimes also included despite being part of the 6d transition series.) The actinide series derives its name from the first element in the series, actinium. The informal chemical symbol An is used in general discussions of actinide chemistry to refer to any actinide.";
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
//            return "Actinides";
//        }
//    }
//
//    return nullptr;
//}

string _Chemistry::Terms::ActivatedComplex(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an activated complex represents a collection of intermediate structures in a chemical reaction when bonds are breaking and forming. The activated complex is an arrangement of atoms in an arbitrary region near the saddle point of a potential energy surface. The region represents not one defined state, but a range of unstable configurations that a collection of atoms pass through between the reactants and products of a reaction. Activated complexes have partial reactant and product character, which can significantly impact their behaviour in chemical reactions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Activated Complex";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ActivationEnergy(string text)
{
    string model = "llama3";
    string definition = "In the Arrhenius model of reaction rates, activation energy is the minimum amount of energy that must be available to reactants for a chemical reaction to occur. The activation energy (Ea) of a reaction is measured in kilojoules per mole (kJ/mol) or kilocalories per mole (kcal/mol). Activation energy can be thought of as the magnitude of the potential barrier (sometimes called the energy barrier) separating minima of the potential energy surface pertaining to the initial and final thermodynamic state. For a chemical reaction to proceed at a reasonable rate, the temperature of the system should be high enough such that there exists an appreciable number of molecules with translational energy equal to or greater than the activation energy. The term \"activation energy\" was introduced in 1889 by the Swedish scientist Svante Arrhenius.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Activation Energy";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ActivitySeries(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a reactivity series (or reactivity series of elements) is an empirical, calculated, and structurally analytical progression of a series of metals, arranged by their \"reactivity\" from highest to lowest. It is used to summarize information about the reactions of metals with acids and water, single displacement reactions and the extraction of metals from their ores.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Activity Series";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::YieldChemistry(string text)
{
    string model = "llama3";
    string definition = "In chemistry, yield, also known as reaction yield or chemical yield, refers to the amount of product obtained in a chemical reaction. Yield is one of the primary factors that scientists must consider in organic and inorganic chemical synthesis processes. In chemical reaction engineering, \"yield\", \"conversion\" and \"selectivity\" are terms used to describe ratios of how much of a reactant was consumed (conversion), how much desired product was formed (yield) in relation to the undesired product (selectivity), represented as X, Y, and S. The term yield also plays an important role in analytical chemistry, as individual compounds are recovered in purification processes in a range from quantitative yield (100 %) to low yield (< 50 %).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Yield Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Acyclic(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an open-chain compound (or open chain compound) or acyclic compound (Greek prefix α \'without\') is a compound with a linear structure, rather than a cyclic one. An open-chain compound having no side groups is called a straight-chain compound (also spelled as straight chain compound). Many of the simple molecules of organic chemistry, such as the alkanes and alkenes, have both linear and ring isomers, that is, both acyclic and cyclic. For those with 4 or more carbons, the linear forms can have straight-chain or branched-chain isomers. The lowercase prefix n- denotes the straight-chain isomer; for example, n-butane is straight-chain butane, whereas i-butane is isobutane. Cycloalkanes are isomers of alkenes, not of alkanes, because the ring\'s closure involves a C-C bond. Having no rings (aromatic or otherwise), all open-chain compounds are aliphatic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acyclic";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AdditionReaction(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, an addition reaction is an organic reaction in which two or more molecules combine to form a larger molecule called the adduct. An addition reaction is limited to chemical compounds that have multiple bonds. Examples include a molecule with a carbon-carbon double bond (an alkene) or a triple bond (an alkyne). Another example is a compound that has rings (which are also considered points of unsaturation). A molecule that has carbon-heteroatom double bonds, such as a carbonyl group (C=O) or imine group (C=N), can undergo an addition reaction because its double-bond. An addition reaction is the reverse of an elimination reaction, in which one molecule divides into two or more molecules. For instance, the hydration of an alkene to an alcohol is reversed by dehydration. There are two main types of polar addition reactions: electrophilic addition and nucleophilic addition. Two non-polar addition reactions exist as well, called free-radical addition and cycloadditions. Addition reactions are also encountered in polymerizations and called addition polymerization.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Addition Reaction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Adduct(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an adduct (from Latin adductus \'drawn toward\'; alternatively, a contraction of \"addition product\") is a product of a direct addition of two or more distinct molecules, resulting in a single reaction product containing all atoms of all components. The resultant is considered a distinct molecular species. Examples include the addition of sodium bisulfite to an aldehyde to give a sulfonate. It can be considered as a single product resulting from the direct combination of different molecules which comprises all atoms of the reactant molecules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Adduct";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Adhesion(string text)
{
    string model = "llama3";
    string definition = "Adhesion is the tendency of dissimilar particles or surfaces to cling to one another. (Cohesion refers to the tendency of similar or identical particles and surfaces to cling to one another.) The forces that cause adhesion and cohesion can be divided into several types. The intermolecular forces responsible for the function of various kinds of stickers and sticky tape fall into the categories of chemical adhesion, dispersive adhesion, and diffusive adhesion. In addition to the cumulative magnitudes of these intermolecular forces, there are also certain emergent mechanical effects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Adsorbtion(string text)
{
    string model = "llama3";
    string definition = "Adsorption is the adhesion of atoms, ions or molecules from a gas, liquid or dissolved solid to a surface. This process creates a film of the adsorbate on the surface of the adsorbent. This process differs from absorption, in which a fluid (the absorbate) is dissolved by or permeates a liquid or solid (the absorbent). While adsorption does often precede absorption, which involves the transfer of the absorbate into the volume of the absorbent material, alternatively, adsorption is distinctly a surface phenomenon, wherein the adsorbate does not penetrate through the material surface and into the bulk of the adsorbent. The term sorption encompasses both adsorption and absorption, and desorption is the reverse of sorption.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Adsorbtion";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Aeration(string text)
{
    string model = "llama3";
    string definition = "Aeration (also called aerification or aeriation) is the process by which air is circulated through, mixed with or dissolved in a liquid or other substances that act as a fluid (such as soil). Aeration processes create additional surface area in the mixture, allowing greater chemical or suspension reactions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aeration";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AlcoholChemistry(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an alcohol is a type of organic compound that carries at least one hydroxyl (-OH) functional group bound to a saturated carbon atom. Alcohols range from the simple, like methanol and ethanol, to complex, like sugars and cholesterol. The presence of an OH group strongly modifies the properties of hydrocarbons, conferring hydrophilic (water-loving) properties. The OH group provides a site at which many reactions can occur.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alcohol Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Aldehyde(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, an aldehyde is an organic compound containing a functional group with the structure R-CH=O. The functional group itself (without the \"R\" side chain) can be referred to as an aldehyde but can also be classified as a formyl group. Aldehydes are a common motif in many chemicals important in technology and biology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aldehyde";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AliphaticCompound(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, hydrocarbons (compounds composed solely of carbon and hydrogen) are divided into two classes: aromatic compounds and aliphatic compounds Aliphatic compounds can be saturated (in which all the C-C bonds are single requiring the structure to be completed, or \'saturated\', by hydrogen) like hexane, or unsaturated, like hexene and hexyne. Open-chain compounds, whether straight or branched, and which contain no rings of any type, are always aliphatic. Cyclic compounds can be aliphatic if they are not aromatic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aliphatic Compound";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AlkaliMetal(string text)
{
    string model = "llama3";
    string definition = "consist of the chemical elements lithium (Li), sodium (Na), potassium (K), rubidium (Rb), caesium (Cs), and francium (Fr). Together with hydrogen they constitute group 1, which lies in the s-block of the periodic table. All alkali metals have their outermost electron in an s-orbital: this shared electron configuration results in their having very similar characteristic properties. Indeed, the alkali metals provide the best example of group trends in properties in the periodic table, with elements exhibiting well-characterised homologous behaviour. This family of elements is also known as the lithium family after its leading element.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alkali Metal";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Alkaline(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an alkali a basic, ionic salt of an alkali metal or an alkaline earth metal. An alkali can also be defined as a base that dissolves in water. A solution of a soluble base has a pH greater than 7.0. The adjective alkaline, and less often, alkalescent, is commonly used in English as a synonym for basic, especially for bases soluble in water. This broad use of the term is likely to have come about because alkalis were the first bases known to obey the Arrhenius definition of a base, and they are still among the most common bases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alkaline";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AlkalineEarthMetal(string text)
{
    string model = "llama3";
    string definition = "Any of the metallic elements belonging to Group 2 of the periodic table: beryllium (Be), magnesium (Mg), calcium (Ca), strontium (Sr), barium (Ba), and radium (Ra).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alkaline Earth Metal";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Alkane(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, an alkane, or paraffin (a historical trivial name that also has other meanings), is an acyclic saturated hydrocarbon. In other words, an alkane consists of hydrogen and carbon atoms arranged in a tree structure in which all the carbon-carbon bonds are single.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Alkene(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, an alkene, or olefin, is a hydrocarbon containing a carbon-carbon double bond. The double bond may be internal or in the terminal position. Terminal alkenes are also known as α-olefins.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Alkoxy(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the alkoxy group is an alkyl group which is singularly bonded to oxygen; thus R-O. Denoted usually with apostrophe(\'). The range of alkoxy groups is vast, the simplest being methoxy (CH3O-). An ethoxy group (CH3CH2O-) is found in the organic compound ethyl phenyl ether (C6H5OCH2CH3, also known as ethoxybenzene).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alkoxy";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Alkyl(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, an alkyl group is an alkane missing one hydrogen. The term alkyl is intentionally unspecific to include many possible substitutions. An acyclic alkyl has the general formula of -CnH2n+1. A cycloalkyl group is derived from a cycloalkane by removal of a hydrogen atom from a ring and has the general formula -CnH2n-1. Typically an alkyl is a part of a larger molecule. In structural formulae, the symbol R is used to designate a generic (unspecified) alkyl group. The smallest alkyl group is methyl, with the formula -CH3.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Alkyl";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Alkyne(string text)
{
    string model = "llama3";
    string definition = "n organic chemistry, an alkyne is an unsaturated hydrocarbon containing at least one carbon-carbon triple bond. The simplest acyclic alkynes with only one triple bond and no other functional groups form a homologous series with the general chemical formula CnH2n-2. Alkynes are traditionally known as acetylenes, although the name acetylene also refers specifically to C2H2, known formally as ethyne using IUPAC nomenclature. Like other hydrocarbons, alkynes are generally hydrophobic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Allomer(string text)
{
    string model = "llama3";
    string definition = "A substance that differs in chemical composition but has the same crystalline structure as another substance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Allomer";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Allotrope(string text)
{
    string model = "llama3";
    string definition = "is the property of some chemical elements to exist in two or more different forms, in the same physical state, known as allotropes of the elements. Allotropes are different structural modifications of an element: the atoms of the element are bonded together in different manners. For example, the allotropes of carbon include diamond (the carbon atoms are bonded together to form a cubic lattice of tetrahedra), graphite (the carbon atoms are bonded together in sheets of a hexagonal lattice), graphene (single sheets of graphite), and fullerenes (the carbon atoms are bonded together in spherical, tubular, or ellipsoidal formations).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Allotrope";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Alloy(string text)
{
    string model = "llama3";
    string definition = "An alloy is a mixture of chemical elements of which in most cases at least one is a metallic element, although it is also sometimes used for mixtures of elements; herein only metallic alloys are described. Most alloys are metallic and show good electrical conductivity, ductility, opacity, and luster, and may have properties that differ from those of the pure elements such as increased strength or hardness. In some cases, an alloy may reduce the overall cost of the material while preserving important properties. In other cases, the mixture imparts synergistic properties such as corrosion resistance or mechanical strength.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Amalgam(string text)
{
    string model = "llama3";
    string definition = "an alloy of mercury with another metal. It may be a liquid, a soft paste or a solid, depending upon the proportion of mercury. These alloys are formed through metallic bonding, with the electrostatic attractive force of the conduction electrons working to bind all the positively charged metal ions together into a crystal lattice structure. Almost all metals can form amalgams with mercury, the notable exceptions being iron, platinum, tungsten, and tantalum. Silver-mercury amalgams are important in dentistry, and gold-mercury amalgam is used in the extraction of gold from ore. Dentistry has used alloys of mercury with metals such as silver, copper, indium, tin and zinc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amalgam";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Ambident(string text)
{
    string model = "llama3";
    string definition = "in chemistry, ambident is a molecule or group that has two alternative and interacting reaction sites, to either of which a bond may be made during a reaction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ambident";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Amide(string text)
{
    string model = "llama3";
    string definition = "n organic chemistry, an amide, also known as an organic amide or a carboxamide, is a compound with the general formula R-C(=O)-NR\'R\", where R, R\', and R\" represent any group, typically organyl groups or hydrogen atoms. The amide group is called a peptide bond when it is part of the main chain of a protein, and an isopeptide bond when it occurs in a side chain, as in asparagine and glutamine. It can be viewed as a derivative of a carboxylic acid (R-C(=O)-OH) with the hydroxyl group (-OH) replaced by an amine group (-NR\'R\"); or, equivalently, an acyl (alkanoyl) group (R-C(=O)-) joined to an amine group.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amide";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Ammoniacal(string text)
{
    string model = "llama3";
    string definition = "Ammonia is an inorganic chemical compound of nitrogen and hydrogen with the formula NH3. A stable binary hydride and the simplest pnictogen hydride, ammonia is a colourless gas with a distinctive pungent smell. Biologically, it is a common nitrogenous waste, and it contributes significantly to the nutritional needs of terrestrial organisms by serving as a precursor to fertilisers. Around 70% of ammonia produced industrially is used to make fertilisers in various forms and composition, such as urea and diammonium phosphate. Ammonia in pure form is also applied directly into the soil.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ammoniacal";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AmorphousSolid(string text)
{
    string model = "llama3";
    string definition = "n condensed matter physics and materials science, an amorphous solid (or non-crystalline solid) is a solid that lacks the long-range order that is characteristic of a crystal. The terms \"glass\" and \"glassy solid\" are sometimes used synonymously with amorphous solid; however, these terms refer specifically to amorphous materials that undergo a glass transition. Examples of amorphous solids include glasses, metallic glasses, and certain types of plastics and polymers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::AmountOfSubstance(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the amount of substance (symbol n) in a given sample of matter is defined as a ratio (n = N/NA) between the number of elementary entities (N) and the Avogadro constant (NA). The entities are usually molecules, atoms, ions, or ion pairs of a specified kind. The particular substance sampled may be specified using a subscript, e.g., the amount of sodium chloride (NaCl) would be denoted as nNaCl. The unit of amount of substance in the International System of Units is the mole (symbol: mol), a base unit. Since 2019, the value of the Avogadro constant NA is defined to be exactly 6.02214076x1023 mol-1. Sometimes, the amount of substance is referred to as the chemical amoun";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amount Of Substance";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Amphipathic(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an amphiphile or amphipath, is a chemical compound possessing both hydrophilic (water-loving, polar) and lipophilic (fat-loving, nonpolar) properties. Such a compound is called amphiphilic or amphipathic. Amphiphilic compounds include surfactants and detergents. The phospholipid amphiphiles are the major structural component of cell membranes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amphipathic";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Amphoteric(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an amphoteric compound (from Greek amphoteros \'both\') is a molecule or ion that can react both as an acid and as a base. What exactly this can mean depends on which definitions of acids and bases are being used.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amphoteric";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Amyl(string text)
{
    string model = "llama3";
    string definition = "Pentyl is a five-carbon alkyl group or substituent with chemical formula -C5H11. It is the substituent form of the alkane pentane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amyl";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Analyte(string text)
{
    string model = "llama3";
    string definition = "An analyte, component (in clinical chemistry), titrand (in titrations), or chemical species is a substance or chemical constituent that is of interest in an analytical procedure. The remainder of the sample is called the matrix. The procedure of analysis measures the analyte\'s chemical or physical properties, thus establishing its identity or concentration in the sample.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Analyte";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AnalyticalChemistry(string text)
{
    string model = "llama3";
    string definition = "Analytical chemistry studies and uses instruments and methods to separate, identify, and quantify matter. In practice, separation, identification or quantification may constitute the entire analysis or be combined with another method. Separation isolates analytes. Qualitative analysis identifies analytes, while quantitative analysis determines the numerical amount or concentration.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Analytical Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Angstrom(string text)
{
    string model = "llama3";
    string definition = "A non-SI, metric unit of length equal to 10-10 metre, i.e. 1/10000000000 of a metre or 0.1 nanometre. The angstrom is commonly used in the natural sciences to express microscopic or atomic-scale distances, including the sizes of atomic nuclei, wavelengths of electromagnetic radiation, and lengths of chemical bonds (e.g. the covalent radius of a chlorine atom averages about 1 angstrom).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Anhydrous(string text)
{
    string model = "llama3";
    string definition = "A substance is anhydrous if it contains no water. Many processes in chemistry can be impeded by the presence of water; therefore, it is important that water-free reagents and techniques are used. In practice, however, it is very difficult to achieve perfect dryness; anhydrous compounds gradually absorb water from the atmosphere so they must be stored carefully.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anhydrous";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Anion(string text)
{
    string model = "llama3";
    string definition = "Anion (-) and cation (+) indicate the net electric charge on an ion. An ion that has more electrons than protons, giving it a net negative charge, is named an anion, and a minus indication \"Anion (-)\" indicates the negative charge. With a cation it is just the opposite: it has fewer electrons than protons, giving it a net positive charge, hence the indication \"Cation (+)\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Anode(string text)
{
    string model = "llama3";
    string definition = "An anode is an electrode of a polarized electrical device through which conventional current enters the device. This contrasts with a cathode, an electrode of the device through which conventional current leaves the device. A common mnemonic is ACID, for \"anode current into device\". The direction of conventional current (the flow of positive charges) in a circuit is opposite to the direction of electron flow, so (negatively charged) electrons flow from the anode of a galvanic cell, into an outside or external circuit connected to the cell. For example, the end of a household battery marked with a \"+\" is the cathode (while discharging).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Aprotic(string text)
{
    string model = "llama3";
    string definition = "A polar aprotic solvent is a solvent that lacks an acidic proton and is polar. Such solvents lack hydroxyl and amine groups. In contrast to protic solvents, these solvents do not serve as proton donors in hydrogen bonding, although they can be proton acceptors. Many solvents, including chlorocarbons and hydrocarbons, are classifiable as aprotic, but polar aprotic solvents are of particular interest for their ability to dissolve salts. Methods for purification of common solvents are available.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aprotic";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Aquation(string text)
{
    string model = "llama3";
    string definition = "Aquation is the chemical reaction involving \"incorporation of one or more integral molecules of water\" with or without displacement of other atoms or groups. The term is typically employed to refer to reactions of metal complexes where an anion is displaced by water. For example, bromopentaamminecobalt(III) undergoes the following aquation reaction to give a metal aquo complex: [Co(NH3)5Br]2+ + H2O -> [Co(NH3)5(H2O)]3+ + Br−";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aquation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AqueousSolution(string text)
{
    string model = "llama3";
    string definition = "An aqueous solution is a solution in which the solvent is water. It is mostly shown in chemical equations by appending (aq) to the relevant chemical formula. For example, a solution of table salt, also known as sodium chloride (NaCl), in water would be represented as Na+(aq) + Cl-(aq). The word aqueous (which comes from aqua) means pertaining to, related to, similar to, or dissolved in, water. As water is an excellent solvent and is also naturally abundant, it is a ubiquitous solvent in chemistry. Since water is frequently used as the solvent in experiments, the word solution refers to an aqueous solution, unless the solvent is specified.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aqueous Solution";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Aromatic(string text)
{
    string model = "llama3";
    string definition = "Aromatic compounds or arenes usually refers to organic compounds \"with a chemistry typified by benzene\" and \"cyclically conjugated.\" The word \"aromatic\" originates from the past grouping of molecules based on odor, before their general chemical properties were understood. The current definition of aromatic compounds does not have any relation to their odor.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aromatic";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ArrheniusAcid(string text)
{
    string model = "llama3";
    string definition = "Any substance that, when dissolved in water, increases the concentration of H+ ions, or, more correctly, of hydronium ions, in the resulting aqueous solution. The definition is similar to that of a Bronsted-Lowry acid. Contrast Arrhenius base.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arrhenius Acid";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ArrheniusBase(string text)
{
    string model = "llama3";
    string definition = "Any substance that, when dissolved in water, increases the concentration of OH- ions, or, alternatively, decreases the concentration of hydronium ions, in the resulting aqueous solution. The definition is similar to that of a Bronsted-Lowry base. Contrast Arrhenius acid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arrhenius Base";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ArrowPushing(string text)
{
    string model = "llama3";
    string definition = "Arrow pushing or electron pushing is a technique used to describe the progression of organic chemistry reaction mechanisms. It was first developed by Sir Robert Robinson. In using arrow pushing, \"curved arrows\" or \"curly arrows\" are drawn on the structural formulae of reactants in a chemical equation to show the reaction mechanism. The arrows illustrate the movement of electrons as bonds between atoms are broken and formed. Arrow pushing never directly show the movement of atoms; it is used to show the movement of electron density, which indirectly shows the movement of atoms themselves. Arrow pushing is also used to describe how positive and negative charges are distributed around organic molecules through resonance. It is important to remember, however, that arrow pushing is a formalism and electrons (or rather, electron density) do not move around so neatly and discretely in reality. Arrow pushing has been extended to inorganic chemistry, especially to the chemistry of s- and p-block elements. It has been shown to work well for hypervalent compounds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arrow Pushing";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Aryl(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, an aryl is any functional group or substituent derived from an aromatic ring, usually an aromatic hydrocarbon, such as phenyl and naphthyl. \"Aryl\" is used for the sake of abbreviation or generalization, and \"Ar\" is used as a placeholder for the aryl group in chemical structure diagrams, analogous to \"R\" used for any organic substituent. \"Ar\" is not to be confused with the elemental symbol for argon.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aryl";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Atmolysis(string text)
{
    string model = "llama3";
    string definition = "The separation of a mixture of gases by exploiting their different rates of diffusion, usually by allowing the gases to diffuse through the walls of a porous partition or membrane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atmolysis";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Atom(string text)
{
    string model = "llama3";
    string definition = "Atoms are the basic particles of the chemical elements. An atom consists of a nucleus of protons and generally neutrons, surrounded by an electromagnetically bound swarm of electrons. The chemical elements are distinguished from each other by the number of protons that are in their atoms. For example, any atom that contains 11 protons is sodium, and any atom that contains 29 protons is copper. Atoms with the same number of protons but a different number of neutrons are called isotopes of the same element.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::AtomicMass(string text)
{
    string model = "llama3";
    string definition = "Atomic mass (ma or m) is the mass of a single atom. The atomic mass mostly comes from the combined mass of the protons and neutrons in the nucleus, with minor contributions from the electrons and nuclear binding energy. The atomic mass of atoms, ions, or atomic nuclei is slightly less than the sum of the masses of their constituent protons, neutrons, and electrons, due to (per E = mc2).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::AtomicNumber(string text)
{
    string model = "llama3";
    string definition = "The atomic number or nuclear charge number (symbol Z) of a chemical element is the charge number of its atomic nucleus. For ordinary nuclei composed of protons and neutrons, this is equal to the proton number (np) or the number of protons found in the nucleus of every atom of that element. The atomic number can be used to uniquely identify ordinary chemical elements. In an ordinary uncharged atom, the atomic number is also equal to the number of electrons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::AtomicOrbital(string text)
{
    string model = "llama3";
    string definition = "Any region in which one or more electrons may be found in an individual atom (as opposed to that within a molecule).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::AtomicRadius(string text)
{
    string model = "llama3";
    string definition = "The atomic radius of a chemical element is a measure of the size of its atom, usually the mean or typical distance from the center of the nucleus to the outermost isolated electron. Since the boundary is not a well-defined physical entity, there are various non-equivalent definitions of atomic radius. Four widely used definitions of atomic radius are: Van der Waals radius, ionic radius, metallic radius and covalent radius. Typically, because of the difficulty to isolate atoms in order to measure their radii separately, atomic radius is measured in a chemically bonded state; however theoretical calculations are simpler when considering atoms in isolation. The dependencies on environment, probe, and state lead to a multiplicity of definitions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomic Radius";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AtomicWeight(string text)
{
    string model = "llama3";
    string definition = "Relative atomic mass (symbol: Ar ; sometimes abbreviated RAM or r.a.m.), also known by the deprecated synonym atomic weight, is a dimensionless physical quantity defined as the ratio of the average mass of atoms of a chemical element in a given sample to the atomic mass constant. The atomic mass constant (symbol: mu) is defined as being 1/12 of the mass of a carbon-12 atom. Since both quantities in the ratio are masses, the resulting value is dimensionless. These definitions remain valid: 134  even after the 2019 revision of the SI.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Atomicity(string text)
{
    string model = "llama3";
    string definition = "Atomicity is the total number of atoms present in a molecule of an element. For example, each molecule of oxygen (O2) is composed of two oxygen atoms. Therefore, the atomicity of oxygen is 2. In older contexts, atomicity is sometimes equivalent to valency. Some authors also use the term to refer to the maximum number of valencies observed for an element.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Atomicity";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AutoignitionTemperature(string text)
{
    string model = "llama3";
    string definition = "The autoignition temperature or self-ignition temperature, often called spontaneous ignition temperature or minimum ignition temperature (or shortly ignition temperature) and formerly also known as kindling point, of a substance is the lowest temperature at which it spontaneously ignites in a normal atmosphere without an external source of ignition, such as a flame or spark. This temperature is required to supply the activation energy needed for combustion. The temperature at which a chemical ignites decreases as the pressure is increased.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Autoignition Temperature";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AvogadroConstant(string text)
{
    string model = "llama3";
    string definition = "The Avogadro constant, commonly denoted NA or L, is an SI defining constant with an exact value of 6.02214076x1023 mol-1 (reciprocal moles). It is this defined number of constituent particles (usually molecules, atoms, ions, or ion pairs-in general, entities) per mole (SI unit) and used as a normalization factor in relating the amount of substance, n(X), in a sample of a substance X to the corresponding number of entities, N(X): n(X) = N(X)(1/NA), an aggregate of N(X) reciprocal Avogadro constants. By setting N(X) = 1, a reciprocal Avogadro constant is seen to be equal to one entity, which means that n(X) is more easily interpreted as an aggregate of N(X) entities. In the SI dimensional analysis of measurement units, the dimension of the Avogadro constant is the reciprocal of amount of substance, denoted N-1. The Avogadro number, sometimes denoted N0, is the numeric value of the Avogadro constant (i.e., without a unit), namely the dimensionless number 6.02214076x1023; the value chosen based on the number of atoms in 12 grams of carbon-12 in alignment with the historical definition of a mole. The constant is named after the Italian physicist and chemist Amedeo Avogadro (1776-1856).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::AvogadroNumber(string text)
{
    string model = "llama3";
    string definition = "The number of discrete constituent particles in one mole of a substance, defined as exactly 6.02214076x1023. This dimensionless number differs from the Avogadro constant in that it has no unit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Avogadro Number";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AvogadrosLaw(string text)
{
    string model = "llama3";
    string definition = "Avogadro\'s law (sometimes referred to as Avogadro\'s hypothesis or Avogadro\'s principle) or Avogadro-Ampère\'s hypothesis is an experimental gas law relating the volume of a gas to the amount of substance of gas present. The law is a specific case of the ideal gas law. A modern statement is:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Azeotrope(string text)
{
    string model = "llama3";
    string definition = "or a constant heating point mixture is a mixture of two or more liquids whose proportions cannot be changed by simple distillation. This happens because when an azeotrope is boiled, the vapour has the same proportions of constituents as the unboiled mixture. Knowing an azeotrope\'s behavior is important for distillation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Azeotrope";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Barometer(string text)
{
    string model = "llama3";
    string definition = "A barometer is a scientific instrument that is used to measure air pressure in a certain environment. Pressure tendency can forecast short term changes in the weather. Many measurements of air pressure are used within surface weather analysis to help find surface troughs, pressure systems and frontal boundaries.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Base(string text)
{
    string model = "llama3";
    string definition = "A substance that accepts a proton and has a pH above 7.0. A common example is sodium hydroxide (NaOH).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::BaseAnhydride(string text)
{
    string model = "llama3";
    string definition = "A base anhydride is an oxide of a chemical element from group 1 or 2 (the alkali metals and alkaline earth metals, respectively). They are obtained by removing water from the corresponding hydroxide base. If water is added to a base anhydride, a corresponding hydroxide salt can be -formated";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Base Anhydride";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Basic(string text)
{
    string model = "llama3";
    string definition = "In chemistry, there are three definitions in common use of the word \"base\": Arrhenius bases, Bronsted bases, and Lewis bases. All definitions agree that bases are substances that react with acids, as originally proposed by G.-F. Rouelle in the mid-18th century.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Basic";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Battery(string text)
{
    string model = "llama3";
    string definition = "An electric battery is a source of electric power consisting of one or more electrochemical cells with external connections for powering electrical devices. When a battery is supplying power, its positive terminal is the cathode and its negative terminal is the anode. The terminal marked negative is the source of electrons. When a battery is connected to an external electric load, those negatively charged electrons flow through the circuit and reach to the positive terminal, thus cause a redox reaction by attracting positively charged ions, cations. Thus converts high-energy reactants to lower-energy products, and the free-energy difference is delivered to the external circuit as electrical energy. Historically the term \"battery\" specifically referred to a device composed of multiple cells; however, the usage has evolved to include devices composed of a single cell.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::BeerLambertLaw(string text)
{
    string model = "llama3";
    string definition = "The Beer-Bouguer-Lambert (BBL) extinction law is an empirical relationship describing the attenuation in intensity of a radiation beam passing through a macroscopically homogenous medium with which it interacts. Formally, it states that the intensity of radiation decays exponentially in the absorbance of the medium, and that said absorbance is proportional to the length of beam passing through the medium, the concentration of interacting matter along that path, and a constant representing said matter\'s propensity to interact.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Biochemistry(string text)
{
    string model = "llama3";
    string definition = "Biochemistry or biological chemistry is the study of chemical processes within and relating to living organisms. A sub-discipline of both chemistry and biology, biochemistry may be divided into three fields: structural biology, enzymology, and metabolism. Over the last decades of the 20th century, biochemistry has become successful at explaining living processes through these three disciplines. Almost all areas of the life sciences are being uncovered and developed through biochemical methodology and research. Biochemistry focuses on understanding the chemical basis which allows biological molecules to give rise to the processes that occur within living cells and between cells, in turn relating greatly to the understanding of tissues and organs as well as organism structure and function. Biochemistry is closely related to molecular biology, the study of the molecular mechanisms of biological phenomena.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biochemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::BohrModel(string text)
{
    string model = "llama3";
    string definition = "A model of the general structure of the atom proposed by Niels Bohr and Ernest Rutherford in 1913, featuring a small, dense nucleus of positively charged particles surrounded by orbiting electrons, which are attracted to the nucleus by electrostatic forces. This interpretation replaced several earlier hypotheses and quickly became the prevailing standard model for depicting atomic structure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Boiling(string text)
{
    string model = "llama3";
    string definition = "Boiling or ebullition is the rapid phase transition from liquid to gas or vapour; the reverse of boiling is condensation. Boiling occurs when a liquid is heated to its boiling point, so that the vapour pressure of the liquid is equal to the pressure exerted on the liquid by the surrounding atmosphere. Boiling and evaporation are the two main forms of liquid vapourization. There are two main types of boiling: nucleate boiling where small bubbles of vapour form at discrete points, and critical heat flux boiling where the boiling surface is heated above a certain critical temperature and a film of vapour forms on the surface. Transition boiling is an intermediate, unstable form of boiling with elements of both types. The boiling point of water is 100C or 212F but is lower with the decreased atmospheric pressure found at higher altitudes. Boiling water is used as a method of making it potable by killing microbes and viruses that may be present. The sensitivity of different micro-organisms to heat varies, but if water is held at 100 °C (212 °F) for one minute, most micro-organisms and viruses are inactivated. Ten minutes at a temperature of 70 °C (158 °F) is also sufficient to inactivate most bacteria.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boiling";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::BoilingFlask(string text)
{
    string model = "llama3";
    string definition = "A Florence flask/boiling flask is a type of flask used as an item of laboratory glassware and is named after the city Florence. It is used as a container to hold liquids. A Florence flask has a round body, a long neck, and often a flat bottom. It is designed for uniform heating, boiling, distillation and ease of swirling; it is produced in a number of different glass thicknesses to stand different types of use. They are often made of borosilicate glass for heat and chemical resistance. Traditional Florence flasks typically do not have a ground glass joint on their rather longer necks, but typically have a slight lip or flange around the tip of the neck. The common volume for a Florence flask is 1 litre.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boiling Flask";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::BoilingPoint(string text)
{
    string model = "llama3";
    string definition = "The boiling point of a substance is the temperature at which the vapor pressure of a liquid equals the pressure surrounding the liquid and the liquid changes into a vapor. The boiling point of a liquid varies depending upon the surrounding environmental pressure. A liquid in a partial vacuum, i.e., under a lower pressure, has a lower boiling point than when that liquid is at atmospheric pressure. Because of this, water boils at 100°C (or with scientific precision: 99.97 °C (211.95 °F)) under standard pressure at sea level, but at 93.4C (200.1F) at 1,905 metres (6,250 ft) altitude. For a given pressure, different liquids will boil at different temperatures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::BoilingPointElevation(string text)
{
    string model = "llama3";
    string definition = "Boiling-point elevation is the phenomenon whereby the boiling point of a liquid (a solvent) will be higher when another compound is added, meaning that a solution has a higher boiling point than a pure solvent. This happens whenever a non-volatile solute, such as a salt, is added to a pure solvent, such as water. The boiling point can be measured accurately using an ebullioscope.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::ChemicalBond(string text)
{
    string model = "llama3";
    string definition = "A chemical bond is the association of atoms or ions to form molecules, crystals, and other structures. The bond may result from the electrostatic force between oppositely charged ions as in ionic bonds or through the sharing of electrons as in covalent bonds, or some combination of these effects. Chemical bonds are described as having different strengths: there are \"strong bonds\" or \"primary bonds\" such as covalent, ionic and metallic bonds, and \"weak bonds\" or \"secondary bonds\" such as dipole-dipole interactions, the London dispersion force, and hydrogen bonding.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::BondAngle(string text)
{
    string model = "llama3";
    string definition = "Molecular geometry is the three-dimensional arrangement of the atoms that constitute a molecule. It includes the general shape of the molecule as well as bond lengths, bond angles, torsional angles and any other geometrical parameters that determine the position of each atom. Molecular geometry influences several properties of a substance including its reactivity, polarity, phase of matter, color, magnetism and biological activity. The angles between bonds that an atom forms depend only weakly on the rest of molecule, i.e. they can be understood as approximately local and hence transferable properties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bond Angle";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::BoylesLaw(string text)
{
    string model = "llama3";
    string definition = "Boyle\'s law, also referred to as the Boyle-Mariotte law or Mariotte\'s law (especially in France), is an empirical gas law that describes the relationship between pressure and volume of a confined gas. Boyle\'s law has been stated as: The absolute pressure exerted by a given mass of an ideal gas is inversely proportional to the volume it occupies if the temperature and amount of gas remain unchanged within a closed system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::BronstedLowryAcidBaseTheory(string text)
{
    string model = "llama3";
    string definition = "The Bronsted-Lowry theory (also called proton theory of acids and bases) is an acid-base reaction theory which was first developed by Johannes Nicolaus Bronsted and Thomas Martin Lowry independently in 1923. The basic concept of this theory is that when an acid and a base react with each other, the acid forms its conjugate base, and the base forms its conjugate acid by exchange of a proton (the hydrogen cation, or H+). This theory generalises the Arrhenius theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Brnsted Lowry Acid Base Theory";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::BrownianMotion(string text)
{
    string model = "llama3";
    string definition = "Brownian motion is the random motion of particles suspended in a medium (a liquid or a gas). This motion pattern typically consists of random fluctuations in a particle\'s position inside a fluid sub-domain, followed by a relocation to another sub-domain. Each relocation is followed by more fluctuations within the new closed volume. This pattern describes a fluid at thermal equilibrium, defined by a given temperature. Within such a fluid, there exists no preferential direction of flow (as in transport phenomena). More specifically, the fluid\'s overall linear and angular momenta remain null over time. The kinetic energies of the molecular Brownian motions, together with those of molecular rotations and vibrations, sum up to the caloric component of a fluid\'s internal energy (the equipartition theorem).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::BuchnerFlask(string text)
{
    string model = "llama3";
    string definition = "A Buchner flask, also known as a vacuum flask, filter flask, suction flask, side-arm flask, or Bunsen flask, is a thick-walled Erlenmeyer flask with a short glass tube and hose barb protruding about an inch from its neck.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Büchner Flask";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::BufferSolution(string text)
{
    string model = "llama3";
    string definition = "A buffer solution is a solution where the pH does not change significantly on dilution or if an acid or base is added at constant temperature. Its pH changes very little when a small amount of strong acid or base is added to it. Buffer solutions are used as a means of keeping pH at a nearly constant value in a wide variety of chemical applications. In nature, there are many living systems that use buffering for pH regulation. For example, the bicarbonate buffering system is used to regulate the pH of blood, and bicarbonate also acts as a buffer in the ocean.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::BumpingChemistry(string text)
{
    string model = "llama3";
    string definition = "Bumping is a phenomenon in chemistry where homogeneous liquids boiled in a test tube or other container will superheat and, upon nucleation, rapid boiling will expel the liquid from the container. In extreme cases, the container may be broken.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bumping Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Bung(string text)
{
    string model = "llama3";
    string definition = "A stopper, bung, or cork is a cylindrical or conical closure used to seal a container, such as a bottle, tube, or barrel.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bung";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Burette(string text)
{
    string model = "llama3";
    string definition = "A burette (also spelled as buret) is a graduated glass tube with a tap at one end, for delivering known volumes of a liquid, especially in titrations. It is a long, graduated glass tube, with a stopcock at its lower end and a tapered capillary tube at the stopcock\'s outlet. The flow of liquid from the tube to the burette tip is controlled by the stopcock valve. There are two main types of burette; the volumetric burette and the piston burette. A volumetric burette delivers measured volumes of liquid. Piston burettes are similar to syringes, but with a precision bore and a plunger. Piston burettes may be manually operated or may be motorized. A weight burette delivers measured weights of a liquid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Burette";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Butyl(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, butyl is a four-carbon alkyl radical or substituent group with general chemical formula -C4H9, derived from either of the two isomers (n-butane and isobutane) of butane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Butyl";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::CalorificValue(string text)
{
    string model = "llama3";
    string definition = "The heating value (or energy value or calorific value) of a substance, usually a fuel or food (see food energy), is the amount of heat released during the combustion of a specified amount of it.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Calorific Value";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Calx(string text)
{
    string model = "llama3";
    string definition = "Calx is a substance formed from an ore or mineral that has been heated. Calx, especially of a metal, is now understood to be an oxide. The term is also sometimes used in older texts on artists\' techniques to mean calcium oxide. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Calx";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Carbanion(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, a carbanion is an anion in which carbon is negatively charged.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Carbanion";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Carbide(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a carbide usually describes a compound composed of carbon and a metal. In metallurgy, carbiding or carburizing is the process for producing carbide coatings on a metal piece.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Carbide";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Carbocation(string text)
{
    string model = "llama3";
    string definition = "A carbocation is an ion with a positively charged carbon atom.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Carbocation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Carbon(string text)
{
    string model = "llama3";
    string definition = "Carbon (from Latin carbo \'coal\') is a chemical element; it has symbol C and atomic number 6. It is nonmetallic and tetravalent-meaning that its atoms are able to form up to four covalent bonds due to its valence shell exhibiting 4 electrons. It belongs to group 14 of the periodic table. Carbon makes up about 0.025 percent of Earth\'s crust. Three isotopes occur naturally, 12C and 13C being stable, while 14C is a radionuclide, decaying with a half-life of 5,700 years. Carbon is one of the few elements known since antiquity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Carbon";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::CarbonicAcid(string text)
{
    string model = "llama3";
    string definition = "Carbonic acid is a chemical compound with the chemical formula H2CO3. The molecule rapidly converts to water and carbon dioxide in the presence of water. However, in the absence of water, it is quite stable at room temperature. The interconversion of carbon dioxide and carbonic acid is related to the breathing cycle of animals and the acidification of natural waters.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Carbonic Acid";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Carbonyl(string text)
{
    string model = "llama3";
    string definition = "For organic chemistry, a carbonyl group is a functional group with the formula C=O, composed of a carbon atom double-bonded to an oxygen atom, and it is divalent at the C atom. It is common to several classes of organic compounds (such as aldehydes, ketones and carboxylic acids), as part of many larger functional groups. A compound containing a carbonyl group is often referred to as a carbonyl compound.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Carbonyl";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Carboxyl(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, a carboxylic acid is an organic acid that contains a carboxyl group (-C(=O)-OH) attached to an R-group. The general formula of a carboxylic acid is often written as R-COOH or R-CO2H, sometimes as R-C(O)OH with R referring to an organyl group (e.g., alkyl, alkenyl, aryl), or hydrogen, or other groups. Carboxylic acids occur widely. Important examples include the amino acids and fatty acids. Deprotonation of a carboxylic acid gives a carboxylate anion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Carboxyl";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Catalyst(string text)
{
    string model = "llama3";
    string definition = "is the increase in rate of a chemical reaction due to an added substance known as a catalyst Catalysts are not consumed by the reaction and remain unchanged after it. If the reaction is rapid and the catalyst recycles quickly, very small amounts of catalyst often suffice; mixing, surface area, and temperature are important factors in reaction rate. Catalysts generally react with one or more reactants to form intermediates that subsequently give the final reaction product, in the process of regenerating the catalyst.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Catalyst";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Cathode(string text)
{
    string model = "llama3";
    string definition = "An electrode from which the conventional electric current (the flow of positive charges) exits a polarized electrical circuit. Positively charged cations always move toward the cathode, though the cathode\'s polarity can be positive or negative depending on the type of electrical device and how it is being operated. Contrast anode.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Cation(string text)
{
    string model = "llama3";
    string definition = "A positively charged ion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::CellPotential(string text)
{
    string model = "llama3";
    string definition = "The relatively static membrane potential of quiescent cells is called the resting membrane potential (or resting voltage), as opposed to the specific dynamic electrochemical phenomena called action potential and graded membrane potential. The resting membrane potential has a value of approximately -70mV or -0.07V.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cell Potential";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Centrifugation(string text)
{
    string model = "llama3";
    string definition = "Centrifugation is a mechanical process which involves the use of the centrifugal force to separate particles from a solution according to their size, shape, density, medium viscosity and rotor speed. The denser components of the mixture migrate away from the axis of the centrifuge, while the less dense components of the mixture migrate towards the axis. Chemists and biologists may increase the effective gravitational force of the test tube so that the precipitate (pellet) will travel quickly and fully to the bottom of the tube. The remaining liquid that lies above the precipitate is called a supernatant or supernate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Centrifugation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Centrifuge(string text)
{
    string model = "llama3";
    string definition = "A centrifuge is a device that uses centrifugal force to subject a specimen to a specified constant force - for example, to separate various components of a fluid. This is achieved by spinning the fluid at high speed within a container, thereby separating fluids of different densities (e.g. cream from milk) or liquids from solids. It works by causing denser substances and particles to move outward in the radial direction. At the same time, objects that are less dense are displaced and moved to the centre. In a laboratory centrifuge that uses sample tubes, the radial acceleration causes denser particles to settle to the bottom of the tube, while low-density substances rise to the top. A centrifuge can be a very effective filter that separates contaminants from the main body of fluid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Centrifuge";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ChainReaction(string text)
{
    string model = "llama3";
    string definition = "A chain reaction is a sequence of reactions where a reactive product or by-product causes additional reactions to take place. In a chain reaction, positive feedback leads to a self-amplifying chain of events. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::ChargeNumber(string text)
{
    string model = "llama3";
    string definition = "Charge number (denoted z) is a quantized and dimensionless quantity derived from electric charge, with the quantum of electric charge being the elementary charge (e, constant). The charge number equals the electric charge (q, in coulombs) divided by the elementary charge: z = q/e. Atomic numbers (Z) are a special case of charge numbers, referring to the charge number of an atomic nucleus, as opposed to the net charge of an atom or ion. The charge numbers for ions (and also subatomic particles) are written in superscript, e.g., Na+ is a sodium ion with charge number positive one (an electric charge of one elementary charge). All particles of ordinary matter have integer-value charge numbers, with the exception of quarks, which cannot exist in isolation under ordinary circumstances (the strong force keeps them bound into hadrons of integer charge numbers).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Charge Number";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::CharlessLaw(string text)
{
    string model = "llama3";
    string definition = "Charles\'s law (also known as the law of volumes) is an experimental gas law that describes how gases tend to expand when heated. A modern statement of Charles\'s law is: When the pressure on a sample of a dry gas is held constant, the Kelvin temperature and the volume will be in direct proportion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Charless Law";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ChelatingAgent(string text)
{
    string model = "llama3";
    string definition = "Chelation is a type of bonding of ions and their molecules to metal ions. It involves the formation or presence of two or more separate coordinate bonds between a polydentate (multiple bonded) ligand and a single central metal atom. These ligands are called chelants, chelators, chelating agents, or sequestering agents. They are usually organic compounds, but this is not a necessity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chelating Agent";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ChemicalComposition(string text)
{
    string model = "llama3";
    string definition = "The identity and relative number of the elements that make up a chemical compound, which can often be expressed with a chemical formula.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemical Composition";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ChemicalDecomposition(string text)
{
    string model = "llama3";
    string definition = "Chemical decomposition, or chemical breakdown, is the process or effect of simplifying a single chemical entity (normal molecule, reaction intermediate, etc.) into two or more fragments. Chemical decomposition is usually regarded and defined as the exact opposite of chemical synthesis. In short, the chemical reaction in which two or more products are formed from a single reactant is called a decomposition reaction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemical Decomposition";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ChemicalFormula(string text)
{
    string model = "llama3";
    string definition = "A chemical formula is a way of presenting information about the chemical proportions of atoms that constitute a particular chemical compound or molecule, using chemical element symbols, numbers, and sometimes also other symbols, such as parentheses, dashes, brackets, commas and plus (+) and minus (-) signs. These are limited to a single typographic line of symbols, which may include subscripts and superscripts. A chemical formula is not a chemical name since it does not contain any words. Although a chemical formula may imply certain simple chemical structures, it is not the same as a full chemical structural formula. Chemical formulae can fully specify the structure of only the simplest of molecules and chemical substances, and are generally more limited in power than chemical names and structural formulae.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemical Formula";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ChemicalLaws(string text)
{
    string model = "llama3";
    string definition = "Chemical laws are those laws of nature relevant to chemistry. The most fundamental concept in chemistry is the law of conservation of mass, which states that there is no detectable change in the quantity of matter during an ordinary chemical reaction. Modern physics shows that it is actually energy that is conserved, and that energy and mass are related; a concept which becomes important in nuclear chemistry. Conservation of energy leads to the important concepts of equilibrium, thermodynamics, and kinetics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemical Laws";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ChemicalNomenclature(string text)
{
    string model = "llama3";
    string definition = "Chemical nomenclature is a set of rules to generate systematic names for chemical compounds. The nomenclature used most frequently worldwide is the one created and developed by the International Union of Pure and Applied Chemistry (IUPAC).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemical Nomenclature";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ChemicalPhysics(string text)
{
    string model = "llama3";
    string definition = "Chemical physics is a branch of physics that studies chemical processes from a physical point of view. It focuses on understanding the physical properties and behavior of chemical systems, using principles from both physics and chemistry. This field investigates physicochemical phenomena using techniques from atomic and molecular physics and condensed matter physics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::ChemicalProcess(string text)
{
    string model = "llama3";
    string definition = "In a scientific sense, a chemical process is a method or means of somehow changing one or more chemicals or chemical compounds. Such a chemical process can occur by itself or be caused by an outside force, and involves a chemical reaction of some sort. In an \"engineering\" sense, a chemical process is a method intended to be used in manufacturing or on an industrial scale (see Industrial process) to change the composition of chemical(s) or material(s), usually using technology similar or related to that used in chemical plants or the chemical industry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemical Process";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ChemicalReaction(string text)
{
    string model = "llama3";
    string definition = "A chemical reaction is a process that leads to the chemical transformation of one set of chemical substances to another. When chemical reactions occur, the atoms are rearranged and the reaction is accompanied by an energy change as new products are generated. Classically, chemical reactions encompass changes that only involve the positions of electrons in the forming and breaking of chemical bonds between atoms, with no change to the nuclei (no change to the elements present), and can often be described by a chemical equation. Nuclear chemistry is a sub-discipline of chemistry that involves the chemical reactions of unstable and radioactive elements where both electronic and nuclear changes can occur.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::ChemicalSpecies(string text)
{
    string model = "llama3";
    string definition = "Chemical species are a specific form of chemical substance or chemically identical molecular entities that have the same molecular energy level at a specified timescale. These entities are classified through bonding types and relative abundance of isotopes. Types of chemical species can be classified based on the type of molecular entity and can be either an atomic, molecular, ionic or radical species.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemical Species";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ChemicalSubstance(string text)
{
    string model = "llama3";
    string definition = "A chemical substance is a unique form of matter with constant chemical composition and characteristic properties. Chemical substances may take the form of a single element or chemical compounds. If two or more chemical substances can be combined without reacting, they may form a chemical mixture. If a mixture is separated to isolate one chemical substance to a desired degree, the resulting substance is said to be chemically pure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemical Substance";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ChemicalSynthesis(string text)
{
    string model = "llama3";
    string definition = "Chemical synthesis (chemical combination) is the artificial execution of chemical reactions to obtain one or several products. This occurs by physical and chemical manipulations usually involving one or more reactions. In modern laboratory uses, the process is reproducible and reliable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemical Synthesis";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Chemistry(string text)
{
    string model = "llama3";
    string definition = "Chemistry is the scientific study of the properties and behavior of matter. It is a physical science within the natural sciences that studies the chemical elements that make up matter and compounds made of atoms, molecules and ions: their composition, structure, properties, behavior and the changes they undergo during reactions with other substances. Chemistry also addresses the nature of chemical bonds in chemical compounds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::ChiralityChemistry(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a molecule or ion is called chiral (/\'ka?r?l/) if it cannot be superposed on its mirror image by any combination of rotations, translations, and some conformational changes. This geometric property is called chirality. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chirality Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Chromatography(string text)
{
    string model = "llama3";
    string definition = "In chemical analysis, chromatography is a laboratory technique for the separation of a mixture into its components. The mixture is dissolved in a fluid solvent (gas or liquid) called the mobile phase, which carries it through a system (a column, a capillary tube, a plate, or a sheet) on which a material called the stationary phase is fixed. Because the different constituents of the mixture tend to have different affinities for the stationary phase and are retained for different lengths of time depending on their interactions with its surface sites, the constituents travel at different apparent velocities in the mobile fluid, causing them to separate. The separation is based on the differential partitioning between the mobile and the stationary phases. Subtle differences in a compound\'s partition coefficient result in differential retention on the stationary phase and thus affect the separation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chromatography";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::CisTransIsomerism(string text)
{
    string model = "llama3";
    string definition = "also known as geometric isomerism, describes certain arrangements of atoms within molecules. The prefixes \"cis\" and \"trans\" are from Latin: \"this side of\" and \"the other side of\", respectively. In the context of chemistry, cis indicates that the functional groups (substituents) are on the same side of some plane, while trans conveys that they are on opposing (transverse) sides. Cis-trans isomers are stereoisomers, that is, pairs of molecules which have the same formula but whose functional groups are in different orientations in three-dimensional space. Cis and trans isomers occur both in organic molecules and in inorganic coordination complexes. Cis and trans descriptors are not used for cases of conformational isomerism where the two geometric forms easily interconvert, such as most open-chain single-bonded structures; instead, the terms \"syn\" and \"anti\" are used.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cis Trans Isomerism";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ClosedSystem(string text)
{
    string model = "llama3";
    string definition = "A closed system is a natural physical system that does not allow transfer of matter in or out of the system, although - in the contexts of physics, chemistry, engineering, etc. - the transfer of energy (e.g. as work or heat) is allowed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Closed System";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Nanocluster(string text)
{
    string model = "llama3";
    string definition = "Nanoclusters are atomically precise, crystalline materials most often existing on the 0-2 nanometer scale. They are often considered kinetically stable intermediates that form during the synthesis of comparatively larger materials such as semiconductor and metallic nanocrystals. The majority of research conducted to study nanoclusters has focused on characterizing their crystal structures and understanding their role in the nucleation and growth mechanisms of larger materials.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nanocluster";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ColligativeProperty(string text)
{
    string model = "llama3";
    string definition = "In chemistry, colligative properties are those properties of solutions that depend on the ratio of the number of solute particles to the number of solvent particles in a solution, and not on the nature of the chemical species present. The number ratio can be related to the various units for concentration of a solution such as molarity, molality, normality (chemistry), etc. The assumption that solution properties are independent of nature of solute particles is exact only for ideal solutions, which are solutions that exhibit thermodynamic properties analogous to those of an ideal gas, and is approximate for dilute real solutions. In other words, colligative properties are a set of solution properties that can be reasonably approximated by the assumption that the solution is ideal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Colligative Property";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Colloid(string text)
{
    string model = "llama3";
    string definition = "A colloid is a mixture in which one substance consisting of microscopically dispersed insoluble particles is suspended throughout another substance. Some definitions specify that the particles must be dispersed in a liquid, while others extend the definition to include substances like aerosols and gels. The term colloidal suspension refers unambiguously to the overall mixture (although a narrower sense of the word suspension is distinguished from colloids by larger particle size). A colloid has a dispersed phase (the suspended particles) and a continuous phase (the medium of suspension). The dispersed phase particles have a diameter of approximately 1 nanometre to 1 micrometre.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Colloid";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ColorStandard(string text)
{
    string model = "llama3";
    string definition = "A liquid solution of known chemical composition and concentration, and hence of known and standardized color, used as a reference in the optical analysis of samples of unknown strength.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Color Standard";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ColorTest(string text)
{
    string model = "llama3";
    string definition = "The quantitative analysis of a substance by comparing the intensity of the color produced when the substance is exposed to a reagent with a standard color produced similarly in a solution of known strength.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Color Test";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Colorimeter(string text)
{
    string model = "llama3";
    string definition = "A colorimeter is a device used in colorimetry that measures the absorbance of particular wavelengths of light by a specific solution. It is commonly used to determine the concentration of a known solute in a given solution by the application of the Beer-Lambert law, which states that the concentration of a solute is proportional to the absorbance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Colorimeter";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Combustion(string text)
{
    string model = "llama3";
    string definition = "Combustion, or burning, is a high-temperature exothermic redox chemical reaction between a fuel (the reductant) and an oxidant, usually atmospheric oxygen, that produces oxidized, often gaseous products, in a mixture termed as smoke. Combustion does not always result in fire, because a flame is only visible when substances undergoing combustion vaporize, but when it does, a flame is a characteristic indicator of the reaction. While activation energy must be supplied to initiate combustion (e.g., using a lit match to light a fire), the heat from a flame may provide enough energy to make the reaction self-sustaining. The study of combustion is known as combustion science.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Complex(string text)
{
    string model = "llama3";
    string definition = "A coordination complex is a chemical compound consisting of a central atom or ion, which is usually metallic and is called the coordination centre, and a surrounding array of bound molecules or ions, that are in turn known as ligands or complexing agents. Many metal-containing compounds, especially those that include transition metals (elements like titanium that belong to the periodic table\'s d-block), are coordination complexes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Complex";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Compound(string text)
{
    string model = "llama3";
    string definition = "A chemical compound is a chemical substance composed of many identical molecules (or molecular entities) containing atoms from more than one chemical element held together by chemical bonds. A molecule consisting of atoms of only one element is therefore not a compound. A compound can be transformed into a different substance by a chemical reaction, which may involve interactions with other substances. In this process, bonds between atoms may be broken and/or new bonds formed. There are four major types of compounds, distinguished by how the constituent atoms are bonded together. Molecular compounds are held together by covalent bonds; ionic compounds are held together by ionic bonds; intermetallic compounds are held together by metallic bonds; coordination complexes are held together by coordinate covalent bonds. Non-stoichiometric compounds form a disputed marginal case.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Compound";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ComptonRule(string text)
{
    string model = "llama3";
    string definition = "An empirical law of physical chemistry which states that the heat of fusion of a given element multiplied by its atomic weight and then divided by its melting point in kelvin is always equal to approximately 2.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Compton Rule";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Concatemer(string text)
{
    string model = "llama3";
    string definition = "A concatemer is a long continuous DNA molecule that contains multiple copies of the same DNA sequence linked in series. These polymeric molecules are usually copies of an entire genome linked end to end and separated by cos sites (a protein binding nucleotide sequence that occurs once in each copy of the genome). Concatemers are frequently the result of rolling circle replication, and may be seen in the late stage of infection of bacteria by phages. As an example, if the genes in the phage DNA are arranged ABC, then in a concatemer the genes would be ABCABCABCABC and so on (assuming synthesis was initiated between genes C and A). They are further broken by ribozymes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Concatemer";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Condensation(string text)
{
    string model = "llama3";
    string definition = "Condensation is the change of the state of matter from the gas phase into the liquid phase, and is the reverse of vaporization. The word most often refers to the water cycle. It can also be defined as the change in the state of water vapor to liquid water when in contact with a liquid or solid surface or cloud condensation nuclei within the atmosphere. When the transition happens from the gaseous phase into the solid phase directly, the change is called deposition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Condensation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Condosity(string text)
{
    string model = "llama3";
    string definition = "Condosity is a comparative measurement of electrical conductivity of a solution. The condosity of any given solution is defined as the molar concentration of a sodium chloride (NaCl) solution that has the same specific electrical conductance as the solution under test. By way of example, for a 2 Molar potassium chloride (KCl) solution, the condosity would be expected to be somewhat greater than 2.0. This is because potassium is a better conductor than sodium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Condosity";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Conductor(string text)
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
            return "Conductor";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Conformation(string text)
{
    string model = "llama3";
    string definition = "The spatial arrangement of atoms affording distinction between stereoisomers which can be interconverted by rotations about formally single bonds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conformation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Conjugate(string text)
{
    string model = "llama3";
    string definition = "A conjugate acid, within the Bronsted-Lowry acid-base theory, is a chemical compound formed when an acid gives a proton (H+) to a base-in other words, it is a base with a hydrogen ion added to it, as it loses a hydrogen ion in the reverse reaction. On the other hand, a conjugate base is what remains after an acid has donated a proton during a chemical reaction. Hence, a conjugate base is a substance formed by the removal of a proton from an acid, as it can gain a hydrogen ion in the reverse reaction.  Because some acids can give multiple protons, the conjugate base of an acid may itself be acidic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conjugate";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ConjugatedSystem(string text)
{
    string model = "llama3";
    string definition = "In theoretical chemistry, a conjugated system is a system of connected p-orbitals with delocalized electrons in a molecule, which in general lowers the overall energy of the molecule and increases stability. It is conventionally represented as having alternating single and multiple bonds. Lone pairs, radicals or carbenium ions may be part of the system, which may be cyclic, acyclic, linear or mixed. The term \"conjugated\" was coined in 1899 by the German chemist Johannes Thiele.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conjugated System";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Convection(string text)
{
    string model = "llama3";
    string definition = "Convection is single or multiphase fluid flow that occurs spontaneously through the combined effects of material property heterogeneity and body forces on a fluid, most commonly density and gravity (see buoyancy). When the cause of the convection is unspecified, convection due to the effects of thermal expansion and buoyancy can be assumed. Convection may also take place in soft solids or mixtures where particles can flow.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::CoolingCurve(string text)
{
    string model = "llama3";
    string definition = "A cooling curve is a line graph that represents the change of phase of matter, typically from a gas to a solid or a liquid to a solid. The independent variable (X-axis) is time and the dependent variable (Y-axis) is temperature. Below is an example of a cooling curve used in castings.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cooling Curve";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::CoordinationComplex(string text)
{
    string model = "llama3";
    string definition = "A coordination complex is a chemical compound consisting of a central atom or ion, which is usually metallic and is called the coordination centre, and a surrounding array of bound molecules or ions, that are in turn known as ligands or complexing agents. Many metal-containing compounds, especially those that include transition metals (elements like titanium that belong to the periodic table\'s d-block), are coordination complexes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coordination Complex";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Corrosion(string text)
{
    string model = "llama3";
    string definition = "Corrosion is a natural process that converts a refined metal into a more chemically stable oxide. It is the gradual deterioration of materials (usually a metal) by chemical or electrochemical reaction with their environment. Corrosion engineering is the field dedicated to controlling and preventing corrosion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Coulomb(string text)
{
    string model = "llama3";
    string definition = "The coulomb (symbol: C) is the unit of electric charge in the International System of Units (SI). It is equal to the electric charge delivered by a 1 ampere current in 1 second and is defined in terms of the elementary charge e, at about 6.241509*10^18 e.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Counterion(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a counterion (sometimes written as \"counter ion\", pronounced as such) is the ion that accompanies an ionic species in order to maintain electric neutrality. In table salt (NaCl, also known as sodium chloride) the sodium ion (positively charged) is the counterion for the chloride ion (negatively charged) and vice versa.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Counterion";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::CovalentBond(string text)
{
    string model = "llama3";
    string definition = "A covalent bond is a chemical bond that involves the sharing of electrons to form electron pairs between atoms. These electron pairs are known as shared pairs or bonding pairs. The stable balance of attractive and repulsive forces between atoms, when they share electrons, is known as covalent bonding. For many molecules, the sharing of electrons allows each atom to attain the equivalent of a full valence shell, corresponding to a stable electronic configuration. In organic chemistry, covalent bonding is much more common than ionic bonding.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::CriticalPoint(string text)
{
    string model = "llama3";
    string definition = "In thermodynamics, a critical point (or critical state) is the end point of a phase equilibrium curve. One example is the liquid-vapor critical point, the end point of the pressure-temperature curve that designates conditions under which a liquid and its vapor can coexist. At higher temperatures, the gas comes into a supercritical phase, and so cannot be liquefied by pressure alone. At the critical point, defined by a critical temperature Tc and a critical pressure pc, phase boundaries vanish. Other examples include the liquid-liquid critical points in mixtures, and the ferromagnet-paramagnet transition (Curie temperature) in the absence of an external magnetic field.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Critical Point";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Crucible(string text)
{
    string model = "llama3";
    string definition = "A ceramic or metal dish or other vessel in which substances can be melted or otherwise subjected to very high temperatures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Crucible";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Crystal(string text)
{
    string model = "llama3";
    string definition = "A crystal or crystalline solid is a solid material whose constituents (such as atoms, molecules, or ions) are arranged in a highly ordered microscopic structure, forming a crystal lattice that extends in all directions. In addition, macroscopic single crystals are usually identifiable by their geometrical shape, consisting of flat faces with specific, characteristic orientations. The scientific study of crystals and crystal formation is known as crystallography. The process of crystal formation via mechanisms of crystal growth is called crystallization or solidification.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Crystallization(string text)
{
    string model = "llama3";
    string definition = "Crystallization is the process by which solids form, where the atoms or molecules are highly organized into a structure known as a crystal. Some ways by which crystals form are precipitating from a solution, freezing, or more rarely deposition directly from a gas. Attributes of the resulting crystal depend largely on factors such as temperature, air pressure, cooling rate, and in the case of liquid crystals, time of fluid evaporation. Crystallization occurs in two major steps. The first is nucleation, the appearance of a crystalline phase from either a supercooled liquid or a supersaturated solvent. The second step is known as crystal growth, which is the increase in the size of particles and leads to a crystal state. An important feature of this step is that loose particles form layers at the crystal\'s surface and lodge themselves into open inconsistencies such as pores, cracks, etc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Crystallography(string text)
{
    string model = "llama3";
    string definition = "Crystallography is the branch of science devoted to the study of molecular and crystalline structure and properties. Crystallography is a broad topic, and many of its subareas, such as X-ray crystallography, are themselves important scientific topics. Crystallography ranges from the fundamentals of crystal structure to the mathematics of crystal geometry, including those that are not periodic or quasicrystals. At the atomic scale it can involve the use of X-ray diffraction to produce experimental data that the tools of X-ray crystallography can convert into detailed positions of atoms, and sometimes electron density. At larger scales it includes experimental tools such as orientational imaging to examine the relative orientations at the grain boundary in materials. Crystallography plays a key role in many areas of biology, chemistry, and physics, as well new developments in these fields.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Cuvette(string text)
{
    string model = "llama3";
    string definition = "In laboratories, a cuvette is a small tube-like container with straight sides and a circular or square cross-section. It is sealed at one end, and made of a clear, transparent material such as plastic, glass, or fused quartz. Cuvettes are designed to hold samples for spectroscopic measurement, where a beam of light is passed through the sample within the cuvette to measure the absorbance, transmittance, fluorescence intensity, fluorescence polarization, or fluorescence lifetime of the sample. This measurement is done with a spectrophotometer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cuvette";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Cyclic(string text)
{
    string model = "llama3";
    string definition = "A cyclic compound (or ring compound) is a term for a compound in the field of chemistry in which one or more series of atoms in the compound is connected to form a ring. Rings may vary in size from three to many atoms, and include examples where all the atoms are carbon (i.e., are carbocycles), none of the atoms are carbon (inorganic cyclic compounds), or where both carbon and non-carbon atoms are present (heterocyclic compounds with rings containing both carbon and non-carbon). Depending on the ring size, the bond order of the individual links between ring atoms, and their arrangements within the rings, carbocyclic and heterocyclic compounds may be aromatic or non-aromatic; in the latter case, they may vary from being fully saturated to having varying numbers of multiple bonds between the ring atoms. Because of the tremendous diversity allowed, in combination, by the valences of common atoms and their ability to form rings, the number of possible cyclic structures, even of small size (e.g., < 17 total atoms) numbers in the many billions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cyclic";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Dalton(string text)
{
    string model = "llama3";
    string definition = "The dalton or unified atomic mass unit (symbols: Da or u, respectively) is a unit of mass defined as 1/12 of the mass of an unbound neutral atom of carbon-12 in its nuclear and electronic ground state and at rest. It is a non-SI unit accepted for use with SI.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dalton";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::DaltonsLaw(string text)
{
    string model = "llama3";
    string definition = "Dalton\'s law (also called Dalton\'s law of partial pressures) states that in a mixture of non-reacting gases, the total pressure exerted is equal to the sum of the partial pressures of the individual gases. This empirical law was observed by John Dalton in 1801 and published in 1802. Dalton\'s law is related to the ideal gas laws.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::DBlock(string text)
{
    string model = "llama3";
    string definition = "The d-block, with the d standing for \"diffuse\" and azimuthal quantum number 2, is in the middle of the periodic table and encompasses elements from groups 3 to 12; it starts in the 4th period. Periods from the fourth onwards have a space for ten d-block elements. Most or all of these elements are also known as transition metals because they occupy a transitional zone in properties, between the strongly electropositive metals of groups 1 and 2, and the weakly electropositive metals of groups 13 to 16. Group 3 or group 12, while still counted as d-block metals, are sometimes not counted as transition metals because they do not show the chemical properties characteristic of transition metals as much, for example, multiple oxidation states and coloured compounds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "D Block";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Debye(string text)
{
    string model = "llama3";
    string definition = "A non-SI unit of measurement of electric dipole moment, defined as 10-18 statcoulomb-centimetres.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Debye";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Deionization(string text)
{
    string model = "llama3";
    string definition = "Deionized water (DI water, DIW or de-ionized water), often synonymous with demineralized water / DM water, is water that has had almost all of its mineral ions removed, such as cations like sodium, calcium, iron, and copper, and anions such as chloride and sulfate. Deionization is a chemical process that uses specially manufactured ion-exchange resins, which exchange hydrogen and hydroxide ions for dissolved minerals, and then recombine to form water. Because most non-particulate water impurities are dissolved salts, deionization produces highly pure water that is generally similar to distilled water, with the advantage that the process is quicker and does not build up scale. However, deionization does not significantly remove uncharged organic molecules, viruses, or bacteria, except by incidental trapping in the resin. Specially made strong base anion resins can remove Gram-negative bacteria. Deionization can be done continuously and inexpensively using electrodeionization.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deionization";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Deliquescence(string text)
{
    string model = "llama3";
    string definition = "Deliquescence, like hygroscopy, is also characterized by a strong affinity for water and tendency to absorb moisture from the atmosphere if exposed to it. Unlike hygroscopy, however, deliquescence involves absorbing sufficient water to form an aqueous solution. Most deliquescent materials are salts, including calcium chloride, magnesium chloride, zinc chloride, ferric chloride, carnallite, potassium carbonate, potassium phosphate, ferric ammonium citrate, ammonium nitrate, potassium hydroxide, and sodium hydroxide. Owing to their very high affinity for water, these substances are often used as desiccants, which is also an application for concentrated sulfuric and phosphoric acids. Some deliquescent compounds are used in the chemical industry to remove water produced by chemical reactions (see drying tube).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deliquescence";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::DelocalizedElectron(string text)
{
    string model = "llama3";
    string definition = "In chemistry, delocalized electrons are electrons in a molecule, ion or solid metal that are not associated with a single atom or a covalent bond.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Delocalized Electron";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Density(string text)
{
    string model = "llama3";
    string definition = "Density (volumetric mass density or specific mass) is a substance\'s mass per unit of volume. The symbol most often used for density is ? (the lower case Greek letter rho), although the Latin letter D can also be used. Mathematically, density is defined as mass divided by volume:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Denticity(string text)
{
    string model = "llama3";
    string definition = "In coordination chemistry, denticity (from Latin dentis \'tooth\') refers to the number of donor groups in a given ligand that bind to the central metal atom in a coordination complex. In many cases, only one atom in the ligand binds to the metal, so the denticity equals one, and the ligand is said to be unidentate or monodentate. Ligands with more than one bonded atom are called multidentate or polydentate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Denticity";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::DependentVariable(string text)
{
    string model = "llama3";
    string definition = "A variable is considered dependent if it depends on an independent variable. Dependent variables are studied under the supposition or demand that they depend, by some law or rule (e.g., by a mathematical function), on the values of other variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dependent Variable";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Deposition(string text)
{
    string model = "llama3";
    string definition = "In chemistry, deposition occurs when molecules settle out of a solution. Deposition can be defined as the process of direct transition of a substance from its gaseous form, on cooling, into a solid state without passing through the intermediate liquid state.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deposition";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Desiccant(string text)
{
    string model = "llama3";
    string definition = "A desiccant is a hygroscopic substance that is used to induce or sustain a state of dryness (desiccation) in its vicinity; it is the opposite of a humectant. Commonly encountered pre-packaged desiccants are solids that absorb water. Desiccants for specialized purposes may be in forms other than solid, and may work through other principles, such as chemical bonding of water molecules. They are commonly encountered in foods to retain crispness. Industrially, desiccants are widely used to control the level of water in gas streams.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Desiccant";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Desiccation(string text)
{
    string model = "llama3";
    string definition = "Desiccation is the state of extreme dryness, or the process of extreme drying. A desiccant is a hygroscopic (attracts and holds water) substance that induces or sustains such a state in its local vicinity in a moderately sealed container. The word desiccation comes from Latin de- \'thoroughly\' and siccare \'to dry\'.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Desiccation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Deuterium(string text)
{
    string model = "llama3";
    string definition = "Deuterium (hydrogen-2, symbol 2H or D, also known as heavy hydrogen) is one of two stable isotopes of hydrogen; the other is protium, or hydrogen-1, 1H. The deuterium nucleus (deuteron) contains one proton and one neutron, whereas the far more common 1H has no neutrons. Deuterium has a natural abundance in Earth\'s oceans of about one atom of deuterium in every 6,420 atoms of hydrogen. Thus, deuterium accounts for about 0.0156% by number (0.0312% by mass) of all hydrogen in the ocean: 4.85*10^13 tonnes of deuterium – mainly as HOD (or 1HO2H or 1H2HO) and only rarely as D2O (or 2H2O) (Deuterium Oxide, also known as Heavy Water)– in 1.4*10^18 tonnes of water. The abundance of 2H changes slightly from one kind of natural water to another (see Vienna Standard Mean Ocean Water).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deuterium";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Diastereomer(string text)
{
    string model = "llama3";
    string definition = "In stereochemistry, diastereomers (sometimes called diastereoisomers) are a type of stereoisomer. Diastereomers are defined as non-mirror image, non-identical stereoisomers. Hence, they occur when two or more stereoisomers of a compound have different configurations at one or more (but not all) of the equivalent (related) stereocenters and are not mirror images of each other. When two diastereoisomers differ from each other at only one stereocenter, they are epimers. Each stereocenter gives rise to two different configurations and thus typically increases the number of stereoisomers by a factor of two.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diastereomer";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::DiatomicMolecule(string text)
{
    string model = "llama3";
    string definition = "Diatomic molecules (from Greek di- \'two\') are molecules composed of only two atoms, of the same or different chemical elements. If a diatomic molecule consists of two atoms of the same element, such as hydrogen (H2) or oxygen (O2), then it is said to be homonuclear. Otherwise, if a diatomic molecule consists of two different atoms, such as carbon monoxide (CO) or nitric oxide (NO), the molecule is said to be heteronuclear. The bond in a homonuclear diatomic molecule is non-polar.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diatomic Molecule";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Diffusion(string text)
{
    string model = "llama3";
    string definition = "Diffusion is the net movement of anything (for example, atoms, ions, molecules, energy) generally from a region of higher concentration to a region of lower concentration. Diffusion is driven by a gradient in Gibbs free energy or chemical potential. It is possible to diffuse \"uphill\" from a region of lower concentration to a region of higher concentration, as in spinodal decomposition. Diffusion is a stochastic process due to the inherent randomness of the diffusing entity and can be used to model many real-life stochastic scenarios. Therefore, diffusion and the corresponding mathematical models are used in several fields beyond physics, such as statistics, probability theory, information theory, neural networks, finance, and marketing.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Dilatant(string text)
{
    string model = "llama3";
    string definition = "A dilatant (also termed shear thickening) material is one in which viscosity increases with the rate of shear strain. Such a shear thickening fluid, also known by the initialism STF, is an example of a non-Newtonian fluid. This behaviour is usually not observed in pure materials, but can occur in suspensions. A dilatant is a non-Newtonian fluid where the shear viscosity increases with applied shear stress. This behavior is only one type of deviation from Newton's law of viscosity, and it is controlled by such factors as particle size, shape, and distribution. The properties of these suspensions depend on Hamaker theory and Van der Waals forces and can be stabilized electrostatically or sterically. Shear thickening behavior occurs when a colloidal suspension transitions from a stable state to a state of flocculation. A large portion of the properties of these systems are due to the surface chemistry of particles in dispersion, known as colloids.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dilatant";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Dimerization(string text)
{
    string model = "llama3";
    string definition = "In chemistry, dimerization is the process of joining two identical or similar molecular entities by bonds. The resulting bonds can be either strong or weak. Many symmetrical chemical species are described as dimers, even when the monomer is unknown or highly unstable. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dimerization";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::DipolarBond(string text)
{
    string model = "llama3";
    string definition = "A type of covalent bond formed by the coordination of two or more electrically neutral moieties, the combination of which results in a charge-separated molecule or coordination complex, in which two electrons deriving from the same atom are shared between the donor atom and an acceptor atom, creating an internal two-center molecular dipole moment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dipolar Bond";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Dipole(string text)
{
    string model = "llama3";
    string definition = "In physics, a dipole \'twice\' and  is an electromagnetic phenomenon which occurs in two ways: 1. An electric dipole deals with the separation of the positive and negative electric charges found in any electromagnetic system. A simple example of this system is a pair of charges of equal magnitude but opposite sign separated by some typically small distance. (A permanent electric dipole is called an electret.) A magnetic dipole is the closed circulation of an electric current system. A simple example is a single loop of wire with constant current through it. A bar magnet is an example of a magnet with a permanent magnetic dipole moment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dipole";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::DispersionChemistry(string text)
{
    string model = "llama3";
    string definition = "A dispersion is a system in which distributed particles of one material are dispersed in a continuous phase of another material. The two phases may be in the same or different states of matter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dispersion Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::DissociationChemistry(string text)
{
    string model = "llama3";
    string definition = "Dissociation in chemistry is a general process in which molecules (or ionic compounds such as salts, or complexes) separate or split into other things such as atoms, ions, or radicals, usually in a reversible manner. For instance, when an acid dissolves in water, a covalent bond between an electronegative atom and a hydrogen atom is broken by heterolytic fission, which gives a proton (H+) and a negative ion. Dissociation is the opposite of association or recombination.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dissociation Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Dissolution(string text)
{
    string model = "llama3";
    string definition = "The interaction of a solvent with the molecules or ions of a solute, involving bond formation, hydrogen bonding, and van der Waals forces.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dissolution";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Distillation(string text)
{
    string model = "llama3";
    string definition = "Distillation, also classical distillation, is the process of separating the component substances of a liquid mixture of two or more chemically discrete substances; the separation process is realized by way of the selective boiling of the mixture and the condensation of the vapors in a still.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Distillation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::DoubleBond(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a double bond is a covalent bond between two atoms involving four bonding electrons as opposed to two in a single bond. Double bonds occur most commonly between two carbon atoms, for example in alkenes. Many double bonds exist between two different elements: for example, in a carbonyl group between a carbon atom and an oxygen atom. Other common double bonds are found in azo compounds (N=N), imines (C=N), and sulfoxides (S=O). In a skeletal formula, a double bond is drawn as two parallel lines (=) between the two connected atoms; typographically, the equals sign is used for this. Double bonds were introduced in chemical notation by Russian chemist Alexander Butlerov.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Double Bond";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::DoubleSalt(string text)
{
    string model = "llama3";
    string definition = "1.  A salt composed of more than one different cation or anion, or which upon hydrolysis forms two different cations and anions. 2.  A salt that is a molecular combination of two other salts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Double Salt";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::DroppingPoint(string text)
{
    string model = "llama3";
    string definition = "The dropping point of a lubricating grease is an indication of the heat resistance of the grease and is the temperature at which it passes from a semi-solid to a liquid state under specific test conditions. It is dependent on the type of thickener used and the cohesiveness of the oil and thickener of a grease. The dropping point indicates the upper temperature limit at which a grease retains its structure though is not necessarily the maximum temperature at which a grease can be used.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dropping Point";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::DryBox(string text)
{
    string model = "llama3";
    string definition = "A dry box is a storage container in which the interior is kept at a low level of humidity. It may be as simple as an airtight and watertight enclosure, or it may use active means to remove water vapor from the air trapped inside. Dry boxes are used to safely store items that would otherwise be damaged or adversely affected by excessive humidity, such as cameras and lenses (to prevent fungal growth), 3D printing filament (to prevent moisture caused damages such as popping and sizzling when passing thru the hotend and turning into steam. Moisture soaked filament also becomes brittle or soft.), and musical instruments (to prevent humidity induced swelling or shrinkage of wooden instrument parts). They are also used in the storage of surface mount electronic components prior to circuit board assembly, to prevent water absorption that could flash into steam during reflow soldering, destroying the part.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dry Box";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Ductility(string text)
{
    string model = "llama3";
    string definition = "Ductility refers to the ability of a material to sustain significant plastic deformation before fracture. Plastic deformation is the permanent distortion of a material under applied stress, as opposed to elastic deformation, which is reversible upon removing the stress. Ductility is a critical mechanical performance indicator, particularly in applications that require materials to bend, stretch, or deform in other ways without breaking. The extent of ductility can be quantitatively assessed using the percent elongation at break, given by the equation: %EL = (lf -l0/l0) * 100.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::DystecticMixture(string text)
{
    string model = "llama3";
    string definition = "A mixture of two or more substances which has the highest melting point of all possible mixtures of these substances. Contrast eutectic mixture.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dystectic Mixture";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::EffectiveMolecularDiameter(string text)
{
    string model = "llama3";
    string definition = "The physical extent of the electron cloud surrounding a molecule of a particular gas, as calculated in any of several ways and usually expressed in nanometres or angstroms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Effective Molecular Diameter";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Effervescence(string text)
{
    string model = "llama3";
    string definition = "Effervescence is the escape of gas from an aqueous solution and the foaming or fizzing that results from that release. The word effervescence is derived from the Latin verb fervere (to boil), preceded by the adverb ex. It has the same linguistic root as the word fermentation. Effervescence can also be observed when opening a bottle of champagne, beer or carbonated beverages such as some carbonated soft drinks. The visible bubbles are produced by the escape from solution of the dissolved gas (which itself is not visible while dissolved in the liquid).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Effervescence";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ElectricCharge(string text)
{
    string model = "llama3";
    string definition = "Electric charge (symbol q, sometimes Q) is the physical property of matter that causes it to experience a force when placed in an electromagnetic field. Electric charge can be positive or negative. Like charges repel each other and unlike charges attract each other. An object with no net charge is referred to as electrically neutral. Early knowledge of how charged substances interact is now called classical electrodynamics, and is still accurate for problems that do not require consideration of quantum effects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::ElectricDipoleMoment(string text)
{
    string model = "llama3";
    string definition = "The electric dipole moment is a measure of the separation of positive and negative electrical charges within a system: that is, a measure of the system\'s overall polarity. The SI unit for electric dipole moment is the coulomb-metre (C*m). The debye (D) is another unit of measurement used in atomic physics and chemistry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electric Dipole Moment";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ElectricalConductivity(string text)
{
    string model = "llama3";
    string definition = "Electrical conductivity (or specific conductance) is the reciprocal of electrical resistivity. It represents a material\'s ability to conduct electric current. It is commonly signified by the Greek letter σ (sigma), but ? (kappa) (especially in electrical engineering) and ? (gamma) are sometimes used. The SI unit of electrical conductivity is siemens per metre (S/m). Resistivity and conductivity are intensive properties of materials, giving the opposition of a standard cube of material to current. Electrical resistance and conductance are corresponding extensive properties that give the opposition of a specific object to electric current.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrical Conductivity";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ElectricalResistivity(string text)
{
    string model = "llama3";
    string definition = "Electrical resistivity (also called volume resistivity or specific electrical resistance) is a fundamental specific property of a material that measures its electrical resistance or how strongly it resists electric current. A low resistivity indicates a material that readily allows electric current.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrical Resistivity";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Electricity(string text)
{
    string model = "llama3";
    string definition = "Electricity is the set of physical phenomena associated with the presence and motion of matter possessing an electric charge. Electricity is related to magnetism, both being part of the phenomenon of electromagnetism, as described by Maxwell\'s equations. Common phenomena are related to electricity, including lightning, static electricity, electric heating, electric discharges and many others.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Electride(string text)
{
    string model = "llama3";
    string definition = "An electride is an ionic compound in which an electron serves the role of the anion. Solutions of alkali metals in ammonia are electride salts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electride";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Electrochemistry(string text)
{
    string model = "llama3";
    string definition = "Electrochemistry is the branch of physical chemistry concerned with the relationship between electrical potential difference and identifiable chemical change. These reactions involve electrons moving via an electronically conducting phase (typically an external electrical circuit, but not necessarily, as in electroless plating) between electrodes separated by an ionically conducting and electronically insulating electrolyte (or ionic species in a solution).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrochemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Electrolyte(string text)
{
    string model = "llama3";
    string definition = "An electrolyte is a substance that conducts electricity through the movement of ions, but not through the movement of electrons. This includes most soluble salts, acids, and bases, dissolved in a polar solvent like water. Upon dissolving, the substance separates into cations and anions, which disperse uniformly throughout the solvent. Solid-state electrolytes also exist. In medicine and sometimes in chemistry, the term electrolyte refers to the substance that is dissolved.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrolyte";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ElectronCapture(string text)
{
    string model = "llama3";
    string definition = "A type of nuclear transformation by which the proton-rich nucleus of an electrically neutral atom absorbs or \'captures\' an electron from one of its own inner shells, often those closest to the nucleus, which provokes a reaction that results in a nuclear proton changing into a neutron accompanied by the simultaneous emission of an electron neutrino.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::ElectronConfiguration(string text)
{
    string model = "llama3";
    string definition = "The distribution of the electrons of an atom or molecule within atomic or molecular orbitals. An extensive system of notation is used to concisely and uniquely display information about the electron configuration of each atomic species. Knowledge of the specific arrangements of electrons in different atoms is useful for understanding chemical bonds and the organization of the periodic table of the elements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron Configuration";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ElectronDeficiency(string text)
{
    string model = "llama3";
    string definition = "In chemistry, electron deficiency (and electron-deficient) is jargon that is used in two contexts: chemical species that violate the octet rule because they have too few valence electrons and species that happen to follow the octet rule but have electron-acceptor properties, forming donor-acceptor charge-transfer salts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron Deficiency";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ElectronDonor(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an electron donor is a chemical entity that transfers electrons to another compound. It is a reducing agent that, by virtue of its donating electrons, is itself oxidized in the process. An obsolete definition equated an electron donor and a Lewis base.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron Donor";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ElectronElectricDipoleMoment(string text)
{
    string model = "llama3";
    string definition = "An intrinsic property of an electron such that its potential energy is linearly related to the strength of its electric field; a measure of the distribution of an electron\'s negative charge within the electric field it creates. See also electric dipole moment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron Electric Dipole Moment";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ElectronMagneticDipoleMoment(string text)
{
    string model = "llama3";
    string definition = "In atomic physics, the electron magnetic moment, or more specifically the electron magnetic dipole moment, is the magnetic moment of an electron resulting from its intrinsic properties of spin and electric charge.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron Magnetic Dipole Moment";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::TheElectronNeutrinoanElementaryParticle(string text)
{
    string model = "llama3";
    string definition = "an elementary particle which has zero electric charge and a spin of 1/2 Together with the electron, it forms the first generation of leptons, hence the name electron neutrino. It was first hypothesized by Wolfgang Pauli in 1930, to account for missing momentum and missing energy in beta decay, and was discovered in 1956 by a team led by Clyde Cowan and Frederick Reines (see Cowan-Reines neutrino experiment).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "The Electron Neutrinoan Elementary Particle";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ElectronPair(string text)
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

string _Chemistry::Terms::ElectronShell(string text)
{
    string model = "llama3";
    string definition = "In chemistry and atomic physics, an electron shell may be thought of as an orbit that electrons follow around an atom\'s nucleus. The closest shell to the nucleus is called the \"1 shell\" (also called the \"K shell\"), followed by the \"2 shell\" (or \"L shell\"), then the \"3 shell\" (or \"M shell\"), and so on further and further from the nucleus. The shells correspond to the principal quantum numbers (n = 1, 2, 3, 4 ...) or are labeled alphabetically with the letters used in X-ray notation (K, L, M, ...). A useful guide when understanding electron shells in atoms is to note that each row on the conventional periodic table of elements represents an electron shell.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron Shell";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Electronegativity(string text)
{
    string model = "llama3";
    string definition = "the tendency for an atom of a given chemical element to attract shared electrons (or electron density) when forming a chemical bond. An atom\'s electronegativity is affected by both its atomic number and the distance at which its valence electrons reside from the charged nucleus. The higher the associated electronegativity, the more an atom or a substituent group attracts electrons. Electronegativity serves as a simple way to quantitatively estimate the bond energy, and the sign and magnitude of a bond\'s chemical polarity, which characterizes a bond along the continuous scale from covalent to ionic bonding. The loosely defined term electropositivity is the opposite of electronegativity: it characterizes an element\'s tendency to donate valence electrons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Electronvolt(string text)
{
    string model = "llama3";
    string definition = "In physics, an electronvolt (symbol eV), also written electron-volt and electron volt, is the measure of an amount of kinetic energy gained by a single electron accelerating through an electric potential difference of one volt in vacuum. When used as a unit of energy, the numerical value of 1 eV in joules (symbol J) is equal to the numerical value of the charge of an electron in coulombs (symbol C). Under the 2019 revision of the SI, this sets 1 eV equal to the exact value 1.602176634*10^-19 J.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Electrophile(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an electrophile is a chemical species that forms bonds with nucleophiles by accepting an electron pair. Because electrophiles accept electrons, they are Lewis acids. Most electrophiles are positively charged, have an atom that carries a partial positive charge, or have an atom that does not have an octet of electrons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrophile";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Electrosynthesis(string text)
{
    string model = "llama3";
    string definition = "In electrochemistry, electrosynthesis is the synthesis of chemical compounds in an electrochemical cell. Compared to ordinary redox reactions, electrosynthesis sometimes offers improved selectivity and yields. Electrosynthesis is actively studied as a science and also has industrial applications. Electrooxidation has potential for wastewater treatment as well.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrosynthesis";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Element(string text)
{
    string model = "llama3";
    string definition = "A species of atoms having the same number of protons in their atomic nuclei and hence the same atomic number. Chemical elements constitute all of the ordinary matter in the universe; 118 elements have been identified and are organized by their various chemical properties in the periodic table of the elements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Element";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ElementaryReaction(string text)
{
    string model = "llama3";
    string definition = "An elementary reaction is a chemical reaction in which one or more chemical species react directly to form products in a single reaction step and with a single transition state. In practice, a reaction is assumed to be elementary if no reaction intermediates have been detected or need to be postulated to describe the reaction on a molecular scale. An apparently elementary reaction may be in fact a stepwise reaction, i.e. a complicated sequence of chemical reactions, with reaction intermediates of variable lifetimes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Elementary Reaction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Elution(string text)
{
    string model = "llama3";
    string definition = "In analytical and organic chemistry, elution is the process of extracting one material from another by washing with a solvent: washing of loaded ion-exchange resins to remove captured ions, or eluting proteins or other biopolymers from a gel electrophoresis or chromatography column.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Elution";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::EmpiricalFormula(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the empirical formula of a chemical compound is the simplest whole number ratio of atoms present in a compound. A simple example of this concept is that the empirical formula of sulfur monoxide, or SO, is simply SO, as is the empirical formula of disulfur dioxide, S2O2. Thus, sulfur monoxide and disulfur dioxide, both compounds of sulfur and oxygen, have the same empirical formula. However, their molecular formulas, which express the number of atoms in each molecule of a chemical compound, are not the same.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Empirical Formula";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Emulsion(string text)
{
    string model = "llama3";
    string definition = "An emulsion is a mixture of two or more liquids that are normally immiscible (unmixable or unblendable) owing to liquid-liquid phase separation. Emulsions are part of a more general class of two-phase systems of matter called colloids. Although the terms colloid and emulsion are sometimes used interchangeably, emulsion should be used when both phases, dispersed and continuous, are liquids. In an emulsion, one liquid (the dispersed phase) is dispersed in the other (the continuous phase). Examples of emulsions include vinaigrettes, homogenized milk, liquid biomolecular condensates, and some cutting fluids for metal working.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Emulsion";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Enantiomer(string text)
{
    string model = "llama3";
    string definition = "also called optical isomer, antipode, or optical antipode - is one of a pair of molecular entities which are mirror images of each other and non-superposable. Enantiomers of each other are much like one\'s right and left hands; without mirroring one of them, hands cannot be superposed onto each other. It is solely a relationship of chirality and the permanent three-dimensional relationships among molecules or other chemical structures: no amount of re-orientiation of a molecule as a whole or conformational change converts one chemical into its enantiomer. Chemical structures with chirality rotate plane-polarized light. A mixture of equal amounts of each enantiomer, a racemic mixture or a racemate, does not rotate light.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Enantiomer";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Enthalpy(string text)
{
    string model = "llama3";
    string definition = "A measure of the total internal energy of a thermodynamic system, usually symbolized by H.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::EnthalpyOfFusion(string text)
{
    string model = "llama3";
    string definition = "In thermodynamics, the enthalpy of fusion of a substance, also known as (latent) heat of fusion, is the change in its enthalpy resulting from providing energy, typically heat, to a specific quantity of the substance to change its state from a solid to a liquid, at constant pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Enthalpy Of Fusion";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Entropy(string text)
{
    string model = "llama3";
    string definition = "Entropy is a scientific concept that is most commonly associated with a state of disorder, randomness, or uncertainty. The term and the concept are used in diverse fields, from classical thermodynamics, where it was first recognized, to the microscopic description of nature in statistical physics, and to the principles of information theory. It has found far-ranging applications in chemistry and physics, in biological systems and their relation to life, in cosmology, economics, sociology, weather science, climate change and information systems including the transmission of information in telecommunication.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::EnvironmentalChemistry(string text)
{
    string model = "llama3";
    string definition = "Environmental chemistry is the scientific study of the chemical and biochemical phenomena that occur in natural places. It should not be confused with green chemistry, which seeks to reduce potential pollution at its source. It can be defined as the study of the sources, reactions, transport, effects, and fates of chemical species in the air, soil, and water environments; and the effect of human activity and biological activity on these. Environmental chemistry is an interdisciplinary science that includes atmospheric, aquatic and soil chemistry, as well as heavily relying on analytical chemistry and being related to environmental and other areas of science.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Environmental Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Enzyme(string text)
{
    string model = "llama3";
    string definition = "proteins that act as biological catalysts by accelerating chemical reactions. The molecules upon which enzymes may act are called substrates, and the enzyme converts the substrates into different molecules known as products. Almost all metabolic processes in the cell need enzyme catalysis in order to occur at rates fast enough to sustain life.: 8.1  Metabolic pathways depend upon enzymes to catalyze individual steps. The study of enzymes is called enzymology and the field of pseudoenzyme analysis recognizes that during evolution, some enzymes have lost the ability to carry out biological catalysis, which is often reflected in their amino acid sequences and unusual \'pseudocatalytic\' properties.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Epimer(string text)
{
    string model = "llama3";
    string definition = "In stereochemistry, an epimer is one of a pair of diastereomers. The two epimers have opposite configuration at only one stereogenic center out of at least two. All other stereogenic centers in the molecules are the same in each. Epimerization is the interconversion of one epimer to the other epimer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Epimer";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::EquationOfState(string text)
{
    string model = "llama3";
    string definition = "In physics and chemistry, an equation of state is a thermodynamic equation relating state variables, which describe the state of matter under a given set of physical conditions, such as pressure, volume, temperature, or internal energy. Most modern equations of state are formulated in the Helmholtz free energy. Equations of state are useful in describing the properties of pure substances and mixtures in liquids, gases, and solid states as well as the state of matter in the interior of stars.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Equation Of State";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Equilibrium(string text)
{
    string model = "llama3";
    string definition = "In a chemical reaction, chemical equilibrium is the state in which both the reactants and products are present in concentrations which have no further tendency to change with time, so that there is no observable change in the properties of the system. This state results when the forward reaction proceeds at the same rate as the reverse reaction. The reaction rates of the forward and backward reactions are generally not zero, but they are equal. Thus, there are no net changes in the concentrations of the reactants and products. Such a state is known as dynamic equilibrium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Equilibrium";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Equimolar(string text)
{
    string model = "llama3";
    string definition = "Having an equal number of moles, or solutions of equal molar concentration.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Equimolar";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ErlenmeyerFlask(string text)
{
    string model = "llama3";
    string definition = "An Erlenmeyer flask, also known as a conical flask (British English) or a titration flask, is a type of laboratory flask with a flat bottom, a conical body, and a cylindrical neck. It is named after the German chemist Emil Erlenmeyer (1825-1909), who invented it in 1860. Erlenmeyer flasks have wide bases and narrow necks. They may be graduated, and often spots of ground glass or enamel are used where they can be labeled with a pencil. It differs from the beaker in its tapered body and narrow neck. Depending on the application, they may be constructed from glass or plastic, in a wide range of volumes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Erlenmeyer Flask";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Ester(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an ester is a compound derived from an acid (organic or inorganic) in which the hydrogen atom (H) of at least one acidic hydroxyl group (-OH) of that acid is replaced by an organyl group (R\'). These compounds contain a distinctive functional group. Analogues derived from oxygen replaced by other chalcogens belong to the ester category as well. According to some authors, organyl derivatives of acidic hydrogen of other acids are esters as well (e.g. amides), but not according to the IUPAC.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ester";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Ether(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, ethers are a class of compounds that contain an ether group-an oxygen atom bonded to two organyl groups (e.g., alkyl or aryl). They have the general formula R-O-R\', where R and R\' represent the organyl groups. Ethers can again be classified into two varieties: if the organyl groups are the same on both sides of the oxygen atom, then it is a simple or symmetrical ether, whereas if they are different, the ethers are called mixed or unsymmetrical ethers. A typical example of the first group is the solvent and anaesthetic diethyl ether, commonly referred to simply as \"ether\" (CH3-CH2-O-CH2-CH3). Ethers are common in organic chemistry and even more prevalent in biochemistry, as they are common linkages in carbohydrates and lignin.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ether";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::EutecticSystem(string text)
{
    string model = "llama3";
    string definition = "A eutectic system or eutectic mixture is a type of a homogeneous mixture that has a melting point lower than those of the constituents. The lowest possible melting point over all of the mixing ratios of the constituents is called the eutectic temperature. On a phase diagram, the eutectic temperature is seen as the eutectic point (see plot on the right).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Eutectic System";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Evaporation(string text)
{
    string model = "llama3";
    string definition = "Evaporation is a type of vaporization that occurs on the surface of a liquid as it changes into the gas phase. A high concentration of the evaporating substance in the surrounding gas significantly slows down evaporation, such as when humidity affects rate of evaporation of water. When the molecules of the liquid collide, they transfer energy to each other based on how they collide. When a molecule near the surface absorbs enough energy to overcome the vapor pressure, it will escape and enter the surrounding air as a gas. When evaporation occurs, the energy removed from the vaporized liquid will reduce the temperature of the liquid, resulting in evaporative cooling.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Evaporation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ExothermicProcess(string text)
{
    string model = "llama3";
    string definition = "In thermodynamics, an exothermic process is a thermodynamic process or reaction that releases energy from the system to its surroundings, usually in the form of heat, but also in a form of light (e.g. a spark, flame, or flash), electricity (e.g. a battery), or sound (e.g. explosion heard when burning hydrogen). The term exothermic was first coined by 19th-century French chemist Marcellin Berthelot.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::ExtensiveProperty(string text)
{
    string model = "llama3";
    string definition = "Physical or chemical properties of materials and systems can often be categorized as being either intensive or extensive, according to how the property changes when the size (or extent) of the system changes. The terms \"intensive and extensive quantities\" were introduced into physics by German mathematician Georg Helm in 1898, and by American physicist and chemist Richard C. Tolman in 1917.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Extensive Property";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Extraction(string text)
{
    string model = "llama3";
    string definition = "1.  A separation process in which a component is separated from its mixture by selective solubility. See also partition. 2.  The separation of a component analyte from a matrix.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Extraction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ExtrinsicProperties(string text)
{
    string model = "llama3";
    string definition = "An extrinsic property is not essential or inherent to the subject that is being characterized. For example, mass is an intrinsic property of any physical object, whereas weight is an extrinsic property that depends on the strength of the gravitational field in which the object is placed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Extrinsic Properties";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ExtractionChemistry(string text)
{
    string model = "llama3";
    string definition = "Extraction in chemistry is a separation process consisting of the separation of a substance from a matrix. The distribution of a solute between two phases is an equilibrium condition described by partition theory. This is based on exactly how the analyte moves from the initial solvent into the extracting solvent. The term washing may also be used to refer to an extraction in which impurities are extracted from the solvent containing the desired compound.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Extraction Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::FaradaysLawsOfElectrolysis(string text)
{
    string model = "llama3";
    string definition = "Faraday\'s laws of electrolysis are quantitative relationships based on the electrochemical research published by Michael Faraday in 1833.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Faradays Laws Of Electrolysis";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::FBlock(string text)
{
    string model = "llama3";
    string definition = "The f-block, with the f standing for \"fundamental\" and azimuthal quantum number 3, appears as a footnote in a standard 18-column table but is located at the center-left of a 32-column full-width table, between groups 2 and 3. Periods from the sixth onwards have a place for fourteen f-block elements. These elements are generally not considered part of any group. They are sometimes called inner transition metals because they provide a transition between the s-block and d-block in the 6th and 7th row (period), in the same way that the d-block transition metals provide a transitional bridge between the s-block and p-block in the 4th and 5th rows.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "F Block";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::FicksLawsOfDiffusion(string text)
{
    string model = "llama3";
    string definition = "Fick\'s laws of diffusion describe diffusion and were first posited by Adolf Fick in 1855 on the basis of largely experimental results. They can be used to solve for the diffusion coefficient, D. Fick\'s first law can be used to derive his second law which in turn is identical to the diffusion equation. Fick\'s first law: Movement of particles from high to low concentration (diffusive flux) is directly proportional to the particle\'s concentration gradient. Fick\'s second law: Prediction of change in concentration gradient with time due to diffusion. A diffusion process that obeys Fick\'s laws is called normal or Fickian diffusion; otherwise, it is called anomalous diffusion or non-Fickian diffusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ficks Laws Of Diffusion";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Filtration(string text)
{
    string model = "llama3";
    string definition = "Filtration is a physical separation process that separates solid matter and fluid from a mixture using a filter medium that has a complex structure through which only the fluid can pass. Solid particles that cannot pass through the filter medium are described as oversize and the fluid that passes through is called the filtrate. Oversize particles may form a filter cake on top of the filter and may also block the filter lattice, preventing the fluid phase from crossing the filter, known as blinding. The size of the largest particles that can successfully pass through a filter is called the effective pore size of that filter. The separation of solid and fluid is imperfect; solids will be contaminated with some fluid and filtrate will contain fine particles (depending on the pore size, filter thickness and biological activity). Filtration occurs both in nature and in engineered systems; there are biological, geological, and industrial forms. In everyday usage the verb \"strain\" is more often used; for example, using a colander to drain cooking water from cooked pasta.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Filtration";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::FirePoint(string text)
{
    string model = "llama3";
    string definition = "The fire point, or combustion point, of a fuel is the lowest temperature at which the liquid fuel will continue to burn for at least five seconds after ignition by an open flame of standard dimension. At the flash point, a lower temperature, a substance will ignite briefly, but vapour might not be produced at a rate to sustain the fire. Most tables of material properties will only list material flash points. In general, the fire point can be assumed to be about 10C higher than the flash point, although this is no substitute for testing if the fire point is safety critical.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fire Point";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::FirstOrderReaction(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the rate equation (also known as the rate law or empirical differential rate equation) is an empirical differential mathematical expression for the reaction rate of a given reaction in terms of concentrations of chemical species and constant parameters (normally rate coefficients and partial orders of reaction) only.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "First Order Reaction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Flask(string text)
{
    string model = "llama3";
    string definition = "Laboratory flasks are vessels or containers that fall into the category of laboratory equipment known as glassware. In laboratory and other scientific settings, they are usually referred to simply as flasks. Flasks come in a number of shapes and a wide range of sizes, but a common distinguishing aspect in their shapes is a wider vessel \"body\" and one (or sometimes more) narrower tubular sections at the top called necks which have an opening at the top. Laboratory flask sizes are specified by the volume they can hold, typically in metric units such as milliliters (mL or ml) or liters (L or l). Laboratory flasks have traditionally been made of glass, but can also be made of plastic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Flask";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Flocculation(string text)
{
    string model = "llama3";
    string definition = "In colloidal chemistry, flocculation is a process by which colloidal particles come out of suspension to sediment in the form of floc or flake, either spontaneously or due to the addition of a clarifying agent. The action differs from precipitation in that, prior to flocculation, colloids are merely suspended, under the form of a stable dispersion (where the internal phase (solid) is dispersed throughout the external phase (fluid) through mechanical agitation) and are not truly dissolved in solution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Flocculation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::FormalCharge(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a formal charge (F.C. or q*), in the covalent view of chemical bonding, is the hypothetical charge assigned to an atom in a molecule, assuming that electrons in all chemical bonds are shared equally between atoms, regardless of relative electronegativity. In simple terms, formal charge is the difference between the number of valence electrons of an atom in a neutral free state and the number assigned to that atom in a Lewis structure. When determining the best Lewis structure (or predominant resonance structure) for a molecule, the structure is chosen such that the formal charge on each of the atoms is as close to zero as possible.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Formal Charge";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::FormulaWeight(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the molar mass (M) (sometimes called molecular weight or formula weight, but see related quantities for usage) of a chemical compound is defined as the ratio between the mass and the amount of substance (measured in moles) of any sample of the compound. The molar mass is a bulk, not molecular, property of a substance. The molar mass is an average of many instances of the compound, which often vary in mass due to the presence of isotopes. Most commonly, the molar mass is computed from the standard atomic weights and is thus a terrestrial average and a function of the relative abundance of the isotopes of the constituent atoms on Earth. The molar mass is appropriate for converting between the mass of a substance and the amount of a substance for bulk quantities.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Formula Weight";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::FractionChemistry(string text)
{
    string model = "llama3";
    string definition = "A fraction in chemistry is a quantity collected from a batch of a substance in a fractionating separation process. In such a process, a mixture is separated into fractions, which have compositions that vary according to a gradient. A fraction can be defined as a group of chemicals that have similar boiling points. A common fractionating process is fractional distillation, in which separation is achieved by condensing a vapor over a range of temperatures. It is used to produce liquor and various hydrocarbon fuels, such as gasoline, kerosene and diesel.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fraction Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::FractionalDistillation(string text)
{
    string model = "llama3";
    string definition = "Fractional distillation is the separation of a mixture into its component parts, or fractions. Chemical compounds are separated by heating them to a temperature at which one or more fractions of the mixture will vaporize. It uses distillation to fractionate. Generally the component parts have boiling points that differ by less than 25C (45F) from each other under a pressure of one atmosphere. If the difference in boiling points is greater than 25C, a simple distillation is typically used.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fractional Distillation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Fractionation(string text)
{
    string model = "llama3";
    string definition = "Fractionation is a separation process in which a certain quantity of a mixture (of gasses, solids, liquids, enzymes, or isotopes, or a suspension) is divided during a phase transition, into a number of smaller quantities (fractions) in which the composition varies according to a gradient. Fractions are collected based on differences in a specific property of the individual components. A common trait in fractionations is the need to find an optimum between the amount of fractions collected and the desired purity in each fraction. Fractionation makes it possible to isolate more than two components in a mixture in a single run. This property sets it apart from other separation techniques.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fractionation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::RadicalChemistry(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a radical, also known as a free radical, is an atom, molecule, or ion that has at least one unpaired valence electron. With some exceptions, these unpaired electrons make radicals highly chemically reactive. Many radicals spontaneously dimerize. Most organic radicals have short lifetimes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radical Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Freezing(string text)
{
    string model = "llama3";
    string definition = "Freezing is a phase transition in which a liquid turns into a solid when its temperature is lowered below its freezing point. For most substances, the melting and freezing points are the same temperature; however, certain substances possess differing solid-liquid transition temperatures. For example, agar displays a hysteresis in its melting point and freezing point. It melts at 85C (185F) and solidifies from 32 to 40C (90 to 104F).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Freezing";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::FreezingPointDepression(string text)
{
    string model = "llama3";
    string definition = "Freezing-point depression is a drop in the maximum temperature at which a substance freezes, caused when a smaller amount of another, non-volatile substance is added. Examples include adding salt into water (used in ice cream makers and for de-icing roads), alcohol in water, ethylene or propylene glycol in water (used in antifreeze in cars), adding copper to molten silver (used to make solder that flows at a lower temperature than the silver pieces being joined), or the mixing of two solids such as impurities into a finely powdered drug.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Freezing Point Depression";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::FunctionalGroup(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, a functional group is a substituent or moiety in a molecule that causes the molecule\'s characteristic chemical reactions. The same functional group will undergo the same or similar chemical reactions regardless of the rest of the molecule\'s composition. This enables systematic prediction of chemical reactions and behavior of chemical compounds and the design of chemical synthesis. The reactivity of a functional group can be modified by other functional groups nearby. Functional group interconversion can be used in retrosynthetic analysis to plan organic synthesis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Functional Group";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::GalvanicCell(string text)
{
    string model = "llama3";
    string definition = "A galvanic cell or voltaic cell, named after the scientists Luigi Galvani and Alessandro Volta, respectively, is an electrochemical cell in which an electric current is generated from spontaneous oxidation-reduction reactions. An example of a galvanic cell consists of two different metals, each immersed in separate beakers containing their respective metal ions in solution that are connected by a salt bridge or separated by a porous membrane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Gas(string text)
{
    string model = "llama3";
    string definition = "Gas is one of the four fundamental states of matter. The others are solid, liquid, and plasma. A pure gas may be made up of individual atoms (e.g. a noble gas like neon), elemental molecules made from one type of atom (e.g. oxygen), or compound molecules made from a variety of atoms (e.g. carbon dioxide). A gas mixture, such as air, contains a variety of pure gases. What distinguishes gases from liquids and solids is the vast separation of the individual gas particles. This separation usually makes a colorless gas invisible to the human observer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::GasChromatography(string text)
{
    string model = "llama3";
    string definition = "Gas chromatography (GC) is a common type of chromatography used in analytical chemistry for separating and analyzing compounds that can be vaporized without decomposition. Typical uses of GC include testing the purity of a particular substance, or separating the different components of a mixture. In preparative chromatography, GC can be used to prepare pure compounds from a mixture.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gas Chromatography";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Gauche(string text)
{
    string model = "llama3";
    string definition = "In chemistry, conformational isomerism is a form of stereoisomerism in which the isomers can be interconverted just by rotations about formally single bonds (refer to figure on single bond rotation). While any two arrangements of atoms in a molecule that differ by rotation about single bonds can be referred to as different conformations, conformations that correspond to local minima on the potential energy surface are specifically called conformational isomers or conformers. Conformations that correspond to local maxima on the energy surface are the transition states between the local-minimum conformational isomers. Rotations about single bonds involve overcoming a rotational energy barrier to interconvert one conformer to another. If the energy barrier is low, there is free rotation and a sample of the compound exists as a rapidly equilibrating mixture of multiple conformers; if the energy barrier is high enough then there is restricted rotation, a molecule may exist for a relatively long time period as a stable rotational isomer or rotamer (an isomer arising from hindered single-bond rotation). When the time scale for interconversion is long enough for isolation of individual rotamers (usually arbitrarily defined as a half-life of interconversion of 1000 seconds or longer), the isomers are termed atropisomers (see: atropisomerism). The ring-flip of substituted cyclohexanes constitutes another common form of conformational isomerism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gauche";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::GayLussacsLaw(string text)
{
    string model = "llama3";
    string definition = "Gay-Lussac\'s law usually refers to Joseph-Louis Gay-Lussac\'s law of combining volumes of gases, discovered in 1808 and published in 1809. However, it sometimes refers to the proportionality of the volume of a gas to its absolute temperature at constant pressure. The latter law was published by Gay-Lussac in 1802, but in the article in which he described his work, he cited earlier unpublished work from the 1780s by Jacques Charles. Consequently, the volume-temperature proportionality is usually known as Charles\'s Law.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gay Lussacs Law";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Geochemistry(string text)
{
    string model = "llama3";
    string definition = "Geochemistry is the science that uses the tools and principles of chemistry to explain the mechanisms behind major geological systems such as the Earth\'s crust and its oceans.: 1  The realm of geochemistry extends beyond the Earth, encompassing the entire Solar System, and has made important contributions to the understanding of a number of processes including mantle convection, the formation of planets and the origins of granite and basalt.: 1  It is an integrated field of chemistry and geology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geochemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::GibbsFreeEnergy(string text)
{
    string model = "llama3";
    string definition = "In thermodynamics, the Gibbs free energy (or Gibbs energy as the recommended name; symbol G) is a thermodynamic potential that can be used to calculate the maximum amount of work, other than pressure-volume work, that may be performed by a thermodynamically closed system at constant temperature and pressure. It also provides a necessary condition for processes such as chemical reactions that may occur under these conditions. The Gibbs free energy is expressed as:  G(p,T) = U +pV - TS = H - TS.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gibbs Free Energy";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Glycol(string text)
{
    string model = "llama3";
    string definition = "A diol is a chemical compound containing two hydroxyl groups (-OH groups). An aliphatic diol may also be called a glycol. This pairing of functional groups is pervasive, and many subcategories have been identified. They are used as protecting groups of carbonyl groups, making them essential in synthesis of organic chemistry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Glycol";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Gram(string text)
{
    string model = "llama3";
    string definition = "The gram (originally gramme; SI unit symbol g) is a unit of mass in the International System of Units (SI) equal to one thousandth of a kilogram. Originally defined as of 1795 as \"the absolute weight of a volume of pure water equal to the cube of the hundredth part of a metre , and at the temperature of melting ice\", the defining temperature (≈0C) was later changed to 4C, the temperature of maximum density of water.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gram";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::GramAtom(string text)
{
    string model = "llama3";
    string definition = "A former term for a mole.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gram Atom";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::GrignardReaction(string text)
{
    string model = "llama3";
    string definition = "The Grignard reaction is an organometallic chemical reaction in which, according to the classical definition, carbon alkyl, allyl, vinyl, or aryl magnesium halides (Grignard reagent) are added to the carbonyl groups of either an aldehyde or ketone under anhydrous conditions. This reaction is important for the formation of carbon-carbon bonds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Grignard Reaction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::GroundGlassJoint(string text)
{
    string model = "llama3";
    string definition = "Ground glass joints are used in laboratories to quickly and easily fit leak-tight apparatus together from interchangeable commonly available parts. For example, a round bottom flask, Liebig condenser, and oil bubbler with ground glass joints may be rapidly fitted together to reflux a reaction mixture. This is a large improvement compared with older methods of custom-made glassware, which was time-consuming and expensive, or the use of less chemical resistant and heat resistant corks or rubber bungs and glass tubes as joints, which took time to prepare as well.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ground Glass Joint";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::GroundState(string text)
{
    string model = "llama3";
    string definition = "The ground state of a quantum-mechanical system is its stationary state of lowest energy; the energy of the ground state is known as the zero-point energy of the system. An excited state is any state with energy greater than the ground state. In quantum field theory, the ground state is usually called the vacuum state or the vacuum.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Hadron(string text)
{
    string model = "llama3";
    string definition = "A subatomic particle of a type including the baryons and mesons that can take part in the strong interaction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Halogen(string text)
{
    string model = "llama3";
    string definition = "a group in the periodic table consisting of six chemically related elements: fluorine (F), chlorine (Cl), bromine (Br), iodine (I), and the radioactive elements astatine (At) and tennessine (Ts), though some authors would exclude tennessine as its chemistry is unknown and is theoretically expected to be more like that of gallium. In the modern IUPAC nomenclature, this group is known as group 17. The word \"halogen\" means \"salt former\" or \"salt maker\". When halogens react with metals, they produce a wide range of salts, including calcium fluoride, sodium chloride (common table salt), silver bromide and potassium iodide.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Halogen";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::HardAcid(string text)
{
    string model = "llama3";
    string definition = "A Lewis acid with an electron-accepting centre that is only weakly polarizable. Hard acid species also tend to have high charge states and relatively small atomic nuclei, in contrast to soft acids.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hard Acid";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::HardWater(string text)
{
    string model = "llama3";
    string definition = "Hard water is water that has a high mineral content (in contrast with \"soft water\"). Hard water is formed when water percolates through deposits of limestone, chalk or gypsum, which are largely made up of calcium and magnesium carbonates, bicarbonates and sulfates. Drinking hard water may have moderate health benefits. It can pose critical problems in industrial settings, where water hardness is monitored to avoid costly breakdowns in boilers, cooling towers, and other equipment that handles water. In domestic settings, hard water is often indicated by a lack of foam formation when soap is agitated in water, and by the formation of limescale in kettles and water heaters. Wherever water hardness is a concern, water softening is commonly used to reduce hard water\'s adverse effects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hard Water";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Heat(string text)
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

string _Chemistry::Terms::HeavyWater(string text)
{
    string model = "llama3";
    string definition = "Heavy water (deuterium oxide, 2H2O, D2O) is a form of water in which hydrogen atoms are all deuterium 2H or D, also known as heavy hydrogen) rather than the common hydrogen-1 isotope 1H, also called protium) that makes up most of the hydrogen in normal water. The presence of the heavier isotope gives the water different nuclear properties, and the increase in mass gives it slightly different physical and chemical properties when compared to normal water.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Heavy Water";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::HenrysLaw(string text)
{
    string model = "llama3";
    string definition = "In physical chemistry, Henry\'s law is a gas law that states that the amount of dissolved gas in a liquid is directly proportional at equilibrium to its partial pressure above the liquid. The proportionality factor is called Henry\'s law constant. It was formulated by the English chemist William Henry, who studied the topic in the early 19th century. In simple words, we can say that the partial pressure of a gas in vapour phase is directly proportional to the mole fraction of a gas in solution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::HessLawOfConstantHeatSummation(string text)
{
    string model = "llama3";
    string definition = "Hess\'s law of constant heat summation, also known simply as Hess\'s law, is a relationship in physical chemistry and thermodynamics named after Germain Hess, a Swiss-born Russian chemist and physician who published it in 1840. The law states that the total enthalpy change during the complete course of a chemical reaction is independent of the sequence of steps taken.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hess Law Of Constant Heat Summation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::HundsRules(string text)
{
    string model = "llama3";
    string definition = "In atomic physics and quantum chemistry, Hund\'s rules refers to a set of rules that German physicist Friedrich Hund formulated around 1925, which are used to determine the term symbol that corresponds to the ground state of a multi-electron atom. The first rule is especially important in chemistry, where it is often referred to simply as Hund\'s Rule.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hunds Rules";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Hydrate(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a hydrate is a substance that contains water or its constituent elements. The chemical state of the water varies widely between different classes of hydrates, some of which were so labeled before their chemical structure was understood.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydrate";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::HydrationReaction(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a hydration reaction is a chemical reaction in which a substance combines with water. In organic chemistry, water is added to an unsaturated substrate, which is usually an alkene or an alkyne. This type of reaction is employed industrially to produce ethanol, isopropanol, and butan-2-ol.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydration Reaction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Hydride(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a hydride is formally the anion of hydrogen (H-), a hydrogen atom with two electrons. In modern usage, this is typically only used for ionic bonds, but it is sometimes (and more frequently in the past) been applied to all compounds containing covalently bound H atoms. In this broad and potentially archaic sense, water (H2O) is a hydride of oxygen, ammonia is a hydride of nitrogen, etc. In covalent compounds, it implies hydrogen is attached to a less electronegative element. In such cases, the H centre has nucleophilic character, which contrasts with the protic character of acids. The hydride anion is very rarely observed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydride";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Hydrocarbon(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, a hydrocarbon is an organic compound consisting entirely of hydrogen and carbon. Hydrocarbons are examples of group 14 hydrides. Hydrocarbons are generally colourless and hydrophobic; their odor is usually faint, and may be similar to that of gasoline or lighter fluid. They occur in a diverse range of molecular structures and phases: they can be gases (such as methane and propane), liquids (such as hexane and benzene), low melting solids (such as paraffin wax and naphthalene) or polymers (such as polyethylene and polystyrene).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Hydrogen(string text)
{
    string model = "llama3";
    string definition = "Hydrogen is a chemical element; it has symbol H and atomic number 1. It is the lightest element and, at standard conditions, is a gas of diatomic molecules with the formula H2, sometimes called dihydrogen, but more commonly called hydrogen gas, molecular hydrogen or simply hydrogen. It is colorless, odorless, non-toxic, and highly combustible. Constituting about 75% of all normal matter, hydrogen is the most abundant chemical element in the universe. Stars, including the Sun, mainly consist of hydrogen in a plasma state, while on Earth, hydrogen is found in water, organic compounds, as dihydrogen, and in other molecular forms. The most common isotope of hydrogen (protium, 1H) consists of one proton, one electron, and no neutrons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydrogen";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::HydrogenBond(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a hydrogen bond (or H-bond) is primarily an electrostatic force of attraction between a hydrogen (H) atom which is covalently bonded to a more electronegative \"donor\" atom or group (Dn), and another electronegative atom bearing a lone pair of electrons-the hydrogen bond acceptor (Ac). Such an interacting system is generally denoted Dn-H···Ac, where the solid line denotes a polar covalent bond, and the dotted or dashed line indicates the hydrogen bond. The most frequent donor and acceptor atoms are the period 2 elements nitrogen (N), oxygen (O), and fluorine (F).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydrogen Bond";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Hydrogenation(string text)
{
    string model = "llama3";
    string definition = "Hydrogenation is a chemical reaction between molecular hydrogen (H2) and another compound or element, usually in the presence of a catalyst such as nickel, palladium or platinum. The process is commonly employed to reduce or saturate organic compounds. Hydrogenation typically constitutes the addition of pairs of hydrogen atoms to a molecule, often an alkene. Catalysts are required for the reaction to be usable; non-catalytic hydrogenation takes place only at very high temperatures. Hydrogenation reduces double and triple bonds in hydrocarbons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydrogenation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Hydrolysis(string text)
{
    string model = "llama3";
    string definition = "Hydrolysis is any chemical reaction in which a molecule of water breaks one or more chemical bonds. The term is used broadly for substitution, elimination, and solvation reactions in which water is the nucleophile.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydrolysis";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Hydron(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the hydron, informally called proton, is the cationic form of atomic hydrogen, represented with the symbol H+. The general term \"hydron\", endorsed by IUPAC, encompasses cations of hydrogen regardless of isotope: thus it refers collectively to protons (1H+) for the protium isotope, deuterons (2H+ or D+) for the deuterium isotope, and tritons (3H+ or T+) for the tritium isotope.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydron";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Hydratehydrate(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a hydrate is a substance that contains water or its constituent elements. The chemical state of the water varies widely between different classes of hydrates, some of which were so labeled before their chemical structure was understood.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydratehydrate";
        }
    }

    return nullptr;
}

//string _Chemistry::Terms::Hydrate(string text)
//{
//    string model = "llama3";
//    string definition = "n chemistry, a hydrate is a substance that contains water or its constituent elements. The chemical state of the water varies widely between different classes of hydrates, some of which were so labeled before their chemical structure was understood.";
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
//            return "Hydrate";
//        }
//    }
//
//    return nullptr;
//}

string _Chemistry::Terms::Hydroxide(string text)
{
    string model = "llama3";
    string definition = "Hydroxide is a diatomic anion with chemical formula OH-. It consists of an oxygen and hydrogen atom held together by a single covalent bond, and carries a negative electric charge. It is an important but usually minor constituent of water. It functions as a base, a ligand, a nucleophile, and a catalyst. The hydroxide ion forms salts, some of which dissociate in aqueous solution, liberating solvated hydroxide ions. Sodium hydroxide is a multi-million-ton per annum commodity chemical. The corresponding electrically neutral compound HO is the hydroxyl radical. The corresponding covalently bound group -OH of atoms is the hydroxy group. Both the hydroxide ion and hydroxy group are nucleophiles and can act as catalysts in organic chemistry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydroxide";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::HydroxyGroup(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a hydroxy or hydroxyl group is a functional group with the chemical formula -OH and composed of one oxygen atom covalently bonded to one hydrogen atom. In organic chemistry, alcohols and carboxylic acids contain one or more hydroxy groups. Both the negatively charged anion HO-, called hydroxide, and the neutral radical HO·, known as the hydroxyl radical, consist of an unbonded hydroxy group.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hydroxy Group";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Hygroscopy(string text)
{
    string model = "llama3";
    string definition = "Hygroscopy is the phenomenon of attracting and holding water molecules via either absorption or adsorption from the surrounding environment, which is usually at normal or room temperature. If water molecules become suspended among the substance\'s molecules, adsorbing substances can become physically changed, e.g. changing in volume, boiling point, viscosity or some other physical characteristic or property of the substance. For example, a finely dispersed hygroscopic powder, such as a salt, may become clumpy over time due to collection of moisture from the surrounding environment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hygroscopy";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::IdealGas(string text)
{
    string model = "llama3";
    string definition = "An ideal gas is a theoretical gas composed of many randomly moving point particles that are not subject to interparticle interactions. The ideal gas concept is useful because it obeys the ideal gas law, a simplified equation of state, and is amenable to analysis under statistical mechanics. The requirement of zero interaction can often be relaxed if, for example, the interaction is perfectly elastic or regarded as point-like collisions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::IdealGasLaw(string text)
{
    string model = "llama3";
    string definition = "The ideal gas law, also called the general gas equation, is the equation of state of a hypothetical ideal gas. It is a good approximation of the behavior of many gases under many conditions, although it has several limitations. It was first stated by Benoît Paul Émile Clapeyron in 1834 as a combination of the empirical Boyle\'s law, Charles\'s law, Avogadro\'s law, and Gay-Lussac\'s law. The ideal gas law is often written in an empirical form: pV = nRT";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::IdealSolution(string text)
{
    string model = "llama3";
    string definition = "An ideal solution or ideal mixture is a solution that exhibits thermodynamic properties analogous to those of a mixture of ideal gases. The enthalpy of mixing is zero as is the volume change on mixing by definition; the closer to zero the enthalpy of mixing is, the more \"ideal\" the behavior of the solution becomes. The vapor pressures of the solvent and solute obey Raoult\'s law and Henry\'s law, respectively, and the activity coefficient (which measures deviation from ideality) is equal to one for each component.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ideal Solution";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::IndependentVariable(string text)
{
    string model = "llama3";
    string definition = "Independent variables, in turn, are not seen as depending on any other variable in the scope of the experiment in question. In this sense, some common independent variables are time, space, density, mass, fluid flow rate, and previous values of some observed value of interest (e.g. human population size) to predict future values (the dependent variable).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Independent Variable";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Indicator(string text)
{
    string model = "llama3";
    string definition = "A pH indicator is a halochromic chemical compound added in small amounts to a solution so the pH (acidity or basicity) of the solution can be determined visually or spectroscopically by changes in absorption and/or emission properties. Hence, a pH indicator is a chemical detector for hydronium ions (H3O+) or hydrogen ions (H+) in the Arrhenius model.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Indicator";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::InducedRadioactivity(string text)
{
    string model = "llama3";
    string definition = "Induced radioactivity, also called artificial radioactivity or man-made radioactivity, is the process of using radiation to make a previously stable material radioactive. The husband-and-wife team of Irène Joliot-Curie and Frédéric Joliot-Curie discovered induced radioactivity in 1934, and they shared the 1935 Nobel Prize in Chemistry for this discovery.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Induced Radioactivity";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Inert(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the term chemically inert is used to describe a substance that is not chemically reactive. From a thermodynamic perspective, a substance is inert, or nonlabile, if it is thermodynamically unstable (positive standard Gibbs free energy of formation) yet decomposes at a slow, or negligible rate. Most of the noble gases, which appear in the last column of the periodic table, are classified as inert (or unreactive). These elements are stable in their naturally occurring form (gaseous form) and they are called inert gases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inert";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::InorganicCompound(string text)
{
    string model = "llama3";
    string definition = "An inorganic compound is typically a chemical compound that lacks carbon-hydrogen bonds?-that is, a compound that is not an organic compound. The study of inorganic compounds is a subfield of chemistry known as inorganic chemistry. Inorganic compounds comprise most of the Earth\'s crust, although the compositions of the deep mantle remain active areas of investigation. All allotropes (structurally different pure forms of an element) and some simple carbon compounds are often considered inorganic. Examples include the allotropes of carbon (graphite, diamond, buckminsterfullerene, graphene, etc.), carbon monoxide CO, carbon dioxide CO2, carbides, and salts of inorganic anions such as carbonates, cyanides, cyanates, thiocyanates, isothiocyanates, etc. Many of these are normal parts of mostly organic systems, including organisms; describing a chemical as inorganic does not necessarily mean that it cannot occur within living things.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inorganic Compound";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::InorganicChemistry(string text)
{
    string model = "llama3";
    string definition = "Inorganic chemistry deals with synthesis and behavior of inorganic and organometallic compounds. This field covers chemical compounds that are not carbon-based, which are the subjects of organic chemistry. The distinction between the two disciplines is far from absolute, as there is much overlap in the subdiscipline of organometallic chemistry. It has applications in every aspect of the chemical industry, including catalysis, materials science, pigments, surfactants, coatings, medications, fuels, and agriculture.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Insolubility(string text)
{
    string model = "llama3";
    string definition = "The inability of a substance (the solute) to form a solution by being dissolved in another substance (the solvent); the opposite of solubility.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Insolubility";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Inspissation(string text)
{
    string model = "llama3";
    string definition = "Inspissation is the process of increasing the viscosity of a fluid, or even of causing it to solidify, typically by dehydration or otherwise reducing its content of solvents. The term also has been applied to coagulation by heating of some substances such as albumens, or cooling some such as solutions of gelatin or agar. Some forms of inspissation may be reversed by re-introducing solvent, such as by adding water to molasses or gum arabic; in other forms, its resistance to flow may include cross-linking or mutual adhesion of its component particles or molecules, in ways that prevent their dissolving again, such as in the irreversible setting or gelling of some kinds of rubber latex, egg-white, adhesives, or coagulation of blood.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inspissation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Insulator(string text)
{
    string model = "llama3";
    string definition = "An electrical insulator is a material in which electric current does not flow freely. The atoms of the insulator have tightly bound electrons which cannot readily move. Other materials-semiconductors and conductors-conduct electric current more easily. The property that distinguishes an insulator is its resistivity; insulators have higher resistivity than semiconductors or conductors. The most common examples are non-metals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Insulator";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::IntensiveProperty(string text)
{
    string model = "llama3";
    string definition = "A physical quantity whose value does not depend on the size of the system or the quantity of matter for which it is measured. Examples include density, temperature, and pressure. Contrast extensive property.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intensive Property";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Interface(string text)
{
    string model = "llama3";
    string definition = "In the physical sciences, an interface is the boundary between two spatial regions occupied by different matter, or by matter in different physical states. The interface between matter and air, or matter and vacuum, is called a surface, and studied in surface science. In thermal equilibrium, the regions in contact are called phases, and the interface is called a phase boundary. An example for an interface out of equilibrium is the grain boundary in polycrystalline matter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Interface";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Intermetallic(string text)
{
    string model = "llama3";
    string definition = "An intermetallic (also called intermetallic compound, intermetallic alloy, ordered intermetallic alloy, long-range-ordered alloy) is a type of metallic alloy that forms an ordered solid-state compound between two or more metallic elements. Intermetallics are generally hard and brittle, with good high-temperature mechanical properties. They can be classified as stoichiometric or nonstoichiometic intermetallic compounds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intermetallic";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::IntermolecularForce(string text)
{
    string model = "llama3";
    string definition = "An intermolecular force (IMF; also secondary force) is the force that mediates interaction between molecules, including the electromagnetic forces of attraction or repulsion which act between atoms and other types of neighbouring particles, e.g. atoms or ions. Intermolecular forces are weak relative to intramolecular forces - the forces which hold a molecule together. For example, the covalent bond, involving sharing electron pairs between atoms, is much stronger than the forces present between neighboring molecules. Both sets of forces are essential parts of force fields frequently used in molecular mechanics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intermolecular Force";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::InternationalSystemOfUnits(string text)
{
    string model = "llama3";
    string definition = "The International System of Units, internationally known by the abbreviation SI (from French Système international d\'unités), is the modern form of the metric system and the world\'s most widely used system of measurement. Coordinated by the International Bureau of Weights and Measures (abbreviated BIPM from French: Bureau international des poids et mesures) it is the only system of measurement with official status in nearly every country in the world, employed in science, technology, industry, and everyday commerce.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::InternationalUnionOfPureAndAppliedChemistry(string text)
{
    string model = "llama3";
    string definition = "The International Union of Pure and Applied Chemistry (IUPAC) is an international federation of National Adhering Organizations working for the advancement of the chemical sciences, especially by developing nomenclature and terminology. It is a member of the International Science Council (ISC). IUPAC is registered in Zürich, Switzerland, and the administrative office, known as the \"IUPAC Secretariat\", is in Research Triangle Park, North Carolina, United States. IUPAC\'s executive director heads this administrative office, currently Greta Heydenrych.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "International Union Of Pure And Applied Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::InterstitialCompound(string text)
{
    string model = "llama3";
    string definition = "In materials science, an interstitial defect is a type of point crystallographic defect where an atom of the same or of a different type, occupies an interstitial site in the crystal structure. When the atom is of the same type as those already present they are known as a self-interstitial defect. Alternatively, small atoms in some crystals may occupy interstitial sites, such as hydrogen in palladium. Interstitials can be produced by bombarding a crystal with elementary particles having energy above the displacement threshold for that crystal, but they may also exist in small concentrations in thermodynamic equilibrium. The presence of interstitial defects can modify the physical and chemical properties of a material.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Interstitial Compound";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::IntramolecularForce(string text)
{
    string model = "llama3";
    string definition = "An intramolecular force is any force that binds together the atoms making up a molecule. Intramolecular forces are stronger than the intermolecular forces that govern the interactions between molecules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intramolecular Force";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::IntrinsicProperty(string text)
{
    string model = "llama3";
    string definition = "In science and engineering, an intrinsic property is a property of a specified subject that exists itself or within the subject. An extrinsic property is not essential or inherent to the subject that is being characterized. For example, mass is an intrinsic property of any physical object, whereas weight is an extrinsic property that depends on the strength of the gravitational field in which the object is placed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intrinsic Property";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::IonicStrength(string text)
{
    string model = "llama3";
    string definition = "The ionic strength of a solution is a measure of the concentration of ions in that solution. Ionic compounds, when dissolved in water, dissociate into ions. The total electrolyte concentration in solution will affect important properties such as the dissociation constant or the solubility of different salts. One of the main characteristics of a solution with dissolved ions is the ionic strength. Ionic strength can be molar (mol/L solution) or molal (mol/kg solvent) and to avoid confusion the units should be stated explicitly. The concept of ionic strength was first introduced by Lewis and Randall in 1921 while describing the activity coefficients of strong electrolytes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ionic Strength";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Ionization(string text)
{
    string model = "llama3";
    string definition = "Ionization (or ionisation specifically in Britain, Ireland, Australia and New Zealand) is the process by which an atom or a molecule acquires a negative or positive charge by gaining or losing electrons, often in conjunction with other chemical changes. The resulting electrically charged atom or molecule is called an ion. Ionization can result from the loss of an electron after collisions with subatomic particles, collisions with other atoms, molecules, electrons, positrons, protons, antiprotons and ions, or through the interaction with electromagnetic radiation. Heterolytic bond cleavage and heterolytic substitution reactions can result in the formation of ion pairs. Ionization can occur through radioactive decay by the internal conversion process, in which an excited nucleus transfers its energy to one of the inner-shell electrons causing it to be ejected.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Isoelectronicity(string text)
{
    string model = "llama3";
    string definition = "Isoelectronicity is a phenomenon observed when two or more molecules have the same structure (positions and connectivities among atoms) and the same electronic configurations, but differ by what specific elements are at certain locations in the structure. For example, CO, NO+, and N2 are isoelectronic, while CH3COCH3 and XH3N=NCH3 are not.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Isoelectronicity";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Isomerization(string text)
{
    string model = "llama3";
    string definition = "In chemistry, isomerization or isomerisation is the process in which a molecule, polyatomic ion or molecular fragment is transformed into an isomer with a different chemical structure. Enolization is an example of isomerization, as is tautomerization. When the isomerization occurs intramolecularly it may be called a rearrangement reaction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Isomerization";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Isotope(string text)
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

string _Chemistry::Terms::Joule(string text)
{
    string model = "llama3";
    string definition = "he unit of energy in the International System of Units (SI). It is equal to the amount of work done when a force of one newton displaces a mass through a distance of one metre in the direction of that force. It is also the energy dissipated as heat when an electric current of one ampere passes through a resistance of one ohm for one second. It is named after the English physicist James Prescott Joule (1818-1889).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Kelvin(string text)
{
    string model = "llama3";
    string definition = "the base unit for temperature in the International System of Units (SI). The Kelvin scale is an absolute temperature scale that starts at the lowest possible temperature (absolute zero), taken to be 0 K. By definition, the Celsius scale (symbol °C) and the Kelvin scale have the exact same magnitude; that is, a rise of 1 K is equal to a rise of 1C and vice versa, and any temperature in degrees Celsius can be converted to kelvin by adding 273.15.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::KetoAcid(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, keto acids or ketoacids (also called oxo acids or oxoacids) are organic compounds that contain a carboxylic acid group (-COOH) and a ketone group (>C=O). In several cases, the keto group is hydrated. The alpha-keto acids are especially important in biology as they are involved in the Krebs citric acid cycle and in glycolysis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Keto Acid";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Ketone(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, a ketone is an organic compound with the structure R-C(=O)-R\', where R and R\' can be a variety of carbon-containing substituents. Ketones contain a carbonyl group -C(=O)- (a carbon-oxygen double bond C=O). The simplest ketone is acetone (where R and R\' is methyl), with the formula (CH3)2CO. Many ketones are of great importance in biology and industry. Examples include many sugars (ketoses), many steroids (e.g., testosterone), and the solvent acetone.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ketone";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::KindlingPoint(string text)
{
    string model = "llama3";
    string definition = "The autoignition temperature or self-ignition temperature, often called spontaneous ignition temperature or minimum ignition temperature (or shortly ignition temperature) and formerly also known as kindling point, of a substance is the lowest temperature at which it spontaneously ignites in a normal atmosphere without an external source of ignition, such as a flame or spark. This temperature is required to supply the activation energy needed for combustion. The temperature at which a chemical ignites decreases as the pressure is increased.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kindling Point";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Knietics(string text)
{
    string model = "llama3";
    string definition = "Chemical kinetics, also known as reaction kinetics, is the branch of physical chemistry that is concerned with understanding the rates of chemical reactions. It is different from chemical thermodynamics, which deals with the direction in which a reaction occurs but in itself tells nothing about its rate. Chemical kinetics includes investigations of how experimental conditions influence the speed of a chemical reaction and yield information about the reaction\'s mechanism and transition states, as well as the construction of mathematical models that also can describe the characteristics of a chemical reaction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Knietics";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::KineticEnergy(string text)
{
    string model = "llama3";
    string definition = "In physics, the kinetic energy of an object is the form of energy that it possesses due to its motion. In classical mechanics, the kinetic energy of a non-rotating object of mass m traveling at a speed v is 2/3mv^2.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Lability(string text)
{
    string model = "llama3";
    string definition = "Lability refers to something that is constantly undergoing change or is likely to undergo change. It is the opposite (antonym) of stability.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lability";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Lanthanide(string text)
{
    string model = "llama3";
    string definition = "The lanthanide or lanthanoid series of chemical elements comprises at least the 14 metallic chemical elements with atomic numbers 57-70, from lanthanum through ytterbium. In the periodic table, they fill the 4f orbitals. Lutetium (element 71) is also sometimes considered a lanthanide, despite being a d-block element and a transition metal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lanthanide";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Lattice(string text)
{
    string model = "llama3";
    string definition = "In crystallography, crystal structure is a description of ordered arrangement of atoms, ions, or molecules in a crystalline material. Ordered structures occur from intrinsic nature of constituent particles to form symmetric patterns that repeat along the principal directions of three-dimensional space in matter. The smallest group of particles in material that constitutes this repeating pattern is unit cell of the structure. The unit cell completely reflects symmetry and structure of the entire crystal, which is built up by repetitive translation of unit cell along its principal axes. The translation vectors define the nodes of Bravais lattice. The lengths of principal axes/edges, of unit cell and angles between them are lattice constants, also called lattice parameters or cell parameters. The symmetry properties of crystal are described by the concept of space groups. All possible symmetric arrangements of particles in three-dimensional space may be described by 230 space groups.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lattice";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::LatticeEnergy(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the lattice energy is the energy change upon formation of one mole of a crystalline ionic compound from its constituent ions, which are assumed to initially be in the gaseous state. It is a measure of the cohesive forces that bind ionic solids. The size of the lattice energy is connected to many other physical properties including solubility, hardness, and volatility. Since it generally cannot be measured directly, the lattice energy is usually deduced from experimental data via the Born-Haber cycle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lattice Energy";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::LawOfConservationOfEnergy(string text)
{
    string model = "llama3";
    string definition = "The law of conservation of energy states that the total energy of an isolated system remains constant; it is said to be conserved over time. In the case of a closed system the principle says that the total amount of energy within the system can only be changed through energy entering or leaving the system. Energy can neither be created nor destroyed; rather, it can only be transformed or transferred from one form to another. For instance, chemical energy is converted to kinetic energy when a stick of dynamite explodes. If one adds up all forms of energy that were released in the explosion, such as the kinetic energy and potential energy of the pieces, as well as heat and sound, one will get the exact decrease of chemical energy in the combustion of the dynamite.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Law Of Conservation Of Energy";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::LawOfConservationOfMass(string text)
{
    string model = "llama3";
    string definition = "In physics and chemistry, the law of conservation of mass or principle of mass conservation states that for any system closed to all transfers of matter the mass of the system must remain constant over time. The law implies that mass can neither be created nor destroyed, although it may be rearranged in space, or the entities associated with it may be changed in form. For example, in chemical reactions, the mass of the chemical components before the reaction is equal to the mass of the components after the reaction. Thus, during any chemical reaction and low-energy thermodynamic processes in an isolated system, the total mass of the reactants, or starting materials, must be equal to the mass of the products.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Law Of Conservation Of Mass";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::LawOfMultipleProportions(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the law of multiple proportions states that in compounds which contain two particular chemical elements, the amount of Element A per measure of Element B will differ across these compounds by ratios of small whole numbers. For instance, the ratio of the hydrogen content in methane (CH4) and ethane (C2H6) per measure of carbon is 4:3. This law is also known as Dalton\'s Law, named after John Dalton, the chemist who first expressed it. The discovery of this pattern led Dalton to develop the modern theory of atoms, as it suggested that the elements combine with each other in multiples of a basic quantity. Along with the law of definite proportions, the law of multiple proportions forms the basis of stoichiometry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Law Of Multiple Proportions";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::LawsOfThermodynamics(string text)
{
    string model = "llama3";
    string definition = "The laws of thermodynamics are a set of scientific laws which define a group of physical quantities, such as temperature, energy, and entropy, that characterize thermodynamic systems in thermodynamic equilibrium. The laws also use various parameters for thermodynamic processes, such as thermodynamic work and heat, and establish relationships between them. They state empirical facts that form a basis of precluding the possibility of certain phenomena, such as perpetual motion. In addition to their use in thermodynamics, they are important fundamental laws of physics in general and are applicable in other natural sciences.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Laws Of Thermodynamics";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::LevelingEffect(string text)
{
    string model = "llama3";
    string definition = "Leveling effect or solvent leveling refers to the effect of solvent on the properties of acids and bases. The strength of a strong acid is limited (\"leveled\") by the basicity of the solvent. Similarly the strength of a strong base is leveled by the acidity of the solvent. When a strong acid is dissolved in water, it reacts with it to form hydronium ion (H3O+). An example of this would be the following reaction, where \"HA\" is the strong acid: HA + H2O -> A- + H3O+";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Leveling Effect";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::LewisAcid(string text)
{
    string model = "llama3";
    string definition = "A Lewis acid (named for the American physical chemist Gilbert N. Lewis) is a chemical species that contains an empty orbital which is capable of accepting an electron pair from a Lewis base to form a Lewis adduct. A Lewis base, then, is any species that has a filled orbital containing an electron pair which is not involved in bonding but may form a dative bond with a Lewis acid to form a Lewis adduct. For example, NH3 is a Lewis base, because it can donate its lone pair of electrons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lewis Acid";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::LewisBase(string text)
{
    string model = "llama3";
    string definition = "A Lewis base is an atomic or molecular species where the highest occupied molecular orbital (HOMO) is highly localized. Typical Lewis bases are conventional amines such as ammonia and alkyl amines. Other common Lewis bases include pyridine and its derivatives.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lewis Base";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::LewisStructure(string text)
{
    string model = "llama3";
    string definition = "Lewis structures - also called Lewis dot formulas, Lewis dot structures, electron dot structures, or Lewis electron dot structures (LEDs) - are diagrams that show the bonding between atoms of a molecule, as well as the lone pairs of electrons that may exist in the molecule. Introduced by Gilbert N. Lewis in his 1916 article The Atom and the Molecule, a Lewis structure can be drawn for any covalently bonded molecule, as well as coordination compounds.  Lewis structures extend the concept of the electron dot diagram by adding lines between atoms to represent shared pairs in a chemical bond.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lewis Structure";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Ligand(string text)
{
    string model = "llama3";
    string definition = "In coordination chemistry, a ligand is an ion or molecule with a functional group that binds to a central metal atom to form a coordination complex. The bonding with the metal generally involves formal donation of one or more of the ligand\'s electron pairs, often through Lewis bases. The nature of metal-ligand bonding can range from covalent to ionic. Furthermore, the metal-ligand bond order can range from one to three. Ligands are viewed as Lewis bases, although rare cases are known to involve Lewis acidic \"ligands\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ligand";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Liquefaction(string text)
{
    string model = "llama3";
    string definition = "In materials science, liquefaction is a process that generates a liquid from a solid or a gas or that generates a non-liquid phase which behaves in accordance with fluid dynamics. It occurs both naturally and artificially. As an example of the latter, a \"major commercial application of liquefaction is the liquefaction of air to allow separation of the constituents, such as oxygen, nitrogen, and the noble gases.\" Another is the conversion of solid coal into a liquid form usable as a substitute for liquid fuels.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Liquid(string text)
{
    string model = "llama3";
    string definition = "A liquid is a nearly incompressible fluid that conforms to the shape of its container but retains a nearly constant volume independent of pressure. It is one of the four fundamental states of matter (the others being solid, gas, and plasma), and is the only state with a definite volume but no fixed shape.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::LiquidLiquidExtraction(string text)
{
    string model = "llama3";
    string definition = "Liquid-liquid extraction, also known as solvent extraction and partitioning, is a method to separate compounds or metal complexes, based on their relative solubilities in two different immiscible liquids, usually water (polar) and an organic solvent (non-polar). There is a net transfer of one or more species from one liquid into another liquid phase, generally from aqueous to organic. The transfer is driven by chemical potential, i.e. once the transfer is complete, the overall system of chemical components that make up the solutes and the solvents are in a more stable configuration (lower free energy). The solvent that is enriched in solute(s) is called extract. The feed solution that is depleted in solute(s) is called the raffinate. Liquid-liquid extraction is a basic technique in chemical laboratories, where it is performed using a variety of apparatus, from separatory funnels to countercurrent distribution equipment called as mixer settlers. This type of process is commonly performed after a chemical reaction as part of the work-up, often including an acidic work-up.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Liquid Liquid Extraction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Locant(string text)
{
    string model = "llama3";
    string definition = "In the nomenclature of organic chemistry, a locant is a term to indicate the position of a functional group or substituent within a molecule.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Locant";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::LondonDispersionForces(string text)
{
    string model = "llama3";
    string definition = "London dispersion forces (LDF, also known as dispersion forces, London forces, instantaneous dipole-induced dipole forces, fluctuating induced dipole bonds or loosely as van der Waals forces) are a type of intermolecular force acting between atoms and molecules that are normally electrically symmetric; that is, the electrons are symmetrically distributed with respect to the nucleus. They are part of the van der Waals forces. The LDF is named after the German physicist Fritz London. They are the weakest intermolecular force.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "London Dispersion Forces";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Macromolecule(string text)
{
    string model = "llama3";
    string definition = "A macromolecule is a very large molecule important to biological processes, such as a protein or nucleic acid. It is composed of thousands of covalently bonded atoms. Many macromolecules are polymers of smaller molecules called monomers. The most common macromolecules in biochemistry are biopolymers (nucleic acids, proteins, and carbohydrates) and large non-polymeric molecules such as lipids, nanogels and macrocycles. Synthetic fibers and experimental materials such as carbon nanotubes are also examples of macromolecules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Macromolecule";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::MagneticQuantumNumber(string text)
{
    string model = "llama3";
    string definition = "In atomic physics, a magnetic quantum number is a quantum number used to distinguish quantum states of an electron or other particle according to its angular momentum along a given axis in space. The orbital magnetic quantum number (ml or m) distinguishes the orbitals available within a given subshell of an atom. It specifies the component of the orbital angular momentum that lies along a given axis, conventionally called the z-axis, so it describes the orientation of the orbital in space. The spin magnetic quantum number ms specifies the z-axis component of the spin angular momentum for a particle having spin quantum number s. For an electron, s is 1/2 and ms is either +1/2 or -1/2, often called \"spin-up\" and \"spin-down\", or a and b. The term magnetic in the name refers to the magnetic dipole moment associated with each type of angular momentum, so states having different magnetic quantum numbers shift in energy in a magnetic field according to the Zeeman effect.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Magnetic Quantum Number";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Manometer(string text)
{
    string model = "llama3";
    string definition = "Pressure measurement is the measurement of an applied force by a fluid (liquid or gas) on a surface. Pressure is typically measured in units of force per unit of surface area. Many techniques have been developed for the measurement of pressure and vacuum. Instruments used to measure and display pressure mechanically are called pressure gauges, vacuum gauges or compound gauges (vacuum & pressure). The widely used Bourdon gauge is a mechanical device, which both measures and indicates and is probably the best known type of gauge. A vacuum gauge is used to measure pressures lower than the ambient atmospheric pressure, which is set as the zero point, in negative values (for instance, -1 bar or -760 mmHg equals total vacuum). Most gauges measure pressure relative to atmospheric pressure as the zero point, so this form of reading is simply referred to as \"gauge pressure\". However, anything greater than total vacuum is technically a form of pressure. For very low pressures, a gauge that uses total vacuum as the zero point reference must be used, giving pressure reading as an absolute pressure. Other methods of pressure measurement involve sensors that can transmit the pressure reading to a remote indicator or control system (telemetry).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Manometer";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::MaskingAgent(string text)
{
    string model = "llama3";
    string definition = "A masking agent is a reagent used in chemical analysis which reacts with chemical species that may interfere in the analysis. In sports a masking agent is used to hide or prevent detection of a banned substance or illegal drug like anabolic steroids or stimulants. Diuretics are the simplest form of masking agent and work by enhancing water loss via urine excretion and thus diluting the urine, which results in lower concentrations of the banned substance as more of it is being excreted from the body making it more difficult for laboratories to detect.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Masking Agent";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Mass(string text)
{
    string model = "llama3";
    string definition = "Mass is an intrinsic property of a body. It was traditionally believed to be related to the quantity of matter in a body, until the discovery of the atom and particle physics. It was found that different atoms and different elementary particles, theoretically with the same amount of matter, have nonetheless different masses. Mass in modern physics has multiple definitions which are conceptually distinct, but physically equivalent. Mass can be experimentally defined as a measure of the body\'s inertia, meaning the resistance to acceleration (change of velocity) when a net force is applied. The object\'s mass also determines the strength of its gravitational attraction to other bodies.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::MassConcentrationChemistry(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the mass concentration pi (or yi) is defined as the mass of a constituent mi divided by the volume of the mixture V. pi = mi/V For a pure chemical the mass concentration equals its density (mass divided by volume); thus the mass concentration of a component in a mixture can be called the density of a component in a mixture. This explains the usage of p(the lower case Greek letter rho), the symbol most often used for density.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mass Concentration Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::MassFractionChemistry(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the mass fraction of a substance within a mixture is the ratio wi of the mass mi of that substance to the total mass mtot of the mixture. Expressed as a formula, the mass fraction is:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mass Fraction Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::MassNumber(string text)
{
    string model = "llama3";
    string definition = "The mass number (symbol A,) \"atomic weight\") also called atomic mass number or nucleon number, is the total number of protons and neutrons (together known as nucleons) in an atomic nucleus. It is approximately equal to the atomic (also known as isotopic) mass of the atom expressed in atomic mass units. Since protons and neutrons are both baryons, the mass number A is identical with the baryon number B of the nucleus (and also of the whole atom or ion). The mass number is different for each isotope of a given chemical element, and the difference between the mass number and the atomic number Z gives the number of neutrons (N) in the nucleus: N = A - Z.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::MassSpectrometry(string text)
{
    string model = "llama3";
    string definition = "Mass spectrometry (MS) is an analytical technique that is used to measure the mass-to-charge ratio of ions. The results are presented as a mass spectrum, a plot of intensity as a function of the mass-to-charge ratio. Mass spectrometry is used in many different fields and is applied to pure samples as well as complex mixtures. A mass spectrum is a type of plot of the ion signal as a function of the mass-to-charge ratio. These spectra are used to determine the elemental or isotopic signature of a sample, the masses of particles and of molecules, and to elucidate the chemical identity or structure of molecules and other chemical compounds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Matter(string text)
{
    string model = "llama3";
    string definition = "In classical physics and general chemistry, matter is any substance that has mass and takes up space by having volume. All everyday objects that can be touched are ultimately composed of atoms, which are made up of interacting subatomic particles, and in everyday as well as scientific usage, matter generally includes atoms and anything made up of them, and any particles (or combination of particles) that act as if they have both rest mass and volume. However it does not include massless particles such as photons, or other energy phenomena or waves such as light or heat.: 21  Matter exists in various states (also known as phases). These include classical everyday phases such as solid, liquid, and gas - for example water exists as ice, liquid water, and gaseous steam - but other states are possible, including plasma, Bose-Einstein condensates, fermionic condensates, and quark-gluon plasma.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Metal(string text)
{
    string model = "llama3";
    string definition = "is a material that, when polished or fractured, shows a lustrous appearance, and conducts electricity and heat relatively well. These properties are all associated with having electrons available at the Fermi level, as against nonmetallic materials which do not. Metals are typically ductile (can be drawn into wires) and malleable (they can be hammered into thin sheets). A metal may be a chemical element such as iron; an alloy such as stainless steel; or a molecular compound such as polymeric sulfur nitride. The general science of metals is called metallurgy, a subtopic of materials science; aspects of the electronic and thermal properties are also within the scope of condensed matter physics and solid-state chemistry, it is a multidisciplinary topic. In colloquial use materials such as steel alloys are referred to as metals, while others such as polymers, wood or ceramics are nonmetallic materials. A metal conducts electricity at a temperature of absolute zero, which is a consequence of delocalized states at the Fermi energy. Many elements and compounds become metallic under high pressures, for example, iodine gradually becomes a metal at a pressure of between 40 and 170 thousand times atmospheric pressure. Sodium becomes a nonmetal at pressure of just under two million times atmospheric pressure, and at even higher pressures it is expected to become a metal again. When discussing the periodic table and some chemical properties the term metal is often used to denote those elements which in pure form and at standard conditions are metals in the sense of electrical conduction mentioned above. The related term metallic may also be used for types of dopant atoms or alloying elements. In astronomy metal refers to all chemical elements in a star that are heavier than helium. In this sense the first four \"metals\" collecting in stellar cores through nucleosynthesis are carbon, nitrogen, oxygen, and neon. A star fuses lighter atoms, mostly hydrogen and helium, into heavier atoms over its lifetime. The metallicity of an astronomical object is the proportion of its matter made up of the heavier chemical elements. The strength and resilience of some metals has led to their frequent use in, for example, high-rise building and bridge construction, as well as most vehicles, many home appliances, tools, pipes, and railroad tracks. Precious metals were historically used as coinage, but in the modern era, coinage metals have extended to at least 23 of the chemical elements. There is also extensive use of multi-element metals such as titanium nitride or degenerate semiconductors in the semiconductor industry. The history of refined metals is thought to begin with the use of copper about 11,000 years ago. Gold, silver, iron (as meteoric iron), lead, and brass were likewise in use before the first known appearance of bronze in the fifth millennium BCE. Subsequent developments include the production of early forms of steel; the discovery of sodium-the first light metal-in 1809; the rise of modern alloy steels; and, since the end of World War II, the development of more sophisticated alloys.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metal";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Melting(string text)
{
    string model = "llama3";
    string definition = "Melting, or fusion, is a physical process that results in the phase transition of a substance from a solid to a liquid. This occurs when the internal energy of the solid increases, typically by the application of heat or pressure, which increases the substance\'s temperature to the melting point. At the melting point, the ordering of ions or molecules in the solid breaks down to a less ordered state, and the solid melts to become a liquid. Substances in the molten state generally have reduced viscosity as the temperature increases. An exception to this principle is elemental sulfur, whose viscosity increases in the range of 160C to 180C due to polymerization.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Metalloid(string text)
{
    string model = "llama3";
    string definition = "A metalloid is a chemical element which has a preponderance of properties in between, or that are a mixture of, those of metals and nonmetals. The word metalloid comes from the Latin metallum (\"metal\") and the Greek oeides (\"resembling in form or appearance\"). There is no standard definition of a metalloid and no complete agreement on which elements are metalloids. Despite the lack of specificity, the term remains in use in the literature.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metalloid";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Methyl(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, a methyl group is an alkyl derived from methane, containing one carbon atom bonded to three hydrogen atoms, having chemical formula CH3 (whereas normal methane has the formula CH4). In formulas, the group is often abbreviated as Me. This hydrocarbon group occurs in many organic compounds. It is a very stable group in most molecules. While the methyl group is usually part of a larger molecule, bonded to the rest of the molecule by a single covalent bond (-CH3), it can be found on its own in any of three forms: methanide anion, methylium cation, or methyl radical. The anion has eight valence electrons, the radical seven and the cation six. All three forms are highly reactive and rarely observed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Methyl";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::MethyleneBlue(string text)
{
    string model = "llama3";
    string definition = "Methylthioninium chloride, commonly called methylene blue, is a salt used as a dye and as a medication. As a medication, it is mainly used to treat methemoglobinemia by chemically reducing the ferric iron in hemoglobin to ferrous iron. Specifically, it is used to treat methemoglobin levels that are greater than 30% or in which there are symptoms despite oxygen therapy. It has previously been used for treating cyanide poisoning and urinary tract infections, but this use is no longer recommended. Methylene blue is typically given by injection into a vein. Common side effects include headache and vomiting. While use during pregnancy may harm the fetus, not using it in methemoglobinemia is likely more dangerous. Methylene blue was first prepared in 1876, by Heinrich Caro. It is on the World Health Organization\'s List of Essential Medicines.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Methylene Blue";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::MicrocentrifugeTube(string text)
{
    string model = "llama3";
    string definition = "A small plastic, sealable container that is used to store small volumes of liquid, generally less than 2 milliliters.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Microcentrifuge Tube";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Mineral(string text)
{
    string model = "llama3";
    string definition = "In geology and mineralogy, a mineral or mineral species is, broadly speaking, a solid substance with a fairly well-defined chemical composition and a specific crystal structure that occurs naturally in pure form. The geological definition of mineral normally excludes compounds that occur only in living organisms. However, some minerals are often biogenic (such as calcite) or organic compounds in the sense of chemistry (such as mellite). Moreover, living organisms often synthesize inorganic minerals (such as hydroxylapatite) that also occur in rocks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mineral";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Miscibility(string text)
{
    string model = "llama3";
    string definition = "Miscibility is the property of two substances to mix in all proportions (that is, to fully dissolve in each other at any concentration), forming a homogeneous mixture (a solution). Such substances are said to be miscible (etymologically equivalent to the common term \"mixable\"). The term is most often applied to liquids but also applies to solids and gases. An example in liquids is the miscibility of water and ethanol as they mix in all proportions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Miscibility";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Mixture(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a mixture is a material made up of two or more different chemical substances which can be separated by physical method. It\'s an impure substance made up of 2 or more elements or compounds mechanically mixed together in any proportion. A mixture is the physical combination of two or more substances in which the identities are retained and are mixed in the form of solutions, suspensions or colloids.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mixture";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Moiety(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, a moiety is a part of a molecule that is given a name because it is identified as a part of other molecules as well. Typically, the term is used to describe the larger and characteristic parts of organic molecules, and it should not be used to describe or name smaller functional groups  of atoms that chemically react in similar ways in most molecules that contain them. Occasionally, a moiety may contain smaller moieties and functional groups. A moiety that acts as a branch extending from the backbone of a hydrocarbon molecule is called a substituent or side chain, which typically can be removed from the molecule and substituted with others. The term is also used in pharmacology, where an active moiety is the part of a molecule responsible for the physiological or pharmacological action of a drug.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Moiety";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Molality(string text)
{
    string model = "llama3";
    string definition = "In chemistry, molality is a measure of the amount of solute in a solution relative to a given mass of solvent. This contrasts with the definition of molarity which is based on a given volume of solution. A commonly used unit for molality is the moles per kilogram (mol/kg). A solution of concentration 1 mol/kg is also sometimes denoted as 1 molal. The unit mol/kg requires that molar mass be expressed in kg/mol, instead of the usual g/mol or kg/kmol.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::MolarAttenuationCoefficient(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the molar absorption coefficient or molar attenuation coefficient (ε) is a measurement of how strongly a chemical species absorbs, and thereby attenuates, light at a given wavelength. It is an intrinsic property of the species. The SI unit of molar absorption coefficient is the square metre per mole (m^2/mol), but in practice, quantities are usually expressed in terms of M^-1·cm^-1 or L*mol^-1*cm^-1 (the latter two units are both equal to 0.1 m^2/mol). In older literature, the cm^2/mol is sometimes used; 1 M^-1*cm^-1 equals 1000 cm2/mol. The molar absorption coefficient is also known as the molar extinction coefficient and molar absorptivity, but the use of these alternative terms has been discouraged by the IUPAC.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::MolarConcentration(string text)
{
    string model = "llama3";
    string definition = "Molar concentration (also called molarity, amount concentration or substance concentration) is a measure of the concentration of a chemical species, in particular, of a solute in a solution, in terms of amount of substance per unit volume of solution. In chemistry, the most commonly used unit for molarity is the number of moles per liter, having the unit symbol mol/L or mol/dm3 in SI units. A solution with a concentration of 1 mol/L is said to be 1 molar, commonly designated as 1 M or 1 M. Molarity is often depicted with square brackets around the substance of interest; for example, the molarity of the hydrogen ion is depicted as H+.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::MolarFraction(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the mole fraction or molar fraction, also called mole proportion or molar proportion, is a quantity defined as the ratio between the amount of a constituent substance, ni (expressed in unit of moles, symbol mol), and the total amount of all constituents in a mixture, ntot (also expressed in moles): zi = ni / ntot";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Molar Fraction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::MolarMass(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the molar mass (M) (sometimes called molecular weight or formula weight, but see related quantities for usage) of a chemical compound is defined as the ratio between the mass and the amount of substance (measured in moles) of any sample of the compound. The molar mass is a bulk, not molecular, property of a substance. The molar mass is an average of many instances of the compound, which often vary in mass due to the presence of isotopes. Most commonly, the molar mass is computed from the standard atomic weights and is thus a terrestrial average and a function of the relative abundance of the isotopes of the constituent atoms on Earth. The molar mass is appropriate for converting between the mass of a substance and the amount of a substance for bulk quantities. The molecular mass (for molecular compounds) and formula mass (for non-molecular compounds, such as ionic salts) are commonly used as synonyms of molar mass, differing only in units (daltons vs g/mol); however, the most authoritative sources define it differently. The difference is that molecular mass is the mass of one specific particle or molecule, while the molar mass is an average over many particles or molecules. The molar mass is an intensive property of the substance, that does not depend on the size of the sample. In the International System of Units (SI), the coherent unit of molar mass is kg/mol. However, for historical reasons, molar masses are almost always expressed in g/mol. The mole was defined in such a way that the molar mass of a compound, in g/mol, is numerically equal to the average mass of one molecule or formula unit, in daltons. It was exactly equal before the redefinition of the mole in 2019, and is now only approximately equal, but the difference is negligible for all practical purposes. Thus, for example, the average mass of a molecule of water is about 18.0153 daltons, and the molar mass of water is about 18.0153 g/mol. For chemical elements without isolated molecules, such as carbon and metals, the molar mass is computed dividing by the number of moles of atoms instead. Thus, for example, the molar mass of iron is about 55.845 g/mol.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Mole(string text)
{
    string model = "llama3";
    string definition = "The mole (symbol mol) is a unit of measurement, the base unit in the International System of Units (SI) for amount of substance, a quantity proportional to the number of elementary entities of a substance. One mole contains exactly 6.02214076x1023 elementary entities (approximately 602 sextillion or 602 billion times a trillion), which can be atoms, molecules, ions, ion pairs, or other particles. The number of particles in a mole is the Avogadro number (symbol N0) and the numerical value of the Avogadro constant (symbol NA) expressed in mol-1. The value was chosen on the basis of the historical definition of the mole as the amount of substance that corresponds to the number of atoms in 12 grams of 12C, which made the mass of a mole of a compound expressed in grams, numerically equal to the average molecular mass or formula mass of the compound expressed in daltons. With the 2019 revision of the SI, the numerical equivalence is now only approximate but may be assumed for all practical purposes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mole";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::MolecularFormula(string text)
{
    string model = "llama3";
    string definition = "Molecular formulae simply indicate the numbers of each type of atom in a molecule of a molecular substance. They are the same as empirical formulae for molecules that only have one atom of a particular type, but otherwise may have larger numbers. An example of the difference is the empirical formula for glucose, which is CH2O (ratio 1:2:1), while its molecular formula is C6H12O6 (number of atoms 6:12:6). For water, both formulae are H2O. A molecular formula provides more information about a molecule than its empirical formula, but is more difficult to establish.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Molecular Formula";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::MolecularOrbital(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a molecular orbital (/?rb?dl/) is a mathematical function describing the location and wave-like behavior of an electron in a molecule. This function can be used to calculate chemical and physical properties such as the probability of finding an electron in any specific region. The terms atomic orbital and molecular orbital were introduced by Robert S. Mulliken in 1932 to mean one-electron orbital wave functions. At an elementary level, they are used to describe the region of space in which a function has a significant amplitude.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Molecular Orbital";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::MolecularOrbitalDiagram(string text)
{
    string model = "llama3";
    string definition = "A molecular orbital diagram, or MO diagram, is a qualitative descriptive tool explaining chemical bonding in molecules in terms of molecular orbital theory in general and the linear combination of atomic orbitals (LCAO) method in particular. A fundamental principle of these theories is that as atoms bond to form molecules, a certain number of atomic orbitals combine to form the same number of molecular orbitals, although the electrons involved may be redistributed among the orbitals. This tool is very well suited for simple diatomic molecules such as dihydrogen, dioxygen, and carbon monoxide but becomes more complex when discussing even comparatively simple polyatomic molecules, such as methane. MO diagrams can explain why some molecules exist and others do not. They can also predict bond strength, as well as the electronic transitions that can take place.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Molecular Orbital Diagram";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::MolecularWeight(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the molar mass (M) (sometimes called molecular weight or formula weight, but see related quantities for usage) of a chemical compound is defined as the ratio between the mass and the amount of substance (measured in moles) of any sample of the compound. The molar mass is a bulk, not molecular, property of a substance. The molar mass is an average of many instances of the compound, which often vary in mass due to the presence of isotopes. Most commonly, the molar mass is computed from the standard atomic weights and is thus a terrestrial average and a function of the relative abundance of the isotopes of the constituent atoms on Earth. The molar mass is appropriate for converting between the mass of a substance and the amount of a substance for bulk quantities.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Molecular Weight";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Molecule(string text)
{
    string model = "llama3";
    string definition = "A molecule is a group of two or more atoms that are held together by attractive forces known as chemical bonds; depending on context, the term may or may not include ions that satisfy this criterion. In quantum physics, organic chemistry, and biochemistry, the distinction from ions is dropped and molecule is often used when referring to polyatomic ions. A molecule may be homonuclear, that is, it consists of atoms of one chemical element, e.g. two atoms in the oxygen molecule (O2); or it may be heteronuclear, a chemical compound composed of more than one element, e.g. water (two hydrogen atoms and one oxygen atom; H2O). In the kinetic theory of gases, the term molecule is often used for any gaseous particle regardless of its composition. This relaxes the requirement that a molecule contains two or more atoms, since the noble gases are individual atoms. Atoms and complexes connected by non-covalent interactions, such as hydrogen bonds or ionic bonds, are typically not considered single molecules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Monatomic(string text)
{
    string model = "llama3";
    string definition = "In physics and chemistry, \"monatomic\" is a combination of the words \"mono\" and \"atomic\", and means \"single atom\". It is usually applied to gases: a monatomic gas is a gas in which atoms are not bound to each other. Examples at standard conditions of temperature and pressure include all the noble gases (helium, neon, argon, krypton, xenon, and radon), though all chemical elements will be monatomic in the gas phase at sufficiently high temperature (or very low pressure). The thermodynamic behavior of a monatomic gas is much simpler when compared to polyatomic gases because it is free of any rotational or vibrational energy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Monatomic";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::NaturalAbundance(string text)
{
    string model = "llama3";
    string definition = "In physics, natural abundance (NA) refers to the abundance of isotopes of a chemical element as naturally found on a planet. The relative atomic mass (a weighted average, weighted by mole-fraction abundance figures) of these isotopes is the atomic weight listed for the element in the periodic table. The abundance of an isotope varies from planet to planet, and even from place to place on the Earth, but remains relatively constant in time (on a short-term scale).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Natural Abundance";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Neat(string text)
{
    string model = "llama3";
    string definition = "Conditions with a liquid reagent or gas performed with no added solvent or cosolvent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neat";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Neutron(string text)
{
    string model = "llama3";
    string definition = "The neutron is a subatomic particle, symbol n or n^0,  that has no electric charge, and a mass slightly greater than that of a proton. Protons and neutrons constitute the nuclei of atoms. Since protons and neutrons behave similarly within the nucleus, they are both referred to as nucleons. Nucleons have a mass of approximately one atomic mass unit, or dalton (symbol: Da). Their properties and interactions are described by nuclear physics. Protons and neutrons are not elementary particles; each is composed of three quarks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Nitrogen(string text)
{
    string model = "llama3";
    string definition = "Nitrogen is a chemical element; it has symbol N and atomic number 7. Nitrogen is a nonmetal and the lightest member of group 15 of the periodic table, often called the pnictogens. It is a common element in the universe, estimated at seventh in total abundance in the Milky Way and the Solar System. At standard temperature and pressure, two atoms of the element bond to form N2, a colourless and odourless diatomic gas. N2 forms about 78% of Earth\'s atmosphere, making it the most abundant chemical species in air. Because of the volatility of nitrogen compounds, nitrogen is relatively rare in the solid parts of the Earth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nitrogen";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::NobleGas(string text)
{
    string model = "llama3";
    string definition = "The noble gases (historically the inert gases, sometimes referred to as aerogens) are the members of group 18 of the periodic table: helium (He), neon (Ne), argon (Ar), krypton (Kr), xenon (Xe), radon (Rn) and, in some cases, oganesson (Og). Under standard conditions, the first six of these elements are odorless, colorless, monatomic gases with very low chemical reactivity and cryogenic boiling points. The properties of the seventh, unstable, element, Og, are uncertain.The intermolecular force between noble gas atoms is the very weak London dispersion force, so their boiling points are all cryogenic, below 165 K (-108C; -163F).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Noble Gas";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Nonmetal(string text)
{
    string model = "llama3";
    string definition = "In the context of the periodic table a nonmetal is a chemical element that mostly lacks distinctive metallic properties. They range from colorless gases like hydrogen to shiny crystals like iodine. Physically, they are usually lighter (less dense) than elements that form metals and are often poor conductors of heat and electricity. Chemically, nonmetals have relatively high electronegativity or usually attract electrons in a chemical bond with another element, and their oxides tend to be acidic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nonmetal";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::NonpolarCompound(string text)
{
    string model = "llama3";
    string definition = "A compound consisting of covalent molecules with no permanent dipole moment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nonpolar Compound";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Normality(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the equivalent concentration or normality (N) of a solution is defined as the molar concentration ci divided by an equivalence factor or n-factor feq: N = ci / feq";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Normality";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Nuclear(string text)
{
    string model = "llama3";
    string definition = "The atomic nucleus is the small, dense region consisting of protons and neutrons at the center of an atom, discovered in 1911 by Ernest Rutherford based on the 1909 Geiger-Marsden gold foil experiment. After the discovery of the neutron in 1932, models for a nucleus composed of protons and neutrons were quickly developed by Dmitri Ivanenko and Werner Heisenberg. An atom is composed of a positively charged nucleus, with a cloud of negatively charged electrons surrounding it, bound together by electrostatic force. Almost all of the mass of an atom is located in the nucleus, with a very small contribution from the electron cloud. Protons and neutrons are bound together to form a nucleus by the nuclear force.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nuclear";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::NuclearChemistry(string text)
{
    string model = "llama3";
    string definition = "Nuclear chemistry is the sub-field of chemistry dealing with radioactivity, nuclear processes, and transformations in the nuclei of atoms, such as nuclear transmutation and nuclear properties. It is the chemistry of radioactive elements such as the actinides, radium and radon together with the chemistry associated with equipment (such as nuclear reactors) which are designed to perform nuclear processes. This includes the corrosion of surfaces and the behavior under conditions of both normal and abnormal operation (such as during an accident). An important area is the behavior of objects and materials after being placed into a nuclear waste storage or disposal site.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nuclear Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::NuclearMagneticResonanceSpectroscopy(string text)
{
    string model = "llama3";
    string definition = "Nuclear magnetic resonance spectroscopy, most commonly known as NMR spectroscopy or magnetic resonance spectroscopy (MRS), is a spectroscopic technique based on re-orientation of atomic nuclei with non-zero nuclear spins in an external magnetic field. This re-orientation occurs with absorption of electromagnetic radiation in the radio frequency region from roughly 4 to 900 MHz, which depends on the isotopic nature of the nucleus and increased proportionally to the strength of the external magnetic field. Notably, the resonance frequency of each NMR-active nucleus depends on its chemical environment. As a result, NMR spectra provide information about individual functional groups present in the sample, as well as about connections between nearby nuclei in the same molecule. As the NMR spectra are unique or highly characteristic to individual compounds and functional groups, NMR spectroscopy is one of the most important methods to identify molecular structures, particularly of organic compounds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nuclear Magnetic Resonance Spectroscopy";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::NuclearTransmutation(string text)
{
    string model = "llama3";
    string definition = "Nuclear transmutation is the conversion of one chemical element or an isotope into another chemical element. Nuclear transmutation occurs in any process where the number of protons or neutrons in the nucleus of an atom is changed. A transmutation can be achieved either by nuclear reactions (in which an outside particle reacts with a nucleus) or by radioactive decay, where no outside cause is needed. Natural transmutation by stellar nucleosynthesis in the past created most of the heavier chemical elements in the known existing universe, and continues to take place to this day, creating the vast majority of the most common elements in the universe, including helium, oxygen and carbon. Most stars carry out transmutation through fusion reactions involving hydrogen and helium, while much larger stars are also capable of fusing heavier elements up to iron late in their evolution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Nucleon(string text)
{
    string model = "llama3";
    string definition = "In physics and chemistry, a nucleon is either a proton or a neutron, considered in its role as a component of an atomic nucleus. The number of nucleons in a nucleus defines the atom\'s mass number (nucleon number). Until the 1960s, nucleons were thought to be elementary particles, not made up of smaller parts. Now they are understood as composite particles, made of three quarks bound together by the strong interaction. The interaction between two or more nucleons is called internucleon interaction or nuclear force, which is also ultimately caused by the strong interaction. (Before the discovery of quarks, the term \"strong interaction\" referred to just internucleon interactions.) Nucleons sit at the boundary where particle physics and nuclear physics overlap. Particle physics, particularly quantum chromodynamics, provides the fundamental equations that describe the properties of quarks and of the strong interaction. These equations describe quantitatively how quarks can bind together into protons and neutrons (and all the other hadrons). However, when multiple nucleons are assembled into an atomic nucleus (nuclide), these fundamental equations become too difficult to solve directly (see lattice QCD). Instead, nuclides are studied within nuclear physics, which studies nucleons and their interactions by approximations and models, such as the nuclear shell model. These models can successfully describe nuclide properties, as for example, whether or not a particular nuclide undergoes radioactive decay.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Nucleophile(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a nucleophile is a chemical species that forms bonds by donating an electron pair. All molecules and ions with a free pair of electrons or at least one pi bond can act as nucleophiles. Because nucleophiles donate electrons, they are Lewis bases. Nucleophilic describes the affinity of a nucleophile to bond with positively charged atomic nuclei. Nucleophilicity, sometimes referred to as nucleophile strength, refers to a substance\'s nucleophilic character and is often used to compare the affinity of atoms. Neutral nucleophilic reactions with solvents such as alcohols and water are named solvolysis. Nucleophiles may take part in nucleophilic substitution, whereby a nucleophile becomes attracted to a full or partial positive charge, and nucleophilic addition. Nucleophilicity is closely related to basicity. The difference between the two is, that basicity is a thermodynamic property (i.e. relates to an equilibrium state), but nucleophilicity is a kinetic property, which relates to rates of certain chemical reactions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nucleophile";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::AtomicNucleus(string text)
{
    string model = "llama3";
    string definition = "The atomic nucleus is the small, dense region consisting of protons and neutrons at the center of an atom, discovered in 1911 by Ernest Rutherford based on the 1909 Geiger-Marsden gold foil experiment. After the discovery of the neutron in 1932, models for a nucleus composed of protons and neutrons were quickly developed by Dmitri Ivanenko and Werner Heisenberg. An atom is composed of a positively charged nucleus, with a cloud of negatively charged electrons surrounding it, bound together by electrostatic force. Almost all of the mass of an atom is located in the nucleus, with a very small contribution from the electron cloud. Protons and neutrons are bound together to form a nucleus by the nuclear force.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Nuclide(string text)
{
    string model = "llama3";
    string definition = "A species of atom characterized by its mass number, atomic number, and nuclear energy state, provided that the mean life in that state is long enough to be observable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::NumberDensity(string text)
{
    string model = "llama3";
    string definition = "The number density  is an intensive quantity used to describe the degree of concentration of countable objects (particles, molecules, phonons, cells, galaxies, etc.) in physical space: three-dimensional volumetric number density, two-dimensional areal number density, or one-dimensional linear number density. Population density is an example of areal number density. The term number concentration (symbol: lowercase n, or C, to avoid confusion with amount of substance indicated by uppercase N) is sometimes used in chemistry for the same quantity, particularly when comparing with other concentrations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Number Density";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::OctetRule(string text)
{
    string model = "llama3";
    string definition = "The octet rule is a chemical rule of thumb that reflects the theory that main-group elements tend to bond in such a way that each atom has eight electrons in its valence shell, giving it the same electronic configuration as a noble gas. The rule is especially applicable to carbon, nitrogen, oxygen, and the halogens; although more generally the rule is applicable for the s-block and p-block of the periodic table. Other rules exist for other elements, such as the duplet rule for hydrogen and helium, and the 18-electron rule for transition metals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Octet Rule";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::OpticalActivity(string text)
{
    string model = "llama3";
    string definition = "Optical rotation, also known as polarization rotation or circular birefringence, is the rotation of the orientation of the plane of polarization about the optical axis of linearly polarized light as it travels through certain materials. Circular birefringence and circular dichroism are the manifestations of optical activity. Optical activity occurs only in chiral materials, those lacking microscopic mirror symmetry. Unlike other sources of birefringence which alter a beam\'s state of polarization, optical activity can be observed in fluids. This can include gases or solutions of chiral molecules such as sugars, molecules with helical secondary structure such as some proteins, and also chiral liquid crystals. It can also be observed in chiral solids such as certain crystals with a rotation between adjacent crystal planes (such as quartz) or metamaterials.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Optical Activity";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Orbital(string text)
{
    string model = "llama3";
    string definition = "Any region of an atom or molecule in which one or more electrons can be found. The term may refer to either an atomic orbital or a molecular orbital.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Orbital";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::OrbitalHybridisation(string text)
{
    string model = "llama3";
    string definition = "In chemistry, orbital hybridisation (or hybridization) is the concept of mixing atomic orbitals to form new hybrid orbitals (with different energies, shapes, etc., than the component atomic orbitals) suitable for the pairing of electrons to form chemical bonds in valence bond theory. For example, in a carbon atom which forms four single bonds, the valence-shell s orbital combines with three valence-shell p orbitals to form four equivalent sp3 mixtures in a tetrahedral arrangement around the carbon to bond to four different atoms. Hybrid orbitals are useful in the explanation of molecular geometry and atomic bonding properties and are symmetrically disposed in space. Usually hybrid orbitals are formed by mixing atomic orbitals of comparable energies.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Orbital Hybridisation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::OrderOfReaction(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the rate equation (also known as the rate law or empirical differential rate equation) is an empirical differential mathematical expression for the reaction rate of a given reaction in terms of concentrations of chemical species and constant parameters (normally rate coefficients and partial orders of reaction) only.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Order Of Reaction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::OrganicAcid(string text)
{
    string model = "llama3";
    string definition = "An organic acid is an organic compound with acidic properties. The most common organic acids are the carboxylic acids, whose acidity is associated with their carboxyl group -COOH. Sulfonic acids, containing the group -SO2OH, are relatively stronger acids. Alcohols, with -OH, can act as acids but they are usually very weak. The relative stability of the conjugate base of the acid determines its acidity. Other groups can also confer acidity, usually weakly: the thiol group -SH, the enol group, and the phenol group. In biological systems, organic compounds containing these groups are generally referred to as organic acids. Lactic acid, Acetic acid, Formic acid, Citric acid, Oxalic acid, Uric acid, Malic acid, Malic acid, Tartaric acid, Butyric acid, Folic acid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Organic Acid";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::OrganicBase(string text)
{
    string model = "llama3";
    string definition = "An organic base is an organic compound which acts as a base. Organic bases are usually, but not always, proton acceptors. They usually contain nitrogen atoms, which can easily be protonated. For example, amines or nitrogen-containing heterocyclic compounds have a lone pair of electrons on the nitrogen atom and can thus act as proton acceptors. Examples include: pyridine, alkylamines, such as methylamine, imidazole, benzimidazole, histidine, guanidine, phosphazene bases, hydroxides of quaternary ammonium cations or some other organic cations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Organic Base";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::OrganicChemistry(string text)
{
    string model = "llama3";
    string definition = "Organic chemistry is a subdiscipline within chemistry involving the scientific study of the structure, properties, and reactions of organic compounds and organic materials, i.e., matter in its various forms that contain carbon atoms. Study of structure determines their structural formula. Study of properties includes physical and chemical properties, and evaluation of chemical reactivity to understand their behavior. The study of organic reactions includes the chemical synthesis of natural products, drugs, and polymers, and study of individual organic molecules in the laboratory and via theoretical (in silico) study.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::OrganicCompound(string text)
{
    string model = "llama3";
    string definition = "Some chemical authorities define an organic compound as a chemical compound that contains a carbon-hydrogen or carbon-carbon bond; others consider an organic compound to be any chemical compound that contains carbon. For example, carbon-containing compounds such as alkanes (e.g. methane CH4) and its derivatives are universally considered organic, but many others are sometimes considered inorganic, such as halides of carbon without carbon-hydrogen and carbon-carbon bonds (e.g. carbon tetrachloride and certain compounds of carbon with nitrogen and oxygen (e.g. cyanide ion hydrogen cyanide HCN, chloroformic acid carbon dioxide, and carbonate ion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Organic Compound";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::OrganicRedoxReaction(string text)
{
    string model = "llama3";
    string definition = "Organic reductions or organic oxidations or organic redox reactions are redox reactions that take place with organic compounds. In organic chemistry oxidations and reductions are different from ordinary redox reactions, because many reactions carry the name but do not actually involve electron transfer. Instead the relevant criterion for organic oxidation is gain of oxygen and/or loss of hydrogen. Simple functional groups can be arranged in order of increasing oxidation state. The oxidation numbers are only an approximation:";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Organic Redox Reaction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::OrganosulfurCompound(string text)
{
    string model = "llama3";
    string definition = "Organosulfur chemistry is the study of the properties and synthesis of organosulfur compounds, which are organic compounds that contain sulfur. They are often associated with foul odors, but many of the sweetest compounds known are organosulfur derivatives, e.g., saccharin. Nature is abound with organosulfur compounds-sulfur is vital for life. Of the 20 common amino acids, two (cysteine and methionine) are organosulfur compounds, and the antibiotics penicillin and sulfa drugs both contain sulfur. While sulfur-containing antibiotics save many lives, sulfur mustard is a deadly chemical warfare agent. Fossil fuels, coal, petroleum, and natural gas, which are derived from ancient organisms, necessarily contain organosulfur compounds, the removal of which is a major focus of oil refineries. Sulfur shares the chalcogen group with oxygen, selenium, and tellurium, and it is expected that organosulfur compounds have similarities with carbon-oxygen, carbon-selenium, and carbon-tellurium compounds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Organosulfur Compound";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Osmole(string text)
{
    string model = "llama3";
    string definition = "The unit of osmotic concentration is the osmole. This is a non-SI unit of measurement that defines the number of moles of solute that contribute to the osmotic pressure of a solution. A milliosmole (mOsm) is 1/1,000 of an osmole. A microosmole (µOsm) (also spelled micro-osmole) is 1/1,000,000 of an osmole.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Osmole";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Osmosis(string text)
{
    string model = "llama3";
    string definition = " the spontaneous net movement or diffusion of solvent molecules through a selectively-permeable membrane from a region of high water potential (region of lower solute concentration) to a region of low water potential (region of higher solute concentration), in the direction that tends to equalize the solute concentrations on the two sides. It may also be used to describe a physical process in which any solvent moves across a selectively permeable membrane (permeable to the solvent, but not the solute) separating two solutions of different concentrations. Osmosis can be made to do work. Osmotic pressure is defined as the external pressure required to prevent net movement of solvent across the membrane. Osmotic pressure is a colligative property, meaning that the osmotic pressure depends on the molar concentration of the solute but not on its identity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::OsmoticConcentration(string text)
{
    string model = "llama3";
    string definition = "Osmotic concentration, formerly known as osmolarity, is the measure of solute concentration, defined as the number of osmoles (Osm) of solute per litre (L) of solution (osmol/L or Osm/L). The osmolarity of a solution is usually expressed as Osm/L (pronounced \"osmolar\"), in the same way that the molarity of a solution is expressed as \"M\" (pronounced \"molar\"). Whereas molarity measures the number of moles of solute per unit volume of solution, osmolarity measures the number of osmoles of solute particles per unit volume of solution. This value allows the measurement of the osmotic pressure of a solution and the determination of how the solvent will diffuse across a semipermeable membrane (osmosis) separating two solutions of different osmotic concentration.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Osmotic Concentration";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::OsmoticPressure(string text)
{
    string model = "llama3";
    string definition = "Osmotic pressure is the minimum pressure which needs to be applied to a solution to prevent the inward flow of its pure solvent across a semipermeable membrane. It is also defined as the measure of the tendency of a solution to take in its pure solvent by osmosis. Potential osmotic pressure is the maximum osmotic pressure that could develop in a solution if it were separated from its pure solvent by a semipermeable membrane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Osmotic Pressure";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::OtherMetal(string text)
{
    string model = "llama3";
    string definition = "Any of the metallic elements in the p-block, which are characterized by having a combination of relatively low melting points (all less than 950 K) and relatively high electronegativity values (all more than 1.6, revised Pauling).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Other Metal";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Oxidation(string text)
{
    string model = "llama3";
    string definition = " reduction-oxidation or oxidation-reduction: 150 ) is a type of chemical reaction in which the oxidation states of the reactants change. Oxidation is the loss of electrons or an increase in the oxidation state, while reduction is the gain of electrons or a decrease in the oxidation state. The oxidation and reduction processes occur simultaneously in the chemical reaction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Oxidation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::OxidationState(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the oxidation state, or oxidation number, is the hypothetical charge of an atom if all of its bonds to other atoms were fully ionic. It describes the degree of oxidation (loss of electrons) of an atom in a chemical compound. Conceptually, the oxidation state may be positive, negative or zero. Beside nearly-pure ionic bonding, many covalent bonds exhibit a strong ionicity, making oxidation state a useful predictor of charge.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Oxidation State";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::OxidizingAgent(string text)
{
    string model = "llama3";
    string definition = "An oxidizing agent (also known as an oxidant, oxidizer, electron recipient, or electron acceptor) is a substance in a redox chemical reaction that gains or \"accepts\"/\"receives\" an electron from a reducing agent (called the reductant, reducer, or electron donor). In other words, an oxidizer is any substance that oxidizes another substance. The oxidation state, which describes the degree of loss of electrons, of the oxidizer decreases while that of the reductant increases; this is expressed by saying that oxidizers \"undergo reduction\" and \"are reduced\" while reducers \"undergo oxidation\" and \"are oxidized\". Common oxidizing agents are oxygen, hydrogen peroxide, and the halogens.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Oxidizing Agent";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Oxyacid(string text)
{
    string model = "llama3";
    string definition = "An oxyacid, oxoacid, or ternary acid is an acid that contains oxygen. Specifically, it is a compound that contains hydrogen, oxygen, and at least one other element, with at least one hydrogen atom bonded to oxygen that can dissociate to produce the H+ cation and the anion of the acid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Oxyacid";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Oxygen(string text)
{
    string model = "llama3";
    string definition = "Oxygen is a chemical element with the symbol O and atomic number 8. It is a member of the chalcogen group in the periodic table, a highly reactive nonmetal, and a potent oxidizing agent that readily forms oxides with most elements as well as with other compounds. Oxygen is the most abundant element in Earth\'s crust, and the third-most abundant element in the universe after hydrogen and helium. t standard temperature and pressure, two oxygen atoms will bind covalently to form dioxygen, a colorless and odorless diatomic gas with the chemical formula O2. Dioxygen gas currently constitutes 20.95% molar fraction of the Earth\'s atmosphere, though this has changed considerably over long periods of time in Earth\'s history. Oxygen makes up almost half of the Earth\'s crust in the form of various oxides such as water, carbon dioxide, iron oxides and silicates.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Oxygen";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::PBlock(string text)
{
    string model = "llama3";
    string definition = "The p-block, with the p standing for \"principal\" and azimuthal quantum number 1, is on the right side of the standard periodic table and encompasses elements in groups 13 to 18. Their general electronic configuration is ns2 np1-6. Helium, though being the first element in group 18, is not included in the p-block. Each row of the table has a place for six p-elements except for the first row (which has none).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "P Block";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::PairedElectron(string text)
{
    string model = "llama3";
    string definition = "One of two electrons that together form a valence bond between two atoms. Contrast unpaired electron.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Paired Electron";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Paraffin(string text)
{
    string model = "llama3";
    string definition = "1.  A trivial (non-IUPAC) name for any alkane. 2. Another name for kerosene.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::PartialPressure(string text)
{
    string model = "llama3";
    string definition = "In a mixture of gases, each constituent gas has a partial pressure which is the notional pressure of that constituent gas as if it alone occupied the entire volume of the original mixture at the same temperature. The total pressure of an ideal gas mixture is the sum of the partial pressures of the gases in the mixture (Dalton\'s Law). The partial pressure of a gas is a measure of thermodynamic activity of the gas\'s molecules. Gases dissolve, diffuse, and react according to their partial pressures but not according to their concentrations in gas mixtures or liquids. This general property of gases is also true in chemical reactions of gases in biology. For example, the necessary amount of oxygen for human respiration, and the amount that is toxic, is set by the partial pressure of oxygen alone. This is true across a very wide range of different concentrations of oxygen present in various inhaled breathing gases or dissolved in blood; consequently, mixture ratios, like that of breathable 20% oxygen and 80% Nitrogen, are determined by volume instead of by weight or mass. Furthermore, the partial pressures of oxygen and carbon dioxide are important parameters in tests of arterial blood gases. That said, these pressures can also be measured in, for example, cerebrospinal fluid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Partial Pressure";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::PartitionCoefficient(string text)
{
    string model = "llama3";
    string definition = "In the physical sciences, a partition coefficient (P) or distribution coefficient (D) is the ratio of concentrations of a compound in a mixture of two immiscible solvents at equilibrium. This ratio is therefore a comparison of the solubilities of the solute in these two liquids. The partition coefficient generally refers to the concentration ratio of un-ionized species of compound, whereas the distribution coefficient refers to the concentration ratio of all species of the compound (ionized plus un-ionized). In the chemical and pharmaceutical sciences, both phases usually are solvents. Most commonly, one of the solvents is water, while the second is hydrophobic, such as 1-octanol. Hence the partition coefficient measures how hydrophilic (\"water-loving\") or hydrophobic (\"water-fearing\") a chemical substance is. Partition coefficients are useful in estimating the distribution of drugs within the body. Hydrophobic drugs with high octanol-water partition coefficients are mainly distributed to hydrophobic areas such as lipid bilayers of cells. Conversely, hydrophilic drugs (low octanol/water partition coefficients) are found primarily in aqueous regions such as blood serum. If one of the solvents is a gas and the other a liquid, a gas/liquid partition coefficient can be determined. For example, the blood/gas partition coefficient of a general anesthetic measures how easily the anesthetic passes from gas to blood. Partition coefficients can also be defined when one of the phases is solid, for instance, when one phase is a molten metal and the second is a solid metal, or when both phases are solids. The partitioning of a substance into a solid results in a solid solution. Partition coefficients can be measured experimentally in various ways (by shake-flask, HPLC, etc.) or estimated by calculation based on a variety of methods (fragment-based, atom-based, etc.). If a substance is present as several chemical species in the partition system due to association or dissociation, each species is assigned its own Kow value. A related value, D, does not distinguish between different species, only indicating the concentration ratio of the substance between the two phases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Partition Coefficient";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Pascal(string text)
{
    string model = "llama3";
    string definition = "The pascal (symbol: Pa) is the unit of pressure in the International System of Units (SI). It is also used to quantify internal pressure, stress, Young\'s modulus, and ultimate tensile strength. The unit, named after Blaise Pascal, is an SI coherent derived unit defined as one newton per square metre (N/m2). It is also equivalent to 10 barye (10 Ba) in the CGS system. Common multiple units of the pascal are the hectopascal (1 hPa = 100 Pa), which is equal to one millibar, and the kilopascal (1 kPa = 1000 Pa), which is equal to one centibar.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pascal";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Passivation(string text)
{
    string model = "llama3";
    string definition = "In physical chemistry and engineering, passivation is coating a material so that it becomes \"passive\", that is, less readily affected or corroded by the environment. Passivation involves creation of an outer layer of shield material that is applied as a microcoating, created by chemical reaction with the base material, or allowed to build by spontaneous oxidation in the air. As a technique, passivation is the use of a light coat of a protective material, such as metal oxide, to create a shield against corrosion. Passivation of silicon is used during fabrication of microelectronic devices. Undesired passivation of electrodes, called \"fouling\", increases the circuit resistance so it interferes with some electrochemical applications such as electrocoagulation for wastewater treatment, amperometric chemical sensing, and electrochemical synthesis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Passivation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Passivity(string text)
{
    string model = "llama3";
    string definition = "A state of chemical inactivity, especially of a metal that is relatively resistant to corrosion due to natural or induced loss of chemical reactivity (as with passivation).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Passivity";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Pentabasic(string text)
{
    string model = "llama3";
    string definition = "(of a chemical compound) Having five hydrogen atoms which may be replaced by metals or bases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pentabasic";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Pentoxide(string text)
{
    string model = "llama3";
    string definition = "Any binary compound containing five atoms of oxygen, e.g. iodine pentoxide";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pentoxide";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::PentylGroup(string text)
{
    string model = "llama3";
    string definition = "-C5H11. It is the substituent form of the alkane pentane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pentyl Group";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Per(string text)
{
    string model = "llama3";
    string definition = "A prefix in IUPAC chemical nomenclature meaning complete, exhaustive, or extreme, as in a completely substituted hydrocarbon; or indicating the presence of a peroxy group.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Per";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Peracid(string text)
{
    string model = "llama3";
    string definition = "A peroxy acid (often spelled as one word, peroxyacid, and sometimes called peracid) is an acid which contains an acidic -OOH group. The two main classes are those derived from conventional mineral acids, especially sulfuric acid, and the peroxy derivatives of organic carboxylic acids. They are generally strong oxidizers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Peracid";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Period(string text)
{
    string model = "llama3";
    string definition = "A period on the periodic table is a row of chemical elements. All elements in a row have the same number of electron shells. Each next element in a period has one more proton and is less metallic than its predecessor. Arranged this way, elements in the same group (column) have similar chemical and physical properties, reflecting the periodic law. For example, the halogens lie in the second-to-last group (group 17) and share similar properties, such as high reactivity and the tendency to gain one electron to arrive at a noble-gas electronic configuration. As of 2022, a total of 118 elements have been discovered and confirmed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::PeriodicTableOfTheElements(string text)
{
    string model = "llama3";
    string definition = "The periodic table, also known as the periodic table of the elements, is an ordered arrangement of the chemical elements into rows (\"periods\") and columns (\"groups\"). It is an icon of chemistry and is widely used in physics and other sciences. It is a depiction of the periodic law, which states that when the elements are arranged in order of their atomic numbers an approximate recurrence of their properties is evident. The table is divided into four roughly rectangular areas called blocks. Elements in the same group tend to show similar chemical characteristics. Vertical, horizontal and diagonal trends characterize the periodic table. Metallic character increases going down a group and from right to left across a period. Nonmetallic character increases going from the bottom left of the periodic table to the top right. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Periodic Table Of The Elements";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Peroxide(string text)
{
    string model = "llama3";
    string definition = "In chemistry, peroxides are a group of compounds with the structure R-O-O-R, where the R\'s represent a radical (a portion of a complete molecule; not necessarily a free radical) and O\'s are single oxygen atoms. Oxygen atoms are joined to each other and to adjacent elements through single covalent bonds, denoted by dashes or lines. The O-O group in a peroxide is often called the peroxide group, though some nomenclature discrepancies exist. This linkage is recognized as a common polyatomic ion, and exists in many molecules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Peroxide";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Peroxy(string text)
{
    string model = "llama3";
    string definition = "A functional group consisting of two oxygen atoms directly connected to each other by a single bond and each also connected to one other atom. Peroxides have the general structural formula -O-O-.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Peroxy";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::PH(string text)
{
    string model = "llama3";
    string definition = "A logarithmic scale used to specify the acidity or basicity of an aqueous solution. The pH scale approximates the negative of the base-10 logarithm of the molar concentration of hydrogen ions in a solution. At room temperature, pure water is neutral (pH = 7); solutions with a pH less than 7 are acidic and those with a pH greater than 7 are basic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "P H";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Phase(string text)
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
            return "Phase";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::PhaseDiagram(string text)
{
    string model = "llama3";
    string definition = "In physics, chemistry, and other related fields like biology, a phase transition (or phase change) is the physical process of transition between one state of a medium and another. Commonly the term is used to refer to changes among the basic states of matter: solid, liquid, and gas, and in rare cases, plasma. A phase of a thermodynamic system and the states of matter have uniform physical properties. During a phase transition of a given medium, certain properties of the medium change as a result of the change of external conditions, such as temperature or pressure. This can be a discontinuous change; for example, a liquid may become gas upon heating to its boiling point, resulting in an abrupt change in volume. The identification of the external conditions at which a transformation occurs defines the phase transition point.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::PhenylGroup(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, the phenyl group, or phenyl ring, is a cyclic group of atoms with the formula C6H5, and is often represented by the symbol Ph (archaically φ) or O. The phenyl group is closely related to benzene and can be viewed as a benzene ring, minus a hydrogen, which may be replaced by some other element or compound to serve as a functional group. A phenyl group has six carbon atoms bonded together in a hexagonal planar ring, five of which are bonded to individual hydrogen atoms, with the remaining carbon bonded to a substituent. Phenyl groups are commonplace in organic chemistry. Although often depicted with alternating double and single bonds, the phenyl group is chemically aromatic and has equal bond lengths between carbon atoms in the ring.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phenyl Group";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::PhiBond(string text)
{
    string model = "llama3";
    string definition = "In chemistry, phi bonds (φ bonds) are usually covalent chemical bonds, where six lobes of one involved atomic orbital overlap six lobes of the other involved atomic orbital. This overlap leads to the formation of a bonding molecular orbital with three nodal planes which contain the internuclear axis and go through both atoms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phi Bond";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Photon(string text)
{
    string model = "llama3";
    string definition = "an elementary particle that is a quantum of the electromagnetic field, including electromagnetic radiation such as light and radio waves, and the force carrier for the electromagnetic force. Photons are massless particles that can move no faster than the speed of light measured in vacuum. The photon belongs to the class of boson particles. As with other elementary particles, photons are best explained by quantum mechanics and exhibit wave-particle duality, their behavior featuring properties of both waves and particles. The modern photon concept originated during the first two decades of the 20th century with the work of Albert Einstein, who built upon the research of Max Planck. While Planck was trying to explain how matter and electromagnetic radiation could be in thermal equilibrium with one another, he proposed that the energy stored within a material object should be regarded as composed of an integer number of discrete, equal-sized parts. To explain the photoelectric effect, Einstein introduced the idea that light itself is made of discrete units of energy. In 1926, Gilbert N. Lewis popularized the term photon for these energy units. Subsequently, many other experiments validated Einstein\'s approach. In the Standard Model of particle physics, photons and other elementary particles are described as a necessary consequence of physical laws having a certain symmetry at every point in spacetime. The intrinsic properties of particles, such as charge, mass, and spin, are determined by gauge symmetry. The photon concept has led to momentous advances in experimental and theoretical physics, including lasers, Bose-Einstein condensation, quantum field theory, and the probabilistic interpretation of quantum mechanics. It has been applied to photochemistry, high-resolution microscopy, and measurements of molecular distances. Moreover, photons have been studied as elements of quantum computers, and for applications in optical imaging and optical communication such as quantum cryptography.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::PhysicalChemistry(string text)
{
    string model = "llama3";
    string definition = "Physical chemistry is the study of macroscopic and microscopic phenomena in chemical systems in terms of the principles, practices, and concepts of physics such as motion, energy, force, time, thermodynamics, quantum chemistry, statistical mechanics, analytical dynamics and chemical equilibria. Physical chemistry, in contrast to chemical physics, is predominantly (but not always) a supra-molecular science, as the majority of the principles on which it was founded relate to the bulk rather than the molecular or atomic structure alone (for example, chemical equilibrium and colloids).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::PiBond(string text)
{
    string model = "llama3";
    string definition = "In chemistry, pi bonds are covalent chemical bonds, in each of which two lobes of an orbital on one atom overlap with two lobes of an orbital on another atom, and in which this overlap occurs laterally. Each of these atomic orbitals has an electron density of zero at a shared nodal plane that passes through the two bonded nuclei. This plane also is a nodal plane for the molecular orbital of the pi bond. Pi bonds can form in double and triple bonds but do not form in single bonds in most cases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pi Bond";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Pipette(string text)
{
    string model = "llama3";
    string definition = "A pipette (sometimes spelled as pipet) is a type of laboratory tool commonly used in chemistry and biology to transport a measured volume of liquid, often as a media dispenser. Pipettes come in several designs for various purposes with differing levels of accuracy and precision, from single piece glass pipettes to more complex adjustable or electronic pipettes. Many pipette types work by creating a partial vacuum above the liquid-holding chamber and selectively releasing this vacuum to draw up and dispense liquid. Measurement accuracy varies greatly depending on the instrument.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pipette";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::PlasmaPhysics(string text)
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
            return "Plasma Physics";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Pnictogen(string text)
{
    string model = "llama3";
    string definition = "the chemical elements in group 15 of the periodic table. This group is also known as the nitrogen group or nitrogen family. Group 15 consists of the elements nitrogen (N), phosphorus (P), arsenic (As), antimony (Sb), bismuth (Bi), and moscovium (Mc). This is also the only group in the periodic table in which only one element ends in the common suffix -ium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pnictogen";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Polarity(string text)
{
    string model = "llama3";
    string definition = "In chemistry, polarity is a separation of electric charge leading to a molecule or its chemical groups having an electric dipole moment, with a negatively charged end and a positively charged end. Polar molecules must contain one or more polar bonds due to a difference in electronegativity between the bonded atoms. Molecules containing polar bonds have no molecular polarity if the bond dipoles cancel each other out by symmetry. Polar molecules interact through dipole-dipole intermolecular forces and hydrogen bonds. Polarity underlies a number of physical properties including surface tension, solubility, and melting and boiling points.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Polarity";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Polyatomic(string text)
{
    string model = "llama3";
    string definition = "A polyatomic ion (also known as a molecular ion) is a covalent bonded set of two or more atoms, or of a metal complex, that can be considered to behave as a single unit and that has a net charge that is not zero. The term molecule may or may not be used to refer to a polyatomic ion, depending on the definition used. The prefix poly- carries the meaning \"many\" in Greek, but even ions of two atoms are commonly described as polyatomic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Polyatomic";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::PolyatomicIon(string text)
{
    string model = "llama3";
    string definition = "A polyatomic ion (also known as a molecular ion) is a covalent bonded set of two or more atoms, or of a metal complex, that can be considered to behave as a single unit and that has a net charge that is not zero. The term molecule may or may not be used to refer to a polyatomic ion, depending on the definition used. The prefix poly- carries the meaning \"many\" in Greek, but even ions of two atoms are commonly described as polyatomic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Polyatomic Ion";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Polymerization(string text)
{
    string model = "llama3";
    string definition = "In polymer chemistry, polymerization (American English), or polymerisation (British English), is a process of reacting monomer molecules together in a chemical reaction to form polymer chains or three-dimensional networks. There are many forms of polymerization and different systems exist to categorize them. In chemical compounds, polymerization can occur via a variety of reaction mechanisms that vary in complexity due to the functional groups present in the reactants and their inherent steric effects. In more straightforward polymerizations, alkenes form polymers through relatively simple radical reactions; in contrast, reactions involving substitution at a carbonyl group require more complex synthesis due to the way in which reactants polymerize.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Polymerization";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::PrecipitantpotentialEnergy(string text)
{
    string model = "llama3";
    string definition = "In physics, potential energy is the energy held by an object because of its position relative to other objects, stresses within itself, its electric charge, or other factors. The term potential energy was introduced by the 19th-century Scottish engineer and physicist William Rankine, although it has links to the ancient Greek philosopher Aristotle\'s concept of potentiality.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Precipitantpotential Energy";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Precipitant(string text)
{
    string model = "llama3";
    string definition = "A chemical compound or reagent that causes a chemical reaction resulting in the formation of a solid precipitate when added to a solution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Precipitant";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Precipitate(string text)
{
    string model = "llama3";
    string definition = "1.  (n.) A solid substance that separates from a liquid solution or diffuses out of a solid alloy during the process of precipitation. 2.  (v.) To separate from another substance by forming a distinct, condensed solid phase.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Precipitation(string text)
{
    string model = "llama3";
    string definition = "The process of producing a separable solid phase within a liquid medium, e.g. by transforming the dissolved solute of a supersaturated solution into an insoluble solid; or the diffusion of a distinct solid phase out of a solid alloy. A reagent that causes such a reaction is called the precipitant, and the separable solid itself is the precipitate. More generally, the term may refer to the formation of any new condensed phase by changing the physical properties of a system (e.g. water vapor condensing into liquid water droplets).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Precipitation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Precision(string text)
{
    string model = "llama3";
    string definition = "How close the results of multiple experimental trials or observations are to each other. Compare accuracy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Precision";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Pressure(string text)
{
    string model = "llama3";
    string definition = "Pressure (symbol: p or P) is the force applied perpendicular to the surface of an object per unit area over which that force is distributed.: 445  Gauge pressure (also spelled gage pressure) is the pressure relative to the ambient pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::PrimaryChemistry(string text)
{
    string model = "llama3";
    string definition = "Primary is a term used in organic chemistry to classify various types of compounds (e.g. alcohols, alkyl halides, amines) or reactive intermediates (e.g. alkyl radicals, carbocations).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Primary Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ProtectiveGroup(string text)
{
    string model = "llama3";
    string definition = "A protecting group or protective group is introduced into a molecule by chemical modification of a functional group to obtain chemoselectivity in a subsequent chemical reaction. It plays an important role in multistep organic synthesis. n many preparations of delicate organic compounds, specific parts of the molecules cannot survive the required reagents or chemical environments. These parts (functional groups) must be protected. For example, lithium aluminium hydride is a highly reactive reagent that usefully reduces esters to alcohols. It always reacts with carbonyl groups, and cannot be discouraged by any means. When an ester must be reduced in the presence of a carbonyl, hydride attack on the carbonyl must be prevented. One way to do so converts the carbonyl into an acetal, which does not react with hydrides. The acetal is then called a protecting group for the carbonyl. After the hydride step is complete, aqueous acid removes the acetal, restoring the carbonyl. This step is called deprotection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Protective Group";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Proton(string text)
{
    string model = "llama3";
    string definition = "A proton is a stable subatomic particle, symbol p, H+, 1H+ with a positive electric charge of +1 e (elementary charge). Its mass is slightly less than the mass of a neutron and approximately 1836 times the mass of an electron (the proton-to-electron mass ratio). Protons and neutrons, each with a mass of approximately one atomic mass unit, are jointly referred to as nucleons (particles present in atomic nuclei).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Protonation(string text)
{
    string model = "llama3";
    string definition = "In chemistry, protonation (or hydronation) is the adding of a proton (or hydron, or hydrogen cation), usually denoted by H+, to an atom, molecule, or ion, forming a conjugate acid. (The complementary process, when a proton is removed from a Bronsted-Lowry acid, is deprotonation.) Some examples include: The protonation of water by sulfuric acid, The protonation of isobutene in the formation of a carbocation, The protonation of ammonia in the formation of ammonium chloride from ammonia and hydrogen chloride.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Protonation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Pyrolysis(string text)
{
    string model = "llama3";
    string definition = "Pyrolysis is the process of thermal decomposition of materials at elevated temperatures, often in an inert atmosphere without access to oxygen.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pyrolysis";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Quantum(string text)
{
    string model = "llama3";
    string definition = "In physics, a quantum is the minimum amount of any physical entity (physical property) involved in an interaction. Quantum is a discrete quantity of energy proportional in magnitude to the frequency of the radiation it represents. The fundamental notion that a property can be \"quantized\" is referred to as \"the hypothesis of quantization\". This means that the magnitude of the physical property can take on only discrete values consisting of integer multiples of one quantum. For example, a photon is a single quantum of light of a specific frequency (or of any other form of electromagnetic radiation). Similarly, the energy of an electron bound within an atom is quantized and can exist only in certain discrete values. Atoms and matter in general are stable because electrons can exist only at discrete energy levels within an atom. Quantization is one of the foundations of the much broader physics of quantum mechanics. Quantization of energy and its influence on how energy and matter interact (quantum electrodynamics) is part of the fundamental framework for understanding and describing nature";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::QuantumMechanics(string text)
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

string _Chemistry::Terms::Quark(string text)
{
    string model = "llama3";
    string definition = "a type of elementary particle and a fundamental constituent of matter. Quarks combine to form composite particles called hadrons, the most stable of which are protons and neutrons, the components of atomic nuclei. All commonly observable matter is composed of up quarks, down quarks and electrons. Owing to a phenomenon known as color confinement, quarks are never found in isolation; they can be found only within hadrons, which include baryons (such as protons and neutrons) and mesons, or in quark-gluon plasmas. For this reason, much of what is known about quarks has been drawn from observations of hadrons. Quarks have various intrinsic properties, including electric charge, mass, color charge, and spin. They are the only elementary particles in the Standard Model of particle physics to experience all four fundamental interactions, also known as fundamental forces (electromagnetism, gravitation, strong interaction, and weak interaction), as well as the only known particles whose electric charges are not integer multiples of the elementary charge. There are six types, known as flavors, of quarks: up, down, charm, strange, top, and bottom. Up and down quarks have the lowest masses of all quarks. The heavier quarks rapidly change into up and down quarks through a process of particle decay: the transformation from a higher mass state to a lower mass state. Because of this, up and down quarks are generally stable and the most common in the universe, whereas strange, charm, bottom, and top quarks can only be produced in high energy collisions (such as those involving cosmic rays and in particle accelerators). For every quark flavor there is a corresponding type of antiparticle, known as an antiquark, that differs from the quark only in that some of its properties (such as the electric charge) have equal magnitude but opposite sign. The quark model was independently proposed by physicists Murray Gell-Mann and George Zweig in 1964. Quarks were introduced as parts of an ordering scheme for hadrons, and there was little evidence for their physical existence until deep inelastic scattering experiments at the Stanford Linear Accelerator Center in 1968. Accelerator program experiments have provided evidence for all six flavors. The top quark, first observed at Fermilab in 1995, was the last to be discovered.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Racemate(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a racemic mixture or racemate is one that has equal amounts of left- and right-handed enantiomers of a chiral molecule or salt. Racemic mixtures are rare in nature, but many compounds are produced industrially as racemates.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Racemate";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Radiation(string text)
{
    string model = "llama3";
    string definition = "In physics, radiation is the emission or transmission of energy in the form of waves or particles through space or a material medium. This includes: electromagnetic radiation consisting of photons, such as radio waves, microwaves, infrared, visible light, ultraviolet, x-rays, and gamma radiation. particle radiation consisting of particles of non-zero rest energy, such as alpha radiation (a), beta radiation (b), proton radiation and neutron radiation. acoustic radiation, such as ultrasound, sound, and seismic waves, all dependent on a physical transmission medium. gravitational radiation, in the form of gravitational waves, ripples in spacetime. Radiation is often categorized as either ionizing or non-ionizing depending on the energy of the radiated particles. Ionizing radiation carries more than 10 electron volts (eV), which is enough to ionize atoms and molecules and break chemical bonds. This is an important distinction due to the large difference in harmfulness to living organisms. A common source of ionizing radiation is radioactive materials that emit α, ß, or ? radiation, consisting of helium nuclei, electrons or positrons, and photons, respectively. Other sources include X-rays from medical radiography examinations and muons, mesons, positrons, neutrons and other particles that constitute the secondary cosmic rays that are produced after primary cosmic rays interact with Earth\'s atmosphere. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Radical(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a radical, also known as a free radical, is an atom, molecule, or ion that has at least one unpaired valence electron. With some exceptions, these unpaired electrons make radicals highly chemically reactive. Many radicals spontaneously dimerize. Most organic radicals have short lifetimes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radical";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::RadioactiveDecay(string text)
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

string _Chemistry::Terms::Radiochemistry(string text)
{
    string model = "llama3";
    string definition = "Radiochemistry is the chemistry of radioactive materials, where radioactive isotopes of elements are used to study the properties and chemical reactions of non-radioactive isotopes (often within radiochemistry the absence of radioactivity leads to a substance being described as being inactive as the isotopes are stable). Much of radiochemistry deals with the use of radioactivity to study ordinary chemical reactions. This is very different from radiation chemistry where the radiation levels are kept too low to influence the chemistry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radiochemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Radionuclide(string text)
{
    string model = "llama3";
    string definition = "A radionuclide (radioactive nuclide, radioisotope or radioactive isotope) is a nuclide that has excess numbers of either neutrons or protons, giving it excess nuclear energy, and making it unstable. This excess energy can be used in one of three ways: emitted from the nucleus as gamma radiation; transferred to one of its electrons to release it as a conversion electron; or used to create and emit a new particle (alpha particle or beta particle) from the nucleus. During those processes, the radionuclide is said to undergo radioactive decay. These emissions are considered ionizing radiation because they are energetic enough to liberate an electron from another atom. The radioactive decay can produce a stable nuclide or will sometimes produce a new unstable radionuclide which may undergo further decay. Radioactive decay is a random process at the level of single atoms: it is impossible to predict when one particular atom will decay. However, for a collection of atoms of a single nuclide the decay rate, and thus the half-life (t1/2) for that collection, can be calculated from their measured decay constants. The range of the half-lives of radioactive atoms has no known limits and spans a time range of over 55 orders of magnitude.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::RaoultsLaw(string text)
{
    string model = "llama3";
    string definition = "Raoult\'s law is a relation of physical chemistry, with implications in thermodynamics. Proposed by French chemist François-Marie Raoult in 1887, it states that the partial pressure of each component of an ideal mixture of liquids is equal to the vapor pressure of the pure component (liquid or solid) multiplied by its mole fraction in the mixture. In consequence, the relative lowering of vapor pressure of a dilute solution of nonvolatile solute is equal to the mole fraction of solute in the solution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Raoults Law";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::RareEarthElement(string text)
{
    string model = "llama3";
    string definition = "The rare-earth elements (REE), also called the rare-earth metals or rare earths, and sometimes the lanthanides or lanthanoids (although scandium and yttrium, which do not belong to this series, are usually included as rare earths), are a set of 17 nearly indistinguishable lustrous silvery-white soft heavy metals. Compounds containing rare earths have diverse applications in electrical and electronic components, lasers, glass, magnetic materials, and industrial processes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rare Earth Element";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::RateDeterminingStep(string text)
{
    string model = "llama3";
    string definition = "In chemical kinetics, the overall rate of a reaction is often approximately determined by the slowest step, known as the rate-determining step (RDS or RD-step or r/d step) or rate-limiting step. For a given reaction mechanism, the prediction of the corresponding rate equation (for comparison with the experimental rate law) is often simplified by using this approximation of the rate-determining step. In principle, the time evolution of the reactant and product concentrations can be determined from the set of simultaneous rate equations for the individual steps of the mechanism, one for each step. However, the analytical solution of these differential equations is not always easy, and in some cases numerical integration may even be required. The hypothesis of a single rate-determining step can greatly simplify the mathematics. In the simplest case the initial step is the slowest, and the overall rate is just the rate of the first step. Also, the rate equations for mechanisms with a single rate-determining step are usually in a simple mathematical form, whose relation to the mechanism and choice of rate-determining step is clear. The correct rate-determining step can be identified by predicting the rate law for each possible choice and comparing the different predictions with the experimental law, as for the example of NO2 and CO below. The concept of the rate-determining step is very important to the optimization and understanding of many chemical processes such as catalysis and combustion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rate Determining Step";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Reactant(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a reagent or analytical reagent is a substance or compound added to a system to cause a chemical reaction, or test if one occurs. The terms reactant and reagent are often used interchangeably, but reactant specifies a substance consumed in the course of a chemical reaction. Solvents, though involved in the reaction mechanism, are usually not called reactants. Similarly, catalysts are not consumed by the reaction, so they are not reactants. In biochemistry, especially in connection with enzyme-catalyzed reactions, the reactants are commonly called substrates.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reactant";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ReactionBarrier(string text)
{
    string model = "llama3";
    string definition = "The energy deficit that must be overcome in order for a particular chemical reaction to proceed. In transition state theory, the reaction barrier is interpreted as the difference between the zero-point energy of the activated complex formed in the reaction and that of the initial reactants. See also activation energy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reaction Barrier";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ReactionMechanism(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a reaction mechanism is the step by step sequence of elementary reactions by which overall chemical reaction occurs. A chemical mechanism is a theoretical conjecture that tries to describe in detail what takes place at each stage of an overall chemical reaction. The detailed steps of a reaction are not observable in most cases. The conjectured mechanism is chosen because it is thermodynamically feasible and has experimental support in isolated intermediates (see next section) or other quantitative and qualitative characteristics of the reaction. It also describes each reactive intermediate, activated complex, and transition state, which bonds are broken (and in what order), and which bonds are formed (and in what order). A complete mechanism must also explain the reason for the reactants and catalyst used, the stereochemistry observed in reactants and products, all products formed and the amount of each.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reaction Mechanism";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ReactionRate(string text)
{
    string model = "llama3";
    string definition = "The reaction rate or rate of reaction is the speed at which a chemical reaction takes place, defined as proportional to the increase in the concentration of a product per unit time and to the decrease in the concentration of a reactant per unit time. Reaction rates can vary dramatically. For example, the oxidative rusting of iron under Earth\'s atmosphere is a slow reaction that can take many years, but the combustion of cellulose in a fire is a reaction that takes place in fractions of a second. For most reactions, the rate decreases as the reaction proceeds. A reaction\'s rate can be determined by measuring the changes in concentration over time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reaction Rate";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ReactionRateConstant(string text)
{
    string model = "llama3";
    string definition = "n chemical kinetics, a reaction rate constant or reaction rate coefficient k is a proportionality constant which quantifies the rate and direction of a chemical reaction by relating it with the concentration of reactants.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reaction Rate Constant";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ReactiveBond(string text)
{
    string model = "llama3";
    string definition = "A chemical bond between atoms which, in a particular context, is relatively unstable and therefore easily broken or invaded by other chemical species or radicals; e.g. the double bond in ethylene (CH2=CH2) is highly reactive in the presence of other ethylene molecules, leading to a polymerization reaction that forms polyethylene.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reactive Bond";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ReactiveIntermediate(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a reactive intermediate or an intermediate is a short-lived, high-energy, highly reactive molecule. When generated in a chemical reaction, it will quickly convert into a more stable molecule. Only in exceptional cases can these compounds be isolated and stored, e.g. low temperatures, matrix isolation. When their existence is indicated, reactive intermediates can help explain how a chemical reaction takes place. Most chemical reactions take more than one elementary step to complete, and a reactive intermediate is a high-energy, hence unstable, product that exists only in one of the intermediate steps. The series of steps together make a reaction mechanism. A reactive intermediate differs from a reactant or product or a simple reaction intermediate only in that it cannot usually be isolated but is sometimes observable only through fast spectroscopic methods. It is stable in the sense that an elementary reaction forms the reactive intermediate and the elementary reaction in the next step is needed to destroy it. When a reactive intermediate is not observable, its existence must be inferred through experimentation. This usually involves changing reaction conditions such as temperature or concentration and applying the techniques of chemical kinetics, chemical thermodynamics, or spectroscopy. Reactive intermediates based on carbon are radicals, carbenes, carbocations, carbanions, arynes, and carbynes. Reactive intermediates have several features in common: low concentration with respect to reaction substrate and final reaction product. with the exception of carbanions, these intermediates do not obey the lewis octet rule, hence the high reactivity. often generated on chemical decomposition of a chemical compound. it is often possible to prove the existence of this species by spectroscopic means. cage effects have to be taken into account. often stabilisation by conjugation or resonance. often difficult to distinguish from a transition state. prove existence by means of chemical trapping.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reactive Intermediate";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ReactivitySeries(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a reactivity series (or reactivity series of elements) is an empirical, calculated, and structurally analytical progression of a series of metals, arranged by their \"reactivity\" from highest to lowest. It is used to summarize information about the reactions of metals with acids and water, single displacement reactions and the extraction of metals from their ores.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reactivity Series";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Reagent(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a reagent or analytical reagent is a substance or compound added to a system to cause a chemical reaction, or test if one occurs. The terms reactant and reagent are often used interchangeably, but reactant specifies a substance consumed in the course of a chemical reaction. Solvents, though involved in the reaction mechanism, are usually not called reactants. Similarly, catalysts are not consumed by the reaction, so they are not reactants. In biochemistry, especially in connection with enzyme-catalyzed reactions, the reactants are commonly called substrates.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reagent";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Redox(string text)
{
    string model = "llama3";
    string definition = "Redox, reduction-oxidation or oxidation-reduction) is a type of chemical reaction in which the oxidation states of the reactants change. Oxidation is the loss of electrons or an increase in the oxidation state, while reduction is the gain of electrons or a decrease in the oxidation state. The oxidation and reduction processes occur simultaneously in the chemical reaction. There are two classes of redox reactions: Electron-transfer - Only one (usually) electron flows from the atom, ion, or molecule being oxidized to the atom, ion, or molecule that is reduced. This type of redox reaction is often discussed in terms of redox couples and electrode potentials. Atom transfer - An atom transfers from one substrate to another. For example, in the rusting of iron, the oxidation state of iron atoms increases as the iron converts to an oxide, and simultaneously, the oxidation state of oxygen decreases as it accepts electrons released by the iron. Although oxidation reactions are commonly associated with forming oxides, other chemical species can serve the same function. In hydrogenation, bonds like C=C are reduced by transfer of hydrogen atoms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Redox";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ReducingAgent(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a reducing agent (also known as a reductant, reducer, or electron donor) is a chemical species that \"donates\" an electron to an electron recipient (called the oxidizing agent, oxidant, oxidizer, or electron acceptor). Examples of substances that are common reducing agents include hydrogen, the alkali metals, formic acid, oxalic acid, and sulfite compounds. In their pre-reaction states, reducers have extra electrons (that is, they are by themselves reduced) and oxidizers lack electrons (that is, they are by themselves oxidized). This is commonly expressed in terms of their oxidation states. An agent\'s oxidation state describes its degree of loss of electrons, where the higher the oxidation state then the fewer electrons it has. So initially, prior to the reaction, a reducing agent is typically in one of its lower possible oxidation states; its oxidation state increases during the reaction while that of the oxidizer decreases. Thus in a redox reaction, the agent whose oxidation state increases, that \"loses/donates electrons\", that \"is oxidized\", and that \"reduces\" is called the reducer or reducing agent, while the agent whose oxidation state decreases, that \"gains/accepts/receives electrons\", that \"is reduced\", and that \"oxidizes\" is called the oxidizer or oxidizing agent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reducing Agent";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Reduction(string text)
{
    string model = "llama3";
    string definition = "The decrease in the oxidation state of a chemical species in a redox reaction, generally by gaining electrons. Contrast oxidation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reduction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ReductionPotential(string text)
{
    string model = "llama3";
    string definition = "Redox potential (also known as oxidation / reduction potential, ORP, is a measure of the tendency of a chemical species to acquire electrons from or lose electrons to an electrode and thereby be reduced or oxidised respectively. Redox potential is expressed in volts (V). Each species has its own intrinsic redox potential; for example, the more positive the reduction potential (reduction potential is more often used due to general formalism in electrochemistry), the greater the species\' affinity for electrons and tendency to be reduced.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reduction Potential";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Refractory(string text)
{
    string model = "llama3";
    string definition = "In materials science, a refractory (or refractory material) is a material that is resistant to decomposition by heat or chemical attack and that retains its strength and rigidity at high temperatures. They are inorganic, non-metallic compounds that may be porous or non-porous, and their crystallinity varies widely: they may be crystalline, polycrystalline, amorphous, or composite. They are typically composed of oxides, carbides or nitrides of the following elements: silicon, aluminium, magnesium, calcium, boron, chromium and zirconium. Many refractories are ceramics, but some such as graphite are not, and some ceramics such as clay pottery are not considered refractory. Refractories are distinguished from the refractory metals, which are elemental metals and their alloys that have high melting temperatures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Refractory";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ResonanceChemistry(string text)
{
    string model = "llama3";
    string definition = "In chemistry, resonance, also called mesomerism, is a way of describing bonding in certain molecules or polyatomic ions by the combination of several contributing structures (or forms, also variously known as resonance structures or canonical structures) into a resonance hybrid (or hybrid structure) in valence bond theory. It has particular value for analyzing delocalized electrons where the bonding cannot be expressed by one single Lewis structure. The resonance hybrid is the accurate structure for a molecule or ion; it is an average of the theoretical (or hypothetical) contributing structures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Resonance Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Retort(string text)
{
    string model = "llama3";
    string definition = "In a chemistry laboratory, a retort is a device used for distillation or dry distillation of substances. It consists of a spherical vessel with a long downward-pointing neck. The liquid to be distilled is placed in the vessel and heated. The neck acts as a condenser, allowing the vapors to condense and flow along the neck to a collection vessel placed underneath. In the chemical industry, a retort is an airtight vessel in which substances are heated for a chemical reaction producing gaseous products to be collected in a collection vessel or for further processing. Such industrial-scale retorts are used in shale-oil extraction, in the production of charcoal and in the recovery of mercury in gold-mining processes or from hazardous waste. A process of heating oil shale to produce shale oil, oil shale gas, and spent shale is commonly called retorting. Airtight vessels to apply pressure as well as heat are called autoclaves.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Retort";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ReversibleReaction(string text)
{
    string model = "llama3";
    string definition = "A reversible reaction is a reaction in which the conversion of reactants to products and the conversion of products to reactants occur simultaneously.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reversible Reaction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Rotamer(string text)
{
    string model = "llama3";
    string definition = "In chemistry, conformational isomerism is a form of stereoisomerism in which the isomers can be interconverted just by rotations about formally single bonds (refer to figure on single bond rotation). While any two arrangements of atoms in a molecule that differ by rotation about single bonds can be referred to as different conformations, conformations that correspond to local minima on the potential energy surface are specifically called conformational isomers or conformers. Conformations that correspond to local maxima on the energy surface are the transition states between the local-minimum conformational isomers. Rotations about single bonds involve overcoming a rotational energy barrier to interconvert one conformer to another. If the energy barrier is low, there is free rotation and a sample of the compound exists as a rapidly equilibrating mixture of multiple conformers; if the energy barrier is high enough then there is restricted rotation, a molecule may exist for a relatively long time period as a stable rotational isomer or rotamer (an isomer arising from hindered single-bond rotation). When the time scale for interconversion is long enough for isolation of individual rotamers (usually arbitrarily defined as a half-life of interconversion of 1000 seconds or longer), the isomers are termed atropisomers (see: atropisomerism). The ring-flip of substituted cyclohexanes constitutes another common form of conformational isomerism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rotamer";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::RoundBottomFlask(string text)
{
    string model = "llama3";
    string definition = "Round-bottom flasks (also called round-bottomed flasks or RB flasks) are types of flasks having spherical bottoms used as laboratory glassware, mostly for chemical or biochemical work. They are typically made of glass for chemical inertness; and in modern days, they are usually made of heat-resistant borosilicate glass. There is at least one tubular section known as the neck with an opening at the tip. Two- or three-necked flasks are common as well. Round bottom flasks come in many sizes, from 5 mL to 20 L, with the sizes usually inscribed on the glass. In pilot plants even larger flasks are encountered. The ends of the necks are usually conical ground glass joints. These are standardized, and can accept any similarly-sized tapered (male) fittings. 24/40 is common for 250 mL or larger flasks, while smaller sizes such as 14/20 or 19/22 are used for smaller flasks. Because of the round bottom, cork rings are needed to keep the round bottom flasks upright. When in use, round-bottom flasks are commonly held at the neck by clamps on a stand. A round-bottom flask is featured prominently on the logo of the OPCW, the implementing body for the Chemical Weapons Convention.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Round Bottom Flask";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Rust(string text)
{
    string model = "llama3";
    string definition = "Rust is an iron oxide, a usually reddish-brown oxide formed by the reaction of iron and oxygen in the catalytic presence of water or air moisture. Rust consists of hydrous iron(III) oxides and iron(III) oxide-hydroxide, and is typically associated with the corrosion of refined iron.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rust";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SBlock(string text)
{
    string model = "llama3";
    string definition = "The s-block, with the s standing for \"sharp\" and azimuthal quantum number 0, is on the left side of the conventional periodic table and is composed of elements from the first two columns plus one element in the rightmost column, the nonmetals hydrogen and helium and the alkali metals (in group 1) and alkaline earth metals (group 2). Their general valence configuration is ns1-2. Helium is an s-element, but nearly always finds its place to the far right in group 18, above the p-element neon. Each row of the table has two s-elements. The metals of the s-block (from the second period onwards) are mostly soft and have generally low melting and boiling points. Most impart colour to a flame. Chemically, all s-elements except helium are highly reactive. Metals of the s-block are highly electropositive and often form essentially ionic compounds with nonmetals, especially with the highly electronegative halogen nonmetals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "S Block";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SalineSolution(string text)
{
    string model = "llama3";
    string definition = "Saline (also known as saline solution) is a mixture of sodium chloride (salt) and water. It has a number of uses in medicine including cleaning wounds, removal and storage of contact lenses, and help with dry eyes. By injection into a vein, it is used to treat hypovolemia such as that from gastroenteritis and diabetic ketoacidosis. Large amounts may result in fluid overload, swelling, acidosis, and high blood sodium. In those with long-standing low blood sodium, excessive use may result in osmotic demyelination syndrome.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Saline Solution";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Salt(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a salt or ionic compound is a chemical compound consisting of an assembly of positively charged ions (cations) and negatively charged ions (anions), which results in a compound with no net electric charge (electrically neutral). The constituent ions are held together by electrostatic forces termed ionic bonds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Salt";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SaltBridge(string text)
{
    string model = "llama3";
    string definition = "In electrochemistry, a salt bridge or ion bridge is an essential laboratory device discovered over 100 years ago.  It contains an electrolyte solution, typically an inert solution, used to connect the oxidation and reduction half-cells of a galvanic cell (voltaic cell), a type of electrochemical cell.  In short, it functions as a link connecting the anode and cathode half-cells within an electrochemical cell. It also maintains electrical neutrality within the internal circuit and stabilizes the junction potential between the solutions in the half-cells. Additionally, it serves to minimize cross-contamination between the two half cells. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Salt Bridge";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Saturation(string text)
{
    string model = "llama3";
    string definition = "Saturated and unsaturated compounds, a classification of compounds related to their ability to resist addition reactions: Degree of unsaturation, Saturated fat or saturated fatty acid, Unsaturated fat or unsaturated fatty acid,  Non-susceptibility of an organometallic compound to oxidative addition. Saturation of protein binding sites. Saturation of enzymes with a substrate. Saturation of a solute in a solution, as related to the solute\'s maximum solubility at equilibrium, Supersaturation, where the concentration of a solute exceeds its maximum solubility at equilibrium, Undersaturation, where the concentration of a solute is less than its maximum solubility at equilibrium.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Saturation";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SchrodingerEquation(string text)
{
    string model = "llama3";
    string definition = "a partial differential equation that governs the wave function of a non-relativistic quantum-mechanical system. Its discovery was a significant landmark in the development of quantum mechanics. It is named after Erwin Schrödinger, who postulated the equation in 1925 and published it in 1926, forming the basis for the work that resulted in his Nobel Prize in Physics in 1933. Conceptually, the Schrödinger equation is the quantum counterpart of Newton\'s second law in classical mechanics. Given a set of known initial conditions, Newton\'s second law makes a mathematical prediction as to what path a given physical system will take over time. The Schrödinger equation gives the evolution over time of the wave function, the quantum-mechanical characterization of an isolated physical system. The equation was postulated by Schrödinger based on a postulate of Louis de Broglie that all matter has an associated matter wave. The equation predicted bound states of the atom in agreement with experimental observations. The Schrödinger equation is not the only way to study quantum mechanical systems and make predictions. Other formulations of quantum mechanics include matrix mechanics, introduced by Werner Heisenberg, and the path integral formulation, developed chiefly by Richard Feynman. When these approaches are compared, the use of the Schrödinger equation is sometimes called \"wave mechanics\". The Klein-Gordon equation is a wave equation which is the relativistic version of the Schrödinger equation. The Schrödinger equation is nonrelativistic because it contains a first derivative in time and a second derivative in space, and therefore space & time are not on equal footing.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Semiconductor(string text)
{
    string model = "llama3";
    string definition = "A semiconductor is a material that is between the conductor and insulator in ability to conduct electrical current. In many cases their conducting properties may be altered in useful ways by introducing impurities (\"doping\") into the crystal structure. When two differently doped regions exist in the same crystal, a semiconductor junction is created. The behavior of charge carriers, which include electrons, ions, and electron holes, at these junctions is the basis of diodes, transistors, and most modern electronics. Some examples of semiconductors are silicon, germanium, gallium arsenide, and elements near the so-called \"metalloid staircase\" on the periodic table. After silicon, gallium arsenide is the second-most common semiconductor and is used in laser diodes, solar cells, microwave-frequency integrated circuits, and others. Silicon is a critical element for fabricating most electronic circuits.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Semiconductor";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SerialDilution(string text)
{
    string model = "llama3";
    string definition = "A serial dilution is the step-wise dilution of a substance in solution, either by using a constant dilution factor, or by using a variable factor between dilutions. If the dilution factor at each step is constant, this results in a geometric progression of the concentration in a logarithmic fashion. A ten-fold serial dilution could be 1 M, 0.1 M, 0.01 M, 0.001 M ... Serial dilutions are used to accurately create highly diluted solutions as well as solutions for experiments resulting in concentration curves with a logarithmic scale. A tenfold dilution for each step is called a logarithmic dilution or log-dilution, a 3.16-fold (100.5-fold) dilution is called a half-logarithmic dilution or half-log dilution, and a 1.78-fold (100.25-fold) dilution is called a quarter-logarithmic dilution or quarter-log dilution. Serial dilutions are widely used in experimental sciences, including biochemistry, pharmacology, microbiology, and physics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Serial Dilution";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SideChain(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry and biochemistry, a side chain is a chemical group that is attached to a core part of the molecule called the \"main chain\" or backbone. The side chain is a hydrocarbon branching element of a molecule that is attached to a larger hydrocarbon backbone. It is one factor in determining a molecule\'s properties and reactivity. A side chain is also known as a pendant chain, but a pendant group (side group) has a different definition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Side Chain";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SingleBond(string text)
{
    string model = "llama3";
    string definition = "A bond that involves the sharing of one pair of electrons.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Single Bond";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SkeletalFormula(string text)
{
    string model = "llama3";
    string definition = "The skeletal formula, line-angle formula, bond-line formula or shorthand formula of an organic compound is a type of molecular structural formula that serves as a shorthand representation of a molecule\'s bonding and some details of its molecular geometry. A skeletal formula shows the skeletal structure or skeleton of a molecule, which is composed of the skeletal atoms that make up the molecule. It is represented in two dimensions, as on a piece of paper. It employs certain conventions to represent carbon and hydrogen atoms, which are the most common in organic chemistry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Skeletal Formula";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Sol(string text)
{
    string model = "llama3";
    string definition = "A sol is a colloidal suspension made out of tiny solid particles in a continuous liquid medium. Sols are stable, so that they do not settle down when left undisturbed, and exhibit the Tyndall effect, which is the scattering of light by the particles in the colloid. The size of the particles can vary from 1 nm - 100 nm. Examples include amongst others blood, pigmented ink, cell fluids, paint, antacids and mud. Artificial sols can be prepared by two main methods: dispersion and condensation. In the dispersion method, solid particles are reduced to colloidal dimensions through techniques such as ball milling and Bredig\'s arc method. In the condensation method, small particles are formed from larger molecules through a chemical reaction. The stability of sols can be maintained through the use of dispersing agents, which prevent the particles from clumping together or settling out of the suspension. Sols are often used in the sol-gel process, in which a sol is converted into a gel through the addition of a crosslinking agent. In a sol, solid particles are dispersed in a liquid continuous phase, while in an emulsion, liquid droplets are dispersed in a liquid or semi-solid continuous phase.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sol";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Solid(string text)
{
    string model = "llama3";
    string definition = "Solid is one of the four fundamental states of matter along with liquid, gas, and plasma. The molecules in a solid are closely packed together and contain the least amount of kinetic energy. A solid is characterized by structural rigidity (as in rigid bodies) and resistance to a force applied to the surface. Unlike a liquid, a solid object does not flow to take on the shape of its container, nor does it expand to fill the entire available volume like a gas. The atoms in a solid are bound to each other, either in a regular geometric lattice (crystalline solids, which include metals and ordinary ice), or irregularly (an amorphous solid such as common window glass). Solids cannot be compressed with little pressure whereas gases can be compressed with little pressure because the molecules in a gas are loosely packed. The branch of physics that deals with solids is called solid-state physics, and is the main branch of condensed matter physics (which also includes liquids). Materials science is primarily concerned with the physical and chemical properties of solids. Solid-state chemistry is especially concerned with the synthesis of novel materials, as well as the science of identification and chemical composition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::SolidPhaseExtraction(string text)
{
    string model = "llama3";
    string definition = "Solid-phase extraction (SPE) is a solid-liquid extractive technique, by which compounds that are dissolved or suspended in a liquid mixture are separated, isolated or purified, from other compounds in this mixture, according to their physical and chemical properties. Analytical laboratories use solid phase extraction to concentrate and purify samples for analysis. Solid phase extraction can be used to isolate analytes of interest from a wide variety of matrices, including urine, blood, water, beverages, soil, and animal tissue. SPE uses the affinity of solutes, dissolved or suspended in a liquid (known as the mobile phase), to a solid packing inside a small column, through which the sample is passed (known as the stationary phase), to separate a mixture into desired and undesired components. The result is that either the desired analytes of interest or undesired impurities in the sample are retained on the stationary phase. The portion that passes through the stationary phase is collected or discarded, depending on whether it contains the desired analytes or undesired impurities. If the portion retained on the stationary phase includes the desired analytes, they can then be removed from the stationary phase for collection in an additional step, in which the stationary phase is rinsed with an appropriate eluent. It is possible to have an incomplete recovery of the analytes by SPE caused by incomplete extraction or elution. In the case of an incomplete extraction, the analytes do not have enough affinity for the stationary phase and part of them will remain in the permeate. In an incomplete elution, part of the analytes remain in the sorbent because the eluent used does not have a strong enough affinity. Many of the adsorbents/materials are the same as in chromatographic methods, but SPE is distinctive, with aims separate from chromatography, and so has a unique niche in modern chemical science.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Solid Phase Extraction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SolubilityProduct(string text)
{
    string model = "llama3";
    string definition = "Solubility equilibrium is a type of dynamic equilibrium that exists when a chemical compound in the solid state is in chemical equilibrium with a solution of that compound. The solid may dissolve unchanged, with dissociation, or with chemical reaction with another constituent of the solution, such as acid or alkali. Each solubility equilibrium is characterized by a temperature-dependent solubility product which functions like an equilibrium constant. Solubility equilibria are important in pharmaceutical, environmental and many other scenarios.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Solubility Product";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SolutionChemistry(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a solution is defined by IUPAC as \"A liquid or solid phase containing more than one substance, when for convenience one (or more) substance, which is called the solvent, is treated differently from the other substances, which are called solutes. When, as is often but not necessarily the case, the sum of the mole fractions of solutes is small compared with unity, the solution is called a dilute solution. A superscript attached to the ∞ symbol for a property of a solution denotes the property in the limit of infinite dilution.\" One important parameter of a solution is the concentration, which is a measure of the amount of solute in a given amount of solution or solvent. The term \"aqueous solution\" is used when one of the solvents is water.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Solution Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SolvatedElectron(string text)
{
    string model = "llama3";
    string definition = "A solvated electron is a free electron in a solution, in which it behaves like an anion. An electron\'s being solvated in a solution means it is bound by the solution. The notation for a solvated electron in formulas of chemical reactions is \"e-\". Often, discussions of solvated electrons focus on their solutions in ammonia, which are stable for days, but solvated electrons also occur in water and many other solvents - in fact, in any solvent that mediates outer-sphere electron transfer. The solvated electron is responsible for a great deal of radiation chemistry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Solvated Electron";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SolvationShell(string text)
{
    string model = "llama3";
    string definition = "A solvation shell or solvation sheath is the solvent interface of any chemical compound or biomolecule that constitutes the solute in a solution. When the solvent is water it is called a hydration shell or hydration sphere. The number of solvent molecules surrounding each unit of solute is called the hydration number of the solute. A classic example is when water molecules arrange around a metal ion. If the metal ion is a cation, the electronegative oxygen atom of the water molecule would be attracted electrostatically to the positive charge on the metal ion. The result is a solvation shell of water molecules that surround the ion. This shell can be several molecules thick, dependent upon the charge of the ion, its distribution and spatial dimensions. A number of molecules of solvent are involved in the solvation shell around anions and cations from a dissolved salt in a solvent. Metal ions in aqueous solutions form metal aquo complexes. This number can be determined by various methods like compressibility and NMR measurements among others.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Solvation Shell";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Solvent(string text)
{
    string model = "llama3";
    string definition = "A solvent (from the Latin solvo, \"loosen, untie, solve\") is a substance that dissolves a solute, resulting in a solution. A solvent is usually a liquid but can also be a solid, a gas, or a supercritical fluid. Water is a solvent for polar molecules, and the most common solvent used by living things; all the ions and proteins in a cell are dissolved in water within the cell. Major uses of solvents are in paints, paint removers, inks, and dry cleaning. Specific uses for organic solvents are in dry cleaning (e.g. tetrachloroethylene); as paint thinners (toluene, turpentine); as nail polish removers and solvents of glue (acetone, methyl acetate, ethyl acetate); in spot removers (hexane, petrol ether); in detergents (citrus terpenes); and in perfumes (ethanol). Solvents find various applications in chemical, pharmaceutical, oil, and gas industries, including in chemical syntheses and purification processes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Solvent";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Sonication(string text)
{
    string model = "llama3";
    string definition = "Sonication is the act of applying sound energy to agitate particles in a sample, for various purposes such as the extraction of multiple compounds from plants, microalgae and seaweeds. Ultrasonic frequencies (> 20 kHz) are usually used, leading to the process also being known as ultrasonication or ultra-sonication. In the laboratory, it is usually applied using an ultrasonic bath or an ultrasonic probe, colloquially known as a sonicator. In a paper machine, an ultrasonic foil can distribute cellulose fibres more uniformly and strengthen the paper.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sonication";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SpatialIsomer(string text)
{
    string model = "llama3";
    string definition = "In stereochemistry, stereoisomerism, or spatial isomerism, is a form of isomerism in which molecules have the same molecular formula and sequence of bonded atoms (constitution), but differ in the three-dimensional orientations of their atoms in space. This contrasts with structural isomers, which share the same molecular formula, but the bond connections or their order differs. By definition, molecules that are stereoisomers of each other represent the same structural isomer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Spatial Isomer";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SpecificHeatCapacity(string text)
{
    string model = "llama3";
    string definition = "In thermodynamics, the specific heat capacity (symbol c) of a substance is the amount of heat that must be added to one unit of mass of the substance in order to cause an increase of one unit in temperature. It is also referred to as massic heat capacity or as the specific heat. More formally it is the heat capacity of a sample of the substance divided by the mass of the sample. The SI unit of specific heat capacity is joule per kelvin per kilogram. For example, the heat required to raise the temperature of 1 kg of water by 1 K is 4184 joules, so the specific heat capacity of water is 4184 J*kg^-1*K^-1.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Specific Heat Capacity";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Spectrochemistry(string text)
{
    string model = "llama3";
    string definition = "Spectrochemistry is the application of spectroscopy in several fields of chemistry. It includes analysis of spectra in chemical terms, and use of spectra to derive the structure of chemical compounds, and also to qualitatively and quantitively analyze their presence in the sample. It is a method of chemical analysis that relies on the measurement of wavelengths and intensity of electromagnetic radiation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Spectrochemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Spectroscopy(string text)
{
    string model = "llama3";
    string definition = "Spectroscopy is the field of study that measures and interprets electromagnetic spectrum. In narrower contexts, spectroscopy is the precise study of color as generalized from visible light to all bands of the electromagnetic spectrum. Spectroscopy, primarily in the electromagnetic spectrum, is a fundamental exploratory tool in the fields of astronomy, chemistry, materials science, and physics, allowing the composition, physical structure and electronic structure of matter to be investigated at the atomic, molecular and macro scale, and over astronomical distances. Historically, spectroscopy originated as the study of the wavelength dependence of the absorption by gas phase matter of visible light dispersed by a prism. Current applications of spectroscopy include biomedical spectroscopy in the areas of tissue analysis and medical imaging. Matter waves and acoustic waves can also be considered forms of radiative energy, and recently gravitational waves have been associated with a spectral signature in the context of the Laser Interferometer Gravitational-Wave Observatory (LIGO).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Spectroscopy";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::StandardSolution(string text)
{
    string model = "llama3";
    string definition = "In analytical chemistry, a standard solution (titrant or titrator) is a solution containing an accurately known concentration. Standard solutions are generally prepared by dissolving a solute of known mass into a solvent to a precise volume, or by diluting a solution of known concentration with more solvent. A standard solution ideally has a high degree of purity and is stable enough that the concentration can be accurately measured after a long shelf time. Making a standard solution requires great attention to detail to avoid introducing any risk of contamination that could diminish the accuracy of the concentration. For this reason, glassware with high degree of precision such as a volumetric flask, volumetric pipette, micropipettes, and automatic pipettes are used in the preparation steps. The solvent used must also be pure and readily able to dissolve the solute into a homogenous solution. Standard solutions are used for various volumetric procedures, such as determining the concentration of solutions with an unknown concentration in titrations. The concentrations of standard solutions are normally expressed in units of moles per litre (mol/L, often abbreviated to M for molarity), moles per cubic decimetre (mol/dm3), kilomoles per cubic metre (kmol/m3), grams per milliliters (g/mL), or in terms related to those used in particular titrations (such as titres).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Standard Solution";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::StandardConditionsOfTemperatureAndPressure(string text)
{
    string model = "llama3";
    string definition = "Standard temperature and pressure (STP) or standard conditions for temperature and pressure are various standard sets of conditions for experimental measurements used to allow comparisons to be made between different sets of data. The most used standards are those of the International Union of Pure and Applied Chemistry (IUPAC) and the National Institute of Standards and Technology (NIST), although these are not universally accepted. Other organizations have established a variety of other definitions. In industry and commerce, the standard conditions for temperature and pressure are often necessary for expressing the volumes of gases and liquids and related quantities such as the rate of volumetric flow (the volumes of gases vary significantly with temperature and pressure): standard cubic meters per second (Sm3/s), and normal cubic meters per second (Nm^3/s).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Standard Conditions Of Temperature And Pressure";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::StateOfMatter(string text)
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

string _Chemistry::Terms::StepwiseReaction(string text)
{
    string model = "llama3";
    string definition = "A chemical reaction is a process that leads to the chemical transformation of one set of chemical substances to another. When chemical reactions occur, the atoms are rearranged and the reaction is accompanied by an energy change as new products are generated. Classically, chemical reactions encompass changes that only involve the positions of electrons in the forming and breaking of chemical bonds between atoms, with no change to the nuclei (no change to the elements present), and can often be described by a chemical equation. Nuclear chemistry is a sub-discipline of chemistry that involves the chemical reactions of unstable and radioactive elements where both electronic and nuclear changes can occur.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stepwise Reaction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Stereochemistry(string text)
{
    string model = "llama3";
    string definition = "Stereochemistry, a subdiscipline of chemistry, studies the spatial arrangement of atoms that forms the structure of molecules and their manipulation. The study of stereochemistry focuses on the relationships between stereoisomers, which by definition have the same molecular formula and sequence of bonded atoms (constitution), but differ in the geometric positioning of the atoms in space. For this reason, it is also known as 3D chemistry-the prefix \"stereo-\" means \"three-dimensionality\". Stereochemistry spans the entire spectrum of organic, inorganic, biological, physical and especially supramolecular chemistry. Stereochemistry includes methods for determining and describing these relationships; the effect on the physical or biological properties these relationships impart upon the molecules in question, and the manner in which these relationships influence the reactivity of the molecules in question (dynamic stereochemistry).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stereochemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::StereogenicCenter(string text)
{
    string model = "llama3";
    string definition = "In stereochemistry, a stereocenter of a molecule is an atom (center), axis or plane that is the focus of stereoisomerism; that is, when having at least three different groups bound to the stereocenter, interchanging any two different groups creates a new stereoisomer. Stereocenters are also referred to as stereogenic centers. A stereocenter is geometrically defined as a point (location) in a molecule; a stereocenter is usually but not always a specific atom, often carbon. Stereocenters can exist on chiral or achiral molecules; stereocenters can contain single bonds or double bonds. The number of hypothetical stereoisomers can be predicted by using 2^n, with n being the number of tetrahedral stereocenters; however, exceptions such as meso compounds can reduce the prediction to below the expected 2^n. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stereogenic Center";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Stoichiometry(string text)
{
    string model = "llama3";
    string definition = "the relationships among the weights of reactants and products before, during, and following chemical reactions. Stoichiometry is founded on the law of conservation of mass where the total mass of the reactants equals the total mass of the products, leading to the insight that the relations among quantities of reactants and products typically form a ratio of positive integers. This means that if the amounts of the separate reactants are known, then the amount of the product can be calculated. Conversely, if one reactant has a known quantity and the quantity of the products can be empirically determined, then the amount of the other reactants can also be calculated.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::StrongAcid(string text)
{
    string model = "llama3";
    string definition = "A strong acid is an acid that dissociates according to the reaction HA + S <-> SH+ + A-. where S represents a solvent molecule, such as a molecule of water or dimethyl sulfoxide (DMSO), to such an extent that the concentration of the undissociated species HA is too low to be measured. For practical purposes a strong acid can be said to be completely dissociated. An example of a strong acid is perchloric acid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Strong Acid";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::StructuralFormula(string text)
{
    string model = "llama3";
    string definition = "The structural formula of a chemical compound is a graphic representation of the molecular structure (determined by structural chemistry methods), showing how the atoms are possibly arranged in the real three-dimensional space. The chemical bonding within the molecule is also shown, either explicitly or implicitly. Unlike other chemical formula types, which have a limited number of symbols and are capable of only limited descriptive power, structural formulas provide a more complete geometric representation of the molecular structure. For example, many chemical compounds exist in different isomeric forms, which have different enantiomeric structures but the same molecular formula. There are multiple types of ways to draw these structural formulas such as: Lewis structures, condensed formulas, skeletal formulas, Newman projections, Cyclohexane conformations, Haworth projections, and Fischer projections.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Structural Formula";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::StrongBase(string text)
{
    string model = "llama3";
    string definition = "A strong base is a basic chemical compound that can remove a proton (H+) from (or deprotonate) a molecule of even a very weak acid (such as water) in an acid-base reaction. Common examples of strong bases include hydroxides of alkali metals and alkaline earth metals, like NaOH and Ca(A strong base is a basic chemical compound that can remove a proton (H+) from (or deprotonate) a molecule of even a very weak acid (such as water) in an acid-base reaction. Common examples of strong bases include hydroxides of alkali metals and alkaline earth metals, like NaOH and Ca(OH2), respectively. Due to their low solubility, some bases, such as alkaline earth hydroxides, can be used when the solubility factor is not taken into account.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Strong Base";
        }
    }

    return nullptr;
}

//string _Chemistry::Terms::StructuralFormula(string text)
//{
//    string model = "llama3";
//    string definition = "The structural formula of a chemical compound is a graphic representation of the molecular structure (determined by structural chemistry methods), showing how the atoms are possibly arranged in the real three-dimensional space. The chemical bonding within the molecule is also shown, either explicitly or implicitly. Unlike other chemical formula types, which have a limited number of symbols and are capable of only limited descriptive power, structural formulas provide a more complete geometric representation of the molecular structure. For example, many chemical compounds exist in different isomeric forms, which have different enantiomeric structures but the same molecular formula. There are multiple types of ways to draw these structural formulas such as: Lewis structures, condensed formulas, skeletal formulas, Newman projections, Cyclohexane conformations, Haworth projections, and Fischer projections.";
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
//            return "Structural Formula";
//        }
//    }
//
//    return nullptr;
//}

string _Chemistry::Terms::StructuralIsomer(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a structural isomer (or constitutional isomer in the IUPAC nomenclature) of a compound is another compound whose molecule has the same number of atoms of each element, but with logically distinct bonds between them. The term metamer was formerly used for the same concept.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Structural Isomer";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SubatomicParticle(string text)
{
    string model = "llama3";
    string definition = "In physics, a subatomic particle is a particle smaller than an atom. According to the Standard Model of particle physics, a subatomic particle can be either a composite particle, which is composed of other particles (for example, a baryon, like a proton or a neutron, composed of three quarks; or a meson, composed of two quarks), or an elementary particle, which is not composed of other particles (for example, quarks; or electrons, muons, and tau particles, which are called leptons). Particle physics and nuclear physics study these particles and how they interact. Most force-carrying particles like photons or gluons are called bosons and, although they have quanta of energy, do not have rest mass or discrete diameters (other than pure energy wavelength) and are unlike the former particles that have rest mass and cannot overlap or combine which are called fermions. The W and Z bosons, however, are an exception to this rule and have relatively large rest masses at approximately 80 GeV and 90 GeV respectively. Experiments show that light could behave like a stream of particles (called photons) as well as exhibiting wave-like properties. This led to the concept of wave-particle duality to reflect that quantum-scale particles behave both like particles and like waves; they are sometimes called wavicles to reflect this.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Sublimation(string text)
{
    string model = "llama3";
    string definition = "Sublimation is the transition of a substance directly from the solid to the gas state, without passing through the liquid state. The verb form of sublimation is sublime, or less preferably, sublimate. Sublimate also refers to the product obtained by sublimation. The point at which sublimation occurs rapidly (for further details, see below) is called critical sublimation point, or simply sublimation point. Notable examples include sublimation of dry ice at room temperature and atmospheric pressure, and that of solid iodine with heating. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Substituent(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, a substituent is one or a group of atoms that replaces (one or more) atoms, thereby becoming a moiety in the resultant (new) molecule. (In organic chemistry and biochemistry, the terms substituent and functional group, as well as side chain and pendant group, are used almost interchangeably to describe those branches from the parent structure, though certain distinctions are made in polymer chemistry. In polymers, side chains extend from the backbone structure. In proteins, side chains are attached to the alpha carbon atoms of the amino acid backbone.)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Substituent";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SubstitutionReaction(string text)
{
    string model = "llama3";
    string definition = "A substitution reaction (also known as single displacement reaction or single substitution reaction) is a chemical reaction during which one functional group in a chemical compound is replaced by another functional group. Substitution reactions are of prime importance in organic chemistry. Substitution reactions in organic chemistry are classified either as electrophilic or nucleophilic depending upon the reagent involved, whether a reactive intermediate involved in the reaction is a carbocation, a carbanion or a free radical, and whether the substrate is aliphatic or aromatic. Detailed understanding of a reaction type helps to predict the product outcome in a reaction. It also is helpful for optimizing a reaction with regard to variables such as temperature and choice of solvent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Substitution Reaction";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SurfaceScience(string text)
{
    string model = "llama3";
    string definition = "Surface science is the study of physical and chemical phenomena that occur at the interface of two phases, including solid-liquid interfaces, solid-gas interfaces, solid-vacuum interfaces, and liquid-gas interfaces. It includes the fields of surface chemistry and surface physics. Some related practical applications are classed as surface engineering. The science encompasses concepts such as heterogeneous catalysis, semiconductor device fabrication, fuel cells, self-assembled monolayers, and adhesives. Surface science is closely related to interface and colloid science. Interfacial chemistry and physics are common subjects for both. The methods are different. In addition, interface and colloid science studies macroscopic phenomena that occur in heterogeneous systems due to peculiarities of interfaces.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Surface Science";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SurfaceTension(string text)
{
    string model = "llama3";
    string definition = "Surface tension is the tendency of liquid surfaces at rest to shrink into the minimum surface area possible. Surface tension is what allows objects with a higher density than water such as razor blades and insects (e.g. water striders) to float on a water surface without becoming even partly submerged. At liquid-air interfaces, surface tension results from the greater attraction of liquid molecules to each other (due to cohesion) than to the molecules in the air (due to adhesion). There are two primary mechanisms in play. One is an inward force on the surface molecules causing the liquid to contract. Second is a tangential force parallel to the surface of the liquid. This tangential force is generally referred to as the surface tension. The net effect is the liquid behaves as if its surface were covered with a stretched elastic membrane. But this analogy must not be taken too far as the tension in an elastic membrane is dependent on the amount of deformation of the membrane while surface tension is an inherent property of the liquid-air or liquid-vapour interface.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Surfactant(string text)
{
    string model = "llama3";
    string definition = "Surfactants are chemical compounds that decrease the surface tension or interfacial tension between two liquids, a liquid and a gas, or a liquid and a solid. The word \"surfactant\" is a blend of surface-active agent, coined in 1950 . As they consist of a water-repellent and a water-attracting part, they enable water and oil to mix; they can form foam and facilitate the detachment of dirt. Surfactants are among the most widespread and commercially important chemicals. Private households as well as many industries use them in large quantities as detergents and cleaning agents, but also for example as emulsifiers, wetting agents, foaming agents, antistatic additives, or dispersants. Surfactants occur naturally in traditional plant-based detergents, e.g. horse chestnuts or soap nuts; they can also be found in the secretions of some caterpillars. Today one of the most commonly used anionic surfactants, linear alkylbenzene sulfates (LAS), are produced from petroleum products. However, surfactants are increasingly produced in whole or in part from renewable biomass, like sugar, fatty alcohol from vegetable oils, by-products of biofuel production, or other biogenic material.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Surfactant";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::SuspensionChemistry(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a suspension is a heterogeneous mixture of a fluid that contains solid particles sufficiently large for sedimentation. The particles may be visible to the naked eye, usually must be larger than one micrometer, and will eventually settle, although the mixture is only classified as a suspension when and while the particles have not settled out.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Suspension Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Tarnish(string text)
{
    string model = "llama3";
    string definition = "Tarnish is a thin layer of corrosion that forms over copper, brass, aluminum, magnesium, neodymium and other similar metals as their outermost layer undergoes a chemical reaction. Tarnish does not always result from the sole effects of oxygen in the air. For example, silver needs hydrogen sulfide to tarnish, although it may tarnish with oxygen over time. It often appears as a dull, gray or black film or coating over metal. Tarnish is a surface phenomenon that is self-limiting, unlike rust. Only the top few layers of the metal react. The layer of tarnish seals and protects the underlying layers from reacting.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tarnish";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Temperature(string text)
{
    string model = "llama3";
    string definition = "Temperature is a physical quantity that quantitatively expresses the attribute of hotness or coldness. Temperature is measured with a thermometer. It reflects the average kinetic energy of the vibrating and colliding atoms making up a substance. Thermometers are calibrated in various temperature scales that historically have relied on various reference points and thermometric substances for definition. The most common scales are the Celsius scale with the unit symbol C (formerly called centigrade), the Fahrenheit scale (F), and the Kelvin scale (K), with the third being used predominantly for scientific purposes. The kelvin is one of the seven base units in the International System of Units (SI).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::TernaryCompound(string text)
{
    string model = "llama3";
    string definition = "In inorganic chemistry and materials chemistry, a ternary compound or ternary phase is a chemical compound containing three different elements. While some ternary compounds are molecular, e.g. chloroform (HCCl3), more typically ternary phases refer to extended solids. Famous example are the perovskites. Binary phases, with only two elements, have lower degrees of complexity than ternary phases. With four elements, quaternary phases are more complex. The number of isomers of a ternary compound provide a distinction between inorganic and organic chemistry: \"In inorganic chemistry one or, at most, only a few compounds composed of any two or three elements were known, whereas in organic chemistry the situation was very different.\"";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ternary Compound";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Terpene(string text)
{
    string model = "llama3";
    string definition = "Terpenes are a class of natural products consisting of compounds with the formula (C5H8)n for n >= 2. Terpenes are major biosynthetic building blocks. Comprising more than 30,000 compounds, these unsaturated hydrocarbons are produced predominantly by plants, particularly conifers. In plants, terpenes and terpenoids are important mediators of ecological interactions, while some insects use some terpenes as a form of defense. Other functions of terpenoids include cell growth modulation and plant elongation, light harvesting and photoprotection, and membrane permeability and fluidity control. Terpenes are classified by the number of carbons: monoterpenes (C10), sesquiterpenes (C15), diterpenes (C20), as examples. The terpene alpha-pinene is a major component of the common solvent, turpentine. The one terpene that has major applications is natural rubber (i.e., polyisoprene). The possibility that other terpenes could be used as precursors to produce synthetic polymers has been investigated. Many terpenes have been shown to have pharmacological effects. Terpenes are also components of some traditional medicines, such as aromatherapy, and as active ingredients of pesticides in agriculture.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Terpene";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ThermalConductivityAndResistivity(string text)
{
    string model = "llama3";
    string definition = "The thermal conductivity of a material is a measure of its ability to conduct heat. It is commonly denoted by. Heat transfer occurs at a lower rate in materials of low thermal conductivity than in materials of high thermal conductivity. For instance, metals typically have high thermal conductivity and are very efficient at conducting heat, while the opposite is true for insulating materials such as mineral wool or Styrofoam. Correspondingly, materials of high thermal conductivity are widely used in heat sink applications, and materials of low thermal conductivity are used as thermal insulation. The reciprocal of thermal conductivity is called thermal resistivity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Thermal Conductivity";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Thermochemistry(string text)
{
    string model = "llama3";
    string definition = "Thermochemistry is the study of the heat energy which is associated with chemical reactions and/or phase changes such as melting and boiling. A reaction may release or absorb energy, and a phase change may do the same. Thermochemistry focuses on the energy exchange between a system and its surroundings in the form of heat. Thermochemistry is useful in predicting reactant and product quantities throughout the course of a given reaction. In combination with entropy determinations, it is also used to predict whether a reaction is spontaneous or non-spontaneous, favorable or unfavorable. Endothermic reactions absorb heat, while exothermic reactions release heat. Thermochemistry coalesces the concepts of thermodynamics with the concept of energy in the form of chemical bonds. The subject commonly includes calculations of such quantities as heat capacity, heat of combustion, heat of formation, enthalpy, entropy, and free energy. Thermochemistry is one part of the broader field of chemical thermodynamics, which deals with the exchange of all forms of energy between system and surroundings, including not only heat but also various forms of work, as well the exchange of matter. When all forms of energy are considered, the concepts of exothermic and endothermic reactions are generalized to exergonic reactions and endergonic reactions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Thermochemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ThermodynamicStability(string text)
{
    string model = "llama3";
    string definition = "In chemistry, chemical stability is the thermodynamic stability of a chemical system, in particular a chemical compound or a polymer. Thermodynamic stability occurs when a system is in its lowest energy state, or in chemical equilibrium with its environment. This may be a dynamic equilibrium in which individual atoms or molecules change form, but their overall number in a particular form is conserved. This type of chemical thermodynamic equilibrium will persist indefinitely unless the system is changed. Chemical systems might undergo changes in the phase of matter or a set of chemical reactions. State A is said to be more thermodynamically stable than state B if the Gibbs free energy of the change from A to B is positive.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Thermodynamic Stability";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Thermodynamics(string text)
{
    string model = "llama3";
    string definition = "Thermodynamics is the branch of physics that studies heat, work, and temperature and their relation to energy, entropy, and the physical properties of matter and radiation. The behavior of these quantities is governed by the four laws of thermodynamics, which convey a quantitative description using measurable macroscopic physical quantities, but may be explained in terms of microscopic constituents by statistical mechanics. Thermodynamics plays a role in a wide variety of topics in science and engineering.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Thiol(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, a thiol or thiol derivative, is any organosulfur compound of the form R-SH, where R represents an alkyl or other organic substituent. The -SH functional group itself is referred to as either a thiol group or a sulfhydryl group, or a sulfanyl group. Thiols are the sulfur analogue of alcohols (that is, sulfur takes the place of oxygen in the hydroxyl (-OH) group of an alcohol), and the word is a blend of \"thio-\" with \"alcohol\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Thiol";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Titration(string text)
{
    string model = "llama3";
    string definition = "Titration (also known as titrimetry and volumetric analysis) is a common laboratory method of quantitative chemical analysis to determine the concentration of an identified analyte (a substance to be analyzed). A reagent, termed the titrant or titrator, is prepared as a standard solution of known concentration and volume. The titrant reacts with a solution of analyte (which may also be termed the titrand) to determine the analyte\'s concentration. The volume of titrant that reacted with the analyte is termed the titration volume.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Titration";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Torr(string text)
{
    string model = "llama3";
    string definition = "The torr (symbol: Torr) is a unit of pressure based on an absolute scale, defined as exactly 1/760 of a standard atmosphere (101325 Pa).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Torr";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::TraceElement(string text)
{
    string model = "llama3";
    string definition = "A trace element is a chemical element of a minute quantity, a trace amount, especially used in referring to a micronutrient, but is also used to refer to minor elements in the composition of a rock, or other chemical substance. In nutrition, trace elements are classified into two groups: essential trace elements, and non-essential trace elements. Essential trace elements are needed for many physiological and biochemical processes in both plants and animals. Not only do trace elements play a role in biological processes but they also serve as catalysts to engage in redox - oxidation and reduction mechanisms. Trace elements of some heavy metals have a biological role as essential micronutrients.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Trace Element";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Transactinides(string text)
{
    string model = "llama3";
    string definition = "Superheavy elements, also known as transactinide elements, transactinides, or super-heavy elements, or superheavies for short, are the chemical elements with atomic number greater than 104. The superheavy elements are those beyond the actinides in the periodic table; the last actinide is lawrencium (atomic number 103). By definition, superheavy elements are also transuranium elements, i.e., having atomic numbers greater than that of uranium (92). Depending on the definition of group 3 adopted by authors, lawrencium may also be included to complete the 6d series.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transactinides";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::TransitionMetal(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a transition metal (or transition element) is a chemical element in the d-block of the periodic table (groups 3 to 12), though the elements of group 12 (and less often group 3) are sometimes excluded. The lanthanide and actinide elements (the f-block) are called inner transition metals and are sometimes considered to be transition metals as well. Since they are metals, they are lustrous and have good electrical and thermal conductivity. Most (with the exception of group 11 and group 12) are hard and strong, and have high melting and boiling temperatures. They form compounds in any of two or more different oxidation states and bind to a variety of ligands to form coordination complexes that are often coloured. They form many useful alloys and are often employed as catalysts in elemental form or in compounds such as coordination complexes and oxides. Most are strongly paramagnetic because of their unpaired d electrons, as are many of their compounds. All of the elements that are ferromagnetic near room temperature are transition metals (iron, cobalt and nickel) or inner transition metals (gadolinium).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transition Metal";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::TransuranicElements(string text)
{
    string model = "llama3";
    string definition = "The transuranium (or transuranic) elements are the chemical elements with atomic number greater than 92, which is the atomic number of uranium. All of them are radioactively unstable and decay into other elements. Except for neptunium and plutonium which have been found in trace amounts in nature, none occur naturally on Earth and they are synthetic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transuranic Elements";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::TripleBond(string text)
{
    string model = "llama3";
    string definition = "In chemistry, bond order is a formal measure of the multiplicity of a covalent bond between two atoms. As introduced by Linus Pauling, bond order is defined as the difference between the numbers of electron pairs in bonding and antibonding molecular orbitals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Triple Bond";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::TriplePoint(string text)
{
    string model = "llama3";
    string definition = "In thermodynamics, the triple point of a substance is the temperature and pressure at which the three phases (gas, liquid, and solid) of that substance coexist in thermodynamic equilibrium. It is that temperature and pressure at which the sublimation, fusion, and vaporisation curves meet. For example, the triple point of mercury occurs at a temperature of -38.8C (-37.8F) and a pressure of 0.165 mPa.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::TyndallEffect(string text)
{
    string model = "llama3";
    string definition = "The Tyndall effect is light scattering by particles in a colloid such as a very fine suspension (a sol). Also known as Tyndall scattering, it is similar to Rayleigh scattering, in that the intensity of the scattered light is inversely proportional to the fourth power of the wavelength, so blue light is scattered much more strongly than red light. An example in everyday life is the blue colour sometimes seen in the smoke emitted by motorcycles, in particular two-stroke machines where the burnt engine oil provides these particles. The same effect can also be observed with tobacco smoke whose fine particles also preferentially scatter blue light.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tyndall Effect";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Uncertainty(string text)
{
    string model = "llama3";
    string definition = "Uncertainty or incertitude refers to epistemic situations involving imperfect or unknown information. It applies to predictions of future events, to physical measurements that are already made, or to the unknown. Uncertainty arises in partially observable or stochastic environments, as well as due to ignorance, indolence, or both. It arises in any number of fields, including insurance, philosophy, physics, statistics, economics, finance, medicine, psychology, sociology, engineering, metrology, meteorology, ecology and information science.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Uncertainty";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::UncertaintyPrinciple(string text)
{
    string model = "llama3";
    string definition = "The uncertainty principle, also known as Heisenberg\'s indeterminacy principle, is a fundamental concept in quantum mechanics. It states that there is a limit to the precision with which certain pairs of physical properties, such as position and momentum, can be simultaneously known. In other words, the more accurately one property is measured, the less accurately the other property can be known. More formally, the uncertainty principle is any of a variety of mathematical inequalities asserting a fundamental limit to the product of the accuracy of certain related pairs of measurements on a quantum system, such as position, x, and momentum, p. Such paired-variables are known as complementary variables or canonically conjugate variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::ConversionOfUnits(string text)
{
    string model = "llama3";
    string definition = "Conversion of units is the conversion of the unit of measurement in which a quantity is expressed, typically through a multiplicative conversion factor that changes the unit without changing the quantity. This is also often loosely taken to include replacement of a quantity with a corresponding quantity that describes the same physical property. Unit conversion is often easier within a metric system such as the SI than in others, due to the system\'s coherence and its metric prefixes that act as power-of-10 multipliers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conversion Of Units";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::UnitFactor(string text)
{
    string model = "llama3";
    string definition = "The factor-label method, also known as the unit-factor method or the unity bracket method, is a widely used technique for unit conversions that uses the rules of algebra.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Unit Factor";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::UnpairedElectron(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an unpaired electron is an electron that occupies an orbital of an atom singly, rather than as part of an electron pair. Each atomic orbital of an atom (specified by the three quantum numbers n, l and m) has a capacity to contain two electrons (electron pair) with opposite spins. As the formation of electron pairs is often energetically favourable, either in the form of a chemical bond or as a lone pair, unpaired electrons are relatively uncommon in chemistry, because an entity that carries an unpaired electron is usually rather reactive. In organic chemistry they typically only occur briefly during a reaction on an entity called a radical; however, they play an important role in explaining reaction pathways.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Unpaired Electron";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::VacuumFlask(string text)
{
    string model = "llama3";
    string definition = "A vacuum flask (also known as a Dewar flask, Dewar bottle or thermos) is an insulating storage vessel that slows the speed at which its contents change in temperature. It greatly lengthens the time over which its contents remain hotter or cooler than the flask\'s surroundings by trying to be as adiabatic as possible. Invented by James Dewar in 1892, the vacuum flask consists of two flasks, placed one within the other and joined at the neck. The gap between the two flasks is partially evacuated of air, creating a near-vacuum which significantly reduces heat transfer by conduction or convection. When used to hold cold liquids, this also virtually eliminates condensation on the outside of the flask. Vacuum flasks are used domestically to keep contents inside hot or cold for extended periods of time. They are also used for thermal cooking. Vacuum flasks are also used for many purposes in industry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vacuum Flask";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ValenceElectron(string text)
{
    string model = "llama3";
    string definition = "In chemistry and physics, valence electrons are electrons in the outermost shell of an atom, and that can participate in the formation of a chemical bond if the outermost shell is not closed. In a single covalent bond, a shared pair forms with both atoms in the bond each contributing one valence electron. The presence of valence electrons can determine the element\'s chemical properties, such as its valence-whether it may bond with other elements and, if so, how readily and with how many. In this way, a given element\'s reactivity is highly dependent upon its electronic configuration. For a main-group element, a valence electron can exist only in the outermost electron shell; for a transition metal, a valence electron can also be in an inner shell. An atom with a closed shell of valence electrons (corresponding to a noble gas configuration) tends to be chemically inert. Atoms with one or two valence electrons more than a closed shell are highly reactive due to the relatively low energy to remove the extra valence electrons to form a positive ion. An atom with one or two electrons fewer than a closed shell is reactive due to its tendency either to gain the missing valence electrons and form a negative ion, or else to share valence electrons and form a covalent bond. Similar to a core electron, a valence electron has the ability to absorb or release energy in the form of a photon. An energy gain can trigger the electron to move (jump) to an outer shell; this is known as atomic excitation. Or the electron can even break free from its associated atom\'s shell; this is ionization to form a positive ion. When an electron loses energy (thereby causing a photon to be emitted), then it can move to an inner shell which is not fully occupied.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::ValenceBondTheory(string text)
{
    string model = "llama3";
    string definition = "In chemistry, valence bond (VB) theory is one of the two basic theories, along with molecular orbital (MO) theory, that were developed to use the methods of quantum mechanics to explain chemical bonding. It focuses on how the atomic orbitals of the dissociated atoms combine to give individual chemical bonds when a molecule is formed. In contrast, molecular orbital theory has orbitals that cover the whole molecule.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Valency(string text)
{
    string model = "llama3";
    string definition = "In chemistry, the valence (US spelling) or valency (British spelling) of an atom is a measure of its combining capacity with other atoms when it forms chemical compounds or molecules. Valence is generally understood to be the number of chemical bonds that each atom of a given chemical element typically forms. Double bonds are considered to be two bonds, triple bonds to be three, quadruple bonds to be four, quintuple bonds to be five and sextuple bonds to be six. In most compounds, the valence of hydrogen is 1, of oxygen is 2, of nitrogen is 3, and of carbon is 4. Valence is not to be confused with the related concepts of the coordination number, the oxidation state, or the number of valence electrons for a given atom.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Valency";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::VanDerWaalsForce(string text)
{
    string model = "llama3";
    string definition = "In molecular physics and chemistry, the van der Waals force (sometimes van de Waals\' force) is a distance-dependent interaction between atoms or molecules. Unlike ionic or covalent bonds, these attractions do not result from a chemical electronic bond; they are comparatively weak and therefore more susceptible to disturbance. The van der Waals force quickly vanishes at longer distances between interacting molecules. Named after Dutch physicist Johannes Diderik van der Waals, the van der Waals force plays a fundamental role in fields as diverse as supramolecular chemistry, structural biology, polymer science, nanotechnology, surface science, and condensed matter physics. It also underlies many properties of organic compounds and molecular solids, including their solubility in polar and non-polar media. If no other force is present, the distance between atoms at which the force becomes repulsive rather than attractive as the atoms approach one another is called the van der Waals contact distance; this phenomenon results from the mutual repulsion between the atoms\' electron clouds. The van der Waals forces are usually described as a combination of the London dispersion forces between \"instantaneously induced dipoles\", Debye forces between permanent dipoles and induced dipoles, and the Keesom force between permanent molecular dipoles whose rotational orientations are dynamically averaged over time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::VanTHoffFactor(string text)
{
    string model = "llama3";
    string definition = "The van \'t Hoff factor i (named after Dutch chemist Jacobus Henricus van \'t Hoff) is a measure of the effect of a solute on colligative properties such as osmotic pressure, relative lowering in vapor pressure, boiling-point elevation and freezing-point depression. The van \'t Hoff factor is the ratio between the actual concentration of particles produced when the substance is dissolved and the concentration of a substance as calculated from its mass. For most non-electrolytes dissolved in water, the van \'t Hoff factor is essentially 1. For most ionic compounds dissolved in water, the van \'t Hoff factor is equal to the number of discrete ions in a formula unit of the substance. This is true for ideal solutions only, as occasionally ion pairing occurs in solution. At a given instant a small percentage of the ions are paired and count as a single particle. Ion pairing occurs to some extent in all electrolyte solutions. This causes the measured van \'t Hoff factor to be less than that predicted in an ideal solution. The deviation for the van \'t Hoff factor tends to be greatest where the ions have multiple charges. The factor binds osmolarity to molarity and osmolality to molality.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Van T Hoff Factor";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Vapor(string text)
{
    string model = "llama3";
    string definition = "In physics, a vapor (American English) or vapour (Commonwealth English; see spelling differences) is a substance in the gas phase at a temperature lower than its critical temperature, which means that the vapor can be condensed to a liquid by increasing the pressure on it without reducing the temperature of the vapor. A vapor is different from an aerosol. An aerosol is a suspension of tiny particles of liquid, solid, or both within a gas. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vapor";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::VaporPressure(string text)
{
    string model = "llama3";
    string definition = "Vapor pressure or equilibrium vapor pressure is the pressure exerted by a vapor in thermodynamic equilibrium with its condensed phases (solid or liquid) at a given temperature in a closed system. The equilibrium vapor pressure is an indication of a liquid\'s thermodynamic tendency to evaporate. It relates to the balance of particles escaping from the liquid (or solid) in equilibrium with those in a coexisting vapor phase. A substance with a high vapor pressure at normal temperatures is often referred to as volatile. The pressure exhibited by vapor present above a liquid surface is known as vapor pressure. As the temperature of a liquid increases, the attractive interactions between liquid molecules become less significant in comparison to the entropy of those molecules in the gas phase, increasing the vapor pressure. Thus, liquids with strong intermolecular interactions are likely to have smaller vapor pressures, with the reverse true for weaker interactions. The vapor pressure of any substance increases non-linearly with temperature, often described by the Clausius-Clapeyron relation. The atmospheric pressure boiling point of a liquid (also known as the normal boiling point) is the temperature at which the vapor pressure equals the ambient atmospheric pressure. With any incremental increase in that temperature, the vapor pressure becomes sufficient to overcome atmospheric pressure and cause the liquid to form vapor bubbles. Bubble formation in greater depths of liquid requires a slightly higher temperature due to the higher fluid pressure, due to hydrostatic pressure of the fluid mass above. More important at shallow depths is the higher temperature required to start bubble formation. The surface tension of the bubble wall leads to an overpressure in the very small initial bubbles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vapor Pressure";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Volatility(string text)
{
    string model = "llama3";
    string definition = "In chemistry, volatility is a material quality which describes how readily a substance vaporizes. At a given temperature and pressure, a substance with high volatility is more likely to exist as a vapour, while a substance with low volatility is more likely to be a liquid or solid. Volatility can also describe the tendency of a vapor to condense into a liquid or solid; less volatile substances will more readily condense from a vapor than highly volatile ones. Differences in volatility can be observed by comparing how fast substances within a group evaporate (or sublimate in the case of solids) when exposed to the atmosphere. A highly volatile substance such as rubbing alcohol (isopropyl alcohol) will quickly evaporate, while a substance with low volatility such as vegetable oil will remain condensed. In general, solids are much less volatile than liquids, but there are some exceptions. Solids that sublimate (change directly from solid to vapor) such as dry ice (solid carbon dioxide) or iodine can vaporize at a similar rate as some liquids under standard conditions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Volatility";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Volt(string text)
{
    string model = "llama3";
    string definition = "The volt (symbol: V) is the unit of electric potential, electric potential difference (voltage), and electromotive force in the International System of Units (SI).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Voltmeter(string text)
{
    string model = "llama3";
    string definition = "A voltmeter is an instrument used for measuring electric potential difference between two points in an electric circuit. It is connected in parallel. It usually has a high resistance so that it takes negligible current from the circuit. Analog voltmeters move a pointer across a scale in proportion to the voltage measured and can be built from a galvanometer and series resistor. Meters using amplifiers can measure tiny voltages of microvolts or less. Digital voltmeters give a numerical display of voltage by use of an analog-to-digital converter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::Volume(string text)
{
    string model = "llama3";
    string definition = "Volume is a measure of regions in three-dimensional space. It is often quantified numerically using SI derived units (such as the cubic metre and litre) or by various imperial or US customary units (such as the gallon, quart, cubic inch). The definition of length and height (cubed) is interrelated with volume. The volume of a container is generally understood to be the capacity of the container; i.e., the amount of fluid (gas or liquid) that the container could hold, rather than the amount of space the container itself displaces. By metonymy, the term \"volume\" sometimes is used to refer to the corresponding region (e.g., bounding volume).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::VolumetricFlask(string text)
{
    string model = "llama3";
    string definition = "A volumetric flask (measuring flask or graduated flask) is a piece of laboratory apparatus, a type of laboratory flask, calibrated to contain a precise volume at a certain temperature. Volumetric flasks are used for precise dilutions and preparation of standard solutions. These flasks are usually pear-shaped, with a flat bottom, and made of glass or plastic. The flask\'s mouth is either furnished with a plastic snap/screw cap or fitted with a joint to accommodate a PTFE or glass stopper. The neck of volumetric flasks is elongated and narrow with an etched ring graduation marking. The marking indicates the volume of liquid contained when filled up to that point. The marking is typically calibrated \"to contain\" (marked \"TC\" or \"IN\") at 20 °C and indicated correspondingly on a label. The flask\'s label also indicates the nominal volume, tolerance, precision class, relevant manufacturing standard and the manufacturer\'s logo. Volumetric flasks are of various sizes, containing from a fraction of a milliliter to hundreds of liters of liquid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Volumetric Flask";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::WatchGlass(string text)
{
    string model = "llama3";
    string definition = "A watch glass is a circular concave piece of glass used in chemistry as a surface to evaporate a liquid, to hold solids while being weighed, for heating a small amount of substance, and as a cover for a beaker. When used to cover beakers, the purpose is generally to prevent dust or other particles from entering the beaker; the watch glass does not completely seal the beaker, so gas exchanges still occur. When used as an evaporation surface, a watch glass allows closer observation of precipitates or crystallization. It can be placed on a surface of contrasting colors to improve the visibility overall. Watch glasses are also sometimes used to cover a glass of whisky, to concentrate the aromas in the glass, and to prevent spills when the whisky is swirled. Watch glasses are named so because they are similar to the glass used for the front of old-fashioned pocket watches. These large watch glasses are occasionally known as clock glasses.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Watch Glass";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Water(string text)
{
    string model = "llama3";
    string definition = "Water is an inorganic compound with the chemical formula H2O. It is a transparent, tasteless, odorless, and nearly colorless chemical substance. It is the main constituent of Earth\'s hydrosphere and the fluids of all known living organisms (in which it acts as a solvent). It is vital for all known forms of life, despite not providing food energy or organic micronutrients. Its chemical formula, H2O, indicates that each of its molecules contains one oxygen and two hydrogen atoms, connected by covalent bonds. The hydrogen atoms are attached to the oxygen atom at an angle of 104.45.In liquid form, H2O is also called \"water\" at standard temperature and pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Water";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::WaterOfCrystallization(string text)
{
    string model = "llama3";
    string definition = "In chemistry, water(s) of crystallization or water(s) of hydration are water molecules that are present inside crystals. Water is often incorporated in the formation of crystals from aqueous solutions. In some contexts, water of crystallization is the total mass of water in a substance at a given temperature and is mostly present in a definite (stoichiometric) ratio. Classically, \"water of crystallization\" refers to water that is found in the crystalline framework of a metal complex or a salt, which is not directly bonded to the metal cation. Upon crystallization from water, or water-containing solvents, many compounds incorporate water molecules in their crystalline frameworks. Water of crystallization can generally be removed by heating a sample but the crystalline properties are often lost. Compared to inorganic salts, proteins crystallize with large amounts of water in the crystal lattice. A water content of 50% is not uncommon for proteins.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Water Of Crystallization";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::WaveFunction(string text)
{
    string model = "llama3";
    string definition = "In quantum physics, a wave function (or wavefunction) is a mathematical description of the quantum state of an isolated quantum system. The most common symbols for a wave function are the Greek letters ? and ? (lower-case and capital psi, respectively). Wave functions are complex-valued. For example, a wave function might assign a complex number to each point in a region of space. The Born rule provides the means to turn these complex probability amplitudes into actual probabilities. In one common form, it says that the squared modulus of a wave function that depends upon position is the probability density of measuring a particle as being at a given place. The integral of a wavefunction\'s squared modulus over all the system\'s degrees of freedom must be equal to 1, a condition called normalization. Since the wave function is complex-valued, only its relative phase and relative magnitude can be measured; its value does not, in isolation, tell anything about the magnitudes or directions of measurable observables. One has to apply quantum operators, whose eigenvalues correspond to sets of possible results of measurements, to the wave function ? and calculate the statistical distributions for measurable quantities.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::WeakAcids(string text)
{
    string model = "llama3";
    string definition = "A weak acid is a substance that partially dissociates or partly ionizes when it is dissolved in a solvent. In solution, there is an equilibrium between the acid, HA and the products of dissociation. HA <-> H+ +A-.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Weak Acids";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::WeakBase(string text)
{
    string model = "llama3";
    string definition = "A weak base is a base that, upon dissolution in water, does not dissociate completely, so that the resulting aqueous solution contains only a small proportion of hydroxide ions and the concerned basic radical, and a large proportion of undissociated molecules of the base.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Weak Base";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::WetChemistry(string text)
{
    string model = "llama3";
    string definition = "Wet chemistry is a form of analytical chemistry that uses classical methods such as observation to analyze materials. The term wet chemistry is used as most analytical work is done in the liquid phase. Wet chemistry is also known as bench chemistry, since many tests are performed at lab benches.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wet Chemistry";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::WettingAgent(string text)
{
    string model = "llama3";
    string definition = "Surfactants are chemical compounds that decrease the surface tension or interfacial tension between two liquids, a liquid and a gas, or a liquid and a solid. The word \"surfactant\" is a blend of surface-active agent, coined in 1950 . As they consist of a water-repellent and a water-attracting part, they enable water and oil to mix; they can form foam and facilitate the detachment of dirt. Surfactants are among the most widespread and commercially important chemicals. Private households as well as many industries use them in large quantities as detergents and cleaning agents, but also for example as emulsifiers, wetting agents, foaming agents, antistatic additives, or dispersants. Surfactants occur naturally in traditional plant-based detergents, e.g. horse chestnuts or soap nuts; they can also be found in the secretions of some caterpillars. Today one of the most commonly used anionic surfactants, linear alkylbenzene sulfates (LAS), are produced from petroleum products. However, surfactants are increasingly produced in whole or in part from renewable biomass, like sugar, fatty alcohol from vegetable oils, by-products of biofuel production, or other biogenic material.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wetting Agent";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Work(string text)
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
            return "Work";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::WorkUp(string text)
{
    string model = "llama3";
    string definition = "In chemistry, work-up refers to the series of manipulations required to isolate and purify the product(s) of a chemical reaction. The term is used colloquially to refer to these manipulations, which may include: deactivating any unreacted reagents by quenching a reaction. cooling the reaction mixture or adding an antisolvent to induce precipitation, and collecting or removing the solids by filtration, decantation, or centrifugation. changing the protonation state of the products or impurities by adding an acid or base. separating the reaction mixture into organic and aqueous layers by liquid-liquid extraction. removal of solvents by evaporation. purification by chromatography, distillation or recrystallization. The work-up steps required for a given chemical reaction may require one or more of these manipulations. Work-up steps are not always explicitly shown in reaction schemes. Written experimental procedures will describe work-up steps but will usually not formally refer to them as a work-up.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Work Up";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::XRay(string text)
{
    string model = "llama3";
    string definition = "An X-ray (also known in many languages as Röntgen radiation) is a form of high-energy electromagnetic radiation with a wavelength shorter than those of ultraviolet rays and longer than those of gamma rays. Roughly, X-rays have a wavelength ranging from 10 nanometers to 10 picometers, corresponding to frequencies in the range of 30 petahertz to 30 exahertz (3*1016 Hz to 3*1019 Hz) and photon energies in the range of 100 eV to 100 keV, respectively.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Chemistry::Terms::XRayScatteringTechniques(string text)
{
    string model = "llama3";
    string definition = "X-ray scattering techniques are a family of non-destructive analytical techniques which reveal information about the crystal structure, chemical composition, and physical properties of materials and thin films. These techniques are based on observing the scattered intensity of an X-ray beam hitting a sample as a function of incident and scattered angle, polarization, and wavelength or energy. Note that X-ray diffraction is sometimes considered a sub-set of X-ray scattering, where the scattering is elastic and the scattering object is crystalline, so that the resulting pattern contains sharp spots analyzed by X-ray crystallography (as in the Figure). However, both scattering and diffraction are related general phenomena and the distinction has not always existed. Thus Guinier\'s classic text from 1963 is titled \"X-ray diffraction in Crystals, Imperfect Crystals and Amorphous Bodies\" so \'diffraction\' was clearly not restricted to crystals at that time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "X Ray Scattering Techniques";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::XRayPhotoelectronSpectroscopy(string text)
{
    string model = "llama3";
    string definition = "X-ray photoelectron spectroscopy (XPS) is a surface-sensitive quantitative spectroscopic technique that measures the very topmost 200 atoms, 0.01 um, 10 nm of any surface. It belongs to the family of photoemission spectroscopies in which electron population spectra are obtained by irradiating a material with a beam of X-rays. XPS is based on the photoelectric effect that can identify the elements that exist within a material (elemental composition) or are covering its surface, as well as their chemical state, and the overall electronic structure and density of the electronic states in the material. XPS is a powerful measurement technique because it not only shows what elements are present, but also what other elements they are bonded to. The technique can be used in line profiling of the elemental composition across the surface, or in depth profiling when paired with ion-beam etching. It is often applied to study chemical processes in the materials in their as-received state or after cleavage, scraping, exposure to heat, reactive gasses or solutions, ultraviolet light, or during ion implantation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "X Ray Photoelectron Spectroscopy";
        }
    }

    return nullptr;
}

//string _Chemistry::Terms::YieldChemistry(string text)
//{
//    string model = "llama3";
//    string definition = "In chemistry, yield, also known as reaction yield or chemical yield, refers to the amount of product obtained in a chemical reaction. Yield is one of the primary factors that scientists must consider in organic and inorganic chemical synthesis processes. In chemical reaction engineering, \"yield\", \"conversion\" and \"selectivity\" are terms used to describe ratios of how much of a reactant was consumed (conversion), how much desired product was formed (yield) in relation to the undesired product (selectivity), represented as X, Y, and S. The term yield also plays an important role in analytical chemistry, as individual compounds are recovered in purification processes in a range from quantitative yield (100 %) to low yield (< 50 %).";
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
//            return "Yield Chemistry";
//        }
//    }
//
//    return nullptr;
//}

string _Chemistry::Terms::ZeroPointEnergy(string text)
{
    string model = "llama3";
    string definition = "Zero-point energy (ZPE) is the lowest possible energy that a quantum mechanical system may have. Unlike in classical mechanics, quantum systems constantly fluctuate in their lowest energy state as described by the Heisenberg uncertainty principle. Therefore, even at absolute zero, atoms and molecules retain some vibrational motion. Apart from atoms and molecules, the empty space of the vacuum also has these properties. According to quantum field theory, the universe can be thought of not as isolated particles but continuous fluctuating fields: matter fields, whose quanta are fermions (i.e., leptons and quarks), and force fields, whose quanta are bosons (e.g., photons and gluons). All these fields have zero-point energy. These fluctuating zero-point fields lead to a kind of reintroduction of an aether in physics since some systems can detect the existence of this energy. However, this aether cannot be thought of as a physical medium if it is to be Lorentz invariant such that there is no contradiction with Einstein\'s theory of special relativity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zero Point Energy";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::ZoneMelting(string text)
{
    string model = "llama3";
    string definition = "Zone melting (or zone refining, or floating-zone method, or floating-zone technique) is a group of similar methods of purifying crystals, in which a narrow region of a crystal is melted, and this molten zone is moved along the crystal. The molten region melts impure solid at its forward edge and leaves a wake of purer material solidified behind it as it moves through the ingot. The impurities concentrate in the melt, and are moved to one end of the ingot. Zone refining was invented by John Desmond Bernal and further developed by William G. Pfann in Bell Labs as a method to prepare high-purity materials, mainly semiconductors, for manufacturing transistors. Its first commercial use was in germanium, refined to one atom of impurity per ten billion, but the process can be extended to virtually any solute-solvent system having an appreciable concentration difference between solid and liquid phases at equilibrium. This process is also known as the float zone process, particularly in semiconductor materials processing.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zone Melting";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Zinc(string text)
{
    string model = "llama3";
    string definition = "Zinc is a chemical element with the symbol Zn and atomic number 30. It is a slightly brittle metal at room temperature and has a shiny-greyish appearance when oxidation is removed. It is the first element in group 12 (IIB) of the periodic table. In some respects, zinc is chemically similar to magnesium: both elements exhibit only one normal oxidation state (+2), and the Zn^2+ and Mg^2+ ions are of similar size. Zinc is the 24th most abundant element in Earth\'s crust and has five stable isotopes. The most common zinc ore is sphalerite (zinc blende), a zinc sulfide mineral. The largest workable lodes are in Australia, Asia, and the United States. Zinc is refined by froth flotation of the ore, roasting, and final extraction using electricity (electrowinning).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zinc";
        }
    }

    return nullptr;
}

string _Chemistry::Terms::Zwitterion(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a zwitterion , also called an inner salt or dipolar ion, is a molecule that contains an equal number of positively and negatively charged functional groups. With amino acids, for example, in solution a chemical equilibrium will be established between the \"parent\" molecule and the zwitterion. Betaines are zwitterions that cannot isomerize to an all-neutral form, such as when the positive charge is located on a quaternary ammonium group. Similarly, a molecule containing a phosphonium group and a carboxylate group cannot isomerize.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zwitterion";
        }
    }

    return nullptr;
}
