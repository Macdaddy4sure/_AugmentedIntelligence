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
#include "Algebra.hpp"
#include "CollegeAlgebra.hpp"
#include "Geometry.hpp"
#include "Mathematics.hpp"
#include "Large Language Models.hpp"
#include "Parsers.hpp"
#include "Utilities.hpp"

using namespace std;

// What is the next step in solving the following problem...?

string* AlgebraicClassification(string text)
{
    string* temp = new string[10];
    return temp;
}

string _Algebra::Terms::AbsoluteValue(string text)
{
    string model = "llama3";
    string definition = "The distance a number is from 0.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "absolute value";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Algebra(string text)
{
    string model = "llama3";
    string definition = "The study of mathematical symbols and the rules for manipulating those symbols.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "algebra";
        }
    }

    return nullptr;
}

string _Algebra::Terms::AlgebraGrid(string text)
{
    string model = "llama3";
    string definition = "A grid used to illustrate values of algebraic expressions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "algebra grid";
        }
    }

    return nullptr;
}

string _Algebra::Terms::ArithmeticSequence(string text)
{
    string model = "llama3";
    string definition = "A sequence of numbers in which each number can be computed by adding the same amount to the previous number.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "arithmetic sequence";
        }
    }

    return nullptr;
}

string _Algebra::Terms::AssociativeLawOfAddition(string text)
{
    string model = "llama3";
    string definition = "For any three numbers a, b, and c, it is always true that (a+b)+c=a+(b+c).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "associative law of addition";
        }
    }

    return nullptr;
}

string _Algebra::Terms::AssociativeLawOfMultiplication(string text)
{
    string model = "llama3";
    string definition = "For any three numbers a, b, and c, it is always true that (a(b))(c)=a(b(c)).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "associative law of multiplication";
        }
    }

    return nullptr;
}

string _Algebra::Terms::AxisOfSymmetry(string text)
{
    string model = "llama3";
    string definition = "A line that you can flip (or reflect) a graph across that results in the same graph.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "axis of symmetry";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Base(string text)
{
    string model = "llama3";
    string definition = "A number that is raised to a power.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "base";
        }
    }

    return nullptr;
}

string _Algebra::Terms::BestFitLine(string text)
{
    string model = "llama3";
    string definition = "When the points on a grid are not all on a straight line, but seem to have a somewhat linear pattern, you can find a line that is the “best fit” (closest) to the points.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "best fit line";
        }
    }

    return nullptr;
}

string _Algebra::Terms::BoxPlot(string text)
{
    string model = "llama3";
    string definition = "A box with whiskers showing the median, quartiles, and extremes (least and greatest values) of a collection of data values.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "box plot";
        }
    }

    return nullptr;
}

string _Algebra::Terms::BreakEven(string text)
{
    string model = "llama3";
    string definition = "Have a profit of zero (that is, make exactly as much money as you spend).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "break even";
        }
    }

    return nullptr;
}

string _Algebra::Terms::CeilingFunction(string text)
{
    string model = "llama3";
    string definition = "ceiling(x) is the closest integer which is greater than or equal to x";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ceiling function";
        }
    }

    return nullptr;
}

string _Algebra::Terms::ClearingDenominators(string text)
{
    string model = "llama3";
    string definition = "Multiplying both sides of an equation by some nonzero number that turns all the fractions in the equation into integers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "clearing denominators";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Coefficient(string text)
{
    string model = "llama3";
    string definition = "A constant that a variable or expression is multiplied by.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "coefficient";
        }
    }

    return nullptr;
}

string _Algebra::Terms::CombineLikeTerms(string text)
{
    string model = "llama3";
    string definition = "Using the distributive law to add any two multiples of an expression such as x. For example, you can simplify 4x+5x into 9x.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "combine like terms";
        }
    }

    return nullptr;
}

string _Algebra::Terms::CommonDifference(string text)
{
    string model = "llama3";
    string definition = "In an arithmetic sequence, the amount that can be added to each number to get the next one.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "common difference";
        }
    }

    return nullptr;
}

string _Algebra::Terms::CommonRatio(string text)
{
    string model = "llama3";
    string definition = "In a geometric sequence, the amount that each number can be multiplied by to get the next number.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "common ratio";
        }
    }

    return nullptr;
}

string _Algebra::Terms::CommunitiveLawOfAddition(string text)
{
    string model = "llama3";
    string definition = "For any two numbers a and b, a+b=b+a.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "communitive lawe of addition";
        }
    }

    return nullptr;
}

string _Algebra::Terms::CommunitiveLawOfMultiplication(string text)
{
    string model = "llama3";
    string definition = "For two numbers a and b, a(b)=b(a).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "communitive law of multiplication";
        }
    }

    return nullptr;
}

string _Algebra::Terms::CompletingTheSquare(string text)
{
    string model = "llama3";
    string definition = "Rewriting the equation x2+2mx=n as (x+m)2=n+m2 so that it can be more easily solved.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "completing the square";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Composition(string text)
{
    string model = "llama3";
    string definition = "The composition of two functions f and g is the function f∘g that transforms x into f(g(x)).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "composition";
        }
    }

    return nullptr;
}

string _Algebra::Terms::ConditionalRelativeFrequency(string text)
{
    string model = "llama3";
    string definition = "A joint frequency divided by the total of its row or column in a two-way frequency table.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "conditional relative frequency";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Constant(string text)
{
    string model = "llama3";
    string definition = "A single fixed number (unlike a variable, whose value can vary).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "constant";
        }
    }

    return nullptr;
}

string _Algebra::Terms::ConstantCoefficient(string text)
{
    string model = "llama3";
    string definition = "A constant term, thought of as a coefficient of 1.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "constant coefficient";
        }
    }

    return nullptr;
}

string _Algebra::Terms::ConstantTerm(string text)
{
    string model = "llama3";
    string definition = "A term that is a constant. For a polynomial in x, it’s the term without an x.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "constant term";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Coordinates(string text)
{
    string model = "llama3";
    string definition = "A point on a 2-dimensional plane is described by a pair (x,y). The coordinate x is given by the labels below the grid, and the coordinate y is given by the labels to the left of the grid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "coordinates";
        }
    }

    return nullptr;
}

string _Algebra::Terms::CoordinatePlane(string text)
{
    string model = "llama3";
    string definition = "A 2-dimensional flat surface used for plotting points, lines, curves, and regions. It contains an x and a y axis which intersect at the origin.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "coordinate plane";
        }
    }

    return nullptr;
}

string _Algebra::Terms::CoordinateGrid(string text)
{
    string model = "llama3";
    string definition = "A grid of lines on a coordinate plane that makes it easy to see (x,y) coordinates of locations in that plane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "coordinate grid";
        }
    }

    return nullptr;
}

string _Algebra::Terms::CorrelationCoefficient(string text)
{
    string model = "llama3";
    string definition = "a numerical value that measures the strength and direction of a linear relationship between two variables.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "correlation coefficient";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Cost(string text)
{
    string model = "llama3";
    string definition = "In economics, how much money a company spends to produce a product.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "cost";
        }
    }

    return nullptr;
}

string _Algebra::Terms::CubeRoot(string text)
{
    string model = "llama3";
    string definition = "The cube root of a, written 3sqrt(a), is the number whose cube is a. That is, (3sqrt(a))3=a.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "cube root";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Data(string text)
{
    string model = "llama3";
    string definition = "A collection of related measurements.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "data";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Decimal(string text)
{
    string model = "llama3";
    string definition = "A fractional quantity written with a decimal point (like 0.5).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "decimal";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Denominator(string text)
{
    string model = "llama3";
    string definition = "The bottom number or expression in a fraction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "denominator";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Difference(string text)
{
    string model = "llama3";
    string definition = "The distance between two quantities, or the answer to a subtraction problem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "difference";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Dialation(string text)
{
    string model = "llama3";
    string definition = "A dilation by a positive number r about a point A is a transformation that moves each other point B along the ray from A that passes through B, and multiplies distances from A by r. A is called the center of the dilation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "dialation";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Discriminant(string text)
{
    string model = "llama3";
    string definition = "The discriminant of the equation ax2+bx+c=0 is the quantity b2−4ac. A quadratic equation has two solutions if its discriminant is positive, one solution if its discriminant is zero, and no real solutions if its discriminant is negative.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "discriminant";
        }
    }

    return nullptr;
}

string _Algebra::Terms::DistributiveLawOfMultiplicationOverAddition(string text)
{
    string model = "llama3";
    string definition = "For any three numbers a, b, and c, a(b+c)=a(b)+a(c), and (b+c)(a)=b(a)+c(a).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "distributive law of multiplication over addition";
        }
    }

    return nullptr;
}

string _Algebra::Terms::DistributiveLawOfMultiplicationOverSubtraction(string text)
{
    string model = "llama3";
    string definition = "For any three numbers a, b, and c, a(b−c)=a(b)−a(c), and (b−c)(a)=b(a)−c(a).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "distributuve law of multiplication over subtraction";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Domain(string text)
{
    string model = "llama3";
    string definition = "The set of inputs (x-coordinates) of a relation or function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "domain";
        }
    }

    return nullptr;
}

string _Algebra::Terms::DotPlot(string text)
{
    string model = "llama3";
    string definition = "A diagram showing data values as dots above a number line.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "dot plot";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Equation(string text)
{
    string model = "llama3";
    string definition = "A mathematical sentence with an equals sign (like 3x+5=11).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "equation";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Equivalent(string text)
{
    string model = "llama3";
    string definition = "Two fractions are equivalent if they have the same numerical value. Two equations or inequalities are equivalent if they have the same solution set.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "equivalent";
        }
    }

    return nullptr;
}

string _Algebra::Terms::EvenFunction(string text)
{
    string model = "llama3";
    string definition = "A function f with f(x)=f(−x) for all x. f(x)=x^n is an even function if n is an even integer. A function is even if and only if its graph has the y-axis as an axis of symmetry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "even function";
        }
    }

    return nullptr;
}

string _Algebra::Terms::ExpandingAnExpression(string text)
{
    string model = "llama3";
    string definition = "Using the distributive law to turn expressions which need parentheses (like 3(x+2)) into expressions which do not (like 3x+6).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "expanding an expression";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Exponent(string text)
{
    string model = "llama3";
    string definition = "In a power, the number of times the base is multiplied by itself.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "exponent";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Exponential(string text)
{
    string model = "llama3";
    string definition = "Using exponents, especially using variables in exponents.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "exponential";
        }
    }

    return nullptr;
}

string _Algebra::Terms::ExponentialDecay(string text)
{
    string model = "llama3";
    string definition = "Decreasing toward 0 due to a variable in an exponent, such as in y=2^−x.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "exponential decay";
        }
    }

    return nullptr;
}

string _Algebra::Terms::ExponentialGrowth(string text)
{
    string model = "llama3";
    string definition = "Increasing rapidly due to a variable in an exponent, such as in y=2^x.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "exponential growth";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Expression(string text)
{
    string model = "llama3";
    string definition = "A combination of variables and numbers using arithmetic (like 6−x).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "expression";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Factor(string text)
{
    string model = "llama3";
    string definition = "An expression that is multiplied by another expression, or that can be multiplied by another expression to produce a specified result.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "factor";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Factoring(string text)
{
    string model = "llama3";
    string definition = "Rewriting an expression as a product.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "factoring";
        }
    }

    return nullptr;
}

string _Algebra::Terms::FibonacciSequence(string text)
{
    string model = "llama3";
    string definition = "The sequence 1, 1, 2, 3, 5, ... with remaining terms F(n) given by F(n)=F(n−1)+F(n−2) for n>2.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "fibonacci sequence";
        }
    }

    return nullptr;
}

string _Algebra::Terms::FirstQuartile(string text)
{
    string model = "llama3";
    string definition = "For n data values, the median of the n/2 smallest values if n is even, and of the n-1/2 smallest values if n is odd.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "first quartile";
        }
    }

    return nullptr;
}

string _Algebra::Terms::FloorFunction(string text)
{
    string model = "llama3";
    string definition = "floor(x) is the closest integer which is less than or equal to x.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "floor function";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Formula(string text)
{
    string model = "llama3";
    string definition = "An expression that is used to compute a value.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "formula";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Fraction(string text)
{
    string model = "llama3";
    string definition = "A numerator divided by a denominator (like 1/2) Usually we require the numerator and denominator to both be integers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "fraction";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Frequency(string text)
{
    string model = "llama3";
    string definition = "In statistics, the number of times something occurs, or is observed.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "frequency";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Function(string text)
{
    string model = "llama3";
    string definition = "A relation in which no x-coordinate appears in more than one (x,y) ordered pair. This means you can think of a function as a transformation that takes each x coordinate to its single corresponding y coordinate.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "function";
        }
    }

    return nullptr;
}

string _Algebra::Terms::FundamentalTheoremOfArithmetic(string text)
{
    string model = "llama3";
    string definition = "Any integer greater than 1 can be written as a product of prime numbers, ordered smallest to largest, in exactly one way.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "fundamental theorem of arithmetic";
        }
    }

    return nullptr;
}

