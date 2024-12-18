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
#include "Trigonometry.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

string _Trigonometry::Terms::A_BiForm(string text)
{
    string model = "llama3";
    string definition = "The form of a complex number where a and b are real numbers, and i = -1.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "A+Bi Form";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Abscissa(string text)
{
    string model = "llama3";
    string definition = "The horizontal or x-coordinate of a two-dimensional coordinate system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Abscissa";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::AbsoluteValue(string text)
{
    string model = "llama3";
    string definition = "The distance from 0 to a number n on a number line. The absolute value of a number n is nidicated by n.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absolute Value";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::AbsoluteValueEquation(string text)
{
    string model = "llama3";
    string definition = "An equation containing the absolute value of a variable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absolute Value Equation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::AbsoluteValueFunction(string text)
{
    string model = "llama3";
    string definition = "A function containing the absolute function of a variable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absolute Value Function";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::AbsoluteValueInequality(string text)
{
    string model = "llama3";
    string definition = "An inequality containing the absolute value of a variable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Absolute Value Inequality";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::AdjacentAngles(string text)
{
    string model = "llama3";
    string definition = "Two coplanar angles that share a common vertex and a common side but have no common interior points.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Adjacent Angles";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::AdjacentSides(string text)
{
    string model = "llama3";
    string definition = "Two sides of any polygon that share a common vertex.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Adjacent Sides";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::AlgebraicEquation(string text)
{
    string model = "llama3";
    string definition = "A mathematical statement that is written using one or more variables and constants which contains an equal sign.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Algebraic Equation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::AlgebraicExpression(string text)
{
    string model = "llama3";
    string definition = "A mathematical phrase that is written using one or more variables and constants, but which does not contain a relation symbol ( <, >, <=, >=, =, !=)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Algebraic Expression";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::AlgebraicRepresentation(string text)
{
    string model = "llama3";
    string definition = "The use of an equation or algebraic expression to model a mathematical relationship.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Algebraic Representation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Algorithm(string text)
{
    string model = "llama3";
    string definition = "a defined series of steps for carrying out a computation or process.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::AmbiguousCase(string text)
{
    string model = "llama3";
    string definition = "The case where the number of triangles found can vary from zero to two, when given two sides of a triangle and the measure of the angle opposite one of the sides.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ambiguous Case";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Amplitude(string text)
{
    string model = "llama3";
    string definition = "The magnitude of the oscillation of a sinusoidal function; the absolute value of one- half of the difference between the maximum and minimum function values of a sinusoidal function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::Analyze(string text)
{
    string model = "llama3";
    string definition = "to examine methodically by separating into parts and studying their relationships.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Analyze";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Angle(string text)
{
    string model = "llama3";
    string definition = "A geometric figure formed by two rays that have a common endpoint.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Angle";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::AngleInStandardPosition(string text)
{
    string model = "llama3";
    string definition = "An angle with a vertex at the origin; the initial ray is on the positive x-axis, and the terminal side falls in one of the four quadrants or on one of the axes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Angle In Standard Position";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::AngleOfDepression(string text)
{
    string model = "llama3";
    string definition = "The angle formed by the horizontal and the line of sight when looking downward.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Angle Of Depression";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::AngleOfElevation(string text)
{
    string model = "llama3";
    string definition = "The angle formed by the horizontal and the line of sight when looking upward.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Angle Of Elevation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Antilogarithm(string text)
{
    string model = "llama3";
    string definition = "The inverse function of a logarithm; to find a number given its logarithm.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Antilogarithm";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ApproximateValue(string text)
{
    string model = "llama3";
    string definition = "A value for some quantity, accurate to a specified degree.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Approximate Value";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ArcLength(string text)
{
    string model = "llama3";
    string definition = "The distance on the circumference of a circle from one endpoint of an arc to the other endpoint, measured along the arc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::Arccosine(string text)
{
    string model = "llama3";
    string definition = "The inverse of the cosine function, denoted by cos^-1x or arccosx.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arccosine";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Arcsine(string text)
{
    string model = "llama3";
    string definition = "The inverse of the sine function, denoted by sin^-1(x) or arcsin(x).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arcsine";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Arctangent(string text)
{
    string model = "llama3";
    string definition = "The inverse of the tangent function, denoted by arc^-1(x) or arctan(x).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arctangent";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Argument(string text)
{
    string model = "llama3";
    string definition = "The communication, in verbal or written form, of the reasoning process that leads to a valid conclusion.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Argument";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ArithmeticSequence(string text)
{
    string model = "llama3";
    string definition = "A set of numbers in which the common difference between each term and the preceding term is constant.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arithmetic Sequence";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ArithmeticSeries(string text)
{
    string model = "llama3";
    string definition = "The indicated sum of an arithmetic sequence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Arithmetic Series";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Asymptote(string text)
{
    string model = "llama3";
    string definition = "A straight line or curve that is the limiting value of a curve.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Asymptote";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::BaseOfALogarithmicFunction(string text)
{
    string model = "llama3";
    string definition = "The number b in the logarithmic function logb(x) = y where b >0 and b != 1 if and only if b^y = x.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Base Of A Logarithmic Function";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::BaseOfAnExponentialFunction(string text)
{
    string model = "llama3";
    string definition = "The number b in the exponential function y = ab^x, where a != 0, b > 0, and b != 1.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Base Of An Exponential Function";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::BernouliExperiments(string text)
{
    string model = "llama3";
    string definition = "Probability experiments that can be described in terms of just two outcomes; an experiment that meet the following conditions: the experiment consists of n trials whose outcomes are either successes or failures, and the trials are identical and independent with a constant probability of success, p, and a constant probability of failure, q = 1 - p.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bernouli Experiments";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::BiasedSample(string text)
{
    string model = "llama3";
    string definition = "A sample having a distribution that is determined not only by the population from which it is drawn, but also by some property that influences the distribution of the sample.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Biased Sample";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Bimodal(string text)
{
    string model = "llama3";
    string definition = "A data set that has two modes.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bimodal";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::BinomialExpansion(string text)
{
    string model = "llama3";
    string definition = "The expansion of some power of a binomial expression.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Binomial Expansion";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::BinomialProbabilityFormula(string text)
{
    string model = "llama3";
    string definition = "A formula for determining the probability of a Bernoulli experiment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Binomial Probability Formula";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::BinomialTheorem(string text)
{
    string model = "llama3";
    string definition = "A method for expanding a binomial expression raised to some power.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Binomial Theorem";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::BivariateData(string text)
{
    string model = "llama3";
    string definition = "Data involving two variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Bivariate Data";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::CenterRadiusEquationOfACircle(string text)
{
    string model = "llama3";
    string definition = "The form of the equation of a circle with center (h, k) and radius r given by the formula (x - h)^2 + (y - k)^2 = r^2";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Center Radius Equation Of A Circle";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::CentralAngle(string text)
{
    string model = "llama3";
    string definition = "An angle in a circle with vertex at the center of the circle and sides that are radii.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Central Angle";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Circle(string text)
{
    string model = "llama3";
    string definition = "The set of all points (or locus of points) in a plane that are a fixed distance, (called the radius) from a fixed point, (called the center).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Circle";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::CircularFunction(string text)
{
    string model = "llama3";
    string definition = "A function that relates the coordinates of a point on a circle to the distance from the point to the origin. These functions are called circular functions because the coordinates of a point on a circle are related to the line values of trigonometric functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Circular Function";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Coefficient(string text)
{
    string model = "llama3";
    string definition = "The numerical factor of a term in a polynomial.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coefficient";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Cofunction(string text)
{
    string model = "llama3";
    string definition = "The trigonometric function based on the complement of an angle. The value of a trigonometric function of an angle equals the value of the cofunction of the complement of the angle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cofunction";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Combination(string text)
{
    string model = "llama3";
    string definition = "An arrangement of objects in which order in not important; a collection of objects.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Combination";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::CommonDifference(string text)
{
    string model = "llama3";
    string definition = "The difference between any two successive terms of an arithmetic sequence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Common Difference";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::CommonFactor(string text)
{
    string model = "llama3";
    string definition = "A number, polynomial, or quantity that divides two or more numbers or algebraic expressions evenly.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Common Factor";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::CommonLogarithm(string text)
{
    string model = "llama3";
    string definition = "A logarithm to base 10. The common logarithm of x is written log(x). For example, log 100 is 2 since 10^2 = 100.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Common Logarithm";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::CommonRatio(string text)
{
    string model = "llama3";
    string definition = "The ratio of any two successive terms of a geometric sequence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Common Ratio";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::CompletingTheSquare(string text)
{
    string model = "llama3";
    string definition = "A process used to change an expression of the form ax2 +bx +c into a perfect square binomial by adding a suitable constant.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Completing The Square";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ComplexFraction(string text)
{
    string model = "llama3";
    string definition = "A fraction with another fraction in its numerator, denominator or both.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Complex Fraction";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ComplexNumber(string text)
{
    string model = "llama3";
    string definition = "Any number that can be expressed in the form a + bi, where a and b are real numbers and i is the imaginary unit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Complex Number";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::CompositionOfFunctions(string text)
{
    string model = "llama3";
    string definition = "A way of combining functions in which the output of one function is used as the input of another function; the formation of a new function h from functions f and g using the rule h(x) = g o f(x) = g for all x in the domain of f for which f(x) is in the domani of g.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Composition Of Functions";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::CompoundEvent(string text)
{
    string model = "llama3";
    string definition = "An event that is derived from two or more simple events.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Compound Event";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::CompoundInterest(string text)
{
    string model = "llama3";
    string definition = "A method of calculating interest in which interest earned is added to the principal and thereafter also earns interest.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Compound Interest";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Conjecture(string text)
{
    string model = "llama3";
    string definition = "An educated guess; an unproven hypothesis based on observation, experimentation, data collection, etc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Conjecture";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Conjugate(string text)
{
    string model = "llama3";
    string definition = "Two binomials whose first terms are equal and last terms are opposites.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::ConstantFunction(string text)
{
    string model = "llama3";
    string definition = "A function where each element of the domain is mapped to the same element in the range. The graph of a constant function is a horizontal line.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Constant Function";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ControlledExperiment(string text)
{
    string model = "llama3";
    string definition = "An experiment which compares the results obtained from an experimental sample against a control sample.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Controlled Experiment";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::CorrelationCoefficient(string text)
{
    string model = "llama3";
    string definition = "A number, r, between -1 and 1 that indicates the strength and direction of the linear relationship between two sets of numbers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Correlation Coefficient";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Cosecant(string text)
{
    string model = "llama3";
    string definition = "For a given acute angle? in a right triangle, the ratio of the length of the hypotenuse of the triangle to the side opposite the acute angle. Also the reciprocal of the sine ratio of the given angle, written as csc. See also circular function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cosecant";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Cosine(string text)
{
    string model = "llama3";
    string definition = "For a given acute angle theta in a right triangle, the ratio of the length of the side adjacent to an acute angle to the length of the hypotenuse. The cosine of an angle is written as COS. See also circular function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cosine";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Cotangent(string text)
{
    string model = "llama3";
    string definition = "For a given acute angle theta in a right triangle, the ratio of the side adjacent an acute angle to the side opposite the acute angle. The cotangent is the reciprocal of the tangent ratio of the given angle, written as cot(theta). See also circular function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Cotangent";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::CoterminalAngles(string text)
{
    string model = "llama3";
    string definition = "Angles in standard positions that share the same terminal side; formed by different rotations that have the same initial and terminal sides.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Coterminal Angles";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Counterexample(string text)
{
    string model = "llama3";
    string definition = "An example that disproves a general statement.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Counterexample";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::DegreeMeasure(string text)
{
    string model = "llama3";
    string definition = "A unit of angle measure equal to 1/360 of a complete revolution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Degree Measure";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::DegreeOfAMonomial(string text)
{
    string model = "llama3";
    string definition = "The sum of the exponents of the variables in the monomial.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Degree Of A Monomial";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::DegreeOfAPolynomial(string text)
{
    string model = "llama3";
    string definition = "The highest degree of any monomial term in the polynomial.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Degree Of A Polynomial";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::DifferenceOfTwoPerfectSquares(string text)
{
    string model = "llama3";
    string definition = "A binomial of the form a^2 - b^2 which can be factored into (a - b)(a + b).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Difference Of Two Perfect Squares";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::DirectVariation(string text)
{
    string model = "llama3";
    string definition = "A relationship in which the ratio of two variables is constant. A direct variation has an equation in the form y = kx, where x and y are variables and k is the constant of variation";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Direct Variation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Discriminant(string text)
{
    string model = "llama3";
    string definition = "The expression b^2 - 4ac where a, b, and c are the coefficients of the quadratic equation ax^2 + bx + c = 0. The discriminant is used to determine the nature of the roots of the quadratic equation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Discriminant";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Domain(string text)
{
    string model = "llama3";
    string definition = "The set of values of the independent variable for which a given function is defined; the set of first coordinates in the ordered pairs of a relation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::DoubleAndHalfAngleFormulasForTrigonometricFunctions(string text)
{
    string model = "llama3";
    string definition = "Formulas used to determine trigonometric values for double or half of a given angle. sin(2A) = 2sin(A)cos(A). cos(2A) = cos^2(A)-sin^2(A). cos(2A) = 2cos^2(A) - 1. cos(2A) = 1 - 2Sin^2(A). tan(2A) = 2tan(A)/1-tan^2(A). sin((1/2)*A) = +- sqrt((1-cos(A)/2)). cos((1/2)*A) = +- sqrt((1 + cos(A)/2)). tan((1/2)A) = +- sqrt((1 - cos(A)/1 + cos(A)).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Double And Half Angle Formulas For Trigonometric Functions";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::DoubleRoot(string text)
{
    string model = "llama3";
    string definition = "A root of an equation that occurs twice. A value r is a double root of an equation f(x) = 0 if (x - r)^2 is the factor of f(x).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Double Root";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::E(string text)
{
    string model = "llama3";
    string definition = "The base of the natural logarithm; a number commonly encountered when working with exponential functions to model growth, decay, continuously compounded interest; e ~= 2.7182818284...";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "E";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Equation(string text)
{
    string model = "llama3";
    string definition = "A mathematical sentence stating that two expressions are equal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Equation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::EquivalentForms(string text)
{
    string model = "llama3";
    string definition = "Different ways of writing numbers or expressions that have equal values.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Equivalent Forms";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ExactAnswer(string text)
{
    string model = "llama3";
    string definition = "The solution to an equation that has not been rounded.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exact Answer";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ExactValue(string text)
{
    string model = "llama3";
    string definition = "The value of an expression that has not been rounded.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exact Value";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ExpandABinomial(string text)
{
    string model = "llama3";
    string definition = "The process of creating a polynomial by raising a binomial to an integral power.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Expand A Binomial";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ExperimentalProbability(string text)
{
    string model = "llama3";
    string definition = "A probability calculated by performing an experiment, rather than by analyzing a situation mathematically; the ratio of the number of times the event occurs to the total number of trials or times the activity is performed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Experimental Probability";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ExplicitFormula(string text)
{
    string model = "llama3";
    string definition = "For a sequence, a1, a2, a3, ... an, ..., a formula that is used to generate the nth term of a sequence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Explicit Formula";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ExponentialForm(string text)
{
    string model = "llama3";
    string definition = "An expression or equation containing exponents.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exponential Form";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ExponentialFunction(string text)
{
    string model = "llama3";
    string definition = "A function with a variable in the exponent; an equation in the form y = ab^x, where a != 0 and b > 0, b != 1.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Exponential Function";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Factor(string text)
{
    string model = "llama3";
    string definition = "(noun) A whole number that is a divisor of another number; an algebraic expression that is a divisor of another algebraic expression.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Factor";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::FactorVerb(string text)
{
    string model = "llama3";
    string definition = "(verb) Find the number of algegbraic expressions that give an indicated product.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Factor (verb)";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::FractionalExponent(string text)
{
    string model = "llama3";
    string definition = "An exponent that is a rational number.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Fractional Exponent";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::FrequencyTable(string text)
{
    string model = "llama3";
    string definition = "A table that shows how often each item, number, or range of numbers occurs in a set of data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Frequency Table";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Function(string text)
{
    string model = "llama3";
    string definition = "A rule that assigns to each number x in the function\'s domain a unique number f(x).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::GeometricRepresentationOfTheCircularFunctions(string text)
{
    string model = "llama3";
    string definition = "The representation of circular functions on a circle of unit radius. The trigonometric functions are called circular functions because their values are related to the lengths of specific line segments associated with a circle of unit radius.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geometric Representation Of The Circular Functions";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::GeometricSequence(string text)
{
    string model = "llama3";
    string definition = "A set of terms in which each term is formed by multiplying the preceding term by a nonzero constant.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geometric Sequence";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::GeometricSeries(string text)
{
    string model = "llama3";
    string definition = "The indicated sum of a geometric sequence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Geometric Series";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Geometry(string text)
{
    string model = "llama3";
    string definition = "Branch of mathematics that deals with the properties, measurement, and relationships of points, lines, angles, surfaces, and solids.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::GraphicalRepresentation(string text)
{
    string model = "llama3";
    string definition = "A graph or graphs used to model a mathematical relationship.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Graphical Representation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::GraphicalSolutionOfASystemOfEquations(string text)
{
    string model = "llama3";
    string definition = "The set of points in the plane whose coordinates are solutions to a system of equations.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Graphical Solution Of A System Of Equations";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::GreatestCommonFactor(string text)
{
    string model = "llama3";
    string definition = "The greatest number or expression that is a factor of two or more numbers or expressions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Greatest Common Factor";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::GrowthFactor(string text)
{
    string model = "llama3";
    string definition = "The base of an exponential function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Growth Factor";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::HalfLife(string text)
{
    string model = "llama3";
    string definition = "The time needed for an amount of a substance to decrease by one-half.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::HorizontalLineTest(string text)
{
    string model = "llama3";
    string definition = "A test using any horizontal line to determine whether or not a function is one-to-one. A function f is one-to-one if and only if no horizontal line intersects the graph of f more than once.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Horizontal Line Test";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::I(string text)
{
    string model = "llama3";
    string definition = "The symbol representing the basic unit of imaginary numbers, i = sqrt(-1).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "I";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Identities(string text)
{
    string model = "llama3";
    string definition = "Equations that are true for all values of the variables they contain.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Identities";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Image(string text)
{
    string model = "llama3";
    string definition = "The resulting point or set of points under a given transformation; in any function f, the image of x is the function value f(x) corresponding to x.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Image";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ImaginaryNumber(string text)
{
    string model = "llama3";
    string definition = "A number in the form bi, where b is a non-zero real number and i is the imaginary unit.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Imaginary Number";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::IndexOfARadical(string text)
{
    string model = "llama3";
    string definition = "The letter n in the expression nsqrt(k).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Index Of A Radical";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::InductiveReasoning(string text)
{
    string model = "llama3";
    string definition = "The process of observing data, recognizing patterns and making generalizations about those patterns.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inductive Reasoning";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Interpolate(string text)
{
    string model = "llama3";
    string definition = "The process of using a given data set to estimate the value of a function or measurement between the values already known.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Interpolate";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::InterquartileRange(string text)
{
    string model = "llama3";
    string definition = "The difference between the first and third quartiles; a measure of variability resistant to outliers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Interquartile Range";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::InverseFunction(string text)
{
    string model = "llama3";
    string definition = "If the inverse of a function is also a function it is then an inverse function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inverse Function";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::InverseOfAFunction(string text)
{
    string model = "llama3";
    string definition = "The relation formed when the independent variable is exchanged with the dependent variable in a given relation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inverse Of A Function";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::InverseTrigonometricFunctions(string text)
{
    string model = "llama3";
    string definition = "Given the value of a trigonometric function for an angle theta, the inverse trigonometric function outputs the measure of angle theta. The inverses of the six basic trigonometric functions are written as sin^-1, cos^-1, tan^-1, csc^-1, sec^-1, and cot^-1.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inverse Trigonometric Functions";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::InverseVariation(string text)
{
    string model = "llama3";
    string definition = "A relationship in which the product of two variables is constant. An inverse variation has an equation in the form y = (k/x), where x and y are variables and k is a constant.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Inverse Variation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::IrrationalNumber(string text)
{
    string model = "llama3";
    string definition = "A number that cannot be expressed as the ratio of two integers. An irrational number, in decimal form, is non-repeating and non-terminating.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Irrational Number";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::LawOfCosines(string text)
{
    string model = "llama3";
    string definition = "In any triangle, the square of one side is equal to the sum of the squares of the other two sides diminished by the product of those two sides and the cosine of the included angle. a^2 = b^2 + c^2 - 2bc*cos(A). b^2 = a^2 + c^2 - 2ac*cos(B). c^2 = a^2 + b^2 - 2ab*cos(C).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Law Of Cosines";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::LawOfSines(string text)
{
    string model = "llama3";
    string definition = "In any triangle the ratio of one side to the sine of its opposite angle is equal to the ratio of any other side and the sine of its opposite angle. (s/sin(A)) = (b/sin(B)) = (c/sin(C))";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Law Of Sines";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::LawsOfExponents(string text)
{
    string model = "llama3";
    string definition = "Rules involving operations on expressions with like bases. Multiplication law: x^a * x^b = x^a+b. Division law: ((x^a)/(x^a-b), x != 0. Power law: (x^a)^b = x^a*b.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Laws Of Exponents";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::LawsOfLogarithms(string text)
{
    string model = "llama3";
    string definition = "The rules of logarithmic expressions having like bases. Product rule: logb(AB) = logb(A) + logb(B), b > 0 and b != 1. Quotient rule: logb(A/R) = logb(A)-logb(B), b > 0 and b != 1. Power rule: logb(A)^2 = B*logb(A), b > 0 and b != 1.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Laws Of Logarithms";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::LeastSquaresRegressionLine(string text)
{
    string model = "llama3";
    string definition = "The line that fits data points such that the sum of the squares of the vertical distances between the predicted values on the line and the actual values is minimized.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Least Squares Regression Line";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::LinearEquation(string text)
{
    string model = "llama3";
    string definition = "A first degree equation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Linear Equation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::LinearRegression(string text)
{
    string model = "llama3";
    string definition = "A line constructed using the least-squares method.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Linear Regression";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::LinearSystem(string text)
{
    string model = "llama3";
    string definition = "A set of two or more linear equations with common variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Linear System";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Logarithm(string text)
{
    string model = "llama3";
    string definition = "The exponent, n, to which the base b must be raised to equal a, written as logb(a) = n. log2(8) = 3 since 2^3 = 8.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::LogarithmicForm(string text)
{
    string model = "llama3";
    string definition = "The expression or an equation containing logarithms.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Logarithmic Form";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Mean(string text)
{
    string model = "llama3";
    string definition = "A measure of central tendency denoted by x , read \"x bar\", that is calculated by adding the data values and then dividing the sum by the number of values. Also known as the arithmetic mean or arithmetic average.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::MeasureOfCentralAngle(string text)
{
    string model = "llama3";
    string definition = "The measure equal to the degree measure or radian measure of the arc intercepted by the angle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Measure Of Central Angle";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::MeasureOfCentralTendency(string text)
{
    string model = "llama3";
    string definition = "A summary statistic that indicates the typical value or center of an organized data set. The three most common measures of central tendency are the mean, median, and mode.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::MeasuresOfDispersion(string text)
{
    string model = "llama3";
    string definition = "An indication of the spread, or variation, of data values about the mean. Some common measures of dispersion are range, quartiles, interquartile range, standard deviation and variance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Measures Of Dispersion";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Median(string text)
{
    string model = "llama3";
    string definition = "A measure of central tendency that is, or indicates, the middle of a data set when the data values are arranged in ascending or descending order. If there is no middle number, the median is the average of the two middle numbers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::Minute(string text)
{
    string model = "llama3";
    string definition = "A unit of degree measure equal to 1/60 of a degree.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Minute";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Mode(string text)
{
    string model = "llama3";
    string definition = "A measure of central tendency that is given by the data value(s) that occur(s) most frequently in the data set.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::MultipleRepresentations(string text)
{
    string model = "llama3";
    string definition = "Various ways, i.e., graphically, numerically, algebraically, geometrically, and verbally, to present, interpret, communicate, and connect mathematical information and relationships.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Multiple Representations";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::NatureOfTheRoots(string text)
{
    string model = "llama3";
    string definition = "A classification of the roots of a quadratic equation, The discriminant, b^2 - 4ac, indicates the nature of the roots of a quadratic equation, ax^2 + bx + c = 0 where a, b, and c are rational numbers and a != 0. whether the roots are real or imaginary, rational or irrational, equal or unequal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nature Of The Roots";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::NegativeExponent(string text)
{
    string model = "llama3";
    string definition = "An exponent that is a negative number.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Negative Exponent";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::NormalCurve(string text)
{
    string model = "llama3";
    string definition = "The graph of a normal probability density function. This graph is bell-shaped and symmetric about the mean.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Normal Curve";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::NormalDistribution(string text)
{
    string model = "llama3";
    string definition = "A distribution of data that varies about the mean in such a way that the graph of its probability density function is a normal curve. The height of the curve is specified by the mean and standard deviation of the distribution.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Normal Distribution";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::NthRoot(string text)
{
    string model = "llama3";
    string definition = "The solution of x^n = c when n is odd or the nonnegative solution of x^n = c. When n is even and nonnegative. For any real number c and any positive integer n, the nth root of c is denoted by either nsqrt(c) or c^(1/n).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::NthTerm(string text)
{
    string model = "llama3";
    string definition = "The final term of a finite sequence of elements a1, a2, a3, anth, or an arbitrary term of an infinite sequence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Nth Term";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::OneToOneFunction(string text)
{
    string model = "llama3";
    string definition = "A function where the inverse is also a function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "One To One Function";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::OntoFunction(string text)
{
    string model = "llama3";
    string definition = "A mapping, f:A -> B in which each element of set B is the image of at least one element in set A.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Onto Function";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::OppositeSideInARightTriangle(string text)
{
    string model = "llama3";
    string definition = "The side across from an angle. In a right triangle the hypotenuse is opposite the right angle and each leg is opposite one of the acute angles.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Opposite Side In A Right Triangle";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Ordinate(string text)
{
    string model = "llama3";
    string definition = "The vertical coordinate of a two-dimensional rectangular coordinate system; usually denoted by y.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Ordinate";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Outlier(string text)
{
    string model = "llama3";
    string definition = "A data value that is far removed from the body of the data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Outlier";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Parabola(string text)
{
    string model = "llama3";
    string definition = "The locus of points equidistant from a given point (called the focus) and a given line (called the directrix). A common form of an equation of a parabola with vertical line symmetry is y = ax^2 + bx + c, where a, b, and c are real numbers a != 0.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Parabola";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Parameter(string text)
{
    string model = "llama3";
    string definition = "A quantity or constant whose value varies with the circumstances of its application.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::Percentile(string text)
{
    string model = "llama3";
    string definition = "A score below which a certain percentage of the scores in a distribution fall.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Percentile";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::PeriodOfAFunction(string text)
{
    string model = "llama3";
    string definition = "The horizontal distance after which the graph of a function starts repeating itself. The smallest value of k in a function f for which there exists some constant k such that f(t) = f(t + k) for every number t in the domain of f.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Period Of A Function";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::PeriodicFunction(string text)
{
    string model = "llama3";
    string definition = "An oscillating function that repeats its values at regular intervals; a function f for which there exists some constant k such that f(t) = f(t + k) for every number t in the domain of f.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Periodic Function";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Permutation(string text)
{
    string model = "llama3";
    string definition = "An arrangement of objects in a specific order.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Permutation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::PhaseShift(string text)
{
    string model = "llama3";
    string definition = "The horizontal translation of a periodic graph.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Phase Shift";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Pi(string text)
{
    string model = "llama3";
    string definition = "The irrational number equal to the length of the circumference of a circle divided by the length of its diameter.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pi";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::PolynomialExpression(string text)
{
    string model = "llama3";
    string definition = "A polynomial expression in terms of x";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Polynomial Expression";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::PowersOfI(string text)
{
    string model = "llama3";
    string definition = "The repetitive pattern when the imaginary unit, i, is raised to sequential powers. i^2 = -1, i^3 = -i, i^4 = 1. i^5 = i, i^6 = -1, i^7 = -i, etc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Powers Of I";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::PrincipalSquareRoot(string text)
{
    string model = "llama3";
    string definition = "The positive square root of a number.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Principal Square Root";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::PythagoreanIdentities(string text)
{
    string model = "llama3";
    string definition = "The trigonometric identities based on the Pythagorean Theorem. The identity and the identities derived from it. sin^2(x) + cos^2(x) = 1. 1 + tan^2(x) = sec^2(x). 1 + cot^2(x) = csc^2(x).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Pythagorean Identities";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::QuadrantalAngle(string text)
{
    string model = "llama3";
    string definition = "An angle in standard position whose terminal side falls on an axis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quadrantal Angle";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::QuadraticEquation(string text)
{
    string model = "llama3";
    string definition = "An equation that can be written in the form ax^2 + bx + c = 0, where a, b, and c, are real constants and a != 0.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quadratic Equation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::QuadraticFormula(string text)
{
    string model = "llama3";
    string definition = "The formula used to determine the roots of the quadratic equation ax^2 + bx + c = 0; x = ((-b +- sqrt(b^2-4ac))/(2*a))";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quadratic Formula";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::QuadraticInequality(string text)
{
    string model = "llama3";
    string definition = "A second degree inequality. 2x^2 - 5x - 3 >= 0.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quadratic Inequality";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Quartiles(string text)
{
    string model = "llama3";
    string definition = "Values that divide an ordered data set into fourths. The median, or second quartile Q2, divides the data into a lower half and an upper half; the first quartile Q1 is the median of the lower half; and the third quartile Q3 is the median of the upper half.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Quartiles";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Radian(string text)
{
    string model = "llama3";
    string definition = "An angle measure in which one full rotation is 2pi radians. One radian is the measure of an arc or the measure of the central angle than intercepts that arc such that the arc\'s length is the same as the radius of that circle. pi radians = 180 degrees.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radian";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RadianMeasure(string text)
{
    string model = "llama3";
    string definition = "For an angle in standard position, the length of the arc along the unit circle from the point (1,0) on the initial side to the point P where the terminal side intersects the unit circle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radian Measure";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Radical(string text)
{
    string model = "llama3";
    string definition = "The root of a quantity as indicated by the radical sign.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::RadicalEquation(string text)
{
    string model = "llama3";
    string definition = "An equation that contains at least one term under a radical sign.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radical Equation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RadicalExpression(string text)
{
    string model = "llama3";
    string definition = "An expression that contains at least one term under a radical sign.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radical Expression";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RadicalForm(string text)
{
    string model = "llama3";
    string definition = "The use of a radical sign to express a number with a fractional exponent.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radical Form";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Radicand(string text)
{
    string model = "llama3";
    string definition = "The quantity under a radical sign; a number or expression from which a root is extracted.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Radicand";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RandomSample(string text)
{
    string model = "llama3";
    string definition = "A sample in which all members of the population and all groups of a given size have an equal chance of being selected for the sample.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Random Sample";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RangeOfAFunction(string text)
{
    string model = "llama3";
    string definition = "The set of values of the dependent variable of a given function; the set of second coordinates in the ordered pairs of a function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Range Of A Function";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RationalCoefficient(string text)
{
    string model = "llama3";
    string definition = "A coefficient that is a rational number.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rational Coefficient";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RationalEquation(string text)
{
    string model = "llama3";
    string definition = "An equation that contains at least one rational expression.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rational Equation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RationalExpression(string text)
{
    string model = "llama3";
    string definition = "The quotient of two polynomials in the form A/B, where A and B are polynomials and B != 0.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rational Expression";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RationalInequality(string text)
{
    string model = "llama3";
    string definition = "An inequality which contains a rational expression.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rational Inequality";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RationalNumber(string text)
{
    string model = "llama3";
    string definition = "Any number that can be expressed as a ratio in the form a/b where a and b are integers and b != 0. A rational number is either a terminating or repeating decimal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rational Number";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RationalizeADenominator(string text)
{
    string model = "llama3";
    string definition = "The process of changing the irrational denominator of a fraction to a rational expression.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rationalize A Denominator";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ReciprocalTrigonometricFunctions(string text)
{
    string model = "llama3";
    string definition = "The six functions: sin(x) = 1/csc(x), cos(x) = 1 / sec(x), tan(x) = 1 / cot(x), cot(x) = 1 / tan(x), sec(x) = 1 / cos(x), csc(x) = 1 / sin(x).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reciprocal Trigonometric Functions";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RectangularCoordinates(string text)
{
    string model = "llama3";
    string definition = "An ordered pair of real numbers that establishes the location of a point in a coordinate plane using the distances from two perpendicular intersecting lines called the coordinate axes. (See also Cartesian coordinates.)";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Rectangular Coordinates";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RecursiveRule(string text)
{
    string model = "llama3";
    string definition = "For a sequence a1, a2, a3, ... an, ..., a formula that requires the computation of all previous terms in order to find the value of an.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Recursive Rule";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ReferenceAngle(string text)
{
    string model = "llama3";
    string definition = "The positive acute angle formed by the x-axis and the terminal side of an angle theta in standard position.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Reference Angle";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RegressionModel(string text)
{
    string model = "llama3";
    string definition = "A function (e.g., linear, exponential, power, logarithmic) that fits a set of paired data. The model may enable other values of the dependent variable to be predicted.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Regression Model";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Relation(string text)
{
    string model = "llama3";
    string definition = "A correspondence between two sets; a set of ordered pairs";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Relation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ReplacementSet(string text)
{
    string model = "llama3";
    string definition = "The set whose members can be substituted for the variable(s) in an open sentence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Replacement Set";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RestrictedDomain(string text)
{
    string model = "llama3";
    string definition = "The domain resulting from a restriction placed on a function, based on the context of the problem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Restricted Domain";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Resultant(string text)
{
    string model = "llama3";
    string definition = "The vector that is produced from the addition of two or more other vectors.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Resultant";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::RootOfAnEquation(string text)
{
    string model = "llama3";
    string definition = "A solution to an equation of the form f(x) = 0.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Root Of An Equation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::SampleSpace(string text)
{
    string model = "llama3";
    string definition = "The set of all possible outcomes for a given event.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sample Space";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ScatterPlot(string text)
{
    string model = "llama3";
    string definition = "A graphical display of statistical data plotted as points on a coordinate plane to show the correlation between two quantities.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Scatter Plot";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::SecantOfAnAngle(string text)
{
    string model = "llama3";
    string definition = "For a given acute angle theta in a right triangle, sec(theta), is the ratio of the length of the hypotenuse to the length of the side adjacent to the acute angle theta, the reciprocal of the cosine ratio of the given angle. See also circular function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Secant Of An Angle";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::SectorOfACircle(string text)
{
    string model = "llama3";
    string definition = "A region bounded by an arc of the circle and the two radii to the endpoints of the arc.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sector Of A Circle";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::SigmaNotation(string text)
{
    string model = "llama3";
    string definition = "A shorthand way of writing a sum by using the Greek letter sigma.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sigma Notation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Sine(string text)
{
    string model = "llama3";
    string definition = "For a given acute angle theta in a right triangle, sin(theta), is the ratio of the length of the side opposite the acute angle theta to the length of the hypotenuse. See also circular function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sine";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Slope(string text)
{
    string model = "llama3";
    string definition = "The measure of the steepness of a line; the ratio of vertical change to horizontal change; if point P is (x1,y1) and point Q is (x2,y2) the slope of PQ is (delta*y/delta*x) = (y2 - y1/x2 - x1).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Slope";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::SolutionSet(string text)
{
    string model = "llama3";
    string definition = "Any and all value(s) of the variable(s) that satisfy an equation, inequality, system of equations, or system of inequalities.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Solution Set";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::StandardDeviationPopulation(string text)
{
    string model = "llama3";
    string definition = "A measure of variability. Standard deviation measures the average distance of a data element from the mean. If data is taken from the entire population, n when averaging the squared deviations. The following is the formula for population standard deviation: x = sqrt(sigma(xi - x)^2) / n).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Standard Deviation (population)";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::StandardDeviationSample(string text)
{
    string model = "llama3";
    string definition = "A measure of variability. Standard deviation measures the average distance of a data element from the mean. If data is taken from a sample instead of the entire population, divide by n - 1 when averaging the squared deviations. The following is the formula for sample standard deviation: x = sqrt(sigma(xi - x)^2) / n - 1).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Standard Deviation Sample";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::StandardPositionOfAnAngle(string text)
{
    string model = "llama3";
    string definition = "An angle in the coordinate plane with its vertex at the origin and its initial side on the positive x-axis.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Standard Position Of An Angle";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Subset(string text)
{
    string model = "llama3";
    string definition = "A set consisting of elements from a given set; it may be the empty set.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Subset";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::SubstitutionProperty(string text)
{
    string model = "llama3";
    string definition = "Any quantity can be replaced by an equal quantity.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Substitution Property";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::SubtractionPropertyOfEquality(string text)
{
    string model = "llama3";
    string definition = "If the same or equal quantities are subtracted from same or equal quantities, then the results are equal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Subtraction Property Of Equality";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::SumAndProductOfRootsOfAQuadraticEquation(string text)
{
    string model = "llama3";
    string definition = "For a quadratic equation ax^2 + bx + c = 0, a != 0, whose roots are x1 and x2, the sum of the roots is x1 + x2 = -(b/a), and the product of the roots os x1*x2 = c/a.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sum And Product Of Roots Of A Quadratic Equation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::SumOfAFiniteGeometricSeries(string text)
{
    string model = "llama3";
    string definition = "To determine the sum of the first n terms of a geometric series, Sn = (a1(1-r^n))/1 - r, r != 1, where a1 is the first term and r is the common ratio.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sum Of A Finite Geometric Series";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::SumOfAFiniteArithmeticSeries(string text)
{
    string model = "llama3";
    string definition = "To determine the sum of the first n terms of an arithmetic series. S = (n/2)(a1 + an), where a1 is the first term, and an is the nth term.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sum Of A Finite Arithmetic Series";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::SumOrDifferenceFormulasForTrigonometricFunctions(string text)
{
    string model = "llama3";
    string definition = "Formulas used to determine trigonometric values of the sum or difference of two angles: sin(A + B) = sin(A)cos(B) + cos(A)sin(B). cos(A + B) = cos(A)cos(B) - sin(A)sin(B). tan(A + B) = (tan(A)+tan(B))/(1 - tan(A)tan(B)). sin(A-B) = sin(A)cos(B)-cos(A)sin(B). tan(A-B = (tan(A)-tan(B)))/(1 + tan(A)tan(B))";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Sum Or Difference Formulas For Trigonometric Functions";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Survey(string text)
{
    string model = "llama3";
    string definition = "A gathering of facts or opinions by asking people questions through an interview or questionnaire.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Survey";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::SystemOfEquations(string text)
{
    string model = "llama3";
    string definition = "A set of two or more equations/inequalities. The solution set contains those values that satisfy all of the equations/inequalities in the system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "System Of Equations";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::TangentOfAnAngle(string text)
{
    string model = "llama3";
    string definition = "For a given acute angle theta in a right triangle, tan(theta) is the ratio of the length of the side opposite the acute angle theta to the length of the side adjacent to the angle theta.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Tangent Of An Angle";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::TerminalSideOfAnAngle(string text)
{
    string model = "llama3";
    string definition = "If <ABC is the directed angle from BA to BC then BC is the terminal side.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Terminal Side Of An Angle";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::TheoreticalProbability(string text)
{
    string model = "llama3";
    string definition = "The chances of events happening as determined by calculating results as they would occur under ideal circumstances.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Theoretical Probability";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Transformation(string text)
{
    string model = "llama3";
    string definition = "A one-to-one mapping of points in the plane to points in the plane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transformation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::TransformationsOfFunctionsAndRelations(string text)
{
    string model = "llama3";
    string definition = "A new function that results from the application of a transformation to a given function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Transformations Of Functions And Relations";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::TrigonometricEquation(string text)
{
    string model = "llama3";
    string definition = "An equation that uses variables expressed in terms of trigonometric functions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Trigonometric Equation";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::TrigonometricFunctions(string text)
{
    string model = "llama3";
    string definition = "The functions, sine, cosine, tangent, cotangent, secant and cosecant.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::Undefined(string text)
{
    string model = "llama3";
    string definition = "An expression in mathematics which does not have meaning and therefore is not assigned a value.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Undefined";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::UnitCircle(string text)
{
    string model = "llama3";
    string definition = "The circle of radius 1 with center at the origin.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Unit Circle";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Univariate(string text)
{
    string model = "llama3";
    string definition = "A set of data involving one variable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Univariate";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Variable(string text)
{
    string model = "llama3";
    string definition = "A quantity whose value can change or vary; in algebra, letters often represent variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
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

string _Trigonometry::Terms::VariancePopulation(string text)
{
    string model = "llama3";
    string definition = "A measure of variability given by the average of squared deviations. If data is taken from the entire popultation, divide by n when averaging the squared deviation. Population variance = (sigma(xi - x)^2)/n.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Variance Population";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::VarianceSample(string text)
{
    string model = "llama3";
    string definition = "A measure of variability given by the average of squared deviations. If data is taken from a sample instead of the entire population, divided by n -1 when averaging the squared deviations. Sample variance - (sigma(xi - x)^2)/(n - 1)).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Variance Sample";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::Vector(string text)
{
    string model = "llama3";
    string definition = "A quantity that has both magnitude and direction; represented geometrically by a directed line segment.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vector";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::VerticalLineTest(string text)
{
    string model = "llama3";
    string definition = "A vertical line drawn to determine whether or not a relation is a function. A relation is a function if and only if no vertical line intersects the graph of the relation more than once.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Vertical Line Test";
        }
    }

    return nullptr;
}

string _Trigonometry::Terms::ZeroProductProperty(string text)
{
    string model = "llama3";
    string definition = "If a and b are real numbers, then ab = 0 if and only if a = 0 or b = 0, or a and b = 0.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "Zero Product Property";
        }
    }

    return nullptr;
}
