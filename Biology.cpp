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
#include "Biology.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _Biology::Terms::Absorption(string text)
{
    string model = "llama3";
    string definition = "Skin absorption is a route by which substances can enter the body through the skin. Along with inhalation, ingestion and injection, dermal absorption is a route of exposure for toxic substances and route of administration for medication. Absorption of substances through the skin depends on a number of factors, the most important of which are concentration, duration of contact, solubility of medication, and physical condition of the skin and part of the body exposed. Skin (percutaneous, dermal) absorption is the transport of chemicals from the outer surface of the skin both into the skin and into circulation. Skin absorption relates to the degree of exposure to and possible effect of a substance which may enter the body through the skin. Human skin comes into contact with many agents intentionally and unintentionally. Skin absorption can occur from occupational, environmental, or consumer skin exposure to chemicals, cosmetics, or pharmaceutical products. Some chemicals can be absorbed in enough quantity to cause detrimental systemic effects. Skin disease (dermatitis) is considered one of the most common occupational diseases. In order to assess if a chemical can be a risk of either causing dermatitis or other more systemic effects and how that risk may be reduced, one must know the extent to which it is absorbed. Thus, dermal exposure is a key aspect of human health risk assessment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absorption";
        }
    }

    return nullptr;
}

string _Biology::Terms::Acclimatization(string text)
{
    string model = "llama3";
    string definition = "Acclimatization or acclimatisation (also called acclimation or acclimatation) is the process in which an individual organism adjusts to a change in its environment (such as a change in altitude, temperature, humidity, photoperiod, or pH), allowing it to maintain fitness across a range of environmental conditions. Acclimatization occurs in a short period of time (hours to weeks), and within the organism\'s lifetime (compared to adaptation, which is evolution, taking place over many generations). This may be a discrete occurrence (for example, when mountaineers acclimate to high altitude over hours or days) or may instead represent part of a periodic cycle, such as a mammal shedding heavy winter fur in favor of a lighter summer coat. Organisms can adjust their morphological, behavioral, physical, and/or biochemical traits in response to changes in their environment. While the capacity to acclimate to novel environments has been well documented in thousands of species, researchers still know very little about how and why organisms acclimate the way that they do.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acclimatization";
        }
    }

    return nullptr;
}

string _Biology::Terms::AcetylCoA(string text)
{
    string model = "llama3";
    string definition = "Acetyl-CoA (acetyl coenzyme A) is a molecule that participates in many biochemical reactions in protein, carbohydrate and lipid metabolism. Its main function is to deliver the acetyl group to the citric acid cycle (Krebs cycle) to be oxidized for energy production. Coenzyme A (CoASH or CoA) consists of a ß-mercaptoethylamine group linked to pantothenic acid (vitamin B5) through an amide linkage and 3\'-phosphorylated ADP. The acetyl group (indicated in blue in the structural diagram on the right) of acetyl-CoA is linked to the sulfhydryl substituent of the ß-mercaptoethylamine group. This thioester linkage is a \"high energy\" bond, which is particularly reactive. Hydrolysis of the thioester bond is exergonic (-31.5 kJ/mol). CoA is acetylated to acetyl-CoA by the breakdown of carbohydrates through glycolysis and by the breakdown of fatty acids through ß-oxidation. Acetyl-CoA then enters the citric acid cycle, where the acetyl group is oxidized to carbon dioxide and water, and the energy released is captured in the form of 11 ATP and one GTP per acetyl group. Konrad Bloch and Feodor Lynen were awarded the 1964 Nobel Prize in Physiology or Medicine for their discoveries linking acetyl-CoA and fatty acid metabolism. Fritz Lipmann won the Nobel Prize in 1953 for his discovery of the cofactor coenzyme A.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acetyl Co A";
        }
    }

    return nullptr;
}

string _Biology::Terms::Acoelomate(string text)
{
    string model = "llama3";
    string definition = "The coelom (or celom) is the main body cavity in many animals and is positioned inside the body to surround and contain the digestive tract and other organs. In some animals, it is lined with mesothelium. In other animals, such as molluscs, it remains undifferentiated. In the past, and for practical purposes, coelom characteristics have been used to classify bilaterian animal phyla into informal groups.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Acoelomate";
        }
    }

    return nullptr;
}

string _Biology::Terms::Adaptation(string text)
{
    string model = "llama3";
    string definition = "In biology, adaptation has three related meanings. Firstly, it is the dynamic evolutionary process of natural selection that fits organisms to their environment, enhancing their evolutionary fitness. Secondly, it is a state reached by the population during that process. Thirdly, it is a phenotypic trait or adaptive trait, with a functional role in each individual organism, that is maintained and has evolved through natural selection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Adaptation";
        }
    }

    return nullptr;
}

string _Biology::Terms::Adenine(string text)
{
    string model = "llama3";
    string definition = "Adenine (symbol A or Ade) is a purine nucleotide base. It is one of the four nucleobases in the nucleic acids of DNA, the other three being guanine (G), cytosine (C), and thymine (T). Adenine derivatives have various roles in biochemistry including cellular respiration, in the form of both the energy-rich adenosine triphosphate (ATP) and the cofactors nicotinamide adenine dinucleotide (NAD), flavin adenine dinucleotide (FAD) and Coenzyme A. It also has functions in protein synthesis and as a chemical component of DNA and RNA. The shape of adenine is complementary to either thymine in DNA or uracil in RNA. The adjacent image shows pure adenine, as an independent molecule. When connected into DNA, a covalent bond is formed between deoxyribose sugar and the bottom left nitrogen (thereby removing the existing hydrogen atom). The remaining structure is called an adenine residue, as part of a larger molecule. Adenosine is adenine reacted with ribose, as used in RNA and ATP; Deoxyadenosine is adenine attached to deoxyribose, as used to form DNA.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Adenine";
        }
    }

    return nullptr;
}

string _Biology::Terms::AerobicOrganism(string text)
{
    string model = "llama3";
    string definition = "An aerobic organism or aerobe is an organism that can survive and grow in an oxygenated environment. The ability to exhibit aerobic respiration may yield benefits to the aerobic organism, as aerobic respiration yields more energy than anaerobic respiration. Energy production of the cell involves the synthesis of ATP by an enzyme called ATP synthase. In aerobic respiration, ATP synthase is coupled with an electron transport chain in which oxygen acts as a terminal electron acceptor. In July 2020, marine biologists reported that aerobic microorganisms (mainly), in \"quasi-suspended animation\", were found in organically poor sediments, up to 101.5 million years old, 250 feet below the seafloor in the South Pacific Gyre (SPG) (\"the deadest spot in the ocean\"), and could be the longest-living life forms ever found.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Aerobic Organism";
        }
    }

    return nullptr;
}

string _Biology::Terms::AminoAcid(string text)
{
    string model = "llama3";
    string definition = "Amino acids are organic compounds that contain both amino and carboxylic acid functional groups. Although over 500 amino acids exist in nature, by far the most important are the 22 α-amino acids incorporated into proteins. Only these 22 appear in the genetic code of life.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Amino Acid";
        }
    }

    return nullptr;
}

string _Biology::Terms::Anaerobic(string text)
{
    string model = "llama3";
    string definition = "An anaerobic organism or anaerobe is any organism that does not require molecular oxygen for growth. It may react negatively or even die if free oxygen is present. In contrast, an aerobic organism (aerobe) is an organism that requires an oxygenated environment. Anaerobes may be unicellular (e.g. protozoans, bacteria) or multicellular. Most fungi are obligate aerobes, requiring oxygen to survive. However, some species, such as the Chytridiomycota that reside in the rumen of cattle, are obligate anaerobes; for these species, anaerobic respiration is used because oxygen will disrupt their metabolism or kill them. The sea floor is possibly one of the largest accumulation of anaerobic organisms on Earth, where microbes are primarily concentrated around hydrothermal vents. These microbes produce energy in absence of sunlight or oxygen through a process called chemosynthesis, whereby inorganic compounds such as hydrogen gas, hydrogen sulfide or ferrous ions are converted into organic matter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anaerobic";
        }
    }

    return nullptr;
}

string _Biology::Terms::Animal(string text)
{
    string model = "llama3";
    string definition = "Animals are multicellular, eukaryotic organisms in the biological kingdom Animalia With few exceptions, animals consume organic material, breathe oxygen, have myocytes and are able to move, can reproduce sexually, and grow from a hollow sphere of cells, the blastula, during embryonic development. Animals form a clade, meaning that they arose from a single common ancestor. Over 1.5 million living animal species have been described, of which around 1.05 million are insects, over 85,000 are molluscs, and around 65,000 are vertebrates. It has been estimated there are as many as 7.77 million animal species on Earth. Animal body lengths range from 8.5 µm (0.00033 in) to 33.6 m (110 ft). They have complex ecologies and interactions with each other and their environments, forming intricate food webs. The scientific study of animals is known as zoology, and the study of animal behaviour is known as ethology. The animal kingdom is divided into five infrakingdoms/superphyla, namely Porifera, Ctenophora, Placozoa, Cnidaria and Bilateria. Most living animal species belong to the infrakingdom Bilateria, a highly proliferative clade whose members have a bilaterally symmetric and significantly cephalised body plan, and the vast majority of bilaterians belong to two large superphyla: the protostomes, which includes organisms such as arthropods, molluscs, flatworms, annelids and nematodes; and the deuterostomes, which include echinoderms, hemichordates and chordates, the latter of which contains the vertebrates. The much smaller basal phylum Xenacoelomorpha have an uncertain position within Bilateria. Animals first appear in the fossil record in the late Cryogenian period and diversified in the subsequent Ediacaran period in what is known as the Avalon explosion. Earlier evidence of animals is still controversial; the sponge-like organism Otavia has been dated back to the Tonian period at the start of the Neoproterozoic, but its identity as an animal is heavily contested. Nearly all modern animal phyla became clearly established in the fossil record as marine species during the Cambrian explosion, which began around 539 million years ago (Mya), and most classes during the Ordovician radiation 485.4 Mya. 6,331 groups of genes common to all living animals have been identified; these may have arisen from a single common ancestor that lived about 650 Mya during the Cryogenian period.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Animal";
        }
    }

    return nullptr;
}

string _Biology::Terms::Antibiotic(string text)
{
    string model = "llama3";
    string definition = "An antibiotic is a type of antimicrobial substance active against bacteria. It is the most important type of antibacterial agent for fighting bacterial infections, and antibiotic medications are widely used in the treatment and prevention of such infections. They may either kill or inhibit the growth of bacteria. A limited number of antibiotics also possess antiprotozoal activity. Antibiotics are not effective against viruses such as the ones which cause the common cold or influenza. Drugs which inhibit growth of viruses are termed antiviral drugs or antivirals. Antibiotics are also not effective against fungi. Drugs which inhibit growth of fungi are called antifungal drugs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antibiotic";
        }
    }

    return nullptr;
}

string _Biology::Terms::Archaea(string text)
{
    string model = "llama3";
    string definition = "is a domain of organisms. Traditionally, Archaea only included its prokaryotic members, but this sense has been found to be paraphyletic, as eukaryotes are now known to have evolved from archaea. Even though the domain Archaea includes eukaryotes, the term \"archaea\" in English still generally refers specifically to prokaryotic members of Archaea. Archaea were initially classified as bacteria, receiving the name archaebacteria, in the Archaebacteria kingdom), but this term has fallen out of use.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Archaea";
        }
    }

    return nullptr;
}

string _Biology::Terms::ArtificialSelection(string text)
{
    string model = "llama3";
    string definition = "Selective breeding (also called artificial selection) is the process by which humans use animal breeding and plant breeding to selectively develop particular phenotypic traits (characteristics) by choosing which typically animal or plant males and females will sexually reproduce and have offspring together. Domesticated animals are known as breeds, normally bred by a professional breeder, while domesticated plants are known as varieties, cultigens, cultivars, or breeds. Two purebred animals of different breeds produce a crossbreed, and crossbred plants are called hybrids. Flowers, vegetables and fruit-trees may be bred by amateurs and commercial or non-commercial professionals: major crops are usually the provenance of the professionals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Artificial Selection";
        }
    }

    return nullptr;
}

string _Biology::Terms::AsexualReproduction(string text)
{
    string model = "llama3";
    string definition = "Asexual reproduction is a type of reproduction that does not involve the fusion of gametes or change in the number of chromosomes. The offspring that arise by asexual reproduction from either unicellular or multicellular organisms inherit the full set of genes of their single parent and thus the newly created individual is genetically and physically similar to the parent or an exact clone of the parent. Asexual reproduction is the primary form of reproduction for single-celled organisms such as archaea and bacteria. Many eukaryotic organisms including plants, animals, and fungi can also reproduce asexually. In vertebrates, the most common form of asexual reproduction is parthenogenesis, which is typically used as an alternative to sexual reproduction in times when reproductive opportunities are limited. Some monitor lizards, including Komodo dragons, can reproduce asexually. While all prokaryotes reproduce without the formation and fusion of gametes, mechanisms for lateral gene transfer such as conjugation, transformation and transduction can be likened to sexual reproduction in the sense of genetic recombination in meiosis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Asexual Reproduction";
        }
    }

    return nullptr;
}

string _Biology::Terms::Astrobiology(string text)
{
    string model = "llama3";
    string definition = "Astrobiology (also xenology or exobiology) is a scientific field within the life and environmental sciences that studies the origins, early evolution, distribution, and future of life in the universe by investigating its deterministic conditions and contingent events. As a discipline, astrobiology is founded on the premise that life may exist beyond Earth. Research in astrobiology comprises three main areas: the study of habitable environments in the Solar System and beyond, the search for planetary biosignatures of past or present extraterrestrial life, and the study of the origin and early evolution of life on Earth. The field of astrobiology has its origins in the 20th century with the advent of space exploration and the discovery of exoplanets. Early astrobiology research focused on the search for extraterrestrial life and the study of the potential for life to exist on other planets. In the 1960s and 1970s, NASA began its astrobiology pursuits within the Viking program, which was the first US mission to land on Mars and search for signs of life. This mission, along with other early space exploration missions, laid the foundation for the development of astrobiology as a discipline. Regarding habitable environments, astrobiology investigates potential locations beyond Earth that could support life, such as Mars, Europa, and exoplanets, through research into the extremophiles populating austere environments on Earth, like volcanic and deep sea environments. Research within this topic is conducted utilising the methodology of the geosciences, especially geobiology, for astrobiological applications. The search for biosignatures involves the identification of signs of past or present life in the form of organic compounds, isotopic ratios, or microbial fossils. Research within this topic is conducted utilising the methodology of planetary and environmental science, especially atmospheric science, for astrobiological applications, and is often conducted through remote sensing and in situ missions. Astrobiology also concerns the study of the origin and early evolution of life on Earth to try to understand the conditions that are necessary for life to form on other planets. This research seeks to understand how life emerged from non-living matter and how it evolved to become the diverse array of organisms we see today. Research within this topic is conducted utilising the methodology of paleosciences, especially paleobiology, for astrobiological applications. Astrobiology is a rapidly developing field with a strong interdisciplinary aspect that holds many challenges and opportunities for scientists. Astrobiology programs and research centres are present in many universities and research institutions around the world, and space agencies like NASA and ESA have dedicated departments and programs for astrobiology research.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Astrobiology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Autoimmunity(string text)
{
    string model = "llama3";
    string definition = "In immunology, autoimmunity is the system of immune responses of an organism against its own healthy cells, tissues and other normal body constituents. Any disease resulting from this type of immune response is termed an \"autoimmune disease\". Prominent examples include celiac disease, diabetes mellitus type 1, Henoch-Schönlein purpura, systemic lupus erythematosus, Sjögren syndrome, eosinophilic granulomatosis with polyangiitis, Hashimoto\'s thyroiditis, Graves\' disease, idiopathic thrombocytopenic purpura, Addison\'s disease, rheumatoid arthritis, ankylosing spondylitis, polymyositis, dermatomyositis, and multiple sclerosis. Autoimmune diseases are very often treated with steroids. Autoimmunity means presence of antibodies or T cells that react with self-protein and is present in all individuals, even in normal health state. It causes autoimmune diseases if self-reactivity can lead to tissue damage.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Autoimmunity";
        }
    }

    return nullptr;
}

string _Biology::Terms::Autotroph(string text)
{
    string model = "llama3";
    string definition = "An autotroph is an organism that can convert abiotic sources of energy into energy stored in organic compounds, which can be used by other organisms. Autotrophs produce complex organic compounds (such as carbohydrates, fats, and proteins) using carbon from simple substances such as carbon dioxide, generally using energy from light or inorganic chemical reactions. Autotrophs do not need a living source of carbon or energy and are the producers in a food chain, such as plants on land or algae in water. Autotrophs can reduce carbon dioxide to make organic compounds for biosynthesis and as stored chemical fuel. Most autotrophs use water as the reducing agent, but some can use other hydrogen compounds such as hydrogen sulfide. The primary producers can convert the energy in the light (phototroph and photoautotroph) or the energy in inorganic chemical compounds (chemotrophs or chemolithotrophs) to build organic molecules, which is usually accumulated in the form of biomass and will be used as carbon and energy source by other organisms (e.g. heterotrophs and mixotrophs). The photoautotrophs are the main primary producers, converting the energy of the light into chemical energy through photosynthesis, ultimately building organic molecules from carbon dioxide, an inorganic carbon source. Examples of chemolithotrophs are some archaea and bacteria (unicellular organisms) that produce biomass from the oxidation of inorganic chemical compounds, these organisms are called chemoautotrophs, and are frequently found in hydrothermal vents in the deep ocean. Primary producers are at the lowest trophic level, and are the reasons why Earth sustains life to this day. Most chemoautotrophs are lithotrophs, using inorganic electron donors such as hydrogen sulfide, hydrogen gas, elemental sulfur, ammonium and ferrous oxide as reducing agents and hydrogen sources for biosynthesis and chemical energy release. Autotrophs use a portion of the ATP produced during photosynthesis or the oxidation of chemical compounds to reduce NADP+ to NADPH to form organic compounds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Autotroph";
        }
    }

    return nullptr;
}

string _Biology::Terms::BCell(string text)
{
    string model = "llama3";
    string definition = "B cells, also known as B lymphocytes, are a type of white blood cell of the lymphocyte subtype. They function in the humoral immunity component of the adaptive immune system. B cells produce antibody molecules which may be either secreted or inserted into the plasma membrane where they serve as a part of B-cell receptors. When a naïve or memory B cell is activated by an antigen, it proliferates and differentiates into an antibody-secreting effector cell, known as a plasmablast or plasma cell. In addition, B cells present antigens (they are also classified as professional antigen-presenting cells, APCs) and secrete cytokines. In mammals B cells mature in the bone marrow, which is at the core of most bones. In birds, B cells mature in the bursa of Fabricius, a lymphoid organ where they were first discovered by Chang and Glick, which is why the B stands for bursa and not bone marrow, as commonly believed. B cells, unlike the other two classes of lymphocytes, T cells and natural killer cells, express B cell receptors (BCRs) on their cell membrane. BCRs allow the B cell to bind to a foreign antigen, against which it will initiate an antibody response. B cell receptors are extremely specific, with all BCRs on a B cell recognizing the same epitope.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "B Cell";
        }
    }

    return nullptr;
}

string _Biology::Terms::Bacteria(string text)
{
    string model = "llama3";
    string definition = "Bacteria are ubiquitous, mostly free-living organisms often consisting of one biological cell. They constitute a large domain of prokaryotic microorganisms. Typically a few micrometres in length, bacteria were among the first life forms to appear on Earth, and are present in most of its habitats. Bacteria inhabit the air, soil, water, acidic hot springs, radioactive waste, and the deep biosphere of Earth\'s crust. Bacteria play a vital role in many stages of the nutrient cycle by recycling nutrients and the fixation of nitrogen from the atmosphere. The nutrient cycle includes the decomposition of dead bodies; bacteria are responsible for the putrefaction stage in this process. In the biological communities surrounding hydrothermal vents and cold seeps, extremophile bacteria provide the nutrients needed to sustain life by converting dissolved compounds, such as hydrogen sulphide and methane, to energy. Bacteria also live in mutualistic, commensal and parasitic relationships with plants and animals. Most bacteria have not been characterised and there are many species that cannot be grown in the laboratory. The study of bacteria is known as bacteriology, a branch of microbiology. Like all animals, humans carry vast numbers (approximately 1013 to 1014) of bacteria. Most are in the gut, though there are many on the skin. Most of the bacteria in and on the body are harmless or rendered so by the protective effects of the immune system, and many are beneficial, particularly the ones in the gut. However, several species of bacteria are pathogenic and cause infectious diseases, including cholera, syphilis, anthrax, leprosy, tuberculosis, tetanus and bubonic plague. The most common fatal bacterial diseases are respiratory infections. Antibiotics are used to treat bacterial infections and are also used in farming, making antibiotic resistance a growing problem. Bacteria are important in sewage treatment and the breakdown of oil spills, the production of cheese and yogurt through fermentation, the recovery of gold, palladium, copper and other metals in the mining sector (biomining, bioleaching), as well as in biotechnology, and the manufacture of antibiotics and other chemicals. Once regarded as plants constituting the class Schizomycetes (\"fission fungi\"), bacteria are now classified as prokaryotes. Unlike cells of animals and other eukaryotes, bacterial cells do not contain a nucleus and rarely harbour membrane-bound organelles. Although the term bacteria traditionally included all prokaryotes, the scientific classification changed after the discovery in the 1990s that prokaryotes consist of two very different groups of organisms that evolved from an ancient common ancestor. These evolutionary domains are called Bacteria and Archaea.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bacteria";
        }
    }

    return nullptr;
}

string _Biology::Terms::Bacteriophage(string text)
{
    string model = "llama3";
    string definition = "A bacteriophage also known informally as a phage is a virus that infects and replicates within bacteria and archaea. The term is derived from Ancient Greek φα?ε?? (phagein) \'to devour\' and bacteria. Bacteriophages are composed of proteins that encapsulate a DNA or RNA genome, and may have structures that are either simple or elaborate. Their genomes may encode as few as four genes (e.g. MS2) and as many as hundreds of genes. Phages replicate within the bacterium following the injection of their genome into its cytoplasm.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bacteriophage";
        }
    }

    return nullptr;
}

string _Biology::Terms::BarrBody(string text)
{
    string model = "llama3";
    string definition = "A Barr body (named after discoverer Murray Barr) or X-chromatin is an inactive X chromosome. In species with XY sex-determination (including humans), females typically have two X chromosomes, and one is rendered inactive in a process called lyonization. Errors in chromosome separation can also result in male and female individuals with extra X chromosomes. The Lyon hypothesis states that in cells with multiple X chromosomes, all but one are inactivated early in embryonic development in mammals. The X chromosomes that become inactivated are chosen randomly, except in marsupials and in some extra-embryonic tissues of some placental mammals, in which the X chromosome from the sperm is always deactivated. In humans with euploidy, a genotypical female (46, XX karyotype) has one Barr body per somatic cell nucleus, while a genotypical male (46, XY) has none. The Barr body can be seen in the interphase nucleus as a darkly staining small mass in contact with the nucleus membrane. Barr bodies can be seen in neutrophils at the rim of the nucleus. In humans with more than one X chromosome, the number of Barr bodies visible at interphase is always one fewer than the total number of X chromosomes. For example, people with Klinefelter syndrome (47, XXY) have a single Barr body, and people with a 47, XXX karyotype have two Barr bodies.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Barr Body";
        }
    }

    return nullptr;
}

string _Biology::Terms::BasalBody(string text)
{
    string model = "llama3";
    string definition = "A basal body (synonymous with basal granule, kinetosome, and in older cytological literature with blepharoplast) is a protein structure found at the base of a eukaryotic undulipodium (cilium or flagellum). The basal body was named by Theodor Wilhelm Engelmann in 1880. It is formed from a centriole and several additional protein structures, and is, essentially, a modified centriole. The basal body serves as a nucleation site for the growth of the axoneme microtubules. Centrioles, from which basal bodies are derived, act as anchoring sites for proteins that in turn anchor microtubules, and are known as the microtubule organizing center (MTOC). These microtubules provide structure and facilitate movement of vesicles and organelles within many eukaryotic cells.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Basal Body";
        }
    }

    return nullptr;
}

string _Biology::Terms::BehavioralEcology(string text)
{
    string model = "llama3";
    string definition = "Behavioral ecology, also spelled behavioural ecology, is the study of the evolutionary basis for animal behavior due to ecological pressures. Behavioral ecology emerged from ethology after Niko Tinbergen outlined four questions to address when studying animal behaviors: What are the proximate causes, ontogeny, survival value, and phylogeny of a behavior? If an organism has a trait that provides a selective advantage (i.e., has adaptive significance) in its environment, then natural selection favors it. Adaptive significance refers to the expression of a trait that affects fitness, measured by an individual\'s reproductive success. Adaptive traits are those that produce more copies of the individual\'s genes in future generations. Maladaptive traits are those that leave fewer. For example, if a bird that can call more loudly attracts more mates, then a loud call is an adaptive trait for that species because a louder bird mates more frequently than less loud birds-thus sending more loud-calling genes into future generations. Conversely, loud calling birds may attract the attention of predators more often, decreasing their presence in the gene pool. Individuals are always in competition with others for limited resources, including food, territories, and mates. Conflict occurs between predators and prey, between rivals for mates, between siblings, mates, and even between parents and offspring.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Behavioral Ecology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Bile(string text)
{
    string model = "llama3";
    string definition = "Bile (from Latin bilis), or gall, is a yellow-green fluid or it could be a green misty colour produced by the liver of most vertebrates that aids the digestion of lipids in the small intestine. In humans, bile is primarily composed of water, produced continuously by the liver, and stored and concentrated in the gallbladder. After a human eats, this stored bile is discharged into the first section of the small intestine.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bile";
        }
    }

    return nullptr;
}

string _Biology::Terms::Fission(string text)
{
    string model = "llama3";
    string definition = "Fission, in biology, is the division of a single entity into two or more parts and the regeneration of those parts to separate entities resembling the original. The object experiencing fission is usually a cell, but the term may also refer to how organisms, bodies, populations, or species split into discrete parts. The fission may be binary fission, in which a single organism produces two parts, or multiple fission, in which a single entity produces multiple parts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::BinomialNomenclature(string text)
{
    string model = "llama3";
    string definition = "In taxonomy, binomial nomenclature (\"two-term naming system\"), also called binary nomenclature, is a formal system of naming species of living things by giving each a name composed of two parts, both of which use Latin grammatical forms, although they can be based on words from other languages. Such a name is called a binomial name (which may be shortened to just \"binomial\"), a binomen, binominal name, or a scientific name; more informally it is also historically called a Latin name. In the International Code of Zoological Nomenclature (ICZN), the system is also called binominal nomenclature, with an \"n\" before the \"al\" in \"binominal\", which is not a typographic error, meaning \"two-name naming system\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Binomial Nomenclature";
        }
    }

    return nullptr;
}

string _Biology::Terms::Biocatalysis(string text)
{
    string model = "llama3";
    string definition = "Biocatalysis refers to the use of living (biological) systems or their parts to speed up (catalyze) chemical reactions. In biocatalytic processes, natural catalysts, such as enzymes, perform chemical transformations on organic compounds. Both enzymes that have been more or less isolated and enzymes still residing inside living cells are employed for this task. Modern biotechnology, specifically directed evolution, has made the production of modified or non-natural enzymes possible. This has enabled the development of enzymes that can catalyze novel small molecule transformations that may be difficult or impossible using classical synthetic organic chemistry. Utilizing natural or modified enzymes to perform organic synthesis is termed chemoenzymatic synthesis; the reactions performed by the enzyme are classified as chemoenzymatic reactions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::Biochemistry(string text)
{
    string model = "llama3";
    string definition = "Biochemistry or biological chemistry is the study of chemical processes within and relating to living organisms. A sub-discipline of both chemistry and biology, biochemistry may be divided into three fields: structural biology, enzymology, and metabolism. Over the last decades of the 20th century, biochemistry has become successful at explaining living processes through these three disciplines. Almost all areas of the life sciences are being uncovered and developed through biochemical methodology and research. Biochemistry focuses on understanding the chemical basis which allows biological molecules to give rise to the processes that occur within living cells and between cells, in turn relating greatly to the understanding of tissues and organs as well as organism structure and function. Biochemistry is closely related to molecular biology, the study of the molecular mechanisms of biological phenomena. Much of biochemistry deals with the structures, functions, and interactions of biological macromolecules such as proteins, nucleic acids, carbohydrates, and lipids. They provide the structure of cells and perform many of the functions associated with life. The chemistry of the cell also depends upon the reactions of small molecules and ions. These can be inorganic (for example, water and metal ions) or organic (for example, the amino acids, which are used to synthesize proteins). The mechanisms used by cells to harness energy from their environment via chemical reactions are known as metabolism. The findings of biochemistry are applied primarily in medicine, nutrition and agriculture. In medicine, biochemists investigate the causes and cures of diseases. Nutrition studies how to maintain health and wellness and also the effects of nutritional deficiencies. In agriculture, biochemists investigate soil and fertilizers with the goal of improving crop cultivation, crop storage, and pest control. In recent decades, biochemical principles and methods have been combined with problem-solving approaches from engineering to manipulate living systems in order to produce useful tools for research, industrial processes, and diagnosis and control of disease-the discipline of biotechnology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::Biodiversity(string text)
{
    string model = "llama3";
    string definition = "Biodiversity is the variability of life on Earth. It can be measured on various levels. There is for example genetic variability, species diversity, ecosystem diversity and phylogenetic diversity. Diversity is not distributed evenly on Earth. It is greater in the tropics as a result of the warm climate and high primary productivity in the region near the equator. Tropical forest ecosystems cover less than one-fifth of Earth\'s terrestrial area and contain about 50% of the world\'s species. There are latitudinal gradients in species diversity for both marine and terrestrial taxa. Since life began on Earth, six major mass extinctions and several minor events have led to large and sudden drops in biodiversity. The Phanerozoic aeon (the last 540 million years) marked a rapid growth in biodiversity via the Cambrian explosion. In this period, the majority of multicellular phyla first appeared. The next 400 million years included repeated, massive biodiversity losses. Those events have been classified as mass extinction events. In the Carboniferous, rainforest collapse may have led to a great loss of plant and animal life. The Permian-Triassic extinction event, 251 million years ago, was the worst; vertebrate recovery took 30 million years. Human activities have led to an ongoing biodiversity loss and an accompanying loss of genetic diversity. This process is often referred to as Holocene extinction, or sixth mass extinction. For example, it was estimated in 2007 that up to 30% of all species will be extinct by 2050. Destroying habitats for farming is a key reason why biodiversity is decreasing today. Climate change also plays a role. This can be seen for example in the effects of climate change on biomes. This anthropogenic extinction may have started toward the end of the Pleistocene, as some studies suggest that the megafaunal extinction event that took place around the end of the last ice age partly resulted from overhunting.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biodiversity";
        }
    }

    return nullptr;
}

string _Biology::Terms::BiologicalEngineering(string text)
{
    string model = "llama3";
    string definition = "Biological engineering or bioengineering is the application of principles of biology and the tools of engineering to create usable, tangible, economically viable products. Biological engineering employs knowledge and expertise from a number of pure and applied sciences, such as mass and heat transfer, kinetics, biocatalysts, biomechanics, bioinformatics, separation and purification processes, bioreactor design, surface science, fluid mechanics, thermodynamics, and polymer science. It is used in the design of medical devices, diagnostic equipment, biocompatible materials, renewable energy, ecological engineering, agricultural engineering, process engineering and catalysis, and other areas that improve the living standards of societies. Examples of bioengineering research include bacteria engineered to produce chemicals, new medical imaging technology, portable and rapid disease diagnostic devices, prosthetics, biopharmaceuticals, and tissue-engineered organs. Bioengineering overlaps substantially with biotechnology and the biomedical sciences in a way analogous to how various other forms of engineering and technology relate to various other sciences (such as aerospace engineering and other space technology to kinetics and astrophysics). Generally, biological engineers attempt to mimic biological systems to create products or modify and control biological systems. Working with doctors, clinicians, and researchers, bioengineers use traditional engineering principles and techniques to address biological processes, including ways to replace, augment, sustain, or predict chemical and mechanical processes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biological Engineering";
        }
    }

    return nullptr;
}

string _Biology::Terms::Bioenergetics(string text)
{
    string model = "llama3";
    string definition = "Bioenergetics is a field in biochemistry and cell biology that concerns energy flow through living systems. This is an active area of biological research that includes the study of the transformation of energy in living organisms and the study of thousands of different cellular processes such as cellular respiration and the many other metabolic and enzymatic processes that lead to production and utilization of energy in forms such as adenosine triphosphate (ATP) molecules. That is, the goal of bioenergetics is to describe how living organisms acquire and transform energy in order to perform biological work. The study of metabolic pathways is thus essential to bioenergetics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bioenergetics";
        }
    }

    return nullptr;
}

string _Biology::Terms::Biogeography(string text)
{
    string model = "llama3";
    string definition = "Biogeography is the study of the distribution of species and ecosystems in geographic space and through geological time. Organisms and biological communities often vary in a regular fashion along geographic gradients of latitude, elevation, isolation and habitat area. Phytogeography is the branch of biogeography that studies the distribution of plants. Zoogeography is the branch that studies distribution of animals. Mycogeography is the branch that studies distribution of fungi, such as mushrooms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biogeography";
        }
    }

    return nullptr;
}

string _Biology::Terms::Bioinformatics(string text)
{
    string model = "llama3";
    string definition = "is an interdisciplinary field of science that develops methods and software tools for understanding biological data, especially when the data sets are large and complex. Bioinformatics uses biology, chemistry, physics, computer science, computer programming, information engineering, mathematics and statistics to analyze and interpret biological data. The process of analyzing and interpreting data can sometimes be referred to as computational biology, however this distinction between the two terms is often disputed. To some, the term computational biology refers to building and using models of biological systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bioinformatics";
        }
    }

    return nullptr;
}

string _Biology::Terms::BiologicalOrganization(string text)
{
    string model = "llama3";
    string definition = "Biological organisation is the organisation of complex biological structures and systems that define life using a reductionistic approach. The traditional hierarchy, as detailed below, extends from atoms to biospheres. The higher levels of this scheme are often referred to as an ecological organisation concept, or as the field, hierarchical ecology. Each level in the hierarchy represents an increase in organisational complexity, with each \"object\" being primarily composed of the previous level\'s basic unit. The basic principle behind the organisation is the concept of emergence-the properties and functions found at a hierarchical level are not present and irrelevant at the lower levels. The biological organisation of life is a fundamental premise for numerous areas of scientific research, particularly in the medical sciences. Without this necessary degree of organisation, it would be much more difficult-and likely impossible-to apply the study of the effects of various physical and chemical phenomena to diseases and physiology (body function). For example, fields such as cognitive and behavioral neuroscience could not exist if the brain was not composed of specific types of cells, and the basic concepts of pharmacology could not exist if it was not known that a change at the cellular level can affect an entire organism. These applications extend into the ecological levels as well. For example, DDT\'s direct insecticidal effect occurs at the subcellular level, but affects higher levels up to and including multiple ecosystems. Theoretically, a change in one atom could change the entire biosphere.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biological Organization";
        }
    }

    return nullptr;
}

string _Biology::Terms::Biology(string text)
{
    string model = "llama3";
    string definition = "Biology is the scientific study of life. It is a natural science with a broad scope but has several unifying themes that tie it together as a single, coherent field. For instance, all organisms are made up of at least one cell that processes hereditary information encoded in genes, which can be transmitted to future generations. Another major theme is evolution, which explains the unity and diversity of life. Energy processing is also important to life as it allows organisms to move, grow, and reproduce. Finally, all organisms are able to regulate their own internal environments. Biologists are able to study life at multiple levels of organization, from the molecular biology of a cell to the anatomy and physiology of plants and animals, and evolution of populations. Hence, there are multiple subdisciplines within biology, each defined by the nature of their research questions and the tools that they use. Like other scientists, biologists use the scientific method to make observations, pose questions, generate hypotheses, perform experiments, and form conclusions about the world around them. Life on Earth, which emerged more than 3.7 billion years ago, is immensely diverse. Biologists have sought to study and classify the various forms of life, from prokaryotic organisms such as archaea and bacteria to eukaryotic organisms such as protists, fungi, plants, and animals. These various organisms contribute to the biodiversity of an ecosystem, where they play specialized roles in the cycling of nutrients and energy through their biophysical environment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Biomass(string text)
{
    string model = "llama3";
    string definition = "Biomass is a term used in several contexts: in the context of ecology it means living organisms, and in the context of bioenergy it means matter from recently living (but now dead) organisms. In the latter context, there are variations in how biomass is defined, e.g., only from plants, from plants and algae, from plants and animals. The vast majority of biomass used for bioenergy does come from plants. Bioenergy is a type of renewable energy that the bioenergy industry claims has the potential to assist with climate change mitigation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biomass";
        }
    }

    return nullptr;
}

string _Biology::Terms::Biomathematics(string text)
{
    string model = "llama3";
    string definition = "Mathematical and theoretical biology, or biomathematics, is a branch of biology which employs theoretical analysis, mathematical models and abstractions of living organisms to investigate the principles that govern the structure, development and behavior of the systems, as opposed to experimental biology which deals with the conduction of experiments to test scientific theories. The field is sometimes called mathematical biology or biomathematics to stress the mathematical side, or theoretical biology to stress the biological side. Theoretical biology focuses more on the development of theoretical principles for biology while mathematical biology focuses on the use of mathematical tools to study biological systems, even though the two terms are sometimes interchanged. Mathematical biology aims at the mathematical representation and modeling of biological processes, using techniques and tools of applied mathematics. It can be useful in both theoretical and practical research. Describing systems in a quantitative manner means their behavior can be better simulated, and hence properties can be predicted that might not be evident to the experimenter. This requires precise mathematical models. Mathematical biology aims at the mathematical representation and modeling of biological processes, using techniques and tools of applied mathematics. It can be useful in both theoretical and practical research. Describing systems in a quantitative manner means their behavior can be better simulated, and hence properties can be predicted that might not be evident to the experimenter. This requires precise mathematical models. Because of the complexity of the living systems, theoretical biology employs several fields of mathematics, and has contributed to the development of new techniques.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biomathematics";
        }
    }

    return nullptr;
}

string _Biology::Terms::Biome(string text)
{
    string model = "llama3";
    string definition = "A biome is a distinct geographical region with specific climate, vegetation, and animal life. It consists of a biological community that has formed in response to its physical environment and regional climate. Biomes may span more than one continent. A biome encompasses multiple ecosystems within its boundaries. It can also comprise a variety of habitats. While a biome can cover small areas, a microbiome is a mix of organisms that coexist in a defined space on a much smaller scale. For example, the human microbiome is the collection of bacteria, viruses, and other microorganisms that are present on or in a human body. A biota is the total collection of organisms of a geographic region or a time period, from local geographic scales and instantaneous temporal scales all the way up to whole-planet and whole-timescale spatiotemporal scales. The biotas of the Earth make up the biosphere.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biome";
        }
    }

    return nullptr;
}

string _Biology::Terms::Biomechanics(string text)
{
    string model = "llama3";
    string definition = "Biomechanics is the study of the structure, function and motion of the mechanical aspects of biological systems, at any level from whole organisms to organs, cells and cell organelles, using the methods of mechanics. Biomechanics is a branch of biophysics. Today, computational mechanics extends well beyond traditional mechanics, encompassing a wide range of physical processes such as chemistry, heat and mass transfer, electrical and magnetic interactions, and more.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biomechanics";
        }
    }

    return nullptr;
}

string _Biology::Terms::BiomedicalResearch(string text)
{
    string model = "llama3";
    string definition = "Medical research (or biomedical research), also known as health research, refers to the process of using scientific methods with the aim to produce knowledge about human diseases, the prevention and treatment of illness, and the promotion of health. Medical research encompasses a wide array of research, extending from \"basic research\" (also called bench science or bench research), - involving fundamental scientific principles that may apply to a preclinical understanding - to clinical research, which involves studies of people who may be subjects in clinical trials. Within this spectrum is applied research, or translational research, conducted to expand knowledge in the field of medicine. Both clinical and preclinical research phases exist in the pharmaceutical industry\'s drug development pipelines, where the clinical phase is denoted by the term clinical trial. However, only part of the clinical or preclinical research is oriented towards a specific pharmaceutical purpose. The need for fundamental and mechanism-based understanding, diagnostics, medical devices, and non-pharmaceutical therapies means that pharmaceutical research is only a small part of medical research. Most of the research in the field is pursued by biomedical scientists, but significant contributions are made by other type of biologists. Medical research on humans has to strictly follow the medical ethics sanctioned in the Declaration of Helsinki and the institutional review board where the research is conducted. In all cases, research ethics are expected.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biomedical Research";
        }
    }

    return nullptr;
}

string _Biology::Terms::Biomolecule(string text)
{
    string model = "llama3";
    string definition = "A biomolecule or biological molecule is loosely defined as a molecule produced by a living organism and essential to one or more typically biological processes. Biomolecules include large macromolecules such as proteins, carbohydrates, lipids, and nucleic acids, as well as small molecules such as vitamins and hormones. A general name for this class of material is biological materials. Biomolecules are an important element of living organisms, those biomolecules are often endogenous, produced within the organism but organisms usually need exogenous biomolecules, for example certain nutrients, to survive. Biology and its subfields of biochemistry and molecular biology study biomolecules and their reactions. Most biomolecules are organic compounds, and just four elements-oxygen, carbon, hydrogen, and nitrogen-make up 96% of the human body\'s mass. But many other elements, such as the various biometals, are also present in small amounts. The uniformity of both specific types of molecules (the biomolecules) and of certain metabolic pathways are invariant features among the wide diversity of life forms; thus these biomolecules and metabolic pathways are referred to as \"biochemical universals\" or \"theory of material unity of the living beings\", a unifying concept in biology, along with cell theory and evolution theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biomolecule";
        }
    }

    return nullptr;
}

string _Biology::Terms::Biophysics(string text)
{
    string model = "llama3";
    string definition = "Biophysics is an interdisciplinary science that applies approaches and methods traditionally used in physics to study biological phenomena. Biophysics covers all scales of biological organization, from molecular to organismic and populations. Biophysical research shares significant overlap with biochemistry, molecular biology, physical chemistry, physiology, nanotechnology, bioengineering, computational biology, biomechanics, developmental biology and systems biology. The term biophysics was originally introduced by Karl Pearson in 1892. The term biophysics is also regularly used in academia to indicate the study of the physical quantities (e.g. electric current, temperature, stress, entropy) in biological systems. Other biological sciences also perform research on the biophysical properties of living organisms including molecular biology, cell biology, chemical biology, and biochemistry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::Biosynthesis(string text)
{
    string model = "llama3";
    string definition = "Biosynthesis, i.e., chemical synthesis occurring in biological contexts, is a term most often referring to multi-step, enzyme-catalyzed processes where chemical substances absorbed as nutrients (or previously converted through biosynthesis) serve as enzyme substrates, with conversion by the living organism either into simpler or more complex products. Examples of biosynthetic pathways include those for the production of amino acids, lipid membrane components, and nucleotides, but also for the production of all classes of biological macromolecules, and of acetyl-coenzyme A, adenosine triphosphate, nicotinamide adenine dinucleotide and other key intermediate and transactional molecules needed for metabolism. Thus, in biosynthesis, any of an array of compounds, from simple to complex, are converted into other compounds, and so it includes both the catabolism and anabolism (building up and breaking down) of complex molecules (including macromolecules). Biosynthetic processes are often represented via charts of metabolic pathways. A particular biosynthetic pathway may be located within a single cellular organelle (e.g., mitochondrial fatty acid synthesis pathways), while others involve enzymes that are located across an array of cellular organelles and structures (e.g., the biosynthesis of glycosylated cell surface proteins).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biosynthesis";
        }
    }

    return nullptr;
}

string _Biology::Terms::Biotechnology(string text)
{
    string model = "llama3";
    string definition = "Biotechnology is a multidisciplinary field that involves the integration of natural sciences and engineering sciences in order to achieve the application of organisms and parts thereof for products and services. The term biotechnology was first used by Károly Ereky in 1919 to refer to the production of products from raw materials with the aid of living organisms. The core principle of biotechnology involves harnessing biological systems and organisms, such as bacteria, yeast, and plants, to perform specific tasks or produce valuable substances. Biotechnology had a significant impact on many areas of society, from medicine to agriculture to environmental science. One of the key techniques used in biotechnology is genetic engineering, which allows scientists to modify the genetic makeup of organisms to achieve desired outcomes. This can involve inserting genes from one organism into another, and consequently, create new traits or modifying existing ones. Other important techniques used in biotechnology include tissue culture, which allows researchers to grow cells and tissues in the lab for research and medical purposes, and fermentation, which is used to produce a wide range of products such as beer, wine, and cheese. The applications of biotechnology are diverse and have led to the development of essential products like life-saving drugs, biofuels, genetically modified crops, and innovative materials. It has also been used to address environmental challenges, such as developing biodegradable plastics and using microorganisms to clean up contaminated sites. Biotechnology is a rapidly evolving field with significant potential to address pressing global challenges and improve the quality of life for people around the world; however, despite its numerous benefits, it also poses ethical and societal challenges, such as questions around genetic modification and intellectual property rights. As a result, there is ongoing debate and regulation surrounding the use and application of biotechnology in various industries and fields.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biotechnology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Bipedal(string text)
{
    string model = "llama3";
    string definition = "Bipedalism is a form of terrestrial locomotion where an animal moves by means of its two rear (or lower) limbs or legs. An animal or machine that usually moves in a bipedal manner is known as a biped, meaning \'two feet\' (from Latin bis \'double\' and pes \'foot\'). Types of bipedal movement include walking or running (a bipedal gait) and hopping. Several groups of modern species are habitual bipeds whose normal method of locomotion is two-legged. In the Triassic period some groups of archosaurs (a group that includes crocodiles and dinosaurs) developed bipedalism; among the dinosaurs, all the early forms and many later groups were habitual or exclusive bipeds; the birds are members of a clade of exclusively bipedal dinosaurs, the theropods. Within mammals, habitual bipedalism has evolved multiple times, with the macropods, kangaroo rats and mice, springhare, hopping mice, pangolins and hominin apes (australopithecines, including humans) as well as various other extinct groups evolving the trait independently. A larger number of modern species intermittently or briefly use a bipedal gait. Several lizard species move bipedally when running, usually to escape from threats. Many primate and bear species will adopt a bipedal gait in order to reach food or explore their environment, though there are a few cases where they walk on their hind limbs only. Several arboreal primate species, such as gibbons and indriids, exclusively walk on two legs during the brief periods they spend on the ground. Many animals rear up on their hind legs while fighting or copulating. Some animals commonly stand on their hind legs to reach food, keep watch, threaten a competitor or predator, or pose in courtship, but do not move bipedally.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bipedal";
        }
    }

    return nullptr;
}

string _Biology::Terms::Birth(string text)
{
    string model = "llama3";
    string definition = "Birth is the act or process of bearing or bringing forth offspring, also referred to in technical contexts as parturition. In mammals, the process is initiated by hormones which cause the muscular walls of the uterus to contract, expelling the fetus at a developmental stage when it is ready to feed and breathe. In some species, the offspring is precocial and can move around almost immediately after birth but in others, it is altricial and completely dependent on parenting. In marsupials, the fetus is born at a very immature stage after a short gestation and develops further in its mother\'s womb pouch. It is not only mammals that give birth. Some reptiles, amphibians, fish and invertebrates carry their developing young inside them. Some of these are ovoviviparous, with the eggs being hatched inside the mother\'s body, and others are viviparous, with the embryo developing inside their body, as in the case of mammals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Birth";
        }
    }

    return nullptr;
}

string _Biology::Terms::Blastocyst(string text)
{
    string model = "llama3";
    string definition = "The blastocyst is a structure formed in the early embryonic development of mammals. It possesses an inner cell mass (ICM) also known as the embryoblast which subsequently forms the embryo, and an outer layer of trophoblast cells called the trophectoderm. This layer surrounds the inner cell mass and a fluid-filled cavity or lumen known as the blastocoel. In the late blastocyst, the trophectoderm is known as the trophoblast. The trophoblast gives rise to the chorion and amnion, the two fetal membranes that surround the embryo. The placenta derives from the embryonic chorion (the portion of the chorion that develops villi) and the underlying uterine tissue of the mother. The corresponding structure in non-mammalian animals is an undifferentiated ball of cells called the blastula. In humans, blastocyst formation begins about five days after fertilization when a fluid-filled cavity opens up in the morula, the early embryonic stage of a ball of 16 cells. The blastocyst has a diameter of about 0.1-0.2 mm and comprises 100-200 cells following 7-8 rounds of cleavage (cell division without cell growth). About seven days after fertilization, the blastocyst undergoes implantation, embedding into the endometrium of the uterine wall where it will undergo further developmental processes, including gastrulation. Embedding of the blastocyst into the endometrium requires that it hatches from the zona pellucida, the egg coat that prevents adherence to the fallopian tube as the pre-embryo makes its way to the uterus. The use of blastocysts in in vitro fertilization (IVF) involves culturing a fertilized egg for five days before transferring it into the uterus. It can be a more viable method of fertility treatment than traditional IVF. The inner cell mass of blastocysts is the source of embryonic stem cells, which are broadly applicable in stem cell therapies including cell repair, replacement and regeneration. Assisted zona hatching may also be used in IVF and other fertility treatments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Blastocyst";
        }
    }

    return nullptr;
}

string _Biology::Terms::Blood(string text)
{
    string model = "llama3";
    string definition = "Blood is a body fluid in the circulatory system of humans and other vertebrates that delivers necessary substances such as nutrients and oxygen to the cells, and transports metabolic waste products away from those same cells. Blood is composed of blood cells suspended in blood plasma. Plasma, which constitutes 55% of blood fluid, is mostly water (92% by volume), and contains proteins, glucose, mineral ions, and hormones. The blood cells are mainly red blood cells (erythrocytes), white blood cells (leukocytes), and (in mammals) platelets (thrombocytes). The most abundant cells are red blood cells. These contain hemoglobin, which facilitates oxygen transport by reversibly binding to it, increasing its solubility. Jawed vertebrates have an adaptive immune system, based largely on white blood cells. White blood cells help to resist infections and parasites. Platelets are important in the clotting of blood. Blood is circulated around the body through blood vessels by the pumping action of the heart. In animals with lungs, arterial blood carries oxygen from inhaled air to the tissues of the body, and venous blood carries carbon dioxide, a waste product of metabolism produced by cells, from the tissues to the lungs to be exhaled. Blood is bright red when its hemoglobin is oxygenated and dark red when it is deoxygenated. Medical terms related to blood often begin with hemo-, hemato-, haemo- or haemato- from the Greek word α?µα (haima) for \"blood\". In terms of anatomy and histology, blood is considered a specialized form of connective tissue, given its origin in the bones and the presence of potential molecular fibers in the form of fibrinogen.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Blood";
        }
    }

    return nullptr;
}

string _Biology::Terms::BloodBrainBarrier(string text)
{
    string model = "llama3";
    string definition = "The blood-brain barrier (BBB) is a highly selective semipermeable border of endothelial cells that regulates the transfer of solutes and chemicals between the circulatory system and the central nervous system, thus protecting the brain from harmful or unwanted substances in the blood. The blood-brain barrier is formed by endothelial cells of the capillary wall, astrocyte end-feet ensheathing the capillary, and pericytes embedded in the capillary basement membrane. This system allows the passage of some small molecules by passive diffusion, as well as the selective and active transport of various nutrients, ions, organic anions, and macromolecules such as glucose and amino acids that are crucial to neural function. The blood-brain barrier restricts the passage of pathogens, the diffusion of solutes in the blood, and large or hydrophilic molecules into the cerebrospinal fluid, while allowing the diffusion of hydrophobic molecules (O2, CO2, hormones) and small non-polar molecules. Cells of the barrier actively transport metabolic products such as glucose across the barrier using specific transport proteins. The barrier also restricts the passage of peripheral immune factors, like signaling molecules, antibodies, and immune cells, into the central nervous system, thus insulating the brain from damage due to peripheral immune events. Specialized brain structures participating in sensory and secretory integration within brain neural circuits-the circumventricular organs and choroid plexus-have in contrast highly permeable capillaries.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Blood Brain Barrier";
        }
    }

    return nullptr;
}

string _Biology::Terms::Botany(string text)
{
    string model = "llama3";
    string definition = "Botany, also called plant science or phytology, is the branch of natural science and biology studying plants, especially their anatomy, taxonomy, and ecology. A botanist, plant scientist or phytologist is a scientist who specialises in this field. Nowadays, botanists (in the strict sense) study approximately 410,000 species of land plants, including some 391,000 species of vascular plants (of which approximately 369,000 are flowering plants) and approximately 20,000 bryophytes. Botany originated in prehistory as herbalism with the efforts of early humans to identify - and later cultivate - plants that were edible, poisonous, and possibly medicinal, making it one of the first endeavours of human investigation. Medieval physic gardens, often attached to monasteries, contained plants possibly having medicinal benefit. They were forerunners of the first botanical gardens attached to universities, founded from the 1540s onwards. One of the earliest was the Padua botanical garden. These gardens facilitated the academic study of plants. Efforts to catalogue and describe their collections were the beginnings of plant taxonomy and led in 1753 to the binomial system of nomenclature of Carl Linnaeus that remains in use to this day for the naming of all biological species. In the 19th and 20th centuries, new techniques were developed for the study of plants, including methods of optical microscopy and live cell imaging, electron microscopy, analysis of chromosome number, plant chemistry and the structure and function of enzymes and other proteins. In the last two decades of the 20th century, botanists exploited the techniques of molecular genetic analysis, including genomics and proteomics and DNA sequences to classify plants more accurately. Modern botany is a broad, multidisciplinary subject with contributions and insights from most other areas of science and technology. Research topics include the study of plant structure, growth and differentiation, reproduction, biochemistry and primary metabolism, chemical products, development, diseases, evolutionary relationships, systematics, and plant taxonomy. Dominant themes in 21st-century plant science are molecular genetics and epigenetics, which study the mechanisms and control of gene expression during differentiation of plant cells and tissues. Botanical research has diverse applications in providing staple foods, materials such as timber, oil, rubber, fibre and drugs, in modern horticulture, agriculture and forestry, plant propagation, breeding and genetic modification, in the synthesis of chemicals and raw materials for construction and energy production, in environmental management, and the maintenance of biodiversity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Botany";
        }
    }

    return nullptr;
}

string _Biology::Terms::BuildingBiology(string text)
{
    string model = "llama3";
    string definition = "A science that leads to natural healthy ecological homes, schools, and workplaces that exist in harmony with the environment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Building Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::CalvinCycle(string text)
{
    string model = "llama3";
    string definition = "The reactions of the Calvin cycle are closely coupled to the thylakoid electron transport chain, as the energy required to reduce the carbon dioxide is provided by NADPH produced during the light dependent reactions. The process of photorespiration, also known as C2 cycle, is also coupled to the Calvin cycle, as it results from an alternative reaction of the RuBisCO enzyme, and its final byproduct is another glyceraldehyde-3-P molecule.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Calvin Cycle";
        }
    }

    return nullptr;
}

string _Biology::Terms::CarbonFixation(string text)
{
    string model = "llama3";
    string definition = "Biological carbon fixation, or ?arbon assimilation, is the process by which living organisms convert inorganic carbon (particularly carbon dioxide) to organic compounds. These organic compounds are then used to store energy and as structures for other biomolecules. Carbon is primarily fixed through photosynthesis, but some organisms use chemosynthesis in the absence of sunlight. Chemosynthesis is carbon fixation driven by chemical energy rather than from sunlight. The process of biological carbon fixation plays a crucial role in the global carbon cycle, as it serves as the primary mechanism for removing CO2 (carbon dioxide) from the atmosphere and incorporating it into living biomass. The primary production of organic compounds allows carbon to enter the biosphere. Carbon is considered essential for life as a base element for building organic compounds. The element of carbon forms the bases biogeochemical cycles (or nutrient cycles) and drives communities of living organisms. Understanding biological carbon fixation is essential for comprehending ecosystem dynamics, climate regulation, and the sustainability of life on Earth. Organisms that grow by fixing carbon, such as most plants and algae, are called autotrophs. These include photoautotrophs (which use sunlight) and lithoautotrophs (which use inorganic oxidation). Heterotrophs, such as animals and fungi, are not capable of carbon fixation but are able to grow by consuming the carbon fixed by autotrophs or other heterotrophs. Six natural or autotrophic carbon fixation pathways are currently known. They are the: i) Calvin-Benson-Bassham (Calvin Cycle), ii) Reverse Krebs (rTCA) cycle, iii) the reductive acetyl-CoA (Wood-Ljungdahl pathway), iv) 3-hydroxy propionate  bicycle, v) 3-hydroypropionate/4- hydroxybutyrate (3-HP/4-HB) cycle, and vi) the dicarboxylate/ 4-hydroxybutyrate (DC/4-HB) cycle.  \"Fixed carbon,\" \"reduced carbon,\" and \"organic carbon\" may all be used interchangeably to refer to various organic compounds.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Carbon Fixation";
        }
    }

    return nullptr;
}

string _Biology::Terms::Carbonate(string text)
{
    string model = "llama3";
    string definition = "A carbonate is a salt of carbonic acid, (H2CO3), characterized by the presence of the carbonate ion, a polyatomic ion with the formula CO3^2-. The word \"carbonate\" may also refer to a carbonate ester, an organic compound containing the carbonate group O=C(-O-)2.The term is also used as a verb, to describe carbonation: the process of raising the concentrations of carbonate and bicarbonate ions in water to produce carbonated water and other carbonated beverages - either by the addition of carbon dioxide gas under pressure or by dissolving carbonate or bicarbonate salts into the water.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::Carotenoid(string text)
{
    string model = "llama3";
    string definition = "Carotenoids are yellow, orange, and red organic pigments that are produced by plants and algae, as well as several bacteria, archaea, and fungi. Carotenoids give the characteristic color to pumpkins, carrots, parsnips, corn, tomatoes, canaries, flamingos, salmon, lobster, shrimp, and daffodils. Over 1,100 identified carotenoids can be further categorized into two classes - xanthophylls (which contain oxygen) and carotenes (which are purely hydrocarbons and contain no oxygen). All are derivatives of tetraterpenes, meaning that they are produced from 8 isoprene units and contain 40 carbon atoms. In general, carotenoids absorb wavelengths ranging from 400 to 550 nanometers (violet to green light). This causes the compounds to be deeply colored yellow, orange, or red. Carotenoids are the dominant pigment in autumn leaf coloration of about 15-30% of tree species, but many plant colors, especially reds and purples, are due to polyphenols. Carotenoids serve two key roles in plants and algae: they absorb light energy for use in photosynthesis, and they provide photoprotection via non-photochemical quenching. Carotenoids that contain unsubstituted beta-ionone rings (including ß-carotene, α-carotene, ß-cryptoxanthin, and ?-carotene) have vitamin A activity (meaning that they can be converted to retinol). In the eye, lutein, meso-zeaxanthin, and zeaxanthin are present as macular pigments whose importance in visual function, as of 2016, remains under clinical research.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Carotenoid";
        }
    }

    return nullptr;
}

string _Biology::Terms::Catalase(string text)
{
    string model = "llama3";
    string definition = "Catalase is a common enzyme found in nearly all living organisms exposed to oxygen (such as bacteria, plants, and animals) which catalyzes the decomposition of hydrogen peroxide to water and oxygen. It is a very important enzyme in protecting the cell from oxidative damage by reactive oxygen species (ROS). Catalase has one of the highest turnover numbers of all enzymes; one catalase molecule can convert millions of hydrogen peroxide molecules to water and oxygen each second. Catalase is a tetramer of four polypeptide chains, each over 500 amino acids long. It contains four iron-containing heme groups that allow the enzyme to react with hydrogen peroxide. The optimum pH for human catalase is approximately 7, and has a fairly broad maximum: the rate of reaction does not change appreciably between pH 6.8 and 7.5. The pH optimum for other catalases varies between 4 and 11 depending on the species. The optimum temperature also varies by species.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Catalase";
        }
    }

    return nullptr;
}

string _Biology::Terms::Cell(string text)
{
    string model = "llama3";
    string definition = "The cell is the basic structural and functional unit of all forms of life. Every cell consists of cytoplasm enclosed within a membrane; many cells contain organelles, each with a specific function. The term comes from the Latin word cellula meaning \'small room\'. Most cells are only visible under a microscope. Cells emerged on Earth about 4 billion years ago. All cells are capable of replication, protein synthesis, and motility. Cells are broadly categorized into two types: eukaryotic cells, which possess a nucleus, and prokaryotic cells, which lack a nucleus but have a nucleoid region. Prokaryotes are single-celled organisms such as bacteria, whereas eukaryotes can be either single-celled, such as amoebae, or multicellular, such as some algae, plants, animals, and fungi. Eukaryotic cells contain organelles including mitochondria, which provide energy for cell functions; chloroplasts, which create sugars by photosynthesis, in plants; and ribosomes, which synthesise proteins. Cells were discovered by Robert Hooke in 1665, who named them after their resemblance to cells inhabited by Christian monks in a monastery. Cell theory, developed in 1839 by Matthias Jakob Schleiden and Theodor Schwann, states that all organisms are composed of one or more cells, that cells are the fundamental unit of structure and function in all living organisms, and that all cells come from pre-existing cells.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cell";
        }
    }

    return nullptr;
}

string _Biology::Terms::CellBiology(string text)
{
    string model = "llama3";
    string definition = "Cell biology (also cellular biology or cytology) is a branch of biology that studies the structure, function, and behavior of cells. All living organisms are made of cells. A cell is the basic unit of life that is responsible for the living and functioning of organisms. Cell biology is the study of the structural and functional units of cells. Cell biology encompasses both prokaryotic and eukaryotic cells and has many subtopics which may include the study of cell metabolism, cell communication, cell cycle, biochemistry, and cell composition. The study of cells is performed using several microscopy techniques, cell culture, and cell fractionation. These have allowed for and are currently being used for discoveries and research pertaining to how cells function, ultimately giving insight into understanding larger organisms. Knowing the components of cells and how cells work is fundamental to all biological sciences while also being essential for research in biomedical fields such as cancer, and other diseases. Research in cell biology is interconnected to other fields such as genetics, molecular genetics, molecular biology, medical microbiology, immunology, and cytochemistry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cell Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::CellCycle(string text)
{
    string model = "llama3";
    string definition = "The cell cycle, or cell-division cycle, is the sequential series of events that take place in a cell that causes it to divide into two daughter cells. These events include the growth of the cell, duplication of its DNA (DNA replication) and some of its organelles, and subsequently the partitioning of its cytoplasm, chromosomes and other components into two daughter cells in a process called cell division. In eukaryotic cells (having a cell nucleus) including animal, plant, fungal, and protist cells, the cell cycle is divided into two main stages: interphase, and the M phase that includes mitosis and cytokinesis. During interphase, the cell grows, accumulating nutrients needed for mitosis, and replicates its DNA and some of its organelles. During the M phase, the replicated chromosomes, organelles, and cytoplasm separate into two new daughter cells. To ensure the proper replication of cellular components and division, there are control mechanisms known as cell cycle checkpoints after each of the key steps of the cycle that determine if the cell can progress to the next phase. In cells without nuclei the prokaryotes, bacteria and archaea, the cell cycle is divided into the B, C, and D periods. The B period extends from the end of cell division to the beginning of DNA replication. DNA replication occurs during the C period. The D period refers to the stage between the end of DNA replication and the splitting of the bacterial cell into two daughter cells. In single-celled organisms, a single cell-division cycle is how the organism reproduces to ensure its survival. In multicellular organisms such as plants and animals, a series of cell-division cycles is how the organism develops from a single-celled fertilized egg into a mature organism, and is also the process by which hair, skin, blood cells, and some internal organs are regenerated and healed (with possible exception of nerves; see nerve damage). After cell division, each of the daughter cells begin the interphase of a new cell cycle. Although the various stages of interphase are not usually morphologically distinguishable, each phase of the cell cycle has a distinct set of specialized biochemical processes that prepare the cell for initiation of the cell division.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cell Cycle";
        }
    }

    return nullptr;
}

string _Biology::Terms::CellDivision(string text)
{
    string model = "llama3";
    string definition = "Cell division is the process by which a parent cell divides into two daughter cells. Cell division usually occurs as part of a larger cell cycle in which the cell grows and replicates its chromosome(s) before dividing. In eukaryotes, there are two distinct types of cell division: a vegetative division (mitosis), producing daughter cells genetically identical to the parent cell, and a cell division that produces haploid gametes for sexual reproduction (meiosis), reducing the number of chromosomes from two of each type in the diploid parent cell to one of each type in the daughter cells. Mitosis is a part of the cell cycle, in which, replicated chromosomes are separated into two new nuclei. Cell division gives rise to genetically identical cells in which the total number of chromosomes is maintained. In general, mitosis (division of the nucleus) is preceded by the S stage of interphase (during which the DNA replication occurs) and is followed by telophase and cytokinesis; which divides the cytoplasm, organelles, and cell membrane of one cell into two new cells containing roughly equal shares of these cellular components. The different stages of mitosis all together define the M phase of an animal cell cycle-the division of the mother cell into two genetically identical daughter cells. To ensure proper progression through the cell cycle, DNA damage is detected and repaired at various checkpoints throughout the cycle. These checkpoints can halt progression through the cell cycle by inhibiting certain cyclin-CDK complexes. Meiosis undergoes two divisions resulting in four haploid daughter cells. Homologous chromosomes are separated in the first division of meiosis, such that each daughter cell has one copy of each chromosome. These chromosomes have already been replicated and have two sister chromatids which are then separated during the second division of meiosis. Both of these cell division cycles are used in the process of sexual reproduction at some point in their life cycle. Both are believed to be present in the last eukaryotic common ancestor. Prokaryotes (bacteria and archaea) usually undergo a vegetative cell division known as binary fission, where their genetic material is segregated equally into two daughter cells, but there are alternative manners of division, such as budding, that have been observed. All cell divisions, regardless of organism, are preceded by a single round of DNA replication. For simple unicellular microorganisms such as the amoeba, one cell division is equivalent to reproduction - an entire new organism is created. On a larger scale, mitotic cell division can create progeny from multicellular organisms, such as plants that grow from cuttings. Mitotic cell division enables sexually reproducing organisms to develop from the one-celled zygote, which itself is produced by fusion of two gametes, each having been produced by meiotic cell division. After growth from the zygote to the adult, cell division by mitosis allows for continual construction and repair of the organism. The human body experiences about 10 quadrillion cell divisions in a lifetime.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cell Division";
        }
    }

    return nullptr;
}

string _Biology::Terms::CellMembrane(string text)
{
    string model = "llama3";
    string definition = "The cell membrane (also known as the plasma membrane or cytoplasmic membrane, and historically referred to as the plasmalemma) is a biological membrane that separates and protects the interior of a cell from the outside environment (the extracellular space). The cell membrane consists of a lipid bilayer, made up of two layers of phospholipids with cholesterols (a lipid component) interspersed between them, maintaining appropriate membrane fluidity at various temperatures. The membrane also contains membrane proteins, including integral proteins that span the membrane and serve as membrane transporters, and peripheral proteins that loosely attach to the outer (peripheral) side of the cell membrane, acting as enzymes to facilitate interaction with the cell\'s environment. Glycolipids embedded in the outer lipid layer serve a similar purpose. The cell membrane controls the movement of substances in and out of a cell, being selectively permeable to ions and organic molecules. In addition, cell membranes are involved in a variety of cellular processes such as cell adhesion, ion conductivity, and cell signalling and serve as the attachment surface for several extracellular structures, including the cell wall and the carbohydrate layer called the glycocalyx, as well as the intracellular network of protein fibers called the cytoskeleton. In the field of synthetic biology, cell membranes can be artificially reassembled.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::CellNucleus(string text)
{
    string model = "llama3";
    string definition = "The cell nucleus is a membrane-bound organelle found in eukaryotic cells. Eukaryotic cells usually have a single nucleus, but a few cell types, such as mammalian red blood cells, have no nuclei, and a few others including osteoclasts have many. The main structures making up the nucleus are the nuclear envelope, a double membrane that encloses the entire organelle and isolates its contents from the cellular cytoplasm; and the nuclear matrix, a network within the nucleus that adds mechanical support.The cell nucleus contains nearly all of the cell\'s genome. Nuclear DNA is often organized into multiple chromosomes - long strands of DNA dotted with various proteins, such as histones, that protect and organize the DNA. The genes within these chromosomes are structured in such a way to promote cell function. The nucleus maintains the integrity of genes and controls the activities of the cell by regulating gene expression. Because the nuclear envelope is impermeable to large molecules, nuclear pores are required to regulate nuclear transport of molecules across the envelope. The pores cross both nuclear membranes, providing a channel through which larger molecules must be actively transported by carrier proteins while allowing free movement of small molecules and ions. Movement of large molecules such as proteins and RNA through the pores is required for both gene expression and the maintenance of chromosomes. Although the interior of the nucleus does not contain any membrane-bound subcompartments, a number of nuclear bodies exist, made up of unique proteins, RNA molecules, and particular parts of the chromosomes. The best-known of these is the nucleolus, involved in the assembly of ribosomes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::CellPlate(string text)
{
    string model = "llama3";
    string definition = "Cytokinesis in terrestrial plants occurs by cell plate formation. This process entails the delivery of Golgi-derived and endosomal vesicles carrying cell wall and cell membrane components to the plane of cell division and the subsequent fusion of these vesicles within this plate. After formation of an early tubulo-vesicular network at the center of the cell, the initially labile cell plate consolidates into a tubular network and eventually a fenestrated sheet. The cell plate grows outward from the center of the cell to the parental plasma membrane with which it will fuse, thus completing cell division. Formation and growth of the cell plate is dependent upon the phragmoplast, which is required for proper targeting of Golgi-derived vesicles to the cell plate. As the cell plate matures in the central part of the cell, the phragmoplast disassembles in this region and new elements are added on its outside. This process leads to a steady expansion of the phragmoplast and, concomitantly, to a continuous retargeting of Golgi-derived vesicles to the growing edge of the cell plate. Once the cell plate reaches and fuses with the plasma membrane the phragmoplast disappears. This event not only marks the separation of the two daughter cells, but also initiates a range of biochemical modifications that transform the callose-rich, flexible cell plate into a cellulose-rich, stiff primary cell wall. The heavy dependence of cell plate formation on active Golgi stacks explains why plant cells, unlike animal cells, do not disassemble their secretion machinery during cell division.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cell Plate";
        }
    }

    return nullptr;
}

string _Biology::Terms::CellTheory(string text)
{
    string model = "llama3";
    string definition = "In biology, cell theory is a scientific theory first formulated in the mid-nineteenth century, that living organisms are made up of cells, that they are the basic structural/organizational unit of all organisms, and that all cells come from pre-existing cells. Cells are the basic unit of structure in all living organisms and also the basic unit of reproduction. Cell theory has traditionally been accepted as the governing theory of all life, but some biologists consider non-cellular entities such as viruses living organisms and thus disagree with the universal application of cell theory to all forms of life.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::CellWall(string text)
{
    string model = "llama3";
    string definition = "A cell wall is a structural layer that surrounds some cell types, found immediately outside the cell membrane. It can be tough, flexible, and sometimes rigid. Primarily, it provides the cell with structural support, shape, protection, and functions as a selective barrier. Another vital role of the cell wall is to help the cell withstand osmotic pressure and mechanical stress. While absent in many eukaryotes, including animals, cell walls are prevalent in other organisms such as fungi, algae and plants, and are commonly found in most prokaryotes, with the exception of mollicute bacteria. The composition of cell walls varies across taxonomic groups, species, cell type, and the cell cycle. In land plants, the primary cell wall comprises polysaccharides like cellulose, hemicelluloses, and pectin. Often, other polymers such as lignin, suberin or cutin are anchored to or embedded in plant cell walls. Algae exhibit cell walls composed of glycoproteins and polysaccharides, such as carrageenan and agar, distinct from those in land plants. Bacterial cell walls contain peptidoglycan, while archaeal cell walls vary in composition, potentially consisting of glycoprotein S-layers, pseudopeptidoglycan, or polysaccharides. Fungi possess cell walls constructed from the polymer chitin, specifically N-acetylglucosamine. diatoms have a unique cell wall composed of biogenic silica.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cell Wall";
        }
    }

    return nullptr;
}

string _Biology::Terms::CentralDogmaOfMolecularBiology(string text)
{
    string model = "llama3";
    string definition = "The central dogma of molecular biology deals with the flow of genetic information within a biological system. It is often stated as \"DNA makes RNA, and RNA makes protein\", although this is not its original meaning. It was first stated by Francis Crick in 1957, then published in 1958: The Central Dogma. This states that once \"information\" has passed into protein it cannot get out again. In more detail, the transfer of information from nucleic acid to nucleic acid, or from nucleic acid to protein may be possible, but transfer from protein to protein, or from protein to nucleic acid is impossible. Information here means the precise determination of sequence, either of bases in the nucleic acid or of amino acid residues in the protein. He re-stated it in a Nature paper published in 1970: \"The central dogma of molecular biology deals with the detailed residue-by-residue transfer of sequential information. It states that such information cannot be transferred back from protein to either protein or nucleic acid.\" A second version of the central dogma is popular but incorrect. This is the simplistic DNA ␦";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Central Dogma Of Molecular Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Centriole(string text)
{
    string model = "llama3";
    string definition = "In cell biology a centriole is a cylindrical organelle composed mainly of a protein called tubulin. Centrioles are found in most eukaryotic cells, but are not present in conifers (Pinophyta), flowering plants (angiosperms) and most fungi, and are only present in the male gametes of charophytes, bryophytes, seedless vascular plants, cycads, and Ginkgo. A bound pair of centrioles, surrounded by a highly ordered mass of dense material, called the pericentriolar material (PCM), makes up a structure called a centrosome.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Centriole";
        }
    }

    return nullptr;
}

string _Biology::Terms::Centrosome(string text)
{
    string model = "llama3";
    string definition = "In cell biology, the centrosome (Latin centrum \'center\' + Greek soma \'body\') (archaically cytocentre) is an organelle that serves as the main microtubule organizing center (MTOC) of the animal cell, as well as a regulator of cell-cycle progression. The centrosome provides structure for the cell. The centrosome is thought to have evolved only in the metazoan lineage of eukaryotic cells. Fungi and plants lack centrosomes and therefore use other structures to organize their microtubules. Although the centrosome has a key role in efficient mitosis in animal cells, it is not essential in certain fly and flatworm species. Centrosomes are composed of two centrioles arranged at right angles to each other, and surrounded by a dense, highly structured mass of protein termed the pericentriolar material (PCM). The PCM contains proteins responsible for microtubule nucleation and anchoring - including ?-tubulin, pericentrin and ninein. In general, each centriole of the centrosome is based on a nine-triplet microtubule assembled in a cartwheel structure, and contains centrin, cenexin and tektin. In many cell types, the centrosome is replaced by a cilium during cellular differentiation. However, once the cell starts to divide, the cilium is replaced again by the centrosome.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::ChemicalCompound(string text)
{
    string model = "llama3";
    string definition = "A chemical compound is a chemical substance composed of many identical molecules (or molecular entities) containing atoms from more than one chemical element held together by chemical bonds. A molecule consisting of atoms of only one element is therefore not a compound. A compound can be transformed into a different substance by a chemical reaction, which may involve interactions with other substances. In this process, bonds between atoms may be broken and/or new bonds formed. There are four major types of compounds, distinguished by how the constituent atoms are bonded together. Molecular compounds are held together by covalent bonds; ionic compounds are held together by ionic bonds; intermetallic compounds are held together by metallic bonds; coordination complexes are held together by coordinate covalent bonds. Non-stoichiometric compounds form a disputed marginal case. A chemical formula specifies the number of atoms of each element in a compound molecule, using the standard chemical symbols with numerical subscripts. Many chemical compounds have a unique CAS number identifier assigned by the Chemical Abstracts Service. Globally, more than 350,000 chemical compounds (including mixtures of chemicals) have been registered for production and use.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::Chemosynthesis(string text)
{
    string model = "llama3";
    string definition = "In biochemistry, chemosynthesis is the biological conversion of one or more carbon-containing molecules (usually carbon dioxide or methane) and nutrients into organic matter using the oxidation of inorganic compounds (e.g., hydrogen gas, hydrogen sulfide) or ferrous ions as a source of energy, rather than sunlight, as in photosynthesis. Chemoautotrophs, organisms that obtain carbon from carbon dioxide through chemosynthesis, are phylogenetically diverse. Groups that include conspicuous or biogeochemically important taxa include the sulfur-oxidizing Gammaproteobacteria, the Campylobacterota, the Aquificota, the methanogenic archaea, and the neutrophilic iron-oxidizing bacteria.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chemosynthesis";
        }
    }

    return nullptr;
}

string _Biology::Terms::Chlorophyll(string text)
{
    string model = "llama3";
    string definition = "Chlorophyll is any of several related green pigments found in cyanobacteria and in the chloroplasts of algae and plants. Chlorophyll allows plants to absorb energy from light. Chlorophylls absorb light most strongly in the blue portion of the electromagnetic spectrum as well as the red portion. Conversely, it is a poor absorber of green and near-green portions of the spectrum. Hence chlorophyll-containing tissues appear green because green light, diffusively reflected by structures like cell walls, is less absorbed. Two types of chlorophyll exist in the photosystems of green plants: chlorophyll a and b.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chlorophyll";
        }
    }

    return nullptr;
}

string _Biology::Terms::Chloroplast(string text)
{
    string model = "llama3";
    string definition = "A chloroplast is a type of organelle known as a plastid that conducts photosynthesis mostly in plant and algal cells. Chloroplasts have a high concentration of chlorophyll pigments which capture the energy from sunlight and convert it to chemical energy and release oxygen. The chemical energy created is then used to make sugar and other organic molecules from carbon dioxide in a process called the Calvin cycle. Chloroplasts carry out a number of other functions, including fatty acid synthesis, amino acid synthesis, and the immune response in plants. The number of chloroplasts per cell varies from one, in some unicellular algae, up to 100 in plants like Arabidopsis and wheat. Chloroplasts are highly dynamic-they circulate and are moved around within cells. Their behavior is strongly influenced by environmental factors like light color and intensity. Chloroplasts cannot be made anew by the plant cell and must be inherited by each daughter cell during cell division, which is thought to be inherited from their ancestor-a photosynthetic cyanobacterium that was engulfed by an early eukaryotic cell. Chloroplasts evolved from an ancient cyanobacterium that was engulfed by an early eukaryotic cell. Because of their endosymbiotic origins, chloroplasts, like mitochondria, contain their own DNA separate from the cell nucleus. With one exception (the amoeboid Paulinella chromatophora), all chloroplasts can be traced back to a single endosymbiotic event. Despite this, chloroplasts can be found in extremely diverse organisms that are not directly related to each other-a consequence of many secondary and even tertiary endosymbiotic events.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chloroplast";
        }
    }

    return nullptr;
}

string _Biology::Terms::Cholesterol(string text)
{
    string model = "llama3";
    string definition = "Cholesterol is the principal sterol of all higher animals, distributed in body tissues, especially the brain and spinal cord, and in animal fats and oils. Cholesterol is biosynthesized by all animal cells and is an essential structural and signaling component of animal cell membranes. In vertebrates, hepatic cells typically produce the greatest amounts. In the brain, astrocytes produce cholesterol and transport it to neurons. It is absent among prokaryotes (bacteria and archaea), although there are some exceptions, such as Mycoplasma, which require cholesterol for growth. Cholesterol also serves as a precursor for the biosynthesis of steroid hormones, bile acid and vitamin D. Elevated levels of cholesterol in the blood, especially when bound to low-density lipoprotein (LDL, often referred to as \"bad cholesterol\"), may increase the risk of cardiovascular disease. François Poulletier de la Salle first identified cholesterol in solid form in gallstones in 1769. In 1815, chemist Michel Eugène Chevreul named the compound \"cholesterine\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cholesterol";
        }
    }

    return nullptr;
}

string _Biology::Terms::Chromosome(string text)
{
    string model = "llama3";
    string definition = "A chromosome is a package of DNA containing part or all of the genetic material of an organism. In most chromosomes, the very long thin DNA fibers are coated with nucleosome-forming packaging proteins; in eukaryotic cells, the most important of these proteins are the histones. Aided by chaperone proteins, the histones bind to and condense the DNA molecule to maintain its integrity. These eukaryotic chromosomes display a complex three-dimensional structure that has a significant role in transcriptional regulation. Normally, chromosomes are visible under a light microscope only during the metaphase of cell division, where all chromosomes are aligned in the center of the cell in their condensed form. Before this stage occurs, each chromosome is duplicated (S phase), and the two copies are joined by a centromere-resulting in either an X-shaped structure if the centromere is located equatorially, or a two-armed structure if the centromere is located distally; the joined copies are called \'sister chromatids\'. During metaphase, the duplicated structure (called a \'metaphase chromosome\') is highly condensed and thus easiest to distinguish and study. In animal cells, chromosomes reach their highest compaction level in anaphase during chromosome segregation. Chromosomal recombination during meiosis and subsequent sexual reproduction plays a crucial role in genetic diversity. If these structures are manipulated incorrectly, through processes known as chromosomal instability and translocation, the cell may undergo mitotic catastrophe. This will usually cause the cell to initiate apoptosis, leading to its own death, but the process is occasionally hampered by cell mutations that result in the progression of cancer. The term \'chromosome\' is sometimes used in a wider sense to refer to the individualized portions of chromatin in cells, which may or may not be visible under light microscopy. In a narrower sense, \'chromosome\' can be used to refer to the individualized portions of chromatin during cell division, which are visible under light microscopy due to high condensation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Chromosome";
        }
    }

    return nullptr;
}

string _Biology::Terms::Cilia(string text)
{
    string model = "llama3";
    string definition = "The cilium in Medieval Latin and in anatomy, cilium) is a short hair-like membrane protrusion from many types of eukaryotic cell. (Cilia are absent in bacteria and archaea.) The cilium has the shape of a slender threadlike projection that extends from the surface of the much larger cell body. Eukaryotic flagella found on sperm cells and many protozoans have a similar structure to motile cilia that enables swimming through liquids; they are longer than cilia and have a different undulating motion. There are two major classes of cilia: motile and non-motile cilia, each with two subtypes, giving four types in all. A cell will typically have one primary cilium or many motile cilia. The structure of the cilium core, called the axoneme, determines the cilium class. Most motile cilia have a central pair of single microtubules surrounded by nine pairs of double microtubules called a 9+2 axoneme. Most non-motile cilia have a 9+0 axoneme that lacks the central pair of microtubules. Also lacking are the associated components that enable motility including the outer and inner dynein arms, and radial spokes. Some motile cilia lack the central pair, and some non-motile cilia have the central pair, hence the four types. Most non-motile cilia, termed primary cilia or sensory cilia, serve solely as sensory organelles. Most vertebrate cell types possess a single non-motile primary cilium, which functions as a cellular antenna. Olfactory neurons possess a great many non-motile cilia. Non-motile cilia that have a central pair of microtubules are the kinocilia present on hair cells. Motile cilia are found in large numbers on respiratory epithelial cells - around 200 cilia per cell, where they function in mucociliary clearance, and also have mechanosensory and chemosensory functions. Motile cilia on ependymal cells move the cerebrospinal fluid through the ventricular system of the brain. Motile cilia are also present in the oviducts (fallopian tubes) of female (therian) mammals, where they function in moving egg cells from the ovary to the uterus. Motile cilia that lack the central pair of microtubules are found in the cells of the embryonic primitive node; termed nodal cells, these nodal cilia are responsible for the left-right asymmetry of bilaterians.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cilia";
        }
    }

    return nullptr;
}

string _Biology::Terms::CircadianRhythm(string text)
{
    string model = "llama3";
    string definition = "Circadian rhythm , or circadian cycle, is a natural oscillation that repeats roughly every 24 hours. Circadian rhythms can refer to any process that originates within an organism (i.e., endogenous) and responds to the environment (is entrained by the environment). Circadian rhythms are regulated by a circadian clock whose primary function is to rhythmically co-ordinate biological processes so they occur at the correct time to maximize the fitness of an individual. Circadian rhythms have been widely observed in animals, plants, fungi and cyanobacteria and there is evidence that they evolved independently in each of these kingdoms of life. The term circadian comes from the Latin circa, meaning \"around\", and dies, meaning \"day\". Processes with 24-hour cycles are more generally called diurnal rhythms; diurnal rhythms should not be called circadian rhythms unless they can be confirmed as endogenous, and not environmental. Although circadian rhythms are endogenous, they are adjusted to the local environment by external cues called zeitgebers (from German Zeitgeber (German: ; lit. \'time giver\')), which include light, temperature and redox cycles. In clinical settings, an abnormal circadian rhythm in humans is known as a circadian rhythm sleep disorder.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Circadian Rhythm";
        }
    }

    return nullptr;
}

string _Biology::Terms::CitricAcidCycle(string text)
{
    string model = "llama3";
    string definition = "The citric acid cycle-also known as the Krebs cycle, Szent-Györgyi-Krebs cycle, or TCA cycle (tricarboxylic acid cycle)-is a series of biochemical reactions to release the energy stored in nutrients through the oxidation of acetyl-CoA derived from carbohydrates, fats, proteins, and alcohol. The chemical energy released is available in the form of ATP. The Krebs cycle is used by organisms that respire (as opposed to organisms that ferment) to generate energy, either by anaerobic respiration or aerobic respiration. In addition, the cycle provides precursors of certain amino acids, as well as the reducing agent NADH, that are used in numerous other reactions. Its central importance to many biochemical pathways suggests that it was one of the earliest components of metabolism. Even though it is branded as a \"cycle\", it is not necessary for metabolites to follow only one specific route; at least three alternative segments of the citric acid cycle have been recognized. The name of this metabolic pathway is derived from the citric acid (a tricarboxylic acid, often called citrate, as the ionized form predominates at biological pH) that is consumed and then regenerated by this sequence of reactions to complete the cycle. The cycle consumes acetate (in the form of acetyl-CoA) and water, reduces NAD+ to NADH, releasing carbon dioxide. The NADH generated by the citric acid cycle is fed into the oxidative phosphorylation (electron transport) pathway. The net result of these two closely linked pathways is the oxidation of nutrients to produce usable chemical energy in the form of ATP. In eukaryotic cells, the citric acid cycle occurs in the matrix of the mitochondrion. In prokaryotic cells, such as bacteria, which lack mitochondria, the citric acid cycle reaction sequence is performed in the cytosol with the proton gradient for ATP production being across the cell\'s surface (plasma membrane) rather than the inner membrane of the mitochondrion. For each pyruvate molecule (from glycolysis), the overall yield of energy-containing compounds from the citric acid cycle is three NADH, one FADH2, and one GTP.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Citric Acid Cycle";
        }
    }

    return nullptr;
}

string _Biology::Terms::Clade(string text)
{
    string model = "llama3";
    string definition = "In biological phylogenetics, a clade also known as a monophyletic group or natural group, is a grouping of organisms that are monophyletic - that is, composed of a common ancestor and all its lineal descendants - on a phylogenetic tree. In the taxonomical literature, sometimes the Latin form cladus (plural cladi) is used rather than the English form. Clades are the fundamental unit of cladistics, a modern approach to taxonomy adopted by most biological fields. The common ancestor may be an individual, a population, or a species (extinct or extant). Clades are nested, one in another, as each branch in turn splits into smaller branches. These splits reflect evolutionary history as populations diverged and evolved independently. Clades are termed monophyletic (Greek: \"one clan\") groups. Over the last few decades, the cladistic approach has revolutionized biological classification and revealed surprising evolutionary relationships among organisms. Increasingly, taxonomists try to avoid naming taxa that are not clades; that is, taxa that are not monophyletic. Some of the relationships between organisms that the molecular biology arm of cladistics has revealed include that fungi are closer relatives to animals than they are to plants, archaea are now considered different from bacteria, and multicellular organisms may have evolved from archaea. The term \"clade\" is also used with a similar meaning in other fields besides biology, such as historical linguistics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Clade";
        }
    }

    return nullptr;
}

string _Biology::Terms::Class(string text)
{
    string model = "llama3";
    string definition = "In biological classification, class (Latin: classis) is a taxonomic rank, as well as a taxonomic unit, a taxon, in that rank. It is a group of related taxonomic orders. Other well-known ranks in descending order of size are life, domain, kingdom, phylum, order, family, genus, and species, with class ranking between phylum and order.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Class";
        }
    }

    return nullptr;
}

string _Biology::Terms::ClonalSelection(string text)
{
    string model = "llama3";
    string definition = "In immunology, clonal selection theory explains the functions of cells of the immune system (lymphocytes) in response to specific antigens invading the body. The concept was introduced by Australian doctor Frank Macfarlane Burnet in 1957, in an attempt to explain the great diversity of antibodies formed during initiation of the immune response. The theory has become the widely accepted model for how the human immune system responds to infection and how certain types of B and T lymphocytes are selected for destruction of specific antigens. The theory states that in a pre-existing group of lymphocytes (both B and T cells), a specific antigen activates (i.e. selects) only its counter-specific cell, which then induces that particular cell to multiply, producing identical clones for antibody production. This activation occurs in secondary lymphoid organs such as the spleen and the lymph nodes. In short, the theory is an explanation of the mechanism for the generation of diversity of antibody specificity. The first experimental evidence came in 1958, when Gustav Nossal and Joshua Lederberg showed that one B cell always produces only one antibody. The idea turned out to be the foundation of molecular immunology, especially in adaptive immunity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Clonal Selection";
        }
    }

    return nullptr;
}

string _Biology::Terms::Cloning(string text)
{
    string model = "llama3";
    string definition = "Cloning is the process of producing individual organisms with identical genomes, either by natural or artificial means. In nature, some organisms produce clones through asexual reproduction; this reproduction of an organism by itself without a mate is known as parthenogenesis. In the field of biotechnology, cloning is the process of creating cloned organisms of cells and of DNA fragments. The artificial cloning of organisms, sometimes known as reproductive cloning, is often accomplished via somatic-cell nuclear transfer (SCNT), a cloning method in which a viable embryo is created from a somatic cell and an egg cell. In 1996, Dolly the sheep achieved notoriety for being the first mammal cloned from a somatic cell. Another example of artificial cloning is molecular cloning, a technique in molecular biology in which a single living cell is used to clone a large population of cells that contain identical DNA molecules. In bioethics, there are a variety of ethical positions regarding the practice and possibilities of cloning. The use of embryonic stem cells, which can be produced through SCNT, in some stem cell research has attracted controversy. Cloning has been proposed as a means of reviving extinct species. In popular culture, the concept of cloning-particularly human cloning-is often depicted in science fiction; depictions commonly involve themes related to identity, the recreation of historical figures or extinct species, or cloning for exploitation (e.g. cloning soldiers for warfare).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cloning";
        }
    }

    return nullptr;
}

string _Biology::Terms::CoatCoating(string text)
{
    string model = "llama3";
    string definition = "In the context of virus capsid, may refer colloquially to the defined geometric structure of a capsid, or the membrane of an endosome containing an intact virion. The coat of a virus is used in descriptions for the general public. Related slang: uncoating.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coat, Coating";
        }
    }

    return nullptr;
}

string _Biology::Terms::Colony(string text)
{
    string model = "llama3";
    string definition = "In biology, a colony is composed of two or more conspecific individuals living in close association with, or connected to, one another. This association is usually for mutual benefit such as stronger defense or the ability to attack bigger prey. Colonies can form in various shapes and ways depending on the organism involved. For instance, the bacterial colony is a cluster of identical cells (clones). These colonies often form and grow on the surface of (or within) a solid medium, usually derived from a single parent cell. Colonies, in the context of development, may be composed of two or more unitary (or solitary) organisms or be modular organisms. Unitary organisms have determinate development (set life stages) from zygote to adult form and individuals or groups of individuals (colonies) are visually distinct. Modular organisms have indeterminate growth forms (life stages not set) through repeated iteration of genetically identical modules (or individuals), and it can be difficult to distinguish between the colony as a whole and the modules within. In the latter case, modules may have specific functions within the colony. In contrast, solitary organisms do not associate with colonies; they are ones in which all individuals live independently and have all of the functions needed to survive and reproduce. Some organisms are primarily independent and form facultative colonies in reply to environmental conditions while others must live in a colony to survive (obligate). For example, some carpenter bees will form colonies when a dominant hierarchy is formed between two or more nest foundresses (facultative colony), while corals are animals that are physically connected by living tissue (the coenosarc) that contains a shared gastrovascular cavity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Colony";
        }
    }

    return nullptr;
}

string _Biology::Terms::ComparativeBiology(string text)
{
    string model = "llama3";
    string definition = "Comparative biology uses natural variation and disparity to understand the patterns of life at all levels-from genes to communities-and the critical role of organisms in ecosystems. Comparative biology is a cross-lineage approach to understanding the phylogenetic history of individuals or higher taxa and the mechanisms and patterns that drives it. Comparative biology encompasses Evolutionary Biology, Systematics, Neontology, Paleontology, Ethology, Anthropology, and Biogeography as well as historical approaches to Developmental biology, Genomics, Physiology, Ecology and many other areas of the biological sciences. The comparative approach also has numerous applications in human health, genetics, biomedicine, and conservation biology. The biological relationships (phylogenies, pedigree) are important for comparative analyses and usually represented by a phylogenetic tree or cladogram to differentiate those features with single origins (Homology) from those with multiple origins (Homoplasy).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Comparative Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::ConservationBiology(string text)
{
    string model = "llama3";
    string definition = "Conservation biology is the study of the conservation of nature and of Earth\'s biodiversity with the aim of protecting species, their habitats, and ecosystems from excessive rates of extinction and the erosion of biotic interactions. It is an interdisciplinary subject drawing on natural and social sciences, and the practice of natural resource management.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conservation Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::ConvergentEvolution(string text)
{
    string model = "llama3";
    string definition = "Convergent evolution is the independent evolution of similar features in species of different periods or epochs in time. Convergent evolution creates analogous structures that have similar form or function but were not present in the last common ancestor of those groups. The cladistic term for the same phenomenon is homoplasy. The recurrent evolution of flight is a classic example, as flying insects, birds, pterosaurs, and bats have independently evolved the useful capacity of flight. Functionally similar features that have arisen through convergent evolution are analogous, whereas homologous structures or traits have a common origin but can have dissimilar functions. Bird, bat, and pterosaur wings are analogous structures, but their forelimbs are homologous, sharing an ancestral state despite serving different functions. The opposite of convergence is divergent evolution, where related species evolve different traits. Convergent evolution is similar to parallel evolution, which occurs when two independent species evolve in the same direction and thus independently acquire similar characteristics; for instance, gliding frogs have evolved in parallel from multiple types of tree frog. Many instances of convergent evolution are known in plants, including the repeated development of C4 photosynthesis, seed dispersal by fleshy fruits adapted to be eaten by animals, and carnivory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Convergent Evolution";
        }
    }

    return nullptr;
}

string _Biology::Terms::CountercurrentExchange(string text)
{
    string model = "llama3";
    string definition = "Countercurrent exchange is a mechanism occurring in nature and mimicked in industry and engineering, in which there is a crossover of some property, usually heat or some chemical, between two flowing bodies flowing in opposite directions to each other. The flowing bodies can be liquids, gases, or even solid powders, or any combination of those. For example, in a distillation column, the vapors bubble up through the downward flowing liquid while exchanging both heat and mass. The maximum amount of heat or mass transfer that can be obtained is higher with countercurrent than co-current (parallel) exchange because countercurrent maintains a slowly declining difference or gradient (usually temperature or concentration difference). In cocurrent exchange the initial gradient is higher but falls off quickly, leading to wasted potential. For example, in the adjacent diagram, the fluid being heated (exiting top) has a higher exiting temperature than the cooled fluid (exiting bottom) that was used for heating. With cocurrent or parallel exchange the heated and cooled fluids can only approach one another. The result is that countercurrent exchange can achieve a greater amount of heat or mass transfer than parallel under otherwise similar conditions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Countercurrent Exchange";
        }
    }

    return nullptr;
}

string _Biology::Terms::Crista(string text)
{
    string model = "llama3";
    string definition = "A crista is a fold in the inner membrane of a mitochondrion. The name is from the Latin for crest or plume, and it gives the inner membrane its characteristic wrinkled shape, providing a large amount of surface area for chemical reactions to occur on. This aids aerobic cellular respiration, because the mitochondrion requires oxygen. Cristae are studded with proteins, including ATP synthase and a variety of cytochromes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Crista";
        }
    }

    return nullptr;
}

string _Biology::Terms::Cryobiology(string text)
{
    string model = "llama3";
    string definition = "Cryobiology is the branch of biology that studies the effects of low temperatures on living things within Earth\'s cryosphere or in science. In practice, cryobiology is the study of biological material or systems at temperatures below normal. Materials or systems studied may include proteins, cells, tissues, organs, or whole organisms. Temperatures may range from moderately hypothermic conditions to cryogenic temperatures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cryobiology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Cytology(string text)
{
    string model = "llama3";
    string definition = "Cell biology (also cellular biology or cytology) is a branch of biology that studies the structure, function, and behavior of cells. All living organisms are made of cells. A cell is the basic unit of life that is responsible for the living and functioning of organisms. Cell biology is the study of the structural and functional units of cells. Cell biology encompasses both prokaryotic and eukaryotic cells and has many subtopics which may include the study of cell metabolism, cell communication, cell cycle, biochemistry, and cell composition. The study of cells is performed using several microscopy techniques, cell culture, and cell fractionation. These have allowed for and are currently being used for discoveries and research pertaining to how cells function, ultimately giving insight into understanding larger organisms. Knowing the components of cells and how cells work is fundamental to all biological sciences while also being essential for research in biomedical fields such as cancer, and other diseases. Research in cell biology is interconnected to other fields such as genetics, molecular genetics, molecular biology, medical microbiology, immunology, and cytochemistry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cytology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Cytoplasm(string text)
{
    string model = "llama3";
    string definition = "In cell biology, the cytoplasm describes all material within a eukaryotic cell, enclosed by the cell membrane, except for the cell nucleus. The material inside the nucleus and contained within the nuclear membrane is termed the nucleoplasm. The main components of the cytoplasm are the cytosol (a gel-like substance), the organelles (the cell\'s internal sub-structures), and various cytoplasmic inclusions. The cytoplasm is about 80% water and is usually colorless. The submicroscopic ground cell substance, or cytoplasmic matrix, that remains after the exclusion of the cell organelles and particles is groundplasm. It is the hyaloplasm of light microscopy, a highly complex, polyphasic system in which all resolvable cytoplasmic elements are suspended, including the larger organelles such as the ribosomes, mitochondria, plant plastids, lipid droplets, and vacuoles. Many cellular activities take place within the cytoplasm, such as many metabolic pathways, including glycolysis, photosynthesis, and processes such as cell division. The concentrated inner area is called the endoplasm and the outer layer is called the cell cortex, or ectoplasm. Movement of calcium ions in and out of the cytoplasm is a signaling activity for metabolic processes. In plants, movement of the cytoplasm around vacuoles is known as cytoplasmic streaming.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cytoplasm";
        }
    }

    return nullptr;
}

string _Biology::Terms::Cytosine(string text)
{
    string model = "llama3";
    string definition = "Cytosine (symbol C or Cyt) is one of the four nucleotide bases found in DNA and RNA, along with adenine, guanine, and thymine (uracil in RNA). It is a pyrimidine derivative, with a heterocyclic aromatic ring and two substituents attached (an amine group at position 4 and a keto group at position 2). The nucleoside of cytosine is cytidine. In Watson-Crick base pairing, it forms three hydrogen bonds with guanine.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cytosine";
        }
    }

    return nullptr;
}

string _Biology::Terms::Cytoskeleton(string text)
{
    string model = "llama3";
    string definition = "The cytoskeleton is a complex, dynamic network of interlinking protein filaments present in the cytoplasm of all cells, including those of bacteria and archaea. In eukaryotes, it extends from the cell nucleus to the cell membrane and is composed of similar proteins in the various organisms. It is composed of three main components: microfilaments, intermediate filaments, and microtubules, and these are all capable of rapid growth and or disassembly depending on the cell\'s requirements. A multitude of functions can be performed by the cytoskeleton. Its primary function is to give the cell its shape and mechanical resistance to deformation, and through association with extracellular connective tissue and other cells it stabilizes entire tissues. The cytoskeleton can also contract, thereby deforming the cell and the cell\'s environment and allowing cells to migrate. Moreover, it is involved in many cell signaling pathways and in the uptake of extracellular material (endocytosis), the segregation of chromosomes during cellular division, the cytokinesis stage of cell division, as scaffolding to organize the contents of the cell in space and in intracellular transport (for example, the movement of vesicles and organelles within the cell) and can be a template for the construction of a cell wall. Furthermore, it can form specialized structures, such as flagella, cilia, lamellipodia and podosomes. The structure, function and dynamic behavior of the cytoskeleton can be very different, depending on organism and cell type. Even within one cell, the cytoskeleton can change through association with other proteins and the previous history of the network. A large-scale example of an action performed by the cytoskeleton is muscle contraction. This is carried out by groups of highly specialized cells working together. A main component in the cytoskeleton that helps show the true function of this muscle contraction is the microfilament. Microfilaments are composed of the most abundant cellular protein known as actin. During contraction of a muscle, within each muscle cell, myosin molecular motors collectively exert forces on parallel actin filaments. Muscle contraction starts from nerve impulses which then causes increased amounts of calcium to be released from the sarcoplasmic reticulum. Increases in calcium in the cytosol allows muscle contraction to begin with the help of two proteins, tropomyosin and troponin. Tropomyosin inhibits the interaction between actin and myosin, while troponin senses the increase in calcium and releases the inhibition. This action contracts the muscle cell, and through the synchronous process in many muscle cells, the entire muscle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cytoskeleton";
        }
    }

    return nullptr;
}

string _Biology::Terms::DarwinianFitness(string text)
{
    string model = "llama3";
    string definition = "Fitness (often denoted w in population genetics models) is a quantitative representation of individual reproductive success. It is also equal to the average contribution to the gene pool of the next generation, made by the same individuals of the specified genotype or phenotype. Fitness can be defined either with respect to a genotype or to a phenotype in a given environment or time. The fitness of a genotype is manifested through its phenotype, which is also affected by the developmental environment. The fitness of a given phenotype can also be different in different selective environments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Darwinian Fitness";
        }
    }

    return nullptr;
}

string _Biology::Terms::FitnessBiology(string text)
{
    string model = "llama3";
    string definition = "Fitness (often denoted w in population genetics models) is a quantitative representation of individual reproductive success. It is also equal to the average contribution to the gene pool of the next generation, made by the same individuals of the specified genotype or phenotype. Fitness can be defined either with respect to a genotype or to a phenotype in a given environment or time. The fitness of a genotype is manifested through its phenotype, which is also affected by the developmental environment. The fitness of a given phenotype can also be different in different selective environments. With asexual reproduction, it is sufficient to assign fitnesses to genotypes. With sexual reproduction, recombination scrambles alleles into different genotypes every generation; in this case, fitness values can be assigned to alleles by averaging over possible genetic backgrounds. Natural selection tends to make alleles with higher fitness more common over time, resulting in Darwinian evolution. The term \"Darwinian fitness\" can be used to make clear the distinction with physical fitness. Fitness does not include a measure of survival or life-span; Herbert Spencer\'s well-known phrase \"survival of the fittest\" should be interpreted as: \"Survival of the form (phenotypic or genotypic) that will leave the most copies of itself in successive generations.\" Inclusive fitness differs from individual fitness by including the ability of an allele in one individual to promote the survival and/or reproduction of other individuals that share that allele, in preference to individuals with a different allele. To avoid double counting, inclusive fitness excludes the contribution of other individuals to the survival and reproduction of the focal individual. One mechanism of inclusive fitness is kin selection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fitness Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Deciduous(string text)
{
    string model = "llama3";
    string definition = "In the fields of horticulture and botany, the term deciduous means \"falling off at maturity\" and \"tending to fall off\", in reference to trees and shrubs that seasonally shed leaves, usually in the autumn; to the shedding of petals, after flowering; and to the shedding of ripe fruit. The antonym of deciduous in the botanical sense is evergreen. Generally, the term \"deciduous\" means \"the dropping of a part that is no longer needed or useful\" and the \"falling away after its purpose is finished\". In plants, it is the result of natural processes. \"Deciduous\" has a similar meaning when referring to animal parts, such as deciduous antlers in deer, deciduous teeth (baby teeth) in some mammals (including humans); or decidua, the uterine lining that sheds off after birth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deciduous";
        }
    }

    return nullptr;
}

string _Biology::Terms::Decomposition(string text)
{
    string model = "llama3";
    string definition = "Decomposition or rot is the process by which dead organic substances are broken down into simpler organic or inorganic matter such as carbon dioxide, water, simple sugars and mineral salts. The process is a part of the nutrient cycle and is essential for recycling the finite matter that occupies physical space in the biosphere. Bodies of living organisms begin to decompose shortly after death. Animals, such as earthworms, also help decompose the organic materials. Organisms that do this are known as decomposers or detritivores. Although no two organisms decompose in the same way, they all undergo the same sequential stages of decomposition. The science which studies decomposition is generally referred to as taphonomy from the Greek word taphos, meaning tomb. Decomposition can also be a gradual process for organisms that have extended periods of dormancy. One can differentiate abiotic decomposition from biotic decomposition (biodegradation). The former means \"the degradation of a substance by chemical or physical processes\", e.g., hydrolysis; the latter means \"the metabolic breakdown of materials into simpler components by living organisms\", typically by microorganisms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Decomposition";
        }
    }

    return nullptr;
}

string _Biology::Terms::Decomposer(string text)
{
    string model = "llama3";
    string definition = "Decomposers are organisms that break down dead organisms and release the nutrients from the dead matter into the environment around them. Decomposition relies on chemical processes similar to digestion in animals; in fact, many sources use the words digestion and decomposition interchangeably. In both processes, complex molecules are chemically broken down by enzymes into simpler, smaller ones. The term \"digestion,\" however, is commonly used to refer to food breakdown that occurs within animal bodies, and results in the absorption of nutrients from the gut into the animal\'s bloodstream. This is contrasted with external digestion, meaning that, rather than swallowing food and then digesting it using enzymes located within a GI tract, an organism instead releases enzymes directly onto the food source. After allowing the enzymes time to digest the material, the decomposer then absorbs the nutrients from the environment into its cells. Decomposition is often erroneously conflated with this process of external digestion, probably because of the strong association between fungi, which are external digesters, and decomposition. The term \"decomposer\" refers to a role in an ecosystem, not to a particular class or type of organism, or even to a specific capacity of those organisms. The definition of \"decomposer\" therefore centers on the outcome of the decomposition process, rather than the types of organisms performing it. At the center of this definition are the organisms that benefit most directly from the increase in nutrient availability that results from decomposition; plants and other non-mobile (sessile) autotrophs cannot travel to seek out nutrients, and most cannot digest other organisms themselves. They must therefore rely on decomposers to free up nutrients from dead matter that they can then absorb. Note that this definition does not focus on where digestion takes place (i.e. inside or outside of an organism\'s body), but rather on where the products of that digestion end up. \"Decomposer\" as a category, therefore, would include not just fungi and bacteria, which perform external digestion, but also invertebrates such as earthworms, woodlice, and sea cucumbers that digest dead matter internally and release nutrients locally via their feces. In some definitions of decomposition that center on the means and location of digestion, these invertebrates, which digest their food internally, are set apart from decomposers and placed in a separate category called detritivores. These categories are not, in fact, mutually exclusive. \"Detritivore\" describes behavior and physiology, while \"decomposer\" describes an ecosystem role. Therefore, an organism can be both a detritivore and a decomposer. While there are also purely physical processes, like weathering and ultraviolet light, that contribute to decomposition, \"decomposer\" refers only to living organisms that contribute to the process, whether by physical or chemical breakdown of dead matter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Decomposer";
        }
    }

    return nullptr;
}

string _Biology::Terms::DehydrationReaction(string text)
{
    string model = "llama3";
    string definition = "In chemistry, a dehydration reaction is a chemical reaction that involves the loss of water from the reacting molecule or ion. Dehydration reactions are common processes, the reverse of a hydration reaction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dehydration Reaction";
        }
    }

    return nullptr;
}

string _Biology::Terms::Denaturation(string text)
{
    string model = "llama3";
    string definition = "In biochemistry, denaturation is a process in which proteins or nucleic acids lose folded structure present in their native state due to various factors, including application of some external stress or compound, such as a strong acid or base, a concentrated inorganic salt, an organic solvent (e.g., alcohol or chloroform), agitation and radiation, or heat. If proteins in a living cell are denatured, this results in disruption of cell activity and possibly cell death. Protein denaturation is also a consequence of cell death. Denatured proteins can exhibit a wide range of characteristics, from conformational change and loss of solubility or dissociation of cofactors to aggregation due to the exposure of hydrophobic groups. The loss of solubility as a result of denaturation is called coagulation. Denatured proteins lose their 3D structure, and therefore, cannot function. Proper protein folding is key to whether a globular or membrane protein can do its job correctly; it must be folded into the native shape to function. However, hydrogen bonds and cofactor-protein binding, which play a crucial role in folding, are rather weak, and thus, easily affected by heat, acidity, varying salt concentrations, chelating agents, and other stressors which can denature the protein. This is one reason why cellular homeostasis is physiologically necessary in most life forms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Denaturation";
        }
    }

    return nullptr;
}

string _Biology::Terms::Dendrite(string text)
{
    string model = "llama3";
    string definition = "A dendrite or dendron is a branched cytoplasmic process that extends from a nerve cell that propagates the electrochemical stimulation received from other neural cells to the cell body, or soma, of the neuron from which the dendrites project. Electrical stimulation is transmitted onto dendrites by upstream neurons (usually via their axons) via synapses which are located at various points throughout the dendritic tree. Dendrites play a critical role in integrating these synaptic inputs and in determining the extent to which action potentials are produced by the neuron.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dendrite";
        }
    }

    return nullptr;
}

string _Biology::Terms::Denitrification(string text)
{
    string model = "llama3";
    string definition = "Denitrification is a microbially facilitated process where nitrate (NO3-) is reduced and ultimately produces molecular nitrogen (N2) through a series of intermediate gaseous nitrogen oxide products. Facultative anaerobic bacteria perform denitrification as a type of respiration that reduces oxidized forms of nitrogen in response to the oxidation of an electron donor such as organic matter. The preferred nitrogen electron acceptors in order of most to least thermodynamically favorable include nitrate (NO3-), nitrite (NO2-), nitric oxide (NO), nitrous oxide (N2O) finally resulting in the production of dinitrogen (N2) completing the nitrogen cycle. Denitrifying microbes require a very low oxygen concentration of less than 10%, as well as organic C for energy. Since denitrification can remove NO3-, reducing its leaching to groundwater, it can be strategically used to treat sewage or animal residues of high nitrogen content. Denitrification can leak N2O, which is an ozone-depleting substance and a greenhouse gas that can have a considerable influence on global warming.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Denitrification";
        }
    }

    return nullptr;
}

string _Biology::Terms::DeoxyribonucleicAcid(string text)
{
    string model = "llama3";
    string definition = "Deoxyribonucleic acid is a polymer composed of two polynucleotide chains that coil around each other to form a double helix. The polymer carries genetic instructions for the development, functioning, growth and reproduction of all known organisms and many viruses. DNA and ribonucleic acid (RNA) are nucleic acids. Alongside proteins, lipids and complex carbohydrates (polysaccharides), nucleic acids are one of the four major types of macromolecules that are essential for all known forms of life. The two DNA strands are known as polynucleotides as they are composed of simpler monomeric units called nucleotides. Each nucleotide is composed of one of four nitrogen-containing nucleobases (cytosine , guanine , adenine  or thymine ), a sugar called deoxyribose, and a phosphate group. The nucleotides are joined to one another in a chain by covalent bonds (known as the phosphodiester linkage) between the sugar of one nucleotide and the phosphate of the next, resulting in an alternating sugar-phosphate backbone. The nitrogenous bases of the two separate polynucleotide strands are bound together, according to base pairing rules (A with T and C with G), with hydrogen bonds to make double-stranded DNA. The complementary nitrogenous bases are divided into two groups, the single-ringed pyrimidines and the double-ringed purines. In DNA, the pyrimidines are thymine and cytosine; the purines are adenine and guanine. Both strands of double-stranded DNA store the same biological information. This information is replicated when the two strands separate. A large part of DNA (more than 98% for humans) is non-coding, meaning that these sections do not serve as patterns for protein sequences. The two strands of DNA run in opposite directions to each other and are thus antiparallel. Attached to each sugar is one of four types of nucleobases (or bases). It is the sequence of these four nucleobases along the backbone that encodes genetic information. RNA strands are created using DNA strands as a template in a process called transcription, where DNA bases are exchanged for their corresponding bases except in the case of thymine (T), for which RNA substitutes uracil (U). Under the genetic code, these RNA strands specify the sequence of amino acids within proteins in a process called translation. Within eukaryotic cells, DNA is organized into long structures called chromosomes. Before typical cell division, these chromosomes are duplicated in the process of DNA replication, providing a complete set of chromosomes for each daughter cell. Eukaryotic organisms (animals, plants, fungi and protists) store most of their DNA inside the cell nucleus as nuclear DNA, and some in the mitochondria as mitochondrial DNA or in chloroplasts as chloroplast DNA. In contrast, prokaryotes (bacteria and archaea) store their DNA only in the cytoplasm, in circular chromosomes. Within eukaryotic chromosomes, chromatin proteins, such as histones, compact and organize DNA. These compacting structures guide the interactions between DNA and other proteins, helping control which parts of the DNA are transcribed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deoxyribonucleic Acid";
        }
    }

    return nullptr;
}

string _Biology::Terms::Depolarization(string text)
{
    string model = "llama3";
    string definition = "In biology, depolarization or hypopolarization is a change within a cell, during which the cell undergoes a shift in electric charge distribution, resulting in less negative charge inside the cell compared to the outside. Depolarization is essential to the function of many cells, communication between cells, and the overall physiology of an organism. Most cells in higher organisms maintain an internal environment that is negatively charged relative to the cell\'s exterior. This difference in charge is called the cell\'s membrane potential. In the process of depolarization, the negative internal charge of the cell temporarily becomes more positive (less negative). This shift from a negative to a more positive membrane potential occurs during several processes, including an action potential. During an action potential, the depolarization is so large that the potential difference across the cell membrane briefly reverses polarity, with the inside of the cell becoming positively charged. The change in charge typically occurs due to an influx of sodium ions into a cell, although it can be mediated by an influx of any kind of cation or efflux of any kind of anion. The opposite of a depolarization is called a hyperpolarization. Usage of the term \"depolarization\" in biology differs from its use in physics, where it refers to situations in which any form of polarity ( i.e. the presence of any electrical charge, whether positive or negative) changes to a value of zero. Depolarization is sometimes referred to as \"hypopolarization\" (as opposed to hyperpolarization).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Depolarization";
        }
    }

    return nullptr;
}

string _Biology::Terms::Desmosome(string text)
{
    string model = "llama3";
    string definition = "is a cell structure specialized for cell-to-cell adhesion. A type of junctional complex, they are localized spot-like adhesions randomly arranged on the lateral sides of plasma membranes. Desmosomes are one of the stronger cell-to-cell adhesion types and are found in tissue that experience intense mechanical stress, such as cardiac muscle tissue, bladder tissue, gastrointestinal mucosa, and epithelia.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Desmosome";
        }
    }

    return nullptr;
}

string _Biology::Terms::DevelopmentalBiology(string text)
{
    string model = "llama3";
    string definition = "Developmental biology is the study of the process by which animals and plants grow and develop. Developmental biology also encompasses the biology of regeneration, asexual reproduction, metamorphosis, and the growth and differentiation of stem cells in the adult organism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Developmental Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Disease(string text)
{
    string model = "llama3";
    string definition = "A disease is a particular abnormal condition that adversely affects the structure or function of all or part of an organism and is not immediately due to any external injury. Diseases are often known to be medical conditions that are associated with specific signs and symptoms. A disease may be caused by external factors such as pathogens or by internal dysfunctions. For example, internal dysfunctions of the immune system can produce a variety of different diseases, including various forms of immunodeficiency, hypersensitivity, allergies, and autoimmune disorders. In humans, disease is often used more broadly to refer to any condition that causes pain, dysfunction, distress, social problems, or death to the person affected, or similar problems for those in contact with the person. In this broader sense, it sometimes includes injuries, disabilities, disorders, syndromes, infections, isolated symptoms, deviant behaviors, and atypical variations of structure and function, while in other contexts and for other purposes these may be considered distinguishable categories. Diseases can affect people not only physically but also mentally, as contracting and living with a disease can alter the affected person\'s perspective on life. Death due to disease is called death by natural causes. There are four main types of disease: infectious diseases, deficiency diseases, hereditary diseases (including both genetic and non-genetic hereditary diseases), and physiological diseases. Diseases can also be classified in other ways, such as communicable versus non-communicable diseases. The deadliest diseases in humans are coronary artery disease (blood flow obstruction), followed by cerebrovascular disease and lower respiratory infections. In developed countries, the diseases that cause the most sickness overall are neuropsychiatric conditions, such as depression and anxiety.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Disease";
        }
    }

    return nullptr;
}

string _Biology::Terms::DNA(string text)
{
    string model = "llama3";
    string definition = "Deoxyribonucleic acid  is a polymer composed of two polynucleotide chains that coil around each other to form a double helix. The polymer carries genetic instructions for the development, functioning, growth and reproduction of all known organisms and many viruses. DNA and ribonucleic acid (RNA) are nucleic acids. Alongside proteins, lipids and complex carbohydrates (polysaccharides), nucleic acids are one of the four major types of macromolecules that are essential for all known forms of life. The two DNA strands are known as polynucleotides as they are composed of simpler monomeric units called nucleotides. Each nucleotide is composed of one of four nitrogen-containing nucleobases (cytosine , guanine , adenine  or thymine ), a sugar called deoxyribose, and a phosphate group. The nucleotides are joined to one another in a chain by covalent bonds (known as the phosphodiester linkage) between the sugar of one nucleotide and the phosphate of the next, resulting in an alternating sugar-phosphate backbone. The nitrogenous bases of the two separate polynucleotide strands are bound together, according to base pairing rules (A with T and C with G), with hydrogen bonds to make double-stranded DNA. The complementary nitrogenous bases are divided into two groups, the single-ringed pyrimidines and the double-ringed purines. In DNA, the pyrimidines are thymine and cytosine; the purines are adenine and guanine. Both strands of double-stranded DNA store the same biological information. This information is replicated when the two strands separate. A large part of DNA (more than 98% for humans) is non-coding, meaning that these sections do not serve as patterns for protein sequences. The two strands of DNA run in opposite directions to each other and are thus antiparallel. Attached to each sugar is one of four types of nucleobases (or bases). It is the sequence of these four nucleobases along the backbone that encodes genetic information. RNA strands are created using DNA strands as a template in a process called transcription, where DNA bases are exchanged for their corresponding bases except in the case of thymine (T), for which RNA substitutes uracil (U). Under the genetic code, these RNA strands specify the sequence of amino acids within proteins in a process called translation. Within eukaryotic cells, DNA is organized into long structures called chromosomes. Before typical cell division, these chromosomes are duplicated in the process of DNA replication, providing a complete set of chromosomes for each daughter cell. Eukaryotic organisms (animals, plants, fungi and protists) store most of their DNA inside the cell nucleus as nuclear DNA, and some in the mitochondria as mitochondrial DNA or in chloroplasts as chloroplast DNA. In contrast, prokaryotes (bacteria and archaea) store their DNA only in the cytoplasm, in circular chromosomes. Within eukaryotic chromosomes, chromatin proteins, such as histones, compact and organize DNA. These compacting structures guide the interactions between DNA and other proteins, helping control which parts of the DNA are transcribed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "D N A";
        }
    }

    return nullptr;
}

string _Biology::Terms::DNAReplication(string text)
{
    string model = "llama3";
    string definition = "In molecular biology, DNA replication is the biological process of producing two identical replicas of DNA from one original DNA molecule. DNA replication occurs in all living organisms acting as the most essential part of biological inheritance. This is essential for cell division during growth and repair of damaged tissues, while it also ensures that each of the new cells receives its own copy of the DNA. The cell possesses the distinctive property of division, which makes replication of DNA essential. DNA is made up of a double helix of two complementary strands. The double helix describes the appearance of a double-stranded DNA which is thus composed of two linear strands that run opposite to each other and twist together to form. During replication, these strands are separated. Each strand of the original DNA molecule then serves as a template for the production of its counterpart, a process referred to as semiconservative replication. As a result of semi-conservative replication, the new helix will be composed of an original DNA strand as well as a newly synthesized strand. Cellular proofreading and error-checking mechanisms ensure near perfect fidelity for DNA replication. In a cell, DNA replication begins at specific locations, or origins of replication, in the genome which contains the genetic material of an organism. Unwinding of DNA at the origin and synthesis of new strands, accommodated by an enzyme known as helicase, results in replication forks growing bi-directionally from the origin. A number of proteins are associated with the replication fork to help in the initiation and continuation of DNA synthesis. Most prominently, DNA polymerase synthesizes the new strands by adding nucleotides that complement each (template) strand. DNA replication occurs during the S-stage of interphase. DNA replication (DNA amplification) can also be performed in vitro (artificially, outside a cell). DNA polymerases isolated from cells and artificial DNA primers can be used to start DNA synthesis at known sequences in a template DNA molecule. Polymerase chain reaction (PCR), ligase chain reaction (LCR), and transcription-mediated amplification (TMA) are examples. In March 2021, researchers reported evidence suggesting that a preliminary form of transfer RNA, a necessary component of translation, the biological synthesis of new proteins in accordance with the genetic code, could have been a replicator molecule itself in the very early development of life, or abiogenesis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DNA Replication";
        }
    }

    return nullptr;
}

string _Biology::Terms::DNASequencing(string text)
{
    string model = "llama3";
    string definition = "DNA sequencing is the process of determining the nucleic acid sequence - the order of nucleotides in DNA. It includes any method or technology that is used to determine the order of the four bases: adenine, guanine, cytosine, and thymine. The advent of rapid DNA sequencing methods has greatly accelerated biological and medical research and discovery.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DNA Sequencing";
        }
    }

    return nullptr;
}

string _Biology::Terms::Drug(string text)
{
    string model = "llama3";
    string definition = "A drug is any chemical substance other than a nutrient or an essential dietary ingredient, which, when administered to a living organism, produces a biological effect. Consumption of drugs can be via inhalation, injection, smoking, ingestion, absorption via a patch on the skin, suppository, or dissolution under the tongue. In pharmacology, a drug is a chemical substance, typically of known structure, which, when administered to a living organism, produces a biological effect. A pharmaceutical drug, also called a medication or medicine, is a chemical substance used to treat, cure, prevent, or diagnose a disease or to promote well-being. Traditionally drugs were obtained through extraction from medicinal plants, but more recently also by organic synthesis. Pharmaceutical drugs may be used for a limited duration, or on a regular basis for chronic disorders.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Drug";
        }
    }

    return nullptr;
}

string _Biology::Terms::Dimorphism(string text)
{
    string model = "llama3";
    string definition = "The existence of a morphological distinction between organisms of the same species, such that individuals of that species occur in one of two distinct forms which differ in one or more characteristics, such as colour, size, shape, or any other phenotypic trait. Dimorphism based on sex - e.g. male vs. female - is common in sexually reproducing organisms such as plants and animals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dimorphism";
        }
    }

    return nullptr;
}

string _Biology::Terms::Dynein(string text)
{
    string model = "llama3";
    string definition = "Dyneins are a family of cytoskeletal motor proteins that move along microtubules in cells. They convert the chemical energy stored in ATP to mechanical work. Dynein transports various cellular cargos, provides forces and displacements important in mitosis, and drives the beat of eukaryotic cilia and flagella. All of these functions rely on dynein\'s ability to move towards the minus-end of the microtubules, known as retrograde transport; thus, they are called \"minus-end directed motors\". In contrast, most kinesin motor proteins move toward the microtubules\' plus-end, in what is called anterograde transport.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dynein";
        }
    }

    return nullptr;
}

string _Biology::Terms::EcologicalEfficiency(string text)
{
    string model = "llama3";
    string definition = "Ecological efficiency describes the efficiency with which energy is transferred from one trophic level to the next. It is determined by a combination of efficiencies relating to organismic resource acquisition and assimilation in an ecosystem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ecological Efficiency";
        }
    }

    return nullptr;
}

string _Biology::Terms::EcologicalPyramid(string text)
{
    string model = "llama3";
    string definition = "An ecological pyramid (also trophic pyramid, Eltonian pyramid, energy pyramid, or sometimes food pyramid) is a graphical representation designed to show the biomass or bioproductivity at each trophic level in an ecosystem. A pyramid of energy shows how much energy is retained in the form of new biomass from each trophic level, while a pyramid of biomass shows how much biomass (the amount of living or organic matter present in an organism) is present in the organisms. There is also a pyramid of numbers representing the number of individual organisms at each trophic level. Pyramids of energy are normally upright, but other pyramids can be inverted (pyramid of biomass for marine region) or take other shapes (spindle shaped pyramid). Ecological pyramids begin with producers on the bottom (such as plants) and proceed through the various trophic levels (such as herbivores that eat plants, then carnivores that eat flesh, then omnivores that eat both plants and flesh, and so on). The highest level is the top of the food chain. Biomass can be measured by a bomb calorimeter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ecological Pyramid";
        }
    }

    return nullptr;
}

string _Biology::Terms::EcologicalSuccession(string text)
{
    string model = "llama3";
    string definition = "Ecological succession is the process of change in the species that make up an ecological community over time. The process of succession occurs either after the initial colonization of a newly created habitat, or after a disturbance substantially alters a pre-existing habitat. Succession that begins in new habitats, uninfluenced by pre-existing communities, is called primary succession, whereas succession that follows disruption of a pre-existing community is called secondary succession. Primary succession may happen after a lava flow or the emergence of a new island from the ocean. Surtsey, a volcanic island off the southern coast of Iceland, is an important example of a place where primary succession has been observed. On the other hand, secondary succession happens after disturbance of a community, such as from a fire, severe windthrow, or logging. Succession was among the first theories advanced in ecology. Ecological succession was first documented in the Indiana Dunes of Northwest Indiana and remains an important ecological topic of study. Over time, the understanding of succession has changed from a linear progression to a stable climax state, to a more complex, cyclical model that de-emphasizes the idea of organisms having fixed roles or relationships.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ecological Succession";
        }
    }

    return nullptr;
}

string _Biology::Terms::Ecology(string text)
{
    string model = "llama3";
    string definition = "Ecology is the natural science of the relationships among living organisms and their environment. Ecology considers organisms at the individual, population, community, ecosystem, and biosphere levels. Ecology overlaps with the closely related sciences of biogeography, evolutionary biology, genetics, ethology, and natural history. Ecology is a branch of biology, and is the study of abundance, biomass, and distribution of organisms in the context of the environment. It encompasses life processes, interactions, and adaptations; movement of materials and energy through living communities; successional development of ecosystems; cooperation, competition, and predation within and between species; and patterns of biodiversity and its effect on ecosystem processes. Ecology has practical applications in conservation biology, wetland management, natural resource management (agroecology, agriculture, forestry, agroforestry, fisheries, mining, tourism), urban planning (urban ecology), community health, economics, basic and applied science, and human social interaction (human ecology). ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ecology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Ecophysiology(string text)
{
    string model = "llama3";
    string definition = "Ecophysiology environmental physiology or physiological ecology is a biological discipline that studies the response of an organism\'s physiology to environmental conditions. It is closely related to comparative physiology and evolutionary physiology. Ernst Haeckel\'s coinage bionomy is sometimes employed as a synonym.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ecophysiology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Ecosystem(string text)
{
    string model = "llama3";
    string definition = "An ecosystem (or ecological system) is a system that environments and their organisms form through their interaction. The biotic and abiotic components are linked together through nutrient cycles and energy flows. Ecosystems are controlled by external and internal factors. External factors such as climate, parent material which forms the soil and topography, control the overall structure of an ecosystem but are not themselves influenced by the ecosystem. Internal factors are controlled, for example, by decomposition, root competition, shading, disturbance, succession, and the types of species present. While the resource inputs are generally controlled by external processes, the availability of these resources within the ecosystem is controlled by internal factors. Therefore, internal factors not only control ecosystem processes but are also controlled by them. Ecosystems are dynamic entities-they are subject to periodic disturbances and are always in the process of recovering from some past disturbance. The tendency of an ecosystem to remain close to its equilibrium state, despite that disturbance, is termed its resistance. The capacity of a system to absorb disturbance and reorganize while undergoing change so as to retain essentially the same function, structure, identity, and feedbacks is termed its ecological resilience. Ecosystems can be studied through a variety of approaches-theoretical studies, studies monitoring specific ecosystems over long periods of time, those that look at differences between ecosystems to elucidate how they work and direct manipulative experimentation. Biomes are general classes or categories of ecosystems. However, there is no clear distinction between biomes and ecosystems. Ecosystem classifications are specific kinds of ecological classifications that consider all four elements of the definition of ecosystems: a biotic component, an abiotic complex, the interactions between and within them, and the physical space they occupy. Biotic factors of the ecosystem are living things; such as plants, animals, and bacteria, while abiotic are non-living components; such as water, soil and atmosphere. Plants allow energy to enter the system through photosynthesis, building up plant tissue. Animals play an important role in the movement of matter and energy through the system, by feeding on plants and on one another. They also influence the quantity of plant and microbial biomass present. By breaking down dead organic matter, decomposers release carbon back to the atmosphere and facilitate nutrient cycling by converting nutrients stored in dead biomass back to a form that can be readily used by plants and microbes. Ecosystems provide a variety of goods and services upon which people depend, and may be part of. Ecosystem goods include the \"tangible, material products\" of ecosystem processes such as water, food, fuel, construction material, and medicinal plants. Ecosystem services, on the other hand, are generally \"improvements in the condition or location of things of value\". These include things like the maintenance of hydrological cycles, cleaning air and water, the maintenance of oxygen in the atmosphere, crop pollination and even things like beauty, inspiration and opportunities for research. Many ecosystems become degraded through human impacts, such as soil loss, air and water pollution, habitat fragmentation, water diversion, fire suppression, and introduced species and invasive species. These threats can lead to abrupt transformation of the ecosystem or to gradual disruption of biotic processes and degradation of abiotic conditions of the ecosystem. Once the original ecosystem has lost its defining features, it is considered \"collapsed\". Ecosystem restoration can contribute to achieving the Sustainable Development Goals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ecosystem";
        }
    }

    return nullptr;
}

string _Biology::Terms::Ecotype(string text)
{
    string model = "llama3";
    string definition = "Ecotypes are organisms which belong to the same species but possess different phenotypical features as a result of environmental factors such as elevation, climate and predation. Ecotypes can be seen in wide geographical distributions and may eventually lead to speciation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ecotype";
        }
    }

    return nullptr;
}

string _Biology::Terms::Ectotherm(string text)
{
    string model = "llama3";
    string definition = "An ectotherm more commonly referred to as a \"cold-blooded animal\", is an animal in which internal physiological sources of heat, such as blood, are of relatively small or of quite negligible importance in controlling body temperature. Such organisms (frogs, for example) rely on environmental heat sources, which permit them to operate at very economical metabolic rates. Some of these animals live in environments where temperatures are practically constant, as is typical of regions of the abyssal ocean and hence can be regarded as homeothermic ectotherms. In contrast, in places where temperature varies so widely as to limit the physiological activities of other kinds of ectotherms, many species habitually seek out external sources of heat or shelter from heat; for example, many reptiles regulate their body temperature by basking in the sun, or seeking shade when necessary in addition to a whole host of other behavioral thermoregulation mechanisms. In contrast to ectotherms, endotherms rely largely, even predominantly, on heat from internal metabolic processes, and mesotherms use an intermediate strategy. As there are more than two categories of temperature control utilized by animals, the terms warm-blooded and cold-blooded have been deprecated as scientific terms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ectotherm";
        }
    }

    return nullptr;
}

string _Biology::Terms::Effector(string text)
{
    string model = "llama3";
    string definition = "In biology, an effector is a general term that can refer to several types of molecules or cells depending on the context: Small molecule effectors, A small molecule that selectively binds to a protein to regulate its biological activity can be called an effector. In this manner, effector molecules act as ligands that can increase or decrease enzyme activity, gene expression, influence cell signaling, or other protein functions. An example of such an effector is oxygen, which is an allosteric effector of hemoglobin - oxygen binding to one of the four hemoglobin subunits greatly increases the affinity of the rest of the subunits to oxygen. Certain drug molecules also fall into this category - for example the antibiotic rifampicin used in the treatment of tuberculosis binds the initiation σ factor subunit of the bacterial RNA polymerase, preventing the transcription of bacterial genes. The term can also be used to describe small molecules that can directly bind to and regulate the expression of mRNAs. One example for such an effector is guanine, which can be recognised by specific sequences (known as riboswitches) found on mRNAs, and its binding to those sequences prevents the translation of the mRNA into a protein. See also: purine riboswitch. Protein effectors, An effector can also be used to refer to a protein that is involved in cellular signal transduction cascades. Such an example are RAS effector proteins, which are all able to bind RAS.GTP, but trigger different cell pathways upon doing so - such as the Ras-Raf-MEK-ERK pathway, the PI3K pathway or several others. An effector hormone is a hormone that acts on a particular tissue - an example of such a hormone is thyroxine (T4), which regulates metabolism in many tissues throughout the body. Antibody Effectors are effectors involved with the production and secretion of molecules involved in pathogen defense, such as Immunoglobulin. Many antibodies then act as effector molecules for the immune system of the organism. Bacterial effector proteins are proteins injected by (usually pathogenic) bacterial cells into the cells of their host. The injected proteins serve different functions dependent on the bacteria of origin, but typically serve the purpose of inhibiting the host cells immune response. An example of these are the Transcription activator-like effector (TALE) proteins secreted by bacteria from the genus Xanthomonas. Fungal effectors are secreted by pathogenic or beneficial fungi into and around host cells by invasive hyphae to disable defense components or facilitate colonization. Protein secretion systems in fungi involve the Spitzenkörper. RNA effectors, Certain plant pathogens, such as Botrytis cinerea, secrete small RNAs (sRNAs) into the host cells and downregulate plant proteins involved in the immune response by RNA interference. Effector cells, In immunology, effector cells are cells of either the innate or the adaptive immune system that mediate the immune response. Effector neurons can be used to refer to population of neurons in the nervous system, which are responsible for a certain brain function. An example are the neurons in the mesopontine tegmental anesthesia area (MPTA) of the brainstem, which have been mapped as the region of the brain that is responsive to anaesthetics in a rodent model.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Effector";
        }
    }

    return nullptr;
}

string _Biology::Terms::Efferent(string text)
{
    string model = "llama3";
    string definition = "Conducted or conducting outwards or away from something (for nerves, the central nervous system; for blood vessels, the organ supplied). Contrast afferent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Efferent";
        }
    }

    return nullptr;
}

string _Biology::Terms::Egg(string text)
{
    string model = "llama3";
    string definition = "An egg is an organic vessel grown by an animal to carry a possibly fertilized egg cell (a zygote) and to incubate from it an embryo within the egg until the embryo has become an animal fetus that can survive on its own, at which point the animal hatches. Most arthropods, vertebrates (excluding live-bearing mammals), and mollusks lay eggs, although some, such as scorpions, do not. Reptile eggs, bird eggs, and monotreme eggs are laid out of water and are surrounded by a protective shell, either flexible or inflexible. Eggs laid on land or in nests are usually kept within a warm and favorable temperature range while the embryo grows. When the embryo is adequately developed it hatches, i.e., breaks out of the egg\'s shell. Some embryos have a temporary egg tooth they use to crack, pip, or break the eggshell or covering. The largest recorded egg is from a whale shark and was 30 cm * 14 cm * 9 cm (11.8 in * 5.5 in * 3.5 in) in size. Whale shark eggs typically hatch within the mother. At 1.5 kg (3.3 lb) and up to 17.8 cm * 14 cm (7.0 in * 5.5 in), the ostrich egg is the largest egg of any living bird,: 130  though the extinct elephant bird and some non-avian dinosaurs laid larger eggs. The bee hummingbird produces the smallest known bird egg, which measures between 6.35-11.4 millimetres (0.250-0.449 in) long and weighs half of a gram (around 0.02 oz).: 132  Some eggs laid by reptiles and most fish, amphibians, insects, and other invertebrates can be even smaller.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Egg";
        }
    }

    return nullptr;
}

string _Biology::Terms::ElectrochemicalGradient(string text)
{
    string model = "llama3";
    string definition = "An electrochemical gradient is a gradient of electrochemical potential, usually for an ion that can move across a membrane. The gradient consists of two parts: The chemical gradient, or difference in solute concentration across a membrane. The electrical gradient, or difference in charge across a membrane. When there are unequal concentrations of an ion across a permeable membrane, the ion will move across the membrane from the area of higher concentration to the area of lower concentration through simple diffusion. Ions also carry an electric charge that forms an electric potential across a membrane. If there is an unequal distribution of charges across the membrane, then the difference in electric potential generates a force that drives ion diffusion until the charges are balanced on both sides of the membrane. Electrochemical gradients are essential to the operation of batteries and other electrochemical cells, photosynthesis and cellular respiration, and certain other biological processes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electrochemical Gradient";
        }
    }

    return nullptr;
}

string _Biology::Terms::ElectronAcceptor(string text)
{
    string model = "llama3";
    string definition = "An electron acceptor is a chemical entity that accepts electrons transferred to it from another compound. Electron acceptors are oxidizing agents. The electron accepting power of an electron acceptor is measured by its redox potential. In the simplest case, electron acceptors are reduced by one electron. The process can alter the structure of the acceptor substantially. When the added electron is highly delocalized, the structural consequences of the reduction can be subtle. The central C-C distance in the electron acceptor tetracyanoethylene elongates from 135 to 143 pm upon acceptance of an electron. In the formation of some donor-acceptor complexes, less than one electron is transferred. TTF-TCNQ is an charge transfer complex.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron Acceptor";
        }
    }

    return nullptr;
}

string _Biology::Terms::ElectronCarrier(string text)
{
    string model = "llama3";
    string definition = "An electron transport chain (ETC) is a series of protein complexes and other molecules which transfer electrons from electron donors to electron acceptors via redox reactions (both reduction and oxidation occurring simultaneously) and couples this electron transfer with the transfer of protons (H+ ions) across a membrane. Many of the enzymes in the electron transport chain are embedded within the membrane. The flow of electrons through the electron transport chain is an exergonic process. The energy from the redox reactions creates an electrochemical proton gradient that drives the synthesis of adenosine triphosphate (ATP). In aerobic respiration, the flow of electrons terminates with molecular oxygen as the final electron acceptor. In anaerobic respiration, other electron acceptors are used, such as sulfate. In an electron transport chain, the redox reactions are driven by the difference in the Gibbs free energy of reactants and products. The free energy released when a higher-energy electron donor and acceptor convert to lower-energy products, while electrons are transferred from a lower to a higher redox potential, is used by the complexes in the electron transport chain to create an electrochemical gradient of ions. It is this electrochemical gradient that drives the synthesis of ATP via coupling with oxidative phosphorylation with ATP synthase. In eukaryotic organisms, the electron transport chain, and site of oxidative phosphorylation, is found on the inner mitochondrial membrane. The energy released by reactions of oxygen and reduced compounds such as cytochrome c and (indirectly) NADH and FADH2 is used by the electron transport chain to pump protons into the intermembrane space, generating the electrochemical gradient over the inner mitochondrial membrane. In photosynthetic eukaryotes, the electron transport chain is found on the thylakoid membrane. Here, light energy drives electron transport through a proton pump and the resulting proton gradient causes subsequent synthesis of ATP. In bacteria, the electron transport chain can vary between species but it always constitutes a set of redox reactions that are coupled to the synthesis of ATP through the generation of an electrochemical gradient and oxidative phosphorylation through ATP synthase.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron Carrier";
        }
    }

    return nullptr;
}

string _Biology::Terms::ElectronDonor(string text)
{
    string model = "llama3";
    string definition = "In chemistry, an electron donor is a chemical entity that transfers electrons to another compound. It is a reducing agent that, by virtue of its donating electrons, is itself oxidized in the process. An obsolete definition equated an electron donor and a Lewis base. In contrast to traditional reducing agents, electron transfer from a donor to an electron acceptor may be only fractional. The electron is not completely transferred, which results in an electron resonance between the donor and acceptor. This leads to the formation of charge transfer complexes, in which the components largely retain their chemical identities. The electron donating power of a donor molecule is measured by its ionization potential, which is the energy required to remove an electron from the highest occupied molecular orbital (HOMO). The overall energy balance (deltaE), i.e., energy gained or lost, in an electron donor-acceptor transfer is determined by the difference between the acceptor\'s electron affinity (A) and the ionization potential (I):";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::ElectronMicroscope(string text)
{
    string model = "llama3";
    string definition = "An electron microscope is a microscope that uses a beam of electrons as a source of illumination. They use electron optics that are analogous to the glass lenses of an optical light microscope to control the electron beam, for instance focusing them to produce magnified images or electron diffraction patterns. As the wavelength of an electron can be up to 100,000 times smaller than that of visible light, electron microscopes have a much higher resolution of about 0.1 nm, which compares to about 200 nm for light microscopes. Electron microscope may refer to: Transmission electron microscopy (TEM) where swift electrons go through a thin sample, Scanning transmission electron microscopy (STEM) which is similar to TEM with a scanned electron probe, Scanning electron microscope (SEM) which is similar to STEM, but with thick samples, Electron microprobe similar to a SEM, but more for chemical analysis, Low-energy electron microscopy (LEEM), used to image surfaces, Photoemission electron microscopy (PEEM) which is similar to LEEM using electrons emitted from surfaces by photons, Additional details can be found in the above links. This article contains some general information mainly about transmission electron microscopes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron Microscope";
        }
    }

    return nullptr;
}

string _Biology::Terms::ElectronTransportChain(string text)
{
    string model = "llama3";
    string definition = "An electron transport chain (ETC) is a series of protein complexes and other molecules which transfer electrons from electron donors to electron acceptors via redox reactions (both reduction and oxidation occurring simultaneously) and couples this electron transfer with the transfer of protons (H+ ions) across a membrane. Many of the enzymes in the electron transport chain are embedded within the membrane. The flow of electrons through the electron transport chain is an exergonic process. The energy from the redox reactions creates an electrochemical proton gradient that drives the synthesis of adenosine triphosphate (ATP). In aerobic respiration, the flow of electrons terminates with molecular oxygen as the final electron acceptor. In anaerobic respiration, other electron acceptors are used, such as sulfate. In an electron transport chain, the redox reactions are driven by the difference in the Gibbs free energy of reactants and products. The free energy released when a higher-energy electron donor and acceptor convert to lower-energy products, while electrons are transferred from a lower to a higher redox potential, is used by the complexes in the electron transport chain to create an electrochemical gradient of ions. It is this electrochemical gradient that drives the synthesis of ATP via coupling with oxidative phosphorylation with ATP synthase. In eukaryotic organisms, the electron transport chain, and site of oxidative phosphorylation, is found on the inner mitochondrial membrane. The energy released by reactions of oxygen and reduced compounds such as cytochrome c and (indirectly) NADH and FADH2 is used by the electron transport chain to pump protons into the intermembrane space, generating the electrochemical gradient over the inner mitochondrial membrane. In photosynthetic eukaryotes, the electron transport chain is found on the thylakoid membrane. Here, light energy drives electron transport through a proton pump and the resulting proton gradient causes subsequent synthesis of ATP. In bacteria, the electron transport chain can vary between species but it always constitutes a set of redox reactions that are coupled to the synthesis of ATP through the generation of an electrochemical gradient and oxidative phosphorylation through ATP synthase.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Electron Transport Chain";
        }
    }

    return nullptr;
}

string _Biology::Terms::Embryo(string text)
{
    string model = "llama3";
    string definition = "An embryo is the initial stage of development for a multicellular organism. In organisms that reproduce sexually, embryonic development is the part of the life cycle that begins just after fertilization of the female egg cell by the male sperm cell. The resulting fusion of these two cells produces a single-celled zygote that undergoes many cell divisions that produce cells known as blastomeres. The blastomeres (4-cell stage) are arranged as a solid ball that when reaching a certain size, called a morula, (16-cell stage) takes in fluid to create a cavity called a blastocoel. The structure is then termed a blastula, or a blastocyst in mammals. The mammalian blastocyst hatches before implantating into the endometrial lining of the womb. Once implanted the embryo will continue its development through the next stages of gastrulation, neurulation, and organogenesis. Gastrulation is the formation of the three germ layers that will form all of the different parts of the body. Neurulation forms the nervous system, and organogenesis is the development of all the various tissues and organs of the body. A newly developing human is typically referred to as an embryo until the ninth week after conception, when it is then referred to as a fetus. In other multicellular organisms, the word \"embryo\" can be used more broadly to any early developmental or life cycle stage prior to birth or hatching.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Embryo";
        }
    }

    return nullptr;
}

string _Biology::Terms::Embryology(string text)
{
    string model = "llama3";
    string definition = "Embryology, is the branch of animal biology that studies the prenatal development of gametes (sex cells), fertilization, and development of embryos and fetuses. Additionally, embryology encompasses the study of congenital disorders that occur before birth, known as teratology. Early embryology was proposed by Marcello Malpighi, and known as preformationism, the theory that organisms develop from pre-existing miniature versions of themselves. Aristotle proposed the theory that is now accepted, epigenesis. Epigenesis is the idea that organisms develop from seed or egg in a sequence of steps. Modern embryology developed from the work of Karl Ernst von Baer, though accurate observations had been made in Italy by anatomists such as Aldrovandi and Leonardo da Vinci in the Renaissance. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Embryology";
        }
    }

    return nullptr;
}

string _Biology::Terms::EndangeredSpecies(string text)
{
    string model = "llama3";
    string definition = "An endangered species is a species that is very likely to become extinct in the near future, either worldwide or in a particular political jurisdiction. Endangered species may be at risk due to factors such as habitat loss, poaching, invasive species, and climate change. The International Union for Conservation of Nature (IUCN) Red List lists the global conservation status of many species, and various other agencies assess the status of species within particular areas. Many nations have laws that protect conservation-reliant species which, for example, forbid hunting, restrict land development, or create protected areas. Some endangered species are the target of extensive conservation efforts such as captive breeding and habitat restoration. Human activity is a significant cause in causing some species to become endangered.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Endangered Species";
        }
    }

    return nullptr;
}

string _Biology::Terms::Endemism(string text)
{
    string model = "llama3";
    string definition = "Endemism is the state of a species being found only in a single defined geographic location, such as an island, state, nation, country or other defined zone; organisms that are indigenous to a place are not endemic to it if they are also found elsewhere. For example, the Cape sugarbird is found exclusively in southwestern South Africa and is therefore said to be endemic to that particular part of the world. An endemic species can also be referred to as an endemism or, in scientific literature, as an endemite. Similarly many species found in the Western ghats of India are examples of endemism. Endemism is an important concept in conservation biology for measuring biodiversity in a particular place and evaluating the risk of extinction for species. Endemism is also of interest in evolutionary biology, because it provides clues about how changes in the environment cause species to undergo range shifts (potentially expanding their range into a larger area, or becoming extirpated from an area they once lived), go extinct, or diversify into more species. The extreme opposite of an endemic species is one with a cosmopolitan distribution, having a global or widespread range. A rare alternative term for a species that is endemic is \"precinctive\", which applies to species (and other taxonomic levels) that are restricted to a defined geographical area. Other terms that sometimes are used interchangeably, but less often, include autochthonal, autochthonic, and indigenous; however, these terms do not reflect the status of a species that specifically belongs only to a determined place.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Endemism";
        }
    }

    return nullptr;
}

string _Biology::Terms::EndergonicReaction(string text)
{
    string model = "llama3";
    string definition = "In chemical thermodynamics, an endergonic reaction  also called a heat absorbing nonspontaneous reaction or an unfavorable reaction) is a chemical reaction in which the standard change in free energy is positive, and an additional driving force is needed to perform this reaction. In layman\'s terms, the total amount of useful energy is negative (it takes more energy to start the reaction than what is received out of it) so the total energy is a net negative result, as opposed to a net positive result in an exergonic reaction. Another way to phrase this is that useful energy must be absorbed from the surroundings into the workable system for the reaction to happen. Under constant temperature and constant pressure conditions, this means that the change in the standard Gibbs free energy would be positive, for the reaction at standard state (i.e. at standard pressure (1 bar), and standard concentrations (1 molar) of all the reagents). In metabolism, an endergonic process is anabolic, meaning that energy is stored; in many such anabolic processes, energy is supplied by coupling the reaction to adenosine triphosphate (ATP) and consequently resulting in a high energy, negatively charged organic phosphate and positive adenosine diphosphate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Endergonic Reaction";
        }
    }

    return nullptr;
}

string _Biology::Terms::EndocrineGland(string text)
{
    string model = "llama3";
    string definition = "The endocrine system is a network of glands and organs located throughout the body. It is similar to the nervous system in that it plays a vital role in controlling and regulating many of the body\'s functions. Endocrine glands are ductless glands of the endocrine system that secrete their products, hormones, directly into the blood. The major glands of the endocrine system include the pineal gland, pituitary gland, pancreas, ovaries, testicles, thyroid gland, parathyroid gland, hypothalamus and adrenal glands. The hypothalamus and pituitary glands are neuroendocrine organs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Endocrine Gland";
        }
    }

    return nullptr;
}

string _Biology::Terms::EndocrineSystem(string text)
{
    string model = "llama3";
    string definition = "The endocrine system is a messenger system in an organism comprising feedback loops of hormones that are released by internal glands directly into the circulatory system and that target and regulate distant organs. In vertebrates, the hypothalamus is the neural control center for all endocrine systems. In humans, the major endocrine glands are the thyroid, parathyroid, pituitary, pineal, and adrenal glands, and the (male) testis and (female) ovaries. The hypothalamus, pancreas, and thymus also function as endocrine glands, among other functions. (The hypothalamus and pituitary glands are organs of the neuroendocrine system. One of the most important functions of the hypothalamus-it is located in the brain adjacent to the pituitary gland-is to link the endocrine system to the nervous system via the pituitary gland.) Other organs, such as the kidneys, also have roles within the endocrine system by secreting certain hormones. The study of the endocrine system and its disorders is known as endocrinology. The thyroid secretes thyroxine, the pituitary secretes growth hormone, the pineal secretes melatonin, the testis secretes testosterone, and the ovaries secrete estrogen and progesterone.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Endocrine System";
        }
    }

    return nullptr;
}

string _Biology::Terms::Endocytosis(string text)
{
    string model = "llama3";
    string definition = "Endocytosis is a cellular process in which substances are brought into the cell. The material to be internalized is surrounded by an area of cell membrane, which then buds off inside the cell to form a vesicle containing the ingested materials. Endocytosis includes pinocytosis (cell drinking) and phagocytosis (cell eating). It is a form of active transport.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Endocytosis";
        }
    }

    return nullptr;
}

string _Biology::Terms::Endoderm(string text)
{
    string model = "llama3";
    string definition = "Endoderm is the innermost of the three primary germ layers in the very early embryo. The other two layers are the ectoderm (outside layer) and mesoderm (middle layer). Cells migrating inward along the archenteron form the inner layer of the gastrula, which develops into the endoderm. The endoderm consists at first of flattened cells, which subsequently become columnar. It forms the epithelial lining of multiple systems. In plant biology, endoderm corresponds to the innermost part of the cortex (bark) in young shoots and young roots often consisting of a single cell layer. As the plant becomes older, more endoderm will lignify.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Endoderm";
        }
    }

    return nullptr;
}

string _Biology::Terms::Endogenous(string text)
{
    string model = "llama3";
    string definition = "Endogeny, in biology, refers to the property of originating or developing from within an organism, tissue, or cell. For example, endogenous substances, and endogenous processes are those that originate from within a living system (e.g., organism, cell). For instance, estradiol is an endogenous estrogen hormone produced within the body, whereas ethinylestradiol is an exogenous synthetic estrogen, commonly used in birth control pills. In contrast, exogenous substances and exogenous processes are those that originate from outside of an organism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Endogenous";
        }
    }

    return nullptr;
}

string _Biology::Terms::EndoplasmicReticulum(string text)
{
    string model = "llama3";
    string definition = "The endoplasmic reticulum (ER) is a part of a transportation system of the eukaryotic cell, and has many other important functions such as protein folding. It is a type of organelle made up of two subunits - rough endoplasmic reticulum (RER), and smooth endoplasmic reticulum (SER). The endoplasmic reticulum is found in most eukaryotic cells and forms an interconnected network of flattened, membrane-enclosed sacs known as cisternae (in the RER), and tubular structures in the SER. The membranes of the ER are continuous with the outer nuclear membrane. The endoplasmic reticulum is not found in red blood cells, or spermatozoa. The two types of ER share many of the same proteins and engage in certain common activities such as the synthesis of certain lipids and cholesterol. Different types of cells contain different ratios of the two types of ER depending on the activities of the cell. RER is found mainly toward the nucleus of the cell and SER towards the cell membrane or plasma membrane of cell. The outer (cytosolic) face of the RER is studded with ribosomes that are the sites of protein synthesis. The RER is especially prominent in cells such as hepatocytes. The SER lacks ribosomes and functions in lipid synthesis but not metabolism, the production of steroid hormones, and detoxification. The SER is especially abundant in mammalian liver and gonad cells. The ER was observed by light microscopy by Garnier in 1897, who coined the term ergastoplasm. The lacy membranes of the endoplasmic reticulum were first seen by electron microscopy in 1945 by Keith R. Porter, Albert Claude, and Ernest F. Fullam. Later, the word reticulum, which means \"network\", was applied by Porter in 1953 to describe this fabric of membranes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Endoplasmic Reticulum";
        }
    }

    return nullptr;
}

string _Biology::Terms::Endosperm(string text)
{
    string model = "llama3";
    string definition = "The endosperm is a tissue produced inside the seeds of most of the flowering plants following double fertilization. It is triploid (meaning three chromosome sets per nucleus) in most species, which may be auxin-driven. It surrounds the embryo and provides nutrition in the form of starch, though it can also contain oils and protein. This can make endosperm a source of nutrition in animal diet. For example, wheat endosperm is ground into flour for bread (the rest of the grain is included as well in whole wheat flour), while barley endosperm is the main source of sugars for beer production. Other examples of endosperm that forms the bulk of the edible portion are coconut \"meat\" and coconut \"water\", and corn. Some plants, such as certain orchids, lack endosperm in their seeds. Ancestral flowering plants have seeds with small embryos and abundant endosperm. In some modern flowering plants the embryo occupies most of the seed and the endosperm is non-developed or consumed before the seed matures. In other flowering plant taxa, the Poaceae for example, the endosperm is greatly developed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Endosperm";
        }
    }

    return nullptr;
}

string _Biology::Terms::Symbiogenesis(string text)
{
    string model = "llama3";
    string definition = "Symbiogenesis (endosymbiotic theory, or serial endosymbiotic theory) is the leading evolutionary theory of the origin of eukaryotic cells from prokaryotic organisms. The theory holds that mitochondria, plastids such as chloroplasts, and possibly other organelles of eukaryotic cells are descended from formerly free-living prokaryotes (more closely related to the Bacteria than to the Archaea) taken one inside the other in endosymbiosis. Mitochondria appear to be phylogenetically related to Rickettsiales bacteria, while chloroplasts are thought to be related to cyanobacteria. The idea that chloroplasts were originally independent organisms that merged into a symbiotic relationship with other one-celled organisms dates back to the 19th century, when it was espoused by researchers such as Andreas Schimper. The endosymbiotic theory was articulated in 1905 and 1910 by the Russian botanist Konstantin Mereschkowski, and advanced and substantiated with microbiological evidence by Lynn Margulis in 1967. Among the many lines of evidence supporting symbiogenesis are that mitochondria and plastids contain their own chromosomes and reproduce by splitting in two, parallel but separate from the sexual reproduction of the rest of the cell; that the chromosomes of some mitochondria and plastids are single circular DNA molecules similar to the circular chromosomes of bacteria; that the transport proteins called porins are found in the outer membranes of mitochondria and chloroplasts, and also bacterial cell membranes; and that cardiolipin is found only in the inner mitochondrial membrane and bacterial cell membranes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Symbiogenesis";
        }
    }

    return nullptr;
}

string _Biology::Terms::Endotherm(string text)
{
    string model = "llama3";
    string definition = "An endotherm is an organism that maintains its body at a metabolically favorable temperature, largely by the use of heat released by its internal bodily functions instead of relying almost purely on ambient heat. Such internally generated heat is mainly an incidental product of the animal\'s routine metabolism, but under conditions of excessive cold or low activity an endotherm might apply special mechanisms adapted specifically to heat production. Examples include special-function muscular exertion such as shivering, and uncoupled oxidative metabolism, such as within brown adipose tissue. Only birds and mammals are considered truly endothermic groups of animals. However, Argentine black and white tegu, leatherback sea turtles, lamnid sharks, tuna and billfishes, cicadas, and winter moths are mesothermic. Unlike mammals and birds, some reptiles, particularly some species of python and tegu, possess seasonal reproductive endothermy in which they are endothermic only during their reproductive season.Only birds and mammals are considered truly endothermic groups of animals. However, Argentine black and white tegu, leatherback sea turtles, lamnid sharks, tuna and billfishes, cicadas, and winter moths are mesothermic. Unlike mammals and birds, some reptiles, particularly some species of python and tegu, possess seasonal reproductive endothermy in which they are endothermic only during their reproductive season. In common parlance, endotherms are characterized as \"warm-blooded\". The opposite of endothermy is ectothermy, although in general, there is no absolute or clear separation between the nature of endotherms and ectotherms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Endotherm";
        }
    }

    return nullptr;
}

string _Biology::Terms::Entomology(string text)
{
    string model = "llama3";
    string definition = "Entomology is the scientific study of insects, a branch of zoology. In the past the term insect was less specific, and historically the definition of entomology would also include the study of animals in other arthropod groups, such as arachnids, myriapods, and crustaceans. This wider meaning may still be encountered in informal use. The field is also referred to as insectology in American English, while in British English insectology implies the study of the relationships between insects and humans. Like several of the other fields that are categorized within zoology, entomology is a taxon-based category; any form of scientific study in which there is a focus on insect-related inquiries is, by definition, entomology. Entomology, therefore, overlaps with a cross-section of topics as diverse as molecular genetics, environmental archaeology, behavior, neuroscience, biomechanics, biochemistry, systematics, physiology, developmental biology, ecology, morphology, and paleontology. Over 1.3 million insect species have been described, more than two-thirds of all known species. Some insect species date back to around 400 million years ago. They have many kinds of interactions with humans and other forms of life on Earth. For example, species such as P. pyralis conduct bioluminescent reactions in their light-emitting organs, which have been the subject of much research, especially in recent years.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Entomology";
        }
    }

    return nullptr;
}

string _Biology::Terms::EnvironmentalBiology(string text)
{
    string model = "llama3";
    string definition = "Environmental science is an interdisciplinary academic field that integrates physics, biology, meteorology, mathematics and geography (including ecology, chemistry, plant science, zoology, mineralogy, oceanography, limnology, soil science, geology and physical geography, and atmospheric science) to the study of the environment, and the solution of environmental problems. Environmental science emerged from the fields of natural history and medicine during the Enlightenment. Today it provides an integrated, quantitative, and interdisciplinary approach to the study of environmental systems. Environmental studies incorporates more of the social sciences for understanding human relationships, perceptions and policies towards the environment. Environmental engineering focuses on design and technology for improving environmental quality in every aspect. Environmental scientists seek to understand the earth\'s physical, chemical, biological, and geological processes, and to use that knowledge to understand how issues such as alternative energy systems, pollution control and mitigation, natural resource management, and the effects of global warming and climate change influence and affect the natural systems and processes of earth. Environmental issues almost always include an interaction of physical, chemical, and biological processes. Environmental scientists bring a systems approach to the analysis of environmental problems. Key elements of an effective environmental scientist include the ability to relate space, and time relationships as well as quantitative analysis. Environmental science came alive as a substantive, active field of scientific investigation in the 1960s and 1970s driven by (a) the need for a multi-disciplinary approach to analyze complex environmental problems, (b) the arrival of substantive environmental laws requiring specific environmental protocols of investigation and (c) the growing public awareness of a need for action in addressing environmental problems. Events that spurred this development included the publication of Rachel Carson\'s landmark environmental book Silent Spring along with major environmental issues becoming very public, such as the 1969 Santa Barbara oil spill, and the Cuyahoga River of Cleveland, Ohio, \"catching fire\" (also in 1969), and helped increase the visibility of environmental issues and create this new field of study.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Environmental Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Epidemiology(string text)
{
    string model = "llama3";
    string definition = "Epidemiology is the study and analysis of the distribution (who, when, and where), patterns and determinants of health and disease conditions in a defined population. It is a cornerstone of public health, and shapes policy decisions and evidence-based practice by identifying risk factors for disease and targets for preventive healthcare. Epidemiologists help with study design, collection, and statistical analysis of data, amend interpretation and dissemination of results (including peer review and occasional systematic review). Epidemiology has helped develop methodology used in clinical research, public health studies, and, to a lesser extent, basic research in the biological sciences. Major areas of epidemiological study include disease causation, transmission, outbreak investigation, disease surveillance, environmental epidemiology, forensic epidemiology, occupational epidemiology, screening, biomonitoring, and comparisons of treatment effects such as in clinical trials. Epidemiologists rely on other scientific disciplines like biology to better understand disease processes, statistics to make efficient use of the data and draw appropriate conclusions, social sciences to better understand proximate and distal causes, and engineering for exposure assessment. Epidemiology, literally meaning \"the study of what is upon the people\", is derived from Greek epi \'upon, among\' demos \'people, district\' and logos \'study, word, discourse\', suggesting that it applies only to human populations. However, the term is widely used in studies of zoological populations (veterinary epidemiology), although the term \"epizoology\" is available, and it has also been applied to studies of plant populations (botanical or plant disease epidemiology). The distinction between \"epidemic\" and \"endemic\" was first drawn by Hippocrates, to distinguish between diseases that are \"visited upon\" a population (epidemic) from those that \"reside within\" a population (endemic). The term \"epidemiology\" appears to have first been used to describe the study of epidemics in 1802 by the Spanish physician Joaquín de Villalba  in Epidemiología Española. Epidemiologists also study the interaction of diseases in a population, a condition known as a syndemic. The term epidemiology is now widely applied to cover the description and causation of not only epidemic, infectious disease, but of disease in general, including related conditions. Some examples of topics examined through epidemiology include as high blood pressure, mental illness and obesity. Therefore, this epidemiology is based upon how the pattern of the disease causes change in the function of human beings.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Epidemiology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Epigenetics(string text)
{
    string model = "llama3";
    string definition = "In biology, epigenetics is the study of heritable traits, or a stable change of cell function, that happen without changes to the DNA sequence. in epigenetics implies features that are \"on top of\" or \"in addition to\" the traditional (DNA sequence based) genetic mechanism of inheritance. Epigenetics usually involves a change that is not erased by cell division, and affects the regulation of gene expression. Such effects on cellular and physiological phenotypic traits may result from environmental factors, or be part of normal development. Epigenetic factors can also lead to cancer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Epigenetics";
        }
    }

    return nullptr;
}

string _Biology::Terms::EssentialNutrient(string text)
{
    string model = "llama3";
    string definition = "An essential nutrient is a nutrient required for normal physiological function that cannot be synthesized in the body - either at all or in sufficient quantities - and thus must be obtained from a dietary source. Apart from water, which is universally required for the maintenance of homeostasis in mammals, essential nutrients are indispensable for various cellular metabolic processes and for the maintenance and function of tissues and organs. The nutrients considered essential for humans comprise nine amino acids, two fatty acids, thirteen vitamins, fifteen minerals and choline. In addition, there are several molecules that are considered conditionally essential nutrients since they are indispensable in certain developmental and pathological states.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Essential Nutrient";
        }
    }

    return nullptr;
}

string _Biology::Terms::Estrogen(string text)
{
    string model = "llama3";
    string definition = "Estrogen (also spelled oestrogen in British English; see spelling differences) is a category of sex hormone responsible for the development and regulation of the female reproductive system and secondary sex characteristics. There are three major endogenous estrogens that have estrogenic hormonal activity: estrone (E1), estradiol (E2), and estriol (E3). Estradiol, an estrane, is the most potent and prevalent. Another estrogen called estetrol (E4) is produced only during pregnancy. Estrogens are synthesized in all vertebrates and some insects. Quantitatively, estrogens circulate at lower levels than androgens in both men and women. While estrogen levels are significantly lower in males than in females, estrogens nevertheless have important physiological roles in males. Like all steroid hormones, estrogens readily diffuse across the cell membrane. Once inside the cell, they bind to and activate estrogen receptors (ERs) which in turn modulate the expression of many genes. Additionally, estrogens bind to and activate rapid-signaling membrane estrogen receptors (mERs), such as GPER (GPR30). In addition to their role as natural hormones, estrogens are used as medications, for instance in menopausal hormone therapy, hormonal birth control and feminizing hormone therapy for transgender women, intersex people, and nonbinary people. Synthetic and natural estrogens have been found in the environment and are referred to as xenoestrogens. Estrogens are among the wide range of endocrine-disrupting compounds (EDCs) and can cause health issues and reproductive disfunction in both wildlife and humans.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Estrogen";
        }
    }

    return nullptr;
}

string _Biology::Terms::Ethology(string text)
{
    string model = "llama3";
    string definition = "Ethology is a branch of zoology that studies the behaviour of non-human animals. It has its scientific roots in the work of Charles Darwin and of American and German ornithologists of the late 19th and early 20th century, including Charles O. Whitman, Oskar Heinroth, and Wallace Craig. The modern discipline of ethology is generally considered to have begun during the 1930s with the work of the Dutch biologist Nikolaas Tinbergen and the Austrian biologists Konrad Lorenz and Karl von Frisch, the three winners of the 1973 Nobel Prize in Physiology or Medicine. Ethology combines laboratory and field science, with a strong relation to neuroanatomy, ecology, and evolutionary biology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ethology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Eukaryote(string text)
{
    string model = "llama3";
    string definition = "The eukaryotes constitute the domain of Eukaryota or Eukarya, organisms whose cells have a membrane-bound nucleus. All animals, plants, fungi, and many unicellular organisms are eukaryotes. They constitute a major group of life forms alongside the two groups of prokaryotes: the Bacteria and the Archaea. Eukaryotes represent a small minority of the number of organisms, but given their generally much larger size, their collective global biomass is much larger than that of prokaryotes. The eukaryotes seemingly emerged within the Asgard archaea, and are closely related to the Heimdallarchaeia. This implies that there are only two domains of life, Bacteria and Archaea, with eukaryotes incorporated among the Archaea. Eukaryotes first emerged during the Paleoproterozoic, likely as flagellated cells. The leading evolutionary theory is they were created by symbiogenesis between an anaerobic Asgard archaean and an aerobic proteobacterium, which formed the mitochondria. A second episode of symbiogenesis with a cyanobacterium created the plants, with chloroplasts. Eukaryotic cells contain membrane-bound organelles such as the nucleus, the endoplasmic reticulum, and the Golgi apparatus. Eukaryotes may be either unicellular or multicellular. In comparison, prokaryotes are typically unicellular. Unicellular eukaryotes are sometimes called protists. Eukaryotes can reproduce both asexually through mitosis and sexually through meiosis and gamete fusion (fertilization).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Eukaryote";
        }
    }

    return nullptr;
}

string _Biology::Terms::Evolution(string text)
{
    string model = "llama3";
    string definition = "Evolution is the change in the heritable characteristics of biological populations over successive generations. It occurs when evolutionary processes such as natural selection and genetic drift act on genetic variation, resulting in certain characteristics becoming more or less common within a population over successive generations. The process of evolution has given rise to biodiversity at every level of biological organisation. The scientific theory of evolution by natural selection was conceived independently by two British naturalists, Charles Darwin and Alfred Russel Wallace, in the mid-19th century as an explanation for why organisms are adapted to their physical and biological environments. The theory was first set out in detail in Darwin\'s book On the Origin of Species. Evolution by natural selection is established by observable facts about living organisms: (1) more offspring are often produced than can possibly survive; (2) traits vary among individuals with respect to their morphology, physiology, and behaviour; (3) different traits confer different rates of survival and reproduction (differential fitness); and (4) traits can be passed from generation to generation (heritability of fitness). In successive generations, members of a population are therefore more likely to be replaced by the offspring of parents with favourable characteristics for that environment. In the early 20th century, competing ideas of evolution were refuted and evolution was combined with Mendelian inheritance and population genetics to give rise to modern evolutionary theory. In this synthesis the basis for heredity is in DNA molecules that pass information from generation to generation. The processes that change DNA in a population include natural selection, genetic drift, mutation, and gene flow. All life on Earth-including humanity-shares a last universal common ancestor (LUCA), which lived approximately 3.5-3.8 billion years ago. The fossil record includes a progression from early biogenic graphite to microbial mat fossils to fossilised multicellular organisms. Existing patterns of biodiversity have been shaped by repeated formations of new species (speciation), changes within species (anagenesis), and loss of species (extinction) throughout the evolutionary history of life on Earth. Morphological and biochemical traits tend to be more similar among species that share a more recent common ancestor, which historically was used to reconstruct phylogenetic trees, although direct comparison of genetic sequences is a more common method today. Evolutionary biologists have continued to study various aspects of evolution by forming and testing hypotheses as well as constructing theories based on evidence from the field or laboratory and on data generated by the methods of mathematical and theoretical biology. Their discoveries have influenced not just the development of biology but also other fields including agriculture, medicine, and computer science.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Evolution";
        }
    }

    return nullptr;
}

string _Biology::Terms::EvolutionaryBiology(string text)
{
    string model = "llama3";
    string definition = "Evolutionary biology is the subfield of biology that studies the evolutionary processes (natural selection, common descent, speciation) that produced the diversity of life on Earth. It is also defined as the study of the history of life forms on Earth. Evolution holds that all species are related and gradually change over generations. In a population, the genetic variations affect the phenotypes (physical characteristics) of an organism. These changes in the phenotypes will be an advantage to some organisms, which will then be passed on to their offspring. Some examples of evolution in species over many generations are the peppered moth and flightless birds. In the 1930s, the discipline of evolutionary biology emerged through what Julian Huxley called the modern synthesis of understanding, from previously unrelated fields of biological research, such as genetics and ecology, systematics, and paleontology. The investigational range of current research has widened to encompass the genetic architecture of adaptation, molecular evolution, and the different forces that contribute to evolution, such as sexual selection, genetic drift, and biogeography. Moreover, the newer field of evolutionary developmental biology (\"evo-devo\") investigates how embryogenesis is controlled, thus yielding a wider synthesis that integrates developmental biology with the fields of study covered by the earlier evolutionary synthesis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Evolutionary Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Exocytosis(string text)
{
    string model = "llama3";
    string definition = "Exocytosis is a form of active transport and bulk transport in which a cell transports molecules (e.g., neurotransmitters and proteins) out of the cell (exo- + cytosis). As an active transport mechanism, exocytosis requires the use of energy to transport material. Exocytosis and its counterpart, endocytosis, are used by all cells because most chemical substances important to them are large polar molecules that cannot pass through the hydrophobic portion of the cell membrane by passive means. Exocytosis is the process by which a large amount of molecules are released; thus it is a form of bulk transport. Exocytosis occurs via secretory portals at the cell plasma membrane called porosomes. Porosomes are permanent cup-shaped lipoprotein structures at the cell plasma membrane, where secretory vesicles transiently dock and fuse to release intra-vesicular contents from the cell. In exocytosis, membrane-bound secretory vesicles are carried to the cell membrane, where they dock and fuse at porosomes and their contents (i.e., water-soluble molecules) are secreted into the extracellular environment. This secretion is possible because the vesicle transiently fuses with the plasma membrane. In the context of neurotransmission, neurotransmitters are typically released from synaptic vesicles into the synaptic cleft via exocytosis; however, neurotransmitters can also be released via reverse transport through membrane transport proteins. Exocytosis is also a mechanism by which cells are able to insert membrane proteins (such as ion channels and cell surface receptors), lipids, and other components into the cell membrane. Vesicles containing these membrane components fully fuse with and become part of the outer cell membrane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exocytosis";
        }
    }

    return nullptr;
}

string _Biology::Terms::Exogenous(string text)
{
    string model = "llama3";
    string definition = "In a variety of contexts, exogeny or exogeneity is the fact of an action or object originating externally. It contrasts with endogeneity or endogeny, the fact of being influenced within a system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exogenous";
        }
    }

    return nullptr;
}

string _Biology::Terms::ExponentialGrowth(string text)
{
    string model = "llama3";
    string definition = "Exponential growth occurs when a quantity grows at a rate directly proportional to its present size. For example, when it is 3 times as big as it is now, it will be growing 3 times as fast as it is now. In more technical language, its instantaneous rate of change (that is, the derivative) of a quantity with respect to an independent variable is proportional to the quantity itself. Often the independent variable is time. Described as a function, a quantity undergoing exponential growth is an exponential function of time, that is, the variable representing time is the exponent (in contrast to other types of growth, such as quadratic growth). Exponential growth is the inverse of logarithmic growth. Not all cases of growth at an always increasing rate are instances of exponential growth. For example the function f(x) = x^3 grows at an ever increasing rate, but is much slower than growing exponentially. For example, when x = 1, it grows at 3 times its size, but when z = 10 it grows at 30% of its size. If an exponentially growing function grows at a rate that is 3 times is present size, then it always grows at a rate that is 3 times its present size. When it is 10 times as big as it is now, it will grow 10 times as fast. If the constant of proportionality is negative, then the quantity decreases over time, and is said to be undergoing exponential decay instead. In the case of a discrete domain of definition with equal intervals, it is also called geometric growth or geometric decay since the function values form a geometric progression. The formula for exponential growth of a variable x at the growth rate r, as time t goes on in discrete intervals (that is, at integer times 0, 1, 2, 3, ...), is xt = x0(1 + r)^t";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exponential Growth";
        }
    }

    return nullptr;
}

string _Biology::Terms::ExternalFertilization(string text)
{
    string model = "llama3";
    string definition = "External fertilization is a mode of reproduction in which a male organism\'s sperm fertilizes a female organism\'s egg outside of the female\'s body. It is contrasted with internal fertilization, in which sperm are introduced via insemination and then combine with an egg inside the body of a female organism. In animals, external fertilization typically occurs in water or a moist area to facilitate the movement of sperm to the egg. The release of eggs and sperm into the water is known as spawning. In motile species, spawning females often travel to a suitable location to release their eggs. However, sessile species are less able to move to spawning locations and must release gametes locally. Among vertebrates, external fertilization is most common in amphibians and fish. Invertebrates utilizing external fertilization are mostly benthic, sessile, or both, including animals such as coral, sea anemones, and tube-dwelling polychaetes. Benthic marine plants also reproduce through external fertilization. Environmental factors and timing are key challenges to the success of external fertilization. While in the water, the male and female must both release gametes at similar times in order to fertilize the egg. Gametes spawned into the water may also be washed away, eaten, or damaged by external factors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "External Fertilization";
        }
    }

    return nullptr;
}

string _Biology::Terms::Extinction(string text)
{
    string model = "llama3";
    string definition = "Extinction is the termination of a taxon by the death of its last member. A taxon may become functionally extinct before the death of its last member if it loses the capacity to reproduce and recover. Because a species\' potential range may be very large, determining this moment is difficult, and is usually done retrospectively. This difficulty leads to phenomena such as Lazarus taxa, where a species presumed extinct abruptly \"reappears\" (typically in the fossil record) after a period of apparent absence. We are currently in the midst of the Earth\'s sixth mass extinction crisis. Harvard biologist E. O. Wilson estimated that 30,000 species per year (or three species per hour) are being driven to extinction. Compare this to the natural background rate of one extinction per million species per year.  The current mass extinction is a crisis unparalleled in human history, the primary driver thereof being habitat loss and exploitation due to human overpopulation. More than 99% of all species that ever lived on Earth, amounting to over five billion species, are estimated to have died out. It is estimated that there are currently around 8.7 million species of eukaryotes globally, and possibly many times more if microorganisms, such as bacteria, are included. Notable extinct animal species include non-avian dinosaurs, saber-toothed cats, dodos, mammoths, ground sloths, thylacines, trilobites, golden toads, and passenger pigeons. Through evolution, species arise through the process of speciation-where new varieties of organisms arise and thrive when they are able to find and exploit an ecological niche-and species become extinct when they are no longer able to survive in changing conditions or against superior competition. The relationship between animals and their ecological niches has been firmly established. A typical species becomes extinct within 10 million years of its first appearance, although some species, called living fossils, survive with little to no morphological change for hundreds of millions of years. Mass extinctions are relatively rare events; however, isolated extinctions of species and clades are quite common, and are a natural part of the evolutionary process. Only recently have extinctions been recorded and scientists have become alarmed at the current high rate of extinctions. Most species that become extinct are never scientifically documented. Some scientists estimate that up to half of presently existing plant and animal species may become extinct by 2100. A 2018 report indicated that the phylogenetic diversity of 300 mammalian species erased during the human era since the Late Pleistocene would require 5 to 7 million years to recover. According to the 2019 Global Assessment Report on Biodiversity and Ecosystem Services by IPBES, the biomass of wild mammals has fallen by 82%, natural ecosystems have lost about half their area and a million species are at risk of extinction-all largely as a result of human actions. Twenty-five percent of plant and animal species are threatened with extinction. In a subsequent report, IPBES listed unsustainable fishing, hunting and logging as being some of the primary drivers of the global extinction crisis. In June 2019, one million species of plants and animals were at risk of extinction. At least 571 plant species have been lost since 1750, but likely many more. The main cause of the extinctions is the destruction of natural habitats by human activities, such as cutting down forests and converting land into fields for farming. A dagger symbol placed next to the name of a species or other taxon normally indicates its status as extinct.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Extinction";
        }
    }

    return nullptr;
}

string _Biology::Terms::Extracellular(string text)
{
    string model = "llama3";
    string definition = "Of or occurring in the space outside the plasma membrane of a cell. Contrast intracellular.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Extracellular";
        }
    }

    return nullptr;
}

string _Biology::Terms::ExtranuclearInheritance(string text)
{
    string model = "llama3";
    string definition = "Extranuclear inheritance or cytoplasmic inheritance is the transmission of genes that occur outside the nucleus. It is found in most eukaryotes and is commonly known to occur in cytoplasmic organelles such as mitochondria and chloroplasts or from cellular parasites like viruses or bacteria.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Extranuclear Inheritance";
        }
    }

    return nullptr;
}

string _Biology::Terms::FacultativeAnaerobe(string text)
{
    string model = "llama3";
    string definition = "A facultative anaerobic organism is an organism that makes ATP by aerobic respiration if oxygen is present, but is capable of switching to fermentation if oxygen is absent. Some examples of facultatively anaerobic bacteria are Staphylococcus spp., Escherichia coli, Salmonella, Listeria spp., Shewanella oneidensis and Yersinia pestis. Certain eukaryotes are also facultative anaerobes, including fungi such as Saccharomyces cerevisiae and many aquatic invertebrates such as nereid polychaetes. It has been observed that in mutants of Salmonella typhimurium that underwent mutations to be either obligate aerobes or anaerobes, there were varying levels of chromatin-remodeling proteins. The obligate aerobes were later found to have a defective DNA gyrase subunit A gene (gyrA), while obligate anaerobes were defective in topoisomerase I (topI). This indicates that topoisomerase I and its associated relaxation of chromosomal DNA is required for transcription of genes required for aerobic growth, while the opposite is true for DNA gyrase. Additionally, in Escherichia coli K-12 it has been noted that phosphofructokinase (PFK) exists as a dimer under aerobic conditions and as a tetramer under anaerobic conditions. Given PFK\'s role in glycolysis, this has implications for the effect of oxygen on the glucose metabolism of E. coli K-12 in relation to the mechanism of the Pasteur effect. There may exist a core network of transcription factors (TFs) that includes the major oxygen-responsive ArcA and FNR control the adaptation of Escherichia coli to changes in oxygen availability. Activities of these two regulators are indicative of spatial effects that may affect gene expression in the microaerobic range. It has also been observed that these oxygen-sensitive proteins are protected within the cytoplasm by oxygen consumers within the cell membrane, known as terminal oxidases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Facultative Anaerobe";
        }
    }

    return nullptr;
}

string _Biology::Terms::Family(string text)
{
    string model = "llama3";
    string definition = "Family is one of the eight major hierarchical taxonomic ranks in Linnaean taxonomy. It is classified between order and genus. A family may be divided into subfamilies, which are intermediate ranks between the ranks of family and genus. The official family names are Latin in origin; however, popular names are often used: for example, walnut trees and hickory trees belong to the family Juglandaceae, but that family is commonly referred to as the \"walnut family\". The delineation of what constitutes a family-or whether a described family should be acknowledged-is established and decided upon by active taxonomists. There are not strict regulations for outlining or acknowledging a family, yet in the realm of plants, these classifications often rely on both the vegetative and reproductive characteristics of plant species. Taxonomists frequently hold varying perspectives on these descriptions, leading to a lack of widespread consensus within the scientific community for extended periods. The continual publication of new data and diverse opinions plays a crucial role in facilitating adjustments and ultimately reaching a consensus over time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Family";
        }
    }

    return nullptr;
}

string _Biology::Terms::Fermentation(string text)
{
    string model = "llama3";
    string definition = "Fermentation is a type of redox metabolism carried out in the absence of oxygen. During fermentation, organic molecules (e.g., glucose) are catabolized and donate electrons to other organic molecules. In the process, ATP and organic end products (e.g., lactate) are formed. Because oxygen is not required, it is an alternative to aerobic respiration. Over 25% of bacteria and archaea carry out fermentation. They live in the gut, sediments, food, and other environments. Eukaryotes, including humans and other animals, also carry out fermentation. Fermentation is important in several areas of human society. Humans have used fermentation in production of food for 13,000 years. Humans and their livestock have microbes in the gut that carry out fermentation, releasing products used by the host for energy. Fermentation is used at an industrial level to produce commodity chemicals, such as ethanol and lactate. In total, fermentation forms more than 50 metabolic end products with a wide range of uses.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fermentation";
        }
    }

    return nullptr;
}

string _Biology::Terms::Fitness(string text)
{
    string model = "llama3";
    string definition = "Fitness (often denoted w in population genetics models) is a quantitative representation of individual reproductive success. It is also equal to the average contribution to the gene pool of the next generation, made by the same individuals of the specified genotype or phenotype. Fitness can be defined either with respect to a genotype or to a phenotype in a given environment or time. The fitness of a genotype is manifested through its phenotype, which is also affected by the developmental environment. The fitness of a given phenotype can also be different in different selective environments. With asexual reproduction, it is sufficient to assign fitnesses to genotypes. With sexual reproduction, recombination scrambles alleles into different genotypes every generation; in this case, fitness values can be assigned to alleles by averaging over possible genetic backgrounds. Natural selection tends to make alleles with higher fitness more common over time, resulting in Darwinian evolution. The term \"Darwinian fitness\" can be used to make clear the distinction with physical fitness. Fitness does not include a measure of survival or life-span; Herbert Spencer\'s well-known phrase \"survival of the fittest\" should be interpreted as: \"Survival of the form (phenotypic or genotypic) that will leave the most copies of itself in successive generations.\" Inclusive fitness differs from individual fitness by including the ability of an allele in one individual to promote the survival and/or reproduction of other individuals that share that allele, in preference to individuals with a different allele. To avoid double counting, inclusive fitness excludes the contribution of other individuals to the survival and reproduction of the focal individual. One mechanism of inclusive fitness is kin selection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fitness";
        }
    }

    return nullptr;
}

string _Biology::Terms::FitnessLandscape(string text)
{
    string model = "llama3";
    string definition = "In evolutionary biology, fitness landscapes or adaptive landscapes (types of evolutionary landscapes) are used to visualize the relationship between genotypes and reproductive success. It is assumed that every genotype has a well-defined replication rate (often referred to as fitness). This fitness is the \"height\" of the landscape. Genotypes which are similar are said to be \"close\" to each other, while those that are very different are \"far\" from each other. The set of all possible genotypes, their degree of similarity, and their related fitness values is then called a fitness landscape. The idea of a fitness landscape is a metaphor to help explain flawed forms in evolution by natural selection, including exploits and glitches in animals like their reactions to supernormal stimuli. The idea of studying evolution by visualizing the distribution of fitness values as a kind of landscape was first introduced by Sewall Wright in 1932. In evolutionary optimization problems, fitness landscapes are evaluations of a fitness function for all candidate solutions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fitness Landscape";
        }
    }

    return nullptr;
}

string _Biology::Terms::Fertilization(string text)
{
    string model = "llama3";
    string definition = "Fertilisation or fertilization (see spelling differences), also known as generative fertilisation, syngamy and impregnation, is the fusion of gametes to give rise to a zygote and initiate its development into a new individual organism or offspring. While processes such as insemination or pollination, which happen before the fusion of gametes, are also sometimes informally referred to as fertilisation, these are technically separate processes. The cycle of fertilisation and development of new individuals is called sexual reproduction. During double fertilisation in angiosperms, the haploid male gamete combines with two haploid polar nuclei to form a triploid primary endosperm nucleus by the process of vegetative fertilisation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fertilization";
        }
    }

    return nullptr;
}

string _Biology::Terms::Fetus(string text)
{
    string model = "llama3";
    string definition = "A fetus or foetus fetuses, foetuses, rarely feti or foeti) is the unborn mammalian offspring that develops from an embryo. Following the embryonic stage, the fetal stage of development takes place. Prenatal development is a continuum, with no clear defining feature distinguishing an embryo from a fetus. However, in general a fetus is characterized by the presence of all the major body organs, though they will not yet be fully developed and functional, and some may not yet be situated in their final anatomical location. In human prenatal development, fetal development begins from the ninth week after fertilization (which is the eleventh week of gestational age) and continues until the birth of a newborn.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fetus";
        }
    }

    return nullptr;
}

string _Biology::Terms::Flagellum(string text)
{
    string model = "llama3";
    string definition = "A flagellum is a hair-like appendage that protrudes from certain plant and animal sperm cells, from fungal spores (zoospores), and from a wide range of microorganisms to provide motility. Many protists with flagella are known as flagellates. A microorganism may have from one to many flagella. A gram-negative bacterium Helicobacter pylori, for example, uses its flagella to propel itself through the stomach to reach the mucous lining where it may colonise the epithelium and potentially cause gastritis, and ulcers - a risk factor for stomach cancer. In some swarming bacteria, the flagellum can also function as a sensory organelle, being sensitive to wetness outside the cell. Across the three domains of Bacteria, Archaea, and Eukaryota, the flagellum has a different structure, protein composition, and mechanism of propulsion but shares the same function of providing motility. The Latin word flagellum means \"whip\" to describe its lash-like swimming motion. The flagellum in archaea is called the archaellum to note its difference from the bacterial flagellum. Eukaryotic flagella and cilia are identical in structure but have different lengths and functions. Prokaryotic fimbriae and pili are smaller, and thinner appendages, with different functions. Cilia are attached to the surface of flagella and are used to swim or move fluid from one region to another. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Flagellum";
        }
    }

    return nullptr;
}

string _Biology::Terms::FlavinAdenineDinucleotide(string text)
{
    string model = "llama3";
    string definition = "In biochemistry, flavin adenine dinucleotide (FAD) is a redox-active coenzyme associated with various proteins, which is involved with several enzymatic reactions in metabolism. A flavoprotein is a protein that contains a flavin group, which may be in the form of FAD or flavin mononucleotide (FMN). Many flavoproteins are known: components of the succinate dehydrogenase complex, α-ketoglutarate dehydrogenase, and a component of the pyruvate dehydrogenase complex. FAD can exist in four redox states, which are the flavin-N(5)-oxide, quinone, semiquinone, and hydroquinone. FAD is converted between these states by accepting or donating electrons. FAD, in its fully oxidized form, or quinone form, accepts two electrons and two protons to become FADH2 (hydroquinone form). The semiquinone (FADH·) can be formed by either reduction of FAD or oxidation of FADH2 by accepting or donating one electron and one proton, respectively. Some proteins, however, generate and maintain a superoxidized form of the flavin cofactor, the flavin-N(5)-oxide.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Flavin Adenine Dinucleotide";
        }
    }

    return nullptr;
}

string _Biology::Terms::FoodChain(string text)
{
    string model = "llama3";
    string definition = "A food chain is a linear network of links in a food web, often starting with an autotroph (such as grass or algae), also called a producer, and typically ending at an apex predator (such as grizzly bears or killer whales), detritivore (such as earthworms and woodlice), or decomposer (such as fungi or bacteria). It is not the same as a food web. A food chain depicts relations between species based on what they consume for energy in trophic levels, and they are most commonly quantified in length: the number of links between a trophic consumer and the base of the chain. Food chain studies play an important role in many biological studies. Food chain stability is very important for the survival of most species. When only one element is removed from the food chain it can result in extinction or immense decreases of survival of a species. Many food chains and food webs contain a keystone species, a species that has a large impact on the surrounding environment and that can directly affect the food chain. If a keystone species is removed it can set the entire food chain off balance. The efficiency of a food chain depends on the energy first consumed by the primary producers. This energy then moves through the trophic levels.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Food Chain";
        }
    }

    return nullptr;
}

string _Biology::Terms::FounderEffect(string text)
{
    string model = "llama3";
    string definition = "In population genetics, the founder effect is the loss of genetic variation that occurs when a new population is established by a very small number of individuals from a larger population. It was first fully outlined by Ernst Mayr in 1942, using existing theoretical work by those such as Sewall Wright. As a result of the loss of genetic variation, the new population may be distinctively different, both genotypically and phenotypically, from the parent population from which it is derived. In extreme cases, the founder effect is thought to lead to the speciation and subsequent evolution of new species. In the figure shown, the original population has nearly equal numbers of blue and red individuals. The three smaller founder populations show that one or the other color may predominate (founder effect), due to random sampling of the original population. A population bottleneck may also cause a founder effect, though it is not strictly a new population. The founder effect occurs when a small group of migrants-not genetically representative of the population from which they came-establish in a new area. In addition to founder effects, the new population is often very small, so it shows increased sensitivity to genetic drift, an increase in inbreeding, and relatively low genetic variation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Founder Effect";
        }
    }

    return nullptr;
}

string _Biology::Terms::Fungi(string text)
{
    string model = "llama3";
    string definition = "A fungus fungi or funguses) is any member of the group of eukaryotic organisms that includes microorganisms such as yeasts and molds, as well as the more familiar mushrooms. These organisms are classified as one of the traditional eukaryotic kingdoms, along with Animalia, Plantae, and either Protista or Protozoa and Chromista. A characteristic that places fungi in a different kingdom from plants, bacteria, and some protists is chitin in their cell walls. Fungi, like animals, are heterotrophs; they acquire their food by absorbing dissolved molecules, typically by secreting digestive enzymes into their environment. Fungi do not photosynthesize. Growth is their means of mobility, except for spores (a few of which are flagellated), which may travel through the air or water. Fungi are the principal decomposers in ecological systems. These and other differences place fungi in a single group of related organisms, named the Eumycota (true fungi or Eumycetes), that share a common ancestor (i.e. they form a monophyletic group), an interpretation that is also strongly supported by molecular phylogenetics. This fungal group is distinct from the structurally similar myxomycetes (slime molds) and oomycetes (water molds). The discipline of biology devoted to the study of fungi is known as mycology (from the Greek µ???? mykes, mushroom). In the past, mycology was regarded as a branch of botany, although it is now known that fungi are genetically more closely related to animals than to plants. Abundant worldwide, most fungi are inconspicuous because of the small size of their structures, and their cryptic lifestyles in soil or on dead matter. Fungi include symbionts of plants, animals, or other fungi and also parasites. They may become noticeable when fruiting, either as mushrooms or as molds. Fungi perform an essential role in the decomposition of organic matter and have fundamental roles in nutrient cycling and exchange in the environment. They have long been used as a direct source of human food, in the form of mushrooms and truffles; as a leavening agent for bread; and in the fermentation of various food products, such as wine, beer, and soy sauce. Since the 1940s, fungi have been used for the production of antibiotics, and, more recently, various enzymes produced by fungi are used industrially and in detergents. Fungi are also used as biological pesticides to control weeds, plant diseases, and insect pests. Many species produce bioactive compounds called mycotoxins, such as alkaloids and polyketides, that are toxic to animals, including humans. The fruiting structures of a few species contain psychotropic compounds and are consumed recreationally or in traditional spiritual ceremonies. Fungi can break down manufactured materials and buildings, and become significant pathogens of humans and other animals. Losses of crops due to fungal diseases (e.g., rice blast disease) or food spoilage can have a large impact on human food supplies and local economies. The fungus kingdom encompasses an enormous diversity of taxa with varied ecologies, life cycle strategies, and morphologies ranging from unicellular aquatic chytrids to large mushrooms. However, little is known of the true biodiversity of the fungus kingdom, which has been estimated at 2.2 million to 3.8 million species. Of these, only about 148,000 have been described, with over 8,000 species known to be detrimental to plants and at least 300 that can be pathogenic to humans. Ever since the pioneering 18th and 19th century taxonomical works of Carl Linnaeus, Christiaan Hendrik Persoon, and Elias Magnus Fries, fungi have been classified according to their morphology (e.g., characteristics such as spore color or microscopic features) or physiology. Advances in molecular genetics have opened the way for DNA analysis to be incorporated into taxonomy, which has sometimes challenged the historical groupings based on morphology and other traits. Phylogenetic studies published in the first decade of the 21st century have helped reshape the classification within the fungi kingdom, which is divided into one subkingdom, seven phyla, and ten subphyla.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fungi";
        }
    }

    return nullptr;
}

string _Biology::Terms::GProtein(string text)
{
    string model = "llama3";
    string definition = "G proteins, also known as guanine nucleotide-binding proteins, are a family of proteins that act as molecular switches inside cells, and are involved in transmitting signals from a variety of stimuli outside a cell to its interior. Their activity is regulated by factors that control their ability to bind to and hydrolyze guanosine triphosphate (GTP) to guanosine diphosphate (GDP). When they are bound to GTP, they are \'on\', and, when they are bound to GDP, they are \'off\'. G proteins belong to the larger group of enzymes called GTPases. There are two classes of G proteins. The first function as monomeric small GTPases (small G-proteins), while the second function as heterotrimeric G protein complexes. The latter class of complexes is made up of alpha (Gα), beta (Gß) and gamma (G?) subunits. In addition, the beta and gamma subunits can form a stable dimeric complex referred to as the beta-gamma complex . Heterotrimeric G proteins located within the cell are activated by G protein-coupled receptors (GPCRs) that span the cell membrane. Signaling molecules bind to a domain of the GPCR located outside the cell, and an intracellular GPCR domain then in turn activates a particular G protein. Some active-state GPCRs have also been shown to be \"pre-coupled\" with G proteins, whereas in other cases a collision coupling mechanism is thought to occur. The G protein triggers a cascade of further signaling events that finally results in a change in cell function. G protein-coupled receptors and G proteins working together transmit signals from many hormones, neurotransmitters, and other signaling factors. G proteins regulate metabolic enzymes, ion channels, transporter proteins, and other parts of the cell machinery, controlling transcription, motility, contractility, and secretion, which in turn regulate diverse systemic functions such as embryonic development, learning and memory, and homeostasis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "G Protein";
        }
    }

    return nullptr;
}

string _Biology::Terms::Gamete(string text)
{
    string model = "llama3";
    string definition = "A gamete is a haploid cell that fuses with another haploid cell during fertilization in organisms that reproduce sexually. Gametes are an organism\'s reproductive cells, also referred to as sex cells. The name gamete was introduced by the German cytologist Eduard Strasburger in 1878. Gametes of both mating individuals can be the same size and shape, a condition known as isogamy. By contrast, in the majority of species, the gametes are of different sizes, a condition known as anisogamy or heterogamy that applies to humans and other mammals. The human ovum has approximately 100,000 times the volume of a single human sperm cell. The type of gamete an organism produces determines its sex and sets the basis for the sexual roles and sexual selection. In humans and other species that produce two morphologically distinct types of gametes, and in which each individual produces only one type, a female is any individual that produces the larger type of gamete called an ovum, and a male produces the smaller type, called a sperm cell or spermatozoon. Sperm cells are small and motile due to the presence of a tail-shaped structure, the flagellum, that provides propulsion. In contrast, each egg cell or ovum is relatively large and non-motile. Oogenesis, the process of female gamete formation in animals, involves meiosis (including meiotic recombination) of a diploid primary oocyte to produce a haploid ovum. Spermatogenesis, the process of male gamete formation in animals, involves meiosis in a diploid primary spermatocyte to produce haploid spermatozoa. In animals, ova are produced in the ovaries of females and sperm develop in the testes of males. During fertilization, a spermatozoon and an ovum, each carrying half of the genetic information of an individual, unite to form a zygote that develops into a new diploid organism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gamete";
        }
    }

    return nullptr;
}

string _Biology::Terms::Gene(string text)
{
    string model = "llama3";
    string definition = "In biology, the word gene has two meanings. The Mendelian gene is a basic unit of heredity. The molecular gene is a sequence of nucleotides in DNA that is transcribed to produce a functional RNA. There are two types of molecular genes: protein-coding genes and non-coding genes. During gene expression (the synthesis of RNA or protein from a gene), DNA is first copied into RNA. RNA can be directly functional or be the intermediate template for the synthesis of a protein. The transmission of genes to an organism\'s offspring, is the basis of the inheritance of phenotypic traits from one generation to the next. These genes make up different DNA sequences, together called a genotype, that is specific to every given individual, within the gene pool of the population of a given species. The genotype, along with environmental and developmental factors, ultimately determines the phenotype of the individual. Most biological traits occur under the combined influence of polygenes (a set of different genes) and gene-environment interactions. Some genetic traits are instantly visible, such as eye color or the number of limbs, others are not, such as blood type, the risk for specific diseases, or the thousands of basic biochemical processes that constitute life. A gene can acquire mutations in its sequence, leading to different variants, known as alleles, in the population. These alleles encode slightly different versions of a gene, which may cause different phenotypical traits. Genes evolve due to natural selection or survival of the fittest and genetic drift of the alleles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gene";
        }
    }

    return nullptr;
}

string _Biology::Terms::GenePool(string text)
{
    string model = "llama3";
    string definition = "The gene pool is the set of all genes, or genetic information, in any population, usually of a particular species.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gene Pool";
        }
    }

    return nullptr;
}

string _Biology::Terms::Generation(string text)
{
    string model = "llama3";
    string definition = "a range of time where babies are born belong to the group of that certain amount of time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Generation";
        }
    }

    return nullptr;
}

string _Biology::Terms::GeneticDrift(string text)
{
    string model = "llama3";
    string definition = "Genetic drift, also known as random genetic drift, allelic drift or the Wright effect, is the change in the frequency of an existing gene variant (allele) in a population due to random chance. Genetic drift may cause gene variants to disappear completely and thereby reduce genetic variation. It can also cause initially rare alleles to become much more frequent and even fixed. When few copies of an allele exist, the effect of genetic drift is more notable, and when many copies exist, the effect is less notable (due to the law of large numbers). In the middle of the 20th century, vigorous debates occurred over the relative importance of natural selection versus neutral processes, including genetic drift. Ronald Fisher, who explained natural selection using Mendelian genetics, held the view that genetic drift plays at most a minor role in evolution, and this remained the dominant view for several decades. In 1968, population geneticist Motoo Kimura rekindled the debate with his neutral theory of molecular evolution, which claims that most instances where a genetic change spreads across a population (although not necessarily changes in phenotypes) are caused by genetic drift acting on neutral mutations. In the 1990s, constructive neutral evolution was proposed which seeks to explain how complex systems emerge through neutral transitions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Genetic Drift";
        }
    }

    return nullptr;
}

string _Biology::Terms::GeneticVariation(string text)
{
    string model = "llama3";
    string definition = "Genetic variation is the difference in DNA among individuals or the differences between populations among the same species. The multiple sources of genetic variation include mutation and genetic recombination. Mutations are the ultimate sources of genetic variation, but other mechanisms, such as genetic drift, contribute to it, as well.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Genetic Variation";
        }
    }

    return nullptr;
}

string _Biology::Terms::Genetics(string text)
{
    string model = "llama3";
    string definition = "Genetics is the study of genes, genetic variation, and heredity in organisms. It is an important branch in biology because heredity is vital to organisms\' evolution. Gregor Mendel, a Moravian Augustinian friar working in the 19th century in Brno, was the first to study genetics scientifically. Mendel studied \"trait inheritance\", patterns in the way traits are handed down from parents to offspring over time. He observed that organisms (pea plants) inherit traits by way of discrete \"units of inheritance\". This term, still used today, is a somewhat ambiguous definition of what is referred to as a gene.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Genetics";
        }
    }

    return nullptr;
}

string _Biology::Terms::Genome(string text)
{
    string model = "llama3";
    string definition = "In the fields of molecular biology and genetics, a genome is all the genetic information of an organism. It consists of nucleotide sequences of DNA (or RNA in RNA viruses). The nuclear genome includes protein-coding genes and non-coding genes, other functional regions of the genome such as regulatory sequences (see non-coding DNA), and often a substantial fraction of junk DNA with no evident function. Almost all eukaryotes have mitochondria and a small mitochondrial genome. Algae and plants also contain chloroplasts with a chloroplast genome. The study of the genome is called genomics. The genomes of many organisms have been sequenced and various regions have been annotated. The Human Genome Project was started in October 1990, and then reported the sequence of the human genome in April 2003, although the initial \"finished\" sequence was missing 8% of the genome consisting mostly of repetitive sequences. With advancements in technology that could handle sequencing of the many repetitive sequences found in human DNA that were not fully uncovered by the original Human Genome Project study, scientists reported the first end-to-end human genome sequence in March 2022.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Genome";
        }
    }

    return nullptr;
}

string _Biology::Terms::Genotype(string text)
{
    string model = "llama3";
    string definition = "The genotype of an organism is its complete set of genetic material. Genotype can also be used to refer to the alleles or variants an individual carries in a particular gene or genetic location. The number of alleles an individual can have in a specific gene depends on the number of copies of each chromosome found in that species, also referred to as ploidy. In diploid species like humans, two full sets of chromosomes are present, meaning each individual has two alleles for any given gene. If both alleles are the same, the genotype is referred to as homozygous. If the alleles are different, the genotype is referred to as heterozygous. Genotype contributes to phenotype, the observable traits and characteristics in an individual or organism. The degree to which genotype affects phenotype depends on the trait. For example, the petal color in a pea plant is exclusively determined by genotype. The petals can be purple or white depending on the alleles present in the pea plant. However, other traits are only partially influenced by genotype. These traits are often called complex traits because they are influenced by additional factors, such as environmental and epigenetic factors. Not all individuals with the same genotype look or act the same way because appearance and behavior are modified by environmental and growing conditions. Likewise, not all organisms that look alike necessarily have the same genotype. The term genotype was coined by the Danish botanist Wilhelm Johannsen in 1903.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Genotype";
        }
    }

    return nullptr;
}



string _Biology::Terms::Genus(string text)
{
    string model = "llama3";
    string definition = "is a taxonomic rank above species and below family as used in the biological classification of living and fossil organisms as well as viruses. In binomial nomenclature, the genus name forms the first part of the binomial species name for each species within the genus. The composition of a genus is determined by taxonomists. The standards for genus classification are not strictly codified, so different authorities often produce different classifications for genera. There are some general practices used, however, including the idea that a newly defined genus should fulfill these three criteria to be descriptively useful: monophyly - all descendants of an ancestral taxon are grouped together (i.e. phylogenetic analysis should clearly demonstrate both monophyly and validity as a separate lineage). reasonable compactness - a genus should not be expanded needlessly. distinctness - with respect to evolutionarily relevant criteria, i.e. ecology, morphology, or biogeography; DNA sequences are a consequence rather than a condition of diverging evolutionary lineages except in cases where they directly inhibit gene flow (e.g. postzygotic barriers).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Genus";
        }
    }

    return nullptr;
}

string _Biology::Terms::Gizzard(string text)
{
    string model = "llama3";
    string definition = "The gizzard, also referred to as the ventriculus, gastric mill, and gigerium, is an organ found in the digestive tract of some animals, including archosaurs (birds and other dinosaurs, crocodiles, alligators, pterosaurs), earthworms, some gastropods, some fish, and some crustaceans. This specialized stomach constructed of thick muscular walls is used for grinding up food, often aided by particles of stone or grit. In certain insects and molluscs, the gizzard features chitinous plates or teeth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gizzard";
        }
    }

    return nullptr;
}

string _Biology::Terms::Guanine(string text)
{
    string model = "llama3";
    string definition = "Guanine (symbol G or Gua) is one of the four main nucleotide bases found in the nucleic acids DNA and RNA, the others being adenine, cytosine, and thymine (uracil in RNA). In DNA, guanine is paired with cytosine. The guanine nucleoside is called guanosine. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Guanine";
        }
    }

    return nullptr;
}

string _Biology::Terms::Habitat(string text)
{
    string model = "llama3";
    string definition = "In ecology, habitat refers to the array of resources, physical and biotic factors that are present in an area, such as to support the survival and reproduction of a particular species. A species habitat can be seen as the physical manifestation of its ecological niche. Thus \"habitat\" is a species-specific term, fundamentally different from concepts such as environment or vegetation assemblages, for which the term \"habitat-type\" is more appropriate. The physical factors may include (for example): soil, moisture, range of temperature, and light intensity. Biotic factors include the availability of food and the presence or absence of predators. Every species has particular habitat requirements, habitat generalist species are able to thrive in a wide array of environmental conditions while habitat specialist species require a very limited set of factors to survive. The habitat of a species is not necessarily found in a geographical area, it can be the interior of a stem, a rotten log, a rock or a clump of moss; a parasitic organism has as its habitat the body of its host, part of the host\'s body (such as the digestive tract), or a single cell within the host\'s body. Habitat types are environmental categorizations of different environments based on the characteristics of a given geographical area, particularly vegetation and climate. Thus habitat types do not refer to a single species but to multiple species living in the same area. For example, terrestrial habitat types include forest, steppe, grassland, semi-arid or desert. Fresh-water habitat types include marshes, streams, rivers, lakes, and ponds; marine habitat types include salt marshes, the coast, the intertidal zone, estuaries, reefs, bays, the open sea, the sea bed, deep water and submarine vents. Habitat types may change over time. Causes of change may include a violent event (such as the eruption of a volcano, an earthquake, a tsunami, a wildfire or a change in oceanic currents); or change may occur more gradually over millennia with alterations in the climate, as ice sheets and glaciers advance and retreat, and as different weather patterns bring changes of precipitation and solar radiation. Other changes come as a direct result of human activities, such as deforestation, the plowing of ancient grasslands, the diversion and damming of rivers, the draining of marshland and the dredging of the seabed. The introduction of alien species can have a devastating effect on native wildlife - through increased predation, through competition for resources or through the introduction of pests and diseases to which the indigenous species have no immunity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Habitat";
        }
    }

    return nullptr;
}

string _Biology::Terms::Habituation(string text)
{
    string model = "llama3";
    string definition = "Habituation is a form of non-associative learning in which an organism\'s non-reinforced response to a stimulus decreases after repeated or prolonged presentations of that stimulus. For example, organisms may habituate to repeated sudden loud noises when they learn that these have no consequences. Habituation can occur in responses that habituate include those that involve an entire organism or specific biological component systems of an organism. The broad ubiquity of habituation across all forms of life has led to it being called \"the simplest, most universal form of learning...as fundamental a characteristic of life as DNA.\" Functionally, habituation is thought to free up cognitive resources for other stimuli that are associated with biologically important events by diminishing the response to inconsequential stimuli. A progressive decline of a behavior in a habituation procedure may also reflect nonspecific effects such as fatigue, which must be ruled out when the interest is in habituation. Habituation is relevant in psychiatry and psychopathology, as several neuropsychiatric conditions including autism, schizophrenia, migraine, and Tourette syndrome show reduced habituation to a variety of stimulus-types both simple and complex.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Habituation";
        }
    }

    return nullptr;
}

string _Biology::Terms::Heredity(string text)
{
    string model = "llama3";
    string definition = "Heredity, also called inheritance or biological inheritance, is the passing on of traits from parents to their offspring; either through asexual reproduction or sexual reproduction, the offspring cells or organisms acquire the genetic information of their parents. Through heredity, variations between individuals can accumulate and cause species to evolve by natural selection. The study of heredity in biology is genetics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Heredity";
        }
    }

    return nullptr;
}

string _Biology::Terms::Hermaphrodite(string text)
{
    string model = "llama3";
    string definition = "A hermaphrodite is a sexually reproducing organism that produces both male and female gametes. Animal species in which individuals are either male or female are gonochoric, which is the opposite of hermaphroditic. The individuals of many taxonomic groups of animals, primarily invertebrates, are hermaphrodites, capable of producing viable gametes of both sexes. In the great majority of tunicates, mollusks, and earthworms, hermaphroditism is a normal condition, enabling a form of sexual reproduction in which either partner can act as the female or male. Hermaphroditism is also found in some fish species, but is rare in other vertebrate groups. Most hermaphroditic species exhibit some degree of self-fertilization. The distribution of self-fertilization rates among animals is similar to that of plants, suggesting that similar pressures are operating to direct the evolution of selfing in animals and plants. A rough estimate of the number of hermaphroditic animal species is 65,000, about 5% of all animal species, or 33% excluding insects. Insects are almost exclusively gonochoric, and no definitive cases of hermaphroditism have been demonstrated in this group. There are no known hermaphroditic species among mammals or birds. About 94% of flowering plant species are either hermaphroditic (all flowers produce both male and female gametes) or monoecious, where both male and female flowers occur on the same plant. There are also mixed breeding systems, in both plants and animals, where hermaphrodite individuals coexist with males (called androdioecy) or with females (called gynodioecy), or all three exist in the same species (called trioecy). Sometimes, both male and hermaphrodite flowers occur on the same plant (andromonoecy) or both female and hermaphrodite flowers occur on the same plant (gynomonoecy). Hermaphrodism is not to be confused with ovotesticular syndrome in mammals, which is a separate and unrelated phenomenon. While people with the condition were previously called \"true hermaphrodites\" in medical literature, this usage is now considered to be outdated as of 2006 and misleading, as people with ovotesticular syndrome do not have functional sets of both male and female organs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hermaphrodite";
        }
    }

    return nullptr;
}

string _Biology::Terms::Herpetology(string text)
{
    string model = "llama3";
    string definition = "Herpetology  is a branch of zoology concerned with the study of amphibians (including frogs, salamanders, and caecilians (Gymnophiona)) and reptiles (including snakes, lizards, turtles, crocodilians, and tuataras). Birds, which are cladistically included within Reptilia, are traditionally excluded here; the separate scientific study of birds is the subject of ornithology. The precise definition of herpetology is the study of ectothermic (cold-blooded) tetrapods. This definition of \"herps\" (otherwise called \"herptiles\" or \"herpetofauna\") excludes fish; however, it is not uncommon for herpetological and ichthyological scientific societies to collaborate. For instance, groups such as the American Society of Ichthyologists and Herpetologists have co-published journals and hosted conferences to foster the exchange of ideas between the fields. Herpetological societies are formed to promote interest in reptiles and amphibians, both captive and wild. Herpetological studies can offer benefits relevant to other fields by providing research on the role of amphibians and reptiles in global ecology. For example, by monitoring amphibians that are very sensitive to environmental changes, herpetologists record visible warnings that significant climate changes are taking place. Although they can be deadly, some toxins and venoms produced by reptiles and amphibians are useful in human medicine. Currently, some snake venom has been used to create anti-coagulants that work to treat strokes and heart attacks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Herpetology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Histology(string text)
{
    string model = "llama3";
    string definition = "Histology, also known as microscopic anatomy or microanatomy, is the branch of biology that studies the microscopic anatomy of biological tissues. Histology is the microscopic counterpart to gross anatomy, which looks at larger structures visible without a microscope. Although one may divide microscopic anatomy into organology, the study of organs, histology, the study of tissues, and cytology, the study of cells, modern usage places all of these topics under the field of histology. In medicine, histopathology is the branch of histology that includes the microscopic identification and study of diseased tissue. In the field of paleontology, the term paleohistology refers to the histology of fossil organisms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Histology";
        }
    }

    return nullptr;
}

string _Biology::Terms::HodgkinHuxleyModel(string text)
{
    string model = "llama3";
    string definition = "The Hodgkin-Huxley model, or conductance-based model, is a mathematical model that describes how action potentials in neurons are initiated and propagated. It is a set of nonlinear differential equations that approximates the electrical engineering characteristics of excitable cells such as neurons and muscle cells. It is a continuous-time dynamical system. Alan Hodgkin and Andrew Huxley described the model in 1952 to explain the ionic mechanisms underlying the initiation and propagation of action potentials in the squid giant axon. They received the 1963 Nobel Prize in Physiology or Medicine for this work.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hodgkin Huxley Model";
        }
    }

    return nullptr;
}

string _Biology::Terms::Hormone(string text)
{
    string model = "llama3";
    string definition = "A hormone  is a class of signaling molecules in multicellular organisms that are sent to distant organs or tissues by complex biological processes to regulate physiology and behavior. Hormones are required for the correct development of animals, plants and fungi. Due to the broad definition of a hormone (as a signaling molecule that exerts its effects far from its site of production), numerous kinds of molecules can be classified as hormones. Among the substances that can be considered hormones, are eicosanoids (e.g. prostaglandins and thromboxanes), steroids (e.g. oestrogen and brassinosteroid), amino acid derivatives (e.g. epinephrine and auxin), protein or peptides (e.g. insulin and CLE peptides), and gases (e.g. ethylene and nitric oxide). Hormones are used to communicate between organs and tissues. In vertebrates, hormones are responsible for regulating a wide range of processes including both physiological processes and behavioral activities such as digestion, metabolism, respiration, sensory perception, sleep, excretion, lactation, stress induction, growth and development, movement, reproduction, and mood manipulation. In plants, hormones modulate almost all aspects of development, from germination to senescence. Hormones affect distant cells by binding to specific receptor proteins in the target cell, resulting in a change in cell function. When a hormone binds to the receptor, it results in the activation of a signal transduction pathway that typically activates gene transcription, resulting in increased expression of target proteins. Hormones can also act in non-genomic pathways that synergize with genomic effects. Water-soluble hormones (such as peptides and amines) generally act on the surface of target cells via second messengers. Lipid soluble hormones, (such as steroids) generally pass through the plasma membranes of target cells (both cytoplasmic and nuclear) to act within their nuclei. Brassinosteroids, a type of polyhydroxysteroids, are a sixth class of plant hormones and may be useful as an anticancer drug for endocrine-responsive tumors to cause apoptosis and limit plant growth. Despite being lipid soluble, they nevertheless attach to their receptor at the cell surface. In vertebrates, endocrine glands are specialized organs that secrete hormones into the endocrine signaling system. Hormone secretion occurs in response to specific biochemical signals and is often subject to negative feedback regulation. For instance, high blood sugar (serum glucose concentration) promotes insulin synthesis. Insulin then acts to reduce glucose levels and maintain homeostasis, leading to reduced insulin levels. Upon secretion, water-soluble hormones are readily transported through the circulatory system. Lipid-soluble hormones must bond to carrier plasma glycoproteins (e.g., thyroxine-binding globulin (TBG)) to form ligand-protein complexes. Some hormones, such as insulin and growth hormones, can be released into the bloodstream already fully active. Other hormones, called prohormones, must be activated in certain cells through a series of steps that are usually tightly controlled. The endocrine system secretes hormones directly into the bloodstream, typically via fenestrated capillaries, whereas the exocrine system secretes its hormones indirectly using ducts. Hormones with paracrine function diffuse through the interstitial spaces to nearby target tissue.Plants lack specialized organs for the secretion of hormones, although there is spatial distribution of hormone production. For example, the hormone auxin is produced mainly at the tips of young leaves and in the shoot apical meristem. The lack of specialised glands means that the main site of hormone production can change throughout the life of a plant, and the site of production is dependent on the plant\'s age and environment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hormone";
        }
    }

    return nullptr;
}

string _Biology::Terms::Host(string text)
{
    string model = "llama3";
    string definition = "In biology and medicine, a host is a larger organism that harbours a smaller organism; whether a parasitic, a mutualistic, or a commensalist guest (symbiont). The guest is typically provided with nourishment and shelter. Examples include animals playing host to parasitic worms (e.g. nematodes), cells harbouring pathogenic (disease-causing) viruses, or a bean plant hosting mutualistic (helpful) nitrogen-fixing bacteria. More specifically in botany, a host plant supplies food resources to micropredators, which have an evolutionarily stable relationship with their hosts similar to ectoparasitism. The host range is the collection of hosts that an organism can use as a partner.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Host";
        }
    }

    return nullptr;
}

string _Biology::Terms::Hybrid(string text)
{
    string model = "llama3";
    string definition = "In biology, a hybrid is the offspring resulting from combining the qualities of two organisms of different varieties, subspecies, species or genera through sexual reproduction. Generally, it means that each cell has genetic material from two different organisms, whereas an individual where some cells are derived from a different organism is called a chimera. Hybrids are not always intermediates between their parents such as in blending inheritance (a now discredited theory in modern genetics by particulate inheritance), but can show hybrid vigor, sometimes growing larger or taller than either parent. The concept of a hybrid is interpreted differently in animal and plant breeding, where there is interest in the individual parentage. In genetics, attention is focused on the numbers of chromosomes. In taxonomy, a key question is how closely related the parent species are. Species are reproductively isolated by strong barriers to hybridization, which include genetic and morphological differences, differing times of fertility, mating behaviors and cues, and physiological rejection of sperm cells or the developing embryo. Some act before fertilization and others after it. Similar barriers exist in plants, with differences in flowering times, pollen vectors, inhibition of pollen tube growth, somatoplastic sterility, cytoplasmic-genic male sterility and the structure of the chromosomes. A few animal species and many plant species, however, are the result of hybrid speciation, including important crop plants such as wheat, where the number of chromosomes has been doubled. A form of often intentional human-mediated hybridization is the crossing of wild and domesticated species. This is common in both traditional horticulture and modern agriculture; many commercially useful fruits, flowers, garden herbs, and trees have been produced by hybridization. One such flower, Oenothera lamarckiana, was central to early genetics research into mutationism and polyploidy. It is also more occasionally done in the livestock and pet trades; some well-known wild x domestic hybrids are beefalo and wolfdogs. Human selective breeding of domesticated animals and plants has also resulted in the development of distinct breeds (usually called cultivars in reference to plants); crossbreeds between them (without any wild stock) are sometimes also imprecisely referred to as \"hybrids\". Hybrid humans existed in prehistory. For example, Neanderthals and anatomically modern humans are thought to have interbred as recently as 40,000 years ago. Mythological hybrids appear in human culture in forms as diverse as the Minotaur, blends of animals, humans and mythical beasts such as centaurs and sphinxes, and the Nephilim of the Biblical apocrypha described as the wicked sons of fallen angels and attractive women.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hybrid";
        }
    }

    return nullptr;
}

string _Biology::Terms::Hydrocarbon(string text)
{
    string model = "llama3";
    string definition = "In organic chemistry, a hydrocarbon is an organic compound consisting entirely of hydrogen and carbon. Hydrocarbons are examples of group 14 hydrides. Hydrocarbons are generally colourless and hydrophobic; their odor is usually faint, and may be similar to that of gasoline or lighter fluid. They occur in a diverse range of molecular structures and phases: they can be gases (such as methane and propane), liquids (such as hexane and benzene), low melting solids (such as paraffin wax and naphthalene) or polymers (such as polyethylene and polystyrene). In the fossil fuel industries, hydrocarbon refers to naturally occurring petroleum, natural gas and coal, or their hydrocarbon derivatives and purified forms. Combustion of hydrocarbons is the main source of the world\'s energy. Petroleum is the dominant raw-material source for organic commodity chemicals such as solvents and polymers. Most anthropogenic (human-generated) emissions of greenhouse gases are either carbon dioxide released by the burning of fossil fuels, or methane released from the handling of natural gas or from agriculture.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::Ichthyology(string text)
{
    string model = "llama3";
    string definition = "Ichthyology is the branch of zoology devoted to the study of fish, including bony fish (Osteichthyes), cartilaginous fish (Chondrichthyes), and jawless fish (Agnatha). According to FishBase, 33,400 species of fish had been described as of October 2016, with approximately 250 new species described each year.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ichthyology";
        }
    }

    return nullptr;
}

string _Biology::Terms::ImmuneResponse(string text)
{
    string model = "llama3";
    string definition = "An immune response is a physiological reaction which occurs within an organism in the context of inflammation for the purpose of defending against exogenous factors. These include a wide variety of different toxins, viruses, intra- and extracellular bacteria, protozoa, helminths, and fungi which could cause serious problems to the health of the host organism if not cleared from the body. In addition, there are other forms of immune response. For example, harmless exogenous factors (such as pollen and food components) can trigger allergy; latex and metals are also known allergens. A transplanted tissue (for example, blood) or organ can cause graft-versus-host disease. A type of immune reactivity known as Rh disease can be observed in pregnant women. These special forms of immune response are classified as hypersensitivity. Another special form of immune response is antitumor immunity. In general, there are two branches of the immune response, the innate and the adaptive, which work together to protect against pathogens. Both branches engage humoral and cellular components. The innate branch-the body\'s first reaction to an invader-is known to be a non-specific and quick response to any sort of pathogen . Components of the innate immune response include physical barriers like the skin and mucous membranes, immune cells such as neutrophils, macrophages, and monocytes, and soluble factors including cytokines and complement. On the other hand, the adaptive branch is the body\'s immune response which is catered against specific antigens and thus, it takes longer to activate the components involved. The adaptive branch include cells such as dendritic cells, T cell, and B cells as well as antibodies-also known as immunoglobulins-which directly interact with antigen and are a very important component for a strong response against an invader. The first contact that an organism has with a particular antigen will result in the production of effector T and B cells which are activated cells that defend against the pathogen. The production of these effector cells as a result of the first-time exposure is called a primary immune response. Memory T and memory B cells are also produced in the case that the same pathogen enters the organism again. If the organism does happen to become re-exposed to the same pathogen, a secondary immune response will kick in and the immune system will be able to respond in both a fast and strong manner because of the memory cells from the first exposure. Vaccines introduce a weakened, killed, or fragmented microorganism in order to evoke a primary immune response. This is so that in the case that an exposure to the real pathogen occurs, the body can rely on the secondary immune response to quickly defend against it.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Immune Response";
        }
    }

    return nullptr;
}

string _Biology::Terms::Immunoglobulin(string text)
{
    string model = "llama3";
    string definition = "An antibody (Ab) or immunoglobulin (Ig) is a large, Y-shaped protein belonging to the immunoglobulin superfamily which is used by the immune system to identify and neutralize antigens such as bacteria and viruses, including those that cause disease. Antibodies can recognize virtually any size antigen with diverse chemical compositions from molecules. Each antibody recognizes one or more specific antigens. Antigen literally means \"antibody generator\", as it is the presence of an antigen that drives the formation of an antigen-specific antibody. Each tip of the \"Y\" of an antibody contains a paratope that specifically binds to one particular epitope on an antigen, allowing the two molecules to bind together with precision. Using this mechanism, antibodies can effectively \"tag\" a microbe or an infected cell for attack by other parts of the immune system, or can neutralize it directly (for example, by blocking a part of a virus that is essential for its invasion).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Immunoglobulin";
        }
    }

    return nullptr;
}

string _Biology::Terms::Infection(string text)
{
    string model = "llama3";
    string definition = "An infection is the invasion of tissues by pathogens, their multiplication, and the reaction of host tissues to the infectious agent and the toxins they produce. An infectious disease, also known as a transmissible disease or communicable disease, is an illness resulting from an infection. Infections can be caused by a wide range of pathogens, most prominently bacteria and viruses. Hosts can fight infections using their immune systems. Mammalian hosts react to infections with an innate response, often involving inflammation, followed by an adaptive response. Specific medications used to treat infections include antibiotics, antivirals, antifungals, antiprotozoals, and antihelminthics. Infectious diseases resulted in 9.2 million deaths in 2013 (about 17% of all deaths). The branch of medicine that focuses on infections is referred to as infectious diseases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Infection";
        }
    }

    return nullptr;
}

string _Biology::Terms::Insulin(string text)
{
    string model = "llama3";
    string definition = "a peptide hormone produced by beta cells of the pancreatic islets encoded in humans by the insulin (INS) gene. It is the main anabolic hormone of the body. It regulates the metabolism of carbohydrates, fats, and protein by promoting the absorption of glucose from the blood into cells of the liver, fat, and skeletal muscles. In these tissues the absorbed glucose is converted into either glycogen, via glycogenesis, or fats (triglycerides), via lipogenesis; in the liver, glucose is converted into both. Glucose production and secretion by the liver are strongly inhibited by high concentrations of insulin in the blood. Circulating insulin also affects the synthesis of proteins in a wide variety of tissues. It is thus an anabolic hormone, promoting the conversion of small molecules in the blood into large molecules in the cells. Low insulin in the blood has the opposite effect, promoting widespread catabolism, especially of reserve body fat.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Insulin";
        }
    }

    return nullptr;
}

string _Biology::Terms::IntegrativeBiology(string text)
{
    string model = "llama3";
    string definition = "Integrative Biology is a monthly peer-reviewed scientific journal covering the interface between biology and the fields of physics, chemistry, engineering, imaging, and informatics. It was published by the Royal Society of Chemistry from its launch in 2008 to 2018. Since then, it has been published by Oxford University Press.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Integrative Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Interferon(string text)
{
    string model = "llama3";
    string definition = "are a group of signaling proteins made and released by host cells in response to the presence of several viruses. In a typical scenario, a virus-infected cell will release interferons causing nearby cells to heighten their anti-viral defenses. IFNs belong to the large class of proteins known as cytokines, molecules used for communication between cells to trigger the protective defenses of the immune system that help eradicate pathogens. Interferons are named for their ability to \"interfere\" with viral replication by protecting cells from virus infections. However, virus-encoded genetic elements have the ability to antagonize the IFN response, contributing to viral pathogenesis and viral diseases. IFNs also have various other functions: they activate immune cells, such as natural killer cells and macrophages, and they increase host defenses by up-regulating antigen presentation by virtue of increasing the expression of major histocompatibility complex (MHC) antigens. Certain symptoms of infections, such as fever, muscle pain and \"flu-like symptoms\", are also caused by the production of IFNs and other cytokines. More than twenty distinct IFN genes and proteins have been identified in animals, including humans. They are typically divided among three classes: Type I IFN, Type II IFN, and Type III IFN. IFNs belonging to all three classes are important for fighting viral infections and for the regulation of the immune system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Interferon";
        }
    }

    return nullptr;
}

string _Biology::Terms::InternalFertilization(string text)
{
    string model = "llama3";
    string definition = "Internal fertilization is the union of an egg and sperm cell during sexual reproduction inside the female body. Internal fertilization, unlike its counterpart, external fertilization, brings more control to the female with reproduction. For internal fertilization to happen there needs to be a method for the male to introduce the sperm into the female\'s reproductive tract. Most taxa that reproduce by internal fertilization are gonochoric.: 124-125  Male mammals, reptiles, and certain other vertebrates transfer sperm into the female\'s vagina or cloaca through an intromittent organ during copulation. In most birds, the cloacal kiss is used, the two animals pressing their cloacas together while transferring sperm. Salamanders, spiders, some insects and some molluscs undertake internal fertilization by transferring a spermatophore, a bundle of sperm, from the male to the female. Following fertilization, the embryos are laid as eggs in oviparous organisms, or continue to develop inside the reproductive tract of the mother to be born later as live young in viviparous organisms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Internal Fertilization";
        }
    }

    return nullptr;
}

string _Biology::Terms::InternationalSystemOfUnits(string text)
{
    string model = "llama3";
    string definition = "The International System of Units, internationally known by the abbreviation SI (from French Système international d\'unités), is the modern form of the metric system and the world\'s most widely used system of measurement. Coordinated by the International Bureau of Weights and Measures (abbreviated BIPM from French: Bureau international des poids et mesures) it is the only system of measurement with official status in nearly every country in the world, employed in science, technology, industry, and everyday commerce. The SI comprises a coherent system of units of measurement starting with seven base units, which are the second (symbol s, the unit of time), metre (m, length), kilogram (kg, mass), ampere (A, electric current), kelvin (K, thermodynamic temperature), mole (mol, amount of substance), and candela (cd, luminous intensity). The system can accommodate coherent units for an unlimited number of additional quantities. These are called coherent derived units, which can always be represented as products of powers of the base units. Twenty-two coherent derived units have been provided with special names and symbols. The seven base units and the 22 coherent derived units with special names and symbols may be used in combination to express other coherent derived units. Since the sizes of coherent units will be convenient for only some applications and not for others, the SI provides twenty-four prefixes which, when added to the name and symbol of a coherent unit produce twenty-four additional (non-coherent) SI units for the same quantity; these non-coherent units are always decimal (i.e. power-of-ten) multiples and sub-multiples of the coherent unit. The current way of defining the SI is a result of a decades-long move towards increasingly abstract and idealised formulation in which the realisations of the units are separated conceptually from the definitions. A consequence is that as science and technologies develop, new and superior realisations may be introduced without the need to redefine the unit. One problem with artefacts is that they can be lost, damaged, or changed; another is that they introduce uncertainties that cannot be reduced by advancements in science and technology. The original motivation for the development of the SI was the diversity of units that had sprung up within the centimetre-gram-second (CGS) systems (specifically the inconsistency between the systems of electrostatic units and electromagnetic units) and the lack of coordination between the various disciplines that used them. The General Conference on Weights and Measures (French: Conférence générale des poids et mesures - CGPM), which was established by the Metre Convention of 1875, brought together many international organisations to establish the definitions and standards of a new system and to standardise the rules for writing and presenting measurements. The system was published in 1960 as a result of an initiative that began in 1948, and is based on the metre-kilogram-second system of units (MKS) combined with ideas from the development of the CGS system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::Interphase(string text)
{
    string model = "llama3";
    string definition = "Interphase is the active portion of the cell cycle that includes the G1, S, and G2 phases, where the cell grows, replicates its DNA, and prepares for mitosis, respectively. Interphase was formerly called the \"resting phase,\" but the cell in interphase is not simply dormant. Calling it so would be misleading since a cell in interphase is very busy synthesizing proteins, transcribing DNA into RNA, engulfing extracellular material, and processing signals, to name just a few activities. The cell is quiescent only in G0. Interphase is the phase of the cell cycle in which a typical cell spends most of its life. Interphase is the \"daily living\" or metabolic phase of the cell, in which the cell obtains nutrients and metabolizes them, grows, replicates its DNA in preparation for mitosis, and conducts other \"normal\" cell functions. A common misconception is that interphase is the first stage of mitosis, but since mitosis is the division of the nucleus, prophase is actually the first stage. In interphase, the cell gets itself ready for mitosis or meiosis. Somatic cells, or normal diploid cells of the body, go through mitosis in order to reproduce themselves through cell division, whereas diploid germ cells (i.e., primary spermatocytes and primary oocytes) go through meiosis in order to create haploid gametes (i.e., sperm and ova) for the purpose of sexual reproduction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Interphase";
        }
    }

    return nullptr;
}

string _Biology::Terms::Intracellular(string text)
{
    string model = "llama3";
    string definition = "Of or occurring inside or within the enclosed interior of a cell. Contrast extracellular.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intracellular";
        }
    }

    return nullptr;
}

string _Biology::Terms::IntroducedSpecies(string text)
{
    string model = "llama3";
    string definition = "An introduced species, alien species, exotic species, adventive species, immigrant species, foreign species, non-indigenous species, or non-native species is a species living outside its native distributional range, but which has arrived there by human activity, directly or indirectly, and either deliberately or accidentally. Non-native species can have various effects on the local ecosystem. Introduced species that become established and spread beyond the place of introduction are considered naturalized. The process of human-caused introduction is distinguished from biological colonization, in which species spread to new areas through \"natural\" (non-human) means such as storms and rafting. The Latin expression neobiota captures the characteristic that these species are new biota to their environment in terms of established biological network (e.g. food web) relationships. Neobiota can further be divided into neozoa (also: neozoons, sing. neozoon, i.e. animals) and neophyta (plants). The impact of introduced species is highly variable. Some have a substantial negative effect on a local ecosystem (in which case they are also classified more specifically as an invasive species), while other introduced species may have little or no negative impact (no invasiveness), and integrate well into the ecosystem they have been introduced to. Some species have been introduced intentionally to combat pests. They are called biocontrols and may be regarded as beneficial as an alternative to pesticides in agriculture for example. In some instances the potential for being beneficial or detrimental in the long run remains unknown. The effects of introduced species on natural environments have gained much scrutiny from scientists, governments, farmers and others.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Introduced Species";
        }
    }

    return nullptr;
}

string _Biology::Terms::Invertebrate(string text)
{
    string model = "llama3";
    string definition = "Invertebrates is an umbrella term describing animals that neither develop nor retain a vertebral column (commonly known as a spine or backbone), which evolved from the notochord. It is a paraphyletic grouping including all animals excluding the chordate subphylum Vertebrata, i.e. vertebrates. Well-known phyla of invertebrates include arthropods, mollusks, annelids, echinoderms, flatworms, cnidarians, and sponges. The majority of animal species are invertebrates; one estimate puts the figure at 97%. Many invertebrate taxa have a greater number and diversity of species than the entire subphylum of Vertebrata. Invertebrates vary widely in size, from 10 µm (0.0004 in) myxozoans to the 9-10 m (30-33 ft) colossal squid. Some so-called invertebrates, such as the Tunicata and Cephalochordata, are actually sister chordate subphyla to Vertebrata, being more closely related to vertebrates than to other invertebrates. This makes the term \"invertebrates\" rather polyphyletic, so the term has little meaning in taxonomy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Invertebrate";
        }
    }

    return nullptr;
}

string _Biology::Terms::Ion(string text)
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

string _Biology::Terms::IonicBond(string text)
{
    string model = "llama3";
    string definition = "Ionic bonding is a type of chemical bonding that involves the electrostatic attraction between oppositely charged ions, or between two atoms with sharply different electronegativities, and is the primary interaction occurring in ionic compounds. It is one of the main types of bonding, along with covalent bonding and metallic bonding. Ions are atoms (or groups of atoms) with an electrostatic charge. Atoms that gain electrons make negatively charged ions (called anions). Atoms that lose electrons make positively charged ions (called cations). This transfer of electrons is known as electrovalence in contrast to covalence. In the simplest case, the cation is a metal atom and the anion is a nonmetal atom, but these ions can be more complex. In simpler words, an ionic bond results from the transfer of electrons from a metal to a non-metal to obtain a full valence shell for both atoms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::IsotonicSolution(string text)
{
    string model = "llama3";
    string definition = "A solution is isotonic when its effective osmole concentration is the same as that of another solution. In biology, the solutions on either side of a cell membrane are isotonic if the concentration of solutes outside the cell is equal to the concentration of solutes inside the cell. In this case the cell neither swells nor shrinks because there is no concentration gradient to induce the diffusion of large amounts of water across the cell membrane. Water molecules freely diffuse through the plasma membrane in both directions, and as the rate of water diffusion is the same in each direction, the cell will neither gain nor lose water.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Isotonic Solution";
        }
    }

    return nullptr;
}

string _Biology::Terms::Kinase(string text)
{
    string model = "llama3";
    string definition = "In biochemistry, a kinase is an enzyme that catalyzes the transfer of phosphate groups from high-energy, phosphate-donating molecules to specific substrates. This process is known as phosphorylation, where the high-energy ATP molecule donates a phosphate group to the substrate molecule. As a result, kinase produces a phosphorylated substrate and ADP. Conversely, it is referred to as dephosphorylation when the phosphorylated substrate donates a phosphate group and ADP gains a phosphate group (producing a dephosphorylated substrate and the high energy molecule of ATP). These two processes, phosphorylation and dephosphorylation, occur four times during glycolysis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kinase";
        }
    }

    return nullptr;
}

string _Biology::Terms::Kingdom(string text)
{
    string model = "llama3";
    string definition = "In biology, a kingdom is the second highest taxonomic rank, just below domain. Kingdoms are divided into smaller groups called phyla (singular phylum). Traditionally, textbooks from Canada and the United States have used a system of six kingdoms (Animalia, Plantae, Fungi, Protista, Archaea/Archaebacteria, and Bacteria or Eubacteria), while textbooks in other parts of the world, such as Bangladesh, Brazil, Greece, India, Pakistan, Spain, and the United Kingdom have used five kingdoms (Animalia, Plantae, Fungi, Protista and Monera). Some recent classifications based on modern cladistics have explicitly abandoned the term kingdom, noting that some traditional kingdoms are not monophyletic, meaning that they do not consist of all the descendants of a common ancestor. The terms flora (for plants), fauna (for animals), and, in the 21st century, funga (for fungi) are also used for life present in a particular region or time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kingdom";
        }
    }

    return nullptr;
}

string _Biology::Terms::Larva(string text)
{
    string model = "llama3";
    string definition = "a distinct juvenile form many animals undergo before metamorphosis into their next life stage. Animals with indirect development such as insects, some arachnids, amphibians, or cnidarians typically have a larval phase of their life cycle. A larva\'s appearance is generally very different from the adult form (e.g. caterpillars and butterflies) including different unique structures and organs that do not occur in the adult form. Their diet may also be considerably different. In the case of smaller primitive arachnids, the larval stage differs by having three instead of four pairs of legs. Larvae are frequently adapted to different environments than adults. For example, some larvae such as tadpoles live almost exclusively in aquatic environments, but can live outside water as adult frogs. By living in a distinct environment, larvae may be given shelter from predators and reduce competition for resources with the adult population. Animals in the larval stage will consume food to fuel their transition into the adult form. In some organisms like polychaetes and barnacles, adults are immobile but their larvae are mobile, and use their mobile larval form to distribute themselves. These larvae used for dispersal are either planktotrophic (feeding) or lecithotrophic (non-feeding). Some larvae are dependent on adults to feed them. In many eusocial Hymenoptera species, the larvae are fed by female workers. In Ropalidia marginata (a paper wasp) the males are also capable of feeding larvae but they are much less efficient, spending more time and getting less food to the larvae. The larvae of some organisms (for example, some newts) can become pubescent and do not develop further into the adult form. This is a type of neoteny. It is a misunderstanding that the larval form always reflects the group\'s evolutionary history. This could be the case, but often the larval stage has evolved secondarily, as in insects. In these cases, the larval form may differ more than the adult form from the group\'s common origins.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Larva";
        }
    }

    return nullptr;
}

string _Biology::Terms::LawOfIndependentAssortment(string text)
{
    string model = "llama3";
    string definition = "he Law of Independent Assortment proposes alleles for separate traits are passed independently of one another. That is, the biological selection of an allele for one trait has nothing to do with the selection of an allele for any other trait. Mendel found support for this law in his dihybrid cross experiments. In his monohybrid crosses, an idealized 3:1 ratio between dominant and recessive phenotypes resulted. In dihybrid crosses, however, he found a 9:3:3:1 ratios. This shows that each of the two alleles is inherited independently from the other, with a 3:1 phenotypic ratio for each. Independent assortment occurs in eukaryotic organisms during meiotic metaphase I, and produces a gamete with a mixture of the organism\'s chromosomes. The physical basis of the independent assortment of chromosomes is the random orientation of each bivalent chromosome along the metaphase plate with respect to the other bivalent chromosomes. Along with crossing over, independent assortment increases genetic diversity by producing novel genetic combinations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Law Of Independent Assortment";
        }
    }

    return nullptr;
}

string _Biology::Terms::Leukocyte(string text)
{
    string model = "llama3";
    string definition = "White blood cells (scientific name leukocytes), also called immune cells or immunocytes, are cells of the immune system that are involved in protecting the body against both infectious disease and foreign invaders. White blood cells are generally larger than red blood cells. They include three main subtypes: granulocytes, lymphocytes and monocytes. All white blood cells are produced and derived from multipotent cells in the bone marrow known as hematopoietic stem cells. Leukocytes are found throughout the body, including the blood and lymphatic system. All white blood cells have nuclei, which distinguishes them from the other blood cells, the anucleated red blood cells (RBCs) and platelets. The different white blood cells are usually classified by cell lineage (myeloid cells or lymphoid cells). White blood cells are part of the body\'s immune system. They help the body fight infection and other diseases. Types of white blood cells are granulocytes (neutrophils, eosinophils, and basophils), and agranulocytes (monocytes, and lymphocytes (T cells and B cells)). Myeloid cells (myelocytes) include neutrophils, eosinophils, mast cells, basophils, and monocytes. Monocytes are further subdivided into dendritic cells and macrophages. Monocytes, macrophages, and neutrophils are phagocytic. Lymphoid cells (lymphocytes) include T cells (subdivided into helper T cells, memory T cells, cytotoxic T cells), B cells (subdivided into plasma cells and memory B cells), and natural killer cells. Historically, white blood cells were classified by their physical characteristics (granulocytes and agranulocytes), but this classification system is less frequently used now. Produced in the bone marrow, white blood cells defend the body against infections and disease. An excess of white blood cells is usually due to infection or inflammation. Less commonly, a high white blood cell count could indicate certain blood cancers or bone marrow disorders.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Leukocyte";
        }
    }

    return nullptr;
}

string _Biology::Terms::Lichen(string text)
{
    string model = "llama3";
    string definition = "a hybrid colony of algae or cyanobacteria living symbiotically among filaments of multiple fungi species, along with yeasts and bacteria embedded in the cortex or \"skin\", in a mutualistic relationship. Lichens are the lifeform that first brought the term symbiosis (as symbiotismus) under biological context. Lichens have since been recognized as important actors in nutrient cycling and producers which many higher trophic feeders feed on, such as reindeer, gastropods, nematodes, mites, and springtails. Lichens have properties different from those of their component organisms. They come in many colors, sizes, and forms and are sometimes plant-like, but are not plants. They may have tiny, leafless branches (fruticose); flat leaf-like structures (foliose); grow crust-like, adhering tightly to a surface (substrate) like a thick coat of paint (crustose); have a powder-like appearance (leprose); or other growth forms. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lichen";
        }
    }

    return nullptr;
}

string _Biology::Terms::Life(string text)
{
    string model = "llama3";
    string definition = "Life is a quality that distinguishes matter that has biological processes, such as signaling and self-sustaining processes, from matter that does not. It is defined descriptively by the capacity for homeostasis, organisation, metabolism, growth, adaptation, response to stimuli, and reproduction. All life over time eventually reaches a state of death, and none is immortal. Many philosophical definitions of living systems have been proposed, such as self-organizing systems. Viruses in particular make definition difficult as they replicate only in host cells. Life exists all over the Earth in air, water, and soil, with many ecosystems forming the biosphere. Some of these are harsh environments occupied only by extremophiles. Life has been studied since ancient times, with theories such as Empedocles\'s materialism asserting that it was composed of four eternal elements, and Aristotle\'s hylomorphism asserting that living things have souls and embody both form and matter. Life originated at least 3.5 billion years ago, resulting in a universal common ancestor. This evolved into all the species that exist now, by way of many extinct species, some of which have left traces as fossils. Attempts to classify living things, too, began with Aristotle. Modern classification began with Carl Linnaeus\'s system of binomial nomenclature in the 1740s. Living things are composed of biochemical molecules, formed mainly from a few core chemical elements. All living things contain two types of large molecule, proteins and nucleic acids, the latter usually both DNA and RNA: these carry the information needed by each species, including the instructions to make each type of protein. The proteins, in turn, serve as the machinery which carries out the many chemical processes of life. The cell is the structural and functional unit of life. Smaller organisms, including prokaryotes (bacteria and archaea), consist of small single cells. Larger organisms, mainly eukaryotes, can consist of single cells or may be multicellular with more complex structure. Life is only known to exist on Earth but extraterrestrial life is thought probable. Artificial life is being simulated and explored by scientists and engineers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Life";
        }
    }

    return nullptr;
}

string _Biology::Terms::LifeCycle(string text)
{
    string model = "llama3";
    string definition = "In biology, a biological life cycle (or just life cycle when the biological context is clear) is a series of stages of the life of an organism, that begins as a zygote, often in an egg, and concludes as an adult that reproduces, producing an offspring in the form of a new zygote which then itself goes through the same series of stages, the process repeating in a cyclic fashion. \"The concept is closely related to those of the life history, development and ontogeny, but differs from them in stressing renewal.\" Transitions of form may involve growth, asexual reproduction, or sexual reproduction. In some organisms, different \"generations\" of the species succeed each other during the life cycle. For plants and many algae, there are two multicellular stages, and the life cycle is referred to as alternation of generations. The term life history is often used, particularly for organisms such as the red algae which have three multicellular stages (or more), rather than two.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Life Cycle";
        }
    }

    return nullptr;
}

string _Biology::Terms::Ligament(string text)
{
    string model = "llama3";
    string definition = "A ligament is the fibrous connective tissue that connects bones to other bones. It also connects flight feathers to bones, in dinosaurs and birds. All 30,000 species of amniotes (land animals with internal bones) have ligaments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ligament";
        }
    }

    return nullptr;
}

string _Biology::Terms::LightIndependentReactions(string text)
{
    string model = "llama3";
    string definition = "The Calvin cycle, light-independent reactions, bio synthetic phase, dark reactions, or photosynthetic carbon reduction (PCR) cycle of photosynthesis is a series of chemical reactions that convert carbon dioxide and hydrogen-carrier compounds into glucose. The Calvin cycle is present in all photosynthetic eukaryotes and also many photosynthetic bacteria. In plants, these reactions occur in the stroma, the fluid-filled region of a chloroplast outside the thylakoid membranes. These reactions take the products (ATP and NADPH) of light-dependent reactions and perform further chemical processes on them. The Calvin cycle uses the chemical energy of ATP and reducing power of NADPH from the light dependent reactions to produce sugars for the plant to use. These substrates are used in a series of reduction-oxidation (redox) reactions to produce sugars in a step-wise process; there is no direct reaction that converts several molecules of CO2 to a sugar. There are three phases to the light-independent reactions, collectively called the Calvin cycle: carboxylation, reduction reactions, and ribulose 1,5-bisphosphate (RuBP) regeneration. Though it is also called the \"dark reaction\", the Calvin cycle does not actually occur in the dark or during night time. This is because the process requires NADPH, which is short-lived and comes from light-dependent reactions. In the dark, plants instead release sucrose into the phloem from their starch reserves to provide energy for the plant. The Calvin cycle thus happens when light is available independent of the kind of photosynthesis (C3 carbon fixation, C4 carbon fixation, and crassulacean acid metabolism (CAM)); CAM plants store malic acid in their vacuoles every night and release it by day to make this process work.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Light Independent Reactions";
        }
    }

    return nullptr;
}

string _Biology::Terms::LinkedGenes(string text)
{
    string model = "llama3";
    string definition = "Genetic linkage is the tendency of DNA sequences that are close together on a chromosome to be inherited together during the meiosis phase of sexual reproduction. Two genetic markers that are physically near to each other are unlikely to be separated onto different chromatids during chromosomal crossover, and are therefore said to be more linked than markers that are far apart. In other words, the nearer two genes are on a chromosome, the lower the chance of recombination between them, and the more likely they are to be inherited together. Markers on different chromosomes are perfectly unlinked, although the penetrance of potentially deleterious alleles may be influenced by the presence of other alleles, and these other alleles may be located on other chromosomes than that on which a particular potentially deleterious allele is located. Genetic linkage is the most prominent exception to Gregor Mendel\'s Law of Independent Assortment. The first experiment to demonstrate linkage was carried out in 1905. At the time, the reason why certain traits tend to be inherited together was unknown. Later work revealed that genes are physical structures related by physical distance. The typical unit of genetic linkage is the centimorgan (cM). A distance of 1 cM between two markers means that the markers are separated to different chromosomes on average once per 100 meiotic product, thus once per 50 meioses.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Linked Genes";
        }
    }

    return nullptr;
}

string _Biology::Terms::Lipid(string text)
{
    string model = "llama3";
    string definition = "Lipids are a broad group of organic compounds which include fats, waxes, sterols, fat-soluble vitamins (such as vitamins A, D, E and K), monoglycerides, diglycerides, phospholipids, and others. The functions of lipids include storing energy, signaling, and acting as structural components of cell membranes. Lipids have applications in the cosmetic and food industries, and in nanotechnology. Lipids may be broadly defined as hydrophobic or amphiphilic small molecules; the amphiphilic nature of some lipids allows them to form structures such as vesicles, multilamellar/unilamellar liposomes, or membranes in an aqueous environment. Biological lipids originate entirely or in part from two distinct types of biochemical subunits or \"building-blocks\": ketoacyl and isoprene groups. Using this approach, lipids may be divided into eight categories: fatty acyls, glycerolipids, glycerophospholipids, sphingolipids, saccharolipids, and polyketides (derived from condensation of ketoacyl subunits); and sterol lipids and prenol lipids (derived from condensation of isoprene subunits). Although the term \"lipid\" is sometimes used as a synonym for fats, fats are a subgroup of lipids called triglycerides. Lipids also encompass molecules such as fatty acids and their derivatives (including tri-, di-, monoglycerides, and phospholipids), as well as other sterol-containing metabolites such as cholesterol. Although humans and other mammals use various biosynthetic pathways both to break down and to synthesize lipids, some essential lipids cannot be made this way and must be obtained from the diet.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lipid";
        }
    }

    return nullptr;
}

string _Biology::Terms::Lipoprotein(string text)
{
    string model = "llama3";
    string definition = "A lipoprotein is a biochemical assembly whose primary function is to transport hydrophobic lipid (also known as fat) molecules in water, as in blood plasma or other extracellular fluids. They consist of a triglyceride and cholesterol center, surrounded by a phospholipid outer shell, with the hydrophilic portions oriented outward toward the surrounding water and lipophilic portions oriented inward toward the lipid center. A special kind of protein, called apolipoprotein, is embedded in the outer shell, both stabilising the complex and giving it a functional identity that determines its role.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lipoprotein";
        }
    }

    return nullptr;
}

string _Biology::Terms::MPhase(string text)
{
    string model = "llama3";
    string definition = "The relatively brief M phase consists of nuclear division (karyokinesis) and division of cytoplasm (cytokinesis). It is a relatively short period of the cell cycle. M phase is complex and highly regulated. The sequence of events is divided into phases, corresponding to the completion of one set of activities and the start of the next.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "M Phase";
        }
    }

    return nullptr;
}

string _Biology::Terms::Macroevolution(string text)
{
    string model = "llama3";
    string definition = "Macroevolution comprises the evolutionary processes and patterns which occur at and above the species level. In contrast, microevolution is evolution occurring within the population(s) of a single species. In other words, microevolution is the scale of evolution that is limited to intraspecific (within-species) variation, while macroevolution extends to interspecific (between-species) variation. The evolution of new species (speciation) is an example of macroevolution. This is the common definition for \'macroevolution\' used by contemporary scientists. Although, the exact usage of the term has varied throughout history. Macroevolution addresses the evolution of species and higher taxonomic groups (genera, families, orders, etc) and uses evidence from phylogenetics, the fossil record, and molecular biology to answer how different taxonomic groups exhibit different species diversity and/or morphological disparity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Macroevolution";
        }
    }

    return nullptr;
}

string _Biology::Terms::Macromolecule(string text)
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

string _Biology::Terms::Macronutrient(string text)
{
    string model = "llama3";
    string definition = "Macronutrients are defined in several ways. The chemical elements humans consume in the largest quantities are carbon, hydrogen, nitrogen, oxygen, phosphorus, and sulphur, summarized as CHNOPS. The chemical compounds that humans consume in the largest quantities and provide bulk energy are classified as carbohydrates, proteins, and fats. Water must be also consumed in large quantities but does not provide caloric value. Calcium, sodium, potassium, magnesium, and chloride ions, along with phosphorus and sulfur, are listed with macronutrients because they are required in large quantities compared to micronutrients, i.e., vitamins and other minerals, the latter often described as trace or ultratrace minerals. Carbohydrates are compounds made up of types of sugar. Carbohydrates are classified according to their number of sugar units: monosaccharides (such as glucose and fructose), disaccharides (such as sucrose and lactose), oligosaccharides, and polysaccharides (such as starch, glycogen, and cellulose). Proteins are organic compounds that consist of amino acids joined by peptide bonds. Since the body cannot manufacture some of the amino acids (termed essential amino acids), the diet must supply them. Through digestion, proteins are broken down by proteases back into free amino acids. Fats consist of a glycerin molecule with three fatty acids attached. Fatty acid molecules contain a -COOH group attached to unbranched hydrocarbon chains connected by single bonds alone (saturated fatty acids) or by both double and single bonds (unsaturated fatty acids). Fats are needed for construction and maintenance of cell membranes, to maintain a stable body temperature, and to sustain the health of skin and hair. Because the body does not manufacture certain fatty acids (termed essential fatty acids), they must be obtained through one\'s diet. Ethanol is not an essential nutrient, but it does provide calories.The United States Department of Agriculture uses a figure of 6.93 kilocalories (29.0 kJ) per gram of alcohol (5.47 kcal or 22.9 kJ per ml) for calculating food energy. For distilled spirits, a standard serving in the U.S. is 44 ml (1.5 US fl oz), which at 40% ethanol (80 proof) would be 14 grams and 98 calories.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Macronutrient";
        }
    }

    return nullptr;
}

string _Biology::Terms::Macrophage(string text)
{
    string model = "llama3";
    string definition = "Macrophages are a type of white blood cell of the innate immune system that engulf and digest pathogens, such as cancer cells, microbes, cellular debris, and foreign substances, which do not have proteins that are specific to healthy body cells on their surface. This process is called phagocytosis, which acts to defend the host against infection and injury. Macrophages are found in essentially all tissues, where they patrol for potential pathogens by amoeboid movement. They take various forms (with various names) throughout the body (e.g., histiocytes, Kupffer cells, alveolar macrophages, microglia, and others), but all are part of the mononuclear phagocyte system. Besides phagocytosis, they play a critical role in nonspecific defense (innate immunity) and also help initiate specific defense mechanisms (adaptive immunity) by recruiting other immune cells such as lymphocytes. For example, they are important as antigen presenters to T cells. In humans, dysfunctional macrophages cause severe diseases such as chronic granulomatous disease that result in frequent infections. Beyond increasing inflammation and stimulating the immune system, macrophages also play an important anti-inflammatory role and can decrease immune reactions through the release of cytokines. Macrophages that encourage inflammation are called M1 macrophages, whereas those that decrease inflammation and encourage tissue repair are called M2 macrophages. This difference is reflected in their metabolism; M1 macrophages have the unique ability to metabolize arginine to the \"killer\" molecule nitric oxide, whereas M2 macrophages have the unique ability to metabolize arginine to the \"repair\" molecule ornithine. However, this dichotomy has been recently questioned as further complexity has been discovered. Human macrophages are about 21 micrometres (0.00083 in) in diameter and are produced by the differentiation of monocytes in tissues. They can be identified using flow cytometry or immunohistochemical staining by their specific expression of proteins such as CD14, CD40, CD11b, CD64, F4/80 (mice)/EMR1 (human), lysozyme M, MAC-1/MAC-3 and CD68. Macrophages were first discovered and named by Élie Metchnikoff, a Russian Empire zoologist, in 1884.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Macrophage";
        }
    }

    return nullptr;
}

string _Biology::Terms::Mammalogy(string text)
{
    string model = "llama3";
    string definition = "In zoology, mammalogy is the study of mammals - a class of vertebrates with characteristics such as homeothermic metabolism, fur, four-chambered hearts, and complex nervous systems. Mammalogy has also been known as mastology, theriology, and therology. The archive of number of mammals on earth is constantly growing, but is currently set at 6,495 different mammal species including recently extinct. There are 5,416 living mammals identified on earth and roughly 1,251 have been newly discovered since 2006. The major branches of mammalogy include natural history, taxonomy and systematics, anatomy and physiology, ethology, ecology, and management and control. The approximate salary of a mammalogist varies from $20,000 to $60,000 a year, depending on their experience. Mammalogists are typically involved in activities such as conducting research, managing personnel, and writing proposals. Mammalogy branches off into other taxonomically oriented disciplines such as primatology (study of primates), and cetology (study of cetaceans). Like other studies, mammalogy is also a part of zoology which is also a part of biology, the study of all living things.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mammalogy";
        }
    }

    return nullptr;
}

string _Biology::Terms::MarineBiology(string text)
{
    string model = "llama3";
    string definition = "Marine biology is the scientific study of the biology of marine life, organisms that inhabit the sea. Given that in biology many phyla, families and genera have some species that live in the sea and others that live on land, marine biology classifies species based on the environment rather than on taxonomy. A large proportion of all life on Earth lives in the ocean. The exact size of this \"large proportion\" is unknown, since many ocean species are still to be discovered. The ocean is a complex three-dimensional world, covering approximately 71% of the Earth\'s surface. The habitats studied in marine biology include everything from the tiny layers of surface water in which organisms and abiotic items may be trapped in surface tension between the ocean and atmosphere, to the depths of the oceanic trenches, sometimes 10,000 meters or more beneath the surface of the ocean. Specific habitats include estuaries, coral reefs, kelp forests, seagrass meadows, the surrounds of seamounts and thermal vents, tidepools, muddy, sandy and rocky bottoms, and the open ocean (pelagic) zone, where solid objects are rare and the surface of the water is the only visible boundary. The organisms studied range from microscopic phytoplankton and zooplankton to huge cetaceans (whales) 25-32 meters (82-105 feet) in length. Marine ecology is the study of how marine organisms interact with each other and the environment. Marine life is a vast resource, providing food, medicine, and raw materials, in addition to helping to support recreation and tourism all over the world. At a fundamental level, marine life helps determine the very nature of our planet. Marine organisms contribute significantly to the oxygen cycle, and are involved in the regulation of the Earth\'s climate. Shorelines are in part shaped and protected by marine life, and some marine organisms even help create new land. Many species are economically important to humans, including both finfish and shellfish. It is also becoming understood that the well-being of marine organisms and other organisms are linked in fundamental ways. The human body of knowledge regarding the relationship between life in the sea and important cycles is rapidly growing, with new discoveries being made nearly every day. These cycles include those of matter (such as the carbon cycle) and of air (such as Earth\'s respiration, and movement of energy through ecosystems including the ocean). Large areas beneath the ocean surface still remain effectively unexplored.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Marine Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::MastCell(string text)
{
    string model = "llama3";
    string definition = "A mast cell (also known as a mastocyte or a labrocyte) is a resident cell of connective tissue that contains many granules rich in histamine and heparin. Specifically, it is a type of granulocyte derived from the myeloid stem cell that is a part of the immune and neuroimmune systems. Mast cells were discovered by Friedrich von Recklinghausen and later rediscovered by Paul Ehrlich in 1877. Although best known for their role in allergy and anaphylaxis, mast cells play an important protective role as well, being intimately involved in wound healing, angiogenesis, immune tolerance, defense against pathogens, and vascular permeability in brain tumors. The mast cell is very similar in both appearance and function to the basophil, another type of white blood cell. Although mast cells were once thought to be tissue-resident basophils, it has been shown that the two cells develop from different hematopoietic lineages and thus cannot be the same cells.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mast Cell";
        }
    }

    return nullptr;
}

string _Biology::Terms::Medulla(string text)
{
    string model = "llama3";
    string definition = "The medulla oblongata or simply medulla is a long stem-like structure which makes up the lower part of the brainstem. It is anterior and partially inferior to the cerebellum. It is a cone-shaped neuronal mass responsible for autonomic (involuntary) functions, ranging from vomiting to sneezing. The medulla contains the cardiovascular center, the respiratory center, vomiting and vasomotor centers, responsible for the autonomic functions of breathing, heart rate and blood pressure as well as the sleep-wake cycle. \"Medulla\" is from Latin, `pith or marrow\'. And \"oblongata\" is from Latin, `lengthened or longish or elongated\'. During embryonic development, the medulla oblongata develops from the myelencephalon. The myelencephalon is a secondary brain vesicle which forms during the maturation of the rhombencephalon, also referred to as the hindbrain. The bulb is an archaic term for the medulla oblongata. In modern clinical usage, the word bulbar (as in bulbar palsy) is retained for terms that relate to the medulla oblongata, particularly in reference to medical conditions. The word bulbar can refer to the nerves and tracts connected to the medulla such as the corticobulbar tract, and also by association to those muscles innervated, including those of the tongue, pharynx and larynx.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Medulla";
        }
    }

    return nullptr;
}

string _Biology::Terms::Mating(string text)
{
    string model = "llama3";
    string definition = "In biology, mating is the pairing of either opposite-sex or hermaphroditic organisms for the purposes of sexual reproduction. Fertilization is the fusion of two gametes. Copulation is the union of the sex organs of two sexually reproducing animals for insemination and subsequent internal fertilization. Mating may also lead to external fertilization, as seen in amphibians, fishes and plants. For most species, mating is between two individuals of opposite sexes. However, for some hermaphroditic species, copulation is not required because the parent organism is capable of self-fertilization (autogamy); for example, banana slugs. The term mating is also applied to related processes in bacteria, archaea and viruses. Mating in these cases involves the pairing of individuals, accompanied by the pairing of their homologous chromosomes and then exchange of genomic information leading to formation of recombinant progeny (see mating systems).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mating";
        }
    }

    return nullptr;
}

string _Biology::Terms::Meiosis(string text)
{
    string model = "llama3";
    string definition = "is a special type of cell division of germ cells in sexually-reproducing organisms that produces the gametes, the sperm or egg cells. It involves two rounds of division that ultimately result in four cells, each with only one copy of each chromosome (haploid). Additionally, prior to the division, genetic material from the paternal and maternal copies of each chromosome is crossed over, creating new combinations of code on each chromosome. Later on, during fertilisation, the haploid cells produced by meiosis from a male and a female will fuse to create a zygote, a cell with two copies of each chromosome again. Errors in meiosis resulting in aneuploidy (an abnormal number of chromosomes) are the leading known cause of miscarriage and the most frequent genetic cause of developmental disabilities. In meiosis, DNA replication is followed by two rounds of cell division to produce four daughter cells, each with half the number of chromosomes as the original parent cell. The two meiotic divisions are known as meiosis I and meiosis II. Before meiosis begins, during S phase of the cell cycle, the DNA of each chromosome is replicated so that it consists of two identical sister chromatids, which remain held together through sister chromatid cohesion. This S-phase can be referred to as \"premeiotic S-phase\" or \"meiotic S-phase\". Immediately following DNA replication, meiotic cells enter a prolonged G2-like stage known as meiotic prophase. During this time, homologous chromosomes pair with each other and undergo genetic recombination, a programmed process in which DNA may be cut and then repaired, which allows them to exchange some of their genetic information. A subset of recombination events results in crossovers, which create physical links known as chiasmata (singular: chiasma, for the Greek letter Chi, ?) between the homologous chromosomes. In most organisms, these links can help direct each pair of homologous chromosomes to segregate away from each other during meiosis I, resulting in two haploid cells that have half the number of chromosomes as the parent cell. During meiosis II, the cohesion between sister chromatids is released and they segregate from one another, as during mitosis. In some cases, all four of the meiotic products form gametes such as sperm, spores or pollen. In female animals, three of the four meiotic products are typically eliminated by extrusion into polar bodies, and only one cell develops to produce an ovum. Because the number of chromosomes is halved during meiosis, gametes can fuse (i.e. fertilization) to form a diploid zygote that contains two copies of each chromosome, one from each parent. Thus, alternating cycles of meiosis and fertilization enable sexual reproduction, with successive generations maintaining the same number of chromosomes. For example, diploid human cells contain 23 pairs of chromosomes including 1 pair of sex chromosomes (46 total), half of maternal origin and half of paternal origin. Meiosis produces haploid gametes (ova or sperm) that contain one set of 23 chromosomes. When two gametes (an egg and a sperm) fuse, the resulting zygote is once again diploid, with the mother and father each contributing 23 chromosomes. This same pattern, but not the same number of chromosomes, occurs in all organisms that utilize meiosis. Meiosis occurs in all sexually-reproducing single-celled and multicellular organisms (which are all eukaryotes), including animals, plants and fungi. It is an essential process for oogenesis and spermatogenesis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Meiosis";
        }
    }

    return nullptr;
}

string _Biology::Terms::MembranePotential(string text)
{
    string model = "llama3";
    string definition = "Membrane potential (also transmembrane potential or membrane voltage) is the difference in electric potential between the interior and the exterior of a biological cell. It equals the interior potential minus the exterior potential. This is the energy (i.e. work) per charge which is required to move a (very small) positive charge at constant velocity across the cell membrane from the exterior to the interior. (If the charge is allowed to change velocity, the change of kinetic energy and production of radiation must be taken into account.) Typical values of membrane potential, normally given in units of milli volts and denoted as mV, range from -80 mV to -40 mV. For such typical negative membrane potentials, positive work is required to move a positive charge from the interior to the exterior. However, thermal kinetic energy allows ions to overcome the potential difference. For a selectively permeable membrane, this permits a net flow against the gradient. This is a kind of osmosis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Membrane Potential";
        }
    }

    return nullptr;
}

string _Biology::Terms::MessengerRNA(string text)
{
    string model = "llama3";
    string definition = "In molecular biology, messenger ribonucleic acid (mRNA) is a single-stranded molecule of RNA that corresponds to the genetic sequence of a gene, and is read by a ribosome in the process of synthesizing a protein. mRNA is created during the process of transcription, where an enzyme (RNA polymerase) converts the gene into primary transcript mRNA (also known as pre-mRNA). This pre-mRNA usually still contains introns, regions that will not go on to code for the final amino acid sequence. These are removed in the process of RNA splicing, leaving only exons, regions that will encode the protein. This exon sequence constitutes mature mRNA. Mature mRNA is then read by the ribosome, and the ribosome creates the protein utilizing amino acids carried by transfer RNA (tRNA). This process is known as translation. All of these processes form part of the central dogma of molecular biology, which describes the flow of genetic information in a biological system. As in DNA, genetic information in mRNA is contained in the sequence of nucleotides, which are arranged into codons consisting of three ribonucleotides each. Each codon codes for a specific amino acid, except the stop codons, which terminate protein synthesis. The translation of codons into amino acids requires two other types of RNA: transfer RNA, which recognizes the codon and provides the corresponding amino acid, and ribosomal RNA (rRNA), the central component of the ribosome\'s protein-manufacturing machinery. The concept of mRNA was developed by Sydney Brenner and Francis Crick in 1960 during a conversation with François Jacob. In 1961, mRNA was identified and described independently by one team consisting of Brenner, Jacob, and Matthew Meselson, and another team led by James Watson. While analyzing the data in preparation for publication, Jacob and Jacques Monod coined the name \"messenger RNA\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Messenger R N A";
        }
    }

    return nullptr;
}

string _Biology::Terms::Metabolism(string text)
{
    string model = "llama3";
    string definition = "is the set of life-sustaining chemical reactions in organisms. The three main functions of metabolism are: the conversion of the energy in food to energy available to run cellular processes; the conversion of food to building blocks of proteins, lipids, nucleic acids, and some carbohydrates; and the elimination of metabolic wastes. These enzyme-catalyzed reactions allow organisms to grow and reproduce, maintain their structures, and respond to their environments. The word metabolism can also refer to the sum of all chemical reactions that occur in living organisms, including digestion and the transportation of substances into and between different cells, in which case the above described set of reactions within the cells is called intermediary (or intermediate) metabolism. Metabolic reactions may be categorized as catabolic-the breaking down of compounds (for example, of glucose to pyruvate by cellular respiration); or anabolic-the building up (synthesis) of compounds (such as proteins, carbohydrates, lipids, and nucleic acids). Usually, catabolism releases energy, and anabolism consumes energy. The chemical reactions of metabolism are organized into metabolic pathways, in which one chemical is transformed through a series of steps into another chemical, each step being facilitated by a specific enzyme. Enzymes are crucial to metabolism because they allow organisms to drive desirable reactions that require energy and will not occur by themselves, by coupling them to spontaneous reactions that release energy. Enzymes act as catalysts-they allow a reaction to proceed more rapidly-and they also allow the regulation of the rate of a metabolic reaction, for example in response to changes in the cell\'s environment or to signals from other cells. The metabolic system of a particular organism determines which substances it will find nutritious and which poisonous. For example, some prokaryotes use hydrogen sulfide as a nutrient, yet this gas is poisonous to animals. The basal metabolic rate of an organism is the measure of the amount of energy consumed by all of these chemical reactions. A striking feature of metabolism is the similarity of the basic metabolic pathways among vastly different species. For example, the set of carboxylic acids that are best known as the intermediates in the citric acid cycle are present in all known organisms, being found in species as diverse as the unicellular bacterium Escherichia coli and huge multicellular organisms like elephants. These similarities in metabolic pathways are likely due to their early appearance in evolutionary history, and their retention is likely due to their efficacy. In various diseases, such as type II diabetes, metabolic syndrome, and cancer, normal metabolism is disrupted. The metabolism of cancer cells is also different from the metabolism of normal cells, and these differences can be used to find targets for therapeutic intervention in cancer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metabolism";
        }
    }

    return nullptr;
}

string _Biology::Terms::Metamorphosis(string text)
{
    string model = "llama3";
    string definition = "Metamorphosis is a biological process by which an animal physically develops including birth transformation or hatching, involving a conspicuous and relatively abrupt change in the animal\'s body structure through cell growth and differentiation. Some insects, jellyfish, fish, amphibians, mollusks, crustaceans, cnidarians, echinoderms, and tunicates undergo metamorphosis, which is often accompanied by a change of nutrition source or behavior. Animals can be divided into species that undergo complete metamorphosis (\"holometaboly\"), incomplete metamorphosis (\"hemimetaboly\"), or no metamorphosis (\"ametaboly\"). Generally organisms with a larval stage undergo metamorphosis, and during metamorphosis the organism loses larval characteristics. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metamorphosis";
        }
    }

    return nullptr;
}

string _Biology::Terms::Metaphase(string text)
{
    string model = "llama3";
    string definition = "a stage of mitosis in the eukaryotic cell cycle in which chromosomes are at their second-most condensed and coiled stage (they are at their most condensed in anaphase). These chromosomes, carrying genetic information, align in the equator of the cell between the spindle poles at the metaphase plate, before being separated into each of the two daughter nuclei. This alignment marks the beginning of metaphase. Metaphase accounts for approximately 4% of the cell cycle\'s duration. In metaphase, microtubules from both duplicated centrosomes on opposite poles of the cell have completed attachment to kinetochores on condensed chromosomes. The centromeres of the chromosomes convene themselves on the metaphase plate, an imaginary line that is equidistant from the two spindle poles. This even alignment is due to the counterbalance of the pulling powers generated by the opposing kinetochore microtubules, analogous to a tug-of-war between two people of equal strength, ending with the destruction of B cyclin. In order to prevent deleterious nondisjunction events, a key cell cycle checkpoint, the spindle checkpoint, verifies this evenly balanced alignment and ensures that every kinetochore is properly attached to a bundle of microtubules and is under balanced bipolar tension. Sister chromatids require active separase to hydrolyze the cohesin that bind them together prior to progression to anaphase. Any unattached or improperly attached kinetochores generate signals that prevent the activation of the anaphase promoting complex (cyclosome or APC/C), a ubiquitin ligase which targets securin and cyclin B for degradation via the proteosome. As long as securin and cyclin B remain active, separase remains inactive, preventing premature progression to anaphase.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metaphase";
        }
    }

    return nullptr;
}

string _Biology::Terms::Microbiology(string text)
{
    string model = "llama3";
    string definition = "is the scientific study of microorganisms, those being of unicellular (single-celled), multicellular (consisting of complex cells), or acellular (lacking cells). Microbiology encompasses numerous sub-disciplines including virology, bacteriology, protistology, mycology, immunology, and parasitology. Eukaryotic microorganisms possess membrane-bound organelles and include fungi and protists, whereas prokaryotic organisms-all of which are microorganisms-are conventionally classified as lacking membrane-bound organelles and include Bacteria and Archaea. Microbiologists traditionally relied on culture, staining, and microscopy for the isolation and identification of microorganisms. However, less than 1% of the microorganisms present in common environments can be cultured in isolation using current means. With the emergence of biotechnology, Microbiologists currently rely on molecular biology tools such as DNA sequence-based identification, for example, the 16S rRNA gene sequence used for bacterial identification. Viruses have been variably classified as organisms because they have been considered either very simple microorganisms or very complex molecules. Prions, never considered microorganisms, have been investigated by virologists; however, as the clinical effects traced to them were originally presumed due to chronic viral infections, virologists took a search-discovering \"infectious proteins\". The existence of microorganisms was predicted many centuries before they were first observed, for example by the Jains in India and by Marcus Terentius Varro in ancient Rome. The first recorded microscope observation was of the fruiting bodies of moulds, by Robert Hooke in 1666, but the Jesuit priest Athanasius Kircher was likely the first to see microbes, which he mentioned observing in milk and putrid material in 1658. Antonie van Leeuwenhoek is considered a father of microbiology as he observed and experimented with microscopic organisms in the 1670s, using simple microscopes of his design. Scientific microbiology developed in the 19th century through the work of Louis Pasteur and in medical microbiology Robert Koch.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Microbiology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Microevolution(string text)
{
    string model = "llama3";
    string definition = "Microevolution is the change in allele frequencies that occurs over time within a population. This change is due to four different processes: mutation, selection (natural and artificial), gene flow and genetic drift. This change happens over a relatively short (in evolutionary terms) amount of time compared to the changes termed macroevolution. Population genetics is the branch of biology that provides the mathematical structure for the study of the process of microevolution. Ecological genetics concerns itself with observing microevolution in the wild. Typically, observable instances of evolution are examples of microevolution; for example, bacterial strains that have antibiotic resistance. Microevolution provides the raw material for macroevolution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Microevolution";
        }
    }

    return nullptr;
}

string _Biology::Terms::Mitochondrion(string text)
{
    string model = "llama3";
    string definition = "A mitochondrion is an organelle found in the cells of most eukaryotes, such as animals, plants and fungi. Mitochondria have a double membrane structure and use aerobic respiration to generate adenosine triphosphate (ATP), which is used throughout the cell as a source of chemical energy. They were discovered by Albert von Kölliker in 1857 in the voluntary muscles of insects. Meaning a thread-like granule, the term mitochondrion was coined by Carl Benda in 1898. The mitochondrion is popularly nicknamed the \"powerhouse of the cell\", a phrase popularized by Philip Siekevitz in a 1957 Scientific American article of the same name. Some cells in some multicellular organisms lack mitochondria (for example, mature mammalian red blood cells). The multicellular animal Henneguya salminicola is known to have retained mitochondrion-related organelles despite a complete loss of their mitochondrial genome. A large number of unicellular organisms, such as microsporidia, parabasalids and diplomonads, have reduced or transformed their mitochondria into other structures, e.g. hydrogenosomes and mitosomes. The oxymonads Monocercomonoides, Streblomastix, and Blattamonas have completely lost their mitochondria. Mitochondria are commonly between 0.75 and 3 µm2 in cross section, but vary considerably in size and structure. Unless specifically stained, they are not visible. In addition to supplying cellular energy, mitochondria are involved in other tasks, such as signaling, cellular differentiation, and cell death, as well as maintaining control of the cell cycle and cell growth. Mitochondrial biogenesis is in turn temporally coordinated with these cellular processes. Mitochondria have been implicated in several human disorders and conditions, such as mitochondrial diseases, cardiac dysfunction, heart failure and autism. The number of mitochondria in a cell can vary widely by organism, tissue, and cell type. A mature red blood cell has no mitochondria, whereas a liver cell can have more than 2000. The mitochondrion is composed of compartments that carry out specialized functions. These compartments or regions include the outer membrane, intermembrane space, inner membrane, cristae, and matrix. Although most of a eukaryotic cell\'s DNA is contained in the cell nucleus, the mitochondrion has its own genome (\"mitogenome\") that is substantially similar to bacterial genomes. This finding has led to general acceptance of the endosymbiotic hypothesis - that free-living prokaryotic ancestors of modern mitochondria permanently fused with eukaryotic cells in the distant past, evolving such that modern animals, plants, fungi, and other eukaryotes are able to respire to generate cellular energy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mitochondrion";
        }
    }

    return nullptr;
}

string _Biology::Terms::Mitosis(string text)
{
    string model = "llama3";
    string definition = "is a part of the cell cycle in which replicated chromosomes are separated into two new nuclei. Cell division by mitosis is an equational division which gives rise to genetically identical cells in which the total number of chromosomes is maintained. Mitosis is preceded by the S phase of interphase (during which DNA replication occurs) and is followed by telophase and cytokinesis, which divide the cytoplasm, organelles, and cell membrane of one cell into two new cells containing roughly equal shares of these cellular components. The different stages of mitosis altogether define the mitotic phase (M phase) of a cell cycle-the division of the mother cell into two daughter cells genetically identical to each other. The process of mitosis is divided into stages corresponding to the completion of one set of activities and the start of the next. These stages are preprophase (specific to plant cells), prophase, prometaphase, metaphase, anaphase, and telophase. During mitosis, the chromosomes, which have already duplicated during interphase, condense and attach to spindle fibers that pull one copy of each chromosome to opposite sides of the cell. The result is two genetically identical daughter nuclei. The rest of the cell may then continue to divide by cytokinesis to produce two daughter cells. The different phases of mitosis can be visualized in real time, using live cell imaging. An error in mitosis can result in the production of three or more daughter cells instead of the normal two. This is called tripolar mitosis and multipolar mitosis, respectively. These errors can be the cause of non-viable embryos that fail to implant. Other errors during mitosis can induce mitotic catastrophe, apoptosis (programmed cell death) or cause mutations. Certain types of cancers can arise from such mutations. Mitosis occurs only in eukaryotic cells and varies between organisms. For example, animal cells generally undergo an open mitosis, where the nuclear envelope breaks down before the chromosomes separate, whereas fungal cells generally undergo a closed mitosis, where chromosomes divide within an intact cell nucleus. Most animal cells undergo a shape change, known as mitotic cell rounding, to adopt a near spherical morphology at the start of mitosis. Most human cells are produced by mitotic cell division. Important exceptions include the gametes - sperm and egg cells - which are produced by meiosis. Prokaryotes, bacteria and archaea which lack a true nucleus, divide by a different process called binary fission.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mitosis";
        }
    }

    return nullptr;
}

string _Biology::Terms::Molecule(string text)
{
    string model = "llama3";
    string definition = "A molecule is a group of two or more atoms that are held together by attractive forces known as chemical bonds; depending on context, the term may or may not include ions that satisfy this criterion. In quantum physics, organic chemistry, and biochemistry, the distinction from ions is dropped and molecule is often used when referring to polyatomic ions. A molecule may be homonuclear, that is, it consists of atoms of one chemical element, e.g. two atoms in the oxygen molecule (O2); or it may be heteronuclear, a chemical compound composed of more than one element, e.g. water (two hydrogen atoms and one oxygen atom; H2O). In the kinetic theory of gases, the term molecule is often used for any gaseous particle regardless of its composition. This relaxes the requirement that a molecule contains two or more atoms, since the noble gases are individual atoms. Atoms and complexes connected by non-covalent interactions, such as hydrogen bonds or ionic bonds, are typically not considered single molecules. Concepts similar to molecules have been discussed since ancient times, but modern investigation into the nature of molecules and their bonds began in the 17th century. Refined over time by scientists such as Robert Boyle, Amedeo Avogadro, Jean Perrin, and Linus Pauling, the study of molecules is today known as molecular physics or molecular chemistry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::MolecularBiology(string text)
{
    string model = "llama3";
    string definition = "Molecular biology is a branch of biology that seeks to understand the molecular basis of biological activity in and between cells, including biomolecular synthesis, modification, mechanisms, and interactions. Though cells and other microscopic structures had been observed in living organisms as early as the 18th century, a detailed understanding of the mechanisms and interactions governing their behavior did not emerge until the 20th century, when technologies used in physics and chemistry had advanced sufficiently to permit their application in the biological sciences. The term \'molecular biology\' was first used in 1945 by the English physicist William Astbury, who described it as an approach focused on discerning the underpinnings of biological phenomena-i.e. uncovering the physical and chemical structures and properties of biological molecules, as well as their interactions with other molecules and how these interactions explain observations of so-called classical biology, which instead studies biological processes at larger scales and higher levels of organization. In 1953, Francis Crick, James Watson, Rosalind Franklin, and their colleagues at the Medical Research Council Unit, Cavendish Laboratory, were the first to describe the double helix model for the chemical structure of deoxyribonucleic acid (DNA), which is often considered a landmark event for the nascent field because it provided a physico-chemical basis by which to understand the previously nebulous idea of nucleic acids as the primary substance of biological inheritance. They proposed this structure based on previous research done by Franklin, which was conveyed to them by Maurice Wilkins and Max Perutz. Their work led to the discovery of DNA in other microorganisms, plants, and animals. The field of molecular biology includes techniques which enable scientists to learn about molecular processes. These techniques are used to efficiently target new drugs, diagnose disease, and better understand cell physiology. Some clinical research and medical therapies arising from molecular biology are covered under gene therapy, whereas the use of molecular biology or molecular cell biology in medicine is now referred to as molecular medicine.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Molecular Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::MolecularSwitch(string text)
{
    string model = "llama3";
    string definition = "A molecular switch is a molecule that can be reversibly shifted between two or more stable states. The molecules may be shifted between the states in response to environmental stimuli, such as changes in pH, light, temperature, an electric current, microenvironment, or in the presence of ions and other ligands. In some cases, a combination of stimuli is required. The oldest forms of synthetic molecular switches are pH indicators, which display distinct colors as a function of pH. Currently synthetic molecular switches are of interest in the field of nanotechnology for application in molecular computers or responsive drug delivery systems. Molecular switches are also important in biology because many biological functions are based on it, for instance allosteric regulation and vision. They are also one of the simplest examples of molecular machines.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Molecular Switch";
        }
    }

    return nullptr;
}

string _Biology::Terms::Monomer(string text)
{
    string model = "llama3";
    string definition = "A monomer is a molecule that can react together with other monomer molecules to form a larger polymer chain or three-dimensional network in a process called polymerization.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Monomer";
        }
    }

    return nullptr;
}

string _Biology::Terms::Morphology(string text)
{
    string model = "llama3";
    string definition = "Morphology in biology is the study of the form and structure of organisms and their specific structural features. This includes aspects of the outward appearance (shape, structure, color, pattern, size), i.e. external morphology (or eidonomy), as well as the form and structure of internal parts like bones and organs, i.e. internal morphology (or anatomy). This is in contrast to physiology, which deals primarily with function. Morphology is a branch of life science dealing with the study of the gross structure of an organism or taxon and its component parts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Morphology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Motile(string text)
{
    string model = "llama3";
    string definition = "Motility is the ability of an organism to move independently using metabolic energy. This biological concept encompasses movement at various levels, from whole organisms to cells and subcellular components. Motility is observed in animals, microorganisms, and even some plant structures, playing crucial roles in activities such as foraging, reproduction, and cellular functions. It is genetically determined but can be influenced by environmental factors. In multicellular organisms, motility is facilitated by systems like the nervous and musculoskeletal systems, while at the cellular level, it involves mechanisms such as amoeboid movement and flagellar propulsion. These cellular movements can be directed by external stimuli, a phenomenon known as taxis. Examples include chemotaxis (movement along chemical gradients) and phototaxis (movement in response to light). Motility also includes physiological processes like gastrointestinal movements and peristalsis. Understanding motility is important in biology, medicine, and ecology, as it impacts processes ranging from bacterial behavior to ecosystem dynamics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Motile";
        }
    }

    return nullptr;
}

string _Biology::Terms::MotorNeuron(string text)
{
    string model = "llama3";
    string definition = "A motor neuron (or motoneuron or efferent neuron) is a neuron whose cell body is located in the motor cortex, brainstem or the spinal cord, and whose axon (fiber) projects to the spinal cord or outside of the spinal cord to directly or indirectly control effector organs, mainly muscles and glands. There are two types of motor neuron - upper motor neurons and lower motor neurons. Axons from upper motor neurons synapse onto interneurons in the spinal cord and occasionally directly onto lower motor neurons. The axons from the lower motor neurons are efferent nerve fibers that carry signals from the spinal cord to the effectors. Types of lower motor neurons are alpha motor neurons, beta motor neurons, and gamma motor neurons. A single motor neuron may innervate many muscle fibres and a muscle fibre can undergo many action potentials in the time taken for a single muscle twitch. Innervation takes place at a neuromuscular junction and twitches can become superimposed as a result of summation or a tetanic contraction. Individual twitches can become indistinguishable, and tension rises smoothly eventually reaching a plateau. Although the word \"motor neuron\" suggests that there is a single kind of neuron that controls movement, this is not the case. Indeed, upper and lower motor neurons-which differ greatly in their origins, synapse locations, routes, neurotransmitters, and lesion characteristics-are included in the same classification as \"motor neurons.\" Essentially, motor neurons, also known as motoneurons, are made up of a variety of intricate, finely tuned circuits found throughout the body that innervate effector muscles and glands to enable both voluntary and involuntary motions. Two motor neurons come together to form a two-neuron circuit. While lower motor neurons start in the spinal cord and go to innervate muscles and glands all throughout the body, upper motor neurons originate in the cerebral cortex and travel to the brain stem or spinal cord. It is essential to comprehend the distinctions between upper and lower motor neurons as well as the routes they follow in order to effectively detect these neuronal injuries and localise the lesions. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Motor Neuron";
        }
    }

    return nullptr;
}

string _Biology::Terms::MucousMembrane(string text)
{
    string model = "llama3";
    string definition = "A mucous membrane or mucosa is a membrane that lines various cavities in the body of an organism and covers the surface of internal organs. It consists of one or more layers of epithelial cells overlying a layer of loose connective tissue. It is mostly of endodermal origin and is continuous with the skin at body openings such as the eyes, eyelids, ears, inside the nose, inside the mouth, lips, the genital areas, the urethral opening and the anus. Some mucous membranes secrete mucus, a thick protective fluid. The function of the membrane is to stop pathogens and dirt from entering the body and to prevent bodily tissues from becoming dehydrated.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mucous Membrane";
        }
    }

    return nullptr;
}

string _Biology::Terms::Multicellular(string text)
{
    string model = "llama3";
    string definition = "A multicellular organism is an organism that consists of more than one cell, unlike unicellular organisms. All species of animals, land plants and most fungi are multicellular, as are many algae, whereas a few organisms are partially uni- and partially multicellular, like slime molds and social amoebae such as the genus Dictyostelium. Multicellular organisms arise in various ways, for example by cell division or by aggregation of many single cells. Colonial organisms are the result of many identical individuals joining together to form a colony. However, it can often be hard to separate colonial protists from true multicellular organisms, because the two concepts are not distinct; colonial protists have been dubbed \"pluricellular\" rather than \"multicellular\". There are also macroscopic organisms that are multinucleate though technically unicellular, such as the Xenophyophorea that can reach 20 cm.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Multicellular";
        }
    }

    return nullptr;
}

string _Biology::Terms::Mycology(string text)
{
    string model = "llama3";
    string definition = "Mycology is the branch of biology concerned with the study of fungi, including their taxonomy, genetics, biochemical properties, and use by humans. Fungi can be a source of tinder, food, traditional medicine, as well as entheogens, poison, and infection. Yeasts are among the most heavily utilized members of the Kingdom Fungi, particularly in food manufacturing.  Mycology branches into the field of phytopathology, the study of plant diseases. The two disciplines are closely related, because the vast majority of plant pathogens are fungi. A biologist specializing in mycology is called a mycologist.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mycology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Myofibril(string text)
{
    string model = "llama3";
    string definition = "A myofibril (also known as a muscle fibril or sarcostyle) is a basic rod-like organelle of a muscle cell. Skeletal muscles are composed of long, tubular cells known as muscle fibers, and these cells contain many chains of myofibrils. Each myofibril has a diameter of 1-2 micrometres. They are created during embryonic development in a process known as myogenesis. Myofibrils are composed of long proteins including actin, myosin, and titin, and other proteins that hold them together. These proteins are organized into thick, thin, and elastic myofilaments, which repeat along the length of the myofibril in sections or units of contraction called sarcomeres. Muscles contract by sliding the thick myosin, and thin actin myofilaments along each other.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Myofibril";
        }
    }

    return nullptr;
}

string _Biology::Terms::Myosin(string text)
{
    string model = "llama3";
    string definition = "Myosins are a family of motor proteins best known for their roles in muscle contraction and in a wide range of other motility processes in eukaryotes. They are ATP-dependent and responsible for actin-based motility. The first myosin (M2) to be discovered was in 1864 by Wilhelm Kühne. Kühne had extracted a viscous protein from skeletal muscle that he held responsible for keeping the tension state in muscle. He called this protein myosin. The term has been extended to include a group of similar ATPases found in the cells of both striated muscle tissue and smooth muscle tissue.  Following the discovery in 1973 of enzymes with myosin-like function in Acanthamoeba castellanii, a global range of divergent myosin genes have been discovered throughout the realm of eukaryotes.Although myosin was originally thought to be restricted to muscle cells (hence myo-(s) + -in), there is no single \"myosin\"; rather it is a very large superfamily of genes whose protein products share the basic properties of actin binding, ATP hydrolysis (ATPase enzyme activity), and force transduction. Virtually all eukaryotic cells contain myosin isoforms. Some isoforms have specialized functions in certain cell types (such as muscle), while other isoforms are ubiquitous. The structure and function of myosin is globally conserved across species, to the extent that rabbit muscle myosin II will bind to actin from an amoeba.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Myosin";
        }
    }

    return nullptr;
}

string _Biology::Terms::NaturalSelection(string text)
{
    string model = "llama3";
    string definition = "Natural selection is the differential survival and reproduction of individuals due to differences in phenotype. It is a key mechanism of evolution, the change in the heritable traits characteristic of a population over generations. Charles Darwin popularised the term \"natural selection\", contrasting it with artificial selection, which is intentional, whereas natural selection is not. Variation of traits, both genotypic and phenotypic, exists within all populations of organisms. However, some traits are more likely to facilitate survival and reproductive success. Thus, these traits are passed onto the next generation. These traits can also become more common within a population if the environment that favours these traits remains fixed. If new traits become more favored due to changes in a specific niche, microevolution occurs. If new traits become more favored due to changes in the broader environment, macroevolution occurs. Sometimes, new species can arise especially if these new traits are radically different from the traits possessed by their predecessors. The likelihood of these traits being \'selected\' and passed down are determined by many factors. Some are likely to be passed down because they adapt well to their environments. Others are passed down because these traits are actively preferred by mating partners, which is known as sexual selection. Female bodies also prefer traits that confer the lowest cost to their reproductive health, which is known as fecundity selection. Natural selection is a cornerstone of modern biology. The concept, published by Darwin and Alfred Russel Wallace in a joint presentation of papers in 1858, was elaborated in Darwin\'s influential 1859 book On the Origin of Species by Means of Natural Selection, or the Preservation of Favoured Races in the Struggle for Life. He described natural selection as analogous to artificial selection, a process by which animals and plants with traits considered desirable by human breeders are systematically favoured for reproduction. The concept of natural selection originally developed in the absence of a valid theory of heredity; at the time of Darwin\'s writing, science had yet to develop modern theories of genetics. The union of traditional Darwinian evolution with subsequent discoveries in classical genetics formed the modern synthesis of the mid-20th century. The addition of molecular genetics has led to evolutionary developmental biology, which explains evolution at the molecular level. While genotypes can slowly change by random genetic drift, natural selection remains the primary explanation for adaptive evolution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Natural Selection";
        }
    }

    return nullptr;
}

string _Biology::Terms::Neurobiology(string text)
{
    string model = "llama3";
    string definition = "Neuroscience is the scientific study of the nervous system (the brain, spinal cord, and peripheral nervous system), its functions, and its disorders. It is a multidisciplinary science that combines physiology, anatomy, molecular biology, developmental biology, cytology, psychology, physics, computer science, chemistry, medicine, statistics, and mathematical modeling to understand the fundamental and emergent properties of neurons, glia and neural circuits. The understanding of the biological basis of learning, memory, behavior, perception, and consciousness has been described by Eric Kandel as the \"epic challenge\" of the biological sciences. The scope of neuroscience has broadened over time to include different approaches used to study the nervous system at different scales. The techniques used by neuroscientists have expanded enormously, from molecular and cellular studies of individual neurons to imaging of sensory, motor and cognitive tasks in the brain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neurobiology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Neuron(string text)
{
    string model = "llama3";
    string definition = "A neuron, neurone, or nerve cell is an excitable cell that fires electric signals called action potentials across a neural network in the nervous system. They are located in the brain and spinal cord and help to receive and conduct impulses. Neurons communicate with other cells via synapses, which are specialized connections that commonly use minute amounts of chemical neurotransmitters to pass the electric signal from the presynaptic neuron to the target cell through the synaptic gap. Neurons are the main components of nervous tissue in all animals except sponges and placozoans. Plants and fungi do not have nerve cells. Molecular evidence suggests that the ability to generate electric signals first appeared in evolution some 700 to 800 million years ago, during the Tonian period. Predecessors of neurons were the peptidergic secretory cells. They eventually gained new gene modules which enabled cells to create post-synaptic scaffolds and ion channels that generate fast electrical signals. The ability to generate electric signals was a key innovation in the evolution of the nervous system. Neurons are typically classified into three types based on their function. Sensory neurons respond to stimuli such as touch, sound, or light that affect the cells of the sensory organs, and they send signals to the spinal cord or brain. Motor neurons receive signals from the brain and spinal cord to control everything from muscle contractions to glandular output. Interneurons connect neurons to other neurons within the same region of the brain or spinal cord. When multiple neurons are functionally connected together, they form what is called a neural circuit. A neuron contains all the structures of other cells such as a nucleus, mitochondria, and Golgi bodies but has additional unique structures such as an axon, and dendrites. The soma is a compact structure, and the axon and dendrites are filaments extruding from the soma. Dendrites typically branch profusely and extend a few hundred micrometers from the soma. The axon leaves the soma at a swelling called the axon hillock and travels for as far as 1 meter in humans or more in other species. It branches but usually maintains a constant diameter. At the farthest tip of the axon\'s branches are axon terminals, where the neuron can transmit a signal across the synapse to another cell. Neurons may lack dendrites or have no axons. The term neurite is used to describe either a dendrite or an axon, particularly when the cell is undifferentiated. Most neurons receive signals via the dendrites and soma and send out signals down the axon. At the majority of synapses, signals cross from the axon of one neuron to the dendrite of another. However, synapses can connect an axon to another axon or a dendrite to another dendrite. The signaling process is partly electrical and partly chemical. Neurons are electrically excitable, due to the maintenance of voltage gradients across their membranes. If the voltage changes by a large enough amount over a short interval, the neuron generates an all-or-nothing electrochemical pulse called an action potential. This potential travels rapidly along the axon and activates synaptic connections as it reaches them. Synaptic signals may be excitatory or inhibitory, increasing or reducing the net voltage that reaches the soma. In most cases, neurons are generated by neural stem cells during brain development and childhood. Neurogenesis largely ceases during adulthood in most areas of the brain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neuron";
        }
    }

    return nullptr;
}

string _Biology::Terms::Neurotransmitter(string text)
{
    string model = "llama3";
    string definition = "A neurotransmitter is a signaling molecule secreted by a neuron to affect another cell across a synapse. The cell receiving the signal, or target cell, may be another neuron, but could also be a gland or muscle cell. Neurotransmitters are released from synaptic vesicles into the synaptic cleft where they are able to interact with neurotransmitter receptors on the target cell. Some neurotransmitters are also stored in large dense core vesicles. The neurotransmitter\'s effect on the target cell is determined by the receptor it binds to. Many neurotransmitters are synthesized from simple and plentiful precursors such as amino acids, which are readily available and often require a small number of biosynthetic steps for conversion. Neurotransmitters are essential to the function of complex neural systems. The exact number of unique neurotransmitters in humans is unknown, but more than 100 have been identified. Common neurotransmitters include glutamate, GABA, acetylcholine, glycine, dopamine and norepinephrine.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neurotransmitter";
        }
    }

    return nullptr;
}

string _Biology::Terms::EcologicalNiche(string text)
{
    string model = "llama3";
    string definition = "In ecology, a niche is the match of a species to a specific environmental condition. It describes how an organism or population responds to the distribution of resources and competitors (for example, by growing when resources are abundant, and when predators, parasites and pathogens are scarce) and how it in turn alters those same factors (for example, limiting access to resources by other organisms, acting as a food source for predators and a consumer of prey). \"The type and number of variables comprising the dimensions of an environmental niche vary from one species to another  the relative importance of particular environmental variables for a species may vary according to the geographic and biotic contexts\". A Grinnellian niche is determined by the habitat in which a species lives and its accompanying behavioral adaptations. An Eltonian niche emphasizes that a species not only grows in and responds to an environment, it may also change the environment and its behavior as it grows. The Hutchinsonian niche uses mathematics and statistics to try to explain how species coexist within a given community. The concept of ecological niche is central to ecological biogeography, which focuses on spatial patterns of ecological communities. \"Species distributions and their dynamics over time result from properties of the species, environmental variation..., and interactions between the two-in particular the abilities of some species, especially our own, to modify their environments and alter the range dynamics of many other species.\" Alteration of an ecological niche by its inhabitants is the topic of niche construction. The majority of species exist in a standard ecological niche, sharing behaviors, adaptations, and functional traits similar to the other closely related species within the same broad taxonomic class, but there are exceptions. A premier example of a non-standard niche filling species is the flightless, ground-dwelling kiwi bird of New Zealand, which feeds on worms and other ground creatures, and lives its life in a mammal-like niche. Island biogeography can help explain island species and associated unfilled niches.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ecological Niche";
        }
    }

    return nullptr;
}

string _Biology::Terms::NitrogenFixation(string text)
{
    string model = "llama3";
    string definition = "Nitrogen fixation is a chemical process by which molecular dinitrogen (N2) converted into ammonia (NH3). It occurs both biologically and abiologically in chemical industries. Biological nitrogen fixation or diazotrophy is catalyzed by enzymes called nitrogenases. These enzyme complexes are encoded by the Nif genes (or Nif homologs) and contain iron, often with a second metal (usually molybdenum, but sometimes vanadium). Some nitrogen-fixing bacteria have symbiotic relationships with plants, especially legumes, mosses and aquatic ferns such as Azolla. Looser non-symbiotic relationships between diazotrophs and plants are often referred to as associative, as seen in nitrogen fixation on rice roots. Nitrogen fixation occurs between some termites and fungi. It occurs naturally in the air by means of NOx production by lightning. Nitrogen fixation is essential to life on Earth because fixed inorganic nitrogen compounds are required for the biosynthesis of all nitrogen-containing organic compounds such as amino acids, polypeptides and proteins, nucleoside triphosphates and nucleic acids. As part of the nitrogen cycle, it is essential for soil fertility and the growth of terrestrial and semiaquatic vegetations, upon which all consumers of those ecosystems rely for biomass. Nitrogen fixation is thus crucial to the food security of human societies in sustaining agricultural yields (especially staple crops), livestock feeds (forage or fodder) and fishery (both wild and farmed) harvests. It is also indirectly relevant to the manufacture of all nitrogenous industrial products, which include fertilizers, pharmaceuticals, textiles, dyes and explosives.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nitrogen Fixation";
        }
    }

    return nullptr;
}

string _Biology::Terms::NucleicAcid(string text)
{
    string model = "llama3";
    string definition = "Nucleic acids are large biomolecules that are crucial in all cells and viruses. They are composed of nucleotides, which are the monomer components: a 5-carbon sugar, a phosphate group and a nitrogenous base. The two main classes of nucleic acids are deoxyribonucleic acid (DNA) and ribonucleic acid (RNA). If the sugar is ribose, the polymer is RNA; if the sugar is deoxyribose, a variant of ribose, the polymer is DNA. Nucleic acids are chemical compounds that are found in nature. They carry information in cells and make up genetic material. These acids are very common in all living things, where they create, encode, and store information in every living cell of every life-form on Earth. In turn, they send and express that information inside and outside the cell nucleus. From the inner workings of the cell to the young of a living thing, they contain and provide information via the nucleic acid sequence. This gives the RNA and DNA their unmistakable \'ladder-step\' order of nucleotides within their molecules. Both play a crucial role in directing protein synthesis. Strings of nucleotides are bonded to form spiraling backbones and assembled into chains of bases or base-pairs selected from the five primary, or canonical, nucleobases. RNA usually forms a chain of single bases, whereas DNA forms a chain of base pairs. The bases found in RNA and DNA are: adenine, cytosine, guanine, thymine, and uracil. Thymine occurs only in DNA and uracil only in RNA. Using amino acids and protein synthesis, the specific sequence in DNA of these nucleobase-pairs helps to keep and send coded instructions as genes. In RNA, base-pair sequencing helps to make new proteins that determine most chemical processes of all life forms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nucleic Acid";
        }
    }

    return nullptr;
}

string _Biology::Terms::NucleicAcidSequence(string text)
{
    string model = "llama3";
    string definition = "A nucleic acid sequence is a succession of bases within the nucleotides forming alleles within a DNA (using GACT) or RNA (GACU) molecule. This succession is denoted by a series of a set of five different letters that indicate the order of the nucleotides. By convention, sequences are usually presented from the 5\' end to the 3\' end. For DNA, with its double helix, there are two possible directions for the notated sequence; of these two, the sense strand is used. Because nucleic acids are normally linear (unbranched) polymers, specifying the sequence is equivalent to defining the covalent structure of the entire molecule. For this reason, the nucleic acid sequence is also termed the primary structure. The sequence represents genetic information. Biological deoxyribonucleic acid represents the information which directs the functions of an organism. Nucleic acids also have a secondary structure and tertiary structure. Primary structure is sometimes mistakenly referred to as \"primary sequence\". However there is no parallel concept of secondary or tertiary sequence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nucleic Acid Sequence";
        }
    }

    return nullptr;
}

string _Biology::Terms::Nucleobase(string text)
{
    string model = "llama3";
    string definition = "Nucleotide bases (also nucleobases, nitrogenous bases) are nitrogen-containing biological compounds that form nucleosides, which, in turn, are components of nucleotides, with all of these monomers constituting the basic building blocks of nucleic acids. The ability of nucleobases to form base pairs and to stack one upon another leads directly to long-chain helical structures such as ribonucleic acid (RNA) and deoxyribonucleic acid (DNA). Five nucleobases-adenine (A), cytosine (C), guanine (G), thymine (T), and uracil (U)-are called primary or canonical. They function as the fundamental units of the genetic code, with the bases A, G, C, and T being found in DNA while A, G, C, and U are found in RNA. Thymine and uracil are distinguished by merely the presence or absence of a methyl group on the fifth carbon (C5) of these heterocyclic six-membered rings. In addition, some viruses have aminoadenine (Z) instead of adenine. It differs in having an extra amine group, creating a more stable bond to thymine. Adenine and guanine have a fused-ring skeletal structure derived of purine, hence they are called purine bases. The purine nitrogenous bases are characterized by their single amino group (-NH2), at the C6 carbon in adenine and C2 in guanine. Similarly, the simple-ring structure of cytosine, uracil, and thymine is derived of pyrimidine, so those three bases are called the pyrimidine bases. Each of the base pairs in a typical double-helix DNA comprises a purine and a pyrimidine: either an A paired with a T or a C paired with a G. These purine-pyrimidine pairs, which are called base complements, connect the two strands of the helix and are often compared to the rungs of a ladder. Only pairing purine with pyrimidine ensures a constant width for the DNA. The A-T pairing is based on two hydrogen bonds, while the C-G pairing is based on three. In both cases, the hydrogen bonds are between the amine and carbonyl groups on the complementary bases. Nucleobases such as adenine, guanine, xanthine, hypoxanthine, purine, 2,6-diaminopurine, and 6,8-diaminopurine may have formed in outer space as well as on earth. The origin of the term base reflects these compounds\' chemical properties in acid-base reactions, but those properties are not especially important for understanding most of the biological functions of nucleobases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nucleobase";
        }
    }

    return nullptr;
}

string _Biology::Terms::Nucleoid(string text)
{
    string model = "llama3";
    string definition = "The nucleoid (meaning nucleus-like) is an irregularly shaped region within the prokaryotic cell that contains all or most of the genetic material. The chromosome of a typical prokaryote is circular, and its length is very large compared to the cell dimensions, so it needs to be compacted in order to fit. In contrast to the nucleus of a eukaryotic cell, it is not surrounded by a nuclear membrane. Instead, the nucleoid forms by condensation and functional arrangement with the help of chromosomal architectural proteins and RNA molecules as well as DNA supercoiling. The length of a genome widely varies (generally at least a few million base pairs) and a cell may contain multiple copies of it. There is not yet a high-resolution structure known of a bacterial nucleoid, however key features have been researched in Escherichia coli as a model organism. In E. coli, the chromosomal DNA is on average negatively supercoiled and folded into plectonemic loops, which are confined to different physical regions, and rarely diffuse into each other. These loops spatially organize into megabase-sized regions called macrodomains, within which DNA sites frequently interact, but between which interactions are rare. The condensed and spatially organized DNA forms a helical ellipsoid that is radially confined in the cell. The 3D structure of the DNA in the nucleoid appears to vary depending on conditions and is linked to gene expression so that the nucleoid architecture and gene transcription are tightly interdependent, influencing each other reciprocally.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nucleoid";
        }
    }

    return nullptr;
}

string _Biology::Terms::Nucleolus(string text)
{
    string model = "llama3";
    string definition = "The nucleolus  is the largest structure in the nucleus of eukaryotic cells. It is best known as the site of ribosome biogenesis. The nucleolus also participates in the formation of signal recognition particles and plays a role in the cell\'s response to stress. Nucleoli are made of proteins, DNA and RNA, and form around specific chromosomal regions called nucleolar organizing regions. Malfunction of the Golgi apparatus means that nucleocid is the cause of several human conditions called \"nucleolopathies\" and the nucleolus is being investigated as a target for cancer chemotherapy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nucleolus";
        }
    }

    return nullptr;
}

string _Biology::Terms::Nucleotide(string text)
{
    string model = "llama3";
    string definition = "Nucleotides are organic molecules composed of a nitrogenous base, a pentose sugar and a phosphate. They serve as monomeric units of the nucleic acid polymers - deoxyribonucleic acid (DNA) and ribonucleic acid (RNA), both of which are essential biomolecules within all life-forms on Earth. Nucleotides are obtained in the diet and are also synthesized from common nutrients by the liver. Nucleotides are composed of three subunit molecules: a nucleobase, a five-carbon sugar (ribose or deoxyribose), and a phosphate group consisting of one to three phosphates. The four nucleobases in DNA are guanine, adenine, cytosine, and thymine; in RNA, uracil is used in place of thymine. Nucleotides also play a central role in metabolism at a fundamental, cellular level. They provide chemical energy-in the form of the nucleoside triphosphates, adenosine triphosphate (ATP), guanosine triphosphate (GTP), cytidine triphosphate (CTP), and uridine triphosphate (UTP)-throughout the cell for the many cellular functions that demand energy, including: amino acid, protein and cell membrane synthesis, moving the cell and cell parts (both internally and intercellularly), cell division, etc.. In addition, nucleotides participate in cell signaling (cyclic guanosine monophosphate or cGMP and cyclic adenosine monophosphate or cAMP) and are incorporated into important cofactors of enzymatic reactions (e.g., coenzyme A, FAD, FMN, NAD, and NADP+). In experimental biochemistry, nucleotides can be radiolabeled using radionuclides to yield radionucleotides. 5-nucleotides are also used in flavour enhancers as food additive to enhance the umami taste, often in the form of a yeast extract.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nucleotide";
        }
    }

    return nullptr;
}

string _Biology::Terms::Offspring(string text)
{
    string model = "llama3";
    string definition = "In biology, offspring are the young creation of living organisms, produced either by sexual or asexual reproduction. Collective offspring may be known as a brood or progeny. This can refer to a set of simultaneous offspring, such as the chicks hatched from one clutch of eggs, or to all offspring produced over time, as with the honeybee. Offspring can occur after mating, artificial insemination, or as a result of cloning. Human offspring (descendants) are referred to as children; male children are sons and female children are daughters (see Kinship).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Offspring";
        }
    }

    return nullptr;
}

string _Biology::Terms::Order(string text)
{
    string model = "llama3";
    string definition = "Order is one of the eight major hierarchical taxonomic ranks in Linnaean taxonomy. It is classified between family and class. In biological classification, the order is a taxonomic rank used in the classification of organisms and recognized by the nomenclature codes. An immediately higher rank, superorder, is sometimes added directly above order, with suborder directly beneath order. An order can also be defined as a group of related families. What does and does not belong to each order is determined by a taxonomist, as is whether a particular order should be recognized at all. Often there is no exact agreement, with different taxonomists each taking a different position. There are no hard rules that a taxonomist needs to follow in describing or recognizing an order. Some taxa are accepted almost universally, while others are recognized only rarely. The name of an order is usually written with a capital letter. For some groups of organisms, their orders may follow consistent naming schemes. Orders of plants, fungi, and algae use the suffix -ales (e.g. Dictyotales). Orders of birds and fishes use the Latin suffix -iformes meaning \'having the form of\' (e.g. Passeriformes), but orders of mammals and invertebrates are not so consistent (e.g. Artiodactyla, Actiniaria, Primates).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Order";
        }
    }

    return nullptr;
}

string _Biology::Terms::Organism(string text)
{
    string model = "llama3";
    string definition = "An organism is any living thing that functions as an individual. Such a definition raises more problems than it solves, not least because the concept of an individual is also difficult. Many criteria, few of them widely accepted, have been proposed to define what an organism is. Among the most common is that an organism has autonomous reproduction, growth, and metabolism. This would exclude viruses, despite the fact that they evolve like organisms. Other problematic cases include colonial organisms; a colony of eusocial insects is organised adaptively, and has germ-soma specialisation, with some insects reproducing, others not, like cells in an animal\'s body. The body of a siphonophore, a jelly-like marine animal, is composed of organism-like zooids, but the whole structure looks and functions much like an animal such as a jellyfish, the parts collaborating to provide the functions of the colonial organism. The evolutionary biologists David Queller and Joan Strassmann state that \"organismality\", the qualities or attributes that define an entity as an organism, has evolved socially as groups of simpler units (from cells upwards) came to cooperate without conflicts. They propose that cooperation should be used as the \"defining trait\" of an organism. This would treat many types of collaboration, including the fungus/alga partnership of different species in a lichen, or the permanent sexual partnership of an anglerfish, as an organism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Organism";
        }
    }

    return nullptr;
}

string _Biology::Terms::Ornithology(string text)
{
    string model = "llama3";
    string definition = "An organism is any living thing that functions as an individual. Such a definition raises more problems than it solves, not least because the concept of an individual is also difficult. Many criteria, few of them widely accepted, have been proposed to define what an organism is. Among the most common is that an organism has autonomous reproduction, growth, and metabolism. This would exclude viruses, despite the fact that they evolve like organisms. Other problematic cases include colonial organisms; a colony of eusocial insects is organised adaptively, and has germ-soma specialisation, with some insects reproducing, others not, like cells in an animal\'s body. The body of a siphonophore, a jelly-like marine animal, is composed of organism-like zooids, but the whole structure looks and functions much like an animal such as a jellyfish, the parts collaborating to provide the functions of the colonial organism. The evolutionary biologists David Queller and Joan Strassmann state that \"organismality\", the qualities or attributes that define an entity as an organism, has evolved socially as groups of simpler units (from cells upwards) came to cooperate without conflicts. They propose that cooperation should be used as the \"defining trait\" of an organism. This would treat many types of collaboration, including the fungus/alga partnership of different species in a lichen, or the permanent sexual partnership of an anglerfish, as an organism.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ornithology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Osmosis(string text)
{
    string model = "llama3";
    string definition = "Osmosis is the spontaneous net movement or diffusion of solvent molecules through a selectively-permeable membrane from a region of high water potential (region of lower solute concentration) to a region of low water potential (region of higher solute concentration), in the direction that tends to equalize the solute concentrations on the two sides. It may also be used to describe a physical process in which any solvent moves across a selectively permeable membrane (permeable to the solvent, but not the solute) separating two solutions of different concentrations. Osmosis can be made to do work. Osmotic pressure is defined as the external pressure required to prevent net movement of solvent across the membrane. Osmotic pressure is a colligative property, meaning that the osmotic pressure depends on the molar concentration of the solute but not on its identity. Osmosis is a vital process in biological systems, as biological membranes are semipermeable. In general, these membranes are impermeable to large and polar molecules, such as ions, proteins, and polysaccharides, while being permeable to non-polar or hydrophobic molecules like lipids as well as to small molecules like oxygen, carbon dioxide, nitrogen, and nitric oxide. Permeability depends on solubility, charge, or chemistry, as well as solute size. Water molecules travel through the plasma membrane, tonoplast membrane (vacuole) or organelle membranes by diffusing across the phospholipid bilayer via aquaporins (small transmembrane proteins similar to those responsible for facilitated diffusion and ion channels). Osmosis provides the primary means by which water is transported into and out of cells. The turgor pressure of a cell is largely maintained by osmosis across the cell membrane between the cell interior and its relatively hypotonic environment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::Paleontology(string text)
{
    string model = "llama3";
    string definition = "Paleontology is the scientific study of life that existed prior to the start of the Holocene epoch (roughly 11,700 years before present). It includes the study of fossils to classify organisms and study their interactions with each other and their environments (their paleoecology). Paleontological observations have been documented as far back as the 5th century BC. The science became established in the 18th century as a result of Georges Cuvier\'s work on comparative anatomy, and developed rapidly in the 19th century. The term has been used since 1822 formed from Greek πα?α??? (\'palaios\', \"old, ancient\"), ?? (\'on\', (gen. \'ontos\'), \"being, creature\"), and ????? (\'logos\', \"speech, thought, study\").";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::ParallelEvolution(string text)
{
    string model = "llama3";
    string definition = "Parallel evolution is the similar development of a trait in distinct species that are not closely related, but share a similar original trait in response to similar evolutionary pressure.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Parallel Evolution";
        }
    }

    return nullptr;
}

string _Biology::Terms::Parasitism(string text)
{
    string model = "llama3";
    string definition = "Parasitism is a close relationship between species, where one organism, the parasite, lives on or inside another organism, the host, causing it some harm, and is adapted structurally to this way of life. The entomologist E. O. Wilson characterised parasites as \"predators that eat prey in units of less than one\". Parasites include single-celled protozoans such as the agents of malaria, sleeping sickness, and amoebic dysentery; animals such as hookworms, lice, mosquitoes, and vampire bats; fungi such as honey fungus and the agents of ringworm; and plants such as mistletoe, dodder, and the broomrapes. There are six major parasitic strategies of exploitation of animal hosts, namely parasitic castration, directly transmitted parasitism (by contact), trophically-transmitted parasitism (by being eaten), vector-transmitted parasitism, parasitoidism, and micropredation. One major axis of classification concerns invasiveness: an endoparasite lives inside the host\'s body; an ectoparasite lives outside, on the host\'s surface. Like predation, parasitism is a type of consumer-resource interaction, but unlike predators, parasites, with the exception of parasitoids, are much smaller than their hosts, do not kill them, and often live in or on their hosts for an extended period. Parasites of animals are highly specialised, each parasite species living on one given animal species, and reproduce at a faster rate than their hosts. Classic examples include interactions between vertebrate hosts and tapeworms, flukes, and those between the malaria-causing Plasmodium species, and fleas. Parasites reduce host fitness by general or specialised pathology, that ranges from parasitic castration to modification of host behaviour. Parasites increase their own fitness by exploiting hosts for resources necessary for their survival, in particular by feeding on them and by using intermediate (secondary) hosts to assist in their transmission from one definitive (primary) host to another. Although parasitism is often unambiguous, it is part of a spectrum of interactions between species, grading via parasitoidism into predation, through evolution into mutualism, and in some fungi, shading into being saprophytic. Human knowledge of parasites such as roundworms and tapeworms dates back to ancient Egypt, Greece, and Rome. In early modern times, Antonie van Leeuwenhoek observed Giardia lamblia with his microscope in 1681, while Francesco Redi described internal and external parasites including sheep liver fluke and ticks. Modern parasitology developed in the 19th century. In human culture, parasitism has negative connotations. These were exploited to satirical effect in Jonathan Swift\'s 1733 poem \"On Poetry: A Rhapsody\", comparing poets to hyperparasitical \"vermin\". In fiction, Bram Stoker\'s 1897 Gothic horror novel Dracula and its many later adaptations featured a blood-drinking parasite. Ridley Scott\'s 1979 film Alien was one of many works of science fiction to feature a parasitic alien species.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Parasitism";
        }
    }

    return nullptr;
}

string _Biology::Terms::Parasitology(string text)
{
    string model = "llama3";
    string definition = "Parasitology is the study of parasites, their hosts, and the relationship between them. As a biological discipline, the scope of parasitology is not determined by the organism or environment in question but by their way of life. This means it forms a synthesis of other disciplines, and draws on techniques from fields such as cell biology, bioinformatics, biochemistry, molecular biology, immunology, genetics, evolution and ecology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Parasitology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Pathobiology(string text)
{
    string model = "llama3";
    string definition = "Pathology is the study of disease. The word pathology also refers to the study of disease in general, incorporating a wide range of biology research fields and medical practices. However, when used in the context of modern medical treatment, the term is often used in a narrower fashion to refer to processes and tests that fall within the contemporary medical field of \"general pathology\", an area that includes a number of distinct but inter-related medical specialties that diagnose disease, mostly through analysis of tissue and human cell samples. Idiomatically, \"a pathology\" may also refer to the predicted or actual progression of particular diseases (as in the statement \"the many different forms of cancer have diverse pathologies\", in which case a more proper choice of word would be \"pathophysiologies\"). The suffix pathy is sometimes used to indicate a state of disease in cases of both physical ailment (as in cardiomyopathy) and psychological conditions (such as psychopathy). A physician practicing pathology is called a pathologist. As a field of general inquiry and research, pathology addresses components of disease: cause, mechanisms of development (pathogenesis), structural alterations of cells (morphologic changes), and the consequences of changes (clinical manifestations). In common medical practice, general pathology is mostly concerned with analyzing known clinical abnormalities that are markers or precursors for both infectious and non-infectious disease, and is conducted by experts in one of two major specialties, anatomical pathology and clinical pathology. Further divisions in specialty exist on the basis of the involved sample types (comparing, for example, cytopathology, hematopathology, and histopathology), organs (as in renal pathology), and physiological systems (oral pathology), as well as on the basis of the focus of the examination (as with forensic pathology). Pathology is a significant field in modern medical diagnosis and medical research.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pathobiology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Pathogen(string text)
{
    string model = "llama3";
    string definition = "In biology, a pathogen in the oldest and broadest sense, is any organism or agent that can produce disease. A pathogen may also be referred to as an infectious agent, or simply a germ. The term pathogen came into use in the 1880s. Typically, the term pathogen is used to describe an infectious microorganism or agent, such as a virus, bacterium, protozoan, prion, viroid, or fungus. Small animals, such as helminths and insects, can also cause or transmit disease. However, these animals are usually referred to as parasites rather than pathogens. The scientific study of microscopic organisms, including microscopic pathogenic organisms, is called microbiology, while parasitology refers to the scientific study of parasites and the organisms that host them. There are several pathways through which pathogens can invade a host. The principal pathways have different episodic time frames, but soil has the longest or most persistent potential for harboring a pathogen. Diseases in humans that are caused by infectious agents are known as pathogenic diseases. Not all diseases are caused by pathogens, such as black lung from exposure to the pollutant coal dust, genetic disorders like sickle cell disease, and autoimmune diseases like lupus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pathogen";
        }
    }

    return nullptr;
}

string _Biology::Terms::Pathology(string text)
{
    string model = "llama3";
    string definition = "Pathology is the study of disease. The word pathology also refers to the study of disease in general, incorporating a wide range of biology research fields and medical practices. However, when used in the context of modern medical treatment, the term is often used in a narrower fashion to refer to processes and tests that fall within the contemporary medical field of \"general pathology\", an area that includes a number of distinct but inter-related medical specialties that diagnose disease, mostly through analysis of tissue and human cell samples. Idiomatically, \"a pathology\" may also refer to the predicted or actual progression of particular diseases (as in the statement \"the many different forms of cancer have diverse pathologies\", in which case a more proper choice of word would be \"pathophysiologies\"). The suffix pathy is sometimes used to indicate a state of disease in cases of both physical ailment (as in cardiomyopathy) and psychological conditions (such as psychopathy). A physician practicing pathology is called a pathologist. As a field of general inquiry and research, pathology addresses components of disease: cause, mechanisms of development (pathogenesis), structural alterations of cells (morphologic changes), and the consequences of changes (clinical manifestations). In common medical practice, general pathology is mostly concerned with analyzing known clinical abnormalities that are markers or precursors for both infectious and non-infectious disease, and is conducted by experts in one of two major specialties, anatomical pathology and clinical pathology. Further divisions in specialty exist on the basis of the involved sample types (comparing, for example, cytopathology, hematopathology, and histopathology), organs (as in renal pathology), and physiological systems (oral pathology), as well as on the basis of the focus of the examination (as with forensic pathology). Pathology is a significant field in modern medical diagnosis and medical research.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pathology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Pharmacology(string text)
{
    string model = "llama3";
    string definition = "Pharmacology is the science of drugs and medications, including a substance\'s origin, composition, pharmacokinetics, pharmacodynamics, therapeutic use, and toxicology. More specifically, it is the study of the interactions that occur between a living organism and chemicals that affect normal or abnormal biochemical function. If substances have medicinal properties, they are considered pharmaceuticals. The field encompasses drug composition and properties, functions, sources, synthesis and drug design, molecular and cellular mechanisms, organ/systems mechanisms, signal transduction/cellular communication, molecular diagnostics, interactions, chemical biology, therapy, and medical applications and antipathogenic capabilities. The two main areas of pharmacology are pharmacodynamics and pharmacokinetics. Pharmacodynamics studies the effects of a drug on biological systems, and pharmacokinetics studies the effects of biological systems on a drug. In broad terms, pharmacodynamics discusses the chemicals with biological receptors, and pharmacokinetics discusses the absorption, distribution, metabolism, and excretion (ADME) of chemicals from the biological systems. Pharmacology is not synonymous with pharmacy and the two terms are frequently confused. Pharmacology, a biomedical science, deals with the research, discovery, and characterization of chemicals which show biological effects and the elucidation of cellular and organismal function in relation to these chemicals. In contrast, pharmacy, a health services profession, is concerned with the application of the principles learned from pharmacology in its clinical settings; whether it be in a dispensing or clinical care role. In either field, the primary contrast between the two is their distinctions between direct-patient care, pharmacy practice, and the science-oriented research field, driven by pharmacology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pharmacology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Phenotype(string text)
{
    string model = "llama3";
    string definition = "In genetics, the phenotype is the set of observable characteristics or traits of an organism. The term covers the organism\'s morphology (physical form and structure), its developmental processes, its biochemical and physiological properties, its behavior, and the products of behavior. An organism\'s phenotype results from two basic factors: the expression of an organism\'s genetic code (its genotype) and the influence of environmental factors. Both factors may interact, further affecting the phenotype. When two or more clearly different phenotypes exist in the same population of a species, the species is called polymorphic. A well-documented example of polymorphism is Labrador Retriever coloring; while the coat color depends on many genes, it is clearly seen in the environment as yellow, black, and brown. Richard Dawkins in 1978 and then again in his 1982 book The Extended Phenotype suggested that one can regard bird nests and other built structures such as caddisfly larva cases and beaver dams as \"extended phenotypes\". Wilhelm Johannsen proposed the genotype-phenotype distinction in 1911 to make clear the difference between an organism\'s hereditary material and what that hereditary material produces. The distinction resembles that proposed by August Weismann (1834-1914), who distinguished between germ plasm (heredity) and somatic cells (the body). More recently, in The Selfish Gene (1976), Dawkins distinguished these concepts as replicators and vehicles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phenotype";
        }
    }

    return nullptr;
}

string _Biology::Terms::Pheromone(string text)
{
    string model = "llama3";
    string definition = "A pheromone is a secreted or excreted chemical factor that triggers a social response in members of the same species. Pheromones are chemicals capable of acting like hormones outside the body of the secreting individual, to affect the behavior of the receiving individuals. There are alarm pheromones, food trail pheromones, sex pheromones, and many others that affect behavior or physiology. Pheromones are used by many organisms, from basic unicellular prokaryotes to complex multicellular eukaryotes. Their use among insects has been particularly well documented. In addition, some vertebrates, plants and ciliates communicate by using pheromones. The ecological functions and evolution of pheromones are a major topic of research in the field of chemical ecology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pheromone";
        }
    }

    return nullptr;
}

string _Biology::Terms::Photosynthesis(string text)
{
    string model = "llama3";
    string definition = "Photosynthesis is a system of biological processes by which photosynthetic organisms, such as most plants, algae, and cyanobacteria, convert light energy, typically from sunlight, into the chemical energy necessary to fuel their metabolism. Photosynthesis usually refers to oxygenic photosynthesis, a process that produces oxygen. Photosynthetic organisms store the chemical energy so produced within intracellular organic compounds (compounds containing carbon) like sugars, glycogen, cellulose and starches. To use this stored chemical energy, an organism\'s cells metabolize the organic compounds through cellular respiration. Photosynthesis plays a critical role in producing and maintaining the oxygen content of the Earth\'s atmosphere, and it supplies most of the biological energy necessary for complex life on Earth. Some bacteria also perform anoxygenic photosynthesis, which uses bacteriochlorophyll to split hydrogen sulfide as a reductant instead of water, producing sulfur instead of oxygen. Archaea such as Halobacterium also perform a type of non-carbon-fixing anoxygenic photosynthesis, where the simpler photopigment retinal and its microbial rhodopsin derivatives are used to absorb green light and power proton pumps to directly synthesize adenosine triphosphate (ATP), the \"energy currency\" of cells. Such archaeal photosynthesis might have been the earliest form of photosynthesis that evolved on Earth, as far back as the Paleoarchean, preceding that of cyanobacteria (see Purple Earth hypothesis). While the details may differ between species, the process always begins when light energy is absorbed by the reaction centers, proteins that contain photosynthetic pigments or chromophores. In plants, these pigments are chlorophylls (a porphyrin derivative that absorbs the red and blue spectrums of light, thus reflecting green) held inside chloroplasts, abundant in leaf cells. In bacteria, they are embedded in the plasma membrane. In these light-dependent reactions, some energy is used to strip electrons from suitable substances, such as water, producing oxygen gas. The hydrogen freed by the splitting of water is used in the creation of two important molecules that participate in energetic processes: reduced nicotinamide adenine dinucleotide phosphate (NADPH) and ATP. In plants, algae, and cyanobacteria, sugars are synthesized by a subsequent sequence of light-independent reactions called the Calvin cycle. In this process, atmospheric carbon dioxide is incorporated into already existing organic compounds, such as ribulose bisphosphate (RuBP). Using the ATP and NADPH produced by the light-dependent reactions, the resulting compounds are then reduced and removed to form further carbohydrates, such as glucose. In other bacteria, different mechanisms like the reverse Krebs cycle are used to achieve the same end. The first photosynthetic organisms probably evolved early in the evolutionary history of life using reducing agents such as hydrogen or hydrogen sulfide, rather than water, as sources of electrons. Cyanobacteria appeared later; the excess oxygen they produced contributed directly to the oxygenation of the Earth, which rendered the evolution of complex life possible. The average rate of energy captured by global photosynthesis is approximately 130 terawatts, which is about eight times the total power consumption of human civilization. Photosynthetic organisms also convert around 100-115 billion tons (91-104 Pg petagrams, or billions of metric tons), of carbon into biomass per year. Photosynthesis was discovered in 1779 by Jan Ingenhousz who showed that plants need light, not just soil and water.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Photosynthesis";
        }
    }

    return nullptr;
}

string _Biology::Terms::Phylogeny(string text)
{
    string model = "llama3";
    string definition = "A phylogenetic tree, phylogeny or evolutionary tree is a graphical representation which shows the evolutionary history between a set of species or taxa during a specific time. In other words, it is a branching diagram or a tree showing the evolutionary relationships among various biological species or other entities based upon similarities and differences in their physical or genetic characteristics. In evolutionary biology, all life on Earth is theoretically part of a single phylogenetic tree, indicating common ancestry. Phylogenetics is the study of phylogenetic trees. The main challenge is to find a phylogenetic tree representing optimal evolutionary ancestry between a set of species or taxa. Computational phylogenetics (also phylogeny inference) focuses on the algorithms involved in finding optimal phylogenetic tree in the phylogenetic landscape. Phylogenetic trees may be rooted or unrooted. In a rooted phylogenetic tree, each node with descendants represents the inferred most recent common ancestor of those descendants, and the edge lengths in some trees may be interpreted as time estimates. Each node is called a taxonomic unit. Internal nodes are generally called hypothetical taxonomic units, as they cannot be directly observed. Trees are useful in fields of biology such as bioinformatics, systematics, and phylogenetics. Unrooted trees illustrate only the relatedness of the leaf nodes and do not require the ancestral root to be known or inferred.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phylogeny";
        }
    }

    return nullptr;
}

string _Biology::Terms::Phylum(string text)
{
    string model = "llama3";
    string definition = "In biology, a phylum is a level of classification or taxonomic rank below kingdom and above class. Traditionally, in botany the term division has been used instead of phylum, although the International Code of Nomenclature for algae, fungi, and plants accepts the terms as equivalent. Depending on definitions, the animal kingdom Animalia contains about 31 phyla, the plant kingdom Plantae contains about 14 phyla, and the fungus kingdom Fungi contains about 8 phyla. Current research in phylogenetics is uncovering the relationships among phyla within larger clades like Ecdysozoa and Embryophyta.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phylum";
        }
    }

    return nullptr;
}

string _Biology::Terms::Physiology(string text)
{
    string model = "llama3";
    string definition = "Physiology is the scientific study of functions and mechanisms in a living system. As a subdiscipline of biology, physiology focuses on how organisms, organ systems, individual organs, cells, and biomolecules carry out chemical and physical functions in a living system. According to the classes of organisms, the field can be divided into medical physiology, animal physiology, plant physiology, cell physiology, and comparative physiology. Central to physiological functioning are biophysical and biochemical processes, homeostatic control mechanisms, and communication between cells. Physiological state is the condition of normal function. In contrast, pathological state refers to abnormal conditions, including human diseases. The Nobel Prize in Physiology or Medicine is awarded by the Royal Swedish Academy of Sciences for exceptional scientific achievements in physiology related to the field of medicine.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Physiology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Phytochemistry(string text)
{
    string model = "llama3";
    string definition = "Phytochemistry is the study of phytochemicals, which are chemicals derived from plants. Phytochemists strive to describe the structures of the large number of secondary metabolites found in plants, the functions of these compounds in human and plant biology, and the biosynthesis of these compounds. Plants synthesize phytochemicals for many reasons, including to protect themselves against insect attacks and plant diseases. The compounds found in plants are of many kinds, but most can be grouped into four major biosynthetic classes: alkaloids, phenylpropanoids, polyketides, and terpenoids. Phytochemistry can be considered a subfield of botany or chemistry. Activities can be led in botanical gardens or in the wild with the aid of ethnobotany. Phytochemical studies directed toward human (i.e. drug discovery) use may fall under the discipline of pharmacognosy, whereas phytochemical studies focused on the ecological functions and evolution of phytochemicals likely fall under the discipline of chemical ecology. Phytochemistry also has relevance to the field of plant physiology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phytochemistry";
        }
    }

    return nullptr;
}

string _Biology::Terms::Phytopathology(string text)
{
    string model = "llama3";
    string definition = "Plant pathology or phytopathology is the scientific study of plant diseases caused by pathogens (infectious organisms) and environmental conditions (physiological factors). Plant pathology involves the study of pathogen identification, disease etiology, disease cycles, economic impact, plant disease epidemiology, plant disease resistance, how plant diseases affect humans and animals, pathosystem genetics, and management of plant diseases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phytopathology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Piliferous(string text)
{
    string model = "llama3";
    string definition = "Bearing hair";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Piliferous";
        }
    }

    return nullptr;
}

string _Biology::Terms::Placebo(string text)
{
    string model = "llama3";
    string definition = "A placebo is a substance or treatment which is designed to have no therapeutic value. Common placebos include inert tablets (like sugar pills), inert injections (like saline), sham surgery, and other procedures. Placebos are used in randomized clinical trials to test the efficacy of medical treatments. In a placebo-controlled clinical trial, any change in the control group is known as the placebo response, and the difference between this and the result of no treatment is the placebo effect. Placebos in clinical trials should ideally be indistinguishable from so-called verum treatments under investigation, except for the latter\'s particular hypothesized medicinal effect. This is to shield test participants (with their consent) from knowing who is getting the placebo and who is getting the treatment under test, as patients\' and clinicians\' expectations of efficacy can influence results. The idea of a placebo effect was discussed in 18th century psychology, but became more prominent in the 20th century. Modern studies find that placebos can affect some outcomes such as pain and nausea, but otherwise do not generally have important clinical effects. Improvements that patients experience after being treated with a placebo can also be due to unrelated factors, such as regression to the mean (a statistical effect where an unusually high or low measurement is likely to be followed by a less extreme one). The use of placebos in clinical medicine raises ethical concerns, especially if they are disguised as an active treatment, as this introduces dishonesty into the doctor-patient relationship and bypasses informed consent. Placebos are also popular because they can sometimes produce relief through psychological mechanisms (a phenomenon known as the \"placebo effect\"). They can affect how patients perceive their condition and encourage the body\'s chemical processes for relieving pain and a few other symptoms, but have no impact on the disease itself.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Placebo";
        }
    }

    return nullptr;
}

string _Biology::Terms::Plant(string text)
{
    string model = "llama3";
    string definition = "Plants are the eukaryotes that form the kingdom Plantae; they are predominantly photosynthetic. This means that they obtain their energy from sunlight, using chloroplasts derived from endosymbiosis with cyanobacteria to produce sugars from carbon dioxide and water, using the green pigment chlorophyll. Exceptions are parasitic plants that have lost the genes for chlorophyll and photosynthesis, and obtain their energy from other plants or fungi. Most plants are multicellular, except for some green algae. Historically, as in Aristotle\'s biology, the plant kingdom encompassed all living things that were not animals, and included algae and fungi. Definitions have narrowed since then; current definitions exclude the fungi and some of the algae. By the definition used in this article, plants form the clade Viridiplantae (green plants), which consists of the green algae and the embryophytes or land plants (hornworts, liverworts, mosses, lycophytes, ferns, conifers and other gymnosperms, and flowering plants). A definition based on genomes includes the Viridiplantae, along with the red algae and the glaucophytes, in the clade Archaeplastida. There are about 380,000 known species of plants, of which the majority, some 260,000, produce seeds. They range in size from single cells to the tallest trees. Green plants provide a substantial proportion of the world\'s molecular oxygen; the sugars they create supply the energy for most of Earth\'s ecosystems and other organisms, including animals, either eat plants directly or rely on organisms which do so. Grain, fruit, and vegetables are basic human foods and have been domesticated for millennia. People use plants for many purposes, such as building materials, ornaments, writing materials, and, in great variety, for medicines. The scientific study of plants is known as botany, a branch of biology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Plant";
        }
    }

    return nullptr;
}

string _Biology::Terms::Plasmolysis(string text)
{
    string model = "llama3";
    string definition = "Plasmolysis is the process in which cells lose water in a hypertonic solution. The reverse process, deplasmolysis or cytolysis, can occur if the cell is in a hypotonic solution resulting in a lower external osmotic pressure and a net flow of water into the cell. Through observation of plasmolysis and deplasmolysis, it is possible to determine the tonicity of the cell\'s environment as well as the rate solute molecules cross the cellular membrane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Plasmolysis";
        }
    }

    return nullptr;
}

string _Biology::Terms::Pollination(string text)
{
    string model = "llama3";
    string definition = "Pollination is the transfer of pollen from an anther of a plant to the stigma of a plant, later enabling fertilisation and the production of seeds. Pollinating agents can be animals such as insects, for example beetles or butterflies; birds, and bats; water; wind; and even plants themselves. Pollinating animals travel from plant to plant carrying pollen on their bodies in a vital interaction that allows the transfer of genetic material critical to the reproductive system of most flowering plants. When self-pollination occurs within a closed flower. Pollination often occurs within a species. When pollination occurs between species, it can produce hybrid offspring in nature and in plant breeding work. In angiosperms, after the pollen grain (gametophyte) has landed on the stigma, it germinates and develops a pollen tube which grows down the style until it reaches an ovary. Its two gametes travel down the tube to where the gametophyte(s) containing the female gametes are held within the carpel. After entering an ovule through the micropyle, one male nucleus fuses with the polar bodies to produce the endosperm tissues, while the other fuses with the egg cell to produce the embryo. Hence the term: \"double fertilisation\". This process would result in the production of a seed, made of both nutritious tissues and embryo. In gymnosperms, the ovule is not contained in a carpel, but exposed on the surface of a dedicated support organ, such as the scale of a cone, so that the penetration of carpel tissue is unnecessary. Details of the process vary according to the division of gymnosperms in question. Two main modes of fertilisation are found in gymnosperms: cycads and Ginkgo have motile sperm that swim directly to the egg inside the ovule, whereas conifers and gnetophytes have sperm that are unable to swim but are conveyed to the egg along a pollen tube. Pollination research covers various fields, including botany, horticulture, entomology, and ecology. The pollination process as an interaction between flower and pollen vector was first addressed in the 18th century by Christian Konrad Sprengel. It is important in horticulture and agriculture, because fruiting is dependent on fertilisation: the result of pollination. The study of pollination by insects is known as anthecology. There are also studies in economics that look at the positives and negatives of pollination, focused on bees, and how the process affects the pollinators themselves.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pollination";
        }
    }

    return nullptr;
}

string _Biology::Terms::Polymer(string text)
{
    string model = "llama3";
    string definition = "A polymer is a substance or material that consists of very large molecules, or macromolecules, that are constituted by many repeating subunits derived from one or more species of monomers. Due to their broad spectrum of properties, both synthetic and natural polymers play essential and ubiquitous roles in everyday life. Polymers range from familiar synthetic plastics such as polystyrene to natural biopolymers such as DNA and proteins that are fundamental to biological structure and function. Polymers, both natural and synthetic, are created via polymerization of many small molecules, known as monomers. Their consequently large molecular mass, relative to small molecule compounds, produces unique physical properties including toughness, high elasticity, viscoelasticity, and a tendency to form amorphous and semicrystalline structures rather than crystals. Polymers are studied in the fields of polymer science (which includes polymer chemistry and polymer physics), biophysics and materials science and engineering. Historically, products arising from the linkage of repeating units by covalent chemical bonds have been the primary focus of polymer science. An emerging important area now focuses on supramolecular polymers formed by non-covalent links. Polyisoprene of latex rubber is an example of a natural polymer, and the polystyrene of styrofoam is an example of a synthetic polymer. In biological contexts, essentially all biological macromolecules-i.e., proteins (polyamides), nucleic acids (polynucleotides), and polysaccharides-are purely polymeric, or are composed in large part of polymeric components.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Polymer";
        }
    }

    return nullptr;
}

string _Biology::Terms::PolymeraseChainReaction(string text)
{
    string model = "llama3";
    string definition = "The polymerase chain reaction (PCR) is a method widely used to make millions to billions of copies of a specific DNA sample rapidly, allowing scientists to amplify a very small sample of DNA (or a part of it) sufficiently to enable detailed study. PCR was invented in 1983 by American biochemist Kary Mullis at Cetus Corporation. Mullis and biochemist Michael Smith, who had developed other essential ways of manipulating DNA, were jointly awarded the Nobel Prize in Chemistry in 1993. PCR is fundamental to many of the procedures used in genetic testing and research, including analysis of ancient samples of DNA and identification of infectious agents. Using PCR, copies of very small amounts of DNA sequences are exponentially amplified in a series of cycles of temperature changes. PCR is now a common and often indispensable technique used in medical laboratory research for a broad variety of applications including biomedical research and forensic science. The majority of PCR methods rely on thermal cycling. Thermal cycling exposes reagents to repeated cycles of heating and cooling to permit different temperature-dependent reactions-specifically, DNA melting and enzyme-driven DNA replication. PCR employs two main reagents-primers (which are short single strand DNA fragments known as oligonucleotides that are a complementary sequence to the target DNA region) and a thermostable DNA polymerase. In the first step of PCR, the two strands of the DNA double helix are physically separated at a high temperature in a process called nucleic acid denaturation. In the second step, the temperature is lowered and the primers bind to the complementary sequences of DNA. The two DNA strands then become templates for DNA polymerase to enzymatically assemble a new DNA strand from free nucleotides, the building blocks of DNA. As PCR progresses, the DNA generated is itself used as a template for replication, setting in motion a chain reaction in which the original DNA template is exponentially amplified. Almost all PCR applications employ a heat-stable DNA polymerase, such as Taq polymerase, an enzyme originally isolated from the thermophilic bacterium Thermus aquaticus. If the polymerase used was heat-susceptible, it would denature under the high temperatures of the denaturation step. Before the use of Taq polymerase, DNA polymerase had to be manually added every cycle, which was a tedious and costly process. Applications of the technique include DNA cloning for sequencing, gene cloning and manipulation, gene mutagenesis; construction of DNA-based phylogenies, or functional analysis of genes; diagnosis and monitoring of genetic disorders; amplification of ancient DNA; analysis of genetic fingerprints for DNA profiling (for example, in forensic science and parentage testing); and detection of pathogens in nucleic acid tests for the diagnosis of infectious diseases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Polymerase Chain Reaction";
        }
    }

    return nullptr;
}

string _Biology::Terms::Polyploidy(string text)
{
    string model = "llama3";
    string definition = "Polyploidy is a condition in which the cells of an organism have more than two paired sets of (homologous) chromosomes. Most species whose cells have nuclei (eukaryotes) are diploid, meaning they have two complete sets of chromosomes, one from each of two parents; each set contains the same number of chromosomes, and the chromosomes are joined in pairs of homologous chromosomes. However, some organisms are polyploid. Polyploidy is especially common in plants. Most eukaryotes have diploid somatic cells, but produce haploid gametes (eggs and sperm) by meiosis. A monoploid has only one set of chromosomes, and the term is usually only applied to cells or organisms that are normally diploid. Males of bees and other Hymenoptera, for example, are monoploid. Unlike animals, plants and multicellular algae have life cycles with two alternating multicellular generations. The gametophyte generation is haploid, and produces gametes by mitosis; the sporophyte generation is diploid and produces spores by meiosis. Polyploidy is the result of whole-genome duplication during the evolution of species. It may occur due to abnormal cell division, either during mitosis, or more commonly from the failure of chromosomes to separate during meiosis or from the fertilization of an egg by more than one sperm. In addition, it can be induced in plants and cell cultures by some chemicals: the best known is colchicine, which can result in chromosome doubling, though its use may have other less obvious consequences as well. Oryzalin will also double the existing chromosome content. Among mammals, a high frequency of polyploid cells is found in organs such as the brain, liver, heart, and bone marrow. It also occurs in the somatic cells of other animals, such as goldfish, salmon, and salamanders. It is common among ferns and flowering plants (see Hibiscus rosa-sinensis), including both wild and cultivated species. Wheat, for example, after millennia of hybridization and modification by humans, has strains that are diploid (two sets of chromosomes), tetraploid (four sets of chromosomes) with the common name of durum or macaroni wheat, and hexaploid (six sets of chromosomes) with the common name of bread wheat. Many agriculturally important plants of the genus Brassica are also tetraploids. Sugarcane can have ploidy levels higher than octaploid. Polyploidization can be a mechanism of sympatric speciation because polyploids are usually unable to interbreed with their diploid ancestors. An example is the plant Erythranthe peregrina. Sequencing confirmed that this species originated from E. x robertsii, a sterile triploid hybrid between E. guttata and E. lutea, both of which have been introduced and naturalised in the United Kingdom. New populations of E. peregrina arose on the Scottish mainland and the Orkney Islands via genome duplication from local populations of E. x robertsii. Because of a rare genetic mutation, E. peregrina is not sterile. On the other hand, polyploidization can also be a mechanism for a kind of \'reverse speciation\', whereby gene flow is enabled following the polyploidy event, even between lineages that previously experienced no gene flow as diploids. This has been detailed at the genomic level in Arabidopsis arenosa and Arabidopsis lyrata. Each of these species experienced independent autopolyploidy events (within-species polyploidy, described below), which then enabled subsequent interspecies gene flow of adaptive alleles, in this case stabilising each young polyploid lineage. Such polyploidy-enabled adaptive introgression may allow polyploids at act as \'allelic sponges\', whereby they accumulate cryptic genomic variation that may be recruited upon encountering later environmental challenges.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Polyploidy";
        }
    }

    return nullptr;
}

string _Biology::Terms::Population(string text)
{
    string model = "llama3";
    string definition = "Population is the term typically used to refer to the number of people in a single area. Governments conduct a census to quantify the size of a resident population within a given jurisdiction. The term is also applied to non-human animals, microorganisms, and plants, and has specific uses within such fields as ecology and genetics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Population";
        }
    }

    return nullptr;
}

string _Biology::Terms::PopulationBiology(string text)
{
    string model = "llama3";
    string definition = "The term population biology has been used with different meanings. In 1971, Edward O. Wilson et al. used the term in the sense of applying mathematical models to population genetics, community ecology, and population dynamics. Alan Hastings used the term in 1997 as the title of his book on the mathematics used in population dynamics. The name was also used for a course given at UC Davis in the late 2010s, which describes it as an interdisciplinary field combining the areas of ecology and evolutionary biology. The course includes mathematics, statistics, ecology, genetics, and systematics. Numerous types of organisms are studied. The journal Theoretical Population Biology is published.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Population Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::PopulationEcology(string text)
{
    string model = "llama3";
    string definition = "Population ecology is a sub-field of ecology that deals with the dynamics of species populations and how these populations interact with the environment, such as birth and death rates, and by immigration and emigration. The discipline is important in conservation biology, especially in the development of population viability analysis which makes it possible to predict the long-term probability of a species persisting in a given patch of habitat. Although population ecology is a subfield of biology, it provides interesting problems for mathematicians and statisticians who work in population dynamics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Population Ecology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Predation(string text)
{
    string model = "llama3";
    string definition = "Predation is a biological interaction where one organism, the predator, kills and eats another organism, its prey. It is one of a family of common feeding behaviours that includes parasitism and micropredation (which usually do not kill the host) and parasitoidism (which always does, eventually). It is distinct from scavenging on dead prey, though many predators also scavenge; it overlaps with herbivory, as seed predators and destructive frugivores are predators. Predators may actively search for or pursue prey or wait for it, often concealed. When prey is detected, the predator assesses whether to attack it. This may involve ambush or pursuit predation, sometimes after stalking the prey. If the attack is successful, the predator kills the prey, removes any inedible parts like the shell or spines, and eats it. Predators are adapted and often highly specialized for hunting, with acute senses such as vision, hearing, or smell. Many predatory animals, both vertebrate and invertebrate, have sharp claws or jaws to grip, kill, and cut up their prey. Other adaptations include stealth and aggressive mimicry that improve hunting efficiency. Predation has a powerful selective effect on prey, and the prey develop antipredator adaptations such as warning coloration, alarm calls and other signals, camouflage, mimicry of well-defended species, and defensive spines and chemicals. Sometimes predator and prey find themselves in an evolutionary arms race, a cycle of adaptations and counter-adaptations. Predation has been a major driver of evolution since at least the Cambrian period.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Predation";
        }
    }

    return nullptr;
}

string _Biology::Terms::Primer(string text)
{
    string model = "llama3";
    string definition = "A primer is a short, single-stranded nucleic acid used by all living organisms in the initiation of DNA synthesis. A synthetic primer may also be referred to as an oligo, short for oligonucleotide. DNA polymerase (responsible for DNA replication) enzymes are only capable of adding nucleotides to the 3\'-end of an existing nucleic acid, requiring a primer be bound to the template before DNA polymerase can begin a complementary strand. DNA polymerase adds nucleotides after binding to the RNA primer and synthesizes the whole strand. Later, the RNA strands must be removed accurately and replace them with DNA nucleotides forming a gap region known as a nick that is filled in using an enzyme called ligase. The removal process of the RNA primer requires several enzymes, such as Fen1, Lig1, and others that work in coordination with DNA polymerase, to ensure the removal of the RNA nucleotides and the addition of DNA nucleotides. Living organisms use solely RNA primers, while laboratory techniques in biochemistry and molecular biology that require in vitro DNA synthesis (such as DNA sequencing and polymerase chain reaction) usually use DNA primers, since they are more temperature stable. Primers can be designed in laboratory for specific reactions such as polymerase chain reaction (PCR). When designing PCR primers, there are specific measures that must be taken into consideration, like the melting temperature of the primers and the annealing temperature of the reaction itself. Moreover, the DNA binding sequence of the primer in vitro has to be specifically chosen, which is done using a method called basic local alignment search tool (BLAST) that scans the DNA and finds specific and unique regions for the primer to bind.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Primer";
        }
    }

    return nullptr;
}

string _Biology::Terms::Progeny(string text)
{
    string model = "llama3";
    string definition = "Any genetic descendant or offspring.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Progeny";
        }
    }

    return nullptr;
}

string _Biology::Terms::Progesterone(string text)
{
    string model = "llama3";
    string definition = " an endogenous steroid and progestogen sex hormone involved in the menstrual cycle, pregnancy, and embryogenesis of humans and other species. It belongs to a group of steroid hormones called the progestogens and is the major progestogen in the body. Progesterone has a variety of important functions in the body. It is also a crucial metabolic intermediate in the production of other endogenous steroids, including the sex hormones and the corticosteroids, and plays an important role in brain function as a neurosteroid. In addition to its role as a natural hormone, progesterone is also used as a medication, such as in combination with estrogen for contraception, to reduce the risk of uterine or cervical cancer, in hormone replacement therapy, and in feminizing hormone therapy. It was first prescribed in 1934.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Progesterone";
        }
    }

    return nullptr;
}

string _Biology::Terms::Prokaryote(string text)
{
    string model = "llama3";
    string definition = "A prokaryote less commonly spelled procaryote) is a single-cell organism whose cell lacks a nucleus and other membrane-bound organelles. The word prokaryote comes from the Ancient Greek π?? (pró), meaning \'before\', and ?????? (káruon), meaning \'nut\' or \'kernel\'. In the two-empire system arising from the work of Édouard Chatton, prokaryotes were classified within the empire Prokaryota. However in the three-domain system, based upon molecular analysis, prokaryotes are divided into two domains: Bacteria (formerly Eubacteria) and Archaea (formerly Archaebacteria). Organisms with nuclei are placed in a third domain: Eukaryota. Prokaryotes evolved before eukaryotes, and lack nuclei, mitochondria, and most of the other distinct organelles that characterize the eukaryotic cell. It was once thought that prokaryotic cellular components were unenclosed within the cytoplasm except for an outer cell membrane, but bacterial microcompartments, which are thought to be quasi-organelles enclosed in protein shells (such as the encapsulin protein cages), have been discovered, along with other prokaryotic organelles. While being unicellular, some prokaryotes, such as cyanobacteria, may form colonies held together by biofilms, and large colonies can create multilayered microbial mats. Others, such as myxobacteria, have multicellular stages in their life cycles. Prokaryotes are asexual, reproducing via binary fission without any fusion of gametes, although horizontal gene transfer may take place. Molecular studies have provided insight into the evolution and interrelationships of the three domains of life. The division between prokaryotes and eukaryotes reflects the existence of two very different levels of cellular organization; only eukaryotic cells have an enveloped nucleus that contains its chromosomal DNA, and other characteristic membrane-bound organelles including mitochondria. Distinctive types of prokaryotes include extremophiles and methanogens; these are common in some extreme environments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Prokaryote";
        }
    }

    return nullptr;
}

string _Biology::Terms::Protein(string text)
{
    string model = "llama3";
    string definition = "Proteins are large biomolecules and macromolecules that comprise one or more long chains of amino acid residues. Proteins perform a vast array of functions within organisms, including catalysing metabolic reactions, DNA replication, responding to stimuli, providing structure to cells and organisms, and transporting molecules from one location to another. Proteins differ from one another primarily in their sequence of amino acids, which is dictated by the nucleotide sequence of their genes, and which usually results in protein folding into a specific 3D structure that determines its activity. A linear chain of amino acid residues is called a polypeptide. A protein contains at least one long polypeptide. Short polypeptides, containing less than 20-30 residues, are rarely considered to be proteins and are commonly called peptides. The individual amino acid residues are bonded together by peptide bonds and adjacent amino acid residues. The sequence of amino acid residues in a protein is defined by the sequence of a gene, which is encoded in the genetic code. In general, the genetic code specifies 20 standard amino acids; but in certain organisms the genetic code can include selenocysteine and-in certain archaea-pyrrolysine. Shortly after or even during synthesis, the residues in a protein are often chemically modified by post-translational modification, which alters the physical and chemical properties, folding, stability, activity, and ultimately, the function of the proteins. Some proteins have non-peptide groups attached, which can be called prosthetic groups or cofactors. Proteins can also work together to achieve a particular function, and they often associate to form stable protein complexes. Once formed, proteins only exist for a certain period and are then degraded and recycled by the cell\'s machinery through the process of protein turnover. A protein\'s lifespan is measured in terms of its half-life and covers a wide range. They can exist for minutes or years with an average lifespan of 1-2 days in mammalian cells. Abnormal or misfolded proteins are degraded more rapidly either due to being targeted for destruction or due to being unstable. Like other biological macromolecules such as polysaccharides and nucleic acids, proteins are essential parts of organisms and participate in virtually every process within cells. Many proteins are enzymes that catalyse biochemical reactions and are vital to metabolism. Proteins also have structural or mechanical functions, such as actin and myosin in muscle and the proteins in the cytoskeleton, which form a system of scaffolding that maintains cell shape. Other proteins are important in cell signaling, immune responses, cell adhesion, and the cell cycle. In animals, proteins are needed in the diet to provide the essential amino acids that cannot be synthesized. Digestion breaks the proteins down for metabolic use.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Protein";
        }
    }

    return nullptr;
}

string _Biology::Terms::Protist(string text)
{
    string model = "llama3";
    string definition = "A protist or protoctist is any eukaryotic organism that is not an animal, land plant, or fungus. Protists do not form a natural group, or clade, but are a polyphyletic grouping of several independent clades that evolved from the last eukaryotic common ancestor. Protists were historically regarded as a separate taxonomic kingdom known as Protista or Protoctista. With the advent of phylogenetic analysis and electron microscopy studies, the use of Protista as a formal taxon was gradually abandoned. In modern classifications, protists are spread across several eukaryotic clades called supergroups, such as Archaeplastida (photoautotrophs that includes land plants), SAR, Obazoa (which includes fungi and animals), Amoebozoa and Excavata. Protists represent an extremely large genetic and ecological diversity in all environments, including extreme habitats. Their diversity, larger than for all other eukaryotes, has only been discovered in recent decades through the study of environmental DNA and is still in the process of being fully described. They are present in all ecosystems as important components of the biogeochemical cycles and trophic webs. They exist abundantly and ubiquitously in a variety of forms that evolved multiple times independently, such as free-living algae, amoebae and slime moulds, or as important parasites. Together, they compose an amount of biomass that doubles that of animals. They exhibit varied types of nutrition (such as phototrophy, phagotrophy or osmotrophy), sometimes combining them (in mixotrophy). They present unique adaptations not present in multicellular animals, fungi or land plants. The study of protists is termed protistology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Protist";
        }
    }

    return nullptr;
}

string _Biology::Terms::Psychobiology(string text)
{
    string model = "llama3";
    string definition = "Behavioral neuroscience, also known as biological psychology, biopsychology, or psychobiology, is part of the broad, interdisciplinary field of neuroscience, with its primary focus being on the biological and neural substrates underlying human experiences and behaviors, as in our psychology. Derived from an earlier field known as physiological psychology, behavioral neuroscience applies the principles of biology to study the physiological, genetic, and developmental mechanisms of behavior in humans and other animals. Behavioral neuroscientists examine the biological bases of behavior through research that involves neuroanatomical substrates, environmental and genetic factors, effects of lesions and electrical stimulation, developmental processes, recording electrical activity, neurotransmitters, hormonal influences, chemical components, and the effects of drugs. Important topics of consideration for neuroscientific research in behavior include learning and memory, sensory processes, motivation and emotion, as well as genetic and molecular substrates concerning the biological bases of behavior. Subdivisions of behavioral neuroscience include the field of cognitive neuroscience, which emphasizes the biological processes underlying human cognition. Behavioral and cognitive neuroscience are both concerned with the neuronal and biological bases of psychology, with a particular emphasis on either cognition or behavior depending on the field.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Psychobiology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Regeneration(string text)
{
    string model = "llama3";
    string definition = "Regeneration in biology is the process of renewal, restoration, and tissue growth that makes genomes, cells, organisms, and ecosystems resilient to natural fluctuations or events that cause disturbance or damage. Every species is capable of regeneration, from bacteria to humans. Regeneration can either be complete where the new tissue is the same as the lost tissue, or incomplete after which the necrotic tissue becomes fibrotic. At its most elementary level, regeneration is mediated by the molecular processes of gene regulation and involves the cellular processes of cell proliferation, morphogenesis and cell differentiation. Regeneration in biology, however, mainly refers to the morphogenic processes that characterize the phenotypic plasticity of traits allowing multi-cellular organisms to repair and maintain the integrity of their physiological and morphological states. Above the genetic level, regeneration is fundamentally regulated by asexual cellular processes. Regeneration is different from reproduction. For example, hydra perform regeneration but reproduce by the method of budding. The regenerative process occurs in two multi-step phases: the preparation phase and the redevelopment phase. Regeneration begins with an amputation which triggers the first phase. Right after the amputation, migrating epidermal cells form a wound epithelium which thickens, through cell division, throughout the first phase to form a cap around the site of the wound. The cells underneath this cap then begin to rapidly divide and form a cone shaped end to the amputation known as a blastema. Included in the blastema are skin, muscle, and cartilage cells that de-differentiate and become similar to stem cells in that they can become multiple types of cells. Cells differentiate to the same purpose they originally filled meaning skin cells again become skin cells and muscle cells become muscles. These de-differentiated cells divide until enough cells are available at which point they differentiate again and the shape of the blastema begins to flatten out. It is at this point that the second phase begins, the redevelopment of the limb. In this stage, genes signal to the cells to differentiate themselves and the various parts of the limb are developed. The end result is a limb that looks and operates identically to the one that was lost, usually without any visual indication that the limb is newly generated. The hydra and the planarian flatworm have long served as model organisms for their highly adaptive regenerative capabilities. Once wounded, their cells become activated and restore the organs back to their pre-existing state. The Caudata (\"urodeles\"; salamanders and newts), an order of tailed amphibians, is possibly the most adept vertebrate group at regeneration, given their capability of regenerating limbs, tails, jaws, eyes and a variety of internal structures. The regeneration of organs is a common and widespread adaptive capability among metazoan creatures. In a related context, some animals are able to reproduce asexually through fragmentation, budding, or fission. A planarian parent, for example, will constrict, split in the middle, and each half generates a new end to form two clones of the original. Echinoderms (such as the sea star), crayfish, many reptiles, and amphibians exhibit remarkable examples of tissue regeneration. The case of autotomy, for example, serves as a defensive function as the animal detaches a limb or tail to avoid capture. After the limb or tail has been autotomized, cells move into action and the tissues will regenerate. In some cases a shed limb can itself regenerate a new individual. Limited regeneration of limbs occurs in most fishes and salamanders, and tail regeneration takes place in larval frogs and toads (but not adults). The whole limb of a salamander or a triton will grow repeatedly after amputation. In reptiles, chelonians, crocodilians and snakes are unable to regenerate lost parts, but many (not all) kinds of lizards, geckos and iguanas possess regeneration capacity in a high degree. Usually, it involves dropping a section of their tail and regenerating it as part of a defense mechanism. While escaping a predator, if the predator catches the tail, it will disconnect.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Regeneration";
        }
    }

    return nullptr;
}

string _Biology::Terms::Reproduction(string text)
{
    string model = "llama3";
    string definition = "Reproduction (or procreation or breeding) is the biological process by which new individual organisms - \"offspring\" - are produced from their \"parent\" or parents. There are two forms of reproduction: asexual and sexual. In asexual reproduction, an organism can reproduce without the involvement of another organism. Asexual reproduction is not limited to single-celled organisms. The cloning of an organism is a form of asexual reproduction. By asexual reproduction, an organism creates a genetically similar or identical copy of itself. The evolution of sexual reproduction is a major puzzle for biologists. The two-fold cost of sexual reproduction is that only 50% of organisms reproduce and organisms only pass on 50% of their genes. Sexual reproduction typically requires the sexual interaction of two specialized reproductive cells, called gametes, which contain half the number of chromosomes of normal cells and are created by meiosis, with typically a male fertilizing a female of the same species to create a fertilized zygote. This produces offspring organisms whose genetic characteristics are derived from those of the two parental organisms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reproduction";
        }
    }

    return nullptr;
}

string _Biology::Terms::ReproductiveBiology(string text)
{
    string model = "llama3";
    string definition = "Reproductive biology includes both sexual and asexual reproduction. Reproductive biology includes a wide number of fields: Reproductive systems, Endocrinology, Sexual development (Puberty), Sexual maturity, Reproduction, Fertility.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reproductive Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::RibonucleicAcid(string text)
{
    string model = "llama3";
    string definition = "Ribonucleic acid (RNA) is a polymeric molecule that is essential for most biological functions, either by performing the function itself (non-coding RNA) or by forming a template for the production of proteins (messenger RNA). RNA and deoxyribonucleic acid (DNA) are nucleic acids. The nucleic acids constitute one of the four major macromolecules essential for all known forms of life. RNA is assembled as a chain of nucleotides. Cellular organisms use messenger RNA (mRNA) to convey genetic information (using the nitrogenous bases of guanine, uracil, adenine, and cytosine, denoted by the letters G, U, A, and C) that directs synthesis of specific proteins. Many viruses encode their genetic information using an RNA genome. Some RNA molecules play an active role within cells by catalyzing biological reactions, controlling gene expression, or sensing and communicating responses to cellular signals. One of these active processes is protein synthesis, a universal function in which RNA molecules direct the synthesis of proteins on ribosomes. This process uses transfer RNA (tRNA) molecules to deliver amino acids to the ribosome, where ribosomal RNA (rRNA) then links amino acids together to form coded proteins. It has become widely accepted in science that early in the history of life on Earth, prior to the evolution of DNA and possibly of protein-based enzymes as well, an \"RNA world\" existed in which RNA served as both living organisms\' storage method for genetic information-a role fulfilled today by DNA, except in the case of RNA viruses-and potentially performed catalytic functions in cells-a function performed today by protein enzymes, with the notable and important exception of the ribosome, which is a ribozyme.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ribonucleic Acid";
        }
    }

    return nullptr;
}

string _Biology::Terms::Ribosome(string text)
{
    string model = "llama3";
    string definition = "Ribosomes are macromolecular machines, found within all cells, that perform biological protein synthesis (messenger RNA translation). Ribosomes link amino acids together in the order specified by the codons of messenger RNA molecules to form polypeptide chains. Ribosomes consist of two major components: the small and large ribosomal subunits. Each subunit consists of one or more ribosomal RNA molecules and many ribosomal proteins (r-proteins). The ribosomes and associated molecules are also known as the translational apparatus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ribosome";
        }
    }

    return nullptr;
}

string _Biology::Terms::RNA(string text)
{
    string model = "llama3";
    string definition = "Ribonucleic acid (RNA) is a polymeric molecule that is essential for most biological functions, either by performing the function itself (non-coding RNA) or by forming a template for the production of proteins (messenger RNA). RNA and deoxyribonucleic acid (DNA) are nucleic acids. The nucleic acids constitute one of the four major macromolecules essential for all known forms of life. RNA is assembled as a chain of nucleotides. Cellular organisms use messenger RNA (mRNA) to convey genetic information (using the nitrogenous bases of guanine, uracil, adenine, and cytosine, denoted by the letters G, U, A, and C) that directs synthesis of specific proteins. Many viruses encode their genetic information using an RNA genome. Some RNA molecules play an active role within cells by catalyzing biological reactions, controlling gene expression, or sensing and communicating responses to cellular signals. One of these active processes is protein synthesis, a universal function in which RNA molecules direct the synthesis of proteins on ribosomes. This process uses transfer RNA (tRNA) molecules to deliver amino acids to the ribosome, where ribosomal RNA (rRNA) then links amino acids together to form coded proteins. It has become widely accepted in science that early in the history of life on Earth, prior to the evolution of DNA and possibly of protein-based enzymes as well, an \"RNA world\" existed in which RNA served as both living organisms\' storage method for genetic information-a role fulfilled today by DNA, except in the case of RNA viruses-and potentially performed catalytic functions in cells-a function performed today by protein enzymes, with the notable and important exception of the ribosome, which is a ribozyme.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RNA";
        }
    }

    return nullptr;
}

string _Biology::Terms::RNAPolymerase(string text)
{
    string model = "llama3";
    string definition = "In molecular biology, RNA polymerase (abbreviated RNAP or RNApol), or more specifically DNA-directed/dependent RNA polymerase (DdRP), is an enzyme that catalyzes the chemical reactions that synthesize RNA from a DNA template. Using the enzyme helicase, RNAP locally opens the double-stranded DNA so that one strand of the exposed nucleotides can be used as a template for the synthesis of RNA, a process called transcription. A transcription factor and its associated transcription mediator complex must be attached to a DNA binding site called a promoter region before RNAP can initiate the DNA unwinding at that position. RNAP not only initiates RNA transcription, it also guides the nucleotides into position, facilitates attachment and elongation, has intrinsic proofreading and replacement capabilities, and termination recognition capability. In eukaryotes, RNAP can build chains as long as 2.4 million nucleotides. RNAP produces RNA that, functionally, is either for protein coding, i.e. messenger RNA (mRNA); or non-coding (so-called \"RNA genes\").";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RNA Polymerase";
        }
    }

    return nullptr;
}

string _Biology::Terms::Sclerenchyma(string text)
{
    string model = "llama3";
    string definition = "Sclerenchyma is the tissue which makes the plant hard and stiff. Sclerenchyma is the supporting tissue in plants. Two types of sclerenchyma cells exist: fibers cellular and sclereids. Their cell walls consist of cellulose, hemicellulose, and lignin. Sclerenchyma cells are the principal supporting cells in plant tissues that have ceased elongation. Sclerenchyma fibers are of great economic importance, since they constitute the source material for many fabrics (e.g. flax, hemp, jute, and ramie). Unlike the collenchyma, mature sclerenchyma is composed of dead cells with extremely thick cell walls (secondary walls) that make up to 90% of the whole cell volume.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sclerenchyma";
        }
    }

    return nullptr;
}

string _Biology::Terms::Seed(string text)
{
    string model = "llama3";
    string definition = "In botany, a seed is a plant embryo and nutrient reserve enclosed in a seed coat, a protective outer covering called a testa. More generally, the term \"seed\" means anything that can be sown, which may include seed and husk or tuber. Seeds are the product of the ripened ovule, after the embryo sac is fertilized by sperm from pollen, forming a zygote. The embryo within a seed develops from the zygote and grows within the mother plant to a certain size before growth is halted. The formation of the seed is the defining part of the process of reproduction in seed plants (spermatophytes). Other plants such as ferns, mosses and liverworts, do not have seeds and use water-dependent means to propagate themselves. Seed plants now dominate biological niches on land, from forests to grasslands both in hot and cold climates. In the flowering plants, the ovary ripens into a fruit which contains the seed and serves to disseminate it. Many structures commonly referred to as \"seeds\" are actually dry fruits. Sunflower seeds are sometimes sold commercially while still enclosed within the hard wall of the fruit, which must be split open to reach the seed. Different groups of plants have other modifications, the so-called stone fruits (such as the peach) have a hardened fruit layer (the endocarp) fused to and surrounding the actual seed. Nuts are the one-seeded, hard-shelled fruit of some plants with an indehiscent seed, such as an acorn or hazelnut.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Seed";
        }
    }

    return nullptr;
}

string _Biology::Terms::SelectiveBreeding(string text)
{
    string model = "llama3";
    string definition = "Selective breeding (also called artificial selection) is the process by which humans use animal breeding and plant breeding to selectively develop particular phenotypic traits (characteristics) by choosing which typically animal or plant males and females will sexually reproduce and have offspring together. Domesticated animals are known as breeds, normally bred by a professional breeder, while domesticated plants are known as varieties, cultigens, cultivars, or breeds. Two purebred animals of different breeds produce a crossbreed, and crossbred plants are called hybrids. Flowers, vegetables and fruit-trees may be bred by amateurs and commercial or non-commercial professionals: major crops are usually the provenance of the professionals. In animal breeding artificial selection is often combined with techniques such as inbreeding, linebreeding, and outcrossing. In plant breeding, similar methods are used. Charles Darwin discussed how selective breeding had been successful in producing change over time in his 1859 book, On the Origin of Species. Its first chapter discusses selective breeding and domestication of such animals as pigeons, cats, cattle, and dogs. Darwin used artificial selection as an analogy to propose and explain the theory of natural selection but distinguished the latter from the former as a separate process that is non-directed. The deliberate exploitation of selective breeding to produce desired results has become very common in agriculture and experimental biology. Selective breeding can be unintentional, for example, resulting from the process of human cultivation; and it may also produce unintended - desirable or undesirable - results. For example, in some grains, an increase in seed size may have resulted from certain ploughing practices rather than from the intentional selection of larger seeds. Most likely, there has been an interdependence between natural and artificial factors that have resulted in plant domestication.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Selective Breeding";
        }
    }

    return nullptr;
}

string _Biology::Terms::Sessility(string text)
{
    string model = "llama3";
    string definition = "Sessility is the biological property of an animal describing its lack of a means of self-locomotion. Sessile animals for which natural motility is absent are normally immobile. This is distinct from the botanical concept of sessility, which refers to an organism or biological structure attached directly by its base without a stalk. Sessile animals can move via external forces (such as water currents), but are usually permanently attached to something. Organisms such as corals lay down their own substrate from which they grow. Other animals organisms grow from a solid object, such as a rock, a dead tree trunk, or a human-made object such as a buoy or ship\'s hull.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sessility";
        }
    }

    return nullptr;
}

string _Biology::Terms::Sex(string text)
{
    string model = "llama3";
    string definition = "Sex is the biological trait that determines whether a sexually reproducing organism produces male or female gametes. During sexual reproduction, a male and a female gamete fuse to form a zygote, which develops into an offspring that inherits traits from each parent. By convention, organisms that produce smaller, more mobile gametes (spermatozoa, sperm) are called male, while organisms that produce larger, non-mobile gametes (ova, often called egg cells) are called female. An organism that produces both types of gamete is hermaphrodite. In non-hermaphroditic species, the sex of an individual is determined through one of several biological sex-determination systems. Most mammalian species have the XY sex-determination system, where the male usually carries an X and a Y chromosome (XY), and the female usually carries two X chromosomes (XX). Other chromosomal sex-determination systems in animals include the ZW system in birds, and the XO system in some insects. Various environmental systems include temperature-dependent sex determination in reptiles and crustaceans. The male and female of a species may be physically alike (sexual monomorphism) or have physical differences (sexual dimorphism). In sexually dimorphic species, including most birds and mammals, the sex of an individual is usually identified through observation of that individual\'s sexual characteristics. Sexual selection or mate choice can accelerate the evolution of differences between the sexes. The terms male and female typically do not apply in sexually undifferentiated species in which the individuals are isomorphic (look the same) and the gametes are isogamous (indistinguishable in size and shape), such as the green alga Ulva lactuca. Some kinds of functional differences between individuals, such as in fungi, may be referred to as mating types.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sex";
        }
    }

    return nullptr;
}

string _Biology::Terms::SexualReproduction(string text)
{
    string model = "llama3";
    string definition = "Sexual reproduction is a type of reproduction that involves a complex life cycle in which a gamete (haploid reproductive cells, such as a sperm or egg cell) with a single set of chromosomes combines with another gamete to produce a zygote that develops into an organism composed of cells with two sets of chromosomes (diploid). This is typical in animals, though the number of chromosome sets and how that number changes in sexual reproduction varies, especially among plants, fungi, and other eukaryotes. In placental mammals, sperm cells exit the penis through the male urethra and enter the vagina during copulation, while egg cells enter the uterus through the oviduct. Other vertebrates of both sexes possess a cloaca for the release of sperm or egg cells. Sexual reproduction is the most common life cycle in multicellular eukaryotes, such as animals, fungi and plants. Sexual reproduction also occurs in some unicellular eukaryotes. Sexual reproduction does not occur in prokaryotes, unicellular organisms without cell nuclei, such as bacteria and archaea. However, some processes in bacteria, including bacterial conjugation, transformation and transduction, may be considered analogous to sexual reproduction in that they incorporate new genetic information. Some proteins and other features that are key for sexual reproduction may have arisen in bacteria, but sexual reproduction is believed to have developed in an ancient eukaryotic ancestor. In eukaryotes, diploid precursor cells divide to produce haploid cells in a process called meiosis. In meiosis, DNA is replicated to produce a total of four copies of each chromosome. This is followed by two cell divisions to generate haploid gametes. After the DNA is replicated in meiosis, the homologous chromosomes pair up so that their DNA sequences are aligned with each other. During this period before cell divisions, genetic information is exchanged between homologous chromosomes in genetic recombination. Homologous chromosomes contain highly similar but not identical information, and by exchanging similar but not identical regions, genetic recombination increases genetic diversity among future generations. During sexual reproduction, two haploid gametes combine into one diploid cell known as a zygote in a process called fertilization. The nuclei from the gametes fuse, and each gamete contributes half of the genetic material of the zygote. Multiple cell divisions by mitosis (without change in the number of chromosomes) then develop into a multicellular diploid phase or generation. In plants, the diploid phase, known as the sporophyte, produces spores by meiosis. These spores then germinate and divide by mitosis to form a haploid multicellular phase, the gametophyte, which produces gametes directly by mitosis. This type of life cycle, involving alternation between two multicellular phases, the sexual haploid gametophyte and asexual diploid sporophyte, is known as alternation of generations. The evolution of sexual reproduction is considered paradoxical, because asexual reproduction should be able to outperform it as every young organism created can bear its own young. This implies that an asexual population has an intrinsic capacity to grow more rapidly with each generation. This 50% cost is a fitness disadvantage of sexual reproduction. The two-fold cost of sex includes this cost and the fact that any organism can only pass on 50% of its own genes to its offspring. However, one definite advantage of sexual reproduction is that it increases genetic diversity and impedes the accumulation of harmful genetic mutations. Sexual selection is a mode of natural selection in which some individuals out-reproduce others of a population because they are better at securing mates for sexual reproduction. It has been described as \"a powerful evolutionary force that does not exist in asexual populations\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sexual Reproduction";
        }
    }

    return nullptr;
}

string _Biology::Terms::Sociality(string text)
{
    string model = "llama3";
    string definition = "Sociality is the degree to which individuals in an animal population tend to associate in social groups (gregariousness) and form cooperative societies. Sociality is a survival response to evolutionary pressures. For example, when a mother wasp stays near her larvae in the nest, parasites are less likely to eat the larvae. Biologists suspect that pressures from parasites and other predators selected this behavior in wasps of the family Vespidae. This wasp behaviour evidences the most fundamental characteristic of animal sociality: parental investment. Parental investment is any expenditure of resources (time, energy, social capital) to benefit one\'s offspring. Parental investment detracts from a parent\'s capacity to invest in future reproduction and aid to kin (including other offspring). An animal that cares for its young but shows no other sociality traits is said to be subsocial. An animal that exhibits a high degree of sociality is called a social animal. The highest degree of sociality recognized by sociobiologists is eusociality. A eusocial taxon is one that exhibits overlapping adult generations, reproductive division of labor, cooperative care of young, and-in the most refined cases-a biological caste system. One characteristic of social animals is the relatively high degree of cognitive ability. Social mammal predators such as spotted hyena and lion have been found to be better than non-social predators such as leopard and tiger at solving problems that require the use of innovation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sociality";
        }
    }

    return nullptr;
}

string _Biology::Terms::Sociobiology(string text)
{
    string model = "llama3";
    string definition = "Sociobiology is a field of biology that aims to explain social behavior in terms of evolution. It draws from disciplines including psychology, ethology, anthropology, evolution, zoology, archaeology, and population genetics. Within the study of human societies, sociobiology is closely allied to evolutionary anthropology, human behavioral ecology, evolutionary psychology, and sociology. Sociobiology investigates social behaviors such as mating patterns, territorial fights, pack hunting, and the hive society of social insects. It argues that just as selection pressure led to animals evolving useful ways of interacting with the natural environment, so also it led to the genetic evolution of advantageous social behavior. While the term \"sociobiology\" originated at least as early as the 1940s; the concept did not gain major recognition until the publication of E. O. Wilson\'s book Sociobiology: The New Synthesis in 1975. The new field quickly became the subject of controversy. Critics, led by Richard Lewontin and Stephen Jay Gould, argued that genes played a role in human behavior, but that traits such as aggressiveness could be explained by social environment rather than by biology. Sociobiologists responded by pointing to the complex relationship between nature and nurture. Among sociobiologists, the controversy between laying weight to different levels of selection was settled between D.S. Wilson and E.O. Wilson in 2007.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sociobiology";
        }
    }

    return nullptr;
}

string _Biology::Terms::SoilBiology(string text)
{
    string model = "llama3";
    string definition = "Soil biology is the study of microbial and faunal activity and ecology in soil. Soil life, soil biota, soil fauna, or edaphon is a collective term that encompasses all organisms that spend a significant portion of their life cycle within a soil profile, or at the soil-litter interface. These organisms include earthworms, nematodes, protozoa, fungi, bacteria, different arthropods, as well as some reptiles (such as snakes), and species of burrowing mammals like gophers, moles and prairie dogs. Soil biology plays a vital role in determining many soil characteristics. The decomposition of organic matter by soil organisms has an immense influence on soil fertility, plant growth, soil structure, and carbon storage. As a relatively new science, much remains unknown about soil biology and its effect on soil ecosystems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Soil Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Species(string text)
{
    string model = "llama3";
    string definition = "A species is a population of organisms in which any two individuals of the appropriate sexes or mating types can produce fertile offspring, typically by sexual reproduction. It is the basic unit of classification and a taxonomic rank of an organism, as well as a unit of biodiversity. Other ways of defining species include their karyotype, DNA sequence, morphology, behaviour, or ecological niche. In addition, paleontologists use the concept of the chronospecies since fossil reproduction cannot be examined. The most recent rigorous estimate for the total number of species of eukaryotes is between 8 and 8.7 million. About 14% of these had been described by 2011. All species (except viruses) are given a two-part name, called a \"binomial\". The first part of a binomial is the genus to which the species belongs. The second part is called the specific name or the specific epithet (in botanical nomenclature, also sometimes in zoological nomenclature). For example, Boa constrictor is one of the species of the genus Boa, with constrictor being the species\' epithet. While the definitions given above may seem adequate at first glance, when looked at more closely they represent problematic species concepts. For example, the boundaries between closely related species become unclear with hybridisation, in a species complex of hundreds of similar microspecies, and in a ring species. Also, among organisms that reproduce only asexually, the concept of a reproductive species breaks down, and each clone is potentially a microspecies. Although none of these are entirely satisfactory definitions, and while the concept of species may not be a perfect model of life, it is still a useful tool to scientists and conservationists for studying life on Earth, regardless of the theoretical difficulties. If species were fixed and clearly distinct from one another, there would be no problem, but evolutionary processes cause species to change. This obliges taxonomists to decide, for example, when enough change has occurred to declare that a lineage should be divided into multiple chronospecies, or when populations have diverged to have enough distinct character states to be described as cladistic species. Species and higher taxa were seen from the time of Aristotle until the 18th century as categories that could be arranged in a hierarchy, the great chain of being. In the 19th century, biologists grasped that species could evolve given sufficient time. Charles Darwin\'s 1859 book On the Origin of Species explained how species could arise by natural selection. That understanding was greatly extended in the 20th century through genetics and population ecology. Genetic variability arises from mutations and recombination, while organisms themselves are mobile, leading to geographical isolation and genetic drift with varying selection pressures. Genes can sometimes be exchanged between species by horizontal gene transfer; new species can arise rapidly through hybridisation and polyploidy; and species may become extinct for a variety of reasons. Viruses are a special case, driven by a balance of mutation and selection, and can be treated as quasispecies.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Species";
        }
    }

    return nullptr;
}

string _Biology::Terms::Speciation(string text)
{
    string model = "llama3";
    string definition = "Speciation is the evolutionary process by which populations evolve to become distinct species. The biologist Orator F. Cook coined the term in 1906 for cladogenesis, the splitting of lineages, as opposed to anagenesis, phyletic evolution within lineages. Charles Darwin was the first to describe the role of natural selection in speciation in his 1859 book On the Origin of Species. He also identified sexual selection as a likely mechanism, but found it problematic. There are four geographic modes of speciation in nature, based on the extent to which speciating populations are isolated from one another: allopatric, peripatric, parapatric, and sympatric. Whether genetic drift is a minor or major contributor to speciation is the subject of much ongoing discussion. Rapid sympatric speciation can take place through polyploidy, such as by doubling of chromosome number; the result is progeny which are immediately reproductively isolated from the parent population. New species can also be created through hybridization, followed by reproductive isolation, if the hybrid is favoured by natural selection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Speciation";
        }
    }

    return nullptr;
}

string _Biology::Terms::Sperm(string text)
{
    string model = "llama3";
    string definition = "Sperm is the male reproductive cell, or gamete, in anisogamous forms of sexual reproduction (forms in which there is a larger, female reproductive cell and a smaller, male one). Animals produce motile sperm with a tail known as a flagellum, which are known as spermatozoa, while some red algae and fungi produce non-motile sperm cells, known as spermatia. Flowering plants contain non-motile sperm inside pollen, while some more basal plants like ferns and some gymnosperms have motile sperm. Sperm cells form during the process known as spermatogenesis, which in amniotes (reptiles and mammals) takes place in the seminiferous tubules of the testicles. This process involves the production of several successive sperm cell precursors, starting with spermatogonia, which differentiate into spermatocytes. The spermatocytes then undergo meiosis, reducing their chromosome number by half, which produces spermatids. The spermatids then mature and, in animals, construct a tail, or flagellum, which gives rise to the mature, motile sperm cell. This whole process occurs constantly and takes around 3 months from start to finish. Sperm cells cannot divide and have a limited lifespan, but after fusion with egg cells during fertilization, a new organism begins developing, starting as a totipotent zygote. The human sperm cell is haploid, so that its 23 chromosomes can join the 23 chromosomes of the female egg to form a diploid cell with 46 paired chromosomes. In mammals, sperm is stored in the epididymis and released through the penis in semen during ejaculation. ";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sperm";
        }
    }

    return nullptr;
}

string _Biology::Terms::Spore(string text)
{
    string model = "llama3";
    string definition = "In biology, a spore is a unit of sexual (in fungi) or asexual reproduction that may be adapted for dispersal and for survival, often for extended periods of time, in unfavourable conditions. Spores form part of the life cycles of many plants, algae, fungi and protozoa. They were thought to have appeared as early as the mid-late Ordovician period as an adaptation of early land plants. Bacterial spores are not part of a sexual cycle, but are resistant structures used for survival under unfavourable conditions. Myxozoan spores release amoeboid infectious germs (\"amoebulae\") into their hosts for parasitic infection, but also reproduce within the hosts through the pairing of two nuclei within the plasmodium, which develops from the amoebula. In plants, spores are usually haploid and unicellular and are produced by meiosis in the sporangium of a diploid sporophyte. In some rare cases, diploid spore is also produced in some algae, or fungi. Under favourable conditions, the spore can develop into a new organism using mitotic division, producing a multicellular gametophyte, which eventually goes on to produce gametes. Two gametes fuse to form a zygote, which develops into a new sporophyte. This cycle is known as alternation of generations. The spores of seed plants are produced internally, and the megaspores (formed within the ovules) and the microspores are involved in the formation of more complex structures that form the dispersal units, the seeds and pollen grains.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Spore";
        }
    }

    return nullptr;
}

string _Biology::Terms::StemCell(string text)
{
    string model = "llama3";
    string definition = "In multicellular organisms, stem cells are undifferentiated or partially differentiated cells that can change into various types of cells and proliferate indefinitely to produce more of the same stem cell. They are the earliest type of cell in a cell lineage. They are found in both embryonic and adult organisms, but they have slightly different properties in each. They are usually distinguished from progenitor cells, which cannot divide indefinitely, and precursor or blast cells, which are usually committed to differentiating into one cell type. In mammals, roughly 50 to 150 cells make up the inner cell mass during the blastocyst stage of embryonic development, around days 5-14. These have stem-cell capability. In vivo, they eventually differentiate into all of the body\'s cell types (making them pluripotent). This process starts with the differentiation into the three germ layers - the ectoderm, mesoderm and endoderm - at the gastrulation stage. However, when they are isolated and cultured in vitro, they can be kept in the stem-cell stage and are known as embryonic stem cells (ESCs). Adult stem cells are found in a few select locations in the body, known as niches, such as those in the bone marrow or gonads. They exist to replenish rapidly lost cell types and are multipotent or unipotent, meaning they only differentiate into a few cell types or one type of cell. In mammals, they include, among others, hematopoietic stem cells, which replenish blood and immune cells, basal cells, which maintain the skin epithelium, and mesenchymal stem cells, which maintain bone, cartilage, muscle and fat cells. Adult stem cells are a small minority of cells; they are vastly outnumbered by the progenitor cells and terminally differentiated cells that they differentiate into. Research into stem cells grew out of findings by Canadian biologists Ernest McCulloch, James Till and Andrew J. Becker at the University of Toronto and the Ontario Cancer Institute in the 1960s. As of 2016, the only established medical therapy using stem cells is hematopoietic stem cell transplantation, first performed in 1958 by French oncologist Georges Mathé. Since 1998 however, it has been possible to culture and differentiate human embryonic stem cells (in stem-cell lines). The process of isolating these cells has been controversial, because it typically results in the destruction of the embryo. Sources for isolating ESCs have been restricted in some European countries and Canada, but others such as the UK and China have promoted the research. Somatic cell nuclear transfer is a cloning method that can be used to create a cloned embryo for the use of its embryonic stem cells in stem cell therapy. In 2006, a Japanese team led by Shinya Yamanaka discovered a method to convert mature body cells back into stem cells. These were termed induced pluripotent stem cells (iPSCs).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stem Cell";
        }
    }

    return nullptr;
}

string _Biology::Terms::Steroid(string text)
{
    string model = "llama3";
    string definition = "A steroid is an organic compound with four fused rings (designated A, B, C, and D) arranged in a specific molecular configuration. Steroids have two principal biological functions: as important components of cell membranes that alter membrane fluidity; and as signaling molecules. Examples include the lipid cholesterol, sex hormones estradiol and testosterone,: 10-19  anabolic steroids, and the anti-inflammatory corticosteroid drug dexamethasone. Hundreds of steroids are found in fungi, plants, and animals. All steroids are manufactured in cells from the sterols lanosterol (opisthokonts) or cycloartenol (plants). Lanosterol and cycloartenol are derived from the cyclization of the triterpene squalene. Steroids are named after the steroid cholesterol which was first described in gall stones from Ancient Greek chole- \'bile\' and stereos \'solid\'. The steroid nucleus (core structure) is called gonane (cyclopentanoperhydrophenanthrene). It is typically composed of seventeen carbon atoms, bonded in four fused rings: three six-member cyclohexane rings (rings A, B and C in the first illustration) and one five-member cyclopentane ring (the D ring). Steroids vary by the functional groups attached to this four-ring core and by the oxidation state of the rings. Sterols are forms of steroids with a hydroxy group at position three and a skeleton derived from cholestane.: 1785f  Steroids can also be more radically modified, such as by changes to the ring structure, for example, cutting one of the rings. Cutting Ring B produces secosteroids one of which is vitamin D3.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Steroid";
        }
    }

    return nullptr;
}

string _Biology::Terms::Strain(string text)
{
    string model = "llama3";
    string definition = "In biology, a strain is a genetic variant, a subtype or a culture within a biological species. Strains are often seen as inherently artificial concepts, characterized by a specific intent for genetic isolation. This is most easily observed in microbiology where strains are derived from a single cell colony and are typically quarantined by the physical constraints of a Petri dish. Strains are also commonly referred to within virology, botany, and with rodents used in experimental studies.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Biology::Terms::StructuralBiology(string text)
{
    string model = "llama3";
    string definition = "Structural biology, as defined by the Journal of Structural Biology, deals with structural analysis of living material (formed, composed of, and/or maintained and refined by living cells) at every level of organization. Early structural biologists throughout the 19th and early 20th centuries were primarily only able to study structures to the limit of the naked eye\'s visual acuity and through magnifying glasses and light microscopes. In the 20th century, a variety of experimental techniques were developed to examine the 3D structures of biological molecules. The most prominent techniques are X-ray crystallography, nuclear magnetic resonance, and electron microscopy. Through the discovery of X-rays and its applications to protein crystals, structural biology was revolutionized, as now scientists could obtain the three-dimensional structures of biological molecules in atomic detail. Likewise, NMR spectroscopy allowed information about protein structure and dynamics to be obtained. Finally, in the 21st century, electron microscopy also saw a drastic revolution with the development of more coherent electron sources, aberration correction for electron microscopes, and reconstruction software that enabled the successful implementation of high resolution cryo-electron microscopy, thereby permitting the study of individual proteins and molecular complexes in three-dimensions at angstrom resolution. With the development of these three techniques, the field of structural biology expanded and also became a branch of molecular biology, biochemistry, and biophysics concerned with the molecular structure of biological macromolecules (especially proteins, made up of amino acids, RNA or DNA, made up of nucleotides, and membranes, made up of lipids), how they acquire the structures they have, and how alterations in their structures affect their function. This subject is of great interest to biologists because macromolecules carry out most of the functions of cells, and it is only by coiling into specific three-dimensional shapes that they are able to perform these functions. This architecture, the \"tertiary structure\" of molecules, depends in a complicated way on each molecule\'s basic composition, or \"primary structure.\" At lower resolutions, tools such as FIB-SEM tomography have allowed for greater understanding of cells and their organelles in 3-dimensions, and how each hierarchical level of various extracellular matrices contributes to function (for example in bone). In the past few years it has also become possible to predict highly accurate physical molecular models to complement the experimental study of biological structures. Computational techniques such as molecular dynamics simulations can be used in conjunction with empirical structure determination strategies to extend and study protein structure, conformation and function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Structural Biology";
        }
    }

    return nullptr;
}

//string _Biology::Terms::Symbiogenesis(string text)
//{
//    string model = "llama3";
//    string definition = "Symbiogenesis (endosymbiotic theory, or serial endosymbiotic theory) is the leading evolutionary theory of the origin of eukaryotic cells from prokaryotic organisms. The theory holds that mitochondria, plastids such as chloroplasts, and possibly other organelles of eukaryotic cells are descended from formerly free-living prokaryotes (more closely related to the Bacteria than to the Archaea) taken one inside the other in endosymbiosis. Mitochondria appear to be phylogenetically related to Rickettsiales bacteria, while chloroplasts are thought to be related to cyanobacteria. The idea that chloroplasts were originally independent organisms that merged into a symbiotic relationship with other one-celled organisms dates back to the 19th century, when it was espoused by researchers such as Andreas Schimper. The endosymbiotic theory was articulated in 1905 and 1910 by the Russian botanist Konstantin Mereschkowski, and advanced and substantiated with microbiological evidence by Lynn Margulis in 1967. Among the many lines of evidence supporting symbiogenesis are that mitochondria and plastids contain their own chromosomes and reproduce by splitting in two, parallel but separate from the sexual reproduction of the rest of the cell; that the chromosomes of some mitochondria and plastids are single circular DNA molecules similar to the circular chromosomes of bacteria; that the transport proteins called porins are found in the outer membranes of mitochondria and chloroplasts, and also bacterial cell membranes; and that cardiolipin is found only in the inner mitochondrial membrane and bacterial cell membranes.";
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
//            return "Symbiogenesis";
//        }
//    }
//
//    return nullptr;
//}

string _Biology::Terms::Symbiosis(string text)
{
    string model = "llama3";
    string definition = "Symbiosis is any type of a close and long-term biological interaction, between two organisms of different species. The two organisms, termed symbionts, can be either in a mutualistic, a commensalistic, or a parasitic relationship. In 1879, Heinrich Anton de Bary defined symbiosis as \"the living together of unlike organisms\". The term is sometimes more exclusively used in a restricted, mutualistic sense, where both symbionts contribute to each other\'s subsistence. Symbiosis can be obligatory, which means that one, or both of the symbionts depend on each other for survival, or facultative (optional), when they can also subsist independently. Symbiosis is also classified by physical attachment. Symbionts forming a single body live in conjunctive symbiosis, while all other arrangements are called disjunctive symbiosis. When one organism lives on the surface of another, such as head lice on humans, it is called ectosymbiosis; when one partner lives inside the tissues of another, such as Symbiodinium within coral, it is termed endosymbiosis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Symbiosis";
        }
    }

    return nullptr;
}

string _Biology::Terms::SyntheticBiology(string text)
{
    string model = "llama3";
    string definition = "Synthetic biology (SynBio) is a multidisciplinary field of science that focuses on living systems and organisms, and it applies engineering principles to develop new biological parts, devices, and systems or to redesign existing systems found in nature. It is a branch of science that encompasses a broad range of methodologies from various disciplines, such as biochemistry, biotechnology, biomaterials, material science/engineering, genetic engineering, molecular biology, molecular engineering, systems biology, membrane science, biophysics, chemical and biological engineering, electrical and computer engineering, control engineering and evolutionary biology. It includes designing and constructing biological modules, biological systems, and biological machines, or re-designing existing biological systems for useful purposes. Additionally, it is the branch of science that focuses on the new abilities of engineering into existing organisms to redesign them for useful purposes. In order to produce predictable and robust systems with novel functionalities that do not already exist in nature, it is also necessary to apply the engineering paradigm of systems design to biological systems. According to the European Commission, this possibly involves a molecular assembler based on biomolecular systems such as the ribosome.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Synthetic Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Systematics(string text)
{
    string model = "llama3";
    string definition = "Systematics is the study of the diversification of living forms, both past and present, and the relationships among living things through time. Relationships are visualized as evolutionary trees (synonyms: phylogenetic trees, phylogenies). Phylogenies have two components: branching order (showing group relationships, graphically represented in cladograms) and branch length (showing amount of evolution). Phylogenetic trees of species and higher taxa are used to study the evolution of traits (e.g., anatomical or molecular characteristics) and the distribution of organisms (biogeography). Systematics, in other words, is used to understand the evolutionary history of life on Earth. The word systematics is derived from the Latin word of Ancient Greek origin systema, which means systematic arrangement of organisms. Carl Linnaeus used \'Systema Naturae\' as the title of his book.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Systematics";
        }
    }

    return nullptr;
}

string _Biology::Terms::SystemsBiology(string text)
{
    string model = "llama3";
    string definition = "Systems biology is the computational and mathematical analysis and modeling of complex biological systems. It is a biology-based interdisciplinary field of study that focuses on complex interactions within biological systems, using a holistic approach (holism instead of the more traditional reductionism) to biological research. Particularly from the year 2000 onwards, the concept has been used widely in biology in a variety of contexts. The Human Genome Project is an example of applied systems thinking in biology which has led to new, collaborative ways of working on problems in the biological field of genetics. One of the aims of systems biology is to model and discover emergent properties, properties of cells, tissues and organisms functioning as a system whose theoretical description is only possible using techniques of systems biology. These typically involve metabolic networks or cell signaling networks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Systems Biology";
        }
    }

    return nullptr;
}

string _Biology::Terms::TCell(string text)
{
    string model = "llama3";
    string definition = "T cells are one of the important types of white blood cells of the immune system and play a central role in the adaptive immune response. T cells can be distinguished from other lymphocytes by the presence of a T-cell receptor (TCR) on their cell surface. T cells are born from hematopoietic stem cells, found in the bone marrow. Developing T cells then migrate to the thymus gland to develop (or mature). T cells derive their name from the thymus. After migration to the thymus, the precursor cells mature into several distinct types of T cells. T cell differentiation also continues after they have left the thymus. Groups of specific, differentiated T cell subtypes have a variety of important functions in controlling and shaping the immune response. One of these functions is immune-mediated cell death, and it is carried out by two major subtypes: CD8+ \"killer\" (cytotoxic) and CD4+ \"helper\" T cells. (These are named for the presence of the cell surface proteins CD8 or CD4.) CD8+ T cells, also known as \"killer T cells\", are cytotoxic - this means that they are able to directly kill virus-infected cells, as well as cancer cells. CD8+ T cells are also able to use small signalling proteins, known as cytokines, to recruit other types of cells when mounting an immune response. A different population of T cells, the CD4+ T cells, function as \"helper cells\". Unlike CD8+ killer T cells, the CD4+ helper T (TH) cells function by further activating memory B cells and cytotoxic T cells, which leads to a larger immune response. The specific adaptive immune response regulated by the TH cell depends on its subtype (such as T-helper1, T-helper2, T-helper17, regulatory T-cell), which is distinguished by the types of cytokines they secrete. Regulatory T cells are yet another distinct population of T cells that provide the critical mechanism of tolerance, whereby immune cells are able to distinguish invading cells from \"self\". This prevents immune cells from inappropriately reacting against one\'s own cells, known as an \"autoimmune\" response. For this reason, these regulatory T cells have also been called \"suppressor\" T cells. These same regulatory T cells can also be co-opted by cancer cells to prevent the recognition of, and an immune response against, tumor cells.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "T Cell";
        }
    }

    return nullptr;
}

string _Biology::Terms::Taxon(string text)
{
    string model = "llama3";
    string definition = "In biology, a taxon (back-formation from taxonomy; pl.: taxa) is a group of one or more populations of an organism or organisms seen by taxonomists to form a unit. Although neither is required, a taxon is usually known by a particular name and given a particular ranking, especially if and when it is accepted or becomes established. It is very common, however, for taxonomists to remain at odds over what belongs to a taxon and the criteria used for inclusion, especially in the context of rank-based (\"Linnaean\") nomenclature (much less so under phylogenetic nomenclature). If a taxon is given a formal scientific name, its use is then governed by one of the nomenclature codes specifying which scientific name is correct for a particular grouping. Initial attempts at classifying and ordering organisms (plants and animals) were presumably set forth in prehistoric times by hunter-gatherers, as suggested by the fairly sophisticated folk taxonomies. Much later, Aristotle, and later still, European scientists, like Magnol, Tournefort and Carl Linnaeus\'s system in Systema Naturae, 10th edition (1758),, as well as an unpublished work by Bernard and Antoine Laurent de Jussieu, contributed to this field. The idea of a unit-based system of biological classification was first made widely available in 1805 in the introduction of Jean-Baptiste Lamarck\'s Flore françoise, and Augustin Pyramus de Candolle\'s Principes élémentaires de botanique. Lamarck set out a system for the \"natural classification\" of plants. Since then, systematists continue to construct accurate classifications encompassing the diversity of life; today, a \"good\" or \"useful\" taxon is commonly taken to be one that reflects evolutionary relationships. Many modern systematists, such as advocates of phylogenetic nomenclature, use cladistic methods that require taxa to be monophyletic (all descendants of some ancestor). Therefore, their basic unit, the clade, is equivalent to the taxon, assuming that taxa should reflect evolutionary relationships. Similarly, among those contemporary taxonomists working with the traditional Linnean (binomial) nomenclature, few propose taxa they know to be paraphyletic. An example of a long-established taxon that is not also a clade is the class Reptilia, the reptiles; birds and mammals are the descendants of animals traditionally classed as reptiles, but neither is included in the Reptilia (birds are traditionally placed in the class Aves, and mammals in the class Mammalia).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Taxon";
        }
    }

    return nullptr;
}

string _Biology::Terms::Taxonomy(string text)
{
    string model = "llama3";
    string definition = "In biology, taxonomy is the scientific study of naming, defining (circumscribing) and classifying groups of biological organisms based on shared characteristics. Organisms are grouped into taxa (singular: taxon) and these groups are given a taxonomic rank; groups of a given rank can be aggregated to form a more inclusive group of higher rank, thus creating a taxonomic hierarchy. The principal ranks in modern use are domain, kingdom, phylum (division is sometimes used in botany in place of phylum), class, order, family, genus, and species. The Swedish botanist Carl Linnaeus is regarded as the founder of the current system of taxonomy, as he developed a ranked system known as Linnaean taxonomy for categorizing organisms and binomial nomenclature for naming organisms. With advances in the theory, data and analytical technology of biological systematics, the Linnaean system has transformed into a system of modern biological classification intended to reflect the evolutionary relationships among organisms, both living and extinct.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Taxonomy";
        }
    }

    return nullptr;
}

string _Biology::Terms::Telophase(string text)
{
    string model = "llama3";
    string definition = "Telophase is the final stage in both meiosis and mitosis in a eukaryotic cell. During telophase, the effects of prophase and prometaphase (the nucleolus and nuclear membrane disintegrating) are reversed. As chromosomes reach the cell poles, a nuclear envelope is re-assembled around each set of chromatids, the nucleoli reappear, and chromosomes begin to decondense back into the expanded chromatin that is present during interphase. The mitotic spindle is disassembled and remaining spindle microtubules are depolymerized. Telophase accounts for approximately 2% of the cell cycle\'s duration. Cytokinesis typically begins before late telophase and, when complete, segregates the two daughter nuclei between a pair of separate daughter cells. Telophase is primarily driven by the dephosphorylation of mitotic cyclin-dependent kinase (Cdk) substrates.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Telophase";
        }
    }

    return nullptr;
}

string _Biology::Terms::Testosterone(string text)
{
    string model = "llama3";
    string definition = "Testosterone is the primary male sex hormone and androgen in males. In humans, testosterone plays a key role in the development of male reproductive tissues such as testicles and prostate, as well as promoting secondary sexual characteristics such as increased muscle and bone mass, and the growth of body hair. It is associated with increased aggression, sex drive, dominance, courtship display, and a wide range of behavioral characteristics. In addition, testosterone in both sexes is involved in health and well-being, where it has a significant effect on overall mood, cognition, social and sexual behavior, metabolism and energy output, the cardiovascular system, and in the prevention of osteoporosis. Insufficient levels of testosterone in men may lead to abnormalities including frailty, accumulation of adipose fat tissue within the body, anxiety and depression, sexual performance issues, and bone loss. Excessive levels of testosterone in men may be associated with hyperandrogenism, higher risk of heart failure, increased mortality in men with prostate cancer, and male pattern baldness. Testosterone is a steroid hormone from the androstane class containing a ketone and a hydroxyl group at positions three and seventeen respectively. It is biosynthesized in several steps from cholesterol and is converted in the liver to inactive metabolites. It exerts its action through binding to and activation of the androgen receptor. In humans and most other vertebrates, testosterone is secreted primarily by the testicles of males and, to a lesser extent, the ovaries of females. On average, in adult males, levels of testosterone are about seven to eight times as great as in adult females. As the metabolism of testosterone in males is more pronounced, the daily production is about 20 times greater in men. Females are also more sensitive to the hormone. In addition to its role as a natural hormone, testosterone is used as a medication to treat hypogonadism and breast cancer. Since testosterone levels decrease as men age, testosterone is sometimes used in older men to counteract this deficiency. It is also used illicitly to enhance physique and performance, for instance in athletes. The World Anti-Doping Agency lists it as S1 Anabolic agent substance \"prohibited at all times\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Testosterone";
        }
    }

    return nullptr;
}

string _Biology::Terms::Thymine(string text)
{
    string model = "llama3";
    string definition = "Thymine (symbol T or Thy) is one of the four nucleotide bases in the nucleic acid of DNA that are represented by the letters G-C-A-T. The others are adenine, guanine, and cytosine. Thymine is also known as 5-methyluracil, a pyrimidine nucleobase. In RNA, thymine is replaced by the nucleobase uracil. Thymine was first isolated in 1893 by Albrecht Kossel and Albert Neumann from calf thymus glands, hence its name.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Thymine";
        }
    }

    return nullptr;
}

string _Biology::Terms::Tissue(string text)
{
    string model = "llama3";
    string definition = "In biology, tissue is an assembly of similar cells and their extracellular matrix from the same embryonic origin that together carry out a specific function. Tissues occupy a biological organizational level between cells and a complete organ. Accordingly, organs are formed by the functional grouping together of multiple tissues. Biological organisms follow this hierarchy: Cells < Tissue < Organ < Organ System < Organism. The English word \"tissue\" derives from the French word \"tissu\", the past participle of the verb tisser, \"to weave\". The study of tissues is known as histology or, in connection with disease, as histopathology. Xavier Bichat is considered as the \"Father of Histology\". Plant histology is studied in both plant anatomy and physiology. The classical tools for studying tissues are the paraffin block in which tissue is embedded and then sectioned, the histological stain, and the optical microscope. Developments in electron microscopy, immunofluorescence, and the use of frozen tissue-sections have enhanced the detail that can be observed in tissues. With these tools, the classical appearances of tissues can be examined in health and disease, enabling considerable refinement of medical diagnosis and prognosis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tissue";
        }
    }

    return nullptr;
}

string _Biology::Terms::PhenotypicTrait(string text)
{
    string model = "llama3";
    string definition = "A phenotypic trait, simply trait, or character state is a distinct variant of a phenotypic characteristic of an organism; it may be either inherited or determined environmentally, but typically occurs as a combination of the two. For example, having eye color is a character of an organism, while blue, brown and hazel versions of eye color are traits. The term trait is generally used in genetics, often to describe phenotypic expression of different combinations of alleles in different individual organisms within a single population, such as the famous purple vs. white flower coloration in Gregor Mendel\'s pea plants. By contrast, in systematics, the term character state is employed to describe features that represent fixed diagnostic differences among taxa, such as the absence of tails in great apes, relative to other primate groups.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phenotypic Trait";
        }
    }

    return nullptr;
}

string _Biology::Terms::Transcription(string text)
{
    string model = "llama3";
    string definition = "Transcription is the process of copying a segment of DNA into RNA. Some segments of DNA are transcribed into RNA molecules that can encode proteins, called messenger RNA (mRNA). Other segments of DNA are transcribed into RNA molecules called non-coding RNAs (ncRNAs). Both DNA and RNA are nucleic acids, which use base pairs of nucleotides as a complementary language. During transcription, a DNA sequence is read by an RNA polymerase, which produces a complementary, antiparallel RNA strand called a primary transcript. In virology, the term transcription is used when referring to mRNA synthesis from a viral RNA molecule. The genome of many RNA viruses is composed of negative-sense RNA which acts as a template for positive sense viral messenger RNA - a necessary step in the synthesis of viral proteins needed for viral replication. This process is catalyzed by a viral RNA dependent RNA polymerase.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transcription";
        }
    }

    return nullptr;
}

string _Biology::Terms::Translation(string text)
{
    string model = "llama3";
    string definition = "In biology, translation is the process in living cells in which proteins are produced using RNA molecules as templates. The generated protein is a sequence of amino acids. This sequence is determined by the sequence of nucleotides in the RNA. The nucleotides are considered three at a time. Each such triple results in addition of one specific amino acid to the protein being generated. The matching from nucleotide triple to amino acid is called the genetic code. The translation is performed by a large complex of functional RNA and proteins called ribosomes. The entire process is called gene expression. In translation, messenger RNA (mRNA) is decoded in a ribosome, outside the nucleus, to produce a specific amino acid chain, or polypeptide. The polypeptide later folds into an active protein and performs its functions in the cell. The ribosome facilitates decoding by inducing the binding of complementary transfer RNA (tRNA) anticodon sequences to mRNA codons. The tRNAs carry specific amino acids that are chained together into a polypeptide as the mRNA passes through and is \"read\" by the ribosome. Translation proceeds in three phases: 1. Initiation: The ribosome assembles around the target mRNA. The first tRNA is attached at the start codon. 2. Elongation: The last tRNA validated by the small ribosomal subunit (accommodation) transfers the amino acid. It carries to the large ribosomal subunit which binds it to one of the preceding admitted tRNA (transpeptidation). The ribosome then moves to the next mRNA codon to continue the process (translocation), creating an amino acid chain. 3. Termination: When a stop codon is reached, the ribosome releases the polypeptide. The ribosomal complex remains intact and moves on to the next mRNA to be translated. In prokaryotes (bacteria and archaea), translation occurs in the cytosol, where the large and small subunits of the ribosome bind to the mRNA. In eukaryotes, translation occurs in the cytoplasm or across the membrane of the endoplasmic reticulum in a process called co-translational translocation. In co-translational translocation, the entire ribosome/mRNA complex binds to the outer membrane of the rough endoplasmic reticulum (ER), and the new protein is synthesized and released into the ER; the newly created polypeptide can be stored inside the ER for future vesicle transport and secretion outside the cell, or immediately secreted. Many types of transcribed RNA, such as tRNA, ribosomal RNA, and small nuclear RNA, do not undergo a translation into proteins. Several antibiotics act by inhibiting translation. These include anisomycin, cycloheximide, chloramphenicol, tetracycline, streptomycin, erythromycin, and puromycin. Prokaryotic ribosomes have a different structure from that of eukaryotic ribosomes, and thus antibiotics can specifically target bacterial infections without any harm to a eukaryotic host\'s cells.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Translation";
        }
    }

    return nullptr;
}

string _Biology::Terms::TrophicLevel(string text)
{
    string model = "llama3";
    string definition = "The trophic level of an organism is the position it occupies in a food web. Within a food web, a food chain is a succession of organisms that eat other organisms and may, in turn, be eaten themselves. The trophic level of an organism is the number of steps it is from the start of the chain. A food web starts at trophic level 1 with primary producers such as plants, can move to herbivores at level 2, carnivores at level 3 or higher, and typically finish with apex predators at level 4 or 5. The path along the chain can form either a one-way flow or a part of a wider food \"web\". Ecological communities with higher biodiversity form more complex trophic paths.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Trophic Level";
        }
    }

    return nullptr;
}

string _Biology::Terms::Tumor(string text)
{
    string model = "llama3";
    string definition = "A neoplasm is a type of abnormal and excessive growth of tissue. The process that occurs to form or produce a neoplasm is called neoplasia. The growth of a neoplasm is uncoordinated with that of the normal surrounding tissue, and persists in growing abnormally, even if the original trigger is removed. This abnormal growth usually forms a mass, which may be called a tumour or tumor. ICD-10 classifies neoplasms into four main groups: benign neoplasms, in situ neoplasms, malignant neoplasms, and neoplasms of uncertain or unknown behavior. Malignant neoplasms are also simply known as cancers and are the focus of oncology. Prior to the abnormal growth of tissue, such as neoplasia, cells often undergo an abnormal pattern of growth, such as metaplasia or dysplasia. However, metaplasia or dysplasia does not always progress to neoplasia and can occur in other conditions as well. The word neoplasm is from Ancient Greek ????- neo \'new\' and π??σµα plasma \'formation, creation\'.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tumor";
        }
    }

    return nullptr;
}

string _Biology::Terms::Uncoating(string text)
{
    string model = "llama3";
    string definition = "The decomposition of a viral capsid. An informal and simplified description of the way a virus infectious material enters the cell, usually appearing in light science material for the general public.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Uncoating";
        }
    }

    return nullptr;
}

string _Biology::Terms::UnicellularOrganism(string text)
{
    string model = "llama3";
    string definition = "A unicellular organism, also known as a single-celled organism, is an organism that consists of a single cell, unlike a multicellular organism that consists of multiple cells. Organisms fall into two general categories: prokaryotic organisms and eukaryotic organisms. Most prokaryotes are unicellular and are classified into bacteria and archaea. Many eukaryotes are multicellular, but some are unicellular such as protozoa, unicellular algae, and unicellular fungi. Unicellular organisms are thought to be the oldest form of life, with early protocells possibly emerging 3.5-4.1 billion years ago. Although some prokaryotes live in colonies, they are not specialised cells with differing functions. These organisms live together, and each cell must carry out all life processes to survive. In contrast, even the simplest multicellular organisms have cells that depend on each other to survive. Most multicellular organisms have a unicellular life-cycle stage. Gametes, for example, are reproductive unicells for multicellular organisms. Additionally, multicellularity appears to have evolved independently many times in the history of life. Some organisms are partially unicellular, like Dictyostelium discoideum. Additionally, unicellular organisms can be multinucleate, like Caulerpa, Plasmodium, and Myxogastria.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Unicellular Organism";
        }
    }

    return nullptr;
}

string _Biology::Terms::Uracil(string text)
{
    string model = "llama3";
    string definition = "Uracil (symbol U or Ura) is one of the four nucleotide bases in the nucleic acid RNA. The others are adenine (A), cytosine (C), and guanine (G). In RNA, uracil binds to adenine via two hydrogen bonds. In DNA, the uracil nucleobase is replaced by thymine (T). Uracil is a demethylated form of thymine. Uracil is a common and naturally occurring pyrimidine derivative. The name \"uracil\" was coined in 1885 by the German chemist Robert Behrend, who was attempting to synthesize derivatives of uric acid. Originally discovered in 1900 by Alberto Ascoli, it was isolated by hydrolysis of yeast nuclein; it was also found in bovine thymus and spleen, herring sperm, and wheat germ. It is a planar, unsaturated compound that has the ability to absorb light. Uracil that was formed extraterrestrially has been detected in the Murchison meteorite, in a near-Earth asteroid, and possibly on the surface of the moon Titan. It has been synthesized under cold laboratory conditions similar to outer space, from pyrimidine embedded in water ice and exposed to ultraviolet light.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Uracil";
        }
    }

    return nullptr;
}

string _Biology::Terms::Urea(string text)
{
    string model = "llama3";
    string definition = "Urea, also called carbamide (because it is a diamide of carbonic acid), is an organic compound with chemical formula CO(NH2)2. This amide has two amino groups (-NH2) joined by a carbonyl functional group (-C(=O)-). It is thus the simplest amide of carbamic acid. Urea serves an important role in the cellular metabolism of nitrogen-containing compounds by animals and is the main nitrogen-containing substance in the urine of mammals. It is a colorless, odorless solid, highly soluble in water, and practically non-toxic (LD50 is 15 g/kg for rats). Dissolved in water, it is neither acidic nor alkaline. The body uses it in many processes, most notably nitrogen excretion. The liver forms it by combining two ammonia molecules (NH3) with a carbon dioxide (CO2) molecule in the urea cycle. Urea is widely used in fertilizers as a source of nitrogen (N) and is an important raw material for the chemical industry. In 1828, Friedrich Wohler discovered that urea can be produced from inorganic starting materials, which was an important conceptual milestone in chemistry. This showed for the first time that a substance previously known only as a byproduct of life could be synthesized in the laboratory without biological starting materials, thereby contradicting the widely held doctrine of vitalism, which stated that only living organisms could produce the chemicals of life.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Urea";
        }
    }

    return nullptr;
}

string _Biology::Terms::Urine(string text)
{
    string model = "llama3";
    string definition = "Urine is a liquid by-product of metabolism in humans and in many other animals. In placental mammals, urine flows from the kidneys through the ureters to the urinary bladder and exits the urethra through the penis or vulva during urination. In other vertebrates, urine is excreted through the cloaca. Urine contains water-soluble by-products of cellular metabolism that are rich in nitrogen and must be cleared from the bloodstream, such as urea, uric acid, and creatinine. A urinalysis can detect nitrogenous wastes of the mammalian body. Urine plays an important role in the earth\'s nitrogen cycle. In balanced ecosystems, urine fertilizes the soil and thus helps plants to grow. Therefore, urine can be used as a fertilizer. Some animals use it to mark their territories. Historically, aged or fermented urine (known as lant) was also used for gunpowder production, household cleaning, tanning of leather and dyeing of textiles. Human urine and feces are collectively referred to as human waste or human excreta, and are managed via sanitation systems. Livestock urine and feces also require proper management if the livestock population density is high.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Urine";
        }
    }

    return nullptr;
}

string _Biology::Terms::Uterus(string text)
{
    string model = "llama3";
    string definition = "The uterus or womb (/wu?m/) is the organ in the reproductive system of most female mammals, including humans, that accommodates the embryonic and fetal development of one or more fertilized eggs until birth. The uterus is a hormone-responsive sex organ that contains glands in its lining that secrete uterine milk for embryonic nourishment. (The term uterus is also applied to analogous structures in some non-mammalian animals.) In the human, the lower end of the uterus is a narrow part known as the isthmus that connects to the cervix, the anterior gateway leading to the vagina. The upper end, the body of the uterus, is connected to the fallopian tubes at the uterine horns; the rounded part, the fundus, is above the openings to the fallopian tubes. The connection of the uterine cavity with a fallopian tube is called the uterotubal junction. The fertilized egg is carried to the uterus along the fallopian tube. It will have divided on its journey to form a blastocyst that will implant itself into the lining of the uterus - the endometrium, where it will receive nutrients and develop into the embryo proper, and later fetus, for the duration of the pregnancy. In the human embryo, the uterus develops from the paramesonephric ducts, which fuse into the single organ known as a simplex uterus. The uterus has different forms in many other animals and in some it exists as two separate uteri known as a duplex uterus. In medicine and related professions, the term uterus is consistently used, while the Germanic-derived term womb is commonly used in everyday contexts. Events occurring within the uterus are described with the term in utero.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Uterus";
        }
    }

    return nullptr;
}

string _Biology::Terms::Vacuole(string text)
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

string _Biology::Terms::Vasodilation(string text)
{
    string model = "llama3";
    string definition = "Vasodilation, also known as vasorelaxation, is the widening of blood vessels. It results from relaxation of smooth muscle cells within the vessel walls, in particular in the large veins, large arteries, and smaller arterioles. Blood vessel walls are composed of endothelial tissue and a basal membrane lining the lumen of the vessel, concentric smooth muscle layers on top of endothelial tissue, and an adventitia over the smooth muscle layers. Relaxation of the smooth muscle layer allows the blood vessel to dilate, as it is held in a semi-constricted state by sympathetic nervous system activity. Vasodilation is the opposite of vasoconstriction, which is the narrowing of blood vessels. When blood vessels dilate, the flow of blood is increased due to a decrease in vascular resistance and increase in cardiac output. Vascular resistance is the amount of force circulating blood must overcome in order to allow perfusion of body tissues. Narrow vessels create more vascular resistance, while dilated vessels decrease vascular resistance. Vasodilation acts to increase cardiac output by decreasing afterload, -one of the four determinants of cardiac output. By expanding available area for blood to circulate, vasodilation decreases blood pressure. The response may be intrinsic (due to local processes in the surrounding tissue) or extrinsic (due to hormones or the nervous system). In addition, the response may be localized to a specific organ (depending on the metabolic needs of a particular tissue, as during strenuous exercise), or it may be systemic (seen throughout the entire systemic circulation). Endogenous substances and drugs that cause vasodilation are termed vasodilators. Many of these substances are neurotransmitters released by perivascular nerves of the autonomic nervous system Baroreceptors sense blood pressure and allow adaptation via the mechanisms of vasoconstriction or vasodilation to maintain homeostasis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vasodilation";
        }
    }

    return nullptr;
}

string _Biology::Terms::DiseaseVector(string text)
{
    string model = "llama3";
    string definition = "In epidemiology, a disease vector is any living agent that carries and transmits an infectious pathogen such as a parasite or microbe, to another living organism. Agents regarded as vectors are mostly blood-sucking insects such as mosquitoes. The first major discovery of a disease vector came from Ronald Ross in 1897, who discovered the malaria pathogen when he dissected the stomach tissue of a mosquito.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Disease Vector";
        }
    }

    return nullptr;
}

string _Biology::Terms::VegetativeReproduction(string text)
{
    string model = "llama3";
    string definition = "Vegetative reproduction (also known as vegetative propagation, vegetative multiplication or cloning) is a form of asexual reproduction occurring in plants in which a new plant grows from a fragment or cutting of the parent plant or specialized reproductive structures, which are sometimes called vegetative propagules. Many plants naturally reproduce this way, but it can also be induced artificially. Horticulturists have developed asexual propagation techniques that use vegetative propagules to replicate plants. Success rates and difficulty of propagation vary greatly. Monocotyledons typically lack a vascular cambium, making them more challenging to propagate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vegetative Reproduction";
        }
    }

    return nullptr;
}

string _Biology::Terms::Vertebrate(string text)
{
    string model = "llama3";
    string definition = " are animals with a backbone or spine, consisting of vertebrae and intervertebral discs, and a cranium, or skull. The vertebrae are irregular bones, and the intervertebral discs are of fibrocartilage. The vertebral column surrounds and protects the spinal cord, while the cranium protects the brain. The vertebrates make up the subphylum Vertebrata with some 65,000 species, by far the largest grouping in the phylum Chordata. They evolved in the Cambrian period, over 500 million years ago. The vertebrates include mammals, birds, amphibians, and various classes of reptiles and fish. Classes of fish include the jawless Agnatha, and the jawed Gnathostomata. The jawed fish include both the cartilaginous fish and the bony fish. Bony fish include the lobe-finned fish, which gave rise to the tetrapods, the animals with four limbs. Vertebrates make up less than five percent of all described animal species.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vertebrate";
        }
    }

    return nullptr;
}

string _Biology::Terms::Vesicle(string text)
{
    string model = "llama3";
    string definition = "In cell biology, a vesicle is a structure within or outside a cell, consisting of liquid or cytoplasm enclosed by a lipid bilayer. Vesicles form naturally during the processes of secretion (exocytosis), uptake (endocytosis), and the transport of materials within the plasma membrane. Alternatively, they may be prepared artificially, in which case they are called liposomes (not to be confused with lysosomes). If there is only one phospholipid bilayer, the vesicles are called unilamellar liposomes; otherwise they are called multilamellar liposomes. The membrane enclosing the vesicle is also a lamellar phase, similar to that of the plasma membrane, and intracellular vesicles can fuse with the plasma membrane to release their contents outside the cell. Vesicles can also fuse with other organelles within the cell. A vesicle released from the cell is known as an extracellular vesicle. Vesicles perform a variety of functions. Because it is separated from the cytosol, the inside of the vesicle can be made to be different from the cytosolic environment. For this reason, vesicles are a basic tool used by the cell for organizing cellular substances. Vesicles are involved in metabolism, transport, buoyancy control, and temporary storage of food and enzymes. They can also act as chemical reaction chambers. The 2013 Nobel Prize in Physiology or Medicine was shared by James Rothman, Randy Schekman and Thomas Südhof for their roles in elucidating (building upon earlier research, some of it by their mentors) the makeup and function of cell vesicles, especially in yeasts and in humans, including information on each vesicle\'s parts and how they are assembled. Vesicle dysfunction is thought to contribute to Alzheimer\'s disease, diabetes, some hard-to-treat cases of epilepsy, some cancers and immunological disorders and certain neurovascular conditions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vesicle";
        }
    }

    return nullptr;
}

string _Biology::Terms::Vestigiality(string text)
{
    string model = "llama3";
    string definition = "Vestigiality is the retention, during the process of evolution, of genetically determined structures or attributes that have lost some or all of the ancestral function in a given species. Assessment of the vestigiality must generally rely on comparison with homologous features in related species. The emergence of vestigiality occurs by normal evolutionary processes, typically by loss of function of a feature that is no longer subject to positive selection pressures when it loses its value in a changing environment. The feature may be selected against more urgently when its function becomes definitively harmful, but if the lack of the feature provides no advantage, and its presence provides no disadvantage, the feature may not be phased out by natural selection and persist across species. Examples of vestigial structures (also called degenerate, atrophied, or rudimentary organs) are the loss of functional wings in island-dwelling birds; the human vomeronasal organ; and the hindlimbs of the snake and whale.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vestigiality";
        }
    }

    return nullptr;
}

string _Biology::Terms::Virology(string text)
{
    string model = "llama3";
    string definition = "Virology is the scientific study of biological viruses. It is a subfield of microbiology that focuses on their detection, structure, classification and evolution, their methods of infection and exploitation of host cells for reproduction, their interaction with host organism physiology and immunity, the diseases they cause, the techniques to isolate and culture them, and their use in research and therapy. The identification of the causative agent of tobacco mosaic disease (TMV) as a novel pathogen by Martinus Beijerinck (1898) is now acknowledged as being the official beginning of the field of virology as a discipline distinct from bacteriology. He realized the source was neither a bacterial nor a fungal infection, but something completely different. Beijerinck used the word \"virus\" to describe the mysterious agent in his \'contagium vivum fluidum\' (\'contagious living fluid\'). Rosalind Franklin proposed the full structure of the tobacco mosaic virus in 1955. One main motivation for the study of viruses is because they cause many infectious diseases of plants and animals. The study of the manner in which viruses cause disease is viral pathogenesis. The degree to which a virus causes disease is its virulence. These fields of study are called plant virology, animal virology and human or medical virology. Virology began when there were no methods for propagating or visualizing viruses or specific laboratory tests for viral infections. The methods for separating viral nucleic acids (RNA and DNA) and proteins, which are now the mainstay of virology, did not exist. Now there are many methods for observing the structure and functions of viruses and their component parts. Thousands of different viruses are now known about and virologists often specialize in either the viruses that infect plants, or bacteria and other microorganisms, or animals. Viruses that infect humans are now studied by medical virologists. Virology is a broad subject covering biology, health, animal welfare, agriculture and ecology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Virology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Virus(string text)
{
    string model = "llama3";
    string definition = "A virus is a submicroscopic infectious agent that replicates only inside the living cells of an organism. Viruses infect all life forms, from animals and plants to microorganisms, including bacteria and archaea. Viruses are found in almost every ecosystem on Earth and are the most numerous type of biological entity. Since Dmitri Ivanovsky\'s 1892 article describing a non-bacterial pathogen infecting tobacco plants and the discovery of the tobacco mosaic virus by Martinus Beijerinck in 1898,: 4  more than 11,000 of the millions of virus species have been described in detail. The study of viruses is known as virology, a subspeciality of microbiology. When infected, a host cell is often forced to rapidly produce thousands of copies of the original virus. When not inside an infected cell or in the process of infecting a cell, viruses exist in the form of independent viral particles, or virions, consisting of (i) genetic material, i.e., long molecules of DNA or RNA that encode the structure of the proteins by which the virus acts; (ii) a protein coat, the capsid, which surrounds and protects the genetic material; and in some cases (iii) an outside envelope of lipids. The shapes of these virus particles range from simple helical and icosahedral forms to more complex structures. Most virus species have virions too small to be seen with an optical microscope and are one-hundredth the size of most bacteria. The origins of viruses in the evolutionary history of life are still unclear. Some viruses may have evolved from plasmids, which are pieces of DNA that can move between cells. Other viruses may have evolved from bacteria. In evolution, viruses are an important means of horizontal gene transfer, which increases genetic diversity in a way analogous to sexual reproduction. Viruses are considered by some biologists to be a life form, because they carry genetic material, reproduce, and evolve through natural selection, although they lack some key characteristics, such as cell structure, that are generally considered necessary criteria for defining life. Because they possess some but not all such qualities, viruses have been described as \"organisms at the edge of life\" and as replicators. Viruses spread in many ways. One transmission pathway is through disease-bearing organisms known as vectors: for example, viruses are often transmitted from plant to plant by insects that feed on plant sap, such as aphids; and viruses in animals can be carried by blood-sucking insects. Many viruses spread in the air by coughing and sneezing, including influenza viruses, SARS-CoV-2, chickenpox, smallpox, and measles. Norovirus and rotavirus, common causes of viral gastroenteritis, are transmitted by the faecal-oral route, passed by hand-to-mouth contact or in food or water. The infectious dose of norovirus required to produce infection in humans is fewer than 100 particles. HIV is one of several viruses transmitted through sexual contact and by exposure to infected blood. The variety of host cells that a virus can infect is called its host range: this is narrow for viruses specialized to infect only a few species, or broad for viruses capable of infecting many. Viral infections in animals provoke an immune response that usually eliminates the infecting virus. Immune responses can also be produced by vaccines, which confer an artificially acquired immunity to the specific viral infection. Some viruses, including those that cause HIV/AIDS, HPV infection, and viral hepatitis, evade these immune responses and result in chronic infections. Several classes of antiviral drugs have been developed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Virus";
        }
    }

    return nullptr;
}

string _Biology::Terms::WhiteBloodCell(string text)
{
    string model = "llama3";
    string definition = "White blood cells (scientific name leukocytes), also called immune cells or immunocytes, are cells of the immune system that are involved in protecting the body against both infectious disease and foreign invaders. White blood cells are generally larger than red blood cells. They include three main subtypes: granulocytes, lymphocytes and monocytes. All white blood cells are produced and derived from multipotent cells in the bone marrow known as hematopoietic stem cells. Leukocytes are found throughout the body, including the blood and lymphatic system. All white blood cells have nuclei, which distinguishes them from the other blood cells, the anucleated red blood cells (RBCs) and platelets. The different white blood cells are usually classified by cell lineage (myeloid cells or lymphoid cells). White blood cells are part of the body\'s immune system. They help the body fight infection and other diseases. Types of white blood cells are granulocytes (neutrophils, eosinophils, and basophils), and agranulocytes (monocytes, and lymphocytes (T cells and B cells)). Myeloid cells (myelocytes) include neutrophils, eosinophils, mast cells, basophils, and monocytes. Monocytes are further subdivided into dendritic cells and macrophages. Monocytes, macrophages, and neutrophils are phagocytic. Lymphoid cells (lymphocytes) include T cells (subdivided into helper T cells, memory T cells, cytotoxic T cells), B cells (subdivided into plasma cells and memory B cells), and natural killer cells. Historically, white blood cells were classified by their physical characteristics (granulocytes and agranulocytes), but this classification system is less frequently used now. Produced in the bone marrow, white blood cells defend the body against infections and disease. An excess of white blood cells is usually due to infection or inflammation. Less commonly, a high white blood cell count could indicate certain blood cancers or bone marrow disorders. The number of leukocytes in the blood is often an indicator of disease, and thus the white blood cell count is an important subset of the complete blood count. The normal white cell count is usually between 4 * 109/L and 1.1 * 1010/L. In the US, this is usually expressed as 4,000 to 11,000 white blood cells per microliter of blood. White blood cells make up approximately 1% of the total blood volume in a healthy adult, making them substantially less numerous than the red blood cells at 40% to 45%. However, this 1% of the blood makes a large difference to health, because immunity depends on it. An increase in the number of leukocytes over the upper limits is called leukocytosis. It is normal when it is part of healthy immune responses, which happen frequently. It is occasionally abnormal, when it is neoplastic or autoimmune in origin. A decrease below the lower limit is called leukopenia. This indicates a weakened immune system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "White Blood Cell";
        }
    }

    return nullptr;
}

string _Biology::Terms::WholeGenomeSequencing(string text)
{
    string model = "llama3";
    string definition = "Whole genome sequencing (WGS) is the process of determining the entirety, or nearly the entirety, of the DNA sequence of an organism\'s genome at a single time. This entails sequencing all of an organism\'s chromosomal DNA as well as DNA contained in the mitochondria and, for plants, in the chloroplast. Whole genome sequencing has largely been used as a research tool, but was being introduced to clinics in 2014. In the future of personalized medicine, whole genome sequence data may be an important tool to guide therapeutic intervention. The tool of gene sequencing at SNP level is also used to pinpoint functional variants from association studies and improve the knowledge available to researchers interested in evolutionary biology, and hence may lay the foundation for predicting disease susceptibility and drug response. Whole genome sequencing should not be confused with DNA profiling, which only determines the likelihood that genetic material came from a particular individual or group, and does not contain additional information on genetic relationships, origin or susceptibility to specific diseases. In addition, whole genome sequencing should not be confused with methods that sequence specific subsets of the genome - such methods include whole exome sequencing (1-2% of the genome) or SNP genotyping (< 0.1% of the genome).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Whole Genome Sequencing";
        }
    }

    return nullptr;
}

string _Biology::Terms::Wood(string text)
{
    string model = "llama3";
    string definition = "Wood is a structural tissue/material found as xylem in the stems and roots of trees and other woody plants. It is an organic material - a natural composite of cellulosic fibers that are strong in tension and embedded in a matrix of lignin that resists compression. Wood is sometimes defined as only the secondary xylem in the stems of trees, or more broadly to include the same type of tissue elsewhere, such as in the roots of trees or shrubs. In a living tree, it performs a mechanical-support function, enabling woody plants to grow large or to stand up by themselves. It also conveys water and nutrients among the leaves, other growing tissues, and the roots. Wood may also refer to other plant materials with comparable properties, and to material engineered from wood, woodchips, or fibers. Wood has been used for thousands of years for fuel, as a construction material, for making tools and weapons, furniture and paper. More recently it emerged as a feedstock for the production of purified cellulose and its derivatives, such as cellophane and cellulose acetate. As of 2020, the growing stock of forests worldwide was about 557 billion cubic meters. As an abundant, carbon-neutral renewable resource, woody materials have been of intense interest as a source of renewable energy. In 2008, approximately 3.97 billion cubic meters of wood were harvested. Dominant uses were for furniture and building construction. Wood is scientifically studied and researched through the discipline of wood science, which was initiated since the beginning of the 20th century.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Wood";
        }
    }

    return nullptr;
}

string _Biology::Terms::Xanthophyll(string text)
{
    string model = "llama3";
    string definition = "Xanthophylls (originally phylloxanthins) are yellow pigments that occur widely in nature and form one of two major divisions of the carotenoid group; the other division is formed by the carotenes. due to their formation of the yellow band seen in early chromatography of leaf pigments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Xanthophyll";
        }
    }

    return nullptr;
}

string _Biology::Terms::Xylem(string text)
{
    string model = "llama3";
    string definition = "Xylem is one of the two types of transport tissue in vascular plants, the other being phloem; both of these are part of the vascular bundle. The basic function of the xylem is to transport water upward from the roots to parts of the plants such as stems and leaves, but it also transports nutrients. The word xylem is derived from the Ancient Greek word, (xylon), meaning \"wood\"; the best-known xylem tissue is wood, though it is found throughout a plant. The term was introduced by Carl Nägeli in 1858.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Xylem";
        }
    }

    return nullptr;
}

string _Biology::Terms::Yolk(string text)
{
    string model = "llama3";
    string definition = "Among animals which produce eggs, the yolk, also known as the vitellus) is the nutrient-bearing portion of the egg whose primary function is to supply food for the development of the embryo. Some types of egg contain no yolk, for example because they are laid in situations where the food supply is sufficient (such as in the body of the host of a parasitoid) or because the embryo develops in the parent\'s body, which supplies the food, usually through a placenta. Reproductive systems in which the mother\'s body supplies the embryo directly are said to be matrotrophic; those in which the embryo is supplied by yolk are said to be lecithotrophic. In many species, such as all birds, and most reptiles and insects, the yolk takes the form of a special storage organ constructed in the reproductive tract of the mother. In many other animals, especially very small species such as some fish and invertebrates, the yolk material is not in a special organ, but inside the egg cell. As stored food, yolks are often rich in vitamins, minerals, lipids and proteins. The proteins function partly as food in their own right, and partly in regulating the storage and supply of the other nutrients. For example, in some species the amount of yolk in an egg cell affects the developmental processes that follow fertilization. The yolk is not living cell material like protoplasm, but largely passive material, that is to say deutoplasm. The food material and associated control structures are supplied during oogenesis. Some of the material is stored more or less in the form in which the maternal body supplied it, partly as processed by dedicated non-germ tissues in the egg, while part of the biosynthetic processing into its final form happens in the oocyte itself. Apart from animals, other organisms, like algae, especially in the oogamous, can also accumulate resources in their female gametes. In gymnosperms, the remains of the female gametophyte serve also as food supply, and in flowering plants, the endosperm.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Yolk";
        }
    }

    return nullptr;
}

string _Biology::Terms::Zoology(string text)
{
    string model = "llama3";
    string definition = "Zoology is the scientific study of animals. Its studies include the structure, embryology, classification, habits, and distribution of all animals, both living and extinct, and how they interact with their ecosystems. Zoology is one of the primary branches of biology. Although humans have always been interested in the natural history of the animals they saw around them, and used this knowledge to domesticate certain species, the formal study of zoology can be said to have originated with Aristotle. He viewed animals as living organisms, studied their structure and development, and considered their adaptations to their surroundings and the function of their parts. Modern zoology has its origins during the Renaissance and early modern period, with Carl Linnaeus, Antonie van Leeuwenhoek, Robert Hooke, Charles Darwin, Gregor Mendel and many others. The study of animals has largely moved on to deal with form and function, adaptations, relationships between groups, behaviour and ecology. Zoology has increasingly been subdivided into disciplines such as classification, physiology, biochemistry and evolution. With the discovery of the structure of DNA by Francis Crick and James Watson in 1953, the realm of molecular biology opened up, leading to advances in cell biology, developmental biology and molecular genetics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zoology";
        }
    }

    return nullptr;
}

string _Biology::Terms::Zooplankton(string text)
{
    string model = "llama3";
    string definition = "Zooplankton are the heterotrophic component of the planktonic community (the \"zoo-\" prefix comes from having to consume other organisms to thrive. Plankton are aquatic organisms that are unable to swim effectively against currents. Consequently, they drift or are carried along by currents in the ocean, or by currents in seas, lakes or rivers. Zooplankton can be contrasted with phytoplankton (cyanobacteria and microalgae), which are the plant-like component of the plankton community Zooplankton are heterotrophic (other-feeding), whereas phytoplankton are autotrophic (self-feeding), often generating biological energy and macromolecules through chlorophyllic carbon fixation using sunlight - in other words, zooplankton cannot manufacture their own food, while phytoplankton can. As a result, zooplankton must acquire nutrients by feeding on other organisms such as phytoplankton, which are generally smaller than zooplankton. Most zooplankton are microscopic but some (such as jellyfish) are macroscopic, meaning they can be seen with the naked eye. Many protozoans (single-celled protists that prey on other microscopic life) are zooplankton, including zooflagellates, foraminiferans, radiolarians, some dinoflagellates and marine microanimals. Macroscopic zooplankton include pelagic cnidarians, ctenophores, molluscs, arthropods and tunicates, as well as planktonic arrow worms and bristle worms. The distinction between autotrophy and heterotrophy often breaks down in very small organisms. Recent studies of marine microplankton have indicated over half of microscopic plankton are mixotrophs, which can obtain energy and carbon from a mix of internal plastids and external sources. Many marine microzooplankton are mixotrophic, which means they could also be classified as phytoplankton.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zooplankton";
        }
    }

    return nullptr;
}

string _Biology::Terms::Zygospore(string text)
{
    string model = "llama3";
    string definition = "A zygospore is a diploid reproductive stage in the life cycle of many fungi and protists. Zygospores are created by the nuclear fusion of haploid cells. In fungi, zygospores are formed in zygosporangia after the fusion of specialized budding structures, from mycelia of the same (in homothallic fungi) or different mating types (in heterothallic fungi), and may be chlamydospores. In many eukaryotic algae, including many species of the Chlorophyta, zygospores are formed by the fusion of unicellular gametes of different mating types. A zygospore remains dormant while it waits for environmental cues, such as light, moisture, heat, or chemicals secreted by plants. When the environment is favorable, the zygospore germinates, meiosis occurs, and haploid vegetative cells are released. In fungi, a sporangium is produced at the end of a sporangiophore that sheds spores. A fungus that forms zygospores is called a zygomycete, indicating that the class is characterized by this evolutionary development.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zygospore";
        }
    }

    return nullptr;
}

string _Biology::Terms::Zygote(string text)
{
    string model = "llama3";
    string definition = "a eukaryotic cell formed by a fertilization event between two gametes. The zygote\'s genome is a combination of the DNA in each gamete, and contains all of the genetic information of a new individual organism. The sexual fusion of haploid cells is called karyogamy, the result of which is the formation of a diploid cell called the zygote or zygospore.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zygote";
        }
    }

    return nullptr;
}