string _Algebra::Terms::GeometricSequence(string text)
{
    string model = "llama3";
    string definition = "A sequence of numbers in which each number can be computed by multiplying the previous number by the same amount.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "geometric sequence";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Graph(string text)
{
    string model = "llama3";
    string definition = "An image formed by plotting the solutions to an equation or inequality, or some other set of pairs of numbers, on a coordinate plane. To graph an expression containing the variable x, set y equal to that expression.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "graph";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Histogram(string text)
{
    string model = "llama3";
    string definition = "Rectangles of equal width above a number line, where each rectangles’s height shows the number of data values in that portion of the number line.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "histogram";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Horizontal(string text)
{
    string model = "llama3";
    string definition = "Going from side to side, like the horizon.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "horizontal";
        }
    }

    return nullptr;
}

string _Algebra::Terms::ImproperFraction(string text)
{
    string model = "llama3";
    string definition = "A fraction in which the numerator is larger than the denominator";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "improper fraction";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Inequality(string text)
{
    string model = "llama3";
    string definition = "A mathematical sentence that uses one of the symbols <, > and less than and equal, and greater than and equal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "inequality";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Infinite(string text)
{
    string model = "llama3";
    string definition = "More than any finite (real) number.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "infinite";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Input(string text)
{
    string model = "llama3";
    string definition = "A number that can be put into a relation to produce one or more outputs. If a relation is given by a two column table of rows (x,y), you look up the input x value in the first column, and the output(s) are given by the y values in those matching row(s).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "input";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Integer(string text)
{
    string model = "llama3";
    string definition = "A whole number or the negative of a whole number. For instance, 37 and 0 and −5 are integers";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "integer";
        }
    }

    return nullptr;
}

string _Algebra::Terms::InterquartileRange(string text)
{
    string model = "llama3";
    string definition = "The third quartile minus the first quartile.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "interquartile range";
        }
    }

    return nullptr;
}

string _Algebra::Terms::InverseFunctions(string text)
{
    string model = "llama3";
    string definition = "Functions f and g such that g∘f(x)=x for every x in the domain of f, and f 'of' g(y)=y for every y in the domain of g.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "inverse function";
        }
    }

    return nullptr;
}

string _Algebra::Terms::IrrationalNumber(string text)
{
    string model = "llama3";
    string definition = "A number that cannot be written as a fraction";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "irrational number";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Isolate(string text)
{
    string model = "llama3";
    string definition = "Make a variable appear alone on one side of an equation or inequality, and not occur in the other side of the equation or inequality.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "isolate";
        }
    }

    return nullptr;
}

string _Algebra::Terms::JointFrequency(string text)
{
    string model = "llama3";
    string definition = "The number of events that satisfy both of two specified criteria.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "joint frequency";
        }
    }

    return nullptr;
}

string _Algebra::Terms::JointRelativeFrequency(string text)
{
    string model = "llama3";
    string definition = "A joint frequency divided by the total number of events.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "joint relative frequency";
        }
    }

    return nullptr;
}

string _Algebra::Terms::LawsOfExponents(string text)
{
    string model = "llama3";
    string definition = "a^(c+d)=a^ca^d, (ab)^d = a^db^d, and (a^c)^d = a^cd. These are always true when c and d are positive integers.If a and b are nonzero, then they are true for any integers c and d, as is a^(c−d) = a^c a. If a and b are positive, then all four laws are true for any c and d.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "laws of exponents";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Linear(string text)
{
    string model = "llama3";
    string definition = "A straight line, or an equation or expression whose graph is a straight line. If m and b are constants, then mx+b is a linear expression, and a function f defined by f(x)=mx+b is a linear function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "linear";
        }
    }

    return nullptr;
}

string _Algebra::Terms::LinearCoefficient(string text)
{
    string model = "llama3";
    string definition = "For a polynomial in x, the number that x (without an exponent) is multiplied by.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "linear coefficient";
        }
    }

    return nullptr;
}

string _Algebra::Terms::LinearModel(string text)
{
    string model = "llama3";
    string definition = "An estimate for a variable using a linear expression in another variable.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "linear model";
        }
    }

    return nullptr;
}

string _Algebra::Terms::LinearOptimization(string text)
{
    string model = "llama3";
    string definition = "Maximizing or minimizing a linear goal or cost expression, while remaining within some constraints given by linear inequalities.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "linear optimization";
        }
    }

    return nullptr;
}

string _Algebra::Terms::MarginalFrequency(string text)
{
    string model = "llama3";
    string definition = "The total of a row or column in a two-way frequency table.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "marginal frequency";
        }
    }

    return nullptr;
}

string _Algebra::Terms::MarginalRelativeFrequency(string text)
{
    string model = "llama3";
    string definition = "A marginal frequency divided by the total number of events.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "marginal relative frequency";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Mean(string text)
{
    string model = "llama3";
    string definition = "The average of a collection of data values. This can be computed by adding all the values and then dividing by the number of values.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "mean";
        }
    }

    return nullptr;
}

string _Algebra::Terms::MeanAbsoluteDeviation(string text)
{
    string model = "llama3";
    string definition = "The mean distance of data values from some central value, such as the mean, median, or mode of the collection. In other words, the mean of |x−m| where x is each data value and m is the mean, median, or mode of all the data values.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "mean absolute deviation";
        }
    }

    return nullptr;
}

string _Algebra::Terms::MeanSquaredDeviation(string text)
{
    string model = "llama3";
    string definition = "The mean squared distance of data values from some central value, such as the mean, median, or mode of the collection. In other words, the mean of (x−m)^2 where x is each data value and m is the mean, median, or mode of all the data values.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "mean squared deviation";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Median(string text)
{
    string model = "llama3";
    string definition = "The middle number in an ordered list of data values. If there are an even number of values, the median is halfway between the two middle numbers in the list.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "median";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Mode(string text)
{
    string model = "llama3";
    string definition = "The most common value in a collection, or modes if more than one are tied.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "mode";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Monic(string text)
{
    string model = "llama3";
    string definition = "A polynomial whose leading (first) coefficient is 1.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "monic";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Monomial(string text)
{
    string model = "llama3";
    string definition = "A product of variables and numbers, like 3x or 5x^2. A monomial is also sometimes called a term.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "monimial";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Negate(string text)
{
    string model = "llama3";
    string definition = "Take the opposite of a number, by multiplying it by −1.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "negate";
        }
    }

    return nullptr;
}

string _Algebra::Terms::NegativeNumber(string text)
{
    string model = "llama3";
    string definition = "A value less than zero (like −3).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "negative number";
        }
    }

    return nullptr;
}

string _Algebra::Terms::NthRoot(string text)
{
    string model = "llama3";
    string definition = "An nth root of a is a number b whose nth power is a.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "nth root";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Numerator(string text)
{
    string model = "llama3";
    string definition = "The top number or expression in a fraction.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "numerator";
        }
    }

    return nullptr;
}

string _Algebra::Terms::OddFunction(string text)
{
    string model = "llama3";
    string definition = "A function f with −f(x)=f(−x) for all x. f(x)=x^n is an odd function if n is an odd integer. A function is odd if and only if its graph has the point (0,0) as a point of symmetry.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "odd function";
        }
    }

    return nullptr;
}

string _Algebra::Terms::OneToOne(string text)
{
    string model = "llama3";
    string definition = "A function f for which f(x) has a different value for every distinct (different) value of x.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "one to one";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Origin(string text)
{
    string model = "llama3";
    string definition = "The point on a coordinate plane where the x-axis and y-axis intersect. It is represented by the coordinates (0,0).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "origin";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Outlier(string text)
{
    string model = "llama3";
    string definition = "A value that “lies outside” (is much smaller or larger than) most of the other values in a collection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "outlier";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Output(string text)
{
    string model = "llama3";
    string definition = "A number produced by applying a relation or function to an input.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "output";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Parabola(string text)
{
    string model = "llama3";
    string definition = "The shape of the graph of y=x^2.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "parabola";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Parallel(string text)
{
    string model = "llama3";
    string definition = "Two lines are parallel if they always have the same distance between them, so they never intersect. If two lines are parallel, they have the same slope.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "parallel";
        }
    }

    return nullptr;
}

string _Algebra::Terms::PerfectSquare(string text)
{
    string model = "llama3";
    string definition = "A number that is the square of a rational number.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "perfect square";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Period(string text)
{
    string model = "llama3";
    string definition = " For a periodic function, the amount of time before it repeats. That is, if f is a periodic function, its period is the smallest possible positive h where f(x+h)=f(x) for every x.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "period";
        }
    }

    return nullptr;
}

string _Algebra::Terms::PeriodicFunction(string text)
{
    string model = "llama3";
    string definition = "A function that repeats after a certain period h with h>0, so that f(x+h)=f(x) for every x.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "periodic function";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Perpendicular(string text)
{
    string model = "llama3";
    string definition = "Two lines are perpendicular if they create a 90-degree angle. If two lines are perpendicular and the slope of one of them is m, then the slope of the other line is − 1/m.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "perpendicular";
        }
    }

    return nullptr;
}

string _Algebra::Terms::PiecewiseDefinedFunction(string text)
{
    string model = "llama3";
    string definition = "A function that is defined by different formulas at different inputs.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "piecewise defined function";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Point(string text)
{
    string model = "llama3";
    string definition = "A location in the coordinate plane. A point has coordinates (x,y), where x is given by the labels below a coordinate grid, and y is given by the labels to the left of a coordinate grid.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "point";
        }
    }

    return nullptr;
}

string _Algebra::Terms::PointOfSymmetry(string text)
{
    string model = "llama3";
    string definition = "A point that you can rotate a graph around by 180 degrees that results in the same graph.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "point of symmetry";
        }
    }

    return nullptr;
}

string _Algebra::Terms::PointSlopeForm(string text)
{
    string model = "llama3";
    string definition = "If a line contains the point (x1,y1) and has slope m, then its equation can be written as y−y1=m(x−x1). An equation in the form y−y1=m(x−x1) is said to be in point-slope form.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "point slope form";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Polynomial(string text)
{
    string model = "llama3";
    string definition = "A sum of monomials. Usually terms with higher powers are written first.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "polynomial";
        }
    }

    return nullptr;
}

string _Algebra::Terms::PositiveNumber(string text)
{
    string model = "llama3";
    string definition = "A value greater than zero (like 3).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "positive number";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Power(string text)
{
    string model = "llama3";
    string definition = "An expression of the form a^d. a is called the base, d is called the exponent, and ad is called the dth power of a. If d is a positive integer, ad means a multiplied by itself d times.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "power";
        }
    }

    return nullptr;
}

string _Algebra::Terms::PrimeNumber(string text)
{
    string model = "llama3";
    string definition = "An integer greater than 1 that can only be written as a product of two whole numbers in one way: as itself multiplied by 1.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "prime number";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Product(string text)
{
    string model = "llama3";
    string definition = "The answer to a multiplication problem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "product";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Profit(string text)
{
    string model = "llama3";
    string definition = "Revenue minus cost.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "profit";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Quadrant(string text)
{
    string model = "llama3";
    string definition = "Each of the four sections of a coordinate plane made by the intersecting x- and y-axes. The four quadrants are labeled I, II, III, and IV, counterclockwise from the top right.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "quadrant";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Quadratic(string text)
{
    string model = "llama3";
    string definition = "An expression or equation in which the highest power of a variable has exponent 2.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "quadratic";
        }
    }

    return nullptr;
}

string _Algebra::Terms::QuadraticCoefficient(string text)
{
    string model = "llama3";
    string definition = "For a polynomial in x, the number that x^2 is multiplied by.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "quadratic coefficient";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Quartiles(string text)
{
    string model = "llama3";
    string definition = "The first quartile, median, and third quartile are values which divide a data collection into four roughly equal parts.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "quartiles";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Quotient(string text)
{
    string model = "llama3";
    string definition = "The answer to a division problem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "quotient";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Range(string text)
{
    string model = "llama3";
    string definition = "The set of outputs (y-coordinates) of a relation or function.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "range";
        }
    }

    return nullptr;
}

string _Algebra::Terms::RateOfChange(string text)
{
    string model = "llama3";
    string definition = "The speed at which a variable changes over a period of time. This is given by the change in the variable divided by the change in (amount of) time.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "rate of change";
        }
    }

    return nullptr;
}

string _Algebra::Terms::RationalNumber(string text)
{
    string model = "llama3";
    string definition = "A number that can be written as a fraction m/n where m and n are integers.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "rational number";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Reflection(string text)
{
    string model = "llama3";
    string definition = "Rigid motion across a fixed line AB in a plane, like a mirror image.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "reflection";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Relation(string text)
{
    string model = "llama3";
    string definition = "A set of ordered pairs (x,y).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "relation";
        }
    }

    return nullptr;
}

string _Algebra::Terms::RelativeFrequency(string text)
{
    string model = "llama3";
    string definition = "A frequency divided by the total number of events, often expressed as a percentage.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "relative frequency";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Residual(string text)
{
    string model = "llama3";
    string definition = "An observed value minus its estimated value.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "residual";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Restriction(string text)
{
    string model = "llama3";
    string definition = "A function g is a restriction of the function f if g(x)=f(x) for every x in the domain of g, but that domain may be smaller than the domain of f.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "restriction";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Revenue(string text)
{
    string model = "llama3";
    string definition = "How much money a company receives in sales.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "revenue";
        }
    }

    return nullptr;
}

string _Algebra::Terms::RigidMotion(string text)
{
    string model = "llama3";
    string definition = "A motion that preserves distances and angle measures, with no stretching, shrinking, or bending. A rigid motion in the plane is a sequence of one or more translations, rotations, and/or reflections.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "rigid motion";
        }
    }

    return nullptr;
}

