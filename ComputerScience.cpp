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
#include "ComputerScience.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _ComputerScience::Terms::AbstractDataType(string text)
{
	string model = "llama3";
	string definition = "A mathematical model for data types in which a data type is defined by its behavior (semantics) from the point of view of a user of the data, specifically in terms of possible values, possible operations on data of this type, and the behavior of these operations. This contrasts with data structures, which are concrete representations of data from the point of view of an implementer rather than a user.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "AbstractDataType";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::AbstractMethod(string text)
{
	string model = "llama3";
	string definition = "One with only a signature and no implementation body. It is often used to specify that a subclass must provide an implementation of the method. Abstract methods are used to specify interfaces in some computer languages.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "AbstractMethod";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Abstraction(string text)
{
	string model = "llama3";
	string definition = "1. In software engineering and computer science, the process of removing physical, spatial, or temporal details or attributes in the study of objects or systems in order to more closely attend to other details of interest; it is also very similar in nature to the process of generalization. 2. The result of this process: an abstract concept - object created by keeping common features or attributes to various concrete objects or systems of study.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::AgentArchitecture(string text)
{
	string model = "llama3";
	string definition = "A blueprint for software agents and intelligent control systems depicting the arrangement of components. The architectures implemented by intelligent agents are referred to as cognitive architectures.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "AgentArchitecture";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::AgentBasedModel(string text)
{
	string model = "llama3";
	string definition = "A class of computational models for simulating the actions and interactions of autonomous agents (both individual or collective entities such as organizations or groups) with a view to assessing their effects on the system as a whole. It combines elements of game theory, complex systems, emergence, computational sociology, multi-agent systems, and evolutionary programming. Monte Carlo methods are used to introduce randomness.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "AgentBasedModel";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::AggregateFunction(string text)
{
	string model = "llama3";
	string definition = "In database management, a function in which the values of multiple rows are grouped together to form a single value of more significant meaning or measurement, such as a sum, count, or max.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "AggregateFunction";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::AgileSoftwareDevelopment(string text)
{
	string model = "llama3";
	string definition = "An approach to software development under which requirements and solutions evolve through the collaborative effort of self-organizing and cross-functional teams and their customer(s)/end user(s). ";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "AgileSoftwareDevelopment";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Algorithm(string text)
{
	string model = "llama3";
	string definition = "An unambiguous specification of how to solve a class of problems. Algorithms can perform calculation, data processing, and automated reasoning tasks. They are ubiquitous in computing technologies.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::AlgorithmDesign(string text)
{
	string model = "llama3";
	string definition = "A method or mathematical process for problem-solving and for engineering algorithms. The design of algorithms is part of many solution theories of operation research, such as dynamic programming and divide-and-conquer. Techniques for designing and implementing algorithm designs are also called algorithm design patterns, such as the template method pattern and decorator pattern.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "AlgorithmDesign";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::AlgorithmicEfficiency(string text)
{
	string model = "llama3";
	string definition = "A property of an algorithm which relates to the number of computational resources used by the algorithm. An algorithm must be analyzed to determine its resource usage, and the efficiency of an algorithm can be measured based on usage of different resources. Algorithmic efficiency can be thought of as analogous to engineering productivity for a repeating or continuous process.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "AlgorithmicEfficiency";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ASCII(string text)
{
	string model = "llama3";
	string definition = "A character encoding standard for electronic communications. ASCII codes represent text in computers, telecommunications equipment, and other devices. Most modern character-encoding schemes are based on ASCII, although they support many additional characters.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ASCII";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::API(string text)
{
	string model = "llama3";
	string definition = "A set of subroutine definitions, communication protocols, and tools for building software. In general terms, it is a set of clearly defined methods of communication among various components. A good API makes it easier to develop a computer program by providing all the building blocks, which are then put together by the programmer.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "API";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ApplicationSoftware(string text)
{
	string model = "llama3";
	string definition = "Computer software designed to perform a group of coordinated functions, tasks, or activities for the benefit of the user. Common examples of applications include word processors, spreadsheets, accounting applications, web browsers, media players, aeronautical flight simulators, console games, and photo editors. This contrasts with system software, which is mainly involved with managing the computer's most basic running operations, often without direct input from the user. The collective noun application software refers to all applications collectively.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ApplicationSoftware";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ArrayDataStructure(string text)
{
	string model = "llama3";
	string definition = "A data structure consisting of a collection of elements (values or variables), each identified by at least one array index or key. An array is stored such that the position of each element can be computed from its index tuple by a mathematical formula. The simplest type of data structure is a linear array, also called a one-dimensional array.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ArrayDataStructure";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Artifact(string text)
{
	string model = "llama3";
	string definition = "One of many kinds of tangible by-products produced during the development of software. Some artifacts (e.g. use cases, class diagrams, and other Unified Modeling Language (UML) models, requirements, and design documents) help describe the function, architecture, and design of software. Other artifacts are concerned with the process of development itself—such as project plans, business cases, and risk assessments.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Artifact";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ArtificialIntelligence(string text)
{
	string model = "llama3";
	string definition = "Intelligence demonstrated by machines, in contrast to the natural intelligence displayed by humans and other animals. In computer science, AI research is defined as the study of intelligent agents: devices capable of perceiving their environment and taking actions that maximize the chance of successfully achieving their goals. Colloquially, the term artificial intelligence is applied when a machine mimics cognitive functions that humans associate with other human minds, such as learning and problem solving.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ArtificialIntelligence";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Assertion(string text)
{
	string model = "llama3";
	string definition = "In computer programming, a statement that a predicate (Boolean-valued function, i.e. a true–false expression) is always true at that point in code execution. It can help a programmer read the code, help a compiler compile it, or help the program detect its own defects. For the latter, some programs check assertions by actually evaluating the predicate as they run and if it is not in fact true – an assertion failure – the program considers itself to be broken and typically deliberately crashes or throws an assertion failure exception.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Assertion";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::AssociativeArray(string text)
{
	string model = "llama3";
	string definition = "An associative array, map, symbol table, or dictionary is an abstract data type composed of a collection of (key, value) pairs, such that each possible key appears at most once in the collection. Operations associated with this data type allow:";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "AssociativeArray";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::AutomataTheory(string text)
{
	string model = "llama3";
	string definition = "The study of abstract machines and automata, as well as the computational problems that can be solved using them. It is a theory in theoretical computer science and discrete mathematics (a subject of study in both mathematics and computer science).";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "AutomataTheory";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::AutomatedReasoning(string text)
{
	string model = "llama3";
	string definition = "An area of computer science and mathematical logic dedicated to understanding different aspects of reasoning. The study of automated reasoning helps produce computer programs that allow computers to reason completely, or nearly completely, automatically. Although automated reasoning is considered a sub-field of artificial intelligence, it also has connections with theoretical computer science, and even philosophy.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "AutomatedReasoning";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Bandwidth(string text)
{
	string model = "llama3";
	string definition = "The maximum rate of data transfer across a given path.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Bandwidth";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::BayesianProgramming(string text)
{
	string model = "llama3";
	string definition = "A formalism and a methodology for having a technique to specify probabilistic models and solve problems when less than the necessary information is available.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "BayesianProgramming";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Benchmark(string text)
{
	string model = "llama3";
	string definition = "The act of running a computer program, a set of programs, or other operations, in order to assess the relative performance of an object, normally by running a number of standard tests and trials against it. The term benchmark is also commonly utilized for the purposes of elaborately designed benchmarking programs themselves.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Benchmark";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::BestWorstAndAverageCase(string text)
{
	string model = "llama3";
	string definition = "Expressions of what the resource usage is at least, at most, and on average, respectively, for a given algorithm. Usually the resource being considered is running time, i.e. time complexity, but it could also be memory or some other resource. Best case is the function which performs the minimum number of steps on input data of n elements; worst case is the function which performs the maximum number of steps on input data of size n; average case is the function which performs an average number of steps on input data of n elements.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "BestWorstAndAverageCase";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::BigData(string text)
{
	string model = "llama3";
	string definition = "A term used to refer to data sets that are too large or complex for traditional data-processing application software to adequately deal with. Data with many cases (rows) offer greater statistical power, while data with higher complexity (more attributes or columns) may lead to a higher false discovery rate.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "BigData";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::BigONotation(string text)
{
	string model = "llama3";
	string definition = "A mathematical notation that describes the limiting behavior of a function when the argument tends towards a particular value or infinity. It is a member of a family of notations invented by Paul Bachmann, Edmund Landau, and others, collectively called Bachmann–Landau notation or asymptotic notation.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "BigONotation";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::BinaryNumber(string text)
{
	string model = "llama3";
	string definition = "In mathematics and digital electronics, a number expressed in the base-2 numeral system or binary numeral system, which uses only two symbols: typically 0 (zero) and 1 (one).";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "BinaryNumber";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::BinarySearchAlgorithm(string text)
{
	string model = "llama3";
	string definition = "A search algorithm that finds the position of a target value within a sorted array.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "BinarySearchAlgorithm";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::BinaryTree(string text)
{
	string model = "llama3";
	string definition = "A tree data structure in which each node has at most two children, which are referred to as the left child and the right child. A recursive definition using just set theory notions is that a (non-empty) binary tree is a tuple (L, S, R), where L and R are binary trees or the empty set and S is a singleton set. Some authors allow the binary tree to be the empty set as well.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "BinaryTree";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Bioinformatics(string text)
{
	string model = "llama3";
	string definition = "An interdisciplinary field that combines biology, computer science, information engineering, mathematics, and statistics to develop methods and software tools for analyzing and interpreting biological data. Bioinformatics is widely used for in silico analyses of biological queries using mathematical and statistical techniques.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::Bit(string text)
{
	string model = "llama3";
	string definition = "A basic unit of information used in computing and digital communications; a portmanteau of binary digit. A binary digit can have one of two possible values, and may be physically represented with a two-state device. These state values are most commonly represented as either a 0or1";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Bit";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::BitRate(string text)
{
	string model = "llama3";
	string definition = "In telecommunications and computing, the number of bits that are conveyed or processed per unit of time.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "BitRate";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Blacklist(string text)
{
	string model = "llama3";
	string definition = "In computing, a basic access control mechanism that allows through all elements (email addresses, users, passwords, URLs, IP addresses, domain names, file hashes, etc.), except those explicitly mentioned in a list of prohibited elements. Those items on the list are denied access. The opposite is a whitelist, which means only items on the list are allowed through whatever gate is being used while all other elements are blocked. A greylist contains items that are temporarily blocked (or temporarily allowed) until an additional step is performed.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Blacklist";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::BMPFileFormat(string text)
{
	string model = "llama3";
	string definition = "A raster graphics image file format used to store bitmap digital images independently of the display device (such as a graphics adapter), used especially on Microsoft Windows and OS/2 operating systems.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "BMPFileFormat";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::BooleanDataType(string text)
{
	string model = "llama3";
	string definition = "A data type that has one of two possible values (usually denoted true and false), intended to represent the two truth values of logic and Boolean algebra. It is named after George Boole, who first defined an algebraic system of logic in the mid-19th century. The Boolean data type is primarily associated with conditional statements, which allow different actions by changing control flow depending on whether a programmer-specified Boolean condition evaluates to true or false. It is a special case of a more general logical data type (see probabilistic logic)—i.e. logic need not always be Boolean.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "BooleanDataType";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::BooleanExpression(string text)
{
	string model = "llama3";
	string definition = "An expression used in a programming language that returns a Boolean value when evaluated, that is one of true or false. A Boolean expression may be composed of a combination of the Boolean constants true or false, Boolean-typed variables, Boolean-valued operators, and Boolean-valued functions.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "BooleanExpression";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::BooleanAlgebra(string text)
{
	string model = "llama3";
	string definition = "In mathematics and mathematical logic, the branch of algebra in which the values of the variables are the truth values true and false, usually denoted 1 and 0, respectively. Contrary to elementary algebra, where the values of the variables are numbers and the prime operations are addition and multiplication, the main operations of Boolean algebra are the conjunction and the disjunction or ";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "BooleanAlgebra";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Byte(string text)
{
	string model = "llama3";
	string definition = "A unit of digital information that most commonly consists of eight bits, representing a binary number. Historically, the byte was the number of bits used to encode a single character of text in a computer and for this reason it is the smallest addressable unit of memory in many computer architectures.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Byte";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Booting(string text)
{
	string model = "llama3";
	string definition = "The procedures implemented in starting up a computer or computer appliance until it can be used. It can be initiated by hardware such as a button press or by a software command. After the power is switched on, the computer is relatively dumb and can read only part of its storage called read-only memory. There, a small program is stored called firmware. It does power-on self-tests and, most importantly, allows access to other types of memory like a hard disk and main memory. The firmware loads bigger programs into the computer's main memory and runs it.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Booting";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Callback(string text)
{
	string model = "llama3";
	string definition = "Any executable code that is passed as an argument to other code that is expected to call back (execute) the argument at a given time. This execution may be immediate, as in a synchronous callback, or it might happen at a later time, as in an asynchronous callback.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Callback";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::CPU(string text)
{
	string model = "llama3";
	string definition = "The electronic circuitry within a computer that carries out the instructions of a computer program by performing the basic arithmetic, logic, controlling, and input/output (I/O) operations specified by the instructions. The computer industry has used the term central processing unit at least since the early 1960s. Traditionally, the term CPU refers to a processor, more specifically to its processing unit and control unit (CU), distinguishing these core elements of a computer from external components such as main memory and I/O circuitry. A unit of information that roughly corresponds to a grapheme, grapheme-like unit, or symbol, such as in an alphabet or syllabary in the written form of a natural language.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "CPU";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Character(string text)
{
	string model = "llama3";
	string definition = "In cryptography, an algorithm for performing encryption or decryption—a series of well-defined steps that can be followed as a procedure.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Character";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Cipher(string text)
{
	string model = "llama3";
	string definition = "In object-oriented programming, an extensible program-code-template for creating objects, providing initial values for state (member variables) and implementations of behavior (member functions or methods).";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Cipher";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Class(string text)
{
	string model = "llama3";
	string definition = "In many languages, the class name is used as the name for the class (the template itself), the name for the default constructor of the class (a subroutine that creates objects), and as the type of objects generated by instantiating the class; these distinct concepts are easily conflated.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::ClassBasedProgramming(string text)
{
	string model = "llama3";
	string definition = "A style of object-oriented programming (OOP) in which inheritance occurs via defining classes of objects, instead of via the objects alone (compare prototype-based programming).";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ClassBasedProgramming";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Client(string text)
{
	string model = "llama3";
	string definition = "";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Client";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::CleanroomSoftwareEngineering(string text)
{
	string model = "llama3";
	string definition = "A piece of computer hardware or software that accesses a service made available by a server. The server is often (but not always) on another computer system, in which case the client accesses the service by way of a network.[42] The term applies to the role that programs or devices play in the client–server model.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "CleanroomSoftwareEngineering";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Closure(string text)
{
	string model = "llama3";
	string definition = "A software development process intended to produce software with a certifiable level of reliability. The cleanroom process was originally developed by Harlan Mills and several of his colleagues including Alan Hevner at IBM. The focus of the cleanroom process is on defect prevention, rather than defect removal.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Closure";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::CloudComputing(string text)
{
	string model = "llama3";
	string definition = "Shared pools of configurable computer system resources and higher-level services that can be rapidly provisioned with minimal management effort, often over the Internet. Cloud computing relies on sharing of resources to achieve coherence and economies of scale, similar to a public utility.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "CloudComputing";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::CodeLibrary(string text)
{
	string model = "llama3";
	string definition = "A collection of non-volatile resources used by computer programs, often for software development. These may include configuration data, documentation, help data, message templates, pre-written code and subroutines, classes, values or type specifications. In IBM's OS/360 and its successors they are referred to as partitioned data sets.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "CodeLibrary";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Coding(string text)
{
	string model = "llama3";
	string definition = "Computer programming is the process of designing and building an executable computer program for accomplishing a specific computing task. Programming involves tasks such as analysis, generating algorithms, profiling algorithms' accuracy and resource consumption, and the implementation of algorithms in a chosen programming language (commonly referred to as coding. The source code of a program is written in one or more programming languages. The purpose of programming is to find a sequence of instructions that will automate the performance of a task for solving a given problem. The process of programming thus often requires expertise in several different subjects, including knowledge of the application domain, specialized algorithms, and formal logic.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Coding";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::CodingTheory(string text)
{
	string model = "llama3";
	string definition = "The study of the properties of codes and their respective fitness for specific applications. Codes are used for data compression, cryptography, error detection and correction, data transmission and data storage. Codes are studied by various scientific disciplines—such as information theory, electrical engineering, mathematics, linguistics, and computer science—for the purpose of designing efficient and reliable data transmission methods. This typically involves the removal of redundancy and the correction or detection of errors in the transmitted data.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "CodingTheory";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::CognativeScience(string text)
{
	string model = "llama3";
	string definition = "The interdisciplinary, scientific study of the mind and its processes. It examines the nature, the tasks, and the functions of cognition (in a broad sense). Cognitive scientists study intelligence and behavior, with a focus on how nervous systems represent, process, and transform information. Mental faculties of concern to cognitive scientists include language, perception, memory, attention, reasoning, and emotion; to understand these faculties, cognitive scientists borrow from fields such as linguistics, psychology, artificial intelligence, philosophy, neuroscience, and anthropology.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "CognativeScience";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Collection(string text)
{
	string model = "llama3";
	string definition = "A collection or container is a grouping of some variable number of data items (possibly zero) that have some shared significance to the problem being solved and need to be operated upon together in some controlled fashion. Generally, the data items will be of the same type or, in languages supporting inheritance, derived from some common ancestor type. A collection is a concept applicable to abstract data types, and does not prescribe a specific implementation as a concrete data structure, though often there is a conventional choice (see Container for type theory discussion).";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Collection";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::CSV(string text)
{
	string model = "llama3";
	string definition = "A delimited text file that uses a comma to separate values. A CSV file stores tabular data (numbers and text) in plain text. Each line of the file is a data record. Each record consists of one or more fields, separated by commas. The use of the comma as a field separator is the source of the name for this file format.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "CSV";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Compiler(string text)
{
	string model = "llama3";
	string definition = "A computer program that transforms computer code written in one programming language (the source language) into another programming language (the target language). Compilers are a type of translator that support digital devices, primarily computers. The name compiler is primarily used for programs that translate source code from a high-level programming language to a lower-level language (e.g. assembly language, object code, or machine code) to create an executable program.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::ComputabilityTheory(string text)
{
	string model = "llama3";
	string definition = "also known as recursion theory, is a branch of mathematical logic, of computer science, and of the theory of computation that originated in the 1930s with the study of computable functions and Turing degrees. The field has since expanded to include the study of generalized computability and definability. In these areas, recursion theory overlaps with proof theory and effective descriptive set theory.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputabilityTheory";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Computation(string text)
{
	string model = "llama3";
	string definition = "Any type of calculation that includes both arithmetical and non-arithmetical steps and follows a well-defined model, e.g. an algorithm. The study of computation is paramount to the discipline of computer science.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Computation";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputationalBiology(string text)
{
	string model = "llama3";
	string definition = "Involves the development and application of data-analytical and theoretical methods, mathematical modelling and computational simulation techniques to the study of biological, ecological, behavioural, and social systems. The field is broadly defined and includes foundations in biology, applied mathematics, statistics, biochemistry, chemistry, biophysics, molecular biology, genetics, genomics, computer science, and evolution. Computational biology is different from biological computing, which is a subfield of computer science and computer engineering using bioengineering and biology to build computers.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputationalBiology";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputationalChemistry(string text)
{
	string model = "llama3";
	string definition = "A branch of chemistry that uses computer simulation to assist in solving chemical problems. It uses methods of theoretical chemistry, incorporated into efficient computer programs, to calculate the structures and properties of molecules and solids.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputationalChemistry";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputationalComplexityTheory(string text)
{
	string model = "llama3";
	string definition = "A subfield of computational science which focuses on classifying computational problems according to their inherent difficulty, and relating these classes to each other. A computational problem is a task solved by a computer. A computation problem is solvable by mechanical application of mathematical steps, such as an algorithm.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputationalComplexityTheory";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputationalModel(string text)
{
	string model = "llama3";
	string definition = "A mathematical model in computational science that requires extensive computational resources to study the behavior of a complex system by computer simulation.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputationalModel";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputationalNeuroscience(string text)
{
	string model = "llama3";
	string definition = "A branch of neuroscience which employs mathematical models, theoretical analysis, and abstractions of the brain to understand the principles that govern the development, structure, physiology, and cognitive abilities of the nervous system.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputationalNeuroscience";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputationalPhysics(string text)
{
	string model = "llama3";
	string definition = "Is the study and implementation of numerical analysis to solve problems in physics for which a quantitative theory already exists. Historically, computational physics was the first application of modern computers in science, and is now a subset of computational science.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputationalPhysics";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputationalScience(string text)
{
	string model = "llama3";
	string definition = "An interdisciplinary field that uses advanced computing capabilities to understand and solve complex problems. It is an area of science which spans many disciplines, but at its core it involves the development of computer models and simulations to understand complex natural systems.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputationalScience";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputationalSteering(string text)
{
	string model = "llama3";
	string definition = "Is the practice of manually intervening with an otherwise autonomous computational process, to change its outcome.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputationalSteering";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Computer(string text)
{
	string model = "llama3";
	string definition = "A device that can be instructed to carry out sequences of arithmetic or logical operations automatically via computer programming. Modern computers have the ability to follow generalized sets of operations, called programs. These programs enable computers to perform an extremely wide range of tasks.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::ComputerArchitecture(string text)
{
	string model = "llama3";
	string definition = "A set of rules and methods that describe the functionality, organization, and implementation of computer systems. Some definitions of architecture define it as describing the capabilities and programming model of a computer but not a particular implementation. In other definitions computer architecture involves instruction set architecture design, microarchitecture design, logic design, and implementation.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputerArchitecture";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputerDataStorage(string text)
{
	string model = "llama3";
	string definition = "A technology consisting of computer components and recording media that are used to retain digital data. Data storage is a core function and fundamental component of all modern computer systems.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputerDataStorage";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputerEthics(string text)
{
	string model = "llama3";
	string definition = "A part of practical philosophy concerned with how computing professionals should make decisions regarding professional and social conduct.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputerEthics";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputerGraphics(string text)
{
	string model = "llama3";
	string definition = "Pictures and films created using computers. Usually, the term refers to computer-generated image data created with the help of specialized graphical hardware and software. It is a vast and recently developed area of computer science.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputerGraphics";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputerNetwork(string text)
{
	string model = "llama3";
	string definition = "A digital telecommunications network which allows nodes to share resources. In computer networks, computing devices exchange data with each other using connections (data links) between nodes. These data links are established over cable media such as wires or optic cables, or wireless media such as Wi-Fi.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputerNetwork";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputerProgram(string text)
{
	string model = "llama3";
	string definition = "Is a collection of instructions that can be executed by a computer to perform a specific task.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputerProgram";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputerProgramming(string text)
{
	string model = "llama3";
	string definition = "The process of designing and building an executable computer program for accomplishing a specific computing task. Programming involves tasks such as analysis, generating algorithms, profiling algorithms' accuracy and resource consumption, and the implementation of algorithms in a chosen programming language (commonly referred to as coding. The source code of a program is written in one or more programming languages. The purpose of programming is to find a sequence of instructions that will automate the performance of a task for solving a given problem. The process of programming thus often requires expertise in several different subjects, including knowledge of the application domain, specialized algorithms, and formal logic.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputerProgramming";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputerScience(string text)
{
	string model = "llama3";
	string definition = "The theory, experimentation, and engineering that form the basis for the design and use of computers. It involves the study of algorithms that process, store, and communicate digital information. A computer scientist specializes in the theory of computation and the design of computational systems.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputerScience";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputerScientist(string text)
{
	string model = "llama3";
	string definition = "A person who has acquired the knowledge of computer science, the study of the theoretical foundations of information and computation and their application.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputerScientist";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputerSecurity(string text)
{
	string model = "llama3";
	string definition = "The protection of computer systems from theft or damage to their hardware, software, or electronic data, as well as from disruption or misdirection of the services they provide.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputerSecurity";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ComputerVision(string text)
{
	string model = "llama3";
	string definition = "An interdisciplinary scientific field that deals with how computers can be made to gain high-level understanding from digital images or videos. From the perspective of engineering, it seeks to automate tasks that the human visual system can do.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ComputerVision";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Computing(string text)
{
	string model = "llama3";
	string definition = "Is any goal-oriented activity requiring, benefiting from, or creating computing machinery. It includes study of algorithmic processes and development of both hardware and software. It has scientific, engineering, mathematical, technological and social aspects. Major computing fields include computer engineering, computer science, cybersecurity, data science, information systems, information technology and software engineering.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Computing";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Concatenation(string text)
{
	string model = "llama3";
	string definition = "In formal language theory and computer programming, string concatenation is the operation of joining character strings end-to-end. For example, the concatenation of snow and ball is snowball. In certain formalisations of concatenation theory, also called string theory, string concatenation is a primitive notion.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Concatenation";
		}
	}
	return nullptr;

}

string _ComputerScience::Terms::Concurrency(string text)
{
	string model = "llama3";
	string definition = "The ability of different parts or units of a program, algorithm, or problem to be executed out-of-order or in partial order, without affecting the final outcome. This allows for parallel execution of the concurrent units, which can significantly improve overall speed of the execution in multi-processor and multi-core systems. In more technical terms, concurrency refers to the decomposability property of a program, algorithm, or problem into order-independent or partially-ordered components or units.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Concurrency";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Conditional(string text)
{
	string model = "llama3";
	string definition = "A feature of a programming language which performs different computations or actions depending on whether a programmer-specified Boolean condition evaluates to true or false. Apart from the case of branch predication, this is always achieved by selectively altering the control flow based on some condition.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Conditional";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Container(string text)
{
	string model = "llama3";
	string definition = "Is a class, a data structure, or an abstract data type (ADT) whose instances are collections of other objects. In other words, they store objects in an organized way that follows specific access rules. The size of the container depends on the number of objects (elements) it contains. Underlying (inherited) implementations of various container types may vary in size and complexity, and provide flexibility in choosing the right implementation for any given scenario.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Container";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ContinuationPassingStyle(string text)
{
	string model = "llama3";
	string definition = "A style of functional programming in which control is passed explicitly in the form of a continuation. This is contrasted with direct style, which is the usual style of programming. Gerald Jay Sussman and Guy L. Steele, Jr. coined the phrase in AI Memo 349 (1975), which sets out the first version of the Scheme programming language.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ContinuationPassingStyle";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ControlFlow(string text)
{
	string model = "llama3";
	string definition = "The order in which individual statements, instructions or function calls of an imperative program are executed or evaluated. The emphasis on explicit control flow distinguishes an imperative programming language from a declarative programming language.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ControlFlow";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::CreativeCommons(string text)
{
	string model = "llama3";
	string definition = "An American non-profit organization devoted to expanding the range of creative works available for others to build upon legally and to share. The organization has released several copyright-licenses, known as Creative Commons licenses, free of charge to the public.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "CreativeCommons";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Cryptography(string text)
{
	string model = "llama3";
	string definition = "Or cryptology, is the practice and study of techniques for secure communication in the presence of third parties called adversaries. More generally, cryptography is about constructing and analyzing protocols that prevent third parties or the public from reading private messages; various aspects in information security such as data confidentiality, data integrity, authentication, and non-repudiation are central to modern cryptography. Modern cryptography exists at the intersection of the disciplines of mathematics, computer science, electrical engineering, communication science, and physics. Applications of cryptography include electronic commerce, chip-based payment cards, digital currencies, computer passwords, and military communications.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Cryptography";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::CyberBullying(string text)
{
	string model = "llama3";
	string definition = "A form of bullying or harassment using electronic means.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "CyberBullying";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Cyberspace(string text)
{
	string model = "llama3";
	string definition = "Widespread, interconnected digital technology.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Cyberspace";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Daemon(string text)
{
	string model = "llama3";
	string definition = "In multitasking computer operating systems, a daemon ";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Daemon";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Data(string text)
{
	string model = "llama3";
	string definition = "any sequence of one or more symbols; datum is a single symbol of data. Data requires interpretation to become information. Digital data is data that is represented using the binary number system of ones (1) and zeros (0), instead of analog representation. In modern (post-1960) computer systems, all data is digital.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Data";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::DataCenter(string text)
{
	string model = "llama3";
	string definition = "A dedicated space used to house computer systems and associated components, such as telecommunications and data storage systems. It generally includes redundant or backup components and infrastructure for power supply, data communications connections, environmental controls (e.g. air conditioning and fire suppression) and various security devices.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "DataCenter";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Database(string text)
{
	string model = "llama3";
	string definition = "An organized collection of data, generally stored and accessed electronically from a computer system. Where databases are more complex, they are often developed using formal design and modeling techniques.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Database";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::DataMining(string text)
{
	string model = "llama3";
	string definition = "Is a process of discovering patterns in large data sets involving methods at the intersection of machine learning, statistics, and database systems. Data mining is an interdisciplinary subfield of computer science and statistics with an overall goal to extract information (with intelligent methods) from a data set and transform the information into a comprehensible structure for further use.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "DataMining";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::DataScience(string text)
{
	string model = "llama3";
	string definition = "An interdisciplinary field that uses scientific methods, processes, algorithms, and systems to extract knowledge and insights from data in various forms, both structured and unstructured, similar to data mining. Data science is a concept to unify statistics, data analysis, machine learning and their related methods in order to understand and analyze actual phenomena with data.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "DataScience";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::DataStructure(string text)
{
	string model = "llama3";
	string definition = "A data organization, management, and storage format that enables efficient access and modification. More precisely, a data structure is a collection of data values, the relationships among them, and the functions or operations that can be applied to the data.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "DataStructure";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::DataType(string text)
{
	string model = "llama3";
	string definition = "An attribute of data which tells the compiler or interpreter how the programmer intends to use the data. Most programming languages support common data types of real, integer, and Boolean. A data type constrains the values that an expression, such as a variable or a function, might take. This data type defines the operations that can be done on the data, the meaning of the data, and the way values of that type can be stored. A type of value from which an expression may take its value.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "DataType";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Debugging(string text)
{
	string model = "llama3";
	string definition = "The process of finding and resolving defects or problems within a computer program that prevent correct operation of computer software or the system as a whole. Debugging tactics can involve interactive debugging, control flow analysis, unit testing, integration testing, log file analysis, monitoring at the application or system level, memory dumps, and profiling.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Debugging";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Declaration(string text)
{
	string model = "llama3";
	string definition = "In computer programming, a language construct that specifies properties of an identifier: it declares what a word (identifier) means. Declarations are most commonly used for functions, variables, constants, and classes, but can also be used for other entities such as enumerations and type definitions. Beyond the name (the identifier itself) and the kind of entity (function, variable, etc.), declarations typically specify the data type (for variables and constants), or the type signature (for functions); types may also include dimensions, such as for arrays. A declaration is used to announce the existence of the entity to the compiler; this is important in those strongly typed languages that require functions, variables, and constants, and their types, to be specified with a declaration before use, and is used in forward declaration. The term declaration is frequently contrasted with the term definition, but meaning and usage varies significantly between languages.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Declaration";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::DigitalData(string text)
{
	string model = "llama3";
	string definition = "In information theory and information systems, the discrete, discontinuous representation of information or works. Numbers and letters are commonly used representations.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "DigitalData";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::DigitalSignalProcessing(string text)
{
	string model = "llama3";
	string definition = "The use of digital processing, such as by computers or more specialized digital signal processors, to perform a wide variety of signal processing operations. The signals processed in this manner are a sequence of numbers that represent samples of a continuous variable in a domain such as time, space, or frequency.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "DigitalSignalProcessing";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::DiscreteEventSimulation(string text)
{
	string model = "llama3";
	string definition = "A model of the operation of a system as a discrete sequence of events in time. Each event occurs at a particular instant in time and marks a change of state in the system. Between consecutive events, no change in the system is assumed to occur; thus the simulation can directly jump in time from one event to the next.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "DiscreteEventSimulation";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::DiskStorage(string text)
{
	string model = "llama3";
	string definition = "(Also sometimes called drive storage) is a general category of storage mechanisms where data is recorded by various electronic, magnetic, optical, or mechanical changes to a surface layer of one or more rotating disks. A disk drive is a device implementing such a storage mechanism. Notable types are the hard disk drive (HDD) containing a non-removable disk, the floppy disk drive (FDD) and its removable floppy disk, and various optical disc drives (ODD) and associated optical disc media.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "DiskStorage";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::DistributedComputing(string text)
{
	string model = "llama3";
	string definition = "A field of computer science that studies distributed systems. A distributed system is a system whose components are located on different networked computers, which communicate and coordinate their actions by passing messages to one another. The components interact with one another in order to achieve a common goal. Three significant characteristics of distributed systems are: concurrency of components, lack of a global clock, and independent failure of components. Examples of distributed systems vary from SOA-based systems to massively multiplayer online games to peer-to-peer applications.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "DistributedComputing";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::DivideAnfConquerAlgorithm(string text)
{
	string model = "llama3";
	string definition = "An algorithm design paradigm based on multi-branched recursion. A divide-and-conquer algorithm works by recursively breaking down a problem into two or more sub-problems of the same or related type, until these become simple enough to be solved directly. The solutions to the sub-problems are then combined to give a solution to the original problem.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "DivideAnfConquerAlgorithm";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::DNS(string text)
{
	string model = "llama3";
	string definition = "";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "DNS";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Documentation(string text)
{
	string model = "llama3";
	string definition = "Written text or illustration that accompanies computer software or is embedded in the source code. It either explains how it operates or how to use it, and may mean different things to people in different roles.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Documentation";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Domain(string text)
{
	string model = "llama3";
	string definition = "Is the targeted subject area of a computer program. It is a term used in software engineering. Formally it represents the target subject of a specific programming project, whether narrowly or broadly defined.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Domain";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::DomainNameSystem(string text)
{
	string model = "llama3";
	string definition = "A hierarchical and decentralized naming system for computers, services, or other resources connected to the Internet or to a private network. It associates various information with domain names assigned to each of the participating entities. Most prominently, it translates more readily memorized domain names to the numerical IP addresses needed for locating and identifying computer services and devices with the underlying network protocols. By providing a worldwide, distributed directory service, the Domain Name System has been an essential component of the functionality of the Internet since 1985.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "DomainNameSystem";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::DoublePrecisionFlotingpointFormat(string text)
{
	string model = "llama3";
	string definition = "A computer number format. It represents a wide dynamic range of numerical values by using a floating radix point.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "DoublePrecisionFlotingpointFormat";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Download(string text)
{
	string model = "llama3";
	string definition = "In computer networks, to receive data from a remote system, typically a server such as a web server, an FTP server, an email server, or other similar systems. This contrasts with uploading, where data is sent to a remote server. A download is a file offered for downloading or that has been downloaded, or the process of receiving such a file.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Download";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::EdgeDevice(string text)
{
	string model = "llama3";
	string definition = "A device which provides an entry point into enterprise or service provider core networks. Examples include routers, routing switches, integrated access devices (IADs), multiplexers, and a variety of metropolitan area network (MAN) and wide area network (WAN) access devices. Edge devices also provide connections into carrier and service provider networks. An edge device that connects a local area network to a high speed switch or backbone (such as an ATM switch) may be called an edge concentrator.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "EdgeDevice";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Emulator(string text)
{
	string model = "llama3";
	string definition = "Hardware or software that enables one computer system (called the host) to behave like another computer system.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Emulator";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Encryption(string text)
{
	string model = "llama3";
	string definition = "In cryptography, encryption is the process of encoding information. This process converts the original representation of the information, known as plaintext, into an alternative form known as ciphertext. Ideally, only authorized parties can decipher a ciphertext back to plaintext and access the original information. Encryption does not itself prevent interference but denies the intelligible content to a would-be interceptor. For technical reasons, an encryption scheme usually uses a pseudo-random encryption key generated by an algorithm. It is possible to decrypt the message without possessing the key, but, for a well-designed encryption scheme, considerable computational resources and skills are required. An authorized recipient can easily decrypt the message with the key provided by the originator to recipients but not to unauthorized users. Historically, various forms of encryption have been used to aid in cryptography. Early encryption techniques were often utilized in military messaging. Since then, new techniques have emerged and become commonplace in all areas of modern computing.[103] Modern encryption schemes utilize the concepts of public-key and symmetric-key. Modern encryption techniques ensure security because modern computers are inefficient at cracking the encryption.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Encryption";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Event(string text)
{
	string model = "llama3";
	string definition = "An action or occurrence recognized by software, often originating asynchronously from the external environment, that may be handled by the software. Because an event is an entity which encapsulates the action and the contextual variables triggering the action, the acrostic mnemonic Execution Variable Encapsulating Named Trigger is often used to clarify the concept.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Event";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::EventDrivenProgramming(string text)
{
	string model = "llama3";
	string definition = "A programming paradigm in which the flow of the program is determined by events such as user actions (mouse clicks, key presses), sensor outputs, or messages from other programs or threads. Event-driven programming is the dominant paradigm used in graphical user interfaces and other applications (e.g. JavaScript web applications) that are centered on performing certain actions in response to user input. This is also true of programming for device drivers (e.g. P in USB device driver stacks";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "EventDrivenProgramming";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::EvolutionaryComputing(string text)
{
	string model = "llama3";
	string definition = "A family of algorithms for global optimization inspired by biological evolution, and the subfield of artificial intelligence and soft computing studying these algorithms. In technical terms, they are a family of population-based trial-and-error problem-solvers with a metaheuristic or stochastic optimization character.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "EvolutionaryComputing";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Executable(string text)
{
	string model = "llama3";
	string definition = "Causes a computer to perform indicated tasks according to encoded instructions, as opposed to a data file that must be parsed by a program to be meaningful. The exact interpretation depends upon the use - while instructions is traditionally taken to mean machine code instructions for a physical CPU, in some contexts a file containing bytecode or scripting language instructions may also be considered executable.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Executable";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Execution(string text)
{
	string model = "llama3";
	string definition = "In computer and software engineering is the process by which a computer or virtual machine executes the instructions of a computer program. Each instruction of a program is a description of a particular action which to be carried out in order for a specific problem to be solved; as instructions of a program and therefore the actions they describe are being carried out by an executing machine, specific effects are produced in accordance to the semantics of the instructions being executed.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Execution";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ExceptionHandling(string text)
{
	string model = "llama3";
	string definition = "The process of responding to the occurrence, during computation, of exceptions – anomalous or exceptional conditions requiring special processing – often disrupting the normal flow of program execution. It is provided by specialized programming language constructs, computer hardware mechanisms like interrupts, or operating system IPC facilities like signals.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ExceptionHandling";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ExistenceDetection(string text)
{
	string model = "llama3";
	string definition = "An existence check before reading a file can catch and/or prevent a fatal error.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ExistenceDetection";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Expression(string text)
{
	string model = "llama3";
	string definition = "In a programming language, a combination of one or more constants, variables, operators, and functions that the programming language interprets (according to its particular rules of precedence and of association) and computes to produce (to return, in a stateful environment) another value. This process, as for mathematical expressions, is called evaluation.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Expression";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::FaultTolerantComputerSystem(string text)
{
	string model = "llama3";
	string definition = "A system designed around the concept of fault tolerance. In essence, they must be able to continue working to a level of satisfaction in the presence of errors or breakdowns.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "FaultTolerantComputerSystem";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::FeasibilityStudy(string text)
{
	string model = "llama3";
	string definition = "An investigation which aims to objectively and rationally uncover the strengths and weaknesses of an existing business or proposed venture, opportunities and threats present in the natural environment, the resources required to carry through, and ultimately the prospects for success. In its simplest terms, the two criteria to judge feasibility are cost required and value to be attained.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "FeasibilityStudy";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Field(string text)
{
	string model = "llama3";
	string definition = "Data that has several parts, known as a record, can be divided into fields. Relational databases arrange data as sets of database records, so called rows. Each record consists of several fields; the fields of all records form the columns. Examples of fields: name, gender, hair colour.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Field";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::FilenameExtension(string text)
{
	string model = "llama3";
	string definition = "An identifier specified as a suffix to the name of a computer file. The extension indicates a characteristic of the file contents or its intended use.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "FilenameExtension";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Filter(string text)
{
	string model = "llama3";
	string definition = "A computer program or subroutine to process a stream, producing another stream. While a single filter can be used individually, they are frequently strung together to form a pipeline.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Filter";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::FloatingPointArithmetic(string text)
{
	string model = "llama3";
	string definition = "In computing, floating-point arithmetic (FP) is arithmetic using formulaic representation of real numbers as an approximation to support a trade-off between range and precision. For this reason, floating-point computation is often found in systems which include very small and very large real numbers, which require fast processing times.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "FloatingPointArithmetic";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ForLoop(string text)
{
	string model = "llama3";
	string definition = "A control flow statement for specifying iteration, which allows code to be executed repeatedly. Various keywords are used to specify this statement: descendants of ALGOL use for, while descendants of Fortran use do. There are also other possibilities.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ForLoop";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::FormalMethods(string text)
{
	string model = "llama3";
	string definition = "A set of mathematically based techniques for the specification, development, and verification of software and hardware systems. The use of formal methods for software and hardware design is motivated by the expectation that, as in other engineering disciplines, performing appropriate mathematical analysis can contribute to the reliability and robustness of a design.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "FormalMethods";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::FormalVerification(string text)
{
	string model = "llama3";
	string definition = "The act of proving or disproving the correctness of intended algorithms underlying a system with respect to a certain formal specification or property, using formal methods of mathematics.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "FormalVerification";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::FunctionalProgramming(string text)
{
	string model = "llama3";
	string definition = "A programming paradigm—a style of building the structure and elements of computer programs–that treats computation as the evaluation of mathematical functions and avoids changing-state and mutable data. It is a declarative programming paradigm in that programming is done with expressions or declarations instead of statements.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "FunctionalProgramming";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::GameTheory(string text)
{
	string model = "llama3";
	string definition = "The study of mathematical models of strategic interaction between rational decision-makers. It has applications in all fields of social science, as well as in logic and computer science. Originally, it addressed zero-sum games, in which each participant's gains or losses are exactly balanced by those of the other participants. Today, game theory applies to a wide range of behavioral relations, and is now an umbrella term for the science of logical decision making in humans, animals, and computers.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "GameTheory";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::GarbageInGarbageOut(string text)
{
	string model = "llama3";
	string definition = "A term used to describe the concept that flawed or nonsense input data produces nonsense output or garbage. It can also refer to the unforgiving nature of programming, in which a poorly written program might produce nonsensical behavior.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "GarbageInGarbageOut";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::GraphicsInterchangeFormat(string text)
{
	string model = "llama3";
	string definition = "a bitmap image format that was developed by a team at the online services provider CompuServe led by American computer scientist Steve Wilhite and released on June 15, 1987.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "GraphicsInterchangeFormat";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Gigabyte(string text)
{
	string model = "llama3";
	string definition = "A multiple of the unit byte for digital information. The prefix giga means 109 in the International System of Units (SI). Therefore, one gigabyte is 1000000000bytes. The unit symbol for the gigabyte is GB.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Gigabyte";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::GlobalVariable(string text)
{
	string model = "llama3";
	string definition = "In computer programming, a variable with global scope, meaning that it is visible (hence accessible) throughout the program, unless shadowed. The set of all global variables is known as the global environment or global state. In compiled languages, global variables are generally static variables, whose extent (lifetime) is the entire runtime of the program, though in interpreted languages (including command-line interpreters), global variables are generally dynamically allocated when declared, since they are not known ahead of time.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "GlobalVariable";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::GraphTheory(string text)
{
	string model = "llama3";
	string definition = "In mathematics, the study of graphs, which are mathematical structures used to model pairwise relations between objects. A graph in this context is made up of vertices (also called nodes or points) which are connected by edges (also called links or lines). A distinction is made between undirected graphs, where edges link two vertices symmetrically, and directed graphs, where edges link two vertices asymmetrically.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "GraphTheory";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Handle(string text)
{
	string model = "llama3";
	string definition = "In computer programming, a handle is an abstract reference to a resource that is used when application software references blocks of memory or objects that are managed by another system like a database or an operating system.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Handle";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::HardProblem(string text)
{
	string model = "llama3";
	string definition = "Computational complexity theory focuses on classifying computational problems according to their inherent difficulty, and relating these classes to each other. A computational problem is a task solved by a computer. A computation problem is solvable by mechanical application of mathematical steps, such as an algorithm.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "HardProblem";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::HashFunction(string text)
{
	string model = "llama3";
	string definition = "Any function that can be used to map data of arbitrary size to data of a fixed size. The values returned by a hash function are called hash values, hash codes, digests, or simply hashes. Hash functions are often used in combination with a hash table, a common data structure used in computer software for rapid data lookup. Hash functions accelerate table or database lookup by detecting duplicated records in a large file.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "HashFunction";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::HashTable(string text)
{
	string model = "llama3";
	string definition = "In computing, a hash table (hash map) is a data structure that implements an associative array abstract data type, a structure that can map keys to values. A hash table uses a hash function to compute an index into an array of buckets or slots, from which the desired value can be found.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "HashTable";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Heap(string text)
{
	string model = "llama3";
	string definition = "A specialized tree-based data structure which is essentially an almost complete tree that satisfies the heap property: if P is a parent node of C, then the key (the value) of P is either greater than or equal to (in a max heap) or less than or equal to (in a min heap) the key of C. The node at the top of the heap (with no parents) is called the root node.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Heap";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Heapsort(string text)
{
	string model = "llama3";
	string definition = "A comparison-based sorting algorithm. Heapsort can be thought of as an improved selection sort: like that algorithm, it divides its input into a sorted and an unsorted region, and it iteratively shrinks the unsorted region by extracting the largest element and moving that to the sorted region. The improvement consists of the use of a heap data structure rather than a linear-time search to find the maximum.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Heapsort";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Identifier(string text)
{
	string model = "llama3";
	string definition = "Researches the design and use of computer technology, focused on the interfaces between people (users) and computers. Researchers in the field of HCI both observe the ways in which humans interact with computers and design technologies that let humans interact with computers in novel ways. As a field of research, human–computer interaction is situated at the intersection of computer science, behavioral sciences, design, media studies, and several other fields of study.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Identifier";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::IDE(string text)
{
	string model = "llama3";
	string definition = "Integrated development environment.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "IDE";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ImageProcessing(string text)
{
	string model = "llama3";
	string definition = "";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ImageProcessing";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ImperativeProgramming(string text)
{
	string model = "llama3";
	string definition = "A programming paradigm that uses statements that change a program's state. In much the same way that the imperative mood in natural languages expresses commands, an imperative program consists of commands for the computer to perform. Imperative programming focuses on describing how a program operates.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ImperativeProgramming";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::IncrementalBuildModel(string text)
{
	string model = "llama3";
	string definition = "A method of software development where the product is designed, implemented and tested incrementally (a little more is added each time) until the product is finished. It involves both development and maintenance. The product is defined as finished when it satisfies all of its requirements. This model combines the elements of the waterfall model with the iterative philosophy of prototyping.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "IncrementalBuildModel";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::InformationSpaceAnalysis(string text)
{
	string model = "llama3";
	string definition = "A deterministic method, enhanced by machine intelligence, for locating and assessing resources for team-centric efforts.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "InformationSpaceAnalysis";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::InformationVisualization(string text)
{
	string model = "llama3";
	string definition = "is the practice of designing and creating easy-to-communicate and easy-to-understand graphic or visual representations of a large amount of complex quantitative and qualitative data and information with the help of static, dynamic or interactive visual items. Typically based on data and information collected from a certain domain of expertise, these visualizations are intended for a broader audience to help them visually explore and discover, quickly understand, interpret and gain important insights into otherwise difficult-to-identify structures, relationships, correlations, local and global patterns, trends, variations, constancy, clusters, outliers and unusual groupings within data (exploratory visualization).";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "InformationVisualization";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Inheritance(string text)
{
	string model = "llama3";
	string definition = "In object-oriented programming, the mechanism of basing an object or class upon another object (prototype-based inheritance) or class (class-based inheritance), retaining similar implementation. Also defined as deriving new classes (sub classes) from existing ones (super class or base class) and forming them into a hierarchy of classes.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Inheritance";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::InputOutput(string text)
{
	string model = "llama3";
	string definition = "The communication between an information processing system, such as a computer, and the outside world, possibly a human or another information processing system. Inputs are the signals or data received by the system and outputs are the signals or data sent from it. The term can also be used as part of an action; to perform I / O is to perform an input or output operation.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "InputOutput";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::InsertionSort(string text)
{
	string model = "llama3";
	string definition = "A simple sorting algorithm that builds the final sorted array (or list) one item at a time.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "InsertionSort";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::InstructionCycle(string text)
{
	string model = "llama3";
	string definition = "The cycle which the central processing unit (CPU) follows from boot-up until the computer has shut down in order to process instructions. It is composed of three main stages: the fetch stage, the decode stage, and the execute stage.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "InstructionCycle";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Integer(string text)
{
	string model = "llama3";
	string definition = "A datum of integral data type, a data type that represents some range of mathematical integers. Integral data types may be of different sizes and may or may not be allowed to contain negative values. Integers are commonly represented in a computer as a group of binary digits (bits). The size of the grouping varies so the set of integer sizes available varies between different types of computers. Computer hardware, including virtual machines, nearly always provide a way to represent a processor register or memory address as an integer.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Integer";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::IntegratedDevelopmentEnvironment(string text)
{
	string model = "llama3";
	string definition = "A software application that provides comprehensive facilities to computer programmers for software development. An IDE normally consists of at least a source code editor, build automation tools, and a debugger.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "IntegratedDevelopmentEnvironment";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::IntegrationTesting(string text)
{
	string model = "llama3";
	string definition = "(sometimes called integration and testing, abbreviated I&T) is the phase in software testing in which individual software modules are combined and tested as a group. Integration testing is conducted to evaluate the compliance of a system or component with specified functional requirements. It occurs after unit testing and before validation testing. Integration testing takes as its input modules that have been unit tested, groups them in larger aggregates, applies tests defined in an integration test plan to those aggregates, and delivers as its output the integrated system ready for system testing.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "IntegrationTesting";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::IntellectualProperty(string text)
{
	string model = "llama3";
	string definition = "A category of legal property that includes intangible creations of the human intellect. There are many types of intellectual property, and some countries recognize more than others. The most well-known types are copyrights, patents, trademarks, and trade secrets.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "IntellectualProperty";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::IntelligentAgent(string text)
{
	string model = "llama3";
	string definition = "In artificial intelligence, an intelligent agent (IA) refers to an autonomous entity which acts, directing its activity towards achieving goals (i.e. it is an agent), upon an environment using observation through sensors and consequent actuators (i.e. it is intelligent).[126] Intelligent agents may also learn or use knowledge to achieve their goals. They may be very simple or very complex. A reflex machine, such as a thermostat, is considered an example of an intelligent agent.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "IntelligentAgent";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Interface(string text)
{
	string model = "llama3";
	string definition = "A shared boundary across which two or more separate components of a computer system exchange information. The exchange can be between software, computer hardware, peripheral devices, humans, and combinations of these. Some computer hardware devices, such as a touchscreen, can both send and receive data through the interface, while others such as a mouse or microphone may only provide an interface to send data to a given system.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::InternalDocumentation(string text)
{
	string model = "llama3";
	string definition = "Computer software is said to have Internal Documentation if the notes on how and why various parts of code operate is included within the source code as comments. It is often combined with meaningful variable names with the intention of providing potential future programmers a means of understanding the workings of the code. This contrasts with external documentation, where programmers keep their notes and explanations in a separate document.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "InternalDocumentation";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Internet(string text)
{
	string model = "llama3";
	string definition = "The global system of interconnected computer networks that use the Internet protocol suite (TCP/IP) to link devices worldwide. It is a network of networks that consists of private, public, academic, business, and government networks of local to global scope, linked by a broad array of electronic, wireless, and optical networking technologies.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Internet";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::InternetBot(string text)
{
	string model = "llama3";
	string definition = "A software application that runs automated tasks (scripts) over the Internet. Typically, bots perform tasks that are both simple and structurally repetitive, at a much higher rate than would be possible for a human alone. The largest use of bots is in web spidering (web crawler), in which an automated script fetches, analyzes and files information from web servers at many times the speed of a human.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "InternetBot";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Interpreter(string text)
{
	string model = "llama3";
	string definition = "A computer program that directly executes instructions written in a programming or scripting language, without requiring them to have been previously compiled into a machine language program.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Interpreter";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Invarient(string text)
{
	string model = "llama3";
	string definition = "One can encounter invariants that can be relied upon to be true during the execution of a program, or during some portion of it. It is a logical assertion that is always held to be true during a certain phase of execution. For example, a loop invariant is a condition that is true at the beginning and the end of every execution of a loop.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Invarient";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Iteration(string text)
{
	string model = "llama3";
	string definition = "Is the repetition of a process in order to generate an outcome. The sequence will approach some end point or end value. Each repetition of the process is a single iteration, and the outcome of each iteration is then the starting point of the next iteration. In mathematics and computer science, iteration (along with the related technique of recursion) is a standard element of algorithms.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Iteration";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Java(string text)
{
	string model = "llama3";
	string definition = "A general-purpose programming language that is class-based, object-oriented (although not a pure OO language, and designed to have as few implementation dependencies as possible. It is intended to let application developers write once, run anywhere (WORA), meaning that compiled Java code can run on all platforms that support Java without the need for recompilation.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Java";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Kernel(string text)
{
	string model = "llama3";
	string definition = "The first section of an operating system to load into memory. As the center of the operating system, the kernel needs to be small, efficient, and loaded into a protected area in the memory so that it cannot be overwritten. It may be responsible for such essential tasks as disk drive management, file management, memory management, process management, etc.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Kernel";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Library(string text)
{
	string model = "llama3";
	string definition = "A collection of non-volatile resources used by computer programs, often for software development. These may include configuration data, documentation, help data, message templates, pre-written code and subroutines, classes, values, or type specifications.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Library";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::LinearSearch(string text)
{
	string model = "llama3";
	string definition = "A method for finding an element within a list. It sequentially checks each element of the list until a match is found or the whole list has been searched.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "LinearSearch";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::LinkedList(string text)
{
	string model = "llama3";
	string definition = "A linear collection of data elements, whose order is not given by their physical placement in memory. Instead, each element points to the next. It is a data structure consisting of a collection of nodes which together represent a sequence.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "LinkedList";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Linker(string text)
{
	string model = "llama3";
	string definition = "or link editor, is a computer utility program that takes one or more object files generated by a compiler or an assembler and combines them into a single executable file, library file, or another 'object' file. A simpler version that writes its output directly to memory is called the loader, though loading is typically considered a separate process.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Linker";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::List(string text)
{
	string model = "llama3";
	string definition = "An abstract data type that represents a countable number of ordered values, where the same value may occur more than once. An instance of a list is a computer representation of the mathematical concept of a finite sequence; the (potentially) infinite analog of a list is a stream. Lists are a basic example of containers, as they contain other values. If the same value occurs multiple times, each occurrence is considered a distinct item.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "List";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Loader(string text)
{
	string model = "llama3";
	string definition = "The part of an operating system that is responsible for loading programs and libraries. It is one of the essential stages in the process of starting a program, as it places programs into memory and prepares them for execution. Loading a program involves reading the contents of the executable file containing the program instructions into memory, and then carrying out other required preparatory tasks to prepare the executable for running. Once loading is complete, the operating system starts the program by passing control to the loaded program code.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Loader";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::LogicError(string text)
{
	string model = "llama3";
	string definition = "In computer programming, a bug in a program that causes it to operate incorrectly, but not to terminate abnormally (or crash). A logic error produces unintended or undesired output or other behaviour, although it may not immediately be recognized as such.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "LogicError";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::LogicProgramming(string text)
{
	string model = "llama3";
	string definition = "A type of programming paradigm which is largely based on formal logic. Any program written in a logic programming language is a set of sentences in logical form, expressing facts and rules about some problem domain. Major logic programming language families include Prolog, answer set programming (ASP), and Datalog.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "LogicProgramming";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::MachineLearning(string text)
{
	string model = "llama3";
	string definition = "The scientific study of algorithms and statistical models that computer systems use to perform a specific task without using explicit instructions, relying on patterns and inference instead. It is seen as a subset of artificial intelligence. Machine learning algorithms build a mathematical model based on sample data, known as training data, in order to make predictions or decisions without being explicitly programmed to perform the task.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "MachineLearning";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::MachineVision(string text)
{
	string model = "llama3";
	string definition = "The technology and methods used to provide imaging-based automatic inspection and analysis for such applications as automatic inspection, process control, and robot guidance, usually in industry. Machine vision refers to many technologies, software and hardware products, integrated systems, actions, methods and expertise. Machine vision as a systems engineering discipline can be considered distinct from computer vision, a form of computer science. It attempts to integrate existing technologies in new ways and apply them to solve real world problems. The term is the prevalent one for these functions in industrial automation environments but is also used for these functions in other environments such as security and vehicle guidance.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "MachineVision";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::MathematicalLogic(string text)
{
	string model = "llama3";
	string definition = "A subfield of mathematics exploring the applications of formal logic to mathematics. It bears close connections to metamathematics, the foundations of mathematics, and theoretical computer science. The unifying themes in mathematical logic include the study of the expressive power of formal systems and the deductive power of formal proof systems.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "MathematicalLogic";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Matrix(string text)
{
	string model = "llama3";
	string definition = "In mathematics, a matrix, (plural matrices), is a rectangular array of numbers, symbols, or expressions, arranged in rows and columns.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::Memory(string text)
{
	string model = "llama3";
	string definition = "Computer data storage, often called storage, is a technology consisting of computer components and recording media that are used to retain digital data. It is a core function and fundamental component of computers.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Memory";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::MergeSort(string text)
{
	string model = "llama3";
	string definition = "An efficient, general-purpose, comparison-based sorting algorithm. Most implementations produce a stable sort, which means that the order of equal elements is the same in the input and output. Merge sort is a divide and conquer algorithm that was invented by John von Neumann in 1945.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "MergeSort";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Method(string text)
{
	string model = "llama3";
	string definition = "In object-oriented programming (OOP), a procedure associated with a message and an object. An object consists of data and behavior. The data and behavior comprise an interface, which specifies how the object may be utilized by any of various consumers of the object.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Method";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Methodology(string text)
{
	string model = "llama3";
	string definition = "In software engineering, a software development process is the process of dividing software development work into distinct phases to improve design, product management, and project management. It is also known as a software development life cycle (SDLC). The methodology may include the pre-definition of specific deliverables and artifacts that are created and completed by a project team to develop or maintain an application.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Methodology";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Modem(string text)
{
	string model = "llama3";
	string definition = "A hardware device that converts data into a format suitable for a transmission medium so that it can be transmitted from one computer to another (historically along telephone wires). A modem modulates one or more carrier wave signals to encode digital information for transmission and demodulates signals to decode the transmitted information. The goal is to produce a signal that can be transmitted easily and decoded reliably to reproduce the original digital data. Modems can be used with almost any means of transmitting analog signals from light-emitting diodes to radio. A common type of modem is one that turns the digital data of a computer into modulated electrical signal for transmission over telephone lines and demodulated by another modem at the receiver side to recover the digital data.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Modem";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::NaturalLanguageProcessing(string text)
{
	string model = "llama3";
	string definition = "A subfield of linguistics, computer science, information engineering, and artificial intelligence concerned with the interactions between computers and human (natural) languages, in particular how to program computers to process and analyze large amounts of natural language data. Challenges in natural language processing frequently involve speech recognition, natural language understanding, and natural language generation.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "NaturalLanguageProcessing";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Node(string text)
{
	string model = "llama3";
	string definition = "Is a basic unit of a data structure, such as a linked list or tree data structure. Nodes contain data and also may link to other nodes. Links between nodes are often implemented by pointers.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::NumberTheory(string text)
{
	string model = "llama3";
	string definition = "A branch of pure mathematics devoted primarily to the study of the integers and integer-valued functions.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "NumberTheory";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::NumericalAnalysis(string text)
{
	string model = "llama3";
	string definition = "The study of algorithms that use numerical approximation (as opposed to symbolic manipulations) for the problems of mathematical analysis (as distinguished from discrete mathematics).";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "NumericalAnalysis";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::NumericalMethod(string text)
{
	string model = "llama3";
	string definition = "In numerical analysis, a numerical method is a mathematical tool designed to solve numerical problems. The implementation of a numerical method with an appropriate convergence check in a programming language is called a numerical algorithm.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "NumericalMethod";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Object(string text)
{
	string model = "llama3";
	string definition = "An object can be a variable, a data structure, a function, or a method, and as such, is a value in memory referenced by an identifier. In the class-based object-oriented programming paradigm, object refers to a particular instance of a class, where the object can be a combination of variables, functions, and data structures. In relational database management, an object can be a table or column, or an association between data and a database entity (such as relating a person's age to a specific person).";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Object";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ObjectCode(string text)
{
	string model = "llama3";
	string definition = "The product of a compiler. In a general sense object code is a sequence of statements or instructions in a computer language, usually a machine code language (i.e., binary) or an intermediate language such as register transfer language (RTL). The term indicates that the code is the goal or result of the compiling process, with some early sources referring to source code as a subject program.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ObjectCode";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ObjectOrientedAnalysisAndDesign(string text)
{
	string model = "llama3";
	string definition = "A technical approach for analyzing and designing an application, system, or business by applying object-oriented programming, as well as using visual modeling throughout the software development process to guide stakeholder communication and product quality.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ObjectOrientedAnalysisAndDesign";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ObjectOrientedProgramming(string text)
{
	string model = "llama3";
	string definition = "A programming paradigm based on the concept of objects, which can contain data, in the form of fields (often known as attributes or properties), and code, in the form of procedures (often known as methods). A feature of objects is an object's procedures that can access and often modify the data fields of the object with which they are associated (objects have a notion of this or self). In OOP, computer programs are designed by making them out of objects that interact with one another. OOP languages are diverse, but the most popular ones are class-based, meaning that objects are instances of classes, which also determine their types.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ObjectOrientedProgramming";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::OpenSourceSoftware(string text)
{
	string model = "llama3";
	string definition = "A type of computer software in which source code is released under a license in which the copyright holder grants users the rights to study, change, and distribute the software to anyone and for any purpose. Open-source software may be developed in a collaborative public manner. Open-source software is a prominent example of open collaboration.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "OpenSourceSoftware";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::OperatingSystem(string text)
{
	string model = "llama3";
	string definition = "System software that manages computer hardware, software resources, and provides common services for computer programs.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "OperatingSystem";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::OpticalFiber(string text)
{
	string model = "llama3";
	string definition = "A flexible, transparent fiber made by drawing glass (silica) or plastic to a diameter slightly thicker than that of a human hair. Optical fibers are used most often as a means to transmit light between the two ends of the fiber and find wide usage in fiber-optic communications, where they permit transmission over longer distances and at higher bandwidths (data rates) than electrical cables. Fibers are used instead of metal wires because signals travel along them with less loss; in addition, fibers are immune to electromagnetic interference, a problem from which metal wires suffer.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "OpticalFiber";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::PairProgramming(string text)
{
	string model = "llama3";
	string definition = "An agile software development technique in which two programmers work together at one workstation. One, the driver, writes code while the other, the observer or navigator, reviews each line of code as it is typed in. The two programmers switch roles frequently.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "PairProgramming";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ParallelComputing(string text)
{
	string model = "llama3";
	string definition = "A type of computation in which many calculations or the execution of processes are carried out simultaneously. Large problems can often be divided into smaller ones, which can then be solved at the same time. There are several different forms of parallel computing: bit-level, instruction-level, data, and task parallelism.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ParallelComputing";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Parameter(string text)
{
	string model = "llama3";
	string definition = "In computer programming, a special kind of variable, used in a subroutine to refer to one of the pieces of data provided as input to the subroutine. These pieces of data are the values of the arguments (often called actual arguments or actual parameters) with which the subroutine is going to be called/invoked. An ordered list of parameters is usually included in the definition of a subroutine, so that, each time the subroutine is called, its arguments for that call are evaluated, and the resulting values can be assigned to the corresponding parameters.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Parameter";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Peripheral(string text)
{
	string model = "llama3";
	string definition = "Any auxiliary or ancillary device connected to or integrated within a computer system and used to send information to or retrieve information from the computer. An input device sends data or instructions to the computer; an output device provides output from the computer to the user; and an input/output device performs both functions.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Peripheral";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Pointer(string text)
{
	string model = "llama3";
	string definition = "Is an object in many programming languages that stores a memory address. This can be that of another value located in computer memory, or in some cases, that of memory-mapped computer hardware. A pointer references a location in memory, and obtaining the value stored at that location is known as dereferencing the pointer. As an analogy, a page number in a book's index could be considered a pointer to the corresponding page; dereferencing such a pointer would be done by flipping to the page with the given page number and reading the text found on that page. The actual format and content of a pointer variable is dependent on the underlying computer architecture.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Pointer";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Postcondition(string text)
{
	string model = "llama3";
	string definition = "In computer programming, a condition or predicate that must always be true just after the execution of some section of code or after an operation in a formal specification. Postconditions are sometimes tested using assertions within the code itself. Often, postconditions are simply included in the documentation of the affected section of code.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Postcondition";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Precondition(string text)
{
	string model = "llama3";
	string definition = "In computer programming, a condition or predicate that must always be true just prior to the execution of some section of code or before an operation in a formal specification. If a precondition is violated, the effect of the section of code becomes undefined and thus may or may not carry out its intended work. Security problems can arise due to incorrect preconditions.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Postcondition";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::PrimaryStorage(string text)
{
	string model = "llama3";
	string definition = "(Also known as main memory, internal memory or prime memory), often referred to simply as memory, is the only one directly accessible to the CPU. The CPU continuously reads instructions stored there and executes them as required. Any data actively operated on is also stored there in uniform manner.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "PrimaryStorage";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::PrimitiveDataType(string text)
{
	string model = "llama3";
	string definition = "primitive data types are a set of basic data types from which all other data types are constructed. Specifically it often refers to the limited set of data representations in use by a particular processor, which all compiled programs must use. Most processors support a similar set of primitive data types, although the specific representations vary. More generally, primitive data types may refer to the standard data types built into a programming language (built-in types). Data types which are not primitive are referred to as derived or composite.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "PrimitiveDataType";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::PriorityQueue(string text)
{
	string model = "llama3";
	string definition = "An abstract data type which is like a regular queue or stack data structure, but where additionally each element has a priority associated with it. In a priority queue, an element with high priority is served before an element with low priority. In some implementations, if two elements have the same priority, they are served according to the order in which they were enqueued, while in other implementations, ordering of elements with the same priority is undefined.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "PriorityQueue";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ProceduralProgramming(string text)
{
	string model = "llama3";
	string definition = "a programming paradigm, classified as imperative programming, that involves implementing the behavior of a computer program as procedures (a.k.a. functions, subroutines) that call each other. The resulting program is a series of steps that forms a hierarchy of calls to its constituent procedures.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ProceduralProgramming";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ProceduralGeneration(string text)
{
	string model = "llama3";
	string definition = "a method of creating data algorithmically as opposed to manually, typically through a combination of human-generated content and algorithms coupled with computer-generated randomness and processing power. In computer graphics, it is commonly used to create textures and 3D models. In video games, it is used to automatically create large amounts of content in a game. Depending on the implementation, advantages of procedural generation can include smaller file sizes, larger amounts of content, and randomness for less predictable gameplay.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ProceduralGeneration";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Procedure(string text)
{
	string model = "llama3";
	string definition = "a subroutine is a sequence of program instructions that performs a specific task, packaged as a unit. This unit can then be used in programs wherever that particular task should be performed. Subroutines may be defined within programs, or separately in libraries that can be used by many programs. In different programming languages, a subroutine may be called a routine, subprogram, function, method, or procedure. Technically, these terms all have different definitions. The generic, umbrella term callable unit is sometimes used.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Procedure";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ProgramLifecyclePhase(string text)
{
	string model = "llama3";
	string definition = "Program lifecycle phases are the stages a computer program undergoes, from initial creation to deployment and execution. The phases are edit time, compile time, link time, distribution time, installation time, load time, and run time.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ProgramLifecyclePhase";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ProgrammingLanguage(string text)
{
	string model = "llama3";
	string definition = "A formal language, which comprises a set of instructions that produce various kinds of output. Programming languages are used in computer programming to implement algorithms.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ProgrammingLanguage";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ProgrammingLanguageImplementation(string text)
{
	string model = "llama3";
	string definition = "a system for executing computer programs. There are two general approaches to programming language implementation: interpretation and compilation.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ProgrammingLanguageImplementation";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ProgrammingLanguageTheory(string text)
{
	string model = "llama3";
	string definition = "a branch of computer science that deals with the design, implementation, analysis, characterization, and classification of programming languages and of their individual features. It falls within the discipline of computer science, both depending on and affecting mathematics, software engineering, linguistics and even cognitive science. It has become a well-recognized branch of computer science, and an active research area, with results published in numerous journals dedicated to PLT, as well as in general computer science and engineering publications.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ProgrammingLanguageTheory";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Prolog(string text)
{
	string model = "llama3";
	string definition = "a logic programming language associated with artificial intelligence and computational linguistics. Prolog has its roots in first-order logic, a formal logic, and unlike many other programming languages, Prolog is intended primarily as a declarative programming language: the program logic is expressed in terms of relations, represented as facts and rules. A computation is initiated by running a query over these relations.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::Python(string text)
{
	string model = "llama3";
	string definition = "an interpreted, high-level and general-purpose programming language. Created by Guido van Rossum and first released in 1991, Python's design philosophy emphasizes code readability with its notable use of significant whitespace. Its language constructs and object-oriented approach aim to help programmers write clear, logical code for small and large-scale projects.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::QuantumComputing(string text)
{
	string model = "llama3";
	string definition = "The use of quantum-mechanical phenomena such as superposition and entanglement to perform computation. A quantum computer is used to perform such computation, which can be implemented theoretically or physically.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "QuantumComputing";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Queue(string text)
{
	string model = "llama3";
	string definition = "A collection in which the entities in the collection are kept in order and the principal (or only) operations on the collection are the addition of entities to the rear terminal position, known as enqueue, and removal of entities from the front terminal position, known as dequeue.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Queue";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Quicksort(string text)
{
	string model = "llama3";
	string definition = "An efficient sorting algorithm which serves as a systematic method for placing the elements of a random access file or an array in order.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Quicksort";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::RProgrammingLanguage(string text)
{
	string model = "llama3";
	string definition = "a programming language and free software environment for statistical computing and graphics supported by the R Foundation for Statistical Computing. The R language is widely used among statisticians and data miners for developing statistical software and data analysis.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "RProgrammingLanguage";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Radix(string text)
{
	string model = "llama3";
	string definition = "In digital numeral systems, the number of unique digits, including the digit zero, used to represent numbers in a positional numeral system. For example, in the decimal/denary system (the most common system in use today) the radix (base number) is ten, because it uses the ten digits from 0 through 9, and all other numbers are uniquely specified by positional combinations of these ten base digits; in the binary system that is the standard in computing, the radix is two, because it uses only two digits, 0 and 1, to uniquely specify each number.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Radix";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Record(string text)
{
	string model = "llama3";
	string definition = "A record (also called a structure, struct, or compound data) is a basic data structure. Records in a database or spreadsheet are usually called rows.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Record";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Recursion(string text)
{
	string model = "llama3";
	string definition = "Occurs when a thing is defined in terms of itself or of its type. Recursion is used in a variety of disciplines ranging from linguistics to logic. The most common application of recursion is in mathematics and computer science, where a function being defined is applied within its own definition. While this apparently defines an infinite number of instances (function values), it is often done in such a way that no infinite loop or infinite chain of references can occur.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Recursion";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Reference(string text)
{
	string model = "llama3";
	string definition = "a value that enables a program to indirectly access a particular datum, such as a variable's value or a record, in the computer's memory or in some other storage device. The reference is said to refer to the datum, and accessing the datum is called dereferencing the reference.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Reference";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ReferenceComputing(string text)
{
	string model = "llama3";
	string definition = "A programming technique of storing the number of references, pointers, or handles to a resource, such as an object, a block of memory, disk space, and others. In garbage collection algorithms, reference counts may be used to deallocate objects which are no longer needed.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ReferenceComputing";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::RegressionTesting(string text)
{
	string model = "llama3";
	string definition = "s re-running functional and non-functional tests to ensure that previously developed and tested software still performs after a change. If not, that would be called a regression. Changes that may require regression testing include bug fixes, software enhancements, configuration changes, and even substitution of electronic components. As regression test suites tend to grow with each found defect, test automation is frequently involved. Sometimes a change impact analysis is performed to determine an appropriate subset of tests (non-regression analysis)";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "RegressionTesting";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::RelationalDatabase(string text)
{
	string model = "llama3";
	string definition = "a digital database based on the relational model of data, as proposed by E. F. Codd in 1970. A software system used to maintain relational databases is a relational database management system (RDBMS). Many relational database systems have an option of using the SQL (Structured Query Language) for querying and maintaining the database.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "RelationalDatabase";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ReliabilityEngineering(string text)
{
	string model = "llama3";
	string definition = "A sub-discipline of systems engineering that emphasizes dependability in the lifecycle management of a product. Reliability describes the ability of a system or component to function under stated conditions for a specified period of time. Reliability is closely related to availability, which is typically described as the ability of a component or system to function at a specified moment or interval of time.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ReliabilityEngineering";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::RequirementsAnalysis(string text)
{
	string model = "llama3";
	string definition = "In systems engineering and software engineering, requirements analysis focuses on the tasks that determine the needs or conditions to meet the new or altered product or project, taking account of the possibly conflicting requirements of the various stakeholders, analyzing, documenting, validating and managing software or system requirements.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "RequirementsAnalysis";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Robotics(string text)
{
	string model = "llama3";
	string definition = "An interdisciplinary branch of engineering and science that includes mechanical engineering, electronic engineering, information engineering, computer science, and others. Robotics involves design, construction, operation, and use of robots, as well as computer systems for their perception, control, sensory feedback, and information processing. The goal of robotics is to design intelligent machines that can help and assist humans in their day-to-day lives and keep everyone safe.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::RoundOffError(string text)
{
	string model = "llama3";
	string definition = "The difference between the result produced by a given algorithm using exact arithmetic and the result produced by the same algorithm using finite-precision, rounded arithmetic. Rounding errors are due to inexactness in the representation of real numbers and the arithmetic operations done with them. This is a form of quantization error. When using approximation equations or algorithms, especially when using finitely many digits to represent real numbers (which in theory have infinitely many digits), one of the goals of numerical analysis is to estimate computation errors. Computation errors, also called numerical errors, include both truncation errors and roundoff errors.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "RoundOffError";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Router(string text)
{
	string model = "llama3";
	string definition = "A networking device that forwards data packets between computer networks. Routers perform the traffic directing functions on the Internet. Data sent through the internet, such as a web page or email, is in the form of data packets. A packet is typically forwarded from one router to another router through the networks that constitute an internetwork (e.g. the Internet) until it reaches its destination node.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Router";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::RoutingTable(string text)
{
	string model = "llama3";
	string definition = "In computer networking a routing table, or routing information base (RIB), is a data table stored in a router or a network host that lists the routes to particular network destinations, and in some cases, metrics (distances) associated with those routes. The routing table contains information about the topology of the network immediately around it.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "RoutingTable";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::RunTime(string text)
{
	string model = "llama3";
	string definition = "Runtime, run time, or execution time is the final phase of a computer program's life cycle, in which the code is being executed on the computer's central processing unit (CPU) as machine code. In other words, runtime is the running phase of a program.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "RunTime";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::RunTimeError(string text)
{
	string model = "llama3";
	string definition = "detected after or during the execution (running state) of a program, whereas a compile-time error is detected by the compiler before the program is ever executed. Type checking, register allocation, code generation, and code optimization are typically done at compile time, but may be done at runtime depending on the particular language and compiler. Many other runtime errors exist and are handled differently by different programming languages, such as division by zero errors, domain errors, array subscript out of bounds errors, arithmetic underflow errors, several types of underflow and overflow errors, and many other runtime errors generally considered as software bugs which may or may not be caught and handled by any particular computer language.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "RunTimeError";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SearchAlgorithm(string text)
{
	string model = "llama3";
	string definition = "Any algorithm which solves the search problem, namely, to retrieve information stored within some data structure, or calculated in the search space of a problem domain, either with discrete or continuous values.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SearchAlgorithm";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SecondaryStorage(string text)
{
	string model = "llama3";
	string definition = "external memory or auxiliary storage, differs from primary storage in that it is not directly accessible by the CPU. The computer usually uses its input/output channels to access secondary storage and transfer the desired data to primary storage. Secondary storage is non-volatile (retaining data when power is shut off). Modern computer systems typically have two orders of magnitude more secondary storage than primary storage because secondary storage is less expensive.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SecondaryStorage";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SelectionSort(string text)
{
	string model = "llama3";
	string definition = "It has an O(n2) time complexity, which makes it inefficient on large lists, and generally performs worse than the similar insertion sort. Selection sort is noted for its simplicity and has performance advantages over more complicated algorithms in certain situations, particularly where auxiliary memory is limited.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SelectionSort";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Semantics(string text)
{
	string model = "llama3";
	string definition = "the field concerned with the rigorous mathematical study of the meaning of programming languages. It does so by evaluating the meaning of syntactically valid strings defined by a specific programming language, showing the computation involved. In such a case that the evaluation would be of syntactically invalid strings, the result would be non-computation. Semantics describes the processes a computer follows when executing a program in that specific language. This can be shown by describing the relationship between the input and output of a program, or an explanation of how the program will be executed on a certain platform, hence creating a model of computation.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::Sequence(string text)
{
	string model = "llama3";
	string definition = "an enumerated collection of objects in which repetitions are allowed and order does matter. Like a set, it contains members (also called elements, or terms). The number of elements (possibly infinite) is called the length of the sequence. Unlike a set, the same elements can appear multiple times at different positions in a sequence, and order does matter. Formally, a sequence can be defined as a function whose domain is either the set of the natural numbers (for infinite sequences) or the set of the first n natural numbers (for a sequence of finite length n). The position of an element in a sequence is its rank or index; it is the natural number for which the element is the image. The first element has index 0 or 1, depending on the context or a specific convention. When a symbol is used to denote a sequence, the nth element of the sequence is denoted by this symbol with n as subscript; for example, the nth element of the Fibonacci sequence F is generally denoted Fn. For example, (M, A, R, Y) is a sequence of letters with the letter 'M' first and 'Y' last. This sequence differs from (A, R, M, Y). Also, the sequence (1, 1, 2, 3, 5, 8), which contains the number 1 at two different positions, is a valid sequence. Sequences can be finite, as in these examples, or infinite, such as the sequence of all even positive integers (2, 4, 6, ...). In computing and computer science, finite sequences are sometimes called strings, words or lists, the different names commonly corresponding to different ways to represent them in computer memory; infinite sequences are called streams. The empty sequence ( ) is included in most notions of sequence, but may be excluded depending on the context.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::Serializability(string text)
{
	string model = "llama3";
	string definition = "In concurrency control of databases, transaction processing (transaction management), and various transactional applications (e.g., transactional memory and software transactional memory), both centralized and distributed, a transaction schedule is serializable if its outcome (e.g., the resulting database state) is equal to the outcome of its transactions executed serially, i.e. without overlapping in time. Transactions are normally executed concurrently (they overlap), since this is the most efficient way. Serializability is the major correctness criterion for concurrent transactions' executions. It is considered the highest level of isolation between transactions, and plays an essential role in concurrency control. As such it is supported in all general purpose database systems. Strong strict two-phase locking (SS2PL) is a popular serializability mechanism utilized in most of the database systems (in various variants) since their early days in the 1970s.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Serializability";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Serialization(string text)
{
	string model = "llama3";
	string definition = "Is the process of translating data structures or object state into a format that can be stored (for example, in a file or memory buffer) or transmitted (for example, across a network connection link) and reconstructed later (possibly in a different computer environment). When the resulting series of bits is reread according to the serialization format, it can be used to create a semantically identical clone of the original object. For many complex objects, such as those that make extensive use of references, this process is not straightforward. Serialization of object-oriented objects does not include any of their associated methods with which they were previously linked. This process of serializing an object is also called marshalling an object in some situations. The opposite operation, extracting a data structure from a series of bytes, is deserialization, (also called unserialization or unmarshalling).";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Serialization";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ServiceLevelAgreement(string text)
{
	string model = "llama3";
	string definition = "a commitment between a service provider and a client. Particular aspects of the service – quality, availability, responsibilities – are agreed between the service provider and the service user. The most common component of an SLA is that the services should be provided to the customer as agreed upon in the contract. As an example, Internet service providers and telcos will commonly include service level agreements within the terms of their contracts with customers to define the level(s) of service being sold in plain language terms. In this case the SLA will typically have a technical definition in mean time between failures (MTBF), mean time to repair or mean time to recovery (MTTR); identifying which party is responsible for reporting faults or paying fees; responsibility for various data rates; throughput; jitter; or similar measurable details.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ServiceLevelAgreement";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Set(string text)
{
	string model = "llama3";
	string definition = "an abstract data type that can store unique values, without any particular order. It is a computer implementation of the mathematical concept of a finite set. Unlike most other collection types, rather than retrieving a specific element from a set, one typically tests a value for membership in a set.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Set";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SingletonVariable(string text)
{
	string model = "llama3";
	string definition = "A variable that is referenced only once. May be used as a dummy argument in a function call, or when its address is assigned to another variable which subsequently accesses its allocated storage. Singleton variables sometimes occur because a mistake has been made – such as assigning a value to a variable and forgetting to use it later, or mistyping one instance of the variable name. Some compilers and lint-like tools flag occurrences of singleton variables.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SingletonVariable";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Software(string text)
{
	string model = "llama3";
	string definition = "Computer software, or simply software, is a collection of data or computer instructions that tell the computer how to work. This is in contrast to physical hardware, from which the system is built and actually performs the work. In computer science and software engineering, computer software is all information processed by computer systems, programs and data. Computer software includes computer programs, libraries and related non-executable data, such as online documentation or digital media. Computer hardware and software require each other and neither can be realistically used on its own.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::SoftwareAgent(string text)
{
	string model = "llama3";
	string definition = "a computer program that acts for a user or other program in a relationship of agency, which derives from the Latin agere (to do): an agreement to act on one's behalf. Such action on behalf of implies the authority to decide which, if any, action is appropriate. Agents are colloquially known as bots, from robot. They may be embodied, as when execution is paired with a robot body, or as software such as a chatbot executing on a phone (e.g. Siri) or other computing device. Software agents may be autonomous or work together with other agents or people. Software agents interacting with people (e.g. chatbots, human-robot interaction environments) may possess human-like qualities such as natural language understanding and speech, personality or embody humanoid form (see Asimo).";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SoftwareAgent";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SoftwareConstruction(string text)
{
	string model = "llama3";
	string definition = "a software engineering discipline. It is the detailed creation of working meaningful software through a combination of coding, verification, unit testing, integration testing, and debugging. It is linked to all the other software engineering disciplines, most strongly to software design and software testing.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SoftwareConstruction";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SoftwareDeployment(string text)
{
	string model = "llama3";
	string definition = "Is all of the activities that make a software system available for use.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SoftwareDeployment";
		}
	}
	return nullptr;

}

string _ComputerScience::Terms::SoftwareDesign(string text)
{
	string model = "llama3";
	string definition = "the process by which an agent creates a specification of a software artifact, intended to accomplish goals, using a set of primitive components and subject to constraints. Software design may refer to either all the activity involved in conceptualizing, framing, implementing, commissioning, and ultimately modifying complex systems or the activity following requirements specification and before programming, as ...[in] a stylized software engineering process.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SoftwareDesign";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SoftwareDevelopment(string text)
{
	string model = "llama3";
	string definition = "the process of conceiving, specifying, designing, programming, documenting, testing, and bug fixing involved in creating and maintaining applications, frameworks, or other software components. Software development is a process of writing and maintaining the source code, but in a broader sense, it includes all that is involved between the conception of the desired software through to the final manifestation of the software, sometimes in a planned and structured process. Therefore, software development may include research, new development, prototyping, modification, reuse, re-engineering, maintenance, or any other activities that result in software products.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SoftwareDevelopment";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SoftwareDevelopmentProcess(string text)
{
	string model = "llama3";
	string definition = "a software development process is the process of dividing software development work into distinct phases to improve design, product management, and project management. It is also known as a software development life cycle (SDLC). The methodology may include the pre-definition of specific deliverables and artifacts that are created and completed by a project team to develop or maintain an application. Most modern development processes can be vaguely described as agile. Other methodologies include waterfall, prototyping, iterative and incremental development, spiral development, rapid application development, and extreme programming.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SoftwareDevelopmentProcess";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SoftwareEngineering(string text)
{
	string model = "llama3";
	string definition = "the systematic application of engineering approaches to the development of software. Software engineering is a computing discipline.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SoftwareEngineering";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SoftwareMaintenance(string text)
{
	string model = "llama3";
	string definition = "the modification of a software product after delivery to correct faults, to improve performance or other attributes.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SoftwareMaintenance";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SoftwarePrototyping(string text)
{
	string model = "llama3";
	string definition = "the activity of creating prototypes of software applications, i.e., incomplete versions of the software program being developed. It is an activity that can occur in software development and is comparable to prototyping as known from other fields, such as mechanical engineering or manufacturing. A prototype typically simulates only a few aspects of, and may be completely different from, the final product.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SoftwarePrototyping";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SoftwareRequirementsSpecification(string text)
{
	string model = "llama3";
	string definition = "a description of a software system to be developed. The software requirements specification lays out functional and non-functional requirements, and it may include a set of use cases that describe user interactions that the software must provide to the user for perfect interaction.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SoftwareRequirementsSpecification";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SoftwareTesting(string text)
{
	string model = "llama3";
	string definition = "an investigation conducted to provide stakeholders with information about the quality of the software product or service under test. Software testing can also provide an objective, independent view of the software to allow the business to appreciate and understand the risks of software implementation. Test techniques include the process of executing a program or application with the intent of finding software bugs (errors or other defects), and verifying that the software product is fit for use.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SoftwareTesting";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SortingAlgorithm(string text)
{
	string model = "llama3";
	string definition = "an algorithm that puts elements of a list in a certain order. The most frequently used orders are numerical order and lexicographical order. Efficient sorting is important for optimizing the efficiency of other algorithms (such as search and merge algorithms) that require input data to be in sorted lists. Sorting is also often useful for canonicalizing data and for producing human-readable output. More formally, the output of any sorting algorithm must satisfy two conditions: The output is in nondecreasing order (each element is no smaller than the previous element according to the desired total order); 2. The output is a permutation (a reordering, yet retaining all of the original elements) of the input. Further, the input data is often stored in an array, which allows random access, rather than a list, which only allows sequential access; though many algorithms can be applied to either type of data after suitable modification.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SortingAlgorithm";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SourceCode(string text)
{
	string model = "llama3";
	string definition = "any collection of code, with or without comments, written using a human-readable programming language, usually as plain text. The source code of a program is specially designed to facilitate the work of computer programmers, who specify the actions to be performed by a computer mostly by writing source code. The source code is often transformed by an assembler or compiler into binary machine code that can be executed by the computer. The machine code might then be stored for execution at a later time. Alternatively, source code may be interpreted and thus immediately executed.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SourceCode";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SpiralModel(string text)
{
	string model = "llama3";
	string definition = "a risk-driven software development process model. Based on the unique risk patterns of a given project, the spiral model guides a team to adopt elements of one or more process models, such as incremental, waterfall, or evolutionary prototyping.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SpiralModel";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Stack(string text)
{
	string model = "llama3";
	string definition = "an abstract data type that serves as a collection of elements, with two main principal operations: push, which adds an element to the collection, and pop, which removes the most recently added element that was not yet removed. The order in which elements come off a stack gives rise to its alternative name, LIFO (last in, first out). Additionally, a peek operation may give access to the top without modifying the stack.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Stack";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::State(string text)
{
	string model = "llama3";
	string definition = "a system is described as stateful if it is designed to remember preceding events or user interactions; the remembered information is called the state of the system.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
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

string _ComputerScience::Terms::Statement(string text)
{
	string model = "llama3";
	string definition = "a statement is a syntactic unit of an imperative programming language that expresses some action to be carried out. A program written in such a language is formed by a sequence of one or more statements. A statement may have internal components (e.g., expressions).";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Statement";
		}
	}
	return nullptr;

}

string _ComputerScience::Terms::Storage(string text)
{
	string model = "llama3";
	string definition = "a technology consisting of computer components and recording media that are used to retain digital data. It is a core function and fundamental component of computers.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Storage";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Stream(string text)
{
	string model = "llama3";
	string definition = "a sequence of data elements made available over time. A stream can be thought of as items on a conveyor belt being processed one at a time rather than in large batches.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Stream";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::String(string text)
{
	string model = "llama3";
	string definition = "a string is traditionally a sequence of characters, either as a literal constant or as some kind of variable. The latter may allow its elements to be mutated and the length changed, or it may be fixed (after creation). A string is generally considered as a data type and is often implemented as an array data structure of bytes (or words) that stores a sequence of elements, typically characters, using some character encoding. String may also denote more general arrays or other sequence (or list) data types and structures.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "String";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::StructuredStorage(string text)
{
	string model = "llama3";
	string definition = "provides a mechanism for storage and retrieval of data that is modeled in means other than the tabular relations used in relational databases. Such databases have existed since the late 1960s, but the name NoSQL was only coined in the early 21st century,";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "StructuredStorage";
		}
	}
	return nullptr;

}

string _ComputerScience::Terms::Subroutine(string text)
{
	string model = "llama3";
	string definition = "a sequence of program instructions that performs a specific task, packaged as a unit. This unit can then be used in programs wherever that particular task should be performed. Subroutines may be defined within programs, or separately in libraries that can be used by many programs. In different programming languages, a subroutine may be called a routine, subprogram, function, method, or procedure. Technically, these terms all have different definitions. The generic, umbrella term callable unit is sometimes used.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Subroutine";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SymbolicComputation(string text)
{
	string model = "llama3";
	string definition = "computer algebra, also called symbolic computation or algebraic computation, is a scientific area that refers to the study and development of algorithms and software for manipulating mathematical expressions and other mathematical objects. Although computer algebra could be considered a subfield of scientific computing, they are generally considered as distinct fields because scientific computing is usually based on numerical computation with approximate floating point numbers, while symbolic computation emphasizes exact computation with expressions containing variables that have no given value and are manipulated as symbols.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SymbolicComputation";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Syntax(string text)
{
	string model = "llama3";
	string definition = "a computer language is the set of rules that defines the combinations of symbols that are considered to be correctly structured statements or expressions in that language. This applies both to programming languages, where the document represents source code, and to markup languages, where the document represents data.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Syntax";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::SyntaxError(string text)
{
	string model = "llama3";
	string definition = "an error in the syntax of a sequence of characters or tokens that is intended to be written in compile-time. A program will not compile until all syntax errors are corrected. For interpreted languages, however, a syntax error may be detected during program execution, and an interpreter's error messages might not differentiate syntax errors from errors of other kinds. There is some disagreement as to just what errors are syntax errors. For example, some would say that the use of an uninitialized variable's value in Java code is a syntax error, but many others would disagree and would classify this as a (static) semantic error.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SyntaxError";
		}
	}
	return nullptr;

}

string _ComputerScience::Terms::SystemConsole(string text)
{
	string model = "llama3";
	string definition = "the text entry and display device for system administration messages, particularly those from the BIOS or boot loader, the kernel, from the init system and from the system logger. It is a physical device consisting of a keyboard and a screen, and traditionally is a text terminal, but may also be a graphical terminal. System consoles are generalized to computer terminals, which are abstracted respectively by virtual consoles and terminal emulators. Today communication with system consoles is generally done abstractly, via the standard streams (stdin, stdout, and stderr), but there may be system-specific interfaces, for example those used by the system kernel.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "SystemConsole";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::TechnicalDocumentation(string text)
{
	string model = "llama3";
	string definition = "any type of documentation that describes handling, functionality, and architecture of a technical product or a product under development or use. he intended recipient for product technical documentation is both the (proficient) end user as well as the administrator/service or maintenance technician. In contrast to a mere cookbook manual, technical documentation aims at providing enough information for a user to understand inner and outer dependencies of the product at hand.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "TechnicalDocumentation";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::ThirdGenerationProgrammingLanguage(string text)
{
	string model = "llama3";
	string definition = "a high-level computer programming language that tends to be more machine-independent and programmer-friendly than the machine code of the first-generation and assembly languages of the second-generation, while having a less specific focus to the fourth and fifth generations.[228] Examples of common and historical third-generation programming languages are ALGOL, BASIC, C, COBOL, Fortran, Java, and Pascal.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "ThirdGenerationProgrammingLanguage";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::TopDownDesign(string text)
{
	string model = "llama3";
	string definition = "strategies of information processing and ordering knowledge, used in a variety of fields including software, humanistic and scientific theories (see systemics), and management and organization. In practice they can be seen as a style of thinking, teaching, or leadership.  top–down approach (also known as stepwise design and stepwise refinement and in some cases used as a synonym of decomposition) is essentially the breaking down of a system to gain insight into its compositional subsystems in a reverse engineering fashion. In a top–down approach an overview of the system is formulated, specifying, but not detailing, any first-level subsystems. Each subsystem is then refined in yet greater detail, sometimes in many additional subsystem levels, until the entire specification is reduced to base elements. A top–down model is often specified with the assistance of black boxes, which makes it easier to manipulate. However, black boxes may fail to clarify elementary mechanisms or be detailed enough to realistically validate the model. A top–down approach starts with the big picture, then breaks down into smaller segments.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "TopDownDesign";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::BottomUpDesign(string text)
{
	string model = "llama3";
	string definition = "strategies of information processing and ordering knowledge, used in a variety of fields including software, humanistic and scientific theories (see systemics), and management and organization. In practice they can be seen as a style of thinking, teaching, or leadership. the piecing together of systems to give rise to more complex systems, thus making the original systems subsystems of the emergent system. Bottom–up processing is a type of information processing based on incoming data from the environment to form a perception. From a cognitive psychology perspective, information enters the eyes in one direction (sensory input, or the bottom), and is then turned into an image by the brain that can be interpreted and recognized as a perception (output that is built up from processing to final cognition). In a bottom–up approach the individual base elements of the system are first specified in great detail. These elements are then linked together to form larger subsystems, which then in turn are linked, sometimes in many levels, until a complete top-level system is formed. This strategy often resembles a seed model, by which the beginnings are small but eventually grow in complexity and completeness. But organic strategies may result in a tangle of elements and subsystems, developed in isolation and subject to local optimization as opposed to meeting a global purpose.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "BottomUpDesign";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Tree(string text)
{
	string model = "llama3";
	string definition = "A widely used abstract data type (ADT) that simulates a hierarchical tree structure, with a root value and subtrees of children with a parent node, represented as a set of linked nodes.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Tree";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::TypeTheory(string text)
{
	string model = "llama3";
	string definition = "In mathematics, logic, and computer science, a type theory is any of a class of formal systems, some of which can serve as alternatives to set theory as a foundation for all mathematics. In type theory, every term has a type and operations are restricted to terms of a certain type.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "TypeTheory";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Upload(string text)
{
	string model = "llama3";
	string definition = "to send data to a remote system such as a server or another client so that the remote system can store a copy.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Upload";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::UniformResourceLocator(string text)
{
	string model = "llama3";
	string definition = "a reference to a resource that specifies its location on a computer network and a mechanism for retrieving it. A URL is a specific type of Uniform Resource Identifier (URI),";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "UniformResourceLocator";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::User(string text)
{
	string model = "llama3";
	string definition = "a person who utilizes a computer or network service. Users of computer systems and software products generally lack the technical expertise required to fully understand how they work. Power users use advanced features of programs, though they are not necessarily capable of computer programming and system administration.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "User";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::UserAgent(string text)
{
	string model = "llama3";
	string definition = "(a software agent) that acts on behalf of a user, such as a web browser that retrieves, renders and facilitates end user interaction with Web content. An email reader is a mail user agent.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "UserAgent";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::UserInterface(string text)
{
	string model = "llama3";
	string definition = "The space where interactions between humans and machines occur. The goal of this interaction is to allow effective operation and control of the machine from the human end, whilst the machine simultaneously feeds back information that aids the operators' decision-making process. Examples of this broad concept of user interfaces include the interactive aspects of computer operating systems, hand tools, heavy machinery operator controls, and process controls. The design considerations applicable when creating user interfaces are related to or involve such disciplines as ergonomics and psychology.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "UserInterface";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::UserInterfaceDesign(string text)
{
	string model = "llama3";
	string definition = "The design of user interfaces for machines and software, such as computers, home appliances, mobile devices, and other electronic devices, with the focus on maximizing usability and the user experience. The goal of user interface design is to make the user's interaction as simple and efficient as possible, in terms of accomplishing user goals (user-centered design).";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "UserInterfaceDesign";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::Variable(string text)
{
	string model = "llama3";
	string definition = "a variable, or scalar, is a storage location (identified by a memory address) paired with an associated symbolic name (an identifier), which contains some known or unknown quantity of information referred to as a value. The variable name is the usual way to reference the stored value, in addition to referring to the variable itself, depending on the context. This separation of name and content allows the name to be used independently of the exact information it represents. The identifier in computer source code can be bound to a value during run time, and the value of the variable may therefore change during the course of program execution.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "Variable";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::VirtualMachine(string text)
{
	string model = "llama3";
	string definition = "An emulation of a computer system. Virtual machines are based on computer architectures and attempt to provide the same functionality as a physical computer. Their implementations may involve specialized hardware, software, or a combination of both.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "VirtualMachine";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::VModel(string text)
{
	string model = "llama3";
	string definition = "A software development process that may be considered an extension of the waterfall model, and is an example of the more general V-model. Instead of moving down in a linear way, the process steps are bent upwards after the coding phase, to form the typical V shape. The V-Model demonstrates the relationships between each phase of the development life cycle and its associated phase of testing. The horizontal and vertical axes represent time or project completeness (left-to-right) and level of abstraction (coarsest-grain abstraction uppermost), respectively.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "VModel";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::WaterfallModel(string text)
{
	string model = "llama3";
	string definition = "A breakdown of project activities into linear sequential phases, where each phase depends on the deliverables of the previous one and corresponds to a specialisation of tasks. The approach is typical for certain areas of engineering design. In software development, it tends to be among the less iterative and flexible approaches, as progress flows in largely one direction (downwards like a waterfall) through the phases of conception, initiation, analysis, design, construction, testing, deployment and maintenance.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "WaterfallModel";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::WaveformAudioFileFormat(string text)
{
	string model = "llama3";
	string definition = "An audio file format standard, developed by Microsoft and IBM, for storing an audio bitstream on PCs. It is an application of the Resource Interchange File Format (RIFF) bitstream format method for storing data in chunks and thus is also close to the 8SVX and the AIFF format used on Amiga and Macintosh computers, respectively. It is the main format used on Microsoft Windows systems for raw and typically uncompressed audio. The usual bitstream encoding is the linear pulse-code modulation (LPCM) format.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "WaveformAudioFileFormat";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::WebCrawler(string text)
{
	string model = "llama3";
	string definition = "An Internet bot that systematically browses the World Wide Web, typically for the purpose of Web indexing (web spidering).";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "WebCrawler";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::WiFi(string text)
{
	string model = "llama3";
	string definition = "A family of wireless networking technologies, based on the IEEE 802.11 family of standards, which are commonly used for local area networking of devices and Internet access. Wi‑Fi is a trademark of the non-profit Wi-Fi Alliance, which restricts the use of the term Wi-Fi Certified to products that successfully complete interoperability certification testing.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "WiFi";
		}
	}
	return nullptr;
}

string _ComputerScience::Terms::XHTML(string text)
{
	string model = "llama3";
	string definition = "Part of the family of XML markup languages.It mirrors or extends versions of the widely used HyperText Markup Language(HTML), the language in which web pages are formulated.";
	string prompt = "Check if the following text matches this computer science definition, limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return "XHTML";
		}
	}
	return nullptr;
}
