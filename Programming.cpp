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
#include "Computers.hpp"
#include "Programming.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

bool _Programming::Terms::AbstractClass(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A class that cannot be directly constructed, one that can be constructed only through construction of some of its subclasses.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::AbstractType(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A type in a nominative type system that cannot be instantiated.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::ActualArgument(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A value, or reference to a value, passed to a function.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::App(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "An application that executes on a small, handheld device.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Application(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A program or integrated suite of programs that has a defined function.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Argument(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A value, or reference to a value, passed to a function; an actual argument.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Array(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "An ordered sequence of same-typed values whose elements are fast to access by their numerical index in the array.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Boolean(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A data type for yes or no, true or false values.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Class(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A set of objects having the same behavior (but typically differing in state), or a template defining such a set.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Compiler(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A computer program which transforms source code into object code.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Constant(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "An identifier that is bound to an invariant value.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Constructor(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A class method (in object-oriented programming) that creates and initializes each instance of an object.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::DataType(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A classification or category of various types of data, that states the possible values that can be taken, how they are stored, and what range of operations are allowed on them.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Destructor(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "In object-oriented programming, the command sequence that is launched when the execution of an object is finished.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Dump(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A formatted listing of the contents of program storage, especially when produced automatically by a failing program";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Enumeration(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A data type whose values are a set of mutually exclusive named constants.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Exception(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "An interruption in normal processing, especially as caused by an error condition.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::FloatingPoint(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A method of representing real numbers as a pair of integers (the mantissa and characteristic)";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::FlowChart(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A schematic representation of the logic that defines the flow of control through a program";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::FormalArgument(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A parameter in a function definition.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Function(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A routine that receives zero or more arguments and may return a result.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::FunctionalProgramming(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A programming paradigm that treats computation as the evaluation of mathematical functions,  avoids state and mutable data, and makes it easy to construct functions as if they were data objects.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Goto(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A statement (in source code) that transfers control unconditionally to another part of a program";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Heap(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "An area of memory reserved for dynamically allocated data objects, contrasted to the stack.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Identifier(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A formal name used in source code to refer to a variable, function, procedure, package, etc.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Integer(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A data type for integer values.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Interpreter(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A program which executes another program written in a programming language other than machine code.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Linker(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A computer program that takes one or more objects generated by compilers and assembles them into a single executable program.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::LogicProgramming(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A style or paradigm of computer programming exemplified by the language Prolog.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::MachineCode(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "System of instructions and data directly understandable by a computer central processing unit.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Method(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "In object-oriented languages, a subroutine or function belonging to a class or object.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Module(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A program that is linked with others to form a functioning application; one method of implementing a subroutine";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Object(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "An instance of a class";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::ObjectOriented(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "Using entities called objects that can process data and exchange messages with other objects.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Paradigm(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A fundamental style of computer programming to which the design of a programming language typically has to cater, such as imperative programming, declarative programming, or, on a finer level, functional programming, logic programming or object-oriented programming.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Parameter(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A name in a function or subroutine definition that is replaced by, or bound to, the corresponding actual argument when the function or subroutine is called.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Procedure(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A subroutine or function coded to perform a specific task.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Program(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A software application, or a collection of software applications, designed to perform a specific task.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Real(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "a number containing a decimal point, e.g. the number pi is a real number with a value of approximately 3.14159268";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::RunTime(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "The time during which a program is executing, as oppose to the compile time.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::SourceCode(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "Human-readable instructions in a programming language, to be transformed into machine instructions by a compiler, interpreter, assembler or other such system.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Stack(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "The portion of the computer memory used to keep track of called procedures or call instructions.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::String(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A data type for a sequence of characters such as letters of English alphabet.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::SubClass(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "In object-oriented programming, an object class derived from another class (its superclass) from which it inherits a base set of properties and methods.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::SubProgram(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A program contained within a larger program.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::SubRoutine(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A section of code that implements a task. While it may be used at more than one point in a program, it need not be.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::SuperClass(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A class that passes attributes and methods down the hierarchy to subclasses.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::TypeDefinition(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A tag attached to variables and values used in determining what values may be assigned to what variables.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}

bool _Programming::Terms::Variable(string text)
{
	// Get the definition for the bias
	// 1. bias Additive
	// 2. bias Additive Average
	string model = "llama3";
	string definition = "A named memory location in which a program can store intermediate results and from which it can read them.";
	string prompt = "Check if the following text matches the following programming term and limit the response to yes or no: " + definition + " " + text;
	string response = _LLM::OllamaAPI(model, prompt, "NULL");
	response = _Parsers::LLM::LLama3Parse(response);
	string* words = _Utilities::String2Words(response);
	words = _Utilities::RemovePunctuationArr(words);
	words = _Utilities::ArrayOfStringsToLowercase(words);

	for (int x = 0; x < sizeof(words); x++)
	{
		if (words[x] == "yes")
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	return false;
}