string _Algebra::Terms::RootMeanSquareError(string text)
{
    string model = "llama3";
    string definition = "A number that tells you how far away a line or curve is from a set of points (a smaller number means the line is a better fit to the points). More precisely, it is the square root of the mean of the squared residuals (differences) between observed and estimated values.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "root mean square error";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Roots(string text)
{
    string model = "llama3";
    string definition = "The values of x where a polynomial is zero. These are the x-coordinates of the x-intercepts of the polynomial’s graph.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "roots";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Rotation(string text)
{
    string model = "llama3";
    string definition = "Rigid motion around a fixed center A, with turning but no reflection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "rotation";
        }
    }

    return nullptr;
}

string _Algebra::Terms::ScatterPlot(string text)
{
    string model = "llama3";
    string definition = "Dots in the coordinate plane representing pairs of linked measurements, such as heights and weights for a group of people.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "scatter plot";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Sequence(string text)
{
    string model = "llama3";
    string definition = "A list of numbers that may be generated by some rule.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "sequence";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Set(string text)
{
    string model = "llama3";
    string definition = "An unordered collection of numbers or other mathematical objects, without repetitions.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "set";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Similar(string text)
{
    string model = "llama3";
    string definition = "Two geometric figures are similar if they have the same shape but possibly different sizes, with corresponding lengths differing by a single common scale factor.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "similar";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Simplify(string text)
{
    string model = "llama3";
    string definition = "To rewrite an expression in a way that means the same thing but is simpler (or shorter). You can simplify 3x−x+6 into 2x+6.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "temp";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Slope(string text)
{
    string model = "llama3";
    string definition = "A number that measures how steep a line is. It shows the amount of change in the height of the line as you go 1 unit to the right. The slope of the line y=mx+b is m.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "slope";
        }
    }

    return nullptr;
}

string _Algebra::Terms::SlopeInterceptForm(string text)
{
    string model = "llama3";
    string definition = "The form y=mx+b for a linear equation, where m and b are constants. The numbers m and b give the slope and y-intercept of the line that is the graph of that equation.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "slope intercept form";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Solution(string text)
{
    string model = "llama3";
    string definition = "In an equation or inequality, a number that can be substituted for the variable to make that equation or inequality true. If the equation or inequality has more than one variable, a solution is a list of numbers that when substituted for the list of variables makes the equation or inequality true. For a system of more than one equation or inequality, a solution must make all of the equations or inequalities true. In chemistry, a solution is a liquid mixture.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "solution";
        }
    }

    return nullptr;
}

string _Algebra::Terms::SolutionSet(string text)
{
    string model = "llama3";
    string definition = "All solutions to an equation, inequality, or system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "solution set";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Solve(string text)
{
    string model = "llama3";
    string definition = "Find the solutions to an equation, inequality, or system.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "solve";
        }
    }

    return nullptr;
}

string _Algebra::Terms::SquareRoot(string text)
{
    string model = "llama3";
    string definition = "A square root of a is a number b whose square is a. That is, b^2=a. If b is a square root of a, then so is −b. If a≥0, the square root of a, written sqrt(a), is the square root of a that is positive or zero.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "square root";
        }
    }

    return nullptr;
}

string _Algebra::Terms::StandardDeviation(string text)
{
    string model = "llama3";
    string definition = "The square root of the variance.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "standard deviation";
        }
    }

    return nullptr;
}

string _Algebra::Terms::StandardForm(string text)
{
    string model = "llama3";
    string definition = "For a linear equation, the form Ax+By=C where A, B, and C are constants. For a quadratic equation, either the form y=ax^2+bx+c or ax^2+bx+c=0, where a, b, and c are constants.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "standard form";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Statistic(string text)
{
    string model = "llama3";
    string definition = "A number used to describe or summarize data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "statistic";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Statistics(string text)
{
    string model = "llama3";
    string definition = "The study of data, and the methods used to describe or summarize data.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "statistics";
        }
    }

    return nullptr;
}

string _Algebra::Terms::StepFunction(string text)
{
    string model = "llama3";
    string definition = "A piecewise-defined function where each piece’s formula is a constant (doesn’t change with x). A step function’s graph looks like stair steps.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "step function";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Substitution(string text)
{
    string model = "llama3";
    string definition = "In an expression or equation, eliminating a variable by replacing it with another expression that it is equal to.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "substitution";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Sum(string text)
{
    string model = "llama3";
    string definition = "The answer to an addition problem.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "sum";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Symmetry(string text)
{
    string model = "llama3";
    string definition = "Repeating pattern or shape.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "symmetry";
        }
    }

    return nullptr;
}

string _Algebra::Terms::System(string text)
{
    string model = "llama3";
    string definition = "For equations or inequalities, two or more equations or inequalities that are all required to be true.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "system";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Table(string text)
{
    string model = "llama3";
    string definition = "In mathematics, a rectangular arrangement of rows and columns.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "table";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Term(string text)
{
    string model = "llama3";
    string definition = "Element in a sum, difference, or sequence.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "term";
        }
    }

    return nullptr;
}

string _Algebra::Terms::QuadraticFormula(string text)
{
    string model = "llama3";
    string definition = "The formula x = -b +- sqrt(b^2-4ac)/2a , which gives the solutions to any equation in the form ax^2+bx+c=0 with a≠0. The equation has two solutions when b^2−4ac>0; it has one solution when b^2−4ac=0; and it has no real solutions when b^2−4ac<0.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "quadratic formula";
        }
    }

    return nullptr;
}

string _Algebra::Terms::ThirdQuartile(string text)
{
    string model = "llama3";
    string definition = "For n data values, the median of the n/2 argest values if n is even, and of the n−1/2 largest values if n is odd";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "third quartile";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Translation(string text)
{
    string model = "llama3";
    string definition = "Rigid motion by a constant distance in a single direction, with no rotation or reflection.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "translation";
        }
    }

    return nullptr;
}

string _Algebra::Terms::TwoWayFrequencyTable(string text)
{
    string model = "llama3";
    string definition = "For events that can be divided into categories two different ways, a table of joint frequencies, using rows of the table to group the events one way, and columns of the table to group the events the other way.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "two way frequency table";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Unit(string text)
{
    string model = "llama3";
    string definition = "A standard measurement, such as a meter or an hour.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "unit";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Value(string text)
{
    string model = "llama3";
    string definition = "A number that a variable or expression can equal.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "value";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Variable(string text)
{
    string model = "llama3";
    string definition = "A letter (like x) that we can use to mean different numbers at different times.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "variable";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Variance(string text)
{
    string model = "llama3";
    string definition = "The mean squared distance of data values from their mean m. This can be computed by adding (x−m)^2 for each data value x, and then dividing by the number of data values n. When measuring a sample from a population, for instance heights of people, the variance of the sample is usually different than the variance of the entire population. To estimate the population’s variance, it is usually better to divide by n−1 instead of n.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "variance";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Vertex(string text)
{
    string model = "llama3";
    string definition = "The point where a parabola crosses its axis of symmetry, or an end of a side of a polygon, or the corner point of an angle.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "vertex";
        }
    }

    return nullptr;
}

string _Algebra::Terms::VertexForm(string text)
{
    string model = "llama3";
    string definition = "A quadratic equation in the form y=a(x−h)^2+k.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "vertex form";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Vertical(string text)
{
    string model = "llama3";
    string definition = "Going up and down.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "vertical";
        }
    }

    return nullptr;
}

string _Algebra::Terms::WholeNumber(string text)
{
    string model = "llama3";
    string definition = "One of the numbers 0, 1, 2, 3, ... .";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "whole number";
        }
    }

    return nullptr;
}

string _Algebra::Terms::XAxis(string text)
{
    string model = "llama3";
    string definition = "The horizontal line running through the origin on a coordinate plane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "x axis";
        }
    }

    return nullptr;
}

string _Algebra::Terms::XCoordinate(string text)
{
    string model = "llama3";
    string definition = "The horizontal value in a coordinate pair. It tells how far to the left or right the point is. The x-coordinate is always written first in the coordinate pair.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "x coordinate";
        }
    }

    return nullptr;
}

string _Algebra::Terms::XIntercept(string text)
{
    string model = "llama3";
    string definition = "A point where a curve meets the horizontal axis (the x-axis).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "x intercept";
        }
    }

    return nullptr;
}

string _Algebra::Terms::YAxis(string text)
{
    string model = "llama3";
    string definition = "The vertical line running through the origin on a coordinate plane.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "y axis";
        }
    }

    return nullptr;
}

string _Algebra::Terms::YCoordinate(string text)
{
    string model = "llama3";
    string definition = "The vertical value in a coordinate pair. It tells how far up or down the point is. The y-coordinate is always written last in the coordinate pair.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "y coordinate";
        }
    }

    return nullptr;
}

string _Algebra::Terms::YIntercept(string text)
{
    string model = "llama3";
    string definition = "A point where a line or curve meets the vertical axis (the y-axis). The y-intercept of the line y=mx+b is the point (0,b).";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "y intercept";
        }
    }

    return nullptr;
}

string _Algebra::Terms::Zeros(string text)
{
    string model = "llama3";
    string definition = "The values of x where an expression is zero. These are the x-coordinates of the x-intercepts of the expression’s graph. For a polynomial expression, these are usually called roots.";
    string prompt = "Check if the following text matches the following definition and limit the response to yes or no: " + definition + " " + text;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "zeros";
        }
    }

    return nullptr;
}

string _Algebra::Definitions::AbsoluteValue()
{
    string definition = "The distance a number is from 0.";
    return definition;
}

string _Algebra::Definitions::Algebra()
{
    string definition = "The study of mathematical symbols and the rules for manipulating those symbols.";
    return definition;
}

string _Algebra::Definitions::AlgebraGrid()
{
    string definition = "A grid used to illustrate values of algebraic expressions.";
    return definition;
}

string _Algebra::Definitions::ArithmeticSequence()
{
    string definition = "A sequence of numbers in which each number can be computed by adding the same amount to the previous number.";
    return definition;
}

string _Algebra::Definitions::AssociativeLawOfAddition()
{
    string definition = "For any three numbers a, b, and c, it is always true that (a+b)+c=a+(b+c).";
    return definition;
}

string _Algebra::Definitions::AssociativeLawOfMultiplication()
{
    string definition = "For any three numbers a, b, and c, it is always true that (a(b))(c)=a(b(c)).";
    return definition;
}

string _Algebra::Definitions::AxisOfSymmetry()
{
    string definition = "A line that you can flip (or reflect) a graph across that results in the same graph.";
    return definition;
}

string _Algebra::Definitions::Base()
{
    string definition = "A number that is raised to a power.";
    return definition;
}

string _Algebra::Definitions::BestFitLine()
{
    string definition = "When the points on a grid are not all on a straight line, but seem to have a somewhat linear pattern, you can find a line that is the “best fit” (closest) to the points.";
    return definition;
}

string _Algebra::Definitions::BoxPlot()
{
    string definition = "A box with whiskers showing the median, quartiles, and extremes (least and greatest values) of a collection of data values.";
    return definition;
}

string _Algebra::Definitions::BreakEven()
{
    string definition = "Have a profit of zero (that is, make exactly as much money as you spend).";
    return definition;
}

string _Algebra::Definitions::CeilingFunction()
{
    string definition = "ceiling(x) is the closest integer which is greater than or equal to x";
    return definition;
}

string _Algebra::Definitions::ClearingDenominators()
{
    string definition = "Multiplying both sides of an equation by some nonzero number that turns all the fractions in the equation into integers.";
    return definition;
}

string _Algebra::Definitions::Coefficient()
{
    string definition = "A constant that a variable or expression is multiplied by.";
    return definition;
}

