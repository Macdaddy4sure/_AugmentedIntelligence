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
#include "ArtificialIntelligence.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _ArtificialIntelligence::Terms::AStarSearch(string text)
{
    string model = "llama3";
    string definition = "A graph traversal and pathfinding algorithm which is used in many fields of computer science due to its completeness, optimality, and optimal efficiency.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "A-Star Search";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AbductiveLogicProgramming(string text)
{
    string model = "llama3";
    string definition = "A high-level knowledge-representation framework that can be used to solve problems declaratively based on abductive reasoning. It extends normal logic programming by allowing some predicates to be incompletely defined, declared as abducible predicates.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Abductive Logic Programming";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AbductiveReasoning(string text)
{
    string model = "llama3";
    string definition = "A form of logical inference which starts with an observation or set of observations then seeks to find the simplest and most likely explanation. This process, unlike deductive reasoning, yields a plausible conclusion but does not positively verify it.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Abductive Reasoning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Ablatin(string text)
{
    string model = "llama3";
    string definition = "The removal of a component of an AI system. An ablation study aims to determine the contribution of a component to an AI system by removing the component, and then analyzing the resultant performance of the system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ablatin";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AbstractDataType(string text)
{
    string model = "llama3";
    string definition = "A mathematical model for data types, where a data type is defined by its behavior (semantics) from the point of view of a user of the data, specifically in terms of possible values, possible operations on data of this type, and the behavior of these operations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Abstract Data Type";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Abstraction(string text)
{
    string model = "llama3";
    string definition = "or attributes in the study of objects or systems in order to more closely attend to other details of interest";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Abstraction";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AcceleratingChange(string text)
{
    string model = "llama3";
    string definition = "A perceived increase in the rate of technological change throughout history, which may suggest faster and more profound change in the future and may or may not be accompanied by equally profound social and cultural change.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Accelerating Change";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ActionLanguage(string text)
{
    string model = "llama3";
    string definition = "A language for specifying state transition systems, and is commonly used to create formal models of the effects of actions on the world. Action languages are commonly used in the artificial intelligence and robotics domains, where they describe how actions affect the states of systems over time, and may be used for automated planning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Action Language";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ActionModelLearning(string text)
{
    string model = "llama3";
    string definition = "An area of machine learning concerned with creation and modification of software agent's knowledge about effects and preconditions of the actions that can be executed within its environment. This knowledge is usually represented in logic-based action description language and used as the input for automated planners.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Action Model Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ActionSelection(string text)
{
    string model = "llama3";
    string definition = "A way of characterizing the most basic problem of intelligent systems: what to do next. In artificial intelligence and computational cognitive science, \"the action selection problem\" is typically associated with intelligent agents and animats—artificial systems that exhibit complex behaviour in an agent environment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Action Selection";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ActivationFunction(string text)
{
    string model = "llama3";
    string definition = "In artificial neural networks, the activation function of a node defines the output of that node given an input or set of inputs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Activation Function";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AdaptiveAlgorithm(string text)
{
    string model = "llama3";
    string definition = "An algorithm that changes its behavior at the time it is run, based on a priori defined reward mechanism or criterion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Adaptive Algorithm";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AdaptiveNeuroFuzzyInferenceSystem(string text)
{
    string model = "llama3";
    string definition = "A kind of artificial neural network that is based on Takagi–Sugeno fuzzy inference system. The technique was developed in the early 1990s. Since it integrates both neural networks and fuzzy logic principles, it has potential to capture the benefits of both in a single framework. Its inference system corresponds to a set of fuzzy IF–THEN rules that have learning capability to approximate nonlinear functions. Hence, ANFIS is considered to be a universal estimator. For using the ANFIS in a more efficient and optimal way, one can use the best parameters obtained by genetic algorithm.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Adaptive Neuro Fuzzy Inference System";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AdmissibleHeuristic(string text)
{
    string model = "llama3";
    string definition = "a heuristic function is said to be admissible if it never overestimates the cost of reaching the goal, i.e. the cost it estimates to reach the goal is not higher than the lowest possible cost from the current point in the path.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Admissible Heuristic";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AffectiveComputing(string text)
{
    string model = "llama3";
    string definition = "The study and development of systems and devices that can recognize, interpret, process, and simulate human affects. Affective computing is an interdisciplinary field spanning computer science, psychology, and cognitive science.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Affective Computing";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AgentArchitecture(string text)
{
    string model = "llama3";
    string definition = "A blueprint for software agents and intelligent control systems, depicting the arrangement of components. The architectures implemented by intelligent agents are referred to as cognitive architectures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Agent Architecture";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AIAccelerator(string text)
{
    string model = "llama3";
    string definition = "A class of microprocessor or computer system designed as hardware acceleration for artificial intelligence applications, especially artificial neural networks, machine vision, and machine learning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AI Accelerator";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AIComplete(string text)
{
    string model = "llama3";
    string definition = "In the field of artificial intelligence, the most difficult problems are informally known as AI-complete or AI-hard, implying that the difficulty of these computational problems is equivalent to that of solving the central artificial intelligence problem—making computers as intelligent as people, or strong AI. To call a problem AI-complete reflects an attitude that it would not be solved by a simple specific algorithm.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AI Complete";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Algorithm(string text)
{
    string model = "llama3";
    string definition = "An unambiguous specification of how to solve a class of problems. Algorithms can perform calculation, data processing, and automated reasoning tasks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Algorithm";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AlgorithmicEfficiency(string text)
{
    string model = "llama3";
    string definition = "A property of an algorithm which relates to the number of computational resources used by the algorithm. An algorithm must be analyzed to determine its resource usage, and the efficiency of an algorithm can be measured based on usage of different resources. Algorithmic efficiency can be thought of as analogous to engineering productivity for a repeating or continuous process.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Algorithmic Efficiency";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AlgorithmicProbability(string text)
{
    string model = "llama3";
    string definition = "In algorithmic information theory, algorithmic probability, also known as Solomonoff probability, is a mathematical method of assigning a prior probability to a given observation. It was invented by Ray Solomonoff in the 1960s.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Algorithmic Probability";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AlphaGO(string text)
{
    string model = "llama3";
    string definition = "A computer program that plays the board game Go. It was developed by Alphabet Inc.'s Google DeepMind in London. AlphaGo has several versions including AlphaGo Zero, AlphaGo Master, AlphaGo Lee, etc. In October 2015, AlphaGo became the first computer Go program to beat a human professional Go player without handicaps on a full-sized 19×19 board.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AlphaGO";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AmbientIntelligence(string text)
{
    string model = "llama3";
    string definition = "Electronic environments that are sensitive and responsive to the presence of people.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ambient Intelligence";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AnalysisOfAlgorithms(string text)
{
    string model = "llama3";
    string definition = "The determination of the computational complexity of algorithms, that is the amount of time, storage and/or other resources necessary to execute them. Usually, this involves determining a function that relates the length of an algorithm's input to the number of steps it takes (its time complexity) or the number of storage locations it uses (its space complexity).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Analysis Of Algorithms";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Analytics(string text)
{
    string model = "llama3";
    string definition = "The discovery, interpretation, and communication of meaningful patterns in data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Analytics";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AnswerSetProgrammnig(string text)
{
    string model = "llama3";
    string definition = "A form of declarative programming oriented towards difficult (primarily NP-hard) search problems. It is based on the stable model (answer set) semantics of logic programming. In ASP, search problems are reduced to computing stable models, and answer set solvers—programs for generating stable models—are used to perform search.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Answer Set Programmnig";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AntColonyOptimization(string text)
{
    string model = "llama3";
    string definition = "A probabilistic technique for solving computational problems that can be reduced to finding good paths through graphs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "AntColony Optimization";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AnytimeAlgorithm(string text)
{
    string model = "llama3";
    string definition = "An algorithm that can return a valid solution to a problem even if it is interrupted before it ends.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Anytime Algorithm";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ApplicationProgrammingInterface(string text)
{
    string model = "llama3";
    string definition = "A set of subroutine definitions, communication protocols, and tools for building software. In general terms, it is a set of clearly defined methods of communication among various components. A good API makes it easier to develop a computer program by providing all the building blocks, which are then put together by the programmer. An API may be for a web-based system, operating system, database system, computer hardware, or software library.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Application Programming Interface";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ApproximateStringMatching(string text)
{
    string model = "llama3";
    string definition = "The technique of finding strings that match a pattern approximately (rather than exactly). The problem of approximate string matching is typically divided into two sub-problems: finding approximate substring matches inside a given string and finding dictionary strings that match the pattern approximately.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Approximate String Matching";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ApproximationError(string text)
{
    string model = "llama3";
    string definition = "The discrepancy between an exact value and some approximation to it.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Approximation Error";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ArgumentationFramework(string text)
{
    string model = "llama3";
    string definition = "A way to deal with contentious information and draw conclusions from it. In an abstract argumentation framework, entry-level information is a set of abstract arguments that, for instance, represent data or a proposition. Conflicts between arguments are represented by a binary relation on the set of arguments. In concrete terms, you represent an argumentation framework with a directed graph such that the nodes are the arguments, and the arrows represent the attack relation. There exist some extensions of the Dung's framework, like the logic-based argumentation frameworks or the value-based argumentation frameworks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Argumentation Framework";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ArtificialGeneralIntelligence(string text)
{
    string model = "llama3";
    string definition = "A type of AI that matches or surpasses human cognitive capabilities across a wide range of cognitive tasks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Artificial General Intelligence";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ArtificialImmuneSystem(string text)
{
    string model = "llama3";
    string definition = "A class of computationally intelligent, rule-based machine learning systems inspired by the principles and processes of the vertebrate immune system. The algorithms are typically modeled after the immune system's characteristics of learning and memory for use in problem-solving.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Artificial ImmuneSystem";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ArtificialIntelligence(string text)
{
    string model = "llama3";
    string definition = "Any intelligence demonstrated by machines, in contrast to the natural intelligence displayed by humans and other animals. In computer science, AI research is defined as the study of \"intelligent agents\": any device that perceives its environment and takes actions that maximize its chance of successfully achieving its goals. Colloquially, the term \"artificial intelligence\" is applied when a machine mimics \"cognitive\" functions that humans associate with other human minds, such as \"learning\" and \"problem solving\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _ArtificialIntelligence::Terms::ArtificialIntelligenceMarkupLanguage(string text)
{
    string model = "llama3";
    string definition = "An XML dialect for creating natural language software agents.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Artificial Intelligence Markup Language";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AssociationForTheAdvancementOfArtificialIntelligence(string text)
{
    string model = "llama3";
    string definition = "An international, nonprofit, scientific society devoted to promote research in, and responsible use of, artificial intelligence. AAAI also aims to increase public understanding of artificial intelligence (AI), improve the teaching and training of AI practitioners, and provide guidance for research planners and funders concerning the importance and potential of current AI developments and future directions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Association For The Advancement Of Artificial Intelligence";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AsymptoticComputationalComplexity(string text)
{
    string model = "llama3";
    string definition = "In computational complexity theory, asymptotic computational complexity is the usage of asymptotic analysis for the estimation of computational complexity of algorithms and computational problems, commonly associated with the usage of the big O notation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Asymptotic Computational Complexity";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AttentionMechanism(string text)
{
    string model = "llama3";
    string definition = "Machine learning-based attention is a mechanism mimicking cognitive attention. It calculates \"soft\" weights for each word, more precisely for its embedding, in the context window. It can do it either in parallel (such as in transformers) or sequentially (such as in recursive neural networks). \"Soft\" weights can change during each runtime, in contrast to \"hard\" weights, which are (pre-)trained and fine-tuned and remain frozen afterwards. Multiple attention heads are used in transformer-based large language models.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Attention Mechanism";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AttributionalCalculus(string text)
{
    string model = "llama3";
    string definition = "A logic and representation system defined by Ryszard S. Michalski. It combines elements of predicate logic, propositional calculus, and multi-valued logic. Attributional calculus provides a formal language for natural induction, an inductive learning process whose results are in forms natural to people.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Attributional Calculus";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AugmentedReality(string text)
{
    string model = "llama3";
    string definition = "An interactive experience of a real-world environment where the objects that reside in the real-world are \"augmented\" by computer-generated perceptual information, sometimes across multiple sensory modalities, including visual, auditory, haptic, somatosensory, and olfactory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Augmented Reality";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Autoencoder(string text)
{
    string model = "llama3";
    string definition = "A type of artificial neural network used to learn efficient codings of unlabeled data (unsupervised learning). A common implementation is the variational autoencoder (VAE).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Autoencoder";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AutomataTheory(string text)
{
    string model = "llama3";
    string definition = "The study of abstract machines and automata, as well as the computational problems that can be solved using them. It is a theory in theoretical computer science and discrete mathematics (a subject of study in both mathematics and computer science).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Automata Theory";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AutomatedMachineLearning(string text)
{
    string model = "llama3";
    string definition = "A field of machine learning (ML) which aims to automatically configure an ML system to maximize its performance (e.g, classification accuracy).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Automated Machine Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AutomatedPlanningAndScheduling(string text)
{
    string model = "llama3";
    string definition = "A branch of artificial intelligence that concerns the realization of strategies or action sequences, typically for execution by intelligent agents, autonomous robots and unmanned vehicles. Unlike classical control and classification problems, the solutions are complex and must be discovered and optimized in multidimensional space. Planning is also related to decision theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Automated Planning And Scheduling";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AutomatedReasoning(string text)
{
    string model = "llama3";
    string definition = "An area of computer science and mathematical logic dedicated to understanding different aspects of reasoning. The study of automated reasoning helps produce computer programs that allow computers to reason completely, or nearly completely, automatically. Although automated reasoning is considered a sub-field of artificial intelligence, it also has connections with theoretical computer science, and even philosophy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Automated Reasoning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AutonomicComputing(string text)
{
    string model = "llama3";
    string definition = "The self-managing characteristics of distributed computing resources, adapting to unpredictable changes while hiding intrinsic complexity to operators and users. Initiated by IBM in 2001, this initiative ultimately aimed to develop computer systems capable of self-management, to overcome the rapidly growing complexity of computing systems management, and to reduce the barrier that complexity poses to further growth.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Autonomic Computing";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AutonomousCar(string text)
{
    string model = "llama3";
    string definition = "A vehicle that is capable of sensing its environment and moving with little or no human input.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Autonomous Car";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::AutonomousRobot(string text)
{
    string model = "llama3";
    string definition = "A robot that performs behaviors or tasks with a high degree of autonomy. Autonomous robotics is usually considered to be a subfield of artificial intelligence, robotics, and information engineering.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Autonomous Robot";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Backpropagation(string text)
{
    string model = "llama3";
    string definition = "A method used in artificial neural networks to calculate a gradient that is needed in the calculation of the weights to be used in the network. Backpropagation is shorthand for \"the backward propagation of errors\", since an error is computed at the output and distributed backwards throughout the network's layers. It is commonly used to train deep neural networks, a term referring to neural networks with more than one hidden layer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Backpropagation";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BackpropagationThroughStructure(string text)
{
    string model = "llama3";
    string definition = "A gradient-based technique for training recurrent neural networks, proposed in a 1996 paper written by Christoph Goller and Andreas Küchler.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Backpropagation Through Structure";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BackpropagationThroughTime(string text)
{
    string model = "llama3";
    string definition = "A gradient-based technique for training certain types of recurrent neural networks, such as Elman networks. The algorithm was independently derived by numerous researchers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Backpropagation Through Time";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BackwardChaining(string text)
{
    string model = "llama3";
    string definition = "An inference method described colloquially as working backward from the goal. It is used in automated theorem provers, inference engines, proof assistants, and other artificial intelligence applications.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Backward Chaining";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BagOfWordsModel(string text)
{
    string model = "llama3";
    string definition = "A simplifying representation used in natural language processing and information retrieval (IR). In this model, a text (such as a sentence or a document) is represented as the bag (multiset) of its words, disregarding grammar and even word order but keeping multiplicity. The bag-of-words model has also been used for computer vision. The bag-of-words model is commonly used in methods of document classification where the (frequency of) occurrence of each word is used as a feature for training a classifier.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bag Of Words Model";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BagOfWordsModelInComputerVision(string text)
{
    string model = "llama3";
    string definition = "In computer vision, the bag-of-words model (BoW model) can be applied to image classification, by treating image features as words. In document classification, a bag of words is a sparse vector of occurrence counts of words; that is, a sparse histogram over the vocabulary. In computer vision, a bag of visual words is a vector of occurrence counts of a vocabulary of local image features.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bag Of Words Model In Computer Vision";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BatchNormalization(string text)
{
    string model = "llama3";
    string definition = "A technique for improving the performance and stability of artificial neural networks. It is a technique to provide any layer in a neural network with inputs that are zero mean/unit variance.[48] Batch normalization was introduced in a 2015 paper. It is used to normalize the input layer by adjusting and scaling the activations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Batch Normalization";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BayesianProgramming(string text)
{
    string model = "llama3";
    string definition = "A formalism and a methodology for having a technique to specify probabilistic models and solve problems when less than the necessary information is available.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bayesian Programming";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BeesAlgorithm(string text)
{
    string model = "llama3";
    string definition = "mimics the food foraging behaviour of honey bee colonies. In its basic version the algorithm performs a kind of neighborhood search combined with global search, and can be used for both combinatorial optimization and continuous optimization. The only condition for the application of the bees algorithm is that some measure of distance between the solutions is defined. The effectiveness and specific abilities of the bees algorithm have been proven in a number of studies.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bees Algorithm";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BehaviorInformatics(string text)
{
    string model = "llama3";
    string definition = "The informatics of behaviors so as to obtain behavior intelligence and behavior insights";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Behavior Informatics";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BehaviorTree(string text)
{
    string model = "llama3";
    string definition = "A mathematical model of plan execution used in computer science, robotics, control systems and video games. They describe switchings between a finite set of tasks in a modular fashion. Their strength comes from their ability to create very complex tasks composed of simple tasks, without worrying how the simple tasks are implemented. BTs present some similarities to hierarchical state machines with the key difference that the main building block of a behavior is a task rather than a state. Its ease of human understanding make BTs less error-prone and very popular in the game developer community. BTs have shown to generalize several other control architectures.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Behavior Tree";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BeliefDesireIntentionSoftwareModel(string text)
{
    string model = "llama3";
    string definition = "A software model developed for programming intelligent agents. Superficially characterized by the implementation of an agent's beliefs, desires and intentions, it actually uses these concepts to solve a particular problem in agent programming. In essence, it provides a mechanism for separating the activity of selecting a plan (from a plan library or an external planner application) from the execution of currently active plans. Consequently, BDI agents are able to balance the time spent on deliberating about plans (choosing what to do) and executing those plans (doing it). A third activity, creating the plans in the first place (planning), is not within the scope of the model, and is left to the system designer and programmer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Belief Desire Intention Software Model";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BiasVarianceTradeoff(string text)
{
    string model = "llama3";
    string definition = "In statistics and machine learning, the bias–variance tradeoff is the property of a set of predictive models whereby models with a lower bias in parameter estimation have a higher variance of the parameter estimates across samples, and vice versa.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bias Variance Tradeoff";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BigData(string text)
{
    string model = "llama3";
    string definition = "A term used to refer to data sets that are too large or complex for traditional data-processing application software to adequately deal with. Data with many cases (rows) offer greater statistical power, while data with higher complexity (more attributes or columns) may lead to a higher false discovery rate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Big Data";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BigONotation(string text)
{
    string model = "llama3";
    string definition = "A mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity. It is a member of a family of notations invented by Paul Bachmann, Edmund Landau, and others, collectively called Bachmann–Landau notation or asymptotic notation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Big O Notation";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BinaryTree(string text)
{
    string model = "llama3";
    string definition = "A tree data structure in which each node has at most two children, which are referred to as the left child and the right child. A recursive definition using just set theory notions is that a (non-empty) binary tree is a tuple (L, S, R), where L and R are binary trees or the empty set and S is a singleton set. Some authors allow the binary tree to be the empty set as well.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Binary Tree";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BlackboardSystem(string text)
{
    string model = "llama3";
    string definition = "An artificial intelligence approach based on the blackboard architectural model, where a common knowledge base, the \"blackboard\", is iteratively updated by a diverse group of specialist knowledge sources, starting with a problem specification and ending with a solution. Each knowledge source updates the blackboard with a partial solution when its internal constraints match the blackboard state. In this way, the specialists work together to solve the problem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Blackboard System";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BoltzmannMachine(string text)
{
    string model = "llama3";
    string definition = "A type of stochastic recurrent neural network and Markov random field. Boltzmann machines can be seen as the stochastic, generative counterpart of Hopfield networks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boltzmann Machine";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BooleanSatisfiabilityProblem(string text)
{
    string model = "llama3";
    string definition = "The problem of determining if there exists an interpretation that satisfies a given Boolean formula. In other words, it asks whether the variables of a given Boolean formula can be consistently replaced by the values TRUE or FALSE in such a way that the formula evaluates to TRUE. If this is the case, the formula is called satisfiable. On the other hand, if no such assignment exists, the function expressed by the formula is FALSE for all possible variable assignments and the formula is unsatisfiable. For example, the formula \"a AND NOT b\" is satisfiable because one can find the values a = TRUE and b = FALSE, which make (a AND NOT b) = TRUE. In contrast, \"a AND NOT a\" is unsatisfiable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boolean Satisfiability Problem";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Boosting(string text)
{
    string model = "llama3";
    string definition = "A machine learning ensemble metaheuristic for primarily reducing bias (as opposed to variance), by training models sequentially, each one correcting the errors of its predecessor.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Boosting";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BootstrapAggregating(string text)
{
    string model = "llama3";
    string definition = "A machine learning ensemble metaheuristic for primarily reducing variance (as opposed to bias), by training multiple models independently and averaging their predictions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bootstrap Aggregating";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BrainTechnology(string text)
{
    string model = "llama3";
    string definition = "A technology that employs the latest findings in neuroscience. The term was first introduced by the Artificial Intelligence Laboratory in Zurich, Switzerland, in the context of the ROBOY project. Brain Technology can be employed in robots, know-how management system, and any other application with self-learning capabilities. In particular, Brain Technology applications allow the visualization of the underlying learning architecture often coined as \"know - how maps\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Brain Technology";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BranchingFactor(string text)
{
    string model = "llama3";
    string definition = "In computing, tree data structures, and game theory, the number of children at each node, the outdegree. If this value is not uniform, an average branching factor can be calculated.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Branching Factor";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::BruteForceSearch(string text)
{
    string model = "llama3";
    string definition = "A very general problem-solving technique and algorithmic paradigm that consists of systematically enumerating all possible candidates for the solution and checking whether each candidate satisfies the problem's statement.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Brute Force Search";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::CapsuleNeuralNetwork(string text)
{
    string model = "llama3";
    string definition = "A machine learning system that is a type of artificial neural network (ANN) that can be used to better model hierarchical relationships. The approach is an attempt to more closely mimic biological neural organization.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Capsule Neural Network";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::CaseBasedReasoning(string text)
{
    string model = "llama3";
    string definition = "Broadly construed, the process of solving new problems based on the solutions of similar past problems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Case Based Reasoning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ChatBot(string text)
{
    string model = "llama3";
    string definition = "A computer program or an artificial intelligence which conducts a conversation via auditory or textual methods.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ChatBot";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::CloudRobotics(string text)
{
    string model = "llama3";
    string definition = "A field of robotics that attempts to invoke cloud technologies such as cloud computing, cloud storage, and other Internet technologies centred on the benefits of converged infrastructure and shared services for robotics. When connected to the cloud, robots can benefit from the powerful computation, storage, and communication resources of modern data center in the cloud, which can process and share information from various robots or agent (other machines, smart objects, humans, etc.). Humans can also delegate tasks to robots remotely through networks. Cloud computing technologies enable robot systems to be endowed with powerful capability whilst reducing costs through cloud technologies. Thus, it is possible to build lightweight, low cost, smarter robots have intelligent \"brain\" in the cloud. The \"brain\" consists of data center, knowledge base, task planners, deep learning, information processing, environment models, communication support, etc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cloud Robotics";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ClusterAnalysis(string text)
{
    string model = "llama3";
    string definition = "The task of grouping a set of objects in such a way that objects in the same group (called a cluster) are more similar (in some sense) to each other than to those in other groups (clusters). It is a main task of exploratory data mining, and a common technique for statistical data analysis, used in many fields, including machine learning, pattern recognition, image analysis, information retrieval, bioinformatics, data compression, and computer graphics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cluster Analysis";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Cobweb(string text)
{
    string model = "llama3";
    string definition = "An incremental system for hierarchical conceptual clustering. COBWEB was invented by Professor Douglas H. Fisher, currently at Vanderbilt University. COBWEB incrementally organizes observations into a classification tree. Each node in a classification tree represents a class (concept) and is labeled by a probabilistic concept that summarizes the attribute-value distributions of objects classified under the node. This classification tree can be used to predict missing attributes or the class of a new object.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cobweb";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::CognativeArchitecture(string text)
{
    string model = "llama3";
    string definition = "The Institute of Creative Technologies defines cognitive architecture as: \"hypothesis about the fixed structures that provide a mind, whether in natural or artificial systems, and how they work together – in conjunction with knowledge and skills embodied within the architecture – to yield intelligent behavior in a diversity of complex environments.\"";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cognative Architecture";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::CognitiveComputing(string text)
{
    string model = "llama3";
    string definition = "In general, the term cognitive computing has been used to refer to new hardware and/or software that mimics the functioning of the human brain and helps to improve human decision-making. In this sense, CC is a new type of computing with the goal of more accurate models of how the human brain/mind senses, reasons, and responds to stimulus.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cognitive Computing";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::CognitiveScience(string text)
{
    string model = "llama3";
    string definition = "The interdisciplinary scientific study of the mind and its processes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cognitive Science";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::CombinatorialOptimization(string text)
{
    string model = "llama3";
    string definition = "In Operations Research, applied mathematics and theoretical computer science, combinatorial optimization is a topic that consists of finding an optimal object from a finite set of objects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Combinatorial Optimization";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::CommitteeMachine(string text)
{
    string model = "llama3";
    string definition = "A type of artificial neural network using a divide and conquer strategy in which the responses of multiple neural networks (experts) are combined into a single response. The combined response of the committee machine is supposed to be superior to those of its constituent experts. Compare ensembles of classifiers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Committee Machine";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::CommonsenseKnowledge(string text)
{
    string model = "llama3";
    string definition = "In artificial intelligence research, commonsense knowledge consists of facts about the everyday world, such as \"Lemons are sour\", that all humans are expected to know. The first AI program to address common sense knowledge was Advice Taker in 1959 by John McCarthy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Commonsense Knowledge";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::CommonsenseReasoning(string text)
{
    string model = "llama3";
    string definition = "A branch of artificial intelligence concerned with simulating the human ability to make presumptions about the type and essence of ordinary situations they encounter every day.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Commonsense Reasoning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ComputationalChemistry(string text)
{
    string model = "llama3";
    string definition = "A branch of chemistry that uses computer simulation to assist in solving chemical problems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computational Chemistry";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ComputationalComplexityTheory(string text)
{
    string model = "llama3";
    string definition = "Focuses on classifying computational problems according to their inherent difficulty, and relating these classes to each other. A computational problem is a task solved by a computer. A computation problem is solvable by mechanical application of mathematical steps, such as an algorithm.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computational Complexity Theory";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ComputationalCreativity(string text)
{
    string model = "llama3";
    string definition = "A multidisciplinary endeavour that includes the fields of artificial intelligence, cognitive psychology, philosophy, and the arts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computational Creativity";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ComputationalCybernetics(string text)
{
    string model = "llama3";
    string definition = "The integration of cybernetics and computational intelligence techniques.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computational Cybernetics";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ComputationalHumor(string text)
{
    string model = "llama3";
    string definition = "A branch of computational linguistics and artificial intelligence which uses computers in humor research.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computational Humor";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ComputationalIntelligence(string text)
{
    string model = "llama3";
    string definition = "Usually refers to the ability of a computer to learn a specific task from data or experimental observation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computational Intelligence";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ComputationalLearningTheory(string text)
{
    string model = "llama3";
    string definition = "In computer science, computational learning theory (or just learning theory) is a subfield of artificial intelligence devoted to studying the design and analysis of machine learning algorithms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computational Learning Theory";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ComputationalLinguistics(string text)
{
    string model = "llama3";
    string definition = "An interdisciplinary field concerned with the statistical or rule-based modeling of natural language from a computational perspective, as well as the study of appropriate computational approaches to linguistic questions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computational Linguistics";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ComputationalMathematics(string text)
{
    string model = "llama3";
    string definition = "The mathematical research in areas of science where computing plays an essential role.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computational Mathematics";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ComputationalNeuroscience(string text)
{
    string model = "llama3";
    string definition = "A branch of neuroscience which employs mathematical models, theoretical analysis and abstractions of the brain to understand the principles that govern the development, structure, physiology, and cognitive abilities of the nervous system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computational Neuroscience";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ComputationalNumberTheory(string text)
{
    string model = "llama3";
    string definition = "The study of algorithms for performing number theoretic computations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computational Number Theory";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ComputationalProblem(string text)
{
    string model = "llama3";
    string definition = "In theoretical computer science, a computational problem is a mathematical object representing a collection of questions that computers might be able to solve.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computational Problem";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ComputationalStatistics(string text)
{
    string model = "llama3";
    string definition = "The interface between statistics and computer science.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computational Statistics";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ComputerAutomatedDesign(string text)
{
    string model = "llama3";
    string definition = "Design automation usually refers to electronic design automation, or Design Automation which is a Product Configurator. Extending Computer-Aided Design (CAD), automated design and computer-automated design are concerned with a broader range of applications, such as automotive engineering, civil engineering,  composite material design, control engineering, dynamic system identification and optimization  financial systems, industrial equipment, mechatronic systems, steel construction, structural optimisation, and the invention of novel systems. More recently, traditional CAD simulation is seen to be transformed to CAutoD by biologically inspired machine learning including heuristic search techniques such as evolutionary computation, and swarm intelligence algorithms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computer Automated Design";
        }
    }

    return nullptr;
}

//string _ArtificialIntelligence::Terms::ComputerAutomatedDesign(string text)
//{
//    string model = "llama3";
//    string definition = "The theory, experimentation, and engineering that form the basis for the design and use of computers. It involves the study of algorithms that process, store, and communicate digital information. A computer scientist specializes in the theory of computation and the design of computational systems.";
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
//            return "Computer Automated Design";
//        }
//    }
//
//    return nullptr;
//}

string _ArtificialIntelligence::Terms::ComputerAudition(string text)
{
    string model = "llama3";
    string definition = "See machine listening.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computer Audition";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ComputerScience(string text)
{
    string model = "llama3";
    string definition = "The theory, experimentation, and engineering that form the basis for the design and use of computers. It involves the study of algorithms that process, store, and communicate digital information. A computer scientist specializes in the theory of computation and the design of computational systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _ArtificialIntelligence::Terms::ComputerVision(string text)
{
    string model = "llama3";
    string definition = "An interdisciplinary scientific field that deals with how computers can be made to gain high-level understanding from digital images or videos. From the perspective of engineering, it seeks to automate tasks that the human visual system can do.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Computer Vision";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ConceptDrift(string text)
{
    string model = "llama3";
    string definition = "In predictive analytics and machine learning, the concept drift means that the statistical properties of the target variable, which the model is trying to predict, change over time in unforeseen ways. This causes problems because the predictions become less accurate as time passes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Concept Drift";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Connectionism(string text)
{
    string model = "llama3";
    string definition = "An approach in the fields of cognitive science, that hopes to explain mental phenomena using artificial neural networks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Connectionism";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ConsistentHeuristic(string text)
{
    string model = "llama3";
    string definition = "In the study of path-finding problems in artificial intelligence, a heuristic function is said to be consistent, or monotone, if its estimate is always less than or equal to the estimated distance from any neighboring vertex to the goal, plus the cost of reaching that neighbor.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Consistent Heuristic";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ConstrainedConditionalModel(string text)
{
    string model = "llama3";
    string definition = "A machine learning and inference framework that augments the learning of conditional (probabilistic or discriminative) models with declarative constraints.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Constrained Conditional Model";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ConstraintLogicProgramming(string text)
{
    string model = "llama3";
    string definition = "A form of constraint programming, in which logic programming is extended to include concepts from constraint satisfaction. A constraint logic program is a logic program that contains constraints in the body of clauses. An example of a clause including a constraint is A(X,Y) :- X+Y>0, B(X), C(Y). In this clause, X+Y>0 is a constraint; A(X,Y), B(X), and C(Y) are literals as in regular logic programming. This clause states one condition under which the statement A(X,Y) holds: X+Y is greater than zero and both B(X) and C(Y) are true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Constraint Logic Programming";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ConstraintProgramming(string text)
{
    string model = "llama3";
    string definition = "A programming paradigm wherein relations between variables are stated in the form of constraints. Constraints differ from the common primitives of imperative programming languages in that they do not specify a step or sequence of steps to execute, but rather the properties of a solution to be found.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Constraint Programming";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ConstructedLanguage(string text)
{
    string model = "llama3";
    string definition = "A language whose phonology, grammar, and vocabulary are consciously devised, instead of having developed naturally. Constructed languages may also be referred to as artificial, planned, or invented languages.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Constructed Language";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ControlTheory(string text)
{
    string model = "llama3";
    string definition = "In control systems engineering is a subfield of mathematics that deals with the control of continuously operating dynamical systems in engineered processes and machines. The objective is to develop a control model for controlling such systems using a control action in an optimum manner without delay or overshoot and ensuring control stability.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Control Theory";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ConvolutionalNeuralNetwork(string text)
{
    string model = "llama3";
    string definition = "In deep learning, a convolutional neural network (CNN, or ConvNet) is a class of deep neural network most commonly applied to image analysis. CNNs use a variation of multilayer perceptrons designed to require minimal preprocessing. They are also known as shift invariant or space invariant artificial neural networks (SIANN), based on their shared-weights architecture and translation invariance characteristics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Convolutional Neural Network";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Crossover(string text)
{
    string model = "llama3";
    string definition = "In genetic algorithms and evolutionary computation, a genetic operator used to combine the genetic information of two parents to generate new offspring. It is one way to stochastically generate new solutions from an existing population, and analogous to the crossover that happens during sexual reproduction in biological organisms. Solutions can also be generated by cloning an existing solution, which is analogous to asexual reproduction. Newly generated solutions are typically mutated before being added to the population.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Crossover";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DarkForest(string text)
{
    string model = "llama3";
    string definition = "A computer go program developed by Facebook, based on deep learning techniques using a convolutional neural network. Its updated version Darkfores2 combines the techniques of its predecessor with Monte Carlo tree search. The MCTS effectively takes tree search methods commonly seen in computer chess programs and randomizes them. With the update, the system is known as Darkfmcts3.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dark Forest";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DartmouthWorkshop(string text)
{
    string model = "llama3";
    string definition = "The Dartmouth Summer Research Project on Artificial Intelligence was the name of a 1956 summer workshop now considered by many (though not all) to be the seminal event for artificial intelligence as a field.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dartmout hWorkshop";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DataAugmentation(string text)
{
    string model = "llama3";
    string definition = "Data augmentation in data analysis are techniques used to increase the amount of data. It helps reduce overfitting when training a learning algorithm.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Data Augmentation";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DataFusion(string text)
{
    string model = "llama3";
    string definition = "The process of integrating multiple data sources to produce more consistent, accurate, and useful information than that provided by any individual data source.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Data Fusion";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DataIntegration(string text)
{
    string model = "llama3";
    string definition = "The process of combining data residing in different sources and providing users with a unified view of them. This process becomes significant in a variety of situations, which include both commercial (such as when two similar companies need to merge their databases) and scientific (combining research results from different bioinformatics repositories, for example) domains. Data integration appears with increasing frequency as the volume (that is, big data) and the need to share existing data explodes. It has become the focus of extensive theoretical work, and numerous open problems remain unsolved.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Data Integration";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DataMining(string text)
{
    string model = "llama3";
    string definition = "The process of discovering patterns in large data sets involving methods at the intersection of machine learning, statistics, and database systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Data Mining";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DataScience(string text)
{
    string model = "llama3";
    string definition = "An interdisciplinary field that uses scientific methods, processes, algorithms and systems to extract knowledge and insights from data in various forms, both structured and unstructured, similar to data mining. Data science is a \"concept to unify statistics, data analysis, machine learning, and their related methods\" in order to \"understand and analyze actual phenomena\" with data. It employs techniques and theories drawn from many fields within the context of mathematics, statistics, information science, and computer science.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Data Science";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DataSet(string text)
{
    string model = "llama3";
    string definition = "A collection of data. Most commonly a data set corresponds to the contents of a single database table, or a single statistical data matrix, where every column of the table represents a particular variable, and each row corresponds to a given member of the data set in question. The data set lists values for each of the variables, such as height and weight of an object, for each member of the data set. Each value is known as a datum. The data set may comprise data for one or more members, corresponding to the number of rows.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Data Set";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DataWarehouse(string text)
{
    string model = "llama3";
    string definition = "A system used for reporting and data analysis. DWs are central repositories of integrated data from one or more disparate sources. They store current and historical data in one single place.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Data Warehouse";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Datalog(string text)
{
    string model = "llama3";
    string definition = "A declarative logic programming language that syntactically is a subset of Prolog. It is often used as a query language for deductive databases. In recent years, Datalog has found new application in data integration, information extraction, networking, program analysis, security, and cloud computing.[";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Datalog";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DecisionBoundry(string text)
{
    string model = "llama3";
    string definition = "In the case of backpropagation-based artificial neural networks or perceptrons, the type of decision boundary that the network can learn is determined by the number of hidden layers in the network. If it has no hidden layers, then it can only learn linear problems. If it has one hidden layer, then it can learn any continuous function on compact subsets of Rn as shown by the Universal approximation theorem, thus it can have an arbitrary decision boundary.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Decision Boundry";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DecisionSupportSystem(string text)
{
    string model = "llama3";
    string definition = "Aan information system that supports business or organizational decision-making activities. DSSs serve the management, operations and planning levels of an organization (usually mid and higher management) and help people make decisions about problems that may be rapidly changing and not easily specified in advance—i.e. unstructured and semi-structured decision problems. Decision support systems can be either fully computerized or human-powered, or a combination of both.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Decision Support System";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DecisionTheory(string text)
{
    string model = "llama3";
    string definition = "The study of the reasoning underlying an agent's choices. Decision theory can be broken into two branches: normative decision theory, which gives advice on how to make the best decisions given a set of uncertain beliefs and a set of values, and descriptive decision theory which analyzes how existing, possibly irrational agents actually make decisions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Decision Theory";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DecisionTreeLearning(string text)
{
    string model = "llama3";
    string definition = "Uses a decision tree (as a predictive model) to go from observations about an item (represented in the branches) to conclusions about the item's target value (represented in the leaves). It is one of the predictive modeling approaches used in statistics, data mining and machine learning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Decision Tree Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DeclarativeProgramming(string text)
{
    string model = "llama3";
    string definition = "A programming paradigm—a style of building the structure and elements of computer programs—that expresses the logic of a computation without describing its control flow.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Declarative Programming";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DeductiveClassifier(string text)
{
    string model = "llama3";
    string definition = "A programming paradigm—a style of building the structure and elements of computer programs—that expresses the logic of a computation without describing its control flow.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deductive Classifier";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DeepBlue(string text)
{
    string model = "llama3";
    string definition = "was a chess-playing computer developed by IBM. It is known for being the first computer chess-playing system to win both a chess game and a chess match against a reigning world champion under regular time controls.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deep Blue";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DeepLearning(string text)
{
    string model = "llama3";
    string definition = "A subset of machine learning that focuses on utilizing neural networks to perform tasks such as classification, regression, and representation learning. The field takes inspiration from biological neuroscience and is centered around stacking artificial neurons into layers and \"training\" them to process data. The adjective \"deep\" refers to the use of multiple layers (ranging from three to several hundred or thousands) in the network. Methods used can be either supervised, semi-supervised, or unsupervised.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Deep Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DeemMindTechnologies(string text)
{
    string model = "llama3";
    string definition = "A British artificial intelligence company founded in September 2010, currently owned by Alphabet Inc. The company is based in London, with research centres in Canada, France,  and the United States. Acquired by Google in 2014, the company has created a neural network that learns how to play video games in a fashion similar to that of humans, as well as a neural Turing machine, or a neural network that may be able to access an external memory like a conventional Turing machine, resulting in a computer that mimics the short-term memory of the human brain. The company made headlines in 2016 after its AlphaGo program beat human professional Go player Lee Sedol, the world champion, in a five-game match, which was the subject of a documentary film. A more general program, AlphaZero, beat the most powerful programs playing Go, chess, and shogi (Japanese chess) after a few days of play against itself using reinforcement learning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "DeemMind Technologies";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DefaultLogic(string text)
{
    string model = "llama3";
    string definition = "A non-monotonic logic proposed by Raymond Reiter to formalize reasoning with default assumptions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Default Logic";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DensityBasedSpatialClusteringOfApplicationsWithNoise(string text)
{
    string model = "llama3";
    string definition = "A clustering algorithm proposed by Martin Ester, Hans-Peter Kriegel, Jörg Sander, and Xiaowei Xu in 1996.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Density Based Spatial Clustering Of Applications With Noise";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DescriptionLogic(string text)
{
    string model = "llama3";
    string definition = "A family of formal knowledge representation languages. Many DLs are more expressive than propositional logic but less expressive than first-order logic. In contrast to the latter, the core reasoning problems for DLs are (usually) decidable, and efficient decision procedures have been designed and implemented for these problems. There are general, spatial, temporal, spatiotemporal, and fuzzy descriptions logics, and each description logic features a different balance between DL expressivity and reasoning complexity by supporting different sets of mathematical constructors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Description Logic";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DevelopmentalRobotics(string text)
{
    string model = "llama3";
    string definition = "A scientific field which aims at studying the developmental mechanisms, architectures, and constraints that allow lifelong and open-ended learning of new skills and new knowledge in embodied machines.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Developmental Robotics";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Diagnosis(string text)
{
    string model = "llama3";
    string definition = "Concerned with the development of algorithms and techniques that are able to determine whether the behaviour of a system is correct. If the system is not functioning correctly, the algorithm should be able to determine, as accurately as possible, which part of the system is failing, and which kind of fault it is facing. The computation is based on observations, which provide information on the current behaviour.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diagnosis";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DialogueSystem(string text)
{
    string model = "llama3";
    string definition = "A computer system intended to converse with a human with a coherent structure. Dialogue systems have employed text, speech, graphics, haptics, gestures, and other modes for communication on both the input and output channel.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dialogue System";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DiffusionModel(string text)
{
    string model = "llama3";
    string definition = "In machine learning, diffusion models, also known as diffusion probabilistic models or score-based generative models, are a class of latent variable models. They are Markov chains trained using variational inference. The goal of diffusion models is to learn the latent structure of a dataset by modeling the way in which data points diffuse through the latent space. In computer vision, this means that a neural network is trained to denoise images blurred with Gaussian noise by learning to reverse the diffusion process. It mainly consists of three major components: the forward process, the reverse process, and the sampling procedure. Three examples of generic diffusion modeling frameworks used in computer vision are denoising diffusion probabilistic models, noise conditioned score networks, and stochastic differential equations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Diffusion Model";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DijkstrasAlgorithm(string text)
{
    string model = "llama3";
    string definition = "An algorithm for finding the shortest paths between nodes in a weighted graph, which may represent, for example, road networks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dijkstras Algorithm";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DimensionalityReduction(string text)
{
    string model = "llama3";
    string definition = "The process of reducing the number of random variables under consideration by obtaining a set of principal variables. It can be divided into feature selection and feature extraction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dimensionality Reduction";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DiscreteSystem(string text)
{
    string model = "llama3";
    string definition = "Any system with a countable number of states. Discrete systems may be contrasted with continuous systems, which may also be called analog systems. A final discrete system is often modeled with a directed graph and is analyzed for correctness and complexity according to computational theory. Because discrete systems have a countable number of states, they may be described in precise mathematical models. A computer is a finite state machine that may be viewed as a discrete system. Because computers are often used to model not only other discrete systems but continuous systems as well, methods have been developed to represent real-world continuous systems as discrete systems. One such method involves sampling a continuous signal at discrete time intervals.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Discrete System";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DistributedArtificialIntelligence(string text)
{
    string model = "llama3";
    string definition = "A subfield of artificial intelligence research dedicated to the development of distributed solutions for problems. DAI is closely related to and a predecessor of the field of multi-agent systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Distributed Artificial Intelligence";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DoubleDescent(string text)
{
    string model = "llama3";
    string definition = "A phenomenon in statistics and machine learning where a model with a small number of parameters and a model with an extremely large number of parameters have a small test error, but a model whose number of parameters is about the same as the number of data points used to train the model will have a large error. This phenomenon has been considered surprising, as it contradicts assumptions about overfitting in classical machine learning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Double Descent";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Dropout(string text)
{
    string model = "llama3";
    string definition = "A regularization technique for reducing overfitting in artificial neural networks by preventing complex co-adaptations on training data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dropout";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::DynamicEpistemicLogic(string text)
{
    string model = "llama3";
    string definition = "A logical framework dealing with knowledge and information change. Typically, DEL focuses on situations involving multiple agents and studies how their knowledge changes when events occur.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Dynamic EpistemicLogic";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::EagerLearning(string text)
{
    string model = "llama3";
    string definition = "A learning method in which the system tries to construct a general, input-independent target function during training of the system, as opposed to lazy learning, where generalization beyond the training data is delayed until a query is made to the system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Eager Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::EarlyStopping(string text)
{
    string model = "llama3";
    string definition = "A regularization technique often used when training a machine learning model with an iterative method such as gradient descent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Early Stopping";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::EbertTest(string text)
{
    string model = "llama3";
    string definition = "A test which gauges whether a computer-based synthesized voice can tell a joke with sufficient skill to cause people to laugh. It was proposed by film critic Roger Ebert at the 2011 TED conference as a challenge to software developers to have a computerized voice master the inflections, delivery, timing, and intonations of a speaking human. The test is similar to the Turing test proposed by Alan Turing in 1950 as a way to gauge a computer's ability to exhibit intelligent behavior by generating performance indistinguishable from a human being.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ebert Test";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::EchoStateNetwork(string text)
{
    string model = "llama3";
    string definition = "A recurrent neural network with a sparsely connected hidden layer (with typically 1% connectivity). The connectivity and weights of hidden neurons are fixed and randomly assigned. The weights of output neurons can be learned so that the network can (re)produce specific temporal patterns. The main interest of this network is that although its behaviour is non-linear, the only weights that are modified during training are for the synapses that connect the hidden neurons to output neurons. Thus, the error function is quadratic with respect to the parameter vector and can be differentiated easily to a linear system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "EchoState Network";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::EmbodiedAgent(string text)
{
    string model = "llama3";
    string definition = "An intelligent agent that interacts with the environment through a physical body within that environment. Agents that are represented graphically with a body, for example a human or a cartoon animal, are also called embodied agents, although they have only virtual, not physical, embodiment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Embodied Agent";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::EmbodiedCognitiveScience(string text)
{
    string model = "llama3";
    string definition = "An interdisciplinary field of research, the aim of which is to explain the mechanisms underlying intelligent behavior. It comprises three main methodologies: 1) the modeling of psychological and biological systems in a holistic manner that considers the mind and body as a single entity, 2) the formation of a common set of general principles of intelligent behavior, and 3) the experimental use of robotic agents in controlled environments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Embodied Cognitive Science";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ErrorDrivenLearning(string text)
{
    string model = "llama3";
    string definition = "A sub-area of machine learning concerned with how an agent ought to take actions in an environment so as to minimize some error feedback. It is a type of reinforcement learning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Error Driven Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::EnsembleLearning(string text)
{
    string model = "llama3";
    string definition = "The use of multiple machine learning algorithms to obtain better predictive performance than could be obtained from any of the constituent learning algorithms alone.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ensemble Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Epoch(string text)
{
    string model = "llama3";
    string definition = "In machine learning, particularly in the creation of artificial neural networks, an epoch is training the model for one cycle through the full training dataset. Small models are typically trained for as many epochs as it takes to reach the best performance on the validation dataset. The largest models may train for only one epoch.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _ArtificialIntelligence::Terms::EthicsOfArtificialIntelligence(string text)
{
    string model = "llama3";
    string definition = "The part of the ethics of technology specific to artificial intelligence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ethics Of Artificial Intelligence";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::EvolutionaryAlgorithm(string text)
{
    string model = "llama3";
    string definition = "A subset of evolutionary computation, a generic population-based metaheuristic optimization algorithm. An EA uses mechanisms inspired by biological evolution, such as reproduction, mutation, recombination, and selection. Candidate solutions to the optimization problem play the role of individuals in a population, and the fitness function determines the quality of the solutions (see also loss function). Evolution of the population then takes place after the repeated application of the above operators.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Evolutionary Algorithm";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::EvolutionaryComputation(string text)
{
    string model = "llama3";
    string definition = "A family of algorithms for global optimization inspired by biological evolution, and the subfield of artificial intelligence and soft computing studying these algorithms. In technical terms, they are a family of population-based trial and error problem solvers with a metaheuristic or stochastic optimization character.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Evolutionary Computation";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::EvolvingClassificationFunction(string text)
{
    string model = "llama3";
    string definition = "Evolving classification functions are used for classifying and clustering in the field of machine learning and artificial intelligence, typically employed for data stream mining tasks in dynamic and changing environments.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Evolving Classification Function";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ExistentialRisk(string text)
{
    string model = "llama3";
    string definition = "The hypothesis that substantial progress in artificial general intelligence (AGI) could someday result in human extinction or some other unrecoverable global catastrophe.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Existential Risk";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ExpertSystem(string text)
{
    string model = "llama3";
    string definition = "A computer system that emulates the decision-making ability of a human expert. Expert systems are designed to solve complex problems by reasoning through bodies of knowledge, represented mainly as if–then rules rather than through conventional procedural code.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Expert System";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::FastAndFrugalTrees(string text)
{
    string model = "llama3";
    string definition = "A type of classification tree. Fast-and-frugal trees can be used as decision-making tools which operate as lexicographic classifiers, and, if required, associate an action (decision) to each class or category.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fast And Frugal Trees";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Feature(string text)
{
    string model = "llama3";
    string definition = "An individual measurable property or characteristic of a phenomenon. In computer vision and image processing, a feature is a piece of information about the content of an image; typically about whether a certain region of the image has certain properties. Features may be specific structures in an image (such as points, edges, or objects), or the result of a general neighborhood operation or feature detection applied to the image.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Feature";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::FeatureExtraction(string text)
{
    string model = "llama3";
    string definition = "In machine learning, pattern recognition, and image processing, feature extraction starts from an initial set of measured data and builds derived values (features) intended to be informative and non-redundant, facilitating the subsequent learning and generalization steps, and in some cases leading to better human interpretations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Feature Extraction";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::FeatureLearning(string text)
{
    string model = "llama3";
    string definition = "In machine learning, feature learning or representation learning is a set of techniques that allows a system to automatically discover the representations needed for feature detection or classification from raw data. This replaces manual feature engineering and allows a machine to both learn the features and use them to perform a specific task.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Feature Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::FeatureSelection(string text)
{
    string model = "llama3";
    string definition = "In machine learning and statistics, feature selection, also known as variable selection, attribute selection or variable subset selection, is the process of selecting a subset of relevant features (variables, predictors) for use in model construction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Feature Selection";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::FederatedLearning(string text)
{
    string model = "llama3";
    string definition = "A machine learning technique that allows for training models on multiple devices with decentralized data, thus helping preserve the privacy of individual users and their data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Federated Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::FirstOrderLogic(string text)
{
    string model = "llama3";
    string definition = "A collection of formal systems used in mathematics, philosophy, linguistics, and computer science. First-order logic uses quantified variables over non-logical objects and allows the use of sentences that contain variables, so that rather than propositions such as Socrates is a man one can have expressions in the form \"there exists X such that X is Socrates and X is a man\" and there exists is a quantifier while X is a variable. This distinguishes it from propositional logic, which does not use quantifiers or relations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "First Order Logic";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Fluent(string text)
{
    string model = "llama3";
    string definition = "A condition that can change over time. In logical approaches to reasoning about actions, fluents can be represented in first-order logic by predicates having an argument that depends on time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fluent";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::FormalLanguage(string text)
{
    string model = "llama3";
    string definition = "A set of words whose letters are taken from an alphabet and are well-formed according to a specific set of rules.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Formal Language";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ForwardChaining(string text)
{
    string model = "llama3";
    string definition = "ne of the two main methods of reasoning when using an inference engine and can be described logically as repeated application of modus ponens. Forward chaining is a popular implementation strategy for expert systems, businesses and production rule systems. The opposite of forward chaining is backward chaining. Forward chaining starts with the available data and uses inference rules to extract more data (from an end user, for example) until a goal is reached. An inference engine using forward chaining searches the inference rules until it finds one where the antecedent (If clause) is known to be true. When such a rule is found, the engine can conclude, or infer, the consequent (Then clause), resulting in the addition of new information to its data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Forward Chaining";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Frame(string text)
{
    string model = "llama3";
    string definition = "An artificial intelligence data structure used to divide knowledge into substructures by representing \"stereotyped situations\". Frames are the primary data structure used in artificial intelligence frame language.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Frame";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::FrameLanguage(string text)
{
    string model = "llama3";
    string definition = "A technology used for knowledge representation in artificial intelligence. Frames are stored as ontologies of sets and subsets of the frame concepts. They are similar to class hierarchies in object-oriented languages although their fundamental design goals are different. Frames are focused on explicit and intuitive representation of knowledge whereas objects focus on encapsulation and information hiding. Frames originated in AI research and objects primarily in software engineering. However, in practice the techniques and capabilities of frame and object-oriented languages overlap significantly.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Frame Language";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::FrameProblem(string text)
{
    string model = "llama3";
    string definition = "The problem of finding adequate collections of axioms for a viable description of a robot environment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Frame Problem";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::FriendlyArtificialIntelligence(string text)
{
    string model = "llama3";
    string definition = "A hypothetical artificial general intelligence (AGI) that would have a positive effect on humanity. It is a part of the ethics of artificial intelligence and is closely related to machine ethics. While machine ethics is concerned with how an artificially intelligent agent should behave, friendly artificial intelligence research is focused on how to practically bring about this behaviour and ensuring it is adequately constrained.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Friendly Artificial Intelligence";
        }
    }

    return nullptr;

}

string _ArtificialIntelligence::Terms::FuturesStudies(string text)
{
    string model = "llama3";
    string definition = "The study of postulating possible, probable, and preferable futures and the worldviews and myths that underlie them.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Futures Studies";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::FuzzyControlSystem(string text)
{
    string model = "llama3";
    string definition = "A control system based on fuzzy logic—a mathematical system that analyzes analog input values in terms of logical variables that take on continuous values between 0 and 1, in contrast to classical or digital logic, which operates on discrete values of either 1 or 0 (true or false, respectively).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fuzzy Control System";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::FuzzyLogic(string text)
{
    string model = "llama3";
    string definition = "A simple form for the many-valued logic, in which the truth values of variables may have any degree of \"Truthfulness\" that can be represented by any real number in the range between 0 (as in Completely False) and 1 (as in Completely True) inclusive. Consequently, It is employed to handle the concept of partial truth, where the truth value may range between completely true and completely false. In contrast to Boolean logic, where the truth values of variables may have the integer values 0 or 1 only.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fuzzy Logic";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::FuzzyRule(string text)
{
    string model = "llama3";
    string definition = "A rule used within fuzzy logic systems to infer an output based on input variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fuzzy Rule";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::FuzzySet(string text)
{
    string model = "llama3";
    string definition = "In classical set theory, the membership of elements in a set is assessed in binary terms according to a bivalent condition — an element either belongs or does not belong to the set. By contrast, fuzzy set theory permits the gradual assessment of the membership of elements in a set; this is described with the aid of a membership function valued in the real unit interval [0, 1]. Fuzzy sets generalize classical sets, since the indicator functions (aka characteristic functions) of classical sets are special cases of the membership functions of fuzzy sets, if the latter only take values 0 or 1. In fuzzy set theory, classical bivalent sets are usually called crisp sets. The fuzzy set theory can be used in a wide range of domains in which information is incomplete or imprecise, such as bioinformatics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fuzzy Set";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::GameTheory(string text)
{
    string model = "llama3";
    string definition = "The study of mathematical models of strategic interaction between rational decision-makers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Game Theory";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::GeneralGamePlaying(string text)
{
    string model = "llama3";
    string definition = "General game playing is the design of artificial intelligence programs to be able to run and play more than one game successfully.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "General Game Playing";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Generalization(string text)
{
    string model = "llama3";
    string definition = "The concept that humans, other animals, and artificial neural networks use past learning in present situations of learning if the conditions in the situations are regarded as similar.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Generalization";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::GeneralizationError(string text)
{
    string model = "llama3";
    string definition = "For supervised learning applications in machine learning and statistical learning theory, generalization error (also known as the out-of-sample error or the risk) is a measure of how accurately a learning algorithm is able to predict outcomes for previously unseen data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Generalization Error";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::GenerativeAdversarialNetwork(string text)
{
    string model = "llama3";
    string definition = "A class of machine learning systems. Two neural networks contest with each other in a zero-sum game framework.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Generative Adversarial Network";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::GenerativeArtificialIntelligence(string text)
{
    string model = "llama3";
    string definition = "Generative artificial intelligence is artificial intelligence capable of generating text, images, or other media in response to prompts. Generative AI models learn the patterns and structure of their input training data and then generate new data that has similar characteristics, typically using transformer-based deep neural networks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Generative Artificial Intelligence";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::GenerativePretrainedTransformer(string text)
{
    string model = "llama3";
    string definition = "A large language model based on the transformer architecture that generates text. It is first pretrained to predict the next token in texts (a token is typically a word, subword, or punctuation). After their pretraining, GPT models can generate human-like text by repeatedly predicting the token that they would expect to follow. GPT models are usually also fine-tuned, for example with reinforcement learning from human feedback to reduce hallucination or harmful behaviour, or to format the output in a conversationnal format.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Generative Pretrained Transformer";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::GeneticAlgorithm(string text)
{
    string model = "llama3";
    string definition = "A metaheuristic inspired by the process of natural selection that belongs to the larger class of evolutionary algorithms (EA). Genetic algorithms are commonly used to generate high-quality solutions to optimization and search problems by relying on bio-inspired operators such as mutation, crossover and selection.[";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Genetic Algorithm";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::GeneticOperator(string text)
{
    string model = "llama3";
    string definition = "An operator used in genetic algorithms to guide the algorithm towards a solution to a given problem. There are three main types of operators (mutation, crossover and selection), which must work in conjunction with one another in order for the algorithm to be successful.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Genetic Operator";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::GlowwormSwarmOptimization(string text)
{
    string model = "llama3";
    string definition = "A swarm intelligence optimization algorithm based on the behaviour of glowworms (also known as fireflies or lightning bugs).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Glowworm Swarm Optimization";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::GradientBoosting(string text)
{
    string model = "llama3";
    string definition = "A machine learning technique based on boosting in a functional space, where the target is pseudo-residuals instead of residuals as in traditional boosting.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Gradient Boosting";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::GraphAbstractDataType(string text)
{
    string model = "llama3";
    string definition = "In computer science, a graph is an abstract data type that is meant to implement the undirected graph and directed graph concepts from mathematics; specifically, the field of graph theory.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Graph Abstract Data Type";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::GraphDiscreteMathematics(string text)
{
    string model = "llama3";
    string definition = "In mathematics, and more specifically in graph theory, a graph is a structure amounting to a set of objects in which some pairs of the objects are in some sense \"related\". The objects correspond to mathematical abstractions called vertices (also called nodes or points) and each of the related pairs of vertices is called an edge (also called an arc or line).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Graph Discrete Mathematics";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::GraphDatabase(string text)
{
    string model = "llama3";
    string definition = "A database that uses graph structures for semantic queries with nodes, edges, and properties to represent and store data. A key concept of the system is the graph (or edge or relationship), which directly relates data items in the store a collection of nodes of data and edges representing the relationships between the nodes. The relationships allow data in the store to be linked together directly, and in many cases retrieved with one operation. Graph databases hold the relationships between data as a priority. Querying relationships within a graph database is fast because they are perpetually stored within the database itself. Relationships can be intuitively visualized using graph databases, making it useful for heavily inter-connected data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Graph Database";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::GraphTheory(string text)
{
    string model = "llama3";
    string definition = "The study of graphs, which are mathematical structures used to model pairwise relations between objects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Graph Theory";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::GraphTransversal(string text)
{
    string model = "llama3";
    string definition = "The process of visiting (checking and/or updating) each vertex in a graph. Such traversals are classified by the order in which the vertices are visited. Tree traversal is a special case of graph traversal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Graph Transversal";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Hallucination(string text)
{
    string model = "llama3";
    string definition = "A response generated by AI that contains false or misleading information presented as fact.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hallucination";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Heuristic(string text)
{
    string model = "llama3";
    string definition = "A technique designed for solving a problem more quickly when classic methods are too slow, or for finding an approximate solution when classic methods fail to find any exact solution. This is achieved by trading optimality, completeness, accuracy, or precision for speed. In a way, it can be considered a shortcut. A heuristic function, also called simply a heuristic, is a function that ranks alternatives in search algorithms at each branching step based on available information to decide which branch to follow. For example, it may approximate the exact solution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Heuristic";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::HiddenLayer(string text)
{
    string model = "llama3";
    string definition = "A layer of neurons in an artificial neural network that is neither an input layer nor an output layer.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hidden Layer";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::HyperHeuristic(string text)
{
    string model = "llama3";
    string definition = "A heuristic search method that seeks to automate the process of selecting, combining, generating, or adapting several simpler heuristics (or components of such heuristics) to efficiently solve computational search problems, often by the incorporation of machine learning techniques. One of the motivations for studying hyper-heuristics is to build systems which can handle classes of problems rather than solving just one problem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "HyperHeuristic";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Hyperperameter(string text)
{
    string model = "llama3";
    string definition = "A parameter that can be set in order to define any configurable part of a machine learning model's learning process.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hyperperameter";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::HyperperameterOptimization(string text)
{
    string model = "llama3";
    string definition = "The process of choosing a set of optimal hyperparameters for a learning algorithm.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hyperperameter Optimization";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Hyperplane(string text)
{
    string model = "llama3";
    string definition = "A decision boundary in machine learning classifiers that partitions the input space into two or more sections, with each section corresponding to a unique class label.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Hyperplane";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::IEEEComputationalIntelligenceSociety(string text)
{
    string model = "llama3";
    string definition = "A professional society of the Institute of Electrical and Electronics Engineers (IEEE) focussing on \"the theory, design, application, and development of biologically and linguistically motivated computational paradigms emphasizing neural networks, connectionist systems, genetic algorithms, evolutionary programming, fuzzy systems, and hybrid intelligent systems in which these paradigms are contained\".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "IEEE Computational Intelligence Society";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::IncrementalLearning(string text)
{
    string model = "llama3";
    string definition = "A method of machine learning, in which input data is continuously used to extend the existing model's knowledge i.e. to further train the model. It represents a dynamic technique of supervised and unsupervised learning that can be applied when training data becomes available gradually over time or its size is out of system memory limits. Algorithms that can facilitate incremental learning are known as incremental machine learning algorithms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Incremental Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::InferenceEngine(string text)
{
    string model = "llama3";
    string definition = "A component of the system that applies logical rules to the knowledge base to deduce new information.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inference Engine";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::InformationIntegration(string text)
{
    string model = "llama3";
    string definition = "The merging of information from heterogeneous sources with differing conceptual, contextual and typographical representations. It is used in data mining and consolidation of data from unstructured or semi-structured resources. Typically, information integration refers to textual representations of knowledge but is sometimes applied to rich-media content. Information fusion, which is a related term, involves the combination of information into a new set of information towards reducing redundancy and uncertainty.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Information Integration";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::InformationProcessingLanguage(string text)
{
    string model = "llama3";
    string definition = "A programming language that includes features intended to help with programs that perform simple problem solving actions such as lists, dynamic memory allocation, data types, recursion, functions as arguments, generators, and cooperative multitasking. IPL invented the concept of list processing, albeit in an assembly-language style.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Information ProcessingLanguage";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::IntelligenceAmplification(string text)
{
    string model = "llama3";
    string definition = "The effective use of information technology in augmenting human intelligence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intelligence Amplification";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::IntelligenceExplosion(string text)
{
    string model = "llama3";
    string definition = "A possible outcome of humanity building artificial general intelligence (AGI). AGI would be capable of recursive self-improvement leading to rapid emergence of ASI (artificial superintelligence), the limits of which are unknown, at the time of the technological singularity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intelligence Explosion";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::IntelligentAgent(string text)
{
    string model = "llama3";
    string definition = "An autonomous entity which acts, directing its activity towards achieving goals (i.e. it is an agent), upon an environment using observation through sensors and consequent actuators (i.e. it is intelligent). Intelligent agents may also learn or use knowledge to achieve their goals. They may be very simple or very complex.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intelligent Agent";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::IntelligentControl(string text)
{
    string model = "llama3";
    string definition = "A class of control techniques that use various artificial intelligence computing approaches like neural networks, Bayesian probability, fuzzy logic, machine learning, reinforcement learning, evolutionary computation and genetic algorithms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intelligent Control";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::IntelligentPersonalAssistant(string text)
{
    string model = "llama3";
    string definition = "A software agent that can perform tasks or services for an individual based on verbal commands. Sometimes the term \"chatbot\" is used to refer to virtual assistants generally or specifically accessed by online chat (or in some cases online chat programs that are exclusively for entertainment purposes). Some virtual assistants are able to interpret human speech and respond via synthesized voices. Users can ask their assistants questions, control home automation devices and media playback via voice, and manage other basic tasks such as email, to-do lists, and calendars with verbal commands.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intelligent Personal Assistant";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Interpretation(string text)
{
    string model = "llama3";
    string definition = "An assignment of meaning to the symbols of a formal language. Many formal languages used in mathematics, logic, and theoretical computer science are defined in solely syntactic terms, and as such do not have any meaning until they are given some interpretation. The general study of interpretations of formal languages is called formal semantics.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Interpretation";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::IntrinsicMotivation(string text)
{
    string model = "llama3";
    string definition = "An intelligent agent is intrinsically motivated to act if the information content alone, of the experience resulting from the action, is the motivating factor. Information content in this context is measured in the information theory sense as quantifying uncertainty. A typical intrinsic motivation is to search for unusual (surprising) situations, in contrast to a typical extrinsic motivation such as the search for food. Intrinsically motivated artificial agents display behaviours akin to exploration and curiosity.[";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Intrinsic Motivation";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::IssueTree(string text)
{
    string model = "llama3";
    string definition = "A graphical breakdown of a question that dissects it into its different components vertically and that progresses into details as it reads to the right. Issue trees are useful in problem solving to identify the root causes of a problem as well as to identify its potential solutions. They also provide a reference point to see how each piece fits into the whole picture of a problem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Issue Tree";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::JunctionTreeAlgorithm(string text)
{
    string model = "llama3";
    string definition = "A method used in machine learning to extract marginalization in general graphs. In essence, it entails performing belief propagation on a modified graph called a junction tree. The graph is called a tree because it branches into different sections of data; nodes of variables are the branches.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Junction Tree Algorithm";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::KernelMethod(string text)
{
    string model = "llama3";
    string definition = "In machine learning, kernel methods are a class of algorithms for pattern analysis, whose best known member is the support vector machine (SVM). The general task of pattern analysis is to find and study general types of relations (e.g., cluster analysis, rankings, principal components, correlations, classifications) in datasets.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Kernel Method";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::KLONE(string text)
{
    string model = "llama3";
    string definition = "A well-known knowledge representation system in the tradition of semantic networks and frames; that is, it is a frame language. The system is an attempt to overcome semantic indistinctness in semantic network representations and to explicitly represent conceptual information as a structured inheritance network.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "KLONE";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::KNearestNeighbors(string text)
{
    string model = "llama3";
    string definition = "A non-parametric supervised learning method first developed by Evelyn Fix and Joseph Hodges in 1951, and later expanded by Thomas Cover. It is used for classification and regression.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "K Nearest Neighbors";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::KnowledgeAcquisition(string text)
{
    string model = "llama3";
    string definition = "The process used to define the rules and ontologies required for a knowledge-based system. The phrase was first used in conjunction with expert systems to describe the initial tasks associated with developing an expert system, namely finding and interviewing domain experts and capturing their knowledge via rules, objects, and frame-based ontologies.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Knowledge Acquisition";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::KnowledgeBasedSystem(string text)
{
    string model = "llama3";
    string definition = "A computer program that reasons and uses a knowledge base to solve complex problems. The term is broad and refers to many different kinds of systems. The one common theme that unites all knowledge based systems is an attempt to represent knowledge explicitly and a reasoning system that allows it to derive new knowledge. Thus, a knowledge-based system has two distinguishing features: a knowledge base and an inference engine.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Knowledge Based System";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::KnowledgeDistilation(string text)
{
    string model = "llama3";
    string definition = "The process of transferring knowledge from a large machine learning model to a smaller one.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Knowledge Distilation";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::KnowledgeEngineering(string text)
{
    string model = "llama3";
    string definition = "All technical, scientific, and social aspects involved in building, maintaining, and using knowledge-based systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Knowledge Engineering";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::KnowledgeExtraction(string text)
{
    string model = "llama3";
    string definition = "The creation of knowledge from structured (relational databases, XML) and unstructured (text, documents, images) sources. The resulting knowledge needs to be in a machine-readable and machine-interpretable format and must represent knowledge in a manner that facilitates inferencing. Although it is methodically similar to information extraction and ETL, the main criterion is that the extraction result goes beyond the creation of structured information or the transformation into a relational schema. It requires either the reuse of existing formal knowledge (reusing identifiers or ontologies) or the generation of a schema based on the source data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Knowledge Extraction";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::KnowledgeInterchangeFormat(string text)
{
    string model = "llama3";
    string definition = "A computer language designed to enable systems to share and reuse information from knowledge-based systems. KIF is similar to frame languages such as KL-ONE and LOOM but unlike such language its primary role is not intended as a framework for the expression or use of knowledge but rather for the interchange of knowledge between systems. The designers of KIF likened it to PostScript. PostScript was not designed primarily as a language to store and manipulate documents but rather as an interchange format for systems and devices to share documents. In the same way KIF is meant to facilitate sharing of knowledge across different systems that use different languages, formalisms, platforms, etc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Knowledge Interchange Format";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::KnowledgeRepresentationAndReasoning(string text)
{
    string model = "llama3";
    string definition = "The field of artificial intelligence dedicated to representing information about the world in a form that a computer system can utilize to solve complex tasks such as diagnosing a medical condition or having a dialog in a natural language. Knowledge representation incorporates findings from psychology about how humans solve problems and represent knowledge in order to design formalisms that will make complex systems easier to design and build. Knowledge representation and reasoning also incorporates findings from logic to automate various kinds of reasoning, such as the application of rules or the relations of sets and subsets. Examples of knowledge representation formalisms include semantic nets, systems architecture, frames, rules, and ontologies. Examples of automated reasoning engines include inference engines, theorem provers, and classifiers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Knowledge Representation And Reasoning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::KMeansClustering(string text)
{
    string model = "llama3";
    string definition = "A method of vector quantization, originally from signal processing, that aims to partition n observations into k clusters in which each observation belongs to the cluster with the nearest mean (cluster centers or cluster centroid), serving as a prototype of the cluster.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "K Means Clustering";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::LanguageModel(string text)
{
    string model = "llama3";
    string definition = "A probabilistic model that manipulates natural language.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Language Model";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::LargeLanguageModel(string text)
{
    string model = "llama3";
    string definition = "A language model with a large number of parameters (typically at least a billion) that are adjusted during training. Due to its size, it requires a lot of data and computing capability to train. Large language models are usually based on the transformer architecture.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Large Language Model";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::LazyLearning(string text)
{
    string model = "llama3";
    string definition = "In machine learning, lazy learning is a learning method in which generalization of the training data is, in theory, delayed until a query is made to the system, as opposed to in eager learning, where the system tries to generalize the training data before receiving queries.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Lazy Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::LISP(string text)
{
    string model = "llama3";
    string definition = "A family of programming languages with a long history and a distinctive, fully parenthesized prefix notation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "LISP";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::LogicProgramming(string text)
{
    string model = "llama3";
    string definition = "A type of programming paradigm which is largely based on formal logic. Any program written in a logic programming language is a set of sentences in logical form, expressing facts and rules about some problem domain. Major logic programming language families include Prolog, answer set programming (ASP), and Datalog.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logic Programming";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::LongShortTermMemory(string text)
{
    string model = "llama3";
    string definition = "An artificial recurrent neural network architecture used in the field of deep learning. Unlike standard feedforward neural networks, LSTM has feedback connections that make it a \"general purpose computer\" (that is, it can compute anything that a Turing machine can). It can not only process single data points (such as images), but also entire sequences of data (such as speech or video).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Long Short Term Memory";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::MachineVision(string text)
{
    string model = "llama3";
    string definition = "The technology and methods used to provide imaging-based automatic inspection and analysis for such applications as automatic inspection, process control, and robot guidance, usually in industry. Machine vision is a term encompassing a large number of technologies, software and hardware products, integrated systems, actions, methods and expertise. Machine vision as a systems engineering discipline can be considered distinct from computer vision, a form of computer science. It attempts to integrate existing technologies in new ways and apply them to solve real world problems. The term is the prevalent one for these functions in industrial automation environments but is also used for these functions in other environments such as security and vehicle guidance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Machine Vision";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::MarkovChain(string text)
{
    string model = "llama3";
    string definition = "A stochastic model describing a sequence of possible events in which the probability of each event depends only on the state attained in the previous event.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Markov Chain";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::MarkovDecisionProcess(string text)
{
    string model = "llama3";
    string definition = "A discrete time stochastic control process. It provides a mathematical framework for modeling decision making in situations where outcomes are partly random and partly under the control of a decision maker. MDPs are useful for studying optimization problems solved via dynamic programming and reinforcement learning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "MarkovDecision Process";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::MathematicalOptimization(string text)
{
    string model = "llama3";
    string definition = "In mathematics, computer science, and operations research, the selection of a best element (with regard to some criterion) from some set of available alternatives.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _ArtificialIntelligence::Terms::MachineLearning(string text)
{
    string model = "llama3";
    string definition = "The scientific study of algorithms and statistical models that computer systems use in order to perform a specific task effectively without using explicit instructions, relying on patterns and inference instead.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _ArtificialIntelligence::Terms::MachineListening(string text)
{
    string model = "llama3";
    string definition = "A general field of study of algorithms and systems for audio understanding by machine.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Machine Listening";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::MachinePerception(string text)
{
    string model = "llama3";
    string definition = "The capability of a computer system to interpret data in a manner that is similar to the way humans use their senses to relate to the world around them.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Machine Perception";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::MechanismDesign(string text)
{
    string model = "llama3";
    string definition = "A field in economics and game theory that takes an engineering approach to designing economic mechanisms or incentives, toward desired objectives, in strategic settings, where players act rationally. Because it starts at the end of the game, then goes backwards, it is also called reverse game theory. It has broad applications, from economics and politics (markets, auctions, voting procedures) to networked-systems (internet interdomain routing, sponsored search auctions).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mechanism Design";
        }
    }

    return nullptr;
}

//string _ArtificialIntelligence::Terms::MechanismDesign(string text)
//{
//    string model = "llama3";
//    string definition = "A multidisciplinary branch of engineering that focuses on the engineering of both electrical and mechanical systems, and also includes a combination of robotics, electronics, computer, telecommunications, systems, control, and product engineering.";
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
//            return "Mechanism Design";
//        }
//    }
//
//    return nullptr;
//}

string _ArtificialIntelligence::Terms::MetabolicNetworkReconstructionAndSimulation(string text)
{
    string model = "llama3";
    string definition = "Allows for an in-depth insight into the molecular mechanisms of a particular organism. In particular, these models correlate the genome with molecular physiology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metabolic Network Reconstruction And Simulation";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Metaheuristic(string text)
{
    string model = "llama3";
    string definition = "In computer science and mathematical optimization, a metaheuristic is a higher-level procedure or heuristic designed to find, generate, or select a heuristic (partial search algorithm) that may provide a sufficiently good solution to an optimization problem, especially with incomplete or imperfect information or limited computation capacity. Metaheuristics sample a set of solutions which is too large to be completely sampled.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Metaheuristic";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ModelChecking(string text)
{
    string model = "llama3";
    string definition = "In computer science, model checking or property checking is, for a given model of a system, exhaustively and automatically checking whether this model meets a given specification. Typically, one has hardware or software systems in mind, whereas the specification contains safety requirements such as the absence of deadlocks and similar critical states that can cause the system to crash. Model checking is a technique for automatically verifying correctness properties of finite-state systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Model Checking";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ModusPonens(string text)
{
    string model = "llama3";
    string definition = "In propositional logic, modus ponens is a rule of inference. It can be summarized as \"P implies Q and P is asserted to be true, therefore Q must be true.\"";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Modus Ponens";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ModusTollens(string text)
{
    string model = "llama3";
    string definition = "In propositional logic, modus tollens is a valid argument form and a rule of inference. It is an application of the general truth that if a statement is true, then so is its contrapositive. The inference rule modus tollens asserts that the inference from P implies Q to the negation of Q implies the negation of P is valid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Modus Tollens";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::MonteCarloTreeSearch(string text)
{
    string model = "llama3";
    string definition = "In computer science, Monte Carlo tree search (MCTS) is a heuristic search algorithm for some kinds of decision processes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Monte Carlo Tree Search";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::MultiAgentSystem(string text)
{
    string model = "llama3";
    string definition = "A computerized system composed of multiple interacting intelligent agents. Multi-agent systems can solve problems that are difficult or impossible for an individual agent or a monolithic system to solve. Intelligence may include methodic, functional, procedural approaches, algorithmic search or reinforcement learning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Multi Agent System";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::MultilayerPerceptron(string text)
{
    string model = "llama3";
    string definition = "In deep learning, a multilayer perceptron (MLP) is a name for a modern feedforward neural network consisting of fully connected neurons with nonlinear activation functions, organized in layers, notable for being able to distinguish data that is not linearly separable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Multilayer Perceptron";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::MultiSwarmOptimization(string text)
{
    string model = "llama3";
    string definition = "A variant of particle swarm optimization (PSO) based on the use of multiple sub-swarms instead of one (standard) swarm. The general approach in multi-swarm optimization is that each sub-swarm focuses on a specific region while a specific diversification method decides where and when to launch the sub-swarms. The multi-swarm framework is especially fitted for the optimization on multi-modal problems, where multiple (local) optima exist.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Multi Swarm Optimization";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Mutation(string text)
{
    string model = "llama3";
    string definition = "A genetic operator used to maintain genetic diversity from one generation of a population of genetic algorithm chromosomes to the next. It is analogous to biological mutation. Mutation alters one or more gene values in a chromosome from its initial state. In mutation, the solution may change entirely from the previous solution. Hence GA can come to a better solution by using mutation. Mutation occurs during evolution according to a user-definable mutation probability. This probability should be set low. If it is set too high, the search will turn into a primitive random search.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mutation";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Mycin(string text)
{
    string model = "llama3";
    string definition = "An early backward chaining expert system that used artificial intelligence to identify bacteria causing severe infections, such as bacteremia and meningitis, and to recommend antibiotics, with the dosage adjusted for patient's body weight – the name derived from the antibiotics themselves, as many antibiotics have the suffix \" - mycin\". The MYCIN system was also used for the diagnosis of blood clotting diseases.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Mycin";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NaiveBayesClassifier(string text)
{
    string model = "llama3";
    string definition = "In machine learning, naive Bayes classifiers are a family of simple probabilistic classifiers based on applying Bayes' theorem with strong (naive) independence assumptions between the features.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Naive Bayes Classifier";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NaiveSemantics(string text)
{
    string model = "llama3";
    string definition = "An approach used in computer science for representing basic knowledge about a specific domain, and has been used in applications such as the representation of the meaning of natural language sentences in artificial intelligence applications. In a general setting the term has been used to refer to the use of a limited store of generally understood knowledge about a specific domain in the world, and has been applied to fields such as the knowledge based design of data schemas.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Naive Semantics";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NameBinding(string text)
{
    string model = "llama3";
    string definition = "In programming languages, name binding is the association of entities (data and/or code) with identifiers. An identifier bound to an object is said to reference that object. Machine languages have no built-in notion of identifiers, but name-object bindings as a service and notation for the programmer is implemented by programming languages. Binding is intimately connected with scoping, as scope determines which names bind to which objects – at which locations in the program code (lexically) and in which one of the possible execution paths (temporally). Use of an identifier id in a context that establishes a binding for id is called a binding (or defining) occurrence. In all other occurrences (e.g., in expressions, assignments, and subprogram calls), an identifier stands for what it is bound to; such occurrences are called applied occurrences.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Name Binding";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NamedEntityRecognition(string text)
{
    string model = "llama3";
    string definition = "A subtask of information extraction that seeks to locate and classify named entity mentions in unstructured text into pre-defined categories such as the person names, organizations, locations, medical codes, time expressions, quantities, monetary values, percentages, etc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Named Entity Recognition";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NamedGraph(string text)
{
    string model = "llama3";
    string definition = "A key concept of Semantic Web architecture in which a set of Resource Description Framework statements (a graph) are identified using a URI, allowing descriptions to be made of that set of statements such as context, provenance information or other such metadata. Named graphs are a simple extension of the RDF data model through which graphs can be created but the model lacks an effective means of distinguishing between them once published on the Web at large.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Named Graph";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NaturalLanguageGeneration(string text)
{
    string model = "llama3";
    string definition = "A software process that transforms structured data into plain-English content. It can be used to produce long-form content for organizations to automate custom reports, as well as produce custom content for a web or mobile application. It can also be used to generate short blurbs of text in interactive conversations (a chatbot) which might even be read out loud by a text-to-speech system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Natural Language Generation";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NaturalLanguageProcessing(string text)
{
    string model = "llama3";
    string definition = "A subfield of computer science, information engineering, and artificial intelligence concerned with the interactions between computers and human (natural) languages, in particular how to program computers to process and analyze large amounts of natural language data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Natural Language Processing";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NaturalLangugeProgramming(string text)
{
    string model = "llama3";
    string definition = "An ontology-assisted way of programming in terms of natural-language sentences, e.g. English.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Natural Languge Programming";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NetworkMotif(string text)
{
    string model = "llama3";
    string definition = "All networks, including biological networks, social networks, technological networks (e.g., computer networks and electrical circuits) and more, can be represented as graphs, which include a wide variety of subgraphs. One important local property of networks are so-called network motifs, which are defined as recurrent and statistically significant sub-graphs or patterns.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Network Motif";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NeuralMachineTranslation(string text)
{
    string model = "llama3";
    string definition = "An approach to machine translation that uses a large artificial neural network to predict the likelihood of a sequence of words, typically modeling entire sentences in a single integrated model.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neural Machine Translation";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NeuralNetwork(string text)
{
    string model = "llama3";
    string definition = "A neural network can refer to either a neural circuit of biological neurons (sometimes also called a biological neural network), or a network of artificial neurons or nodes in the case of an artificial neural network. Artificial neural networks are used for solving artificial intelligence (AI) problems; they model connections of biological neurons as weights between nodes. A positive weight reflects an excitatory connection, while negative values mean inhibitory connections. All inputs are modified by a weight and summed. This activity is referred to as a linear combination. Finally, an activation function controls the amplitude of the output. For example, an acceptable range of output is usually between 0 and 1, or it could be −1 and 1.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neural Network";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NeuralTuringMachine(string text)
{
    string model = "llama3";
    string definition = "A recurrent neural network model. NTMs combine the fuzzy pattern matching capabilities of neural networks with the algorithmic power of programmable computers. An NTM has a neural network controller coupled to external memory resources, which it interacts with through attentional mechanisms. The memory interactions are differentiable end-to-end, making it possible to optimize them using gradient descent. An NTM with a long short-term memory (LSTM) network controller can infer simple algorithms such as copying, sorting, and associative recall from examples alone.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neural Turing Machine";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NeuroFuzzy(string text)
{
    string model = "llama3";
    string definition = "Combinations of artificial neural networks and fuzzy logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neuro Fuzzy";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Neurocybernetic(string text)
{
    string model = "llama3";
    string definition = "A direct communication pathway between an enhanced or wired brain and an external device. BCI differs from neuromodulation in that it allows for bidirectional information flow. BCIs are often directed at researching, mapping, assisting, augmenting, or repairing human cognitive or sensory-motor functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neurocybernetic";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NeuromorphicEngineering(string text)
{
    string model = "llama3";
    string definition = "A concept describing the use of very-large-scale integration (VLSI) systems containing electronic analog circuits to mimic neuro-biological architectures present in the nervous system.[252] In recent times, the term neuromorphic has been used to describe analog, digital, mixed-mode analog/digital VLSI, and software systems that implement models of neural systems (for perception, motor control, or multisensory integration). The implementation of neuromorphic computing on the hardware level can be realized by oxide-based memristors, spintronic memories, threshold switches, and transistors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Neuromorphic Engineering";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Node(string text)
{
    string model = "llama3";
    string definition = "A basic unit of a data structure, such as a linked list or tree data structure. Nodes contain data and also may link to other nodes. Links between nodes are often implemented by pointers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Node";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NondeterministicAlgorithm(string text)
{
    string model = "llama3";
    string definition = "An algorithm that, even for the same input, can exhibit different behaviors on different runs, as opposed to a deterministic algorithm.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nondeterministic Algorithm";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NouvelleAI(string text)
{
    string model = "llama3";
    string definition = "Nouvelle AI differs from classical AI by aiming to produce robots with intelligence levels similar to insects. Researchers believe that intelligence can emerge organically from simple behaviors as these intelligences interacted with the \"real world\", instead of using the constructed worlds which symbolic AIs typically needed to have programmed into them.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nouvelle AI";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NP(string text)
{
    string model = "llama3";
    string definition = "In computational complexity theory, NP (nondeterministic polynomial time) is a complexity class used to classify decision problems. NP is the set of decision problems for which the problem instances, where the answer is \"yes\", have proofs verifiable in polynomial time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NP";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NPCompleteness(string text)
{
    string model = "llama3";
    string definition = "In computational complexity theory, a problem is NP-complete when it can be solved by a restricted class of brute force search algorithms and it can be used to simulate any other problem with a similar algorithm. More precisely, each input to the problem should be associated with a set of solutions of polynomial length, whose validity can be tested quickly (in polynomial time , such that the output for any input is \"yes\" if the solution set is non-empty and \"no\" if it is empty.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NP Completeness";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::NPHardness(string text)
{
    string model = "llama3";
    string definition = "In computational complexity theory, the defining property of a class of problems that are, informally, \"at least as hard as the hardest problems in NP\". A simple example of an NP-hard problem is the subset sum problem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "NP Hardness";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::OccamsRazor(string text)
{
    string model = "llama3";
    string definition = "The problem-solving principle that states that when presented with competing hypotheses that make the same predictions, one should select the solution with the fewest assumptions; the principle is not meant to filter out hypotheses that make different predictions. The idea is attributed to the English Franciscan friar William of Ockham (c. 1287–1347), a scholastic philosopher and theologian.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Occams Razor";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::OfflineLearnnig(string text)
{
    string model = "llama3";
    string definition = "A machine learning training approach in which a model is trained on a fixed dataset that is not updated during the learning process.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Offline Learnnig";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::OnlineMachineLearning(string text)
{
    string model = "llama3";
    string definition = "A method of machine learning in which data becomes available in a sequential order and is used to update the best predictor for future data at each step, as opposed to batch learning techniques which generate the best predictor by learning on the entire training data set at once. Online learning is a common technique used in areas of machine learning where it is computationally infeasible to train over the entire dataset, requiring the need of out-of-core algorithms. It is also used in situations where it is necessary for the algorithm to dynamically adapt to new patterns in the data, or when the data itself is generated as a function of time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Online Machine Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::OntologicalLearning(string text)
{
    string model = "llama3";
    string definition = "The automatic or semi-automatic creation of ontologies, including extracting the corresponding domain's terms and the relationships between the concepts that these terms represent from a corpus of natural language text, and encoding them with an ontology language for easy retrieval.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ontological Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::OpenAI(string text)
{
    string model = "llama3";
    string definition = "The for-profit corporation OpenAI LP, whose parent organization is the non-profit organization OpenAI Inc that conducts research in the field of artificial intelligence (AI) with the stated aim to promote and develop friendly AI in such a way as to benefit humanity as a whole.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OpenAI";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::OpenCog(string text)
{
    string model = "llama3";
    string definition = "A project that aims to build an open-source artificial intelligence framework. OpenCog Prime is an architecture for robot and virtual embodied cognition that defines a set of interacting components designed to give rise to human-equivalent artificial general intelligence (AGI) as an emergent phenomenon of the whole system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OpenCog";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::OpenMindCommonSense(string text)
{
    string model = "llama3";
    string definition = "An artificial intelligence project based at the Massachusetts Institute of Technology (MIT) Media Lab whose goal is to build and utilize a large commonsense knowledge base from the contributions of many thousands of people across the Web.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "OpenMind Common Sense";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::OpenSourceSoftware(string text)
{
    string model = "llama3";
    string definition = "A type of computer software in which source code is released under an license in which the copyright holder grants users the rights to study, change, and distribute the software to anyone and for any purpose. Open-source software may be developed in an collaborative public manner. Open-source software is a prominent example of open collaboration.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Open Source Software";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Overfitting(string text)
{
    string model = "llama3";
    string definition = "\"The production of an analysis that corresponds too closely or exactly to a particular set of data, and may therefore fail to fit to additional data or predict future observations reliably\". In other words, an overfitted model memorizes training data details but cannot generalize to new data. Conversely, an underfitted model is too simple to capture the complexity of the training data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Overfitting";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::PartialOrderReduction(string text)
{
    string model = "llama3";
    string definition = "A technique for reducing the size of the state-space to be searched by a model checking or automated planning and scheduling algorithm. It exploits the commutativity of concurrently executed transitions, which result in the same state when executed in different orders.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Partial Order Reduction";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::PartiallyObservableMarkovDecisionProcess(string text)
{
    string model = "llama3";
    string definition = "A generalization of a Markov decision process (MDP). A POMDP models an agent decision process in which it is assumed that the system dynamics are determined by an MDP, but the agent cannot directly observe the underlying state. Instead, it must maintain a probability distribution over the set of possible states, based on a set of observations and observation probabilities, and the underlying MDP.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Partially Observable Markov Decision Process";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ParticalSwarmOptimization(string text)
{
    string model = "llama3";
    string definition = "A computational method that optimizes a problem by iteratively trying to improve a candidate solution with regard to a given measure of quality. It solves a problem by having a population of candidate solutions, here dubbed particles, and moving these particles around in the search-space according to simple mathematical formulae over the particle's position and velocity. Each particle's movement is influenced by its local best known position, but is also guided toward the best known positions in the search-space, which are updated as better positions are found by other particles. This is expected to move the swarm toward the best solutions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Partical Swarm Optimization";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Pathfinding(string text)
{
    string model = "llama3";
    string definition = "The plotting, by a computer application, of the shortest route between two points. It is a more practical variant on solving mazes. This field of research is based heavily on Dijkstra's algorithm for finding a shortest path on a weighted graph.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pathfinding";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::PatternRecognition(string text)
{
    string model = "llama3";
    string definition = "Concerned with the automatic discovery of regularities in data through the use of computer algorithms and with the use of these regularities to take actions such as classifying the data into different categories.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pattern Recognition";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Perceptron(string text)
{
    string model = "llama3";
    string definition = "An algorithm for supervised learning of binary classifiers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Perceptron";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::PredicateLogic(string text)
{
    string model = "llama3";
    string definition = "A collection of formal systems used in mathematics, philosophy, linguistics, and computer science. First-order logic uses quantified variables over non-logical objects and allows the use of sentences that contain variables, so that rather than propositions such as Socrates is a man one can have expressions in the form \"there exists x such that x is Socrates and x is a man\" and there exists is a quantifier while x is a variable. This distinguishes it from propositional logic, which does not use quantifiers or relations; in this sense, propositional logic is the foundation of first-order logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Predicate Logic";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::PredictiveAnalytics(string text)
{
    string model = "llama3";
    string definition = "A variety of statistical techniques from data mining, predictive modelling, and machine learning, that analyze current and historical facts to make predictions about future or otherwise unknown events.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Predictive Analytics";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::PrincipalComponentAnalysis(string text)
{
    string model = "llama3";
    string definition = "A statistical procedure that uses an orthogonal transformation to convert a set of observations of possibly correlated variables (entities each of which takes on various numerical values) into a set of values of linearly uncorrelated variables called principal components. This transformation is defined in such a way that the first principal component has the largest possible variance (that is, accounts for as much of the variability in the data as possible), and each succeeding component, in turn, has the highest variance possible under the constraint that it is orthogonal to the preceding components. The resulting vectors (each being a linear combination of the variables and containing n observations) are an uncorrelated orthogonal basis set. PCA is sensitive to the relative scaling of the original variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Principal Component Analysis";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::PrincipleOfRationality(string text)
{
    string model = "llama3";
    string definition = "A principle coined by Karl R. Popper in his Harvard Lecture of 1963, and published in his book Myth of Framework. It is related to what he called the 'logic of the situation' in an Economica article of 1944/1945, published later in his book The Poverty of Historicism. According to Popper's rationality principle, agents act in the most adequate way according to the objective situation. It is an idealized conception of human behavior which he used to drive his model of situational logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Principle Of Rationality";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ProbabalisticProgramming(string text)
{
    string model = "llama3";
    string definition = "A programming paradigm in which probabilistic models are specified and inference for these models is performed automatically. It represents an attempt to unify probabilistic modeling and traditional general-purpose programming in order to make the former easier and more widely applicable. It can be used to create systems that help make decisions in the face of uncertainty. Programming languages used for probabilistic programming are referred to as \"Probabilistic programming languages\" (PPLs).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Probabalistic Programming";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ProductionSystem(string text)
{
    string model = "llama3";
    string definition = "A computer program typically used to provide some form of AI, which consists primarily of a set of rules about behavior, but also includes the mechanism necessary to follow those rules as the system responds to states of the world.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Production System";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ProgrammingLanguage(string text)
{
    string model = "llama3";
    string definition = "A formal language, which comprises a set of instructions that produce various kinds of output. Programming languages are used in computer programming to implement algorithms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Programming Language";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Prolog(string text)
{
    string model = "llama3";
    string definition = "A logic programming language associated with artificial intelligence and computational linguistics. Prolog has its roots in first-order logic, a formal logic, and unlike many other programming languages, Prolog is intended primarily as a declarative programming language: the program logic is expressed in terms of relations, represented as facts and rules. A computation is initiated by running a query over these relations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Prolog";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::PropositionalCalculus(string text)
{
    string model = "llama3";
    string definition = "A branch of logic which deals with propositions (which can be true or false) and argument flow. Compound propositions are formed by connecting propositions by logical connectives. The propositions without logical connectives are called atomic propositions. Unlike first-order logic, propositional logic does not deal with non-logical objects, predicates about them, or quantifiers. However, all the machinery of propositional logic is included in first-order logic and higher-order logics. In this sense, propositional logic is the foundation of first-order logic and higher-order logic.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Propositional Calculus";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ProximalPolicyOptimization(string text)
{
    string model = "llama3";
    string definition = "A reinforcement learning algorithm for training an intelligent agent's decision function to accomplish difficult tasks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Proximal Policy Optimization";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Python(string text)
{
    string model = "llama3";
    string definition = "An interpreted, high-level, general-purpose programming language created by Guido van Rossum and first released in 1991. Python's design philosophy emphasizes code readability with its notable use of significant whitespace. Its language constructs and object-oriented approach aim to help programmers write clear, logical code for small and large-scale projects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Python";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::PyTorch(string text)
{
    string model = "llama3";
    string definition = "A machine learning library based on the Torch library, used for applications such as computer vision and natural language processing,  originally developed by Meta AI and now part of the Linux Foundation umbrella.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "PyTorch";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::QLearning(string text)
{
    string model = "llama3";
    string definition = "A model-free reinforcement learning algorithm for learning the value of an action in a particular state.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Q Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::QualificationProblem(string text)
{
    string model = "llama3";
    string definition = "In philosophy and artificial intelligence (especially knowledge-based systems), the qualification problem is concerned with the impossibility of listing all of the preconditions required for a real-world action to have its intended effect. It might be posed as how to deal with the things that prevent me from achieving my intended result. It is strongly connected to, and opposite the ramification side of, the frame problem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Qualification Problem";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Quantifier(string text)
{
    string model = "llama3";
    string definition = "In logic, quantification specifies the quantity of specimens in the domain of discourse that satisfy an open formula. The two most common quantifiers mean \"for all\" and \"there exists\". For example, in arithmetic, quantifiers allow one to say that the natural numbers go on forever, by writing that for all n (where n is a natural number), there is another number (say, the successor of n) which is one bigger than n.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quantifier";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::QuantumComputing(string text)
{
    string model = "llama3";
    string definition = "The use of quantum-mechanical phenomena such as superposition and entanglement to perform computation. A quantum computer is used to perform such computation, which can be implemented theoretically or physically.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quantum Computing";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::QueryLanguage(string text)
{
    string model = "llama3";
    string definition = "Query languages or data query languages (DQLs) are computer languages used to make queries in databases and information systems. Broadly, query languages can be classified according to whether they are database query languages or information retrieval query languages. The difference is that a database query language attempts to give factual answers to factual questions, while an information retrieval query language attempts to find documents containing information that is relevant to an area of inquiry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Query Language";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::RProgrammingLanguage(string text)
{
    string model = "llama3";
    string definition = "A programming language and free software environment for statistical computing and graphics supported by the R Foundation for Statistical Computing. The R language is widely used among statisticians and data miners for developing statistical software and data analysis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "R Programming Language";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::RadialBasisFunctionNetwork(string text)
{
    string model = "llama3";
    string definition = "In the field of mathematical modeling, a radial basis function network is an artificial neural network that uses radial basis functions as activation functions. The output of the network is a linear combination of radial basis functions of the inputs and neuron parameters. Radial basis function networks have many uses, including function approximation, time series prediction, classification, and system control. They were first formulated in a 1988 paper by Broomhead and Lowe, both researchers at the Royal Signals and Radar Establishment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radial Basis Function Network";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::RandomForest(string text)
{
    string model = "llama3";
    string definition = "An ensemble learning method for classification, regression, and other tasks that operates by constructing a multitude of decision trees at training time and outputting the class that is the mode of the classes (classification) or mean prediction (regression) of the individual trees. Random decision forests correct for decision trees' habit of overfitting to their training set.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Random Forest";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ReasoningSystem(string text)
{
    string model = "llama3";
    string definition = "In information technology a reasoning system is a software system that generates conclusions from available knowledge using logical techniques such as deduction and induction. Reasoning systems play an important role in the implementation of artificial intelligence and knowledge-based systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reasoning System";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::RecurrentNeuralNetwork(string text)
{
    string model = "llama3";
    string definition = "A class of artificial neural networks where connections between nodes form a directed graph along a temporal sequence. This allows it to exhibit temporal dynamic behavior. Unlike feedforward neural networks, RNNs can use their internal state (memory) to process sequences of inputs. This makes them applicable to tasks such as unsegmented, connected handwriting recognition  or speech recognition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Recurrent Neural Network";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::RegressionAnalysis(string text)
{
    string model = "llama3";
    string definition = "A set of statistical processes for estimating the relationships between a dependent variable (often called the outcome or response variable, or label in machine learning) and one or more error-free independent variables (often called regressors, predictors, covariates, explanatory variables, or features). The most common form of regression analysis is linear regression, in which one finds the line (or a more complex linear combination) that most closely fits the data according to a specific mathematical criterion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Regression Analysis";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Regularization(string text)
{
    string model = "llama3";
    string definition = "A set of techniques such as dropout, early stopping, and L1 and L2 regularization to reduce overfitting and underfitting when training a learning algorithm.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Regularization";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ReinforcementLearning(string text)
{
    string model = "llama3";
    string definition = "An area of machine learning concerned with how software agents ought to take actions in an environment so as to maximize some notion of cumulative reward. Reinforcement learning is one of three basic machine learning paradigms, alongside supervised and unsupervised learning. It differs from supervised learning in that labelled input/output pairs need not be presented, and sub-optimal actions need not be explicitly corrected. Instead the focus is finding a balance between exploration (of uncharted territory) and exploitation (of current knowledge).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reinforcement Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ReinforcementLearningFromHumanFeedback(string text)
{
    string model = "llama3";
    string definition = "A technique that involve training a \"reward model\" to predict how humans rate the quality of generated content, and then training a generative AI model to satisfy this reward model via reinforcement learning. It can be used for example to make the generative AI model more truthful or less harmful.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reinforcement Learning From Human Feedback";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::RepresentationLearning(string text)
{
    string model = "llama3";
    string definition = "See feature learning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Representation Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ReservoirComputing(string text)
{
    string model = "llama3";
    string definition = "A framework for computation that may be viewed as an extension of neural networks. Typically an input signal is fed into a fixed (random) dynamical system called a reservoir and the dynamics of the reservoir map the input to a higher dimension. Then a simple readout mechanism is trained to read the state of the reservoir and map it to the desired output. The main benefit is that training is performed only at the readout stage and the reservoir is fixed. Liquid-state machines and echo state networks are two major types of reservoir computing.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reservoir Computing";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ResourceDescriptionFramework(string text)
{
    string model = "llama3";
    string definition = "A family of World Wide Web Consortium (W3C) specifications originally designed as a metadata data model. It has come to be used as a general method for conceptual description or modeling of information that is implemented in web resources, using a variety of syntax notations and data serialization formats. It is also used in knowledge management applications.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Resource Description Framework";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::RestrictedBoltzmannMachine(string text)
{
    string model = "llama3";
    string definition = "A generative stochastic artificial neural network that can learn a probability distribution over its set of inputs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Restricted Boltzmann Machine";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ReteAlgorithm(string text)
{
    string model = "llama3";
    string definition = "A pattern matching algorithm for implementing rule-based systems. The algorithm was developed to efficiently apply many rules or patterns to many objects, or facts, in a knowledge base. It is used to determine which of the system's rules should fire based on its data store, its facts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rete Algorithm";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Robotics(string text)
{
    string model = "llama3";
    string definition = "An interdisciplinary branch of science and engineering that includes mechanical engineering, electronic engineering, information engineering, computer science, and others. Robotics deals with the design, construction, operation, and use of robots, as well as computer systems for their control, sensory feedback, and information processing.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _ArtificialIntelligence::Terms::RuleBasedSystem(string text)
{
    string model = "llama3";
    string definition = "In computer science, a rule-based system is used to store and manipulate knowledge to interpret information in a useful way. It is often used in artificial intelligence applications and research. Normally, the term rule-based system is applied to systems involving human-crafted or curated rule sets. Rule-based systems constructed using automatic rule inference, such as rule-based machine learning, are normally excluded from this system type.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "RuleBased System";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Satisfiability(string text)
{
    string model = "llama3";
    string definition = "In mathematical logic, satisfiability and validity are elementary concepts of semantics. A formula is satisfiable if it is possible to find an interpretation (model) that makes the formula true. A formula is valid if all interpretations make the formula true. The opposites of these concepts are unsatisfiability and invalidity, that is, a formula is unsatisfiable if none of the interpretations make the formula true, and invalid if some such interpretation makes the formula false. These four concepts are related to each other in a manner exactly analogous to Aristotle's square of opposition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Satisfiability";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SearchAlgorithm(string text)
{
    string model = "llama3";
    string definition = "Any algorithm which solves the search problem, namely, to retrieve information stored within some data structure, or calculated in the search space of a problem domain, either with discrete or continuous values.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Search Algorithm";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Selection(string text)
{
    string model = "llama3";
    string definition = "The stage of a genetic algorithm in which individual genomes are chosen from a population for later breeding (using the crossover operator).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Selection";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SelfManagement(string text)
{
    string model = "llama3";
    string definition = "The process by which computer systems manage their own operation without human intervention.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Self Management";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SemanticNetwork(string text)
{
    string model = "llama3";
    string definition = "A knowledge base that represents semantic relations between concepts in a network. This is often used as a form of knowledge representation. It is a directed or undirected graph consisting of vertices, which represent concepts, and edges, which represent semantic relations between concepts, mapping or connecting semantic fields.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Semantic Network";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SemanticReasoner(string text)
{
    string model = "llama3";
    string definition = "A piece of software able to infer logical consequences from a set of asserted facts or axioms. The notion of a semantic reasoner generalizes that of an inference engine, by providing a richer set of mechanisms to work with. The inference rules are commonly specified by means of an ontology language, and often a description logic language. Many reasoners use first-order predicate logic to perform reasoning; inference commonly proceeds by forward chaining and backward chaining.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Semantic Reasoner";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SemanticQuery(string text)
{
    string model = "llama3";
    string definition = "Allows for queries and analytics of associative and contextual nature. Semantic queries enable the retrieval of both explicitly and implicitly derived information based on syntactic, semantic and structural information contained in data. They are designed to deliver precise results (possibly the distinctive selection of one single piece of information) or to answer more fuzzy and wide-open questions through pattern matching and digital reasoning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Semantic Query";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Semantics(string text)
{
    string model = "llama3";
    string definition = "In programming language theory, semantics is the field concerned with the rigorous mathematical study of the meaning of programming languages. It does so by evaluating the meaning of syntactically valid strings defined by a specific programming language, showing the computation involved. In such a case that the evaluation would be of syntactically invalid strings, the result would be non-computation. Semantics describes the processes a computer follows when executing a program in that specific language. This can be shown by describing the relationship between the input and output of a program, or an explanation of how the program will be executed on a certain platform, hence creating a model of computation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Semantics";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SemiSupervisedLearning(string text)
{
    string model = "llama3";
    string definition = "A machine learning training paradigm characterized by using a combination of a small amount of human-labeled data (used exclusively in supervised learning), followed by a large amount of unlabeled data (used exclusively in unsupervised learning).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Semi Supervised Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SensorFusion(string text)
{
    string model = "llama3";
    string definition = "The combining of sensory data or data derived from disparate sources such that the resulting information has less uncertainty than would be possible when these sources were used individually.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sensor Fusion";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SeparationLogic(string text)
{
    string model = "llama3";
    string definition = "An extension of Hoare logic, a way of reasoning about programs. The assertion language of separation logic is a special case of the logic of bunched implications (BI).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Separation Logic";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SimilarityLearning(string text)
{
    string model = "llama3";
    string definition = "An area of supervised learning closely related to classification and regression, but the goal is to learn from a similarity function that measures how similar or related two objects are. It has applications in ranking, in recommendation systems, visual identity tracking, face verification, and speaker verification.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Similarity Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SimulatedAnnealing(string text)
{
    string model = "llama3";
    string definition = "A probabilistic technique for approximating the global optimum of a given function. Specifically, it is a metaheuristic to approximate global optimization in a large search space for an optimization problem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Simulated Annealing";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SituatedApproach(string text)
{
    string model = "llama3";
    string definition = "In artificial intelligence research, the situated approach builds agents that are designed to behave effectively successfully in their environment. This requires designing AI \"from the bottom - up\" by focussing on the basic perceptual and motor skills required to survive. The situated approach gives a much lower priority to abstract reasoning or problem-solving skills.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Situated Approach";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SituationalCalculus(string text)
{
    string model = "llama3";
    string definition = "A logic formalism designed for representing and reasoning about dynamical domains.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Situational Calculus";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SelectiveLinearDefiniteClauseResolution(string text)
{
    string model = "llama3";
    string definition = "The basic inference rule used in logic programming. It is a refinement of resolution, which is both sound and refutation complete for Horn clauses.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Selective Linear Definite Clause Resolution";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Software(string text)
{
    string model = "llama3";
    string definition = "A collection of data or computer instructions that tell the computer how to work. This is in contrast to physical hardware, from which the system is built and actually performs the work. In computer science and software engineering, computer software is all information processed by computer systems, programs and data. Computer software includes computer programs, libraries and related non-executable data, such as online documentation or digital media.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Software";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SoftwareEngineering(string text)
{
    string model = "llama3";
    string definition = "The application of engineering to the development of software in a systematic method.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Software Engineering";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SpatialTemporalReasoning(string text)
{
    string model = "llama3";
    string definition = "An area of artificial intelligence which draws from the fields of computer science, cognitive science, and cognitive psychology. The theoretic goal—on the cognitive side—involves representing and reasoning spatial-temporal knowledge in mind. The applied goal—on the computing side—involves developing high-level control systems of automata for navigating and understanding time and space.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Spatial Temporal Reasoning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SPARQL(string text)
{
    string model = "llama3";
    string definition = "An RDF query language—that is, a semantic query language for databases—able to retrieve and manipulate data stored in Resource Description Framework(RDF) format.\"";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "SPARQL";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SparseDictionaryLearning(string text)
{
    string model = "llama3";
    string definition = "A feature learning method aimed at finding a sparse representation of the input data in the form of a linear combination of basic elements as well as those basic elements themselves.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sparse Dictionary Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SpeechRecognition(string text)
{
    string model = "llama3";
    string definition = "An interdisciplinary subfield of computational linguistics that develops methodologies and technologies that enables the recognition and translation of spoken language into text by computers. It is also known as automatic speech recognition (ASR), computer speech recognition or speech to text (STT). It incorporates knowledge and research in the linguistics, computer science, and electrical engineering fields.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Speech Recognition";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SpikingNeuralNetowrk(string text)
{
    string model = "llama3";
    string definition = "An artificial neural network that more closely mimics a natural neural network. In addition to neuronal and synaptic state, SNNs incorporate the concept of time into their Operating Model.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Spiking Neural Netowrk";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::State(string text)
{
    string model = "llama3";
    string definition = "In information technology and computer science, a program is described as stateful if it is designed to remember preceding events or user interactions; the remembered information is called the state of the system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "State";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::StatisticalClassification(string text)
{
    string model = "llama3";
    string definition = "In machine learning and statistics, classification is the problem of identifying to which of a set of categories (sub-populations) a new observation belongs, on the basis of a training set of data containing observations (or instances) whose category membership is known. Examples are assigning a given email to the \"spam\" or \"non - spam\" class, and assigning a diagnosis to a given patient based on observed characteristics of the patient (sex, blood pressure, presence or absence of certain symptoms, etc.). Classification is an example of pattern recognition.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Statistical Classification";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::StateActionRewardStateAction(string text)
{
    string model = "llama3";
    string definition = "A reinforcement learning algorithm for learning a Markov decision process policy.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "State Action Reward State Action";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::StatisticalRelationalLearning(string text)
{
    string model = "llama3";
    string definition = "A subdiscipline of artificial intelligence and machine learning that is concerned with domain models that exhibit both uncertainty (which can be dealt with using statistical methods) and complex, relational structure. Note that SRL is sometimes called Relational Machine Learning (RML) in the literature. Typically, the knowledge representation formalisms developed in SRL use (a subset of) first-order logic to describe relational properties of a domain in a general manner (universal quantification) and draw upon probabilistic graphical models (such as Bayesian networks or Markov networks) to model the uncertainty; some also build upon the methods of inductive logic programming.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Statistical Relational Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::StochasticOptimization(string text)
{
    string model = "llama3";
    string definition = "Any optimization method that generates and uses random variables. For stochastic problems, the random variables appear in the formulation of the optimization problem itself, which involves random objective functions or random constraints. Stochastic optimization methods also include methods with random iterates. Some stochastic optimization methods use random iterates to solve stochastic problems, combining both meanings of stochastic optimization. Stochastic optimization methods generalize deterministic methods for deterministic problems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stochastic Optimization";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::StochasticSemanticAnalysis(string text)
{
    string model = "llama3";
    string definition = "An approach used in computer science as a semantic component of natural language understanding. Stochastic models generally use the definition of segments of words as basic semantic units for the semantic models, and in some cases involve a two layered approach.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stochastic Semantic Analysis";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::StanfordReasearchInstituteProblemSolver(string text)
{
    string model = "llama3";
    string definition = "An automated planner developed by Richard Fikes and Nils Nilsson in 1971 at SRI International.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Stanford Reasearch Institute Problem Solver";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SubjectMatterExpert(string text)
{
    string model = "llama3";
    string definition = "A person who has accumulated great knowledge in a particular field or topic, demonstrated by the person's degree, licensure, and/or through years of professional experience with the subject.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Subject Matter Expert";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Superintelligence(string text)
{
    string model = "llama3";
    string definition = "A hypothetical agent that possesses intelligence far surpassing that of the brightest and most gifted human minds. Superintelligence may also refer to a property of problem-solving systems (e.g., superintelligent language translators or engineering assistants) whether or not these high-level intellectual competencies are embodied in agents that act within the physical world. A superintelligence may or may not be created by an intelligence explosion and be associated with a technological singularity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Superintelligence";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SupervisedLearning(string text)
{
    string model = "llama3";
    string definition = "The machine learning task of learning a function that maps an input to an output based on example input-output pairs. It infers a function from labeled training data consisting of a set of training examples. In supervised learning, each example is a pair consisting of an input object (typically a vector) and a desired output value (also called the supervisory signal). A supervised learning algorithm analyzes the training data and produces an inferred function, which can be used for mapping new examples. An optimal scenario will allow for the algorithm to correctly determine the class labels for unseen instances. This requires the learning algorithm to generalize from the training data to unseen situations in a \"reasonable\" way (see inductive bias).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Supervised Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SuppotVectorMachines(string text)
{
    string model = "llama3";
    string definition = "In machine learning, support vector machines (SVMs, also support vector networks are supervised learning models with associated learning algorithms that analyze data used for classification and regression.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Suppot Vector Machines";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SwarmIntelligence(string text)
{
    string model = "llama3";
    string definition = "The collective behavior of decentralized, self-organized systems, either natural or artificial. The expression was introduced in the context of cellular robotic systems.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Swarm Intelligence";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SymbolicArtificialIntelligence(string text)
{
    string model = "llama3";
    string definition = "The term for the collection of all methods in artificial intelligence research that are based on high-level \"symbolic\" (human-readable) representations of problems, logic, and search.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Symbolic Artificial Intelligence";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SyntheticIntelligence(string text)
{
    string model = "llama3";
    string definition = "An alternative term for artificial intelligence which emphasizes that the intelligence of machines need not be an imitation or in any way artificial; it can be a genuine form of intelligence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Synthetic Intelligence";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::SystemsNeuroscience(string text)
{
    string model = "llama3";
    string definition = "A subdiscipline of neuroscience and systems biology that studies the structure and function of neural circuits and systems. It is an umbrella term, encompassing a number of areas of study concerned with how nerve cells behave when connected together to form neural pathways, neural circuits, and larger brain networks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Systems Neuroscience";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::TechnologicalSingularity(string text)
{
    string model = "llama3";
    string definition = "A hypothetical point in the future when technological growth becomes uncontrollable and irreversible, resulting in unfathomable changes to human civilization.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Technological Singularity";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::TemporalDifferenceLearning(string text)
{
    string model = "llama3";
    string definition = "A class of model-free reinforcement learning methods which learn by bootstrapping from the current estimate of the value function. These methods sample from the environment, like Monte Carlo methods, and perform updates based on current estimates, like dynamic programming methods.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Temporal Difference Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::TensorNetworkTheory(string text)
{
    string model = "llama3";
    string definition = "A theory of brain function (particularly that of the cerebellum) that provides a mathematical model of the transformation of sensory space-time coordinates into motor coordinates and vice versa by cerebellar neuronal networks. The theory was developed as a geometrization of brain function (especially of the central nervous system) using tensors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tensor Network Theory";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Tensorflow(string text)
{
    string model = "llama3";
    string definition = "A free and open-source software library for dataflow and differentiable programming across a range of tasks. It is a symbolic math library, and is also used for machine learning applications such as neural networks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tensorflow";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::TheoreticalComputerScience(string text)
{
    string model = "llama3";
    string definition = "A subset of general computer science and mathematics that focuses on more mathematical topics of computing and includes the theory of computation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Theoretical Computer Science";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::TheoryOfComputation(string text)
{
    string model = "llama3";
    string definition = "In theoretical computer science and mathematics, the theory of computation is the branch that deals with how efficiently problems can be solved on a model of computation, using an algorithm. The field is divided into three major branches: automata theory and languages, computability theory, and computational complexity theory, which are linked by the question: \"What are the fundamental capabilities and limitations of computers? \".";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Theory Of Computation";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ThompsonSampling(string text)
{
    string model = "llama3";
    string definition = "A heuristic for choosing actions that addresses the exploration-exploitation dilemma in the multi-armed bandit problem. It consists in choosing the action that maximizes the expected reward with respect to a randomly drawn belief.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Thompson Sampling";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::TimeComplexity(string text)
{
    string model = "llama3";
    string definition = "The computational complexity that describes the amount of time it takes to run an algorithm. Time complexity is commonly estimated by counting the number of elementary operations performed by the algorithm, supposing that each elementary operation takes a fixed amount of time to perform. Thus, the amount of time taken and the number of elementary operations performed by the algorithm are taken to differ by at most a constant factor.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Time Complexity";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::TransferLearning(string text)
{
    string model = "llama3";
    string definition = "A machine learning technique in which knowledge learned from a task is reused in order to boost performance on a related task. For example, for image classification, knowledge gained while learning to recognize cars could be applied when trying to recognize trucks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transfer Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Transformer(string text)
{
    string model = "llama3";
    string definition = "A type of deep learning architecture that exploits a multi-head attention mechanism. Transformers address some of the limitations of long short-term memory, and became widely used in natural language processing, although it can also process other types of data such as images in the case of vision transformers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _ArtificialIntelligence::Terms::Transhumanism(string text)
{
    string model = "llama3";
    string definition = "An international philosophical movement that advocates for the transformation of the human condition by developing and making widely available sophisticated technologies to greatly enhance human intellect and physiology.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transhumanism";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::TransitionSystem(string text)
{
    string model = "llama3";
    string definition = "In theoretical computer science, a transition system is a concept used in the study of computation. It is used to describe the potential behavior of discrete systems. It consists of states and transitions between states, which may be labeled with labels chosen from a set; the same label may appear on more than one transition. If the label set is a singleton, the system is essentially unlabeled, and a simpler definition that omits the labels is possible.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transition System";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::TreeTraversal(string text)
{
    string model = "llama3";
    string definition = "A form of graph traversal and refers to the process of visiting (checking and/or updating) each node in a tree data structure, exactly once. Such traversals are classified by the order in which the nodes are visited.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tree Traversal";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::TrueQuantifiedBooleanFormula(string text)
{
    string model = "llama3";
    string definition = "In computational complexity theory, the language TQBF is a formal language consisting of the true quantified Boolean formulas. A (fully) quantified Boolean formula is a formula in quantified propositional logic where every variable is quantified (or bound), using either existential or universal quantifiers, at the beginning of the sentence. Such a formula is equivalent to either true or false (since there are no free variables). If such a formula evaluates to true, then that formula is in the language TQBF. It is also known as QSAT (Quantified SAT).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "True Quantified Boolean Formula";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::TuringMachine(string text)
{
    string model = "llama3";
    string definition = "A mathematical model of computation describing an abstract machine that manipulates symbols on a strip of tape according to a table of rules. Despite the model's simplicity, it is capable of implementing any algorithm.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Turing Machine";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::TuringTest(string text)
{
    string model = "llama3";
    string definition = "A test of a machine's ability to exhibit intelligent behaviour equivalent to, or indistinguishable from, that of a human, developed by Alan Turing in 1950. Turing proposed that a human evaluator would judge natural language conversations between a human and a machine designed to generate human-like responses. The evaluator would be aware that one of the two partners in conversation is a machine, and all participants would be separated from one another. The conversation would be limited to a text-only channel such as a computer keyboard and screen so the result would not depend on the machine's ability to render words as speech. If the evaluator cannot reliably tell the machine from the human, the machine is said to have passed the test. The test results do not depend on the machine's ability to give correct answers to questions, only how closely its answers resemble those a human would give.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Turing Test";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::TypeSystem(string text)
{
    string model = "llama3";
    string definition = "In programming languages, a set of rules that assigns a property called type to the various constructs of a computer program, such as variables, expressions, functions, or modules. These types formalize and enforce the otherwise implicit categories the programmer uses for algebraic data types, data structures, or other components (e.g. \"string\", \"array of float\", \"function returning boolean\"). The main purpose of a type system is to reduce possibilities for bugs in computer programs by defining interfaces between different parts of a computer program, and then checking that the parts have been connected in a consistent way. This checking can happen statically (at compile time), dynamically (at run time), or as a combination of static and dynamic checking. Type systems have other purposes as well, such as expressing business rules, enabling certain compiler optimizations, allowing for multiple dispatch, providing a form of documentation, etc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Type System";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::UnsupervisedLearning(string text)
{
    string model = "llama3";
    string definition = "A type of self-organized Hebbian learning that helps find previously unknown patterns in data set without pre-existing labels. It is also known as self-organization and allows modeling probability densities of given inputs. It is one of the three basic paradigms of machine learning, alongside supervised and reinforcement learning. Semi-supervised learning has also been described and is a hybridization of supervised and unsupervised techniques.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Unsupervised Learning";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::VisionProcessingUnit(string text)
{
    string model = "llama3";
    string definition = "A type of microprocessor designed to accelerate machine vision tasks.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vision Processing Unit";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::ValueAlignmentComplete(string text)
{
    string model = "llama3";
    string definition = "Analogous to an AI-complete problem, a value-alignment complete problem is a problem where the AI control problem needs to be fully solved to solve i";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Value Alignment Complete";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::Watson(string text)
{
    string model = "llama3";
    string definition = "A question-answering computer system capable of answering questions posed in natural language, developed in IBM's DeepQA project by a research team led by principal investigator David Ferrucci. Watson was named after IBM's first CEO, industrialist Thomas J. Watson.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Watson";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::WeakAI(string text)
{
    string model = "llama3";
    string definition = "Artificial intelligence that is focused on one narrow task.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Weak AI";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::WeakSupervision(string text)
{
    string model = "llama3";
    string definition = "See semi-supervised learning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Weak Supervision";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::WordEmbedding(string text)
{
    string model = "llama3";
    string definition = "A representation of a word in natural language processing. Typically, the representation is a real-valued vector that encodes the meaning of the word in such a way that words that are closer in the vector space are expected to be similar in meaning.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Word Embedding";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Terms::XGBoost(string text)
{
    string model = "llama3";
    string definition = "Short for eXtreme Gradient Boosting, XGBoost is an open-source software library which provides a regularizing gradient boosting framework for multiple programming languages.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "XG Boost";
        }
    }

    return nullptr;
}

string _ArtificialIntelligence::Definitions::AStarSearch()
{
    string definition = "A graph traversal and pathfinding algorithm which is used in many fields of computer science due to its completeness, optimality, and optimal efficiency.";
    return definition;
}

string _ArtificialIntelligence::Definitions::AbductiveLogicProgramming()
{
    string definition = "A high-level knowledge-representation framework that can be used to solve problems declaratively based on abductive reasoning. It extends normal logic programming by allowing some predicates to be incompletely defined, declared as abducible predicates.";
    return definition;
}

string _ArtificialIntelligence::Definitions::AbductiveReasoning()
{
    string definition = "A form of logical inference which starts with an observation or set of observations then seeks to find the simplest and most likely explanation. This process, unlike deductive reasoning, yields a plausible conclusion but does not positively verify it.";
    return definition;
}

string _ArtificialIntelligence::Definitions::Ablatin()
{
    string definition = "The removal of a component of an AI system. An ablation study aims to determine the contribution of a component to an AI system by removing the component, and then analyzing the resultant performance of the system.";
    return definition;
}

string _ArtificialIntelligence::Definitions::AbstractDataType()
{
    string definition = "A mathematical model for data types, where a data type is defined by its behavior (semantics) from the point of view of a user of the data, specifically in terms of possible values, possible operations on data of this type, and the behavior of these operations.";
    return definition;
}

string _ArtificialIntelligence::Definitions::Abstraction()
{
    string definition = "or attributes in the study of objects or systems in order to more closely attend to other details of interest";
    return definition;
}

string _ArtificialIntelligence::Definitions::AcceleratingChange()
{
    string definition = "A perceived increase in the rate of technological change throughout history, which may suggest faster and more profound change in the future and may or may not be accompanied by equally profound social and cultural change.";
    return definition;
}

string _ArtificialIntelligence::Definitions::ActionLanguage()
{
    string definition = "A language for specifying state transition systems, and is commonly used to create formal models of the effects of actions on the world. Action languages are commonly used in the artificial intelligence and robotics domains, where they describe how actions affect the states of systems over time, and may be used for automated planning.";
    return definition;
}

string _ArtificialIntelligence::Definitions::ActionModelLearning()
{
    string definition = "An area of machine learning concerned with creation and modification of software agent's knowledge about effects and preconditions of the actions that can be executed within its environment. This knowledge is usually represented in logic-based action description language and used as the input for automated planners.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ActionSelection()
{
    string definition = "A way of characterizing the most basic problem of intelligent systems: what to do next. In artificial intelligence and computational cognitive science, \"the action selection problem\" is typically associated with intelligent agents and animats—artificial systems that exhibit complex behaviour in an agent environment.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ActivationFunction()
{
    string definition = "In artificial neural networks, the activation function of a node defines the output of that node given an input or set of inputs.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AdaptiveAlgorithm()
{
    string definition = "An algorithm that changes its behavior at the time it is run, based on a priori defined reward mechanism or criterion.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AdaptiveNeuroFuzzyInferenceSystem()
{
    string definition = "A kind of artificial neural network that is based on Takagi–Sugeno fuzzy inference system. The technique was developed in the early 1990s. Since it integrates both neural networks and fuzzy logic principles, it has potential to capture the benefits of both in a single framework. Its inference system corresponds to a set of fuzzy IF–THEN rules that have learning capability to approximate nonlinear functions. Hence, ANFIS is considered to be a universal estimator. For using the ANFIS in a more efficient and optimal way, one can use the best parameters obtained by genetic algorithm.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AdmissibleHeuristic()
{
    string definition = "a heuristic function is said to be admissible if it never overestimates the cost of reaching the goal, i.e. the cost it estimates to reach the goal is not higher than the lowest possible cost from the current point in the path.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AffectiveComputing()
{
    string definition = "The study and development of systems and devices that can recognize, interpret, process, and simulate human affects. Affective computing is an interdisciplinary field spanning computer science, psychology, and cognitive science.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AgentArchitecture()
{
    string definition = "A blueprint for software agents and intelligent control systems, depicting the arrangement of components. The architectures implemented by intelligent agents are referred to as cognitive architectures.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AIAccelerator()
{
    string definition = "A class of microprocessor or computer system designed as hardware acceleration for artificial intelligence applications, especially artificial neural networks, machine vision, and machine learning.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AIComplete()
{
    string definition = "In the field of artificial intelligence, the most difficult problems are informally known as AI-complete or AI-hard, implying that the difficulty of these computational problems is equivalent to that of solving the central artificial intelligence problem—making computers as intelligent as people, or strong AI. To call a problem AI-complete reflects an attitude that it would not be solved by a simple specific algorithm.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Algorithm()
{
    string definition = "An unambiguous specification of how to solve a class of problems. Algorithms can perform calculation, data processing, and automated reasoning tasks.";
    return definition;
}

string _ArtificialIntelligence::Definitions::AlgorithmicEfficiency()
{
    string definition = "A property of an algorithm which relates to the number of computational resources used by the algorithm. An algorithm must be analyzed to determine its resource usage, and the efficiency of an algorithm can be measured based on usage of different resources. Algorithmic efficiency can be thought of as analogous to engineering productivity for a repeating or continuous process.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AlgorithmicProbability()
{
    string definition = "In algorithmic information theory, algorithmic probability, also known as Solomonoff probability, is a mathematical method of assigning a prior probability to a given observation. It was invented by Ray Solomonoff in the 1960s.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AlphaGO()
{
    string definition = "A computer program that plays the board game Go. It was developed by Alphabet Inc.'s Google DeepMind in London. AlphaGo has several versions including AlphaGo Zero, AlphaGo Master, AlphaGo Lee, etc. In October 2015, AlphaGo became the first computer Go program to beat a human professional Go player without handicaps on a full-sized 19×19 board.";
    return definition;
}

string _ArtificialIntelligence::Definitions::AmbientIntelligence()
{
    string definition = "Electronic environments that are sensitive and responsive to the presence of people.";
    return definition;
}

string _ArtificialIntelligence::Definitions::AnalysisOfAlgorithms()
{
    string definition = "The determination of the computational complexity of algorithms, that is the amount of time, storage and/or other resources necessary to execute them. Usually, this involves determining a function that relates the length of an algorithm's input to the number of steps it takes (its time complexity) or the number of storage locations it uses (its space complexity).";
    return definition;
}

string _ArtificialIntelligence::Definitions::Analytics()
{
    string definition = "The discovery, interpretation, and communication of meaningful patterns in data.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AnswerSetProgrammnig()
{
    string definition = "A form of declarative programming oriented towards difficult (primarily NP-hard) search problems. It is based on the stable model (answer set) semantics of logic programming. In ASP, search problems are reduced to computing stable models, and answer set solvers—programs for generating stable models—are used to perform search.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AntColonyOptimization()
{
    string definition = "A probabilistic technique for solving computational problems that can be reduced to finding good paths through graphs.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AnytimeAlgorithm()
{
    string definition = "An algorithm that can return a valid solution to a problem even if it is interrupted before it ends.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ApplicationProgrammingInterface()
{
    string definition = "A set of subroutine definitions, communication protocols, and tools for building software. In general terms, it is a set of clearly defined methods of communication among various components. A good API makes it easier to develop a computer program by providing all the building blocks, which are then put together by the programmer. An API may be for a web-based system, operating system, database system, computer hardware, or software library.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ApproximateStringMatching()
{
    string definition = "The technique of finding strings that match a pattern approximately (rather than exactly). The problem of approximate string matching is typically divided into two sub-problems: finding approximate substring matches inside a given string and finding dictionary strings that match the pattern approximately.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ApproximationError()
{
    string definition = "The discrepancy between an exact value and some approximation to it.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ArgumentationFramework()
{
    string definition = "A way to deal with contentious information and draw conclusions from it. In an abstract argumentation framework, entry-level information is a set of abstract arguments that, for instance, represent data or a proposition. Conflicts between arguments are represented by a binary relation on the set of arguments. In concrete terms, you represent an argumentation framework with a directed graph such that the nodes are the arguments, and the arrows represent the attack relation. There exist some extensions of the Dung's framework, like the logic-based argumentation frameworks or the value-based argumentation frameworks.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ArtificialGeneralIntelligence()
{
    string definition = "A type of AI that matches or surpasses human cognitive capabilities across a wide range of cognitive tasks.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ArtificialImmuneSystem()
{
    string definition = "A class of computationally intelligent, rule-based machine learning systems inspired by the principles and processes of the vertebrate immune system. The algorithms are typically modeled after the immune system's characteristics of learning and memory for use in problem-solving.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ArtificialIntelligence()
{
    string definition = "Any intelligence demonstrated by machines, in contrast to the natural intelligence displayed by humans and other animals. In computer science, AI research is defined as the study of \"intelligent agents\": any device that perceives its environment and takes actions that maximize its chance of successfully achieving its goals. Colloquially, the term \"artificial intelligence\" is applied when a machine mimics \"cognitive\" functions that humans associate with other human minds, such as \"learning\" and \"problem solving\".";
    return definition;

}

string _ArtificialIntelligence::Definitions::ArtificialIntelligenceMarkupLanguage()
{
    string definition = "An XML dialect for creating natural language software agents.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AssociationForTheAdvancementOfArtificialIntelligence()
{
    string definition = "An international, nonprofit, scientific society devoted to promote research in, and responsible use of, artificial intelligence. AAAI also aims to increase public understanding of artificial intelligence (AI), improve the teaching and training of AI practitioners, and provide guidance for research planners and funders concerning the importance and potential of current AI developments and future directions.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AsymptoticComputationalComplexity()
{
    string definition = "In computational complexity theory, asymptotic computational complexity is the usage of asymptotic analysis for the estimation of computational complexity of algorithms and computational problems, commonly associated with the usage of the big O notation.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AttentionMechanism()
{
    string definition = "Machine learning-based attention is a mechanism mimicking cognitive attention. It calculates \"soft\" weights for each word, more precisely for its embedding, in the context window. It can do it either in parallel (such as in transformers) or sequentially (such as in recursive neural networks). \"Soft\" weights can change during each runtime, in contrast to \"hard\" weights, which are (pre-)trained and fine-tuned and remain frozen afterwards. Multiple attention heads are used in transformer-based large language models.";
    return definition;
}

string _ArtificialIntelligence::Definitions::AttributionalCalculus()
{
    string definition = "A logic and representation system defined by Ryszard S. Michalski. It combines elements of predicate logic, propositional calculus, and multi-valued logic. Attributional calculus provides a formal language for natural induction, an inductive learning process whose results are in forms natural to people.";
    return definition;
}

string _ArtificialIntelligence::Definitions::AugmentedReality()
{
    string definition = "An interactive experience of a real-world environment where the objects that reside in the real-world are \"augmented\" by computer-generated perceptual information, sometimes across multiple sensory modalities, including visual, auditory, haptic, somatosensory, and olfactory.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Autoencoder()
{
    string definition = "A type of artificial neural network used to learn efficient codings of unlabeled data (unsupervised learning). A common implementation is the variational autoencoder (VAE).";
    return definition;
}

string _ArtificialIntelligence::Definitions::AutomataTheory()
{
    string definition = "The study of abstract machines and automata, as well as the computational problems that can be solved using them. It is a theory in theoretical computer science and discrete mathematics (a subject of study in both mathematics and computer science).";
    return definition;

}

string _ArtificialIntelligence::Definitions::AutomatedMachineLearning()
{
    string definition = "A field of machine learning (ML) which aims to automatically configure an ML system to maximize its performance (e.g, classification accuracy).";
    return definition;
}

string _ArtificialIntelligence::Definitions::AutomatedPlanningAndScheduling()
{
    string definition = "A branch of artificial intelligence that concerns the realization of strategies or action sequences, typically for execution by intelligent agents, autonomous robots and unmanned vehicles. Unlike classical control and classification problems, the solutions are complex and must be discovered and optimized in multidimensional space. Planning is also related to decision theory.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AutomatedReasoning()
{
    string definition = "An area of computer science and mathematical logic dedicated to understanding different aspects of reasoning. The study of automated reasoning helps produce computer programs that allow computers to reason completely, or nearly completely, automatically. Although automated reasoning is considered a sub-field of artificial intelligence, it also has connections with theoretical computer science, and even philosophy.";
    return definition;
}

string _ArtificialIntelligence::Definitions::AutonomicComputing()
{
    string definition = "The self-managing characteristics of distributed computing resources, adapting to unpredictable changes while hiding intrinsic complexity to operators and users. Initiated by IBM in 2001, this initiative ultimately aimed to develop computer systems capable of self-management, to overcome the rapidly growing complexity of computing systems management, and to reduce the barrier that complexity poses to further growth.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AutonomousCar()
{
    string definition = "A vehicle that is capable of sensing its environment and moving with little or no human input.";
    return definition;

}

string _ArtificialIntelligence::Definitions::AutonomousRobot()
{
    string definition = "A robot that performs behaviors or tasks with a high degree of autonomy. Autonomous robotics is usually considered to be a subfield of artificial intelligence, robotics, and information engineering.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Backpropagation()
{
    string definition = "A method used in artificial neural networks to calculate a gradient that is needed in the calculation of the weights to be used in the network. Backpropagation is shorthand for \"the backward propagation of errors\", since an error is computed at the output and distributed backwards throughout the network's layers. It is commonly used to train deep neural networks, a term referring to neural networks with more than one hidden layer.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BackpropagationThroughStructure()
{
    string definition = "A gradient-based technique for training recurrent neural networks, proposed in a 1996 paper written by Christoph Goller and Andreas Küchler.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BackpropagationThroughTime()
{
    string definition = "A gradient-based technique for training certain types of recurrent neural networks, such as Elman networks. The algorithm was independently derived by numerous researchers.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BackwardChaining()
{
    string definition = "An inference method described colloquially as working backward from the goal. It is used in automated theorem provers, inference engines, proof assistants, and other artificial intelligence applications.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BagOfWordsModel()
{
    string definition = "A simplifying representation used in natural language processing and information retrieval (IR). In this model, a text (such as a sentence or a document) is represented as the bag (multiset) of its words, disregarding grammar and even word order but keeping multiplicity. The bag-of-words model has also been used for computer vision. The bag-of-words model is commonly used in methods of document classification where the (frequency of) occurrence of each word is used as a feature for training a classifier.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BagOfWordsModelInComputerVision()
{
    string definition = "In computer vision, the bag-of-words model (BoW model) can be applied to image classification, by treating image features as words. In document classification, a bag of words is a sparse vector of occurrence counts of words; that is, a sparse histogram over the vocabulary. In computer vision, a bag of visual words is a vector of occurrence counts of a vocabulary of local image features.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BatchNormalization()
{
    string definition = "A technique for improving the performance and stability of artificial neural networks. It is a technique to provide any layer in a neural network with inputs that are zero mean/unit variance.[48] Batch normalization was introduced in a 2015 paper. It is used to normalize the input layer by adjusting and scaling the activations.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BayesianProgramming()
{
    string definition = "A formalism and a methodology for having a technique to specify probabilistic models and solve problems when less than the necessary information is available.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BeesAlgorithm()
{
    string definition = "mimics the food foraging behaviour of honey bee colonies. In its basic version the algorithm performs a kind of neighborhood search combined with global search, and can be used for both combinatorial optimization and continuous optimization. The only condition for the application of the bees algorithm is that some measure of distance between the solutions is defined. The effectiveness and specific abilities of the bees algorithm have been proven in a number of studies.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BehaviorInformatics()
{
    string definition = "The informatics of behaviors so as to obtain behavior intelligence and behavior insights";
    return definition;

}

string _ArtificialIntelligence::Definitions::BehaviorTree()
{
    string definition = "A mathematical model of plan execution used in computer science, robotics, control systems and video games. They describe switchings between a finite set of tasks in a modular fashion. Their strength comes from their ability to create very complex tasks composed of simple tasks, without worrying how the simple tasks are implemented. BTs present some similarities to hierarchical state machines with the key difference that the main building block of a behavior is a task rather than a state. Its ease of human understanding make BTs less error-prone and very popular in the game developer community. BTs have shown to generalize several other control architectures.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BeliefDesireIntentionSoftwareModel()
{
    string definition = "A software model developed for programming intelligent agents. Superficially characterized by the implementation of an agent's beliefs, desires and intentions, it actually uses these concepts to solve a particular problem in agent programming. In essence, it provides a mechanism for separating the activity of selecting a plan (from a plan library or an external planner application) from the execution of currently active plans. Consequently, BDI agents are able to balance the time spent on deliberating about plans (choosing what to do) and executing those plans (doing it). A third activity, creating the plans in the first place (planning), is not within the scope of the model, and is left to the system designer and programmer.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BiasVarianceTradeoff()
{
    string definition = "In statistics and machine learning, the bias–variance tradeoff is the property of a set of predictive models whereby models with a lower bias in parameter estimation have a higher variance of the parameter estimates across samples, and vice versa.";
    return definition;
}

string _ArtificialIntelligence::Definitions::BigData()
{
    string definition = "A term used to refer to data sets that are too large or complex for traditional data-processing application software to adequately deal with. Data with many cases (rows) offer greater statistical power, while data with higher complexity (more attributes or columns) may lead to a higher false discovery rate.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BigONotation()
{
    string definition = "A mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity. It is a member of a family of notations invented by Paul Bachmann, Edmund Landau, and others, collectively called Bachmann–Landau notation or asymptotic notation.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BinaryTree()
{
    string definition = "A tree data structure in which each node has at most two children, which are referred to as the left child and the right child. A recursive definition using just set theory notions is that a (non-empty) binary tree is a tuple (L, S, R), where L and R are binary trees or the empty set and S is a singleton set. Some authors allow the binary tree to be the empty set as well.";
    return definition;
}

string _ArtificialIntelligence::Definitions::BlackboardSystem()
{
    string definition = "An artificial intelligence approach based on the blackboard architectural model, where a common knowledge base, the \"blackboard\", is iteratively updated by a diverse group of specialist knowledge sources, starting with a problem specification and ending with a solution. Each knowledge source updates the blackboard with a partial solution when its internal constraints match the blackboard state. In this way, the specialists work together to solve the problem.";
    return definition;
}

string _ArtificialIntelligence::Definitions::BoltzmannMachine()
{
    string definition = "A type of stochastic recurrent neural network and Markov random field. Boltzmann machines can be seen as the stochastic, generative counterpart of Hopfield networks.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BooleanSatisfiabilityProblem()
{
    string definition = "The problem of determining if there exists an interpretation that satisfies a given Boolean formula. In other words, it asks whether the variables of a given Boolean formula can be consistently replaced by the values TRUE or FALSE in such a way that the formula evaluates to TRUE. If this is the case, the formula is called satisfiable. On the other hand, if no such assignment exists, the function expressed by the formula is FALSE for all possible variable assignments and the formula is unsatisfiable. For example, the formula \"a AND NOT b\" is satisfiable because one can find the values a = TRUE and b = FALSE, which make (a AND NOT b) = TRUE. In contrast, \"a AND NOT a\" is unsatisfiable.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Boosting()
{
    string definition = "A machine learning ensemble metaheuristic for primarily reducing bias (as opposed to variance), by training models sequentially, each one correcting the errors of its predecessor.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BootstrapAggregating()
{
    string definition = "A machine learning ensemble metaheuristic for primarily reducing variance (as opposed to bias), by training multiple models independently and averaging their predictions.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BrainTechnology()
{
    string definition = "A technology that employs the latest findings in neuroscience. The term was first introduced by the Artificial Intelligence Laboratory in Zurich, Switzerland, in the context of the ROBOY project. Brain Technology can be employed in robots, know-how management system, and any other application with self-learning capabilities. In particular, Brain Technology applications allow the visualization of the underlying learning architecture often coined as \"know - how maps\".";
    return definition;

}

string _ArtificialIntelligence::Definitions::BranchingFactor()
{
    string definition = "In computing, tree data structures, and game theory, the number of children at each node, the outdegree. If this value is not uniform, an average branching factor can be calculated.";
    return definition;

}

string _ArtificialIntelligence::Definitions::BruteForceSearch()
{
    string definition = "A very general problem-solving technique and algorithmic paradigm that consists of systematically enumerating all possible candidates for the solution and checking whether each candidate satisfies the problem's statement.";
    return definition;

}

string _ArtificialIntelligence::Definitions::CapsuleNeuralNetwork()
{
    string definition = "A machine learning system that is a type of artificial neural network (ANN) that can be used to better model hierarchical relationships. The approach is an attempt to more closely mimic biological neural organization.";
    return definition;

}

string _ArtificialIntelligence::Definitions::CaseBasedReasoning()
{
    string definition = "Broadly construed, the process of solving new problems based on the solutions of similar past problems.";
    return definition;
}

string _ArtificialIntelligence::Definitions::ChatBot()
{
    string definition = "A computer program or an artificial intelligence which conducts a conversation via auditory or textual methods.";
    return definition;
}

string _ArtificialIntelligence::Definitions::CloudRobotics()
{
    string definition = "A field of robotics that attempts to invoke cloud technologies such as cloud computing, cloud storage, and other Internet technologies centred on the benefits of converged infrastructure and shared services for robotics. When connected to the cloud, robots can benefit from the powerful computation, storage, and communication resources of modern data center in the cloud, which can process and share information from various robots or agent (other machines, smart objects, humans, etc.). Humans can also delegate tasks to robots remotely through networks. Cloud computing technologies enable robot systems to be endowed with powerful capability whilst reducing costs through cloud technologies. Thus, it is possible to build lightweight, low cost, smarter robots have intelligent \"brain\" in the cloud. The \"brain\" consists of data center, knowledge base, task planners, deep learning, information processing, environment models, communication support, etc.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ClusterAnalysis()
{
    string definition = "The task of grouping a set of objects in such a way that objects in the same group (called a cluster) are more similar (in some sense) to each other than to those in other groups (clusters). It is a main task of exploratory data mining, and a common technique for statistical data analysis, used in many fields, including machine learning, pattern recognition, image analysis, information retrieval, bioinformatics, data compression, and computer graphics.";
    return definition;
}

string _ArtificialIntelligence::Definitions::Cobweb()
{
    string definition = "An incremental system for hierarchical conceptual clustering. COBWEB was invented by Professor Douglas H. Fisher, currently at Vanderbilt University. COBWEB incrementally organizes observations into a classification tree. Each node in a classification tree represents a class (concept) and is labeled by a probabilistic concept that summarizes the attribute-value distributions of objects classified under the node. This classification tree can be used to predict missing attributes or the class of a new object.";
    return definition;

}

string _ArtificialIntelligence::Definitions::CognativeArchitecture()
{
    string definition = "The Institute of Creative Technologies defines cognitive architecture as: \"hypothesis about the fixed structures that provide a mind, whether in natural or artificial systems, and how they work together – in conjunction with knowledge and skills embodied within the architecture – to yield intelligent behavior in a diversity of complex environments.\"";
    return definition;

}

string _ArtificialIntelligence::Definitions::CognitiveComputing()
{
    string definition = "In general, the term cognitive computing has been used to refer to new hardware and/or software that mimics the functioning of the human brain and helps to improve human decision-making. In this sense, CC is a new type of computing with the goal of more accurate models of how the human brain/mind senses, reasons, and responds to stimulus.";
    return definition;

}

string _ArtificialIntelligence::Definitions::CognitiveScience()
{
    string definition = "The interdisciplinary scientific study of the mind and its processes.";
    return definition;

}

string _ArtificialIntelligence::Definitions::CombinatorialOptimization()
{
    string definition = "In Operations Research, applied mathematics and theoretical computer science, combinatorial optimization is a topic that consists of finding an optimal object from a finite set of objects.";
    return definition;

}

string _ArtificialIntelligence::Definitions::CommitteeMachine()
{
    string definition = "A type of artificial neural network using a divide and conquer strategy in which the responses of multiple neural networks (experts) are combined into a single response. The combined response of the committee machine is supposed to be superior to those of its constituent experts. Compare ensembles of classifiers.";
    return definition;

}

string _ArtificialIntelligence::Definitions::CommonsenseKnowledge()
{
    string definition = "In artificial intelligence research, commonsense knowledge consists of facts about the everyday world, such as \"Lemons are sour\", that all humans are expected to know. The first AI program to address common sense knowledge was Advice Taker in 1959 by John McCarthy.";
    return definition;

}

string _ArtificialIntelligence::Definitions::CommonsenseReasoning()
{
    string definition = "A branch of artificial intelligence concerned with simulating the human ability to make presumptions about the type and essence of ordinary situations they encounter every day.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ComputationalChemistry()
{
    string definition = "A branch of chemistry that uses computer simulation to assist in solving chemical problems.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ComputationalComplexityTheory()
{
    string definition = "Focuses on classifying computational problems according to their inherent difficulty, and relating these classes to each other. A computational problem is a task solved by a computer. A computation problem is solvable by mechanical application of mathematical steps, such as an algorithm.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ComputationalCreativity()
{
    string definition = "A multidisciplinary endeavour that includes the fields of artificial intelligence, cognitive psychology, philosophy, and the arts.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ComputationalCybernetics()
{
    string definition = "The integration of cybernetics and computational intelligence techniques.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ComputationalHumor()
{
    string definition = "A branch of computational linguistics and artificial intelligence which uses computers in humor research.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ComputationalIntelligence()
{
    string definition = "Usually refers to the ability of a computer to learn a specific task from data or experimental observation.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ComputationalLearningTheory()
{
    string definition = "In computer science, computational learning theory (or just learning theory) is a subfield of artificial intelligence devoted to studying the design and analysis of machine learning algorithms.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ComputationalLinguistics()
{
    string definition = "An interdisciplinary field concerned with the statistical or rule-based modeling of natural language from a computational perspective, as well as the study of appropriate computational approaches to linguistic questions.";
    return definition;
}

string _ArtificialIntelligence::Definitions::ComputationalMathematics()
{
    string definition = "The mathematical research in areas of science where computing plays an essential role.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ComputationalNeuroscience()
{
    string definition = "A branch of neuroscience which employs mathematical models, theoretical analysis and abstractions of the brain to understand the principles that govern the development, structure, physiology, and cognitive abilities of the nervous system.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ComputationalNumberTheory()
{
    string definition = "The study of algorithms for performing number theoretic computations.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ComputationalProblem()
{
    string definition = "In theoretical computer science, a computational problem is a mathematical object representing a collection of questions that computers might be able to solve.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ComputationalStatistics()
{
    string definition = "The interface between statistics and computer science.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ComputerAutomatedDesign()
{
    string definition = "Design automation usually refers to electronic design automation, or Design Automation which is a Product Configurator. Extending Computer-Aided Design (CAD), automated design and computer-automated design are concerned with a broader range of applications, such as automotive engineering, civil engineering,  composite material design, control engineering, dynamic system identification and optimization  financial systems, industrial equipment, mechatronic systems, steel construction, structural optimisation, and the invention of novel systems. More recently, traditional CAD simulation is seen to be transformed to CAutoD by biologically inspired machine learning including heuristic search techniques such as evolutionary computation, and swarm intelligence algorithms.";
    return definition;

}


string _ArtificialIntelligence::Definitions::ComputerAudition()
{
    string definition = "See machine listening.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ComputerScience()
{
    string definition = "The theory, experimentation, and engineering that form the basis for the design and use of computers. It involves the study of algorithms that process, store, and communicate digital information. A computer scientist specializes in the theory of computation and the design of computational systems.";
    return definition;
}

string _ArtificialIntelligence::Definitions::ComputerVision()
{
    string definition = "An interdisciplinary scientific field that deals with how computers can be made to gain high-level understanding from digital images or videos. From the perspective of engineering, it seeks to automate tasks that the human visual system can do.";
    return definition;
}

string _ArtificialIntelligence::Definitions::ConceptDrift()
{
    string definition = "In predictive analytics and machine learning, the concept drift means that the statistical properties of the target variable, which the model is trying to predict, change over time in unforeseen ways. This causes problems because the predictions become less accurate as time passes.";
    return definition;
}

string _ArtificialIntelligence::Definitions::Connectionism()
{
    string definition = "An approach in the fields of cognitive science, that hopes to explain mental phenomena using artificial neural networks.";
    return definition;
}

string _ArtificialIntelligence::Definitions::ConsistentHeuristic()
{
    string definition = "In the study of path-finding problems in artificial intelligence, a heuristic function is said to be consistent, or monotone, if its estimate is always less than or equal to the estimated distance from any neighboring vertex to the goal, plus the cost of reaching that neighbor.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ConstrainedConditionalModel()
{
    string definition = "A machine learning and inference framework that augments the learning of conditional (probabilistic or discriminative) models with declarative constraints.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ConstraintLogicProgramming()
{
    string definition = "A form of constraint programming, in which logic programming is extended to include concepts from constraint satisfaction. A constraint logic program is a logic program that contains constraints in the body of clauses. An example of a clause including a constraint is A(X,Y) :- X+Y>0, B(X), C(Y). In this clause, X+Y>0 is a constraint; A(X,Y), B(X), and C(Y) are literals as in regular logic programming. This clause states one condition under which the statement A(X,Y) holds: X+Y is greater than zero and both B(X) and C(Y) are true.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ConstraintProgramming()
{
    string definition = "A programming paradigm wherein relations between variables are stated in the form of constraints. Constraints differ from the common primitives of imperative programming languages in that they do not specify a step or sequence of steps to execute, but rather the properties of a solution to be found.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ConstructedLanguage()
{
    string definition = "A language whose phonology, grammar, and vocabulary are consciously devised, instead of having developed naturally. Constructed languages may also be referred to as artificial, planned, or invented languages.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ControlTheory()
{
    string definition = "In control systems engineering is a subfield of mathematics that deals with the control of continuously operating dynamical systems in engineered processes and machines. The objective is to develop a control model for controlling such systems using a control action in an optimum manner without delay or overshoot and ensuring control stability.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ConvolutionalNeuralNetwork()
{
    string definition = "In deep learning, a convolutional neural network (CNN, or ConvNet) is a class of deep neural network most commonly applied to image analysis. CNNs use a variation of multilayer perceptrons designed to require minimal preprocessing. They are also known as shift invariant or space invariant artificial neural networks (SIANN), based on their shared-weights architecture and translation invariance characteristics.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Crossover()
{
    string definition = "In genetic algorithms and evolutionary computation, a genetic operator used to combine the genetic information of two parents to generate new offspring. It is one way to stochastically generate new solutions from an existing population, and analogous to the crossover that happens during sexual reproduction in biological organisms. Solutions can also be generated by cloning an existing solution, which is analogous to asexual reproduction. Newly generated solutions are typically mutated before being added to the population.";
    return definition;

}

string _ArtificialIntelligence::Definitions::DarkForest()
{
    string definition = "A computer go program developed by Facebook, based on deep learning techniques using a convolutional neural network. Its updated version Darkfores2 combines the techniques of its predecessor with Monte Carlo tree search. The MCTS effectively takes tree search methods commonly seen in computer chess programs and randomizes them. With the update, the system is known as Darkfmcts3.";
    return definition;
}

string _ArtificialIntelligence::Definitions::DartmouthWorkshop()
{
    string definition = "The Dartmouth Summer Research Project on Artificial Intelligence was the name of a 1956 summer workshop now considered by many (though not all) to be the seminal event for artificial intelligence as a field.";
    return definition;
}

string _ArtificialIntelligence::Definitions::DataAugmentation()
{
    string definition = "Data augmentation in data analysis are techniques used to increase the amount of data. It helps reduce overfitting when training a learning algorithm.";
    return definition;

}

string _ArtificialIntelligence::Definitions::DataFusion()
{
    string definition = "The process of integrating multiple data sources to produce more consistent, accurate, and useful information than that provided by any individual data source.";
    return definition;

}

string _ArtificialIntelligence::Definitions::DataIntegration()
{
    string definition = "The process of combining data residing in different sources and providing users with a unified view of them. This process becomes significant in a variety of situations, which include both commercial (such as when two similar companies need to merge their databases) and scientific (combining research results from different bioinformatics repositories, for example) domains. Data integration appears with increasing frequency as the volume (that is, big data) and the need to share existing data explodes. It has become the focus of extensive theoretical work, and numerous open problems remain unsolved.";
    return definition;

}

string _ArtificialIntelligence::Definitions::DataMining()
{
    string definition = "The process of discovering patterns in large data sets involving methods at the intersection of machine learning, statistics, and database systems.";
    return definition;

}

string _ArtificialIntelligence::Definitions::DataScience()
{
    string definition = "An interdisciplinary field that uses scientific methods, processes, algorithms and systems to extract knowledge and insights from data in various forms, both structured and unstructured, similar to data mining. Data science is a \"concept to unify statistics, data analysis, machine learning, and their related methods\" in order to \"understand and analyze actual phenomena\" with data. It employs techniques and theories drawn from many fields within the context of mathematics, statistics, information science, and computer science.";
    return definition;


}

string _ArtificialIntelligence::Definitions::DataSet()
{
    string definition = "A collection of data. Most commonly a data set corresponds to the contents of a single database table, or a single statistical data matrix, where every column of the table represents a particular variable, and each row corresponds to a given member of the data set in question. The data set lists values for each of the variables, such as height and weight of an object, for each member of the data set. Each value is known as a datum. The data set may comprise data for one or more members, corresponding to the number of rows.";
    return definition;

}

string _ArtificialIntelligence::Definitions::DataWarehouse()
{
    string definition = "A system used for reporting and data analysis. DWs are central repositories of integrated data from one or more disparate sources. They store current and historical data in one single place.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Datalog()
{
    string definition = "A declarative logic programming language that syntactically is a subset of Prolog. It is often used as a query language for deductive databases. In recent years, Datalog has found new application in data integration, information extraction, networking, program analysis, security, and cloud computing.[";
    return definition;
}

string _ArtificialIntelligence::Definitions::DecisionBoundry()
{
    string definition = "In the case of backpropagation-based artificial neural networks or perceptrons, the type of decision boundary that the network can learn is determined by the number of hidden layers in the network. If it has no hidden layers, then it can only learn linear problems. If it has one hidden layer, then it can learn any continuous function on compact subsets of Rn as shown by the Universal approximation theorem, thus it can have an arbitrary decision boundary.";
    return definition;

}

string _ArtificialIntelligence::Definitions::DecisionSupportSystem()
{
    string definition = "Aan information system that supports business or organizational decision-making activities. DSSs serve the management, operations and planning levels of an organization (usually mid and higher management) and help people make decisions about problems that may be rapidly changing and not easily specified in advance—i.e. unstructured and semi-structured decision problems. Decision support systems can be either fully computerized or human-powered, or a combination of both.";
    return definition;

}

string _ArtificialIntelligence::Definitions::DecisionTheory()
{
    string definition = "The study of the reasoning underlying an agent's choices. Decision theory can be broken into two branches: normative decision theory, which gives advice on how to make the best decisions given a set of uncertain beliefs and a set of values, and descriptive decision theory which analyzes how existing, possibly irrational agents actually make decisions.";
    return definition;
}

string _ArtificialIntelligence::Definitions::DecisionTreeLearning()
{
    string definition = "Uses a decision tree (as a predictive model) to go from observations about an item (represented in the branches) to conclusions about the item's target value (represented in the leaves). It is one of the predictive modeling approaches used in statistics, data mining and machine learning.";
    return definition;
}

string _ArtificialIntelligence::Definitions::DeclarativeProgramming()
{
    string definition = "A programming paradigm—a style of building the structure and elements of computer programs—that expresses the logic of a computation without describing its control flow.";
    return definition;

}

string _ArtificialIntelligence::Definitions::DeductiveClassifier()
{
    string definition = "A programming paradigm—a style of building the structure and elements of computer programs—that expresses the logic of a computation without describing its control flow.";
    return definition;

}

string _ArtificialIntelligence::Definitions::DeepBlue()
{
    string definition = "was a chess-playing computer developed by IBM. It is known for being the first computer chess-playing system to win both a chess game and a chess match against a reigning world champion under regular time controls.";
    return definition;

}

string _ArtificialIntelligence::Definitions::DeepLearning()
{
    string definition = "A subset of machine learning that focuses on utilizing neural networks to perform tasks such as classification, regression, and representation learning. The field takes inspiration from biological neuroscience and is centered around stacking artificial neurons into layers and \"training\" them to process data. The adjective \"deep\" refers to the use of multiple layers (ranging from three to several hundred or thousands) in the network. Methods used can be either supervised, semi-supervised, or unsupervised.";
    return definition;

}

string _ArtificialIntelligence::Definitions::DeemMindTechnologies()
{
    string definition = "A British artificial intelligence company founded in September 2010, currently owned by Alphabet Inc. The company is based in London, with research centres in Canada, France,  and the United States. Acquired by Google in 2014, the company has created a neural network that learns how to play video games in a fashion similar to that of humans, as well as a neural Turing machine, or a neural network that may be able to access an external memory like a conventional Turing machine, resulting in a computer that mimics the short-term memory of the human brain. The company made headlines in 2016 after its AlphaGo program beat human professional Go player Lee Sedol, the world champion, in a five-game match, which was the subject of a documentary film. A more general program, AlphaZero, beat the most powerful programs playing Go, chess, and shogi (Japanese chess) after a few days of play against itself using reinforcement learning.";
    return definition;
}

string _ArtificialIntelligence::Definitions::DefaultLogic()
{
    string definition = "A non-monotonic logic proposed by Raymond Reiter to formalize reasoning with default assumptions.";
    return definition;
}

string _ArtificialIntelligence::Definitions::DensityBasedSpatialClusteringOfApplicationsWithNoise()
{
    string definition = "A clustering algorithm proposed by Martin Ester, Hans-Peter Kriegel, Jörg Sander, and Xiaowei Xu in 1996.";
    return definition;
}

string _ArtificialIntelligence::Definitions::DescriptionLogic()
{
    string definition = "A family of formal knowledge representation languages. Many DLs are more expressive than propositional logic but less expressive than first-order logic. In contrast to the latter, the core reasoning problems for DLs are (usually) decidable, and efficient decision procedures have been designed and implemented for these problems. There are general, spatial, temporal, spatiotemporal, and fuzzy descriptions logics, and each description logic features a different balance between DL expressivity and reasoning complexity by supporting different sets of mathematical constructors.";
    return definition;

}

string _ArtificialIntelligence::Definitions::DevelopmentalRobotics()
{
    string definition = "A scientific field which aims at studying the developmental mechanisms, architectures, and constraints that allow lifelong and open-ended learning of new skills and new knowledge in embodied machines.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Diagnosis()
{
    string definition = "Concerned with the development of algorithms and techniques that are able to determine whether the behaviour of a system is correct. If the system is not functioning correctly, the algorithm should be able to determine, as accurately as possible, which part of the system is failing, and which kind of fault it is facing. The computation is based on observations, which provide information on the current behaviour.";
    return definition;
}

string _ArtificialIntelligence::Definitions::DialogueSystem()
{
    string definition = "A computer system intended to converse with a human with a coherent structure. Dialogue systems have employed text, speech, graphics, haptics, gestures, and other modes for communication on both the input and output channel.";
    return definition;
}

string _ArtificialIntelligence::Definitions::DiffusionModel()
{
    string definition = "In machine learning, diffusion models, also known as diffusion probabilistic models or score-based generative models, are a class of latent variable models. They are Markov chains trained using variational inference. The goal of diffusion models is to learn the latent structure of a dataset by modeling the way in which data points diffuse through the latent space. In computer vision, this means that a neural network is trained to denoise images blurred with Gaussian noise by learning to reverse the diffusion process. It mainly consists of three major components: the forward process, the reverse process, and the sampling procedure. Three examples of generic diffusion modeling frameworks used in computer vision are denoising diffusion probabilistic models, noise conditioned score networks, and stochastic differential equations.";
    return definition;

}

string _ArtificialIntelligence::Definitions::DijkstrasAlgorithm()
{
    string definition = "An algorithm for finding the shortest paths between nodes in a weighted graph, which may represent, for example, road networks.";
    return definition;
}

string _ArtificialIntelligence::Definitions::DimensionalityReduction()
{
    string definition = "The process of reducing the number of random variables under consideration by obtaining a set of principal variables. It can be divided into feature selection and feature extraction.";
    return definition;
}

string _ArtificialIntelligence::Definitions::DiscreteSystem()
{
    string definition = "Any system with a countable number of states. Discrete systems may be contrasted with continuous systems, which may also be called analog systems. A final discrete system is often modeled with a directed graph and is analyzed for correctness and complexity according to computational theory. Because discrete systems have a countable number of states, they may be described in precise mathematical models. A computer is a finite state machine that may be viewed as a discrete system. Because computers are often used to model not only other discrete systems but continuous systems as well, methods have been developed to represent real-world continuous systems as discrete systems. One such method involves sampling a continuous signal at discrete time intervals.";
    return definition;
}

string _ArtificialIntelligence::Definitions::DistributedArtificialIntelligence()
{
    string definition = "A subfield of artificial intelligence research dedicated to the development of distributed solutions for problems. DAI is closely related to and a predecessor of the field of multi-agent systems.";
    return definition;
}

string _ArtificialIntelligence::Definitions::DoubleDescent()
{
    string definition = "A phenomenon in statistics and machine learning where a model with a small number of parameters and a model with an extremely large number of parameters have a small test error, but a model whose number of parameters is about the same as the number of data points used to train the model will have a large error. This phenomenon has been considered surprising, as it contradicts assumptions about overfitting in classical machine learning.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Dropout()
{
    string definition = "A regularization technique for reducing overfitting in artificial neural networks by preventing complex co-adaptations on training data.";
    return definition;
}

string _ArtificialIntelligence::Definitions::DynamicEpistemicLogic()
{
    string definition = "A logical framework dealing with knowledge and information change. Typically, DEL focuses on situations involving multiple agents and studies how their knowledge changes when events occur.";
    return definition;
}

string _ArtificialIntelligence::Definitions::EagerLearning()
{
    string definition = "A learning method in which the system tries to construct a general, input-independent target function during training of the system, as opposed to lazy learning, where generalization beyond the training data is delayed until a query is made to the system.";
    return definition;

}

string _ArtificialIntelligence::Definitions::EarlyStopping()
{
    string definition = "A regularization technique often used when training a machine learning model with an iterative method such as gradient descent.";
    return definition;

}

string _ArtificialIntelligence::Definitions::EbertTest()
{
    string definition = "A test which gauges whether a computer-based synthesized voice can tell a joke with sufficient skill to cause people to laugh. It was proposed by film critic Roger Ebert at the 2011 TED conference as a challenge to software developers to have a computerized voice master the inflections, delivery, timing, and intonations of a speaking human. The test is similar to the Turing test proposed by Alan Turing in 1950 as a way to gauge a computer's ability to exhibit intelligent behavior by generating performance indistinguishable from a human being.";
    return definition;

}

string _ArtificialIntelligence::Definitions::EchoStateNetwork()
{
    string definition = "A recurrent neural network with a sparsely connected hidden layer (with typically 1% connectivity). The connectivity and weights of hidden neurons are fixed and randomly assigned. The weights of output neurons can be learned so that the network can (re)produce specific temporal patterns. The main interest of this network is that although its behaviour is non-linear, the only weights that are modified during training are for the synapses that connect the hidden neurons to output neurons. Thus, the error function is quadratic with respect to the parameter vector and can be differentiated easily to a linear system.";
    return definition;
}

string _ArtificialIntelligence::Definitions::EmbodiedAgent()
{
    string definition = "An intelligent agent that interacts with the environment through a physical body within that environment. Agents that are represented graphically with a body, for example a human or a cartoon animal, are also called embodied agents, although they have only virtual, not physical, embodiment.";
    return definition;
}

string _ArtificialIntelligence::Definitions::EmbodiedCognitiveScience()
{
    string definition = "An interdisciplinary field of research, the aim of which is to explain the mechanisms underlying intelligent behavior. It comprises three main methodologies: 1) the modeling of psychological and biological systems in a holistic manner that considers the mind and body as a single entity, 2) the formation of a common set of general principles of intelligent behavior, and 3) the experimental use of robotic agents in controlled environments.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ErrorDrivenLearning()
{
    string definition = "A sub-area of machine learning concerned with how an agent ought to take actions in an environment so as to minimize some error feedback. It is a type of reinforcement learning.";
    return definition;

}

string _ArtificialIntelligence::Definitions::EnsembleLearning()
{
    string definition = "The use of multiple machine learning algorithms to obtain better predictive performance than could be obtained from any of the constituent learning algorithms alone.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Epoch()
{
    string definition = "In machine learning, particularly in the creation of artificial neural networks, an epoch is training the model for one cycle through the full training dataset. Small models are typically trained for as many epochs as it takes to reach the best performance on the validation dataset. The largest models may train for only one epoch.";
    return definition;

}

string _ArtificialIntelligence::Definitions::EthicsOfArtificialIntelligence()
{
    string definition = "The part of the ethics of technology specific to artificial intelligence.";
    return definition;

}

string _ArtificialIntelligence::Definitions::EvolutionaryAlgorithm()
{
    string definition = "A subset of evolutionary computation, a generic population-based metaheuristic optimization algorithm. An EA uses mechanisms inspired by biological evolution, such as reproduction, mutation, recombination, and selection. Candidate solutions to the optimization problem play the role of individuals in a population, and the fitness function determines the quality of the solutions (see also loss function). Evolution of the population then takes place after the repeated application of the above operators.";
    return definition;

}

string _ArtificialIntelligence::Definitions::EvolutionaryComputation()
{
    string definition = "A family of algorithms for global optimization inspired by biological evolution, and the subfield of artificial intelligence and soft computing studying these algorithms. In technical terms, they are a family of population-based trial and error problem solvers with a metaheuristic or stochastic optimization character.";
    return definition;

}

string _ArtificialIntelligence::Definitions::EvolvingClassificationFunction()
{
    string definition = "Evolving classification functions are used for classifying and clustering in the field of machine learning and artificial intelligence, typically employed for data stream mining tasks in dynamic and changing environments.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ExistentialRisk()
{
    string definition = "The hypothesis that substantial progress in artificial general intelligence (AGI) could someday result in human extinction or some other unrecoverable global catastrophe.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ExpertSystem()
{
    string definition = "A computer system that emulates the decision-making ability of a human expert. Expert systems are designed to solve complex problems by reasoning through bodies of knowledge, represented mainly as if–then rules rather than through conventional procedural code.";
    return definition;

}

string _ArtificialIntelligence::Definitions::FastAndFrugalTrees()
{
    string definition = "A type of classification tree. Fast-and-frugal trees can be used as decision-making tools which operate as lexicographic classifiers, and, if required, associate an action (decision) to each class or category.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Feature()
{
    string definition = "An individual measurable property or characteristic of a phenomenon. In computer vision and image processing, a feature is a piece of information about the content of an image; typically about whether a certain region of the image has certain properties. Features may be specific structures in an image (such as points, edges, or objects), or the result of a general neighborhood operation or feature detection applied to the image.";
    return definition;

}

string _ArtificialIntelligence::Definitions::FeatureExtraction()
{
    string definition = "In machine learning, pattern recognition, and image processing, feature extraction starts from an initial set of measured data and builds derived values (features) intended to be informative and non-redundant, facilitating the subsequent learning and generalization steps, and in some cases leading to better human interpretations.";
    return definition;

}

string _ArtificialIntelligence::Definitions::FeatureLearning()
{
    string definition = "In machine learning, feature learning or representation learning is a set of techniques that allows a system to automatically discover the representations needed for feature detection or classification from raw data. This replaces manual feature engineering and allows a machine to both learn the features and use them to perform a specific task.";
    return definition;

}

string _ArtificialIntelligence::Definitions::FeatureSelection()
{
    string definition = "In machine learning and statistics, feature selection, also known as variable selection, attribute selection or variable subset selection, is the process of selecting a subset of relevant features (variables, predictors) for use in model construction.";
    return definition;

}

string _ArtificialIntelligence::Definitions::FederatedLearning()
{
    string definition = "A machine learning technique that allows for training models on multiple devices with decentralized data, thus helping preserve the privacy of individual users and their data.";
    return definition;

}

string _ArtificialIntelligence::Definitions::FirstOrderLogic()
{
    string definition = "A collection of formal systems used in mathematics, philosophy, linguistics, and computer science. First-order logic uses quantified variables over non-logical objects and allows the use of sentences that contain variables, so that rather than propositions such as Socrates is a man one can have expressions in the form \"there exists X such that X is Socrates and X is a man\" and there exists is a quantifier while X is a variable. This distinguishes it from propositional logic, which does not use quantifiers or relations.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Fluent()
{
    string definition = "A condition that can change over time. In logical approaches to reasoning about actions, fluents can be represented in first-order logic by predicates having an argument that depends on time.";
    return definition;

}

string _ArtificialIntelligence::Definitions::FormalLanguage()
{
    string definition = "A set of words whose letters are taken from an alphabet and are well-formed according to a specific set of rules.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ForwardChaining()
{
    string definition = "ne of the two main methods of reasoning when using an inference engine and can be described logically as repeated application of modus ponens. Forward chaining is a popular implementation strategy for expert systems, businesses and production rule systems. The opposite of forward chaining is backward chaining. Forward chaining starts with the available data and uses inference rules to extract more data (from an end user, for example) until a goal is reached. An inference engine using forward chaining searches the inference rules until it finds one where the antecedent (If clause) is known to be true. When such a rule is found, the engine can conclude, or infer, the consequent (Then clause), resulting in the addition of new information to its data.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Frame()
{
    string definition = "An artificial intelligence data structure used to divide knowledge into substructures by representing \"stereotyped situations\". Frames are the primary data structure used in artificial intelligence frame language.";
    return definition;

}

string _ArtificialIntelligence::Definitions::FrameLanguage()
{
    string definition = "A technology used for knowledge representation in artificial intelligence. Frames are stored as ontologies of sets and subsets of the frame concepts. They are similar to class hierarchies in object-oriented languages although their fundamental design goals are different. Frames are focused on explicit and intuitive representation of knowledge whereas objects focus on encapsulation and information hiding. Frames originated in AI research and objects primarily in software engineering. However, in practice the techniques and capabilities of frame and object-oriented languages overlap significantly.";
    return definition;
}

string _ArtificialIntelligence::Definitions::FrameProblem()
{
    string definition = "The problem of finding adequate collections of axioms for a viable description of a robot environment.";
    return definition;

}

string _ArtificialIntelligence::Definitions::FriendlyArtificialIntelligence()
{
    string definition = "A hypothetical artificial general intelligence (AGI) that would have a positive effect on humanity. It is a part of the ethics of artificial intelligence and is closely related to machine ethics. While machine ethics is concerned with how an artificially intelligent agent should behave, friendly artificial intelligence research is focused on how to practically bring about this behaviour and ensuring it is adequately constrained.";
    return definition;
}

string _ArtificialIntelligence::Definitions::FuturesStudies()
{
    string definition = "The study of postulating possible, probable, and preferable futures and the worldviews and myths that underlie them.";
    return definition;

}

string _ArtificialIntelligence::Definitions::FuzzyControlSystem()
{
    string definition = "A control system based on fuzzy logic—a mathematical system that analyzes analog input values in terms of logical variables that take on continuous values between 0 and 1, in contrast to classical or digital logic, which operates on discrete values of either 1 or 0 (true or false, respectively).";
    return definition;

}

string _ArtificialIntelligence::Definitions::FuzzyLogic()
{
    string definition = "A simple form for the many-valued logic, in which the truth values of variables may have any degree of \"Truthfulness\" that can be represented by any real number in the range between 0 (as in Completely False) and 1 (as in Completely True) inclusive. Consequently, It is employed to handle the concept of partial truth, where the truth value may range between completely true and completely false. In contrast to Boolean logic, where the truth values of variables may have the integer values 0 or 1 only.";
    return definition;

}

string _ArtificialIntelligence::Definitions::FuzzyRule()
{
    string definition = "A rule used within fuzzy logic systems to infer an output based on input variables.";
    return definition;

}

string _ArtificialIntelligence::Definitions::FuzzySet()
{
    string definition = "In classical set theory, the membership of elements in a set is assessed in binary terms according to a bivalent condition — an element either belongs or does not belong to the set. By contrast, fuzzy set theory permits the gradual assessment of the membership of elements in a set; this is described with the aid of a membership function valued in the real unit interval [0, 1]. Fuzzy sets generalize classical sets, since the indicator functions (aka characteristic functions) of classical sets are special cases of the membership functions of fuzzy sets, if the latter only take values 0 or 1. In fuzzy set theory, classical bivalent sets are usually called crisp sets. The fuzzy set theory can be used in a wide range of domains in which information is incomplete or imprecise, such as bioinformatics.";
    return definition;

}

string _ArtificialIntelligence::Definitions::GameTheory()
{
    string definition = "The study of mathematical models of strategic interaction between rational decision-makers.";
    return definition;

}

string _ArtificialIntelligence::Definitions::GeneralGamePlaying()
{
    string definition = "General game playing is the design of artificial intelligence programs to be able to run and play more than one game successfully.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Generalization()
{
    string definition = "The concept that humans, other animals, and artificial neural networks use past learning in present situations of learning if the conditions in the situations are regarded as similar.";
    return definition;

}

string _ArtificialIntelligence::Definitions::GeneralizationError()
{
    string definition = "For supervised learning applications in machine learning and statistical learning theory, generalization error (also known as the out-of-sample error or the risk) is a measure of how accurately a learning algorithm is able to predict outcomes for previously unseen data.";
    return definition;

}

string _ArtificialIntelligence::Definitions::GenerativeAdversarialNetwork()
{
    string definition = "A class of machine learning systems. Two neural networks contest with each other in a zero-sum game framework.";
    return definition;

}

string _ArtificialIntelligence::Definitions::GenerativeArtificialIntelligence()
{
    string definition = "Generative artificial intelligence is artificial intelligence capable of generating text, images, or other media in response to prompts. Generative AI models learn the patterns and structure of their input training data and then generate new data that has similar characteristics, typically using transformer-based deep neural networks.";
    return definition;

}

string _ArtificialIntelligence::Definitions::GenerativePretrainedTransformer()
{
    string definition = "A large language model based on the transformer architecture that generates text. It is first pretrained to predict the next token in texts (a token is typically a word, subword, or punctuation). After their pretraining, GPT models can generate human-like text by repeatedly predicting the token that they would expect to follow. GPT models are usually also fine-tuned, for example with reinforcement learning from human feedback to reduce hallucination or harmful behaviour, or to format the output in a conversationnal format.";
    return definition;

}

string _ArtificialIntelligence::Definitions::GeneticAlgorithm()
{
    string definition = "A metaheuristic inspired by the process of natural selection that belongs to the larger class of evolutionary algorithms (EA). Genetic algorithms are commonly used to generate high-quality solutions to optimization and search problems by relying on bio-inspired operators such as mutation, crossover and selection.[";
    return definition;

}

string _ArtificialIntelligence::Definitions::GeneticOperator()
{
    string definition = "An operator used in genetic algorithms to guide the algorithm towards a solution to a given problem. There are three main types of operators (mutation, crossover and selection), which must work in conjunction with one another in order for the algorithm to be successful.";
    return definition;

}

string _ArtificialIntelligence::Definitions::GlowwormSwarmOptimization()
{
    string definition = "A swarm intelligence optimization algorithm based on the behaviour of glowworms (also known as fireflies or lightning bugs).";
    return definition;

}

string _ArtificialIntelligence::Definitions::GradientBoosting()
{
    string definition = "A machine learning technique based on boosting in a functional space, where the target is pseudo-residuals instead of residuals as in traditional boosting.";
    return definition;

}

string _ArtificialIntelligence::Definitions::GraphAbstractDataType()
{
    string definition = "In computer science, a graph is an abstract data type that is meant to implement the undirected graph and directed graph concepts from mathematics; specifically, the field of graph theory.";
    return definition;

}

string _ArtificialIntelligence::Definitions::GraphDiscreteMathematics()
{
    string definition = "In mathematics, and more specifically in graph theory, a graph is a structure amounting to a set of objects in which some pairs of the objects are in some sense \"related\". The objects correspond to mathematical abstractions called vertices (also called nodes or points) and each of the related pairs of vertices is called an edge (also called an arc or line).";
    return definition;
}

string _ArtificialIntelligence::Definitions::GraphDatabase()
{
    string definition = "A database that uses graph structures for semantic queries with nodes, edges, and properties to represent and store data. A key concept of the system is the graph (or edge or relationship), which directly relates data items in the store a collection of nodes of data and edges representing the relationships between the nodes. The relationships allow data in the store to be linked together directly, and in many cases retrieved with one operation. Graph databases hold the relationships between data as a priority. Querying relationships within a graph database is fast because they are perpetually stored within the database itself. Relationships can be intuitively visualized using graph databases, making it useful for heavily inter-connected data.";
    return definition;
}

string _ArtificialIntelligence::Definitions::GraphTheory()
{
    string definition = "The study of graphs, which are mathematical structures used to model pairwise relations between objects.";
    return definition;

}

string _ArtificialIntelligence::Definitions::GraphTransversal()
{
    string definition = "The process of visiting (checking and/or updating) each vertex in a graph. Such traversals are classified by the order in which the vertices are visited. Tree traversal is a special case of graph traversal.";
    return definition;
}

string _ArtificialIntelligence::Definitions::Hallucination()
{
    string definition = "A response generated by AI that contains false or misleading information presented as fact.";
    return definition;
}

string _ArtificialIntelligence::Definitions::Heuristic()
{
    string definition = "A technique designed for solving a problem more quickly when classic methods are too slow, or for finding an approximate solution when classic methods fail to find any exact solution. This is achieved by trading optimality, completeness, accuracy, or precision for speed. In a way, it can be considered a shortcut. A heuristic function, also called simply a heuristic, is a function that ranks alternatives in search algorithms at each branching step based on available information to decide which branch to follow. For example, it may approximate the exact solution.";
    return definition;

}

string _ArtificialIntelligence::Definitions::HiddenLayer()
{
    string definition = "A layer of neurons in an artificial neural network that is neither an input layer nor an output layer.";
    return definition;

}

string _ArtificialIntelligence::Definitions::HyperHeuristic()
{
    string definition = "A heuristic search method that seeks to automate the process of selecting, combining, generating, or adapting several simpler heuristics (or components of such heuristics) to efficiently solve computational search problems, often by the incorporation of machine learning techniques. One of the motivations for studying hyper-heuristics is to build systems which can handle classes of problems rather than solving just one problem.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Hyperperameter()
{
    string definition = "A parameter that can be set in order to define any configurable part of a machine learning model's learning process.";
    return definition;

}

string _ArtificialIntelligence::Definitions::HyperperameterOptimization()
{
    string definition = "The process of choosing a set of optimal hyperparameters for a learning algorithm.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Hyperplane()
{
    string definition = "A decision boundary in machine learning classifiers that partitions the input space into two or more sections, with each section corresponding to a unique class label.";
    return definition;

}

string _ArtificialIntelligence::Definitions::IEEEComputationalIntelligenceSociety()
{
    string definition = "A professional society of the Institute of Electrical and Electronics Engineers (IEEE) focussing on \"the theory, design, application, and development of biologically and linguistically motivated computational paradigms emphasizing neural networks, connectionist systems, genetic algorithms, evolutionary programming, fuzzy systems, and hybrid intelligent systems in which these paradigms are contained\".";
    return definition;

}

string _ArtificialIntelligence::Definitions::IncrementalLearning()
{
    string definition = "A method of machine learning, in which input data is continuously used to extend the existing model's knowledge i.e. to further train the model. It represents a dynamic technique of supervised and unsupervised learning that can be applied when training data becomes available gradually over time or its size is out of system memory limits. Algorithms that can facilitate incremental learning are known as incremental machine learning algorithms.";
    return definition;

}

string _ArtificialIntelligence::Definitions::InferenceEngine()
{
    string definition = "A component of the system that applies logical rules to the knowledge base to deduce new information.";
    return definition;
}

string _ArtificialIntelligence::Definitions::InformationIntegration()
{
    string definition = "The merging of information from heterogeneous sources with differing conceptual, contextual and typographical representations. It is used in data mining and consolidation of data from unstructured or semi-structured resources. Typically, information integration refers to textual representations of knowledge but is sometimes applied to rich-media content. Information fusion, which is a related term, involves the combination of information into a new set of information towards reducing redundancy and uncertainty.";
    return definition;

}

string _ArtificialIntelligence::Definitions::InformationProcessingLanguage()
{
    string definition = "A programming language that includes features intended to help with programs that perform simple problem solving actions such as lists, dynamic memory allocation, data types, recursion, functions as arguments, generators, and cooperative multitasking. IPL invented the concept of list processing, albeit in an assembly-language style.";
    return definition;

}

string _ArtificialIntelligence::Definitions::IntelligenceAmplification()
{
    string definition = "The effective use of information technology in augmenting human intelligence.";
    return definition;

}

string _ArtificialIntelligence::Definitions::IntelligenceExplosion()
{
    string definition = "A possible outcome of humanity building artificial general intelligence (AGI). AGI would be capable of recursive self-improvement leading to rapid emergence of ASI (artificial superintelligence), the limits of which are unknown, at the time of the technological singularity.";
    return definition;

}

string _ArtificialIntelligence::Definitions::IntelligentAgent()
{
    string definition = "An autonomous entity which acts, directing its activity towards achieving goals (i.e. it is an agent), upon an environment using observation through sensors and consequent actuators (i.e. it is intelligent). Intelligent agents may also learn or use knowledge to achieve their goals. They may be very simple or very complex.";
    return definition;

}

string _ArtificialIntelligence::Definitions::IntelligentControl()
{
    string definition = "A class of control techniques that use various artificial intelligence computing approaches like neural networks, Bayesian probability, fuzzy logic, machine learning, reinforcement learning, evolutionary computation and genetic algorithms.";
    return definition;

}

string _ArtificialIntelligence::Definitions::IntelligentPersonalAssistant()
{
    string definition = "A software agent that can perform tasks or services for an individual based on verbal commands. Sometimes the term \"chatbot\" is used to refer to virtual assistants generally or specifically accessed by online chat (or in some cases online chat programs that are exclusively for entertainment purposes). Some virtual assistants are able to interpret human speech and respond via synthesized voices. Users can ask their assistants questions, control home automation devices and media playback via voice, and manage other basic tasks such as email, to-do lists, and calendars with verbal commands.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Interpretation()
{
    string definition = "An assignment of meaning to the symbols of a formal language. Many formal languages used in mathematics, logic, and theoretical computer science are defined in solely syntactic terms, and as such do not have any meaning until they are given some interpretation. The general study of interpretations of formal languages is called formal semantics.";
    return definition;

}

string _ArtificialIntelligence::Definitions::IntrinsicMotivation()
{
    string definition = "An intelligent agent is intrinsically motivated to act if the information content alone, of the experience resulting from the action, is the motivating factor. Information content in this context is measured in the information theory sense as quantifying uncertainty. A typical intrinsic motivation is to search for unusual (surprising) situations, in contrast to a typical extrinsic motivation such as the search for food. Intrinsically motivated artificial agents display behaviours akin to exploration and curiosity.[";
    return definition;

}

string _ArtificialIntelligence::Definitions::IssueTree()
{
    string definition = "A graphical breakdown of a question that dissects it into its different components vertically and that progresses into details as it reads to the right. Issue trees are useful in problem solving to identify the root causes of a problem as well as to identify its potential solutions. They also provide a reference point to see how each piece fits into the whole picture of a problem.";
    return definition;

}

string _ArtificialIntelligence::Definitions::JunctionTreeAlgorithm()
{
    string definition = "A method used in machine learning to extract marginalization in general graphs. In essence, it entails performing belief propagation on a modified graph called a junction tree. The graph is called a tree because it branches into different sections of data; nodes of variables are the branches.";
    return definition;

}

string _ArtificialIntelligence::Definitions::KernelMethod()
{
    string definition = "In machine learning, kernel methods are a class of algorithms for pattern analysis, whose best known member is the support vector machine (SVM). The general task of pattern analysis is to find and study general types of relations (e.g., cluster analysis, rankings, principal components, correlations, classifications) in datasets.";
    return definition;

}

string _ArtificialIntelligence::Definitions::KLONE()
{
    string definition = "A well-known knowledge representation system in the tradition of semantic networks and frames; that is, it is a frame language. The system is an attempt to overcome semantic indistinctness in semantic network representations and to explicitly represent conceptual information as a structured inheritance network.";
    return definition;

}

string _ArtificialIntelligence::Definitions::KNearestNeighbors()
{
    string definition = "A non-parametric supervised learning method first developed by Evelyn Fix and Joseph Hodges in 1951, and later expanded by Thomas Cover. It is used for classification and regression.";
    return definition;

}

string _ArtificialIntelligence::Definitions::KnowledgeAcquisition()
{
    string definition = "The process used to define the rules and ontologies required for a knowledge-based system. The phrase was first used in conjunction with expert systems to describe the initial tasks associated with developing an expert system, namely finding and interviewing domain experts and capturing their knowledge via rules, objects, and frame-based ontologies.";
    return definition;

}

string _ArtificialIntelligence::Definitions::KnowledgeBasedSystem()
{
    string definition = "A computer program that reasons and uses a knowledge base to solve complex problems. The term is broad and refers to many different kinds of systems. The one common theme that unites all knowledge based systems is an attempt to represent knowledge explicitly and a reasoning system that allows it to derive new knowledge. Thus, a knowledge-based system has two distinguishing features: a knowledge base and an inference engine.";
    return definition;

}

string _ArtificialIntelligence::Definitions::KnowledgeDistilation()
{
    string definition = "The process of transferring knowledge from a large machine learning model to a smaller one.";
    return definition;

}

string _ArtificialIntelligence::Definitions::KnowledgeEngineering()
{
    string definition = "All technical, scientific, and social aspects involved in building, maintaining, and using knowledge-based systems.";
    return definition;

}

string _ArtificialIntelligence::Definitions::KnowledgeExtraction()
{
    string definition = "The creation of knowledge from structured (relational databases, XML) and unstructured (text, documents, images) sources. The resulting knowledge needs to be in a machine-readable and machine-interpretable format and must represent knowledge in a manner that facilitates inferencing. Although it is methodically similar to information extraction and ETL, the main criterion is that the extraction result goes beyond the creation of structured information or the transformation into a relational schema. It requires either the reuse of existing formal knowledge (reusing identifiers or ontologies) or the generation of a schema based on the source data.";
    return definition;

}

string _ArtificialIntelligence::Definitions::KnowledgeInterchangeFormat()
{
    string definition = "A computer language designed to enable systems to share and reuse information from knowledge-based systems. KIF is similar to frame languages such as KL-ONE and LOOM but unlike such language its primary role is not intended as a framework for the expression or use of knowledge but rather for the interchange of knowledge between systems. The designers of KIF likened it to PostScript. PostScript was not designed primarily as a language to store and manipulate documents but rather as an interchange format for systems and devices to share documents. In the same way KIF is meant to facilitate sharing of knowledge across different systems that use different languages, formalisms, platforms, etc.";
    return definition;

}

string _ArtificialIntelligence::Definitions::KnowledgeRepresentationAndReasoning()
{
    string definition = "The field of artificial intelligence dedicated to representing information about the world in a form that a computer system can utilize to solve complex tasks such as diagnosing a medical condition or having a dialog in a natural language. Knowledge representation incorporates findings from psychology about how humans solve problems and represent knowledge in order to design formalisms that will make complex systems easier to design and build. Knowledge representation and reasoning also incorporates findings from logic to automate various kinds of reasoning, such as the application of rules or the relations of sets and subsets. Examples of knowledge representation formalisms include semantic nets, systems architecture, frames, rules, and ontologies. Examples of automated reasoning engines include inference engines, theorem provers, and classifiers.";
    return definition;

}

string _ArtificialIntelligence::Definitions::KMeansClustering()
{
    string definition = "A method of vector quantization, originally from signal processing, that aims to partition n observations into k clusters in which each observation belongs to the cluster with the nearest mean (cluster centers or cluster centroid), serving as a prototype of the cluster.";
    return definition;

}

string _ArtificialIntelligence::Definitions::LanguageModel()
{
    string definition = "A probabilistic model that manipulates natural language.";
    return definition;

}

string _ArtificialIntelligence::Definitions::LargeLanguageModel()
{
    string definition = "A language model with a large number of parameters (typically at least a billion) that are adjusted during training. Due to its size, it requires a lot of data and computing capability to train. Large language models are usually based on the transformer architecture.";
    return definition;

}

string _ArtificialIntelligence::Definitions::LazyLearning()
{
    string definition = "In machine learning, lazy learning is a learning method in which generalization of the training data is, in theory, delayed until a query is made to the system, as opposed to in eager learning, where the system tries to generalize the training data before receiving queries.";
    return definition;

}

string _ArtificialIntelligence::Definitions::LISP()
{
    string definition = "A family of programming languages with a long history and a distinctive, fully parenthesized prefix notation.";
    return definition;

}

string _ArtificialIntelligence::Definitions::LogicProgramming()
{
    string definition = "A type of programming paradigm which is largely based on formal logic. Any program written in a logic programming language is a set of sentences in logical form, expressing facts and rules about some problem domain. Major logic programming language families include Prolog, answer set programming (ASP), and Datalog.";
    return definition;

}

string _ArtificialIntelligence::Definitions::LongShortTermMemory()
{
    string definition = "An artificial recurrent neural network architecture used in the field of deep learning. Unlike standard feedforward neural networks, LSTM has feedback connections that make it a \"general purpose computer\" (that is, it can compute anything that a Turing machine can). It can not only process single data points (such as images), but also entire sequences of data (such as speech or video).";
    return definition;

}

string _ArtificialIntelligence::Definitions::MachineVision()
{
    string definition = "The technology and methods used to provide imaging-based automatic inspection and analysis for such applications as automatic inspection, process control, and robot guidance, usually in industry. Machine vision is a term encompassing a large number of technologies, software and hardware products, integrated systems, actions, methods and expertise. Machine vision as a systems engineering discipline can be considered distinct from computer vision, a form of computer science. It attempts to integrate existing technologies in new ways and apply them to solve real world problems. The term is the prevalent one for these functions in industrial automation environments but is also used for these functions in other environments such as security and vehicle guidance.";
    return definition;

}

string _ArtificialIntelligence::Definitions::MarkovChain()
{
    string definition = "A stochastic model describing a sequence of possible events in which the probability of each event depends only on the state attained in the previous event.";
    return definition;

}

string _ArtificialIntelligence::Definitions::MarkovDecisionProcess()
{
    string definition = "A discrete time stochastic control process. It provides a mathematical framework for modeling decision making in situations where outcomes are partly random and partly under the control of a decision maker. MDPs are useful for studying optimization problems solved via dynamic programming and reinforcement learning.";
    return definition;

}

string _ArtificialIntelligence::Definitions::MathematicalOptimization()
{
    string definition = "In mathematics, computer science, and operations research, the selection of a best element (with regard to some criterion) from some set of available alternatives.";
    return definition;

}

string _ArtificialIntelligence::Definitions::MachineLearning()
{
    string definition = "The scientific study of algorithms and statistical models that computer systems use in order to perform a specific task effectively without using explicit instructions, relying on patterns and inference instead.";
    return definition;

}

string _ArtificialIntelligence::Definitions::MachineListening()
{
    string definition = "A general field of study of algorithms and systems for audio understanding by machine.";
    return definition;

}

string _ArtificialIntelligence::Definitions::MachinePerception()
{
    string definition = "The capability of a computer system to interpret data in a manner that is similar to the way humans use their senses to relate to the world around them.";
    return definition;

}

string _ArtificialIntelligence::Definitions::MechanismDesign()
{
    string definition = "A field in economics and game theory that takes an engineering approach to designing economic mechanisms or incentives, toward desired objectives, in strategic settings, where players act rationally. Because it starts at the end of the game, then goes backwards, it is also called reverse game theory. It has broad applications, from economics and politics (markets, auctions, voting procedures) to networked-systems (internet interdomain routing, sponsored search auctions).";
    return definition;
}

string _ArtificialIntelligence::Definitions::MetabolicNetworkReconstructionAndSimulation()
{
    string definition = "Allows for an in-depth insight into the molecular mechanisms of a particular organism. In particular, these models correlate the genome with molecular physiology.";
    return definition;
}

string _ArtificialIntelligence::Definitions::Metaheuristic()
{
    string definition = "In computer science and mathematical optimization, a metaheuristic is a higher-level procedure or heuristic designed to find, generate, or select a heuristic (partial search algorithm) that may provide a sufficiently good solution to an optimization problem, especially with incomplete or imperfect information or limited computation capacity. Metaheuristics sample a set of solutions which is too large to be completely sampled.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ModelChecking()
{
    string definition = "In computer science, model checking or property checking is, for a given model of a system, exhaustively and automatically checking whether this model meets a given specification. Typically, one has hardware or software systems in mind, whereas the specification contains safety requirements such as the absence of deadlocks and similar critical states that can cause the system to crash. Model checking is a technique for automatically verifying correctness properties of finite-state systems.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ModusPonens()
{
    string definition = "In propositional logic, modus ponens is a rule of inference. It can be summarized as \"P implies Q and P is asserted to be true, therefore Q must be true.\"";
    return definition;

}

string _ArtificialIntelligence::Definitions::ModusTollens()
{
    string definition = "In propositional logic, modus tollens is a valid argument form and a rule of inference. It is an application of the general truth that if a statement is true, then so is its contrapositive. The inference rule modus tollens asserts that the inference from P implies Q to the negation of Q implies the negation of P is valid.";
    return definition;

}

string _ArtificialIntelligence::Definitions::MonteCarloTreeSearch()
{
    string definition = "In computer science, Monte Carlo tree search (MCTS) is a heuristic search algorithm for some kinds of decision processes.";
    return definition;

}

string _ArtificialIntelligence::Definitions::MultiAgentSystem()
{
    string definition = "A computerized system composed of multiple interacting intelligent agents. Multi-agent systems can solve problems that are difficult or impossible for an individual agent or a monolithic system to solve. Intelligence may include methodic, functional, procedural approaches, algorithmic search or reinforcement learning.";
    return definition;

}

string _ArtificialIntelligence::Definitions::MultilayerPerceptron()
{
    string definition = "In deep learning, a multilayer perceptron (MLP) is a name for a modern feedforward neural network consisting of fully connected neurons with nonlinear activation functions, organized in layers, notable for being able to distinguish data that is not linearly separable.";
    return definition;

}

string _ArtificialIntelligence::Definitions::MultiSwarmOptimization()
{
    string definition = "A variant of particle swarm optimization (PSO) based on the use of multiple sub-swarms instead of one (standard) swarm. The general approach in multi-swarm optimization is that each sub-swarm focuses on a specific region while a specific diversification method decides where and when to launch the sub-swarms. The multi-swarm framework is especially fitted for the optimization on multi-modal problems, where multiple (local) optima exist.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Mutation()
{
    string definition = "A genetic operator used to maintain genetic diversity from one generation of a population of genetic algorithm chromosomes to the next. It is analogous to biological mutation. Mutation alters one or more gene values in a chromosome from its initial state. In mutation, the solution may change entirely from the previous solution. Hence GA can come to a better solution by using mutation. Mutation occurs during evolution according to a user-definable mutation probability. This probability should be set low. If it is set too high, the search will turn into a primitive random search.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Mycin()
{
    string definition = "An early backward chaining expert system that used artificial intelligence to identify bacteria causing severe infections, such as bacteremia and meningitis, and to recommend antibiotics, with the dosage adjusted for patient's body weight – the name derived from the antibiotics themselves, as many antibiotics have the suffix \" - mycin\". The MYCIN system was also used for the diagnosis of blood clotting diseases.";
    return definition;

}

string _ArtificialIntelligence::Definitions::NaiveBayesClassifier()
{
    string definition = "In machine learning, naive Bayes classifiers are a family of simple probabilistic classifiers based on applying Bayes' theorem with strong (naive) independence assumptions between the features.";
    return definition;
}

string _ArtificialIntelligence::Definitions::NaiveSemantics()
{
    string definition = "An approach used in computer science for representing basic knowledge about a specific domain, and has been used in applications such as the representation of the meaning of natural language sentences in artificial intelligence applications. In a general setting the term has been used to refer to the use of a limited store of generally understood knowledge about a specific domain in the world, and has been applied to fields such as the knowledge based design of data schemas.";
    return definition;

}

string _ArtificialIntelligence::Definitions::NameBinding()
{
    string definition = "In programming languages, name binding is the association of entities (data and/or code) with identifiers. An identifier bound to an object is said to reference that object. Machine languages have no built-in notion of identifiers, but name-object bindings as a service and notation for the programmer is implemented by programming languages. Binding is intimately connected with scoping, as scope determines which names bind to which objects – at which locations in the program code (lexically) and in which one of the possible execution paths (temporally). Use of an identifier id in a context that establishes a binding for id is called a binding (or defining) occurrence. In all other occurrences (e.g., in expressions, assignments, and subprogram calls), an identifier stands for what it is bound to; such occurrences are called applied occurrences.";
    return definition;

}

string _ArtificialIntelligence::Definitions::NamedEntityRecognition()
{
    string definition = "A subtask of information extraction that seeks to locate and classify named entity mentions in unstructured text into pre-defined categories such as the person names, organizations, locations, medical codes, time expressions, quantities, monetary values, percentages, etc.";
    return definition;

}

string _ArtificialIntelligence::Definitions::NamedGraph()
{
    string definition = "A key concept of Semantic Web architecture in which a set of Resource Description Framework statements (a graph) are identified using a URI, allowing descriptions to be made of that set of statements such as context, provenance information or other such metadata. Named graphs are a simple extension of the RDF data model through which graphs can be created but the model lacks an effective means of distinguishing between them once published on the Web at large.";
    return definition;

}

string _ArtificialIntelligence::Definitions::NaturalLanguageGeneration()
{
    string definition = "A software process that transforms structured data into plain-English content. It can be used to produce long-form content for organizations to automate custom reports, as well as produce custom content for a web or mobile application. It can also be used to generate short blurbs of text in interactive conversations (a chatbot) which might even be read out loud by a text-to-speech system.";
    return definition;
}

string _ArtificialIntelligence::Definitions::NaturalLanguageProcessing()
{
    string definition = "A subfield of computer science, information engineering, and artificial intelligence concerned with the interactions between computers and human (natural) languages, in particular how to program computers to process and analyze large amounts of natural language data.";
    return definition;

}

string _ArtificialIntelligence::Definitions::NaturalLangugeProgramming()
{
    string definition = "An ontology-assisted way of programming in terms of natural-language sentences, e.g. English.";
    return definition;
}

string _ArtificialIntelligence::Definitions::NetworkMotif()
{
    string definition = "All networks, including biological networks, social networks, technological networks (e.g., computer networks and electrical circuits) and more, can be represented as graphs, which include a wide variety of subgraphs. One important local property of networks are so-called network motifs, which are defined as recurrent and statistically significant sub-graphs or patterns.";
    return definition;
}

string _ArtificialIntelligence::Definitions::NeuralMachineTranslation()
{
    string definition = "An approach to machine translation that uses a large artificial neural network to predict the likelihood of a sequence of words, typically modeling entire sentences in a single integrated model.";
    return definition;

}

string _ArtificialIntelligence::Definitions::NeuralNetwork()
{
    string definition = "A neural network can refer to either a neural circuit of biological neurons (sometimes also called a biological neural network), or a network of artificial neurons or nodes in the case of an artificial neural network. Artificial neural networks are used for solving artificial intelligence (AI) problems; they model connections of biological neurons as weights between nodes. A positive weight reflects an excitatory connection, while negative values mean inhibitory connections. All inputs are modified by a weight and summed. This activity is referred to as a linear combination. Finally, an activation function controls the amplitude of the output. For example, an acceptable range of output is usually between 0 and 1, or it could be −1 and 1.";
    return definition;

}

string _ArtificialIntelligence::Definitions::NeuralTuringMachine()
{
    string definition = "A recurrent neural network model. NTMs combine the fuzzy pattern matching capabilities of neural networks with the algorithmic power of programmable computers. An NTM has a neural network controller coupled to external memory resources, which it interacts with through attentional mechanisms. The memory interactions are differentiable end-to-end, making it possible to optimize them using gradient descent. An NTM with a long short-term memory (LSTM) network controller can infer simple algorithms such as copying, sorting, and associative recall from examples alone.";
    return definition;

}

string _ArtificialIntelligence::Definitions::NeuroFuzzy()
{
    string definition = "Combinations of artificial neural networks and fuzzy logic.";
    return definition;
}

string _ArtificialIntelligence::Definitions::Neurocybernetic()
{
    string definition = "A direct communication pathway between an enhanced or wired brain and an external device. BCI differs from neuromodulation in that it allows for bidirectional information flow. BCIs are often directed at researching, mapping, assisting, augmenting, or repairing human cognitive or sensory-motor functions.";
    return definition;
}

string _ArtificialIntelligence::Definitions::NeuromorphicEngineering()
{
    string definition = "A concept describing the use of very-large-scale integration (VLSI) systems containing electronic analog circuits to mimic neuro-biological architectures present in the nervous system.[252] In recent times, the term neuromorphic has been used to describe analog, digital, mixed-mode analog/digital VLSI, and software systems that implement models of neural systems (for perception, motor control, or multisensory integration). The implementation of neuromorphic computing on the hardware level can be realized by oxide-based memristors, spintronic memories, threshold switches, and transistors.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Node()
{
    string definition = "A basic unit of a data structure, such as a linked list or tree data structure. Nodes contain data and also may link to other nodes. Links between nodes are often implemented by pointers.";
    return definition;

}

string _ArtificialIntelligence::Definitions::NondeterministicAlgorithm()
{
    string definition = "An algorithm that, even for the same input, can exhibit different behaviors on different runs, as opposed to a deterministic algorithm.";
    return definition;

}

string _ArtificialIntelligence::Definitions::NouvelleAI()
{
    string definition = "Nouvelle AI differs from classical AI by aiming to produce robots with intelligence levels similar to insects. Researchers believe that intelligence can emerge organically from simple behaviors as these intelligences interacted with the \"real world\", instead of using the constructed worlds which symbolic AIs typically needed to have programmed into them.";
    return definition;

}

string _ArtificialIntelligence::Definitions::NP()
{
    string definition = "In computational complexity theory, NP (nondeterministic polynomial time) is a complexity class used to classify decision problems. NP is the set of decision problems for which the problem instances, where the answer is \"yes\", have proofs verifiable in polynomial time.";
    return definition;

}

string _ArtificialIntelligence::Definitions::NPCompleteness()
{
    string definition = "In computational complexity theory, a problem is NP-complete when it can be solved by a restricted class of brute force search algorithms and it can be used to simulate any other problem with a similar algorithm. More precisely, each input to the problem should be associated with a set of solutions of polynomial length, whose validity can be tested quickly (in polynomial time , such that the output for any input is \"yes\" if the solution set is non-empty and \"no\" if it is empty.";
    return definition;

}

string _ArtificialIntelligence::Definitions::NPHardness()
{
    string definition = "In computational complexity theory, the defining property of a class of problems that are, informally, \"at least as hard as the hardest problems in NP\". A simple example of an NP-hard problem is the subset sum problem.";
    return definition;
}

string _ArtificialIntelligence::Definitions::OccamsRazor()
{
    string definition = "The problem-solving principle that states that when presented with competing hypotheses that make the same predictions, one should select the solution with the fewest assumptions; the principle is not meant to filter out hypotheses that make different predictions. The idea is attributed to the English Franciscan friar William of Ockham (c. 1287–1347), a scholastic philosopher and theologian.";
    return definition;
}

string _ArtificialIntelligence::Definitions::OfflineLearnnig()
{
    string definition = "A machine learning training approach in which a model is trained on a fixed dataset that is not updated during the learning process.";
    return definition;

}

string _ArtificialIntelligence::Definitions::OnlineMachineLearning()
{
    string definition = "A method of machine learning in which data becomes available in a sequential order and is used to update the best predictor for future data at each step, as opposed to batch learning techniques which generate the best predictor by learning on the entire training data set at once. Online learning is a common technique used in areas of machine learning where it is computationally infeasible to train over the entire dataset, requiring the need of out-of-core algorithms. It is also used in situations where it is necessary for the algorithm to dynamically adapt to new patterns in the data, or when the data itself is generated as a function of time.";
    return definition;
}

string _ArtificialIntelligence::Definitions::OntologicalLearning()
{
    string definition = "The automatic or semi-automatic creation of ontologies, including extracting the corresponding domain's terms and the relationships between the concepts that these terms represent from a corpus of natural language text, and encoding them with an ontology language for easy retrieval.";
    return definition;
}

string _ArtificialIntelligence::Definitions::OpenAI()
{
    string definition = "The for-profit corporation OpenAI LP, whose parent organization is the non-profit organization OpenAI Inc that conducts research in the field of artificial intelligence (AI) with the stated aim to promote and develop friendly AI in such a way as to benefit humanity as a whole.";
    return definition;
}

string _ArtificialIntelligence::Definitions::OpenCog()
{
    string definition = "A project that aims to build an open-source artificial intelligence framework. OpenCog Prime is an architecture for robot and virtual embodied cognition that defines a set of interacting components designed to give rise to human-equivalent artificial general intelligence (AGI) as an emergent phenomenon of the whole system.";
    return definition;

}

string _ArtificialIntelligence::Definitions::OpenMindCommonSense()
{
    string definition = "An artificial intelligence project based at the Massachusetts Institute of Technology (MIT) Media Lab whose goal is to build and utilize a large commonsense knowledge base from the contributions of many thousands of people across the Web.";
    return definition;

}

string _ArtificialIntelligence::Definitions::OpenSourceSoftware()
{
    string definition = "A type of computer software in which source code is released under an license in which the copyright holder grants users the rights to study, change, and distribute the software to anyone and for any purpose. Open-source software may be developed in an collaborative public manner. Open-source software is a prominent example of open collaboration.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Overfitting()
{
    string definition = "\"The production of an analysis that corresponds too closely or exactly to a particular set of data, and may therefore fail to fit to additional data or predict future observations reliably\". In other words, an overfitted model memorizes training data details but cannot generalize to new data. Conversely, an underfitted model is too simple to capture the complexity of the training data.";
    return definition;

}

string _ArtificialIntelligence::Definitions::PartialOrderReduction()
{
    string definition = "A technique for reducing the size of the state-space to be searched by a model checking or automated planning and scheduling algorithm. It exploits the commutativity of concurrently executed transitions, which result in the same state when executed in different orders.";
    return definition;

}

string _ArtificialIntelligence::Definitions::PartiallyObservableMarkovDecisionProcess()
{
    string definition = "A generalization of a Markov decision process (MDP). A POMDP models an agent decision process in which it is assumed that the system dynamics are determined by an MDP, but the agent cannot directly observe the underlying state. Instead, it must maintain a probability distribution over the set of possible states, based on a set of observations and observation probabilities, and the underlying MDP.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ParticalSwarmOptimization()
{
    string definition = "A computational method that optimizes a problem by iteratively trying to improve a candidate solution with regard to a given measure of quality. It solves a problem by having a population of candidate solutions, here dubbed particles, and moving these particles around in the search-space according to simple mathematical formulae over the particle's position and velocity. Each particle's movement is influenced by its local best known position, but is also guided toward the best known positions in the search-space, which are updated as better positions are found by other particles. This is expected to move the swarm toward the best solutions.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Pathfinding()
{
    string definition = "The plotting, by a computer application, of the shortest route between two points. It is a more practical variant on solving mazes. This field of research is based heavily on Dijkstra's algorithm for finding a shortest path on a weighted graph.";
    return definition;

}

string _ArtificialIntelligence::Definitions::PatternRecognition()
{
    string definition = "Concerned with the automatic discovery of regularities in data through the use of computer algorithms and with the use of these regularities to take actions such as classifying the data into different categories.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Perceptron()
{
    string definition = "An algorithm for supervised learning of binary classifiers.";
    return definition;

}

string _ArtificialIntelligence::Definitions::PredicateLogic()
{
    string definition = "A collection of formal systems used in mathematics, philosophy, linguistics, and computer science. First-order logic uses quantified variables over non-logical objects and allows the use of sentences that contain variables, so that rather than propositions such as Socrates is a man one can have expressions in the form \"there exists x such that x is Socrates and x is a man\" and there exists is a quantifier while x is a variable. This distinguishes it from propositional logic, which does not use quantifiers or relations; in this sense, propositional logic is the foundation of first-order logic.";
    return definition;

}

string _ArtificialIntelligence::Definitions::PredictiveAnalytics()
{
    string definition = "A variety of statistical techniques from data mining, predictive modelling, and machine learning, that analyze current and historical facts to make predictions about future or otherwise unknown events.";
    return definition;
}

string _ArtificialIntelligence::Definitions::PrincipalComponentAnalysis()
{
    string definition = "A statistical procedure that uses an orthogonal transformation to convert a set of observations of possibly correlated variables (entities each of which takes on various numerical values) into a set of values of linearly uncorrelated variables called principal components. This transformation is defined in such a way that the first principal component has the largest possible variance (that is, accounts for as much of the variability in the data as possible), and each succeeding component, in turn, has the highest variance possible under the constraint that it is orthogonal to the preceding components. The resulting vectors (each being a linear combination of the variables and containing n observations) are an uncorrelated orthogonal basis set. PCA is sensitive to the relative scaling of the original variables.";
    return definition;

}

string _ArtificialIntelligence::Definitions::PrincipleOfRationality()
{
    string definition = "A principle coined by Karl R. Popper in his Harvard Lecture of 1963, and published in his book Myth of Framework. It is related to what he called the 'logic of the situation' in an Economica article of 1944/1945, published later in his book The Poverty of Historicism. According to Popper's rationality principle, agents act in the most adequate way according to the objective situation. It is an idealized conception of human behavior which he used to drive his model of situational logic.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ProbabalisticProgramming()
{
    string definition = "A programming paradigm in which probabilistic models are specified and inference for these models is performed automatically. It represents an attempt to unify probabilistic modeling and traditional general-purpose programming in order to make the former easier and more widely applicable. It can be used to create systems that help make decisions in the face of uncertainty. Programming languages used for probabilistic programming are referred to as \"Probabilistic programming languages\" (PPLs).";
    return definition;

}

string _ArtificialIntelligence::Definitions::ProductionSystem()
{
    string definition = "A computer program typically used to provide some form of AI, which consists primarily of a set of rules about behavior, but also includes the mechanism necessary to follow those rules as the system responds to states of the world.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ProgrammingLanguage()
{
    string definition = "A formal language, which comprises a set of instructions that produce various kinds of output. Programming languages are used in computer programming to implement algorithms.";
    return definition;
}

string _ArtificialIntelligence::Definitions::Prolog()
{
    string definition = "A logic programming language associated with artificial intelligence and computational linguistics. Prolog has its roots in first-order logic, a formal logic, and unlike many other programming languages, Prolog is intended primarily as a declarative programming language: the program logic is expressed in terms of relations, represented as facts and rules. A computation is initiated by running a query over these relations.";
    return definition;

}

string _ArtificialIntelligence::Definitions::PropositionalCalculus()
{
    string definition = "A branch of logic which deals with propositions (which can be true or false) and argument flow. Compound propositions are formed by connecting propositions by logical connectives. The propositions without logical connectives are called atomic propositions. Unlike first-order logic, propositional logic does not deal with non-logical objects, predicates about them, or quantifiers. However, all the machinery of propositional logic is included in first-order logic and higher-order logics. In this sense, propositional logic is the foundation of first-order logic and higher-order logic.";
    return definition;
}

string _ArtificialIntelligence::Definitions::ProximalPolicyOptimization()
{
    string definition = "A reinforcement learning algorithm for training an intelligent agent's decision function to accomplish difficult tasks.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Python()
{
    string definition = "An interpreted, high-level, general-purpose programming language created by Guido van Rossum and first released in 1991. Python's design philosophy emphasizes code readability with its notable use of significant whitespace. Its language constructs and object-oriented approach aim to help programmers write clear, logical code for small and large-scale projects.";
    return definition;

}

string _ArtificialIntelligence::Definitions::PyTorch()
{
    string definition = "A machine learning library based on the Torch library, used for applications such as computer vision and natural language processing,  originally developed by Meta AI and now part of the Linux Foundation umbrella.";
    return definition;

}

string _ArtificialIntelligence::Definitions::QLearning()
{
    string definition = "A model-free reinforcement learning algorithm for learning the value of an action in a particular state.";
    return definition;

}

string _ArtificialIntelligence::Definitions::QualificationProblem()
{
    string definition = "In philosophy and artificial intelligence (especially knowledge-based systems), the qualification problem is concerned with the impossibility of listing all of the preconditions required for a real-world action to have its intended effect. It might be posed as how to deal with the things that prevent me from achieving my intended result. It is strongly connected to, and opposite the ramification side of, the frame problem.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Quantifier()
{
    string definition = "In logic, quantification specifies the quantity of specimens in the domain of discourse that satisfy an open formula. The two most common quantifiers mean \"for all\" and \"there exists\". For example, in arithmetic, quantifiers allow one to say that the natural numbers go on forever, by writing that for all n (where n is a natural number), there is another number (say, the successor of n) which is one bigger than n.";
    return definition;

}

string _ArtificialIntelligence::Definitions::QuantumComputing()
{
    string definition = "The use of quantum-mechanical phenomena such as superposition and entanglement to perform computation. A quantum computer is used to perform such computation, which can be implemented theoretically or physically.";
    return definition;

}

string _ArtificialIntelligence::Definitions::QueryLanguage()
{
    string definition = "Query languages or data query languages (DQLs) are computer languages used to make queries in databases and information systems. Broadly, query languages can be classified according to whether they are database query languages or information retrieval query languages. The difference is that a database query language attempts to give factual answers to factual questions, while an information retrieval query language attempts to find documents containing information that is relevant to an area of inquiry.";
    return definition;

}

string _ArtificialIntelligence::Definitions::RProgrammingLanguage()
{
    string definition = "A programming language and free software environment for statistical computing and graphics supported by the R Foundation for Statistical Computing. The R language is widely used among statisticians and data miners for developing statistical software and data analysis.";
    return definition;

}

string _ArtificialIntelligence::Definitions::RadialBasisFunctionNetwork()
{
    string definition = "In the field of mathematical modeling, a radial basis function network is an artificial neural network that uses radial basis functions as activation functions. The output of the network is a linear combination of radial basis functions of the inputs and neuron parameters. Radial basis function networks have many uses, including function approximation, time series prediction, classification, and system control. They were first formulated in a 1988 paper by Broomhead and Lowe, both researchers at the Royal Signals and Radar Establishment.";
    return definition;

}

string _ArtificialIntelligence::Definitions::RandomForest()
{
    string definition = "An ensemble learning method for classification, regression, and other tasks that operates by constructing a multitude of decision trees at training time and outputting the class that is the mode of the classes (classification) or mean prediction (regression) of the individual trees. Random decision forests correct for decision trees' habit of overfitting to their training set.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ReasoningSystem()
{
    string definition = "In information technology a reasoning system is a software system that generates conclusions from available knowledge using logical techniques such as deduction and induction. Reasoning systems play an important role in the implementation of artificial intelligence and knowledge-based systems.";
    return definition;

}

string _ArtificialIntelligence::Definitions::RecurrentNeuralNetwork()
{
    string definition = "A class of artificial neural networks where connections between nodes form a directed graph along a temporal sequence. This allows it to exhibit temporal dynamic behavior. Unlike feedforward neural networks, RNNs can use their internal state (memory) to process sequences of inputs. This makes them applicable to tasks such as unsegmented, connected handwriting recognition  or speech recognition.";
    return definition;

}

string _ArtificialIntelligence::Definitions::RegressionAnalysis()
{
    string definition = "A set of statistical processes for estimating the relationships between a dependent variable (often called the outcome or response variable, or label in machine learning) and one or more error-free independent variables (often called regressors, predictors, covariates, explanatory variables, or features). The most common form of regression analysis is linear regression, in which one finds the line (or a more complex linear combination) that most closely fits the data according to a specific mathematical criterion.";
    return definition;
}

string _ArtificialIntelligence::Definitions::Regularization()
{
    string definition = "A set of techniques such as dropout, early stopping, and L1 and L2 regularization to reduce overfitting and underfitting when training a learning algorithm.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ReinforcementLearning()
{
    string definition = "An area of machine learning concerned with how software agents ought to take actions in an environment so as to maximize some notion of cumulative reward. Reinforcement learning is one of three basic machine learning paradigms, alongside supervised and unsupervised learning. It differs from supervised learning in that labelled input/output pairs need not be presented, and sub-optimal actions need not be explicitly corrected. Instead the focus is finding a balance between exploration (of uncharted territory) and exploitation (of current knowledge).";
    return definition;

}

string _ArtificialIntelligence::Definitions::ReinforcementLearningFromHumanFeedback()
{
    string definition = "A technique that involve training a \"reward model\" to predict how humans rate the quality of generated content, and then training a generative AI model to satisfy this reward model via reinforcement learning. It can be used for example to make the generative AI model more truthful or less harmful.";
    return definition;

}

string _ArtificialIntelligence::Definitions::RepresentationLearning()
{
    string definition = "See feature learning.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ReservoirComputing()
{
    string definition = "A framework for computation that may be viewed as an extension of neural networks. Typically an input signal is fed into a fixed (random) dynamical system called a reservoir and the dynamics of the reservoir map the input to a higher dimension. Then a simple readout mechanism is trained to read the state of the reservoir and map it to the desired output. The main benefit is that training is performed only at the readout stage and the reservoir is fixed. Liquid-state machines and echo state networks are two major types of reservoir computing.";
    return definition;
}

string _ArtificialIntelligence::Definitions::ResourceDescriptionFramework()
{
    string definition = "A family of World Wide Web Consortium (W3C) specifications originally designed as a metadata data model. It has come to be used as a general method for conceptual description or modeling of information that is implemented in web resources, using a variety of syntax notations and data serialization formats. It is also used in knowledge management applications.";
    return definition;

}

string _ArtificialIntelligence::Definitions::RestrictedBoltzmannMachine()
{
    string definition = "A generative stochastic artificial neural network that can learn a probability distribution over its set of inputs.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ReteAlgorithm()
{
    string definition = "A pattern matching algorithm for implementing rule-based systems. The algorithm was developed to efficiently apply many rules or patterns to many objects, or facts, in a knowledge base. It is used to determine which of the system's rules should fire based on its data store, its facts.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Robotics()
{
    string definition = "An interdisciplinary branch of science and engineering that includes mechanical engineering, electronic engineering, information engineering, computer science, and others. Robotics deals with the design, construction, operation, and use of robots, as well as computer systems for their control, sensory feedback, and information processing.";
    return definition;

}

string _ArtificialIntelligence::Definitions::RuleBasedSystem()
{
    string definition = "In computer science, a rule-based system is used to store and manipulate knowledge to interpret information in a useful way. It is often used in artificial intelligence applications and research. Normally, the term rule-based system is applied to systems involving human-crafted or curated rule sets. Rule-based systems constructed using automatic rule inference, such as rule-based machine learning, are normally excluded from this system type.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Satisfiability()
{
    string definition = "In mathematical logic, satisfiability and validity are elementary concepts of semantics. A formula is satisfiable if it is possible to find an interpretation (model) that makes the formula true. A formula is valid if all interpretations make the formula true. The opposites of these concepts are unsatisfiability and invalidity, that is, a formula is unsatisfiable if none of the interpretations make the formula true, and invalid if some such interpretation makes the formula false. These four concepts are related to each other in a manner exactly analogous to Aristotle's square of opposition.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SearchAlgorithm()
{
    string definition = "Any algorithm which solves the search problem, namely, to retrieve information stored within some data structure, or calculated in the search space of a problem domain, either with discrete or continuous values.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Selection()
{
    string definition = "The stage of a genetic algorithm in which individual genomes are chosen from a population for later breeding (using the crossover operator).";
    return definition;
}

string _ArtificialIntelligence::Definitions::SelfManagement()
{
    string definition = "The process by which computer systems manage their own operation without human intervention.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SemanticNetwork()
{
    string definition = "A knowledge base that represents semantic relations between concepts in a network. This is often used as a form of knowledge representation. It is a directed or undirected graph consisting of vertices, which represent concepts, and edges, which represent semantic relations between concepts, mapping or connecting semantic fields.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SemanticReasoner()
{
    string definition = "A piece of software able to infer logical consequences from a set of asserted facts or axioms. The notion of a semantic reasoner generalizes that of an inference engine, by providing a richer set of mechanisms to work with. The inference rules are commonly specified by means of an ontology language, and often a description logic language. Many reasoners use first-order predicate logic to perform reasoning; inference commonly proceeds by forward chaining and backward chaining.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SemanticQuery()
{
    string definition = "Allows for queries and analytics of associative and contextual nature. Semantic queries enable the retrieval of both explicitly and implicitly derived information based on syntactic, semantic and structural information contained in data. They are designed to deliver precise results (possibly the distinctive selection of one single piece of information) or to answer more fuzzy and wide-open questions through pattern matching and digital reasoning.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Semantics()
{
    string definition = "In programming language theory, semantics is the field concerned with the rigorous mathematical study of the meaning of programming languages. It does so by evaluating the meaning of syntactically valid strings defined by a specific programming language, showing the computation involved. In such a case that the evaluation would be of syntactically invalid strings, the result would be non-computation. Semantics describes the processes a computer follows when executing a program in that specific language. This can be shown by describing the relationship between the input and output of a program, or an explanation of how the program will be executed on a certain platform, hence creating a model of computation.";
    return definition;
}

string _ArtificialIntelligence::Definitions::SemiSupervisedLearning()
{
    string definition = "A machine learning training paradigm characterized by using a combination of a small amount of human-labeled data (used exclusively in supervised learning), followed by a large amount of unlabeled data (used exclusively in unsupervised learning).";
    return definition;
}

string _ArtificialIntelligence::Definitions::SensorFusion()
{
    string definition = "The combining of sensory data or data derived from disparate sources such that the resulting information has less uncertainty than would be possible when these sources were used individually.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SeparationLogic()
{
    string definition = "An extension of Hoare logic, a way of reasoning about programs. The assertion language of separation logic is a special case of the logic of bunched implications (BI).";
    return definition;

}

string _ArtificialIntelligence::Definitions::SimilarityLearning()
{
    string definition = "An area of supervised learning closely related to classification and regression, but the goal is to learn from a similarity function that measures how similar or related two objects are. It has applications in ranking, in recommendation systems, visual identity tracking, face verification, and speaker verification.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SimulatedAnnealing()
{
    string definition = "A probabilistic technique for approximating the global optimum of a given function. Specifically, it is a metaheuristic to approximate global optimization in a large search space for an optimization problem.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SituatedApproach()
{
    string definition = "In artificial intelligence research, the situated approach builds agents that are designed to behave effectively successfully in their environment. This requires designing AI \"from the bottom - up\" by focussing on the basic perceptual and motor skills required to survive. The situated approach gives a much lower priority to abstract reasoning or problem-solving skills.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SituationalCalculus()
{
    string definition = "A logic formalism designed for representing and reasoning about dynamical domains.";
    return definition;
}

string _ArtificialIntelligence::Definitions::SelectiveLinearDefiniteClauseResolution()
{
    string definition = "The basic inference rule used in logic programming. It is a refinement of resolution, which is both sound and refutation complete for Horn clauses.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Software()
{
    string definition = "A collection of data or computer instructions that tell the computer how to work. This is in contrast to physical hardware, from which the system is built and actually performs the work. In computer science and software engineering, computer software is all information processed by computer systems, programs and data. Computer software includes computer programs, libraries and related non-executable data, such as online documentation or digital media.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SoftwareEngineering()
{
    string definition = "The application of engineering to the development of software in a systematic method.";
    return definition;
}

string _ArtificialIntelligence::Definitions::SpatialTemporalReasoning()
{
    string definition = "An area of artificial intelligence which draws from the fields of computer science, cognitive science, and cognitive psychology. The theoretic goal—on the cognitive side—involves representing and reasoning spatial-temporal knowledge in mind. The applied goal—on the computing side—involves developing high-level control systems of automata for navigating and understanding time and space.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SPARQL()
{
    string definition = "An RDF query language—that is, a semantic query language for databases—able to retrieve and manipulate data stored in Resource Description Framework(RDF) format.\"";
    return definition;

}

string _ArtificialIntelligence::Definitions::SparseDictionaryLearning()
{
    string definition = "A feature learning method aimed at finding a sparse representation of the input data in the form of a linear combination of basic elements as well as those basic elements themselves.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SpeechRecognition()
{
    string definition = "An interdisciplinary subfield of computational linguistics that develops methodologies and technologies that enables the recognition and translation of spoken language into text by computers. It is also known as automatic speech recognition (ASR), computer speech recognition or speech to text (STT). It incorporates knowledge and research in the linguistics, computer science, and electrical engineering fields.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SpikingNeuralNetowrk()
{
    string definition = "An artificial neural network that more closely mimics a natural neural network. In addition to neuronal and synaptic state, SNNs incorporate the concept of time into their Operating Model.";
    return definition;

}

string _ArtificialIntelligence::Definitions::State()
{
    string definition = "In information technology and computer science, a program is described as stateful if it is designed to remember preceding events or user interactions; the remembered information is called the state of the system.";
    return definition;

}

string _ArtificialIntelligence::Definitions::StatisticalClassification()
{
    string definition = "In machine learning and statistics, classification is the problem of identifying to which of a set of categories (sub-populations) a new observation belongs, on the basis of a training set of data containing observations (or instances) whose category membership is known. Examples are assigning a given email to the \"spam\" or \"non - spam\" class, and assigning a diagnosis to a given patient based on observed characteristics of the patient (sex, blood pressure, presence or absence of certain symptoms, etc.). Classification is an example of pattern recognition.";
    return definition;

}

string _ArtificialIntelligence::Definitions::StateActionRewardStateAction()
{
    string definition = "A reinforcement learning algorithm for learning a Markov decision process policy.";
    return definition;

}

string _ArtificialIntelligence::Definitions::StatisticalRelationalLearning()
{
    string definition = "A subdiscipline of artificial intelligence and machine learning that is concerned with domain models that exhibit both uncertainty (which can be dealt with using statistical methods) and complex, relational structure. Note that SRL is sometimes called Relational Machine Learning (RML) in the literature. Typically, the knowledge representation formalisms developed in SRL use (a subset of) first-order logic to describe relational properties of a domain in a general manner (universal quantification) and draw upon probabilistic graphical models (such as Bayesian networks or Markov networks) to model the uncertainty; some also build upon the methods of inductive logic programming.";
    return definition;

}

string _ArtificialIntelligence::Definitions::StochasticOptimization()
{
    string definition = "Any optimization method that generates and uses random variables. For stochastic problems, the random variables appear in the formulation of the optimization problem itself, which involves random objective functions or random constraints. Stochastic optimization methods also include methods with random iterates. Some stochastic optimization methods use random iterates to solve stochastic problems, combining both meanings of stochastic optimization. Stochastic optimization methods generalize deterministic methods for deterministic problems.";
    return definition;

}

string _ArtificialIntelligence::Definitions::StochasticSemanticAnalysis()
{
    string definition = "An approach used in computer science as a semantic component of natural language understanding. Stochastic models generally use the definition of segments of words as basic semantic units for the semantic models, and in some cases involve a two layered approach.";
    return definition;

}

string _ArtificialIntelligence::Definitions::StanfordReasearchInstituteProblemSolver()
{
    string definition = "An automated planner developed by Richard Fikes and Nils Nilsson in 1971 at SRI International.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SubjectMatterExpert()
{
    string definition = "A person who has accumulated great knowledge in a particular field or topic, demonstrated by the person's degree, licensure, and/or through years of professional experience with the subject.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Superintelligence()
{
    string definition = "A hypothetical agent that possesses intelligence far surpassing that of the brightest and most gifted human minds. Superintelligence may also refer to a property of problem-solving systems (e.g., superintelligent language translators or engineering assistants) whether or not these high-level intellectual competencies are embodied in agents that act within the physical world. A superintelligence may or may not be created by an intelligence explosion and be associated with a technological singularity.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SupervisedLearning()
{
    string definition = "The machine learning task of learning a function that maps an input to an output based on example input-output pairs. It infers a function from labeled training data consisting of a set of training examples. In supervised learning, each example is a pair consisting of an input object (typically a vector) and a desired output value (also called the supervisory signal). A supervised learning algorithm analyzes the training data and produces an inferred function, which can be used for mapping new examples. An optimal scenario will allow for the algorithm to correctly determine the class labels for unseen instances. This requires the learning algorithm to generalize from the training data to unseen situations in a \"reasonable\" way (see inductive bias).";
    return definition;

}

string _ArtificialIntelligence::Definitions::SuppotVectorMachines()
{
    string definition = "In machine learning, support vector machines (SVMs, also support vector networks are supervised learning models with associated learning algorithms that analyze data used for classification and regression.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SwarmIntelligence()
{
    string definition = "The collective behavior of decentralized, self-organized systems, either natural or artificial. The expression was introduced in the context of cellular robotic systems.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SymbolicArtificialIntelligence()
{
    string definition = "The term for the collection of all methods in artificial intelligence research that are based on high-level \"symbolic\" (human-readable) representations of problems, logic, and search.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SyntheticIntelligence()
{
    string definition = "An alternative term for artificial intelligence which emphasizes that the intelligence of machines need not be an imitation or in any way artificial; it can be a genuine form of intelligence.";
    return definition;

}

string _ArtificialIntelligence::Definitions::SystemsNeuroscience()
{
    string definition = "A subdiscipline of neuroscience and systems biology that studies the structure and function of neural circuits and systems. It is an umbrella term, encompassing a number of areas of study concerned with how nerve cells behave when connected together to form neural pathways, neural circuits, and larger brain networks.";
    return definition;

}

string _ArtificialIntelligence::Definitions::TechnologicalSingularity()
{
    string definition = "A hypothetical point in the future when technological growth becomes uncontrollable and irreversible, resulting in unfathomable changes to human civilization.";
    return definition;

}

string _ArtificialIntelligence::Definitions::TemporalDifferenceLearning()
{
    string definition = "A class of model-free reinforcement learning methods which learn by bootstrapping from the current estimate of the value function. These methods sample from the environment, like Monte Carlo methods, and perform updates based on current estimates, like dynamic programming methods.";
    return definition;

}

string _ArtificialIntelligence::Definitions::TensorNetworkTheory()
{
    string definition = "A theory of brain function (particularly that of the cerebellum) that provides a mathematical model of the transformation of sensory space-time coordinates into motor coordinates and vice versa by cerebellar neuronal networks. The theory was developed as a geometrization of brain function (especially of the central nervous system) using tensors.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Tensorflow()
{
    string definition = "A free and open-source software library for dataflow and differentiable programming across a range of tasks. It is a symbolic math library, and is also used for machine learning applications such as neural networks.";
    return definition;

}

string _ArtificialIntelligence::Definitions::TheoreticalComputerScience()
{
    string definition = "A subset of general computer science and mathematics that focuses on more mathematical topics of computing and includes the theory of computation.";
    return definition;

}

string _ArtificialIntelligence::Definitions::TheoryOfComputation()
{
    string definition = "In theoretical computer science and mathematics, the theory of computation is the branch that deals with how efficiently problems can be solved on a model of computation, using an algorithm. The field is divided into three major branches: automata theory and languages, computability theory, and computational complexity theory, which are linked by the question: \"What are the fundamental capabilities and limitations of computers? \".";
    return definition;

}

string _ArtificialIntelligence::Definitions::ThompsonSampling()
{
    string definition = "A heuristic for choosing actions that addresses the exploration-exploitation dilemma in the multi-armed bandit problem. It consists in choosing the action that maximizes the expected reward with respect to a randomly drawn belief.";
    return definition;

}

string _ArtificialIntelligence::Definitions::TimeComplexity()
{
    string definition = "The computational complexity that describes the amount of time it takes to run an algorithm. Time complexity is commonly estimated by counting the number of elementary operations performed by the algorithm, supposing that each elementary operation takes a fixed amount of time to perform. Thus, the amount of time taken and the number of elementary operations performed by the algorithm are taken to differ by at most a constant factor.";
    return definition;

}

string _ArtificialIntelligence::Definitions::TransferLearning()
{
    string definition = "A machine learning technique in which knowledge learned from a task is reused in order to boost performance on a related task. For example, for image classification, knowledge gained while learning to recognize cars could be applied when trying to recognize trucks.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Transformer()
{
    string definition = "A type of deep learning architecture that exploits a multi-head attention mechanism. Transformers address some of the limitations of long short-term memory, and became widely used in natural language processing, although it can also process other types of data such as images in the case of vision transformers.";
    return definition;

}

string _ArtificialIntelligence::Definitions::Transhumanism()
{
    string definition = "An international philosophical movement that advocates for the transformation of the human condition by developing and making widely available sophisticated technologies to greatly enhance human intellect and physiology.";
    return definition;

}

string _ArtificialIntelligence::Definitions::TransitionSystem()
{
    string definition = "In theoretical computer science, a transition system is a concept used in the study of computation. It is used to describe the potential behavior of discrete systems. It consists of states and transitions between states, which may be labeled with labels chosen from a set; the same label may appear on more than one transition. If the label set is a singleton, the system is essentially unlabeled, and a simpler definition that omits the labels is possible.";
    return definition;

}

string _ArtificialIntelligence::Definitions::TreeTraversal()
{
    string definition = "A form of graph traversal and refers to the process of visiting (checking and/or updating) each node in a tree data structure, exactly once. Such traversals are classified by the order in which the nodes are visited.";
    return definition;

}

string _ArtificialIntelligence::Definitions::TrueQuantifiedBooleanFormula()
{
    string definition = "In computational complexity theory, the language TQBF is a formal language consisting of the true quantified Boolean formulas. A (fully) quantified Boolean formula is a formula in quantified propositional logic where every variable is quantified (or bound), using either existential or universal quantifiers, at the beginning of the sentence. Such a formula is equivalent to either true or false (since there are no free variables). If such a formula evaluates to true, then that formula is in the language TQBF. It is also known as QSAT (Quantified SAT).";
    return definition;

}

string _ArtificialIntelligence::Definitions::TuringMachine()
{
    string definition = "A mathematical model of computation describing an abstract machine that manipulates symbols on a strip of tape according to a table of rules. Despite the model's simplicity, it is capable of implementing any algorithm.";
    return definition;

}

string _ArtificialIntelligence::Definitions::TuringTest()
{
    string definition = "A test of a machine's ability to exhibit intelligent behaviour equivalent to, or indistinguishable from, that of a human, developed by Alan Turing in 1950. Turing proposed that a human evaluator would judge natural language conversations between a human and a machine designed to generate human-like responses. The evaluator would be aware that one of the two partners in conversation is a machine, and all participants would be separated from one another. The conversation would be limited to a text-only channel such as a computer keyboard and screen so the result would not depend on the machine's ability to render words as speech. If the evaluator cannot reliably tell the machine from the human, the machine is said to have passed the test. The test results do not depend on the machine's ability to give correct answers to questions, only how closely its answers resemble those a human would give.";
    return definition;

}

string _ArtificialIntelligence::Definitions::TypeSystem()
{
    string definition = "In programming languages, a set of rules that assigns a property called type to the various constructs of a computer program, such as variables, expressions, functions, or modules. These types formalize and enforce the otherwise implicit categories the programmer uses for algebraic data types, data structures, or other components (e.g. \"string\", \"array of float\", \"function returning boolean\"). The main purpose of a type system is to reduce possibilities for bugs in computer programs by defining interfaces between different parts of a computer program, and then checking that the parts have been connected in a consistent way. This checking can happen statically (at compile time), dynamically (at run time), or as a combination of static and dynamic checking. Type systems have other purposes as well, such as expressing business rules, enabling certain compiler optimizations, allowing for multiple dispatch, providing a form of documentation, etc.";
    return definition;

}

string _ArtificialIntelligence::Definitions::UnsupervisedLearning()
{
    string definition = "A type of self-organized Hebbian learning that helps find previously unknown patterns in data set without pre-existing labels. It is also known as self-organization and allows modeling probability densities of given inputs. It is one of the three basic paradigms of machine learning, alongside supervised and reinforcement learning. Semi-supervised learning has also been described and is a hybridization of supervised and unsupervised techniques.";
    return definition;

}

string _ArtificialIntelligence::Definitions::VisionProcessingUnit()
{
    string definition = "A type of microprocessor designed to accelerate machine vision tasks.";
    return definition;

}

string _ArtificialIntelligence::Definitions::ValueAlignmentComplete()
{
    string definition = "Analogous to an AI-complete problem, a value-alignment complete problem is a problem where the AI control problem needs to be fully solved to solve i";
    return definition;

}

string _ArtificialIntelligence::Definitions::Watson()
{
    string definition = "A question-answering computer system capable of answering questions posed in natural language, developed in IBM's DeepQA project by a research team led by principal investigator David Ferrucci. Watson was named after IBM's first CEO, industrialist Thomas J. Watson.";
    return definition;

}

string _ArtificialIntelligence::Definitions::WeakAI()
{
    string definition = "Artificial intelligence that is focused on one narrow task.";
    return definition;

}

string _ArtificialIntelligence::Definitions::WeakSupervision()
{
    string definition = "See semi-supervised learning.";
    return definition;

}

string _ArtificialIntelligence::Definitions::WordEmbedding()
{
    string definition = "A representation of a word in natural language processing. Typically, the representation is a real-valued vector that encodes the meaning of the word in such a way that words that are closer in the vector space are expected to be similar in meaning.";
    return definition;

}

string _ArtificialIntelligence::Definitions::XGBoost()
{
    string definition = "Short for eXtreme Gradient Boosting, XGBoost is an open-source software library which provides a regularizing gradient boosting framework for multiple programming languages.";
    return definition;

}