string _Algebra::Definitions::CombineLikeTerms()
{
    string definition = "Using the distributive law to add any two multiples of an expression such as x. For example, you can simplify 4x+5x into 9x.";
    return definition;
}

string _Algebra::Definitions::CommonDifference()
{
    string definition = "In an arithmetic sequence, the amount that can be added to each number to get the next one.";
    return definition;
}

string _Algebra::Definitions::CommonRatio()
{
    string definition = "In a geometric sequence, the amount that each number can be multiplied by to get the next number.";
    return definition;
}

string _Algebra::Definitions::CommunitiveLawOfAddition()
{
    string definition = "For any two numbers a and b, a+b=b+a.";
    return definition;
}

string _Algebra::Definitions::CommunitiveLawOfMultiplication()
{
    string definition = "For two numbers a and b, a(b)=b(a).";
    return definition;
}

string _Algebra::Definitions::CompletingTheSquare()
{
    string definition = "Rewriting the equation x2+2mx=n as (x+m)2=n+m2 so that it can be more easily solved.";
    return definition;
}

string _Algebra::Definitions::Composition()
{
    string definition = "The composition of two functions f and g is the function f∘g that transforms x into f(g(x)).";
    return definition;
}

string _Algebra::Definitions::ConditionalRelativeFrequency()
{
    string definition = "A joint frequency divided by the total of its row or column in a two-way frequency table.";
    return definition;
}

string _Algebra::Definitions::Constant()
{
    string definition = "A single fixed number (unlike a variable, whose value can vary).";
    return definition;
}

string _Algebra::Definitions::ConstantCoefficient()
{
    string definition = "A constant term, thought of as a coefficient of 1.";
    return definition;
}

string _Algebra::Definitions::ConstantTerm()
{
    string definition = "A term that is a constant. For a polynomial in x, it’s the term without an x.";
    return definition;
}

string _Algebra::Definitions::Coordinates()
{
    string definition = "A point on a 2-dimensional plane is described by a pair (x,y). The coordinate x is given by the labels below the grid, and the coordinate y is given by the labels to the left of the grid.";
    return definition;
}

string _Algebra::Definitions::CoordinatePlane()
{
    string definition = "A 2-dimensional flat surface used for plotting points, lines, curves, and regions. It contains an x and a y axis which intersect at the origin.";
    return definition;
}

string _Algebra::Definitions::CoordinateGrid()
{
    string definition = "A grid of lines on a coordinate plane that makes it easy to see (x,y) coordinates of locations in that plane.";
    return definition;
}

string _Algebra::Definitions::CorrelationCoefficient()
{
    string definition = "a numerical value that measures the strength and direction of a linear relationship between two variables.";
    return definition;
}

string _Algebra::Definitions::Cost()
{
    string definition = "In economics, how much money a company spends to produce a product.";
    return definition;
}

string _Algebra::Definitions::CubeRoot()
{
    string definition = "The cube root of a, written 3sqrt(a), is the number whose cube is a. That is, (3sqrt(a))3=a.";
    return definition;
}

string _Algebra::Definitions::Data()
{
    string definition = "A collection of related measurements.";
    return definition;
}

string _Algebra::Definitions::Decimal()
{
    string definition = "A fractional quantity written with a decimal point (like 0.5).";
    return definition;
}

string _Algebra::Definitions::Denominator()
{
    string definition = "The bottom number or expression in a fraction.";
    return definition;
}

string _Algebra::Definitions::Difference()
{
    string definition = "The distance between two quantities, or the answer to a subtraction problem.";
    return definition;
}

string _Algebra::Definitions::Dialation()
{
    string definition = "A dilation by a positive number r about a point A is a transformation that moves each other point B along the ray from A that passes through B, and multiplies distances from A by r. A is called the center of the dilation.";
    return definition;
}

string _Algebra::Definitions::Discriminant()
{
    string definition = "The discriminant of the equation ax2+bx+c=0 is the quantity b2−4ac. A quadratic equation has two solutions if its discriminant is positive, one solution if its discriminant is zero, and no real solutions if its discriminant is negative.";
    return definition;
}

string _Algebra::Definitions::DistributiveLawOfMultiplicationOverAddition()
{
    string definition = "For any three numbers a, b, and c, a(b+c)=a(b)+a(c), and (b+c)(a)=b(a)+c(a).";
    return definition;
}

string _Algebra::Definitions::DistributiveLawOfMultiplicationOverSubtraction()
{
    string definition = "For any three numbers a, b, and c, a(b−c)=a(b)−a(c), and (b−c)(a)=b(a)−c(a).";
    return definition;
}

string _Algebra::Definitions::Domain()
{
    string definition = "The set of inputs (x-coordinates) of a relation or function.";
    return definition;
}

string _Algebra::Definitions::DotPlot()
{
    string definition = "A diagram showing data values as dots above a number line.";
    return definition;
}

string _Algebra::Definitions::Equation()
{
    string definition = "A mathematical sentence with an equals sign (like 3x+5=11).";
    return definition;
}

string _Algebra::Definitions::Equivalent()
{
    string definition = "Two fractions are equivalent if they have the same numerical value. Two equations or inequalities are equivalent if they have the same solution set.";
    return definition;
}

string _Algebra::Definitions::EvenFunction()
{
    string definition = "A function f with f(x)=f(−x) for all x. f(x)=x^n is an even function if n is an even integer. A function is even if and only if its graph has the y-axis as an axis of symmetry.";
    return definition;
}

string _Algebra::Definitions::ExpandingAnExpression()
{
    string definition = "Using the distributive law to turn expressions which need parentheses (like 3(x+2)) into expressions which do not (like 3x+6).";
    return definition;
}

string _Algebra::Definitions::Exponent()
{
    string definition = "In a power, the number of times the base is multiplied by itself.";
    return definition;
}

string _Algebra::Definitions::Exponential()
{
    string definition = "Using exponents, especially using variables in exponents.";
    return definition;
}

string _Algebra::Definitions::ExponentialDecay()
{
    string definition = "Decreasing toward 0 due to a variable in an exponent, such as in y=2^−x.";
    return definition;
}

string _Algebra::Definitions::ExponentialGrowth()
{
    string definition = "Increasing rapidly due to a variable in an exponent, such as in y=2^x.";
    return definition;
}

string _Algebra::Definitions::Expression()
{
    string definition = "A combination of variables and numbers using arithmetic (like 6−x).";
    return definition;
}

string _Algebra::Definitions::Factor()
{
    string definition = "An expression that is multiplied by another expression, or that can be multiplied by another expression to produce a specified result.";
    return definition;
}

string _Algebra::Definitions::Factoring()
{
    string definition = "Rewriting an expression as a product.";
    return definition;
}

string _Algebra::Definitions::FibonacciSequence()
{
    string definition = "The sequence 1, 1, 2, 3, 5, ... with remaining terms F(n) given by F(n)=F(n−1)+F(n−2) for n>2.";
    return definition;
}

string _Algebra::Definitions::FirstQuartile()
{
    string definition = "For n data values, the median of the n/2 smallest values if n is even, and of the n-1/2 smallest values if n is odd.";
    return definition;
}

string _Algebra::Definitions::FloorFunction()
{
    string definition = "floor(x) is the closest integer which is less than or equal to x.";
    return definition;
}

string _Algebra::Definitions::Formula()
{
    string definition = "An expression that is used to compute a value.";
    return definition;
}

string _Algebra::Definitions::Fraction()
{
    string definition = "A numerator divided by a denominator (like 1/2) Usually we require the numerator and denominator to both be integers.";
    return definition;
}

string _Algebra::Definitions::Frequency()
{
    string definition = "In statistics, the number of times something occurs, or is observed.";
    return definition;
}

string _Algebra::Definitions::Function()
{
    string definition = "A relation in which no x-coordinate appears in more than one (x,y) ordered pair. This means you can think of a function as a transformation that takes each x coordinate to its single corresponding y coordinate.";
    return definition;
}

string _Algebra::Definitions::FundamentalTheoremOfArithmetic()
{
    string definition = "Any integer greater than 1 can be written as a product of prime numbers, ordered smallest to largest, in exactly one way.";
    return definition;
}

string _Algebra::Definitions::GeometricSequence()
{
    string definition = "A sequence of numbers in which each number can be computed by multiplying the previous number by the same amount.";
    return definition;
}

string _Algebra::Definitions::Graph()
{
    string definition = "An image formed by plotting the solutions to an equation or inequality, or some other set of pairs of numbers, on a coordinate plane. To graph an expression containing the variable x, set y equal to that expression.";
    return definition;
}

string _Algebra::Definitions::Histogram()
{
    string definition = "Rectangles of equal width above a number line, where each rectangles’s height shows the number of data values in that portion of the number line.";
    return definition;
}

string _Algebra::Definitions::Horizontal()
{
    string definition = "Going from side to side, like the horizon.";
    return definition;
}

string _Algebra::Definitions::ImproperFraction()
{
    string definition = "A fraction in which the numerator is larger than the denominator";
    return definition;
}

string _Algebra::Definitions::Inequality()
{
    string definition = "A mathematical sentence that uses one of the symbols <, > and less than and equal, and greater than and equal.";
    return definition;
}

string _Algebra::Definitions::Infinite()
{
    string definition = "More than any finite (real) number.";
    return definition;
}

string _Algebra::Definitions::Input()
{
    string definition = "A number that can be put into a relation to produce one or more outputs. If a relation is given by a two column table of rows (x,y), you look up the input x value in the first column, and the output(s) are given by the y values in those matching row(s).";
    return definition;
}

string _Algebra::Definitions::Integer()
{
    string definition = "A whole number or the negative of a whole number. For instance, 37 and 0 and −5 are integers";
    return definition;
}

string _Algebra::Definitions::InterquartileRange()
{
    string definition = "The third quartile minus the first quartile.";
    return definition;
}

string _Algebra::Definitions::InverseFunctions()
{
    string definition = "Functions f and g such that g∘f(x)=x for every x in the domain of f, and f 'of' g(y)=y for every y in the domain of g.";
    return definition;
}

string _Algebra::Definitions::IrrationalNumber()
{
    string definition = "A number that cannot be written as a fraction";
    return definition;
}

string _Algebra::Definitions::Isolate()
{
    string definition = "Make a variable appear alone on one side of an equation or inequality, and not occur in the other side of the equation or inequality.";
    return definition;
}

string _Algebra::Definitions::JointFrequency()
{
    string definition = "The number of events that satisfy both of two specified criteria.";
    return definition;
}

string _Algebra::Definitions::JointRelativeFrequency()
{
    string definition = "A joint frequency divided by the total number of events.";
    return definition;
}

string _Algebra::Definitions::LawsOfExponents()
{
    string definition = "a^(c+d)=a^ca^d, (ab)^d = a^db^d, and (a^c)^d = a^cd. These are always true when c and d are positive integers.If a and b are nonzero, then they are true for any integers c and d, as is a^(c−d) = a^c a. If a and b are positive, then all four laws are true for any c and d.";
    return definition;
}

string _Algebra::Definitions::Linear()
{
    string definition = "A straight line, or an equation or expression whose graph is a straight line. If m and b are constants, then mx+b is a linear expression, and a function f defined by f(x)=mx+b is a linear function.";
    return definition;
}

string _Algebra::Definitions::LinearCoefficient()
{
    string definition = "For a polynomial in x, the number that x (without an exponent) is multiplied by.";
    return definition;
}

string _Algebra::Definitions::LinearModel()
{
    string definition = "An estimate for a variable using a linear expression in another variable.";
    return definition;
}

string _Algebra::Definitions::LinearOptimization()
{
    string definition = "Maximizing or minimizing a linear goal or cost expression, while remaining within some constraints given by linear inequalities.";
    return definition;
}

string _Algebra::Definitions::MarginalFrequency()
{
    string definition = "The total of a row or column in a two-way frequency table.";
    return definition;
}

string _Algebra::Definitions::MarginalRelativeFrequency()
{
    string definition = "A marginal frequency divided by the total number of events.";
    return definition;
}

string _Algebra::Definitions::Mean()
{
    string definition = "The average of a collection of data values. This can be computed by adding all the values and then dividing by the number of values.";
    return definition;
}

string _Algebra::Definitions::MeanAbsoluteDeviation()
{
    string definition = "The mean distance of data values from some central value, such as the mean, median, or mode of the collection. In other words, the mean of |x−m| where x is each data value and m is the mean, median, or mode of all the data values.";
    return definition;
}

string _Algebra::Definitions::MeanSquaredDeviation()
{
    string definition = "The mean squared distance of data values from some central value, such as the mean, median, or mode of the collection. In other words, the mean of (x−m)^2 where x is each data value and m is the mean, median, or mode of all the data values.";
    return definition;
}

string _Algebra::Definitions::Median()
{
    string definition = "The middle number in an ordered list of data values. If there are an even number of values, the median is halfway between the two middle numbers in the list.";
    return definition;
}

string _Algebra::Definitions::Mode()
{
    string definition = "The most common value in a collection, or modes if more than one are tied.";
    return definition;
}

string _Algebra::Definitions::Monic()
{
    string definition = "A polynomial whose leading (first) coefficient is 1.";
    return definition;
}

string _Algebra::Definitions::Monomial()
{
    string definition = "A product of variables and numbers, like 3x or 5x^2. A monomial is also sometimes called a term.";
    return definition;
}

string _Algebra::Definitions::Negate()
{
    string definition = "Take the opposite of a number, by multiplying it by −1.";
    return definition;
}

string _Algebra::Definitions::NegativeNumber()
{
    string definition = "A value less than zero (like −3).";
    return definition;
}

string _Algebra::Definitions::NthRoot()
{
    string definition = "An nth root of a is a number b whose nth power is a.";
    return definition;
}

string _Algebra::Definitions::Numerator()
{
    string definition = "The top number or expression in a fraction.";
    return definition;
}

string _Algebra::Definitions::OddFunction()
{
    string definition = "A function f with −f(x)=f(−x) for all x. f(x)=x^n is an odd function if n is an odd integer. A function is odd if and only if its graph has the point (0,0) as a point of symmetry.";
    return definition;
}

string _Algebra::Definitions::OneToOne()
{
    string definition = "A function f for which f(x) has a different value for every distinct (different) value of x.";
    return definition;
}

string _Algebra::Definitions::Origin()
{
    string definition = "The point on a coordinate plane where the x-axis and y-axis intersect. It is represented by the coordinates (0,0).";
    return definition;
}

string _Algebra::Definitions::Outlier()
{
    string definition = "A value that “lies outside” (is much smaller or larger than) most of the other values in a collection.";
    return definition;
}

string _Algebra::Definitions::Output()
{
    string definition = "A number produced by applying a relation or function to an input.";
    return definition;
}

string _Algebra::Definitions::Parabola()
{
    string definition = "The shape of the graph of y=x^2.";
    return definition;
}

string _Algebra::Definitions::Parallel()
{
    string definition = "Two lines are parallel if they always have the same distance between them, so they never intersect. If two lines are parallel, they have the same slope.";
    return definition;
}

string _Algebra::Definitions::PerfectSquare()
{
    string definition = "A number that is the square of a rational number.";
    return definition;
}

string _Algebra::Definitions::Period()
{
    string definition = " For a periodic function, the amount of time before it repeats. That is, if f is a periodic function, its period is the smallest possible positive h where f(x+h)=f(x) for every x.";
    return definition;
}

string _Algebra::Definitions::PeriodicFunction()
{
    string definition = "A function that repeats after a certain period h with h>0, so that f(x+h)=f(x) for every x.";
    return definition;
}

string _Algebra::Definitions::Perpendicular()
{
    string definition = "Two lines are perpendicular if they create a 90-degree angle. If two lines are perpendicular and the slope of one of them is m, then the slope of the other line is − 1/m.";
    return definition;
}

string _Algebra::Definitions::PiecewiseDefinedFunction()
{
    string definition = "A function that is defined by different formulas at different inputs.";
    return definition;
}

string _Algebra::Definitions::Point()
{
    string definition = "A location in the coordinate plane. A point has coordinates (x,y), where x is given by the labels below a coordinate grid, and y is given by the labels to the left of a coordinate grid.";
    return definition;
}

string _Algebra::Definitions::PointOfSymmetry()
{
    string definition = "A point that you can rotate a graph around by 180 degrees that results in the same graph.";
    return definition;
}

string _Algebra::Definitions::PointSlopeForm()
{
    string definition = "If a line contains the point (x1,y1) and has slope m, then its equation can be written as y−y1=m(x−x1). An equation in the form y−y1=m(x−x1) is said to be in point-slope form.";
    return definition;
}

string _Algebra::Definitions::Polynomial()
{
    string definition = "A sum of monomials. Usually terms with higher powers are written first.";
    return definition;
}

string _Algebra::Definitions::PositiveNumber()
{
    string definition = "A value greater than zero (like 3).";
    return definition;
}

string _Algebra::Definitions::Power()
{
    string definition = "An expression of the form a^d. a is called the base, d is called the exponent, and ad is called the dth power of a. If d is a positive integer, ad means a multiplied by itself d times.";
    return definition;
}

string _Algebra::Definitions::PrimeNumber()
{
    string definition = "An integer greater than 1 that can only be written as a product of two whole numbers in one way: as itself multiplied by 1.";
    return definition;
}

string _Algebra::Definitions::Product()
{
    string definition = "The answer to a multiplication problem.";
    return definition;
}

string _Algebra::Definitions::Profit()
{
    string definition = "Revenue minus cost.";
    return definition;
}

string _Algebra::Definitions::Quadrant()
{
    string definition = "Each of the four sections of a coordinate plane made by the intersecting x- and y-axes. The four quadrants are labeled I, II, III, and IV, counterclockwise from the top right.";
    return definition;
}

string _Algebra::Definitions::Quadratic()
{
    string definition = "An expression or equation in which the highest power of a variable has exponent 2.";
    return definition;
}

string _Algebra::Definitions::QuadraticCoefficient()
{
    string definition = "For a polynomial in x, the number that x^2 is multiplied by.";
    return definition;
}

string _Algebra::Definitions::Quartiles()
{
    string definition = "The first quartile, median, and third quartile are values which divide a data collection into four roughly equal parts.";
    return definition;
}

string _Algebra::Definitions::Quotient()
{
    string definition = "The answer to a division problem.";
    return definition;
}

string _Algebra::Definitions::Range()
{
    string definition = "The set of outputs (y-coordinates) of a relation or function.";
    return definition;
}

string _Algebra::Definitions::RateOfChange()
{
    string definition = "The speed at which a variable changes over a period of time. This is given by the change in the variable divided by the change in (amount of) time.";
    return definition;
}

string _Algebra::Definitions::RationalNumber()
{
    string definition = "A number that can be written as a fraction m/n where m and n are integers.";
    return definition;
}

string _Algebra::Definitions::Reflection()
{
    string definition = "Rigid motion across a fixed line AB in a plane, like a mirror image.";
    return definition;
}

string _Algebra::Definitions::Relation()
{
    string definition = "A set of ordered pairs (x,y).";
    return definition;
}

string _Algebra::Definitions::RelativeFrequency()
{
    string definition = "A frequency divided by the total number of events, often expressed as a percentage.";
    return definition;
}

string _Algebra::Definitions::Residual()
{
    string definition = "An observed value minus its estimated value.";
    return definition;
}

string _Algebra::Definitions::Restriction()
{
    string definition = "A function g is a restriction of the function f if g(x)=f(x) for every x in the domain of g, but that domain may be smaller than the domain of f.";
    return definition;
}

string _Algebra::Definitions::Revenue()
{
    string definition = "How much money a company receives in sales.";
    return definition;
}

string _Algebra::Definitions::RigidMotion()
{
    string definition = "A motion that preserves distances and angle measures, with no stretching, shrinking, or bending. A rigid motion in the plane is a sequence of one or more translations, rotations, and/or reflections.";
    return definition;
}

string _Algebra::Definitions::RootMeanSquareError()
{
    string definition = "A number that tells you how far away a line or curve is from a set of points (a smaller number means the line is a better fit to the points). More precisely, it is the square root of the mean of the squared residuals (differences) between observed and estimated values.";
    return definition;
}

string _Algebra::Definitions::Roots()
{
    string definition = "The values of x where a polynomial is zero. These are the x-coordinates of the x-intercepts of the polynomial’s graph.";
    return definition;
}

string _Algebra::Definitions::Rotation()
{
    string definition = "Rigid motion around a fixed center A, with turning but no reflection.";
    return definition;
}

string _Algebra::Definitions::ScatterPlot()
{
    string definition = "Dots in the coordinate plane representing pairs of linked measurements, such as heights and weights for a group of people.";
    return definition;
}

string _Algebra::Definitions::Sequence()
{
    string definition = "A list of numbers that may be generated by some rule.";
    return definition;
}

string _Algebra::Definitions::Set()
{
    string definition = "An unordered collection of numbers or other mathematical objects, without repetitions.";
    return definition;
}

string _Algebra::Definitions::Similar()
{
    string definition = "Two geometric figures are similar if they have the same shape but possibly different sizes, with corresponding lengths differing by a single common scale factor.";
    return definition;
}

string _Algebra::Definitions::Simplify()
{
    string definition = "To rewrite an expression in a way that means the same thing but is simpler (or shorter). You can simplify 3x−x+6 into 2x+6.";
    return definition;
}

string _Algebra::Definitions::Slope()
{
    string definition = "A number that measures how steep a line is. It shows the amount of change in the height of the line as you go 1 unit to the right. The slope of the line y=mx+b is m.";
    return definition;
}

string _Algebra::Definitions::SlopeInterceptForm()
{
    string definition = "The form y=mx+b for a linear equation, where m and b are constants. The numbers m and b give the slope and y-intercept of the line that is the graph of that equation.";
    return definition;
}

string _Algebra::Definitions::Solution()
{
    string definition = "In an equation or inequality, a number that can be substituted for the variable to make that equation or inequality true. If the equation or inequality has more than one variable, a solution is a list of numbers that when substituted for the list of variables makes the equation or inequality true. For a system of more than one equation or inequality, a solution must make all of the equations or inequalities true. In chemistry, a solution is a liquid mixture.";
    return definition;
}

string _Algebra::Definitions::SolutionSet()
{
    string definition = "All solutions to an equation, inequality, or system.";
    return definition;
}

string _Algebra::Definitions::Solve()
{
    string definition = "Find the solutions to an equation, inequality, or system.";
    return definition;
}

string _Algebra::Definitions::SquareRoot()
{
    string definition = "A square root of a is a number b whose square is a. That is, b^2=a. If b is a square root of a, then so is −b. If a≥0, the square root of a, written sqrt(a), is the square root of a that is positive or zero.";
    return definition;
}

string _Algebra::Definitions::StandardDeviation()
{
    string definition = "The square root of the variance.";
    return definition;
}

string _Algebra::Definitions::StandardForm()
{
    string definition = "For a linear equation, the form Ax+By=C where A, B, and C are constants. For a quadratic equation, either the form y=ax^2+bx+c or ax^2+bx+c=0, where a, b, and c are constants.";
    return definition;
}

string _Algebra::Definitions::Statistic()
{
    string definition = "A number used to describe or summarize data.";
    return definition;
}

string _Algebra::Definitions::Statistics()
{
    string definition = "The study of data, and the methods used to describe or summarize data.";
    return definition;
}

string _Algebra::Definitions::StepFunction()
{
    string definition = "A piecewise-defined function where each piece’s formula is a constant (doesn’t change with x). A step function’s graph looks like stair steps.";
    return definition;
}

string _Algebra::Definitions::Substitution()
{
    string definition = "In an expression or equation, eliminating a variable by replacing it with another expression that it is equal to.";
    return definition;
}

string _Algebra::Definitions::Sum()
{
    string definition = "The answer to an addition problem.";
    return definition;
}

string _Algebra::Definitions::Symmetry()
{
    string definition = "Repeating pattern or shape.";
    return definition;
}

string _Algebra::Definitions::System()
{
    string definition = "For equations or inequalities, two or more equations or inequalities that are all required to be true.";
    return definition;
}

string _Algebra::Definitions::Table()
{
    string definition = "In mathematics, a rectangular arrangement of rows and columns.";
    return definition;
}

string _Algebra::Definitions::Term()
{
    string definition = "Element in a sum, difference, or sequence.";
    return definition;
}

string _Algebra::Definitions::QuadraticFormula()
{
    string definition = "The formula x = -b +- sqrt(b^2-4ac)/2a , which gives the solutions to any equation in the form ax^2+bx+c=0 with a≠0. The equation has two solutions when b^2−4ac>0";
    return definition;
}

string _Algebra::Definitions::ThirdQuartile()
{
    string definition = "For n data values, the median of the n/2 argest values if n is even, and of the n−1/2 largest values if n is odd";
    return definition;
}

string _Algebra::Definitions::Translation()
{
    string definition = "Rigid motion by a constant distance in a single direction, with no rotation or reflection.";
    return definition;
}

string _Algebra::Definitions::TwoWayFrequencyTable()
{
    string definition = "For events that can be divided into categories two different ways, a table of joint frequencies, using rows of the table to group the events one way, and columns of the table to group the events the other way.";
    return definition;
}

string _Algebra::Definitions::Unit()
{
    string definition = "A standard measurement, such as a meter or an hour.";
    return definition;
}

string _Algebra::Definitions::Value()
{
    string definition = "A number that a variable or expression can equal.";
    return definition;
}

string _Algebra::Definitions::Variable()
{
    string definition = "A letter (like x) that we can use to mean different numbers at different times.";
    return definition;
}

string _Algebra::Definitions::Variance()
{
    string definition = "The mean squared distance of data values from their mean m. This can be computed by adding (x−m)^2 for each data value x, and then dividing by the number of data values n. When measuring a sample from a population, for instance heights of people, the variance of the sample is usually different than the variance of the entire population. To estimate the population’s variance, it is usually better to divide by n−1 instead of n.";
    return definition;
}

string _Algebra::Definitions::Vertex()
{
    string definition = "The point where a parabola crosses its axis of symmetry, or an end of a side of a polygon, or the corner point of an angle.";
    return definition;
}

string _Algebra::Definitions::VertexForm()
{
    string definition = "A quadratic equation in the form y=a(x−h)^2+k.";
    return definition;
}

string _Algebra::Definitions::Vertical()
{
    string definition = "Going up and down.";
    return definition;
}

string _Algebra::Definitions::WholeNumber()
{
    string definition = "One of the numbers 0, 1, 2, 3, ... .";
    return definition;
}

string _Algebra::Definitions::XAxis()
{
    string definition = "The horizontal line running through the origin on a coordinate plane.";
    return definition;
}

string _Algebra::Definitions::XCoordinate()
{
    string definition = "The horizontal value in a coordinate pair. It tells how far to the left or right the point is. The x-coordinate is always written first in the coordinate pair.";
    return definition;
}

string _Algebra::Definitions::XIntercept()
{
    string definition = "A point where a curve meets the horizontal axis (the x-axis).";
    return definition;
}

string _Algebra::Definitions::YAxis()
{
    string definition = "The vertical line running through the origin on a coordinate plane.";
    return definition;
}

string _Algebra::Definitions::YCoordinate()
{
    string definition = "The vertical value in a coordinate pair. It tells how far up or down the point is. The y-coordinate is always written last in the coordinate pair.";
    return definition;
}

string _Algebra::Definitions::YIntercept()
{
    string definition = "A point where a line or curve meets the vertical axis (the y-axis). The y-intercept of the line y=mx+b is the point (0,b).";
    return definition;
}

string _Algebra::Definitions::Zeros()
{
    string definition = "The values of x where an expression is zero. These are the x-coordinates of the x-intercepts of the expression’s graph. For a polynomial expression, these are usually called roots.";
    return definition;
}

string _Algebra::Vision::AbsoluteValue(string image_location)
{
    string model = "image";
    string definition = "The distance a number is from 0.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "absolute value";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Algebra(string image_location)
{
    string model = "image";
    string definition = "The study of mathematical symbols and the rules for manipulating those symbols.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "algebra";
        }
    }

    return nullptr;
}

string _Algebra::Vision::AlgebraGrid(string image_location)
{
    string model = "image";
    string definition = "A grid used to illustrate values of algebraic expressions.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "algebra grid";
        }
    }

    return nullptr;
}

string _Algebra::Vision::ArithmeticSequence(string image_location)
{
    string model = "image";
    string definition = "A sequence of numbers in which each number can be computed by adding the same amount to the previous number.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "arithmetic sequence";
        }
    }

    return nullptr;
}

string _Algebra::Vision::AssociativeLawOfAddition(string image_location)
{
    string model = "image";
    string definition = "For any three numbers a, b, and c, it is always true that (a+b)+c=a+(b+c).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "associative law of addition";
        }
    }

    return nullptr;
}

string _Algebra::Vision::AssociativeLawOfMultiplication(string image_location)
{
    string model = "image";
    string definition = "For any three numbers a, b, and c, it is always true that (a(b))(c)=a(b(c)).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "associative law of multiplication";
        }
    }

    return nullptr;
}

string _Algebra::Vision::AxisOfSymmetry(string image_location)
{
    string model = "image";
    string definition = "A line that you can flip (or reflect) a graph across that results in the same graph.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "axis of symmetry";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Base(string image_location)
{
    string model = "image";
    string definition = "A number that is raised to a power.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "base";
        }
    }

    return nullptr;
}

string _Algebra::Vision::BestFitLine(string image_location)
{
    string model = "image";
    string definition = "When the points on a grid are not all on a straight line, but seem to have a somewhat linear pattern, you can find a line that is the “best fit” (closest) to the points.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "best fit line";
        }
    }

    return nullptr;
}

string _Algebra::Vision::BoxPlot(string image_location)
{
    string model = "image";
    string definition = "A box with whiskers showing the median, quartiles, and extremes (least and greatest values) of a collection of data values.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "box plot";
        }
    }

    return nullptr;
}

string _Algebra::Vision::BreakEven(string image_location)
{
    string model = "image";
    string definition = "Have a profit of zero (that is, make exactly as much money as you spend).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "break even";
        }
    }

    return nullptr;
}

string _Algebra::Vision::CeilingFunction(string image_location)
{
    string model = "image";
    string definition = "ceiling(x) is the closest integer which is greater than or equal to x";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "ceiling function";
        }
    }

    return nullptr;
}

string _Algebra::Vision::ClearingDenominators(string image_location)
{
    string model = "image";
    string definition = "Multiplying both sides of an equation by some nonzero number that turns all the fractions in the equation into integers.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "clearing denominators";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Coefficient(string image_location)
{
    string model = "image";
    string definition = "A constant that a variable or expression is multiplied by.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "coefficient";
        }
    }

    return nullptr;
}

string _Algebra::Vision::CombineLikeTerms(string image_location)
{
    string model = "image";
    string definition = "Using the distributive law to add any two multiples of an expression such as x. For example, you can simplify 4x+5x into 9x.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "combine like terms";
        }
    }

    return nullptr;
}

string _Algebra::Vision::CommonDifference(string image_location)
{
    string model = "image";
    string definition = "In an arithmetic sequence, the amount that can be added to each number to get the next one.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "common difference";
        }
    }

    return nullptr;
}

string _Algebra::Vision::CommonRatio(string image_location)
{
    string model = "image";
    string definition = "In a geometric sequence, the amount that each number can be multiplied by to get the next number.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "common ratio";
        }
    }

    return nullptr;
}

string _Algebra::Vision::CommunitiveLawOfAddition(string image_location)
{
    string model = "image";
    string definition = "For any two numbers a and b, a+b=b+a.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "communitive lawe of addition";
        }
    }

    return nullptr;
}

string _Algebra::Vision::CommunitiveLawOfMultiplication(string image_location)
{
    string model = "image";
    string definition = "For two numbers a and b, a(b)=b(a).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "communitive law of multiplication";
        }
    }

    return nullptr;
}

string _Algebra::Vision::CompletingTheSquare(string image_location)
{
    string model = "image";
    string definition = "Rewriting the equation x2+2mx=n as (x+m)2=n+m2 so that it can be more easily solved.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "completing the square";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Composition(string image_location)
{
    string model = "image";
    string definition = "The composition of two functions f and g is the function f∘g that transforms x into f(g(x)).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "composition";
        }
    }

    return nullptr;
}

string _Algebra::Vision::ConditionalRelativeFrequency(string image_location)
{
    string model = "image";
    string definition = "A joint frequency divided by the total of its row or column in a two-way frequency table.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "conditional relative frequency";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Constant(string image_location)
{
    string model = "image";
    string definition = "A single fixed number (unlike a variable, whose value can vary).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "constant";
        }
    }

    return nullptr;
}

string _Algebra::Vision::ConstantCoefficient(string image_location)
{
    string model = "image";
    string definition = "A constant term, thought of as a coefficient of 1.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "constant coefficient";
        }
    }

    return nullptr;
}

string _Algebra::Vision::ConstantTerm(string image_location)
{
    string model = "image";
    string definition = "A term that is a constant. For a polynomial in x, it’s the term without an x.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "constant term";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Coordinates(string image_location)
{
    string model = "image";
    string definition = "A point on a 2-dimensional plane is described by a pair (x,y). The coordinate x is given by the labels below the grid, and the coordinate y is given by the labels to the left of the grid.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "coordinates";
        }
    }

    return nullptr;
}

string _Algebra::Vision::CoordinatePlane(string image_location)
{
    string model = "image";
    string definition = "A 2-dimensional flat surface used for plotting points, lines, curves, and regions. It contains an x and a y axis which intersect at the origin.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "coordinate plane";
        }
    }

    return nullptr;
}

string _Algebra::Vision::CoordinateGrid(string image_location)
{
    string model = "image";
    string definition = "A grid of lines on a coordinate plane that makes it easy to see (x,y) coordinates of locations in that plane.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "coordinate grid";
        }
    }

    return nullptr;
}

string _Algebra::Vision::CorrelationCoefficient(string image_location)
{
    string model = "image";
    string definition = "a numerical value that measures the strength and direction of a linear relationship between two variables.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "correlation coefficient";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Cost(string image_location)
{
    string model = "image";
    string definition = "In economics, how much money a company spends to produce a product.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "cost";
        }
    }

    return nullptr;
}

string _Algebra::Vision::CubeRoot(string image_location)
{
    string model = "image";
    string definition = "The cube root of a, written 3sqrt(a), is the number whose cube is a. That is, (3sqrt(a))3=a.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "cube root";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Data(string image_location)
{
    string model = "image";
    string definition = "A collection of related measurements.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "data";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Decimal(string image_location)
{
    string model = "image";
    string definition = "A fractional quantity written with a decimal point (like 0.5).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "decimal";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Denominator(string image_location)
{
    string model = "image";
    string definition = "The bottom number or expression in a fraction.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "denominator";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Difference(string image_location)
{
    string model = "image";
    string definition = "The distance between two quantities, or the answer to a subtraction problem.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "difference";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Dialation(string image_location)
{
    string model = "image";
    string definition = "A dilation by a positive number r about a point A is a transformation that moves each other point B along the ray from A that passes through B, and multiplies distances from A by r. A is called the center of the dilation.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "dialation";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Discriminant(string image_location)
{
    string model = "image";
    string definition = "The discriminant of the equation ax2+bx+c=0 is the quantity b2−4ac. A quadratic equation has two solutions if its discriminant is positive, one solution if its discriminant is zero, and no real solutions if its discriminant is negative.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "discriminant";
        }
    }

    return nullptr;
}

string _Algebra::Vision::DistributiveLawOfMultiplicationOverAddition(string image_location)
{
    string model = "image";
    string definition = "For any three numbers a, b, and c, a(b+c)=a(b)+a(c), and (b+c)(a)=b(a)+c(a).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "distributive law of multiplication over addition";
        }
    }

    return nullptr;
}

string _Algebra::Vision::DistributiveLawOfMultiplicationOverSubtraction(string image_location)
{
    string model = "image";
    string definition = "For any three numbers a, b, and c, a(b−c)=a(b)−a(c), and (b−c)(a)=b(a)−c(a).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "distributuve law of multiplication over subtraction";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Domain(string image_location)
{
    string model = "image";
    string definition = "The set of inputs (x-coordinates) of a relation or function.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "domain";
        }
    }

    return nullptr;
}

string _Algebra::Vision::DotPlot(string image_location)
{
    string model = "image";
    string definition = "A diagram showing data values as dots above a number line.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "dot plot";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Equation(string image_location)
{
    string model = "image";
    string definition = "A mathematical sentence with an equals sign (like 3x+5=11).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "equation";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Equivalent(string image_location)
{
    string model = "image";
    string definition = "Two fractions are equivalent if they have the same numerical value. Two equations or inequalities are equivalent if they have the same solution set.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "equivalent";
        }
    }

    return nullptr;
}

string _Algebra::Vision::EvenFunction(string image_location)
{
    string model = "image";
    string definition = "A function f with f(x)=f(−x) for all x. f(x)=x^n is an even function if n is an even integer. A function is even if and only if its graph has the y-axis as an axis of symmetry.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "even function";
        }
    }

    return nullptr;
}

string _Algebra::Vision::ExpandingAnExpression(string image_location)
{
    string model = "image";
    string definition = "Using the distributive law to turn expressions which need parentheses (like 3(x+2)) into expressions which do not (like 3x+6).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "expanding an expression";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Exponent(string image_location)
{
    string model = "image";
    string definition = "In a power, the number of times the base is multiplied by itself.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "exponent";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Exponential(string image_location)
{
    string model = "image";
    string definition = "Using exponents, especially using variables in exponents.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "exponential";
        }
    }

    return nullptr;
}

string _Algebra::Vision::ExponentialDecay(string image_location)
{
    string model = "image";
    string definition = "Decreasing toward 0 due to a variable in an exponent, such as in y=2^−x.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "exponential decay";
        }
    }

    return nullptr;
}

string _Algebra::Vision::ExponentialGrowth(string image_location)
{
    string model = "image";
    string definition = "Increasing rapidly due to a variable in an exponent, such as in y=2^x.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "exponential growth";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Expression(string image_location)
{
    string model = "image";
    string definition = "A combination of variables and numbers using arithmetic (like 6−x).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "expression";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Factor(string image_location)
{
    string model = "image";
    string definition = "An expression that is multiplied by another expression, or that can be multiplied by another expression to produce a specified result.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "factor";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Factoring(string image_location)
{
    string model = "image";
    string definition = "Rewriting an expression as a product.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "factoring";
        }
    }

    return nullptr;
}

string _Algebra::Vision::FibonacciSequence(string image_location)
{
    string model = "image";
    string definition = "The sequence 1, 1, 2, 3, 5, ... with remaining terms F(n) given by F(n)=F(n−1)+F(n−2) for n>2.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "fibonacci sequence";
        }
    }

    return nullptr;
}

string _Algebra::Vision::FirstQuartile(string image_location)
{
    string model = "image";
    string definition = "For n data values, the median of the n/2 smallest values if n is even, and of the n-1/2 smallest values if n is odd.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "first quartile";
        }
    }

    return nullptr;
}

string _Algebra::Vision::FloorFunction(string image_location)
{
    string model = "image";
    string definition = "floor(x) is the closest integer which is less than or equal to x.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "floor function";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Formula(string image_location)
{
    string model = "image";
    string definition = "An expression that is used to compute a value.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "formula";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Fraction(string image_location)
{
    string model = "image";
    string definition = "A numerator divided by a denominator (like 1/2) Usually we require the numerator and denominator to both be integers.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "fraction";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Frequency(string image_location)
{
    string model = "image";
    string definition = "In statistics, the number of times something occurs, or is observed.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "frequency";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Function(string image_location)
{
    string model = "image";
    string definition = "A relation in which no x-coordinate appears in more than one (x,y) ordered pair. This means you can think of a function as a transformation that takes each x coordinate to its single corresponding y coordinate.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "function";
        }
    }

    return nullptr;
}

string _Algebra::Vision::FundamentalTheoremOfArithmetic(string image_location)
{
    string model = "image";
    string definition = "Any integer greater than 1 can be written as a product of prime numbers, ordered smallest to largest, in exactly one way.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "fundamental theorem of arithmetic";
        }
    }

    return nullptr;
}

string _Algebra::Vision::GeometricSequence(string image_location)
{
    string model = "image";
    string definition = "A sequence of numbers in which each number can be computed by multiplying the previous number by the same amount.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "geometric sequence";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Graph(string image_location)
{
    string model = "image";
    string definition = "An image formed by plotting the solutions to an equation or inequality, or some other set of pairs of numbers, on a coordinate plane. To graph an expression containing the variable x, set y equal to that expression.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "graph";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Histogram(string image_location)
{
    string model = "image";
    string definition = "Rectangles of equal width above a number line, where each rectangles’s height shows the number of data values in that portion of the number line.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "histogram";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Horizontal(string image_location)
{
    string model = "image";
    string definition = "Going from side to side, like the horizon.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "horizontal";
        }
    }

    return nullptr;
}

string _Algebra::Vision::ImproperFraction(string image_location)
{
    string model = "image";
    string definition = "A fraction in which the numerator is larger than the denominator";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "improper fraction";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Inequality(string image_location)
{
    string model = "image";
    string definition = "A mathematical sentence that uses one of the symbols <, > and less than and equal, and greater than and equal.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "inequality";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Infinite(string image_location)
{
    string model = "image";
    string definition = "More than any finite (real) number.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "infinite";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Input(string image_location)
{
    string model = "image";
    string definition = "A number that can be put into a relation to produce one or more outputs. If a relation is given by a two column table of rows (x,y), you look up the input x value in the first column, and the output(s) are given by the y values in those matching row(s).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "input";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Integer(string image_location)
{
    string model = "image";
    string definition = "A whole number or the negative of a whole number. For instance, 37 and 0 and −5 are integers";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "integer";
        }
    }

    return nullptr;
}

string _Algebra::Vision::InterquartileRange(string image_location)
{
    string model = "image";
    string definition = "The third quartile minus the first quartile.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "interquartile range";
        }
    }

    return nullptr;
}

string _Algebra::Vision::InverseFunctions(string image_location)
{
    string model = "image";
    string definition = "Functions f and g such that g∘f(x)=x for every x in the domain of f, and f 'of' g(y)=y for every y in the domain of g.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "inverse function";
        }
    }

    return nullptr;
}

string _Algebra::Vision::IrrationalNumber(string image_location)
{
    string model = "image";
    string definition = "A number that cannot be written as a fraction";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "irrational number";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Isolate(string image_location)
{
    string model = "image";
    string definition = "Make a variable appear alone on one side of an equation or inequality, and not occur in the other side of the equation or inequality.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "isolate";
        }
    }

    return nullptr;
}

string _Algebra::Vision::JointFrequency(string image_location)
{
    string model = "image";
    string definition = "The number of events that satisfy both of two specified criteria.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "joint frequency";
        }
    }

    return nullptr;
}

string _Algebra::Vision::JointRelativeFrequency(string image_location)
{
    string model = "image";
    string definition = "A joint frequency divided by the total number of events.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "joint relative frequency";
        }
    }

    return nullptr;
}

string _Algebra::Vision::LawsOfExponents(string image_location)
{
    string model = "image";
    string definition = "a^(c+d)=a^ca^d, (ab)^d = a^db^d, and (a^c)^d = a^cd. These are always true when c and d are positive integers.If a and b are nonzero, then they are true for any integers c and d, as is a^(c−d) = a^c a. If a and b are positive, then all four laws are true for any c and d.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "laws of exponents";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Linear(string image_location)
{
    string model = "image";
    string definition = "A straight line, or an equation or expression whose graph is a straight line. If m and b are constants, then mx+b is a linear expression, and a function f defined by f(x)=mx+b is a linear function.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "linear";
        }
    }

    return nullptr;
}

string _Algebra::Vision::LinearCoefficient(string image_location)
{
    string model = "image";
    string definition = "For a polynomial in x, the number that x (without an exponent) is multiplied by.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "linear coefficient";
        }
    }

    return nullptr;
}

string _Algebra::Vision::LinearModel(string image_location)
{
    string model = "image";
    string definition = "An estimate for a variable using a linear expression in another variable.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "linear model";
        }
    }

    return nullptr;
}

string _Algebra::Vision::LinearOptimization(string image_location)
{
    string model = "image";
    string definition = "Maximizing or minimizing a linear goal or cost expression, while remaining within some constraints given by linear inequalities.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "linear optimization";
        }
    }

    return nullptr;
}

string _Algebra::Vision::MarginalFrequency(string image_location)
{
    string model = "image";
    string definition = "The total of a row or column in a two-way frequency table.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "marginal frequency";
        }
    }

    return nullptr;
}

string _Algebra::Vision::MarginalRelativeFrequency(string image_location)
{
    string model = "image";
    string definition = "A marginal frequency divided by the total number of events.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "marginal relative frequency";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Mean(string image_location)
{
    string model = "image";
    string definition = "The average of a collection of data values. This can be computed by adding all the values and then dividing by the number of values.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "mean";
        }
    }

    return nullptr;
}

string _Algebra::Vision::MeanAbsoluteDeviation(string image_location)
{
    string model = "image";
    string definition = "The mean distance of data values from some central value, such as the mean, median, or mode of the collection. In other words, the mean of |x−m| where x is each data value and m is the mean, median, or mode of all the data values.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "mean absolute deviation";
        }
    }

    return nullptr;
}

string _Algebra::Vision::MeanSquaredDeviation(string image_location)
{
    string model = "image";
    string definition = "The mean squared distance of data values from some central value, such as the mean, median, or mode of the collection. In other words, the mean of (x−m)^2 where x is each data value and m is the mean, median, or mode of all the data values.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "mean squared deviation";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Median(string image_location)
{
    string model = "image";
    string definition = "The middle number in an ordered list of data values. If there are an even number of values, the median is halfway between the two middle numbers in the list.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "median";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Mode(string image_location)
{
    string model = "image";
    string definition = "The most common value in a collection, or modes if more than one are tied.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "mode";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Monic(string image_location)
{
    string model = "image";
    string definition = "A polynomial whose leading (first) coefficient is 1.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "monic";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Monomial(string image_location)
{
    string model = "image";
    string definition = "A product of variables and numbers, like 3x or 5x^2. A monomial is also sometimes called a term.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "monimial";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Negate(string image_location)
{
    string model = "image";
    string definition = "Take the opposite of a number, by multiplying it by −1.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "negate";
        }
    }

    return nullptr;
}

string _Algebra::Vision::NegativeNumber(string image_location)
{
    string model = "image";
    string definition = "A value less than zero (like −3).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "negative number";
        }
    }

    return nullptr;
}

string _Algebra::Vision::NthRoot(string image_location)
{
    string model = "image";
    string definition = "An nth root of a is a number b whose nth power is a.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "nth root";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Numerator(string image_location)
{
    string model = "image";
    string definition = "The top number or expression in a fraction.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "numerator";
        }
    }

    return nullptr;
}

string _Algebra::Vision::OddFunction(string image_location)
{
    string model = "image";
    string definition = "A function f with −f(x)=f(−x) for all x. f(x)=x^n is an odd function if n is an odd integer. A function is odd if and only if its graph has the point (0,0) as a point of symmetry.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "odd function";
        }
    }

    return nullptr;
}

string _Algebra::Vision::OneToOne(string image_location)
{
    string model = "image";
    string definition = "A function f for which f(x) has a different value for every distinct (different) value of x.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "one to one";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Origin(string image_location)
{
    string model = "image";
    string definition = "The point on a coordinate plane where the x-axis and y-axis intersect. It is represented by the coordinates (0,0).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "origin";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Outlier(string image_location)
{
    string model = "image";
    string definition = "A value that “lies outside” (is much smaller or larger than) most of the other values in a collection.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "outlier";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Output(string image_location)
{
    string model = "image";
    string definition = "A number produced by applying a relation or function to an input.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "output";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Parabola(string image_location)
{
    string model = "image";
    string definition = "The shape of the graph of y=x^2.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "parabola";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Parallel(string image_location)
{
    string model = "image";
    string definition = "Two lines are parallel if they always have the same distance between them, so they never intersect. If two lines are parallel, they have the same slope.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "parallel";
        }
    }

    return nullptr;
}

string _Algebra::Vision::PerfectSquare(string image_location)
{
    string model = "image";
    string definition = "A number that is the square of a rational number.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "perfect square";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Period(string image_location)
{
    string model = "image";
    string definition = " For a periodic function, the amount of time before it repeats. That is, if f is a periodic function, its period is the smallest possible positive h where f(x+h)=f(x) for every x.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "period";
        }
    }

    return nullptr;
}

string _Algebra::Vision::PeriodicFunction(string image_location)
{
    string model = "image";
    string definition = "A function that repeats after a certain period h with h>0, so that f(x+h)=f(x) for every x.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "periodic function";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Perpendicular(string image_location)
{
    string model = "image";
    string definition = "Two lines are perpendicular if they create a 90-degree angle. If two lines are perpendicular and the slope of one of them is m, then the slope of the other line is − 1/m.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "perpendicular";
        }
    }

    return nullptr;
}

string _Algebra::Vision::PiecewiseDefinedFunction(string image_location)
{
    string model = "image";
    string definition = "A function that is defined by different formulas at different inputs.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "piecewise defined function";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Point(string image_location)
{
    string model = "image";
    string definition = "A location in the coordinate plane. A point has coordinates (x,y), where x is given by the labels below a coordinate grid, and y is given by the labels to the left of a coordinate grid.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "point";
        }
    }

    return nullptr;
}

string _Algebra::Vision::PointOfSymmetry(string image_location)
{
    string model = "image";
    string definition = "A point that you can rotate a graph around by 180 degrees that results in the same graph.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "point of symmetry";
        }
    }

    return nullptr;
}

string _Algebra::Vision::PointSlopeForm(string image_location)
{
    string model = "image";
    string definition = "If a line contains the point (x1,y1) and has slope m, then its equation can be written as y−y1=m(x−x1). An equation in the form y−y1=m(x−x1) is said to be in point-slope form.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "point slope form";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Polynomial(string image_location)
{
    string model = "image";
    string definition = "A sum of monomials. Usually terms with higher powers are written first.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "polynomial";
        }
    }

    return nullptr;
}

string _Algebra::Vision::PositiveNumber(string image_location)
{
    string model = "image";
    string definition = "A value greater than zero (like 3).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "positive number";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Power(string image_location)
{
    string model = "image";
    string definition = "An expression of the form a^d. a is called the base, d is called the exponent, and ad is called the dth power of a. If d is a positive integer, ad means a multiplied by itself d times.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "power";
        }
    }

    return nullptr;
}

string _Algebra::Vision::PrimeNumber(string image_location)
{
    string model = "image";
    string definition = "An integer greater than 1 that can only be written as a product of two whole numbers in one way: as itself multiplied by 1.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "prime number";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Product(string image_location)
{
    string model = "image";
    string definition = "The answer to a multiplication problem.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "product";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Profit(string image_location)
{
    string model = "image";
    string definition = "Revenue minus cost.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "profit";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Quadrant(string image_location)
{
    string model = "image";
    string definition = "Each of the four sections of a coordinate plane made by the intersecting x- and y-axes. The four quadrants are labeled I, II, III, and IV, counterclockwise from the top right.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "quadrant";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Quadratic(string image_location)
{
    string model = "image";
    string definition = "An expression or equation in which the highest power of a variable has exponent 2.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "quadratic";
        }
    }

    return nullptr;
}

string _Algebra::Vision::QuadraticCoefficient(string image_location)
{
    string model = "image";
    string definition = "For a polynomial in x, the number that x^2 is multiplied by.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "quadratic coefficient";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Quartiles(string image_location)
{
    string model = "image";
    string definition = "The first quartile, median, and third quartile are values which divide a data collection into four roughly equal parts.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "quartiles";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Quotient(string image_location)
{
    string model = "image";
    string definition = "The answer to a di problem.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "quotient";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Range(string image_location)
{
    string model = "image";
    string definition = "The set of outputs (y-coordinates) of a relation or function.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "range";
        }
    }

    return nullptr;
}

string _Algebra::Vision::RateOfChange(string image_location)
{
    string model = "image";
    string definition = "The speed at which a variable changes over a period of time. This is given by the change in the variable divided by the change in (amount of) time.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "rate of change";
        }
    }

    return nullptr;
}

string _Algebra::Vision::RationalNumber(string image_location)
{
    string model = "image";
    string definition = "A number that can be written as a fraction m/n where m and n are integers.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "rational number";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Reflection(string image_location)
{
    string model = "image";
    string definition = "Rigid motion across a fixed line AB in a plane, like a mirror image.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "reflection";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Relation(string image_location)
{
    string model = "image";
    string definition = "A set of ordered pairs (x,y).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "relation";
        }
    }

    return nullptr;
}

string _Algebra::Vision::RelativeFrequency(string image_location)
{
    string model = "image";
    string definition = "A frequency divided by the total number of events, often expressed as a percentage.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "relative frequency";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Residual(string image_location)
{
    string model = "image";
    string definition = "An observed value minus its estimated value.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "residual";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Restriction(string image_location)
{
    string model = "image";
    string definition = "A function g is a restriction of the function f if g(x)=f(x) for every x in the domain of g, but that domain may be smaller than the domain of f.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "restriction";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Revenue(string image_location)
{
    string model = "image";
    string definition = "How much money a company receives in sales.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "revenue";
        }
    }

    return nullptr;
}

string _Algebra::Vision::RigidMotion(string image_location)
{
    string model = "image";
    string definition = "A motion that preserves distances and angle measures, with no stretching, shrinking, or bending. A rigid motion in the plane is a sequence of one or more translations, rotations, and/or reflections.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "rigid motion";
        }
    }

    return nullptr;
}

string _Algebra::Vision::RootMeanSquareError(string image_location)
{
    string model = "image";
    string definition = "A number that tells you how far away a line or curve is from a set of points (a smaller number means the line is a better fit to the points). More precisely, it is the square root of the mean of the squared residuals (differences) between observed and estimated values.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "root mean square error";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Roots(string image_location)
{
    string model = "image";
    string definition = "The values of x where a polynomial is zero. These are the x-coordinates of the x-intercepts of the polynomial’s graph.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "roots";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Rotation(string image_location)
{
    string model = "image";
    string definition = "Rigid motion around a fixed center A, with turning but no reflection.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "rotation";
        }
    }

    return nullptr;
}

string _Algebra::Vision::ScatterPlot(string image_location)
{
    string model = "image";
    string definition = "Dots in the coordinate plane representing pairs of linked measurements, such as heights and weights for a group of people.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "scatter plot";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Sequence(string image_location)
{
    string model = "image";
    string definition = "A list of numbers that may be generated by some rule.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "sequence";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Set(string image_location)
{
    string model = "image";
    string definition = "An unordered collection of numbers or other mathematical objects, without repetitions.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "set";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Similar(string image_location)
{
    string model = "image";
    string definition = "Two geometric figures are similar if they have the same shape but possibly different sizes, with corresponding lengths differing by a single common scale factor.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "similar";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Simplify(string image_location)
{
    string model = "image";
    string definition = "To rewrite an expression in a way that means the same thing but is simpler (or shorter). You can simplify 3x−x+6 into 2x+6.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "temp";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Slope(string image_location)
{
    string model = "image";
    string definition = "A number that measures how steep a line is. It shows the amount of change in the height of the line as you go 1 unit to the right. The slope of the line y=mx+b is m.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "slope";
        }
    }

    return nullptr;
}

string _Algebra::Vision::SlopeInterceptForm(string image_location)
{
    string model = "image";
    string definition = "The form y=mx+b for a linear equation, where m and b are constants. The numbers m and b give the slope and y-intercept of the line that is the graph of that equation.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "slope intercept form";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Solution(string image_location)
{
    string model = "image";
    string definition = "In an equation or inequality, a number that can be substituted for the variable to make that equation or inequality true. If the equation or inequality has more than one variable, a solution is a list of numbers that when substituted for the list of variables makes the equation or inequality true. For a system of more than one equation or inequality, a solution must make all of the equations or inequalities true. In chemistry, a solution is a liquid mixture.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "solution";
        }
    }

    return nullptr;
}

string _Algebra::Vision::SolutionSet(string image_location)
{
    string model = "image";
    string definition = "All solutions to an equation, inequality, or system.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "solution set";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Solve(string image_location)
{
    string model = "image";
    string definition = "Find the solutions to an equation, inequality, or system.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "solve";
        }
    }

    return nullptr;
}

string _Algebra::Vision::SquareRoot(string image_location)
{
    string model = "image";
    string definition = "A square root of a is a number b whose square is a. That is, b^2=a. If b is a square root of a, then so is −b. If a≥0, the square root of a, written sqrt(a), is the square root of a that is positive or zero.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "square root";
        }
    }

    return nullptr;
}

string _Algebra::Vision::StandardDeviation(string image_location)
{
    string model = "image";
    string definition = "The square root of the variance.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "standard deviation";
        }
    }

    return nullptr;
}

string _Algebra::Vision::StandardForm(string image_location)
{
    string model = "image";
    string definition = "For a linear equation, the form Ax+By=C where A, B, and C are constants. For a quadratic equation, either the form y=ax^2+bx+c or ax^2+bx+c=0, where a, b, and c are constants.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "standard form";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Statistic(string image_location)
{
    string model = "image";
    string definition = "A number used to describe or summarize data.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "statistic";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Statistics(string image_location)
{
    string model = "image";
    string definition = "The study of data, and the methods used to describe or summarize data.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "statistics";
        }
    }

    return nullptr;
}

string _Algebra::Vision::StepFunction(string image_location)
{
    string model = "image";
    string definition = "A piecewise-defined function where each piece’s formula is a constant (doesn’t change with x). A step function’s graph looks like stair steps.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "step function";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Substitution(string image_location)
{
    string model = "image";
    string definition = "In an expression or equation, eliminating a variable by replacing it with another expression that it is equal to.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "substitution";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Sum(string image_location)
{
    string model = "image";
    string definition = "The answer to an addition problem.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "sum";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Symmetry(string image_location)
{
    string model = "image";
    string definition = "Repeating pattern or shape.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "symmetry";
        }
    }

    return nullptr;
}

string _Algebra::Vision::System(string image_location)
{
    string model = "image";
    string definition = "For equations or inequalities, two or more equations or inequalities that are all required to be true.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "system";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Table(string image_location)
{
    string model = "image";
    string definition = "In mathematics, a rectangular arrangement of rows and columns.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "table";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Term(string image_location)
{
    string model = "image";
    string definition = "Element in a sum, difference, or sequence.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "term";
        }
    }

    return nullptr;
}

string _Algebra::Vision::QuadraticFormula(string image_location)
{
    string model = "image";
    string definition = "The formula x = -b +- sqrt(b^2-4ac)/2a , which gives the solutions to any equation in the form ax^2+bx+c=0 with a≠0. The equation has two solutions when b^2−4ac>0; it has one solution when b^2−4ac=0; and it has no real solutions when b^2−4ac<0.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "quadratic formula";
        }
    }

    return nullptr;
}

string _Algebra::Vision::ThirdQuartile(string image_location)
{
    string model = "image";
    string definition = "For n data values, the median of the n/2 argest values if n is even, and of the n−1/2 largest values if n is odd";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "third quartile";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Translation(string image_location)
{
    string model = "image";
    string definition = "Rigid motion by a constant distance in a single direction, with no rotation or reflection.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "translation";
        }
    }

    return nullptr;
}

string _Algebra::Vision::TwoWayFrequencyTable(string image_location)
{
    string model = "image";
    string definition = "For events that can be divided into categories two different ways, a table of joint frequencies, using rows of the table to group the events one way, and columns of the table to group the events the other way.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "two way frequency table";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Unit(string image_location)
{
    string model = "image";
    string definition = "A standard measurement, such as a meter or an hour.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "unit";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Value(string image_location)
{
    string model = "image";
    string definition = "A number that a variable or expression can equal.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "value";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Variable(string image_location)
{
    string model = "image";
    string definition = "A letter (like x) that we can use to mean different numbers at different times.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "variable";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Variance(string image_location)
{
    string model = "image";
    string definition = "The mean squared distance of data values from their mean m. This can be computed by adding (x−m)^2 for each data value x, and then dividing by the number of data values n. When measuring a sample from a population, for instance heights of people, the variance of the sample is usually different than the variance of the entire population. To estimate the population’s variance, it is usually better to divide by n−1 instead of n.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "variance";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Vertex(string image_location)
{
    string model = "image";
    string definition = "The point where a parabola crosses its axis of symmetry, or an end of a side of a polygon, or the corner point of an angle.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "vertex";
        }
    }

    return nullptr;
}

string _Algebra::Vision::VertexForm(string image_location)
{
    string model = "image";
    string definition = "A quadratic equation in the form y=a(x−h)^2+k.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "vertex form";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Vertical(string image_location)
{
    string model = "image";
    string definition = "Going up and down.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "vertical";
        }
    }

    return nullptr;
}

string _Algebra::Vision::WholeNumber(string image_location)
{
    string model = "image";
    string definition = "One of the numbers 0, 1, 2, 3, ... .";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "whole number";
        }
    }

    return nullptr;
}

string _Algebra::Vision::XAxis(string image_location)
{
    string model = "image";
    string definition = "The horizontal line running through the origin on a coordinate plane.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "x axis";
        }
    }

    return nullptr;
}

string _Algebra::Vision::XCoordinate(string image_location)
{
    string model = "image";
    string definition = "The horizontal value in a coordinate pair. It tells how far to the left or right the point is. The x-coordinate is always written first in the coordinate pair.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "x coordinate";
        }
    }

    return nullptr;
}

string _Algebra::Vision::XIntercept(string image_location)
{
    string model = "image";
    string definition = "A point where a curve meets the horizontal axis (the x-axis).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "x intercept";
        }
    }

    return nullptr;
}

string _Algebra::Vision::YAxis(string image_location)
{
    string model = "image";
    string definition = "The vertical line running through the origin on a coordinate plane.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "y axis";
        }
    }

    return nullptr;
}

string _Algebra::Vision::YCoordinate(string image_location)
{
    string model = "image";
    string definition = "The vertical value in a coordinate pair. It tells how far up or down the point is. The y-coordinate is always written last in the coordinate pair.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "y coordinate";
        }
    }

    return nullptr;
}

string _Algebra::Vision::YIntercept(string image_location)
{
    string model = "image";
    string definition = "A point where a line or curve meets the vertical axis (the y-axis). The y-intercept of the line y=mx+b is the point (0,b).";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "y intercept";
        }
    }

    return nullptr;
}

string _Algebra::Vision::Zeros(string image_location)
{
    string model = "image";
    string definition = "The values of x where an expression is zero. These are the x-coordinates of the x-intercepts of the expression’s graph. For a polynomial expression, these are usually called roots.";
    string prompt = "check if the following definition matches the image and limit the response to yes or no: " + definition;
    string response = _LLM::OllamaAPI(model, prompt, "NULL");
    response = _Parsers::LLM::LLama3Parse(response);
    string* words = _Utilities::String2Words(response);
    words = _Utilities::RemovePunctuationArr(words);
    words = _Utilities::ArrayOfStringsToLowercase(words);

    for (int x = 0; x < sizeof(words); x++)
    {
        if (words[x] == "yes")
        {
            return "zeros";
        }
    }

    return nullptr;
}